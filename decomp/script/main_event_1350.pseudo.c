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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = IsLoadedLogoFade_()
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
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
// fun_0570
fun_0570() {
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
// fun_0630
fun_0630() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0678
// lab_0678
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06B8
    OP_JUMP lab_0728
// lab_06B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_06F8
    OP_JUMP lab_0728
// lab_06F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0678
// lab_0728
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0828
fun_0828() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0868
fun_0868() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08A0
fun_08A0() {
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
// fun_0918
fun_0918() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0970
fun_0970() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B8(var_8)
    OP_JZER lab_0A90
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15E8(var_24)
    OP_JNZ lab_0A90
    pri = 0;
    return pri;
// lab_0A90
    OP_JUMP lab_0AA0
// lab_0AA0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B00
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AA0
    pri = 0;
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BB8
fun_0BB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BF0
fun_0BF0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C38
    pri = 0;
    return pri;
// lab_0C38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C78
// lab_0C78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B8(var_8)
    OP_JNZ lab_0D00
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CF0
    pri = 0;
    return pri;
// lab_0D00
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D48
    pri = 0;
    return pri;
// lab_0D48
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F18(var_8)
    pri = 0;
    return pri;
// lab_0DA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C78
    pri = 0;
    return pri;
// lab_0CF0
    OP_JUMP lab_0D48
}
// fun_0DF0
fun_0DF0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E38
// lab_0E38
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E90
    pri = 0;
    return pri;
// lab_0E90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0ED0
    pri = 0;
    return pri;
// lab_0ED0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E38
    pri = 0;
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0FA0
    pri = 0;
    return pri;
// lab_0FA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B8(var_8)
    OP_JZER lab_10D0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF8
    OP_ZERO_P_S 64
// lab_10D0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1108
    OP_CONST_S 64, 1
// lab_1108
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1140
    OP_CONST_S 72, 1
// lab_1140
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
// lab_0FF8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1020
    OP_ZERO_P_S 72
// lab_1020
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
    OP_JUMP lab_11E0
// lab_11E0
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1330
fun_1330() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13C8
fun_13C8() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1480
fun_1480() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_14F8
fun_14F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1408(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1480(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1448(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14C0(var_24)
    pri = 0;
    return pri;
}
// fun_15B8
fun_15B8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_15E8
fun_15E8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1618
fun_1618() {
    OP_JUMP lab_1630
// lab_1630
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_16C0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_16B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    pri = 0;
    return pri;
// lab_16C0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1750
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1740
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    pri = 0;
    return pri;
// lab_1750
    pri = 0;
    return pri;
// lab_1740
    OP_JUMP lab_1760
// lab_1760
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1630
    pri = 0;
    return pri;
// lab_16B0
    OP_JUMP lab_1760
}
// fun_17A0
fun_17A0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1618(var_40)
    pri = 0;
    return pri;
}
// fun_1828
fun_1828() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1888
fun_1888() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_18C0
fun_18C0() {
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
// switch_1ED8
        case default:
        {
// switch_1ED8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F20
// lab_1F20
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
            OP_JNZ lab_1FC8
            var_88 = 0;
            pri = fun_2298()
// lab_1FC8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1ED8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1AC0
                case default:
                {
// switch_1AC0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B38
// lab_1B38
                    OP_JUMP lab_1F20
                }
                case 0x0:
                {
// switch_1AC0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B38
                }
                case 0x1:
                {
// switch_1AC0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B38
                }
                case 0x2:
                {
// switch_1AC0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B38
                }
                case 0x3:
                {
// switch_1AC0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B38
                }
                case 0x4:
                {
// switch_1AC0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B38
                }
                case 0x5:
                {
// switch_1AC0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B38
                }
            }
        }
        case 0x65:
        {
// switch_1ED8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C78
                case default:
                {
// switch_1C78_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CF0
// lab_1CF0
                    OP_JUMP lab_1F20
                }
                case 0x0:
                {
// switch_1C78_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1CF0
                }
                case 0x1:
                {
// switch_1C78_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1CF0
                }
                case 0x2:
                {
// switch_1C78_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1CF0
                }
                case 0x3:
                {
// switch_1C78_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CF0
                }
                case 0x4:
                {
// switch_1C78_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1CF0
                }
                case 0x5:
                {
// switch_1C78_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1CF0
                }
            }
        }
        case 0x66:
        {
// switch_1ED8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E30
                case default:
                {
// switch_1E30_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1EA8
// lab_1EA8
                    OP_JUMP lab_1F20
                }
                case 0x0:
                {
// switch_1E30_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1EA8
                }
                case 0x1:
                {
// switch_1E30_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1EA8
                }
                case 0x2:
                {
// switch_1E30_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1EA8
                }
                case 0x3:
                {
// switch_1E30_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1EA8
                }
                case 0x4:
                {
// switch_1E30_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1EA8
                }
                case 0x5:
                {
// switch_1E30_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1EA8
                }
            }
        }
    }
}
// fun_1FE0
fun_1FE0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_18C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BB8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_20F0
    pri = 1;
    return pri;
// lab_20F0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2138
fun_2138() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2188
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2048(var_8)
    arg_2 = pri;
// lab_2188
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_18C0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1FE0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_21E8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2298
fun_2298() {
    OP_JUMP lab_22B0
// lab_22B0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22F0
    pri = 0;
    return pri;
// lab_22F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22B0
    pri = 0;
    return pri;
}
// fun_2330
fun_2330() {
    var_8 = 0;
    pri = fun_2298()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_23E0
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_23E0
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2420
fun_2420() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2498()
    return pri;
}
// fun_2498
fun_2498() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_24D8
fun_24D8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2510
fun_2510() {
    OP_JUMP lab_2528
// lab_2528
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2570
    OP_JUMP lab_25A0
    OP_JUMP lab_2590
// lab_2570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_25A0
    pri = 0;
    return pri;
// lab_2590
    OP_JUMP lab_2528
}
// fun_25B0
fun_25B0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_25E0
fun_25E0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2630
fun_2630() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2680
fun_2680() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26C0
fun_26C0() {
    pri = arg_1;
    OP_JNZ lab_2708
    var_8 = 696;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2708
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
// fun_2760
fun_2760() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_27D8
fun_27D8() {
    var_8 = 0;
    pri = fun_2760()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2858
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2858
    pri = 1;
    return pri;
// lab_2858
    var_8 = 0;
    pri = fun_2760()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2898
    pri = 1;
    return pri;
// lab_2898
    var_8 = 0;
    pri = fun_2760()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_28C8
fun_28C8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2918
fun_2918() {
    OP_JUMP lab_2930
// lab_2930
    pri = EvCameraMoveWait_()
    OP_JZER lab_2968
    pri = 0;
    return pri;
// lab_2968
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2930
    pri = 0;
    return pri;
}
// fun_29A8
fun_29A8() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_29E0
fun_29E0() {
    pri = arg_6;
    OP_JNZ lab_2A18
    var_8 = 0;
    pri = fun_11F0()
// lab_2A18
    pri = arg_1;
    switch (pri) {
// switch_3F80
        case default:
        {
// switch_3F80_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_42D0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_42D0
            pri = 1;
            OP_JUMP lab_42D8
// lab_42D0
            pri = 0;
// lab_42D8
            OP_JZER lab_4430
            var_16 = 8376;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB8(var_24, var_16)
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
            var_64 = 8480;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4490
// lab_4430
            var_8 = 64;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4490
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_44F0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4550
// lab_44F0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4550
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4550
            pri = arg_2;
            OP_JZER lab_4590
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4590
            var_8 = 0;
            pri = fun_1230()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F80_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1:
        {
// switch_3F80_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x2:
        {
// switch_3F80_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x3:
        {
// switch_3F80_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x4:
        {
// switch_3F80_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x5:
        {
// switch_3F80_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5664;
            var_72 = 5656;
            var_80 = 5648;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0x6:
        {
// switch_3F80_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5688;
            var_72 = 5680;
            var_80 = 5672;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0x7:
        {
// switch_3F80_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5712;
            var_72 = 5704;
            var_80 = 5696;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0x8:
        {
// switch_3F80_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x9:
        {
// switch_3F80_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5736;
            var_72 = 5728;
            var_80 = 5720;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0xa:
        {
// switch_3F80_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5760;
            var_72 = 5752;
            var_80 = 5744;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0xb:
        {
// switch_3F80_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5784;
            var_72 = 5776;
            var_80 = 5768;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0xc:
        {
// switch_3F80_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5808;
            var_72 = 5800;
            var_80 = 5792;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0xd:
        {
// switch_3F80_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5832;
            var_72 = 5824;
            var_80 = 5816;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0xe:
        {
// switch_3F80_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5856;
            var_72 = 5848;
            var_80 = 5840;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0xf:
        {
// switch_3F80_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x10:
        {
// switch_3F80_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x11:
        {
// switch_3F80_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5880;
            var_72 = 5872;
            var_80 = 5864;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0x12:
        {
// switch_3F80_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5904;
            var_72 = 5896;
            var_80 = 5888;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0x13:
        {
// switch_3F80_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x14:
        {
// switch_3F80_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x15:
        {
// switch_3F80_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x16:
        {
// switch_3F80_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x17:
        {
// switch_3F80_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x18:
        {
// switch_3F80_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x19:
        {
// switch_3F80_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5928;
            var_72 = 5920;
            var_80 = 5912;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1a:
        {
// switch_3F80_case_0x1a
            var_8 = 1;
            var_16 = 5936;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6072;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6152;
            var_88 = 6144;
            var_96 = 6136;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1b:
        {
// switch_3F80_case_0x1b
            var_8 = 3;
            var_16 = 6160;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6296;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6376;
            var_88 = 6368;
            var_96 = 6360;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1c:
        {
// switch_3F80_case_0x1c
            var_8 = 2;
            var_16 = 6384;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6520;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6600;
            var_88 = 6592;
            var_96 = 6584;
            alt = 704;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1d:
        {
// switch_3F80_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6608;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1e:
        {
// switch_3F80_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6744;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x1f:
        {
// switch_3F80_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6880;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x20:
        {
// switch_3F80_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7016;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x21:
        {
// switch_3F80_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7136;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x22:
        {
// switch_3F80_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7256;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x23:
        {
// switch_3F80_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7392;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x24:
        {
// switch_3F80_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7528;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x25:
        {
// switch_3F80_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7664;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x26:
        {
// switch_3F80_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x27:
        {
// switch_3F80_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7944;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x28:
        {
// switch_3F80_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
        case 0x29:
        {
// switch_3F80_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8232;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F80_case_default
        }
    }
}
// fun_45C0
fun_45C0() {
    pri = arg_5;
    OP_JNZ lab_45F8
    var_8 = 0;
    pri = fun_11F0()
// lab_45F8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4648
    OP_CONST_S -8, -1
// lab_4648
    pri = arg_1;
    switch (pri) {
// switch_6100
        case default:
        {
// switch_6100_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_65A8
            var_520 = 28240;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BB8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_65A8
            pri = 1;
            OP_JUMP lab_65B0
// lab_65A8
            pri = 0;
// lab_65B0
            OP_JZER lab_6600
            var_8 = 64;
            var_16 = 28336;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6858
// lab_6600
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6668
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6668
            pri = 1;
            OP_JUMP lab_6670
// lab_6668
            pri = 0;
// lab_6670
            OP_JZER lab_67F8
            var_16 = 28512;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB8(var_24, var_16)
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
            var_176 = 28616;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28632;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8496;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6858
// lab_67F8
            var_8 = 64;
            alt = 8496;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_6858
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_68C8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_68C8
            var_8 = 0;
            pri = fun_1230()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6100_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x1:
        {
// switch_6100_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x2:
        {
// switch_6100_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x3:
        {
// switch_6100_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x4:
        {
// switch_6100_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x5:
        {
// switch_6100_case_0x5
            var_8 = 2;
            var_16 = 18496;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F18(var_40)
            OP_JUMP switch_6100_case_default
        }
        case 0x6:
        {
// switch_6100_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x7:
        {
// switch_6100_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x8:
        {
// switch_6100_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x9:
        {
// switch_6100_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0xa:
        {
// switch_6100_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0xb:
        {
// switch_6100_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0xc:
        {
// switch_6100_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0xd:
        {
// switch_6100_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19144;
            var_72 = 18968;
            var_80 = 18784;
            var_88 = 18592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0xe:
        {
// switch_6100_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19800;
            var_72 = 19592;
            var_80 = 19376;
            var_88 = 19152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0xf:
        {
// switch_6100_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20192;
            var_72 = 20072;
            var_80 = 19944;
            var_88 = 19808;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x10:
        {
// switch_6100_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20536;
            var_72 = 20432;
            var_80 = 20320;
            var_88 = 20200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x11:
        {
// switch_6100_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20880;
            var_72 = 20776;
            var_80 = 20664;
            var_88 = 20544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x12:
        {
// switch_6100_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x13:
        {
// switch_6100_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x14:
        {
// switch_6100_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21440;
            var_72 = 21264;
            var_80 = 21080;
            var_88 = 20888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x15:
        {
// switch_6100_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x16:
        {
// switch_6100_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x17:
        {
// switch_6100_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x18:
        {
// switch_6100_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x19:
        {
// switch_6100_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x1a:
        {
// switch_6100_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x1b:
        {
// switch_6100_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x1c:
        {
// switch_6100_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21832;
            var_72 = 21712;
            var_80 = 21584;
            var_88 = 21448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x1d:
        {
// switch_6100_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x1e:
        {
// switch_6100_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22296;
            var_72 = 22152;
            var_80 = 22000;
            var_88 = 21840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x1f:
        {
// switch_6100_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x20:
        {
// switch_6100_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x21:
        {
// switch_6100_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x22:
        {
// switch_6100_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x23:
        {
// switch_6100_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x24:
        {
// switch_6100_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22664;
            var_72 = 22552;
            var_80 = 22432;
            var_88 = 22304;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x25:
        {
// switch_6100_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23032;
            var_72 = 22920;
            var_80 = 22800;
            var_88 = 22672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x26:
        {
// switch_6100_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x27:
        {
// switch_6100_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x28:
        {
// switch_6100_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x29:
        {
// switch_6100_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23472;
            var_72 = 23336;
            var_80 = 23192;
            var_88 = 23040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x2a:
        {
// switch_6100_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23864;
            var_72 = 23744;
            var_80 = 23616;
            var_88 = 23480;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x2b:
        {
// switch_6100_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24280;
            var_72 = 24152;
            var_80 = 24016;
            var_88 = 23872;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x2c:
        {
// switch_6100_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24720;
            var_72 = 24584;
            var_80 = 24440;
            var_88 = 24288;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x2d:
        {
// switch_6100_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x2e:
        {
// switch_6100_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25040;
            var_72 = 24944;
            var_80 = 24840;
            var_88 = 24728;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x2f:
        {
// switch_6100_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25432;
            var_72 = 25312;
            var_80 = 25184;
            var_88 = 25048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x30:
        {
// switch_6100_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25824;
            var_72 = 25704;
            var_80 = 25576;
            var_88 = 25440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x31:
        {
// switch_6100_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x32:
        {
// switch_6100_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x33:
        {
// switch_6100_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26216;
            var_72 = 26096;
            var_80 = 25968;
            var_88 = 25832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x34:
        {
// switch_6100_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26584;
            var_72 = 26472;
            var_80 = 26352;
            var_88 = 26224;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x35:
        {
// switch_6100_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27072;
            var_72 = 26920;
            var_80 = 26760;
            var_88 = 26592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x36:
        {
// switch_6100_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27440;
            var_72 = 27328;
            var_80 = 27208;
            var_88 = 27080;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x37:
        {
// switch_6100_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x38:
        {
// switch_6100_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27808;
            var_72 = 27696;
            var_80 = 27576;
            var_88 = 27448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6100_case_default
        }
        case 0x39:
        {
// switch_6100_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x3a:
        {
// switch_6100_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x3b:
        {
// switch_6100_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x3c:
        {
// switch_6100_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27816;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x3d:
        {
// switch_6100_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27992;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
        case 0x3e:
        {
// switch_6100_case_0x3e
            var_8 = 4;
            var_16 = 28136;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            OP_JUMP switch_6100_case_default
        }
    }
}
// fun_68F8
fun_68F8() {
    pri = arg_4;
    OP_JNZ lab_6930
    var_8 = 0;
    pri = fun_11F0()
// lab_6930
    pri = arg_1;
    switch (pri) {
// switch_7D08
        case default:
        {
// switch_7D08_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29208;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_15B8(var_264)
            OP_JZER lab_82D0
            pri = arg_3;
            switch (pri) {
// switch_8278
                case default:
                {
// switch_8278_case_default
                    OP_JUMP lab_8588
// lab_8588
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_85F8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_85F8
                    var_8 = 0;
                    pri = fun_1230()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8278_case_0x1
                    var_8 = 32;
                    var_16 = 29360;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8278_case_default
                }
                case 0x2:
                {
// switch_8278_case_0x2
                    var_8 = 32;
                    var_16 = 29464;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8278_case_default
                }
                case 0x3:
                {
// switch_8278_case_0x3
                    var_8 = 32;
                    var_16 = 29264;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8278_case_default
                }
            }
// lab_82D0
            pri = arg_1;
            OP_JZER lab_8320
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8320
            pri = 0;
            OP_JUMP lab_8328
// lab_8320
            pri = 1;
// lab_8328
            OP_JZER lab_8390
            var_8 = 29560;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BB8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8390
            pri = 1;
            OP_JUMP lab_8398
// lab_8390
            pri = 0;
// lab_8398
            OP_JZER lab_83E8
            var_8 = 32;
            var_16 = 29656;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8588
// lab_83E8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8450
            var_8 = 32;
            var_16 = 29816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8588
// lab_8450
            var_16 = 29936;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BB8(var_24, var_16)
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
            var_176 = 30040;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30056;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7D08_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1:
        {
// switch_7D08_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2:
        {
// switch_7D08_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x3:
        {
// switch_7D08_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x4:
        {
// switch_7D08_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x5:
        {
// switch_7D08_case_0x5
            var_8 = 1;
            var_16 = 28688;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F18(var_40)
            OP_JUMP switch_7D08_case_default
        }
        case 0x6:
        {
// switch_7D08_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x7:
        {
// switch_7D08_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x8:
        {
// switch_7D08_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x9:
        {
// switch_7D08_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0xa:
        {
// switch_7D08_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0xb:
        {
// switch_7D08_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0xc:
        {
// switch_7D08_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0xd:
        {
// switch_7D08_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0xe:
        {
// switch_7D08_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0xf:
        {
// switch_7D08_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x10:
        {
// switch_7D08_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x11:
        {
// switch_7D08_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x12:
        {
// switch_7D08_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x13:
        {
// switch_7D08_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x14:
        {
// switch_7D08_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x15:
        {
// switch_7D08_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x16:
        {
// switch_7D08_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x17:
        {
// switch_7D08_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x18:
        {
// switch_7D08_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x19:
        {
// switch_7D08_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1a:
        {
// switch_7D08_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1b:
        {
// switch_7D08_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1c:
        {
// switch_7D08_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1d:
        {
// switch_7D08_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1e:
        {
// switch_7D08_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x1f:
        {
// switch_7D08_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x20:
        {
// switch_7D08_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x21:
        {
// switch_7D08_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x22:
        {
// switch_7D08_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x23:
        {
// switch_7D08_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x24:
        {
// switch_7D08_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x25:
        {
// switch_7D08_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x26:
        {
// switch_7D08_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x27:
        {
// switch_7D08_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x28:
        {
// switch_7D08_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x29:
        {
// switch_7D08_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2a:
        {
// switch_7D08_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2b:
        {
// switch_7D08_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2c:
        {
// switch_7D08_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2d:
        {
// switch_7D08_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2e:
        {
// switch_7D08_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x2f:
        {
// switch_7D08_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x30:
        {
// switch_7D08_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x31:
        {
// switch_7D08_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x32:
        {
// switch_7D08_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x33:
        {
// switch_7D08_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x34:
        {
// switch_7D08_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x35:
        {
// switch_7D08_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x36:
        {
// switch_7D08_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x37:
        {
// switch_7D08_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x38:
        {
// switch_7D08_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x39:
        {
// switch_7D08_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x3a:
        {
// switch_7D08_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x3b:
        {
// switch_7D08_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x3c:
        {
// switch_7D08_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28784;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x3d:
        {
// switch_7D08_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28960;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
        case 0x3e:
        {
// switch_7D08_case_0x3e
            var_8 = 3;
            var_16 = 29104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            OP_JUMP switch_7D08_case_default
        }
    }
}
// fun_8628
fun_8628() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8D98(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30104;
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
    var_424 = 30160;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30176;
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
    OP_JZER lab_8820
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8820
    pri = 0;
    return pri;
}
// fun_8838
fun_8838() {
    pri = arg_4;
    OP_JNZ lab_8870
    var_8 = 0;
    pri = fun_11F0()
// lab_8870
    pri = arg_1;
    OP_JNZ lab_8918
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30528;
    var_72 = 30520;
    var_80 = 30376;
    var_88 = 30224;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8918
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8978
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8978
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8A28
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30984;
    var_72 = 30840;
    var_80 = 30688;
    var_88 = 30536;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8A28
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_8AD8
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31616;
    var_72 = 31464;
    var_80 = 31296;
    var_88 = 31120;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8AD8
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8B88
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31816;
    var_72 = 31808;
    var_80 = 31800;
    var_88 = 31624;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8B88
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_8C38
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32232;
    var_72 = 32104;
    var_80 = 31968;
    var_88 = 31824;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8C38
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8C98
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8C98
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_8CF8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8CF8
    var_8 = 0;
    pri = fun_1230()
    pri = 0;
    return pri;
}
// fun_8D20
fun_8D20() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8D58(var_8)
    pri = 0;
    return pri;
}
// fun_8D58
fun_8D58() {
    var_8 = 32400;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B40(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8D98
fun_8D98() {
    var_8 = arg_1;
    var_16 = 32584;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B78(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8DE0
fun_8DE0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8E78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_29E0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8E78
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8FD0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8F38
    var_24 = 32688;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8F38
    pri = 1;
    OP_JUMP lab_8F40
// lab_8FD0
    pri = 0;
    return pri;
// lab_8F38
    pri = 0;
// lab_8F40
    OP_JZER lab_8FD0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_29E0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8FE0
fun_8FE0() {
    var_8 = 32792;
    var_16 = 8;
    pri = fun_24D8(var_8)
    var_24 = 0;
    pri = fun_2510()
    var_32 = 0;
    var_40 = 8;
    pri = fun_25E0(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2630(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_25B0()
    var_88 = 33024;
    var_96 = 8;
    pri = fun_24D8(var_88)
    var_104 = 0;
    pri = fun_2510()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_8DE0(var_128, var_120, var_112)
    var_144 = 33184;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_2238(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0630(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2330(var_200)
    var_216 = 0;
    pri = fun_23F0()
    var_224 = 0;
    pri = fun_25B0()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_29A8(var_232)
    pri = 0;
    return pri;
}
// fun_91E8
fun_91E8() {
    pri = 33368;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9270
// lab_9270
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_93F0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_93E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9330
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9330
    pri = 0;
    OP_JUMP lab_9338
// lab_93F0
    pri = 0;
    return pri;
// lab_93E0
    OP_JUMP lab_9268
// lab_9268
    OP_INC_P_S -936
// lab_9330
    pri = 1;
// lab_9338
    OP_JZER lab_93B0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_93A8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_93B0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_93A8
}
// fun_9410
fun_9410() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_9498()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_9498
fun_9498() {
    OP_ZERO_P_S -8
    pri = var_8;
    var_16 = pri;
    var_24 = 2491457344527812609;
    pri = FlagGet(var_24)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_32 = pri;
    var_40 = -6338460143570643299;
    pri = FlagGet(var_40)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_48 = pri;
    var_56 = -9019446742694110882;
    pri = FlagGet(var_56)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_64 = pri;
    var_72 = -2229912894659633455;
    pri = FlagGet(var_72)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_80 = pri;
    var_88 = -3467343721533817634;
    pri = FlagGet(var_88)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_96 = pri;
    var_104 = -2282713863028048545;
    pri = FlagGet(var_104)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_112 = pri;
    var_120 = -3446232929749219646;
    pri = FlagGet(var_120)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_128 = pri;
    var_136 = 2483696471998715560;
    pri = FlagGet(var_136)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    return pri;
}
// fun_9748
fun_9748() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_97E0
    var_8 = 1;
    var_16 = 0;
    var_24 = 34288;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1860()
// lab_97E0
    pri = arg_4;
    OP_JZER lab_9818
    var_8 = 1;
    var_16 = 8;
    pri = fun_1888(var_8)
// lab_9818
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9870
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9870
    pri = 0;
    OP_JUMP lab_9878
// lab_9870
    pri = 1;
// lab_9878
    OP_JZER lab_9940
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9940
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_9918
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_17A0(var_32, var_24)
    OP_JUMP lab_9940
// lab_9940
    pri = arg_2;
    OP_JZER lab_9A18
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_99E8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1330(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0868(var_40)
    OP_JUMP lab_9A18
// lab_9A18
    pri = arg_3;
    OP_JZER lab_9A50
    var_8 = 1;
    var_16 = 8;
    pri = fun_1828(var_8)
// lab_9A50
    pri = 0;
    return pri;
// lab_99E8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1330(var_16, var_8)
// lab_9918
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_17A0(var_16, var_8)
}
// fun_9A60
fun_9A60() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9BE0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9AF8
    var_8 = 1;
    var_16 = 0;
    var_24 = 34288;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_9BE0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9AF8
    pri = arg_0;
    OP_JNZ lab_9B40
    var_8 = 34336;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_9B60
// lab_9B40
    var_8 = 34512;
    pri = SoundPostEvent(var_8)
// lab_9B60
    var_8 = 0;
    var_16 = 8;
    pri = fun_0630(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9BE0
    var_24 = 34776;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_9C20
fun_9C20() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = fun_0440()
    pri = arg_1;
    OP_JZER lab_9C98
    var_32 = 34824;
    pri = SoundPostEvent(var_32)
// lab_9C98
    var_8 = 35024;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 35288;
    var_40 = 8;
    var_48 = 32;
    pri = fun_02E0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9D18
fun_9D18() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_9D68
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9C20(var_16, var_8)
// lab_9D68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A18(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_9E08
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_9E08
    pri = 1;
    OP_JUMP lab_9E10
// lab_9E08
    pri = 0;
// lab_9E10
    OP_JZER lab_9FA8
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_9EF0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = 72;
    pri = fun_04D0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_9F98
// lab_9FA8
    var_8 = 1;
    var_16 = 1;
    var_24 = arg_4;
    pri = float(var_24)
    var_32 = pri;
    var_40 = arg_3;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0740(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_9EF0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_7;
    var_104 = 80;
    pri = fun_0570(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9F98
    OP_JUMP lab_A068
// lab_A068
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_A0E0
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_07E8(var_32, var_24, var_16)
// lab_A0E0
    var_8 = 35304;
    pri = SoundPostEvent(var_8)
    var_16 = 35576;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A150
fun_A150() {
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_21E8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2330(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_2420(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A250
    pri = 1;
    return pri;
// lab_A250
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = 26750;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 20000;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_08A0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0A18(var_96)
    pri = 0;
    return pri;
}
// fun_A360
fun_A360() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 0;
    var_24 = arg_5;
    var_32 = 0;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_9D18(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_A400
fun_A400() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_91E8(var_24)
    pri = 0;
    return pri;
}
// fun_A468
fun_A468() {
    pri = g_mode;
    switch (pri) {
// switch_A550
        case default:
        {
// switch_A550_case_default
            pri = CommandNOP()
            OP_JUMP lab_A5A8
// lab_A5A8
            pri = 0;
            return pri;
        }
        case 0xa8c9981557ff93ff:
        {
// switch_A550_case_0xa8c9981557ff93ff
            var_8 = 0;
            pri = fun_12020()
            OP_JUMP lab_A5A8
        }
        case 0x0:
        {
// switch_A550_case_0x0
            var_8 = 0;
            pri = fun_A5B8()
            OP_JUMP lab_A5A8
        }
        case 0x34e00627744a0863:
        {
// switch_A550_case_0x34e00627744a0863
            var_8 = 0;
            pri = fun_11FD8()
            OP_JUMP lab_A5A8
        }
        case 0x525a802afe55c3d7:
        {
// switch_A550_case_0x525a802afe55c3d7
            var_8 = 0;
            pri = fun_11ED0()
            OP_JUMP lab_A5A8
        }
    }
}
// fun_A5B8
fun_A5B8() {
    pri = 0;
    return pri;
}
// fun_A5D0
fun_A5D0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 1;
    OP_PUSH5_C 4657442524670774477, 4639481672377565184, 4671678726349311181, 4659156091552430817, 4642825946944608666
    var_32 = 4671678800566346056;
    var_40 = 45;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 30;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 1;
    var_72 = 0;
    var_80 = 34288;
    var_88 = 8;
    var_96 = 32;
    pri = fun_02E0(var_88, var_80, var_72, var_64)
    var_104 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_A6F0
fun_A6F0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9748(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_A748
fun_A748() {
    pri = 0;
    return pri;
}
// fun_A760
fun_A760() {
    pri = 0;
    return pri;
}
// fun_A778
fun_A778() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4636406558257001267, 4657146865994065510, 4671626032254550016, 3891752725908598821
    var_24 = 48;
    pri = fun_0790(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4635723981438477926, 4656898596268513690, 4671650084071407616, -2880315312311124739
    var_48 = 48;
    pri = fun_0790(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C -4587338432941916160, 4656990295538270208, 4671829854222548992, -1180051137964617721
    var_72 = 48;
    pri = fun_0790(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_0828(var_88, var_80)
    var_104 = 1;
    var_112 = -1180051137964617721;
    var_120 = 16;
    pri = fun_0828(var_112, var_104)
    var_128 = 1;
    var_136 = 3891752725908598821;
    var_144 = 16;
    pri = fun_0828(var_136, var_128)
    var_152 = 1;
    var_160 = 3891749427373714188;
    var_168 = 16;
    pri = fun_0828(var_160, var_152)
    var_176 = 1;
    var_184 = 3891750526885342399;
    var_192 = 16;
    pri = fun_0828(var_184, var_176)
    var_200 = 1;
    var_208 = 3891747228350457766;
    var_216 = 16;
    pri = fun_0828(var_208, var_200)
    var_224 = 1;
    var_232 = 3891748327862085977;
    var_240 = 16;
    pri = fun_0828(var_232, var_224)
    var_248 = 1;
    var_256 = -2880323008892522216;
    var_264 = 16;
    pri = fun_0828(var_256, var_248)
    var_272 = 1;
    var_280 = -2880319710357637583;
    var_288 = 16;
    pri = fun_0828(var_280, var_272)
    var_296 = 1;
    var_304 = -2880320809869265794;
    var_312 = 16;
    pri = fun_0828(var_304, var_296)
    var_320 = 1;
    var_328 = -2880318610846009372;
    var_336 = 16;
    pri = fun_0828(var_328, var_320)
    var_344 = 1;
    var_352 = -2880315312311124739;
    var_360 = 16;
    pri = fun_0828(var_352, var_344)
    var_368 = 1;
    var_376 = -4275866473915358187;
    var_384 = 16;
    pri = fun_0828(var_376, var_368)
    var_392 = 1;
    var_400 = 1451425131014577226;
    var_408 = 16;
    pri = fun_0828(var_400, var_392)
    var_416 = 1;
    var_424 = 1451426230526205437;
    var_432 = 16;
    pri = fun_0828(var_424, var_416)
    var_440 = 1;
    var_448 = 1451246788605109846;
    var_456 = 16;
    pri = fun_0828(var_448, var_440)
    var_464 = 1;
    var_472 = 5853608284009014273;
    var_480 = 16;
    pri = fun_0828(var_472, var_464)
    var_488 = 1;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 35592;
    pri = SoundPostEvent(var_504)
    var_512 = 0;
    var_520 = 4630967054332067840;
    var_528 = 0;
    OP_PUSH5_C 4657025787773614817, -4585199926806356951, 4671769172175812035, 4657067217371749417, 4634937962566013420
    var_536 = 4671560526100546191;
    var_544 = 1;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 0;
    pri = fun_2918()
    var_560 = 0;
    var_568 = 4628180452062632346;
    var_576 = 12;
    OP_PUSH5_C 4656994495672688312, 4641670844008932311, 4671795758366971658, 4656999751338269082, 4641813340715892081
    var_584 = 4671769864868137533;
    var_592 = 120;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 34776;
    var_608 = 8;
    var_616 = 16;
    pri = fun_0280(var_608, var_600)
    var_624 = 0;
    pri = fun_0350()
    var_632 = 35752;
    pri = SoundPostEvent(var_632)
    var_640 = 120;
    var_648 = 8;
    pri = fun_0060(var_640)
    OP_PUSH2_C 4623057607486498406, 4629939670667073946
    var_656 = 0;
    OP_PUSH5_C 4657127756481974764, 4641333074036879524, 4671807861241214403, 4657257432883354665, 4641566698267549368
    var_664 = 4671798350465634140;
    var_672 = 1;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 0;
    pri = fun_2918()
    OP_PUSH2_C 4623620557439919718, 4629165614481119642
    var_688 = 2;
    OP_PUSH5_C 4657149812685227950, 4641381276626641224, 4671813419272492810, 4657324766975439667, 4641674362446141194
    var_696 = 4671804504981970616;
    var_704 = 150;
    pri = EvCameraMove(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_712 = 1;
    var_720 = 1;
    var_728 = -1;
    var_736 = -1;
    var_744 = 0;
    var_752 = 44;
    var_760 = -1180051137964617721;
    var_768 = 56;
    pri = fun_45C0(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 120;
    var_784 = 8;
    pri = fun_0060(var_776)
    var_792 = 1;
    var_800 = 3;
    var_808 = 0;
    var_816 = 44;
    var_824 = -1180051137964617721;
    var_832 = 40;
    pri = fun_68F8(var_824, var_816, var_808, var_800, var_792)
    var_840 = 2;
    var_848 = 36040;
    var_856 = -1180051137964617721;
    var_864 = 24;
    pri = fun_0B78(var_856, var_848, var_840)
    var_872 = 15;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 36088;
    var_904 = -1180051137964617721;
    var_912 = 24;
    pri = fun_0B78(var_904, var_896, var_888)
    OP_PUSH2_C -4600201839377593139, 4629953744415909478
    var_920 = 0;
    OP_PUSH5_C 4657091010803374490, 4642235201337237176, 4671808454977493402, 4657229505288009155, 4643926690025407775
    var_928 = 4671784021080345149;
    var_936 = 1;
    pri = EvCameraMove(var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_944 = 0;
    pri = fun_2918()
    OP_PUSH2_C -4594516044848037888, 4628180452062632346
    var_952 = 3;
    OP_PUSH5_C 4657111241817325568, 4642031835666563727, 4671809026723539845, 4657249736301960233, 4643825183111931494
    var_960 = 4671784592826391593;
    var_968 = 15;
    pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 1;
    var_984 = 1;
    var_992 = -1;
    var_1000 = -1;
    var_1008 = 0;
    var_1016 = 43;
    var_1024 = -1180051137964617721;
    var_1032 = 56;
    pri = fun_45C0(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1040 = 30;
    var_1048 = 8;
    pri = fun_0060(var_1040)
    var_1056 = 0;
    var_1064 = 4629334499467146035;
    var_1072 = 0;
    OP_PUSH5_C 4657178114114526904, 4638289625851195556, 4671814246654992712, 4657622800597264630, 4634765559142778143
    var_1080 = 4671768847819881841;
    var_1088 = 1;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 0;
    pri = fun_2918()
    OP_PUSH2_C -4597978187061578957, 4628433779541671936
    var_1104 = 3;
    OP_PUSH5_C 4656920586501069210, 4638738930282769940, 4671802677043889439, 4656766742834110792, 4634333495053527286
    var_1112 = 4671755057195290460;
    var_1120 = 100;
    pri = EvCameraMove(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1128 = 150;
    var_1136 = 8;
    pri = fun_0060(var_1128)
    var_1144 = 0;
    var_1152 = 4629615974443856691;
    var_1160 = 0;
    OP_PUSH5_C 4657019520557336494, 4642125777940040909, 4671726225251631104, 4657151879767088169, 4643530513995687526
    var_1168 = 4671747434830930903;
    var_1176 = 1;
    pri = EvCameraMove(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1184 = 60;
    var_1192 = 8;
    pri = fun_0060(var_1184)
    var_1200 = 0;
    var_1208 = 4627195289644145050;
    var_1216 = 0;
    OP_PUSH5_C 4657748518756784538, 4637368498989909934, 4671694185482797711, 4658110192111625175, 4636934323838333747
    var_1224 = 4671724182908782510;
    var_1232 = 1;
    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 60;
    var_1248 = 8;
    pri = fun_0060(var_1240)
    var_1256 = 1;
    var_1264 = 1;
    OP_PUSH4_C 4636033603912859648, 4657012285770825728, 4671457669536546816, 8802641224559852288
    var_1272 = 48;
    pri = fun_0790(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1280 = 0;
    var_1288 = 4626181979727986688;
    var_1296 = 0;
    OP_PUSH5_C 4656999993230827192, 4640558314163483443, 4671760887355696742, 4657129229827555983, 4643456978658021868
    var_1304 = 4671890495037599908;
    var_1312 = 1;
    pri = EvCameraMove(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1320 = 0;
    pri = fun_2918()
    var_1328 = 0;
    var_1336 = 4626181979727986688;
    var_1344 = 2;
    OP_PUSH5_C 4657001004781524746, 4639859904377520128, 4671761907152731505, 4657130263368486093, 4643005035398540820
    var_1352 = 4671891512085855601;
    var_1360 = 90;
    pri = EvCameraMove(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1368 = 30;
    var_1376 = 8;
    pri = fun_0060(var_1368)
    var_1384 = 1;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 43;
    var_1416 = -1180051137964617721;
    var_1424 = 40;
    pri = fun_68F8(var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1432 = 0;
    pri = fun_2918()
    var_1440 = 60;
    var_1448 = 8;
    pri = fun_0060(var_1440)
    var_1456 = 36136;
    pri = SoundPostEvent(var_1456)
    var_1464 = 1;
    var_1472 = 3;
    var_1480 = 0;
    var_1488 = 1;
    var_1496 = 3891752725908598821;
    var_1504 = 40;
    pri = fun_68F8(var_1496, var_1488, var_1480, var_1472, var_1464)
    var_1512 = 1;
    var_1520 = 3;
    var_1528 = 0;
    var_1536 = 1;
    var_1544 = 3891749427373714188;
    var_1552 = 40;
    pri = fun_68F8(var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1560 = 1;
    var_1568 = 3;
    var_1576 = 0;
    var_1584 = 1;
    var_1592 = 3891750526885342399;
    var_1600 = 40;
    pri = fun_68F8(var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1608 = 1;
    var_1616 = 3;
    var_1624 = 0;
    var_1632 = 8;
    var_1640 = 3891747228350457766;
    var_1648 = 40;
    pri = fun_68F8(var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1656 = 1;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 8;
    var_1688 = 3891748327862085977;
    var_1696 = 40;
    pri = fun_68F8(var_1688, var_1680, var_1672, var_1664, var_1656)
    var_1704 = 1;
    var_1712 = 3;
    var_1720 = 0;
    var_1728 = 7;
    var_1736 = -2880323008892522216;
    var_1744 = 40;
    pri = fun_68F8(var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1752 = 1;
    var_1760 = 3;
    var_1768 = 0;
    var_1776 = 1;
    var_1784 = -2880319710357637583;
    var_1792 = 40;
    pri = fun_68F8(var_1784, var_1776, var_1768, var_1760, var_1752)
    var_1800 = 1;
    var_1808 = 3;
    var_1816 = 0;
    var_1824 = 7;
    var_1832 = -2880320809869265794;
    var_1840 = 40;
    pri = fun_68F8(var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1848 = 1;
    var_1856 = 3;
    var_1864 = 0;
    var_1872 = 8;
    var_1880 = -2880318610846009372;
    var_1888 = 40;
    pri = fun_68F8(var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1896 = 1;
    var_1904 = 3;
    var_1912 = 0;
    var_1920 = 0;
    var_1928 = -2880315312311124739;
    var_1936 = 40;
    pri = fun_68F8(var_1928, var_1920, var_1912, var_1904, var_1896)
    var_1944 = 0;
    var_1952 = 4630840390592548045;
    var_1960 = 0;
    OP_PUSH5_C 4656864291505727078, 4641384443220129219, 4671841107724059279, 4657179257606619791, 4640996359595989402
    var_1968 = 4671799812816099082;
    var_1976 = 1;
    pri = EvCameraMove(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1984 = 0;
    var_1992 = 3;
    var_2000 = 0;
    var_2008 = 100;
    var_2016 = -1;
    OP_PUSH2_C -3363910918783449201, -1180051137964617721
    var_2024 = 56;
    pri = fun_2138(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2032 = 3891752725908598821;
    var_2040 = 8;
    pri = fun_0BF0(var_2032)
    var_2048 = 3891749427373714188;
    var_2056 = 8;
    pri = fun_0BF0(var_2048)
    var_2064 = 3891750526885342399;
    var_2072 = 8;
    pri = fun_0BF0(var_2064)
    var_2080 = 3891747228350457766;
    var_2088 = 8;
    pri = fun_0BF0(var_2080)
    var_2096 = 3891748327862085977;
    var_2104 = 8;
    pri = fun_0BF0(var_2096)
    var_2112 = -2880323008892522216;
    var_2120 = 8;
    pri = fun_0BF0(var_2112)
    var_2128 = -2880319710357637583;
    var_2136 = 8;
    pri = fun_0BF0(var_2128)
    var_2144 = -2880320809869265794;
    var_2152 = 8;
    pri = fun_0BF0(var_2144)
    var_2160 = -2880318610846009372;
    var_2168 = 8;
    pri = fun_0BF0(var_2160)
    var_2176 = -2880315312311124739;
    var_2184 = 8;
    pri = fun_0BF0(var_2176)
    var_2192 = 1;
    var_2200 = 8;
    pri = fun_2330(var_2192)
    var_2208 = 0;
    pri = fun_23F0()
    var_2216 = 3891752725908598821;
    var_2224 = 8;
    pri = fun_1560(var_2216)
    var_2232 = 3891749427373714188;
    var_2240 = 8;
    pri = fun_1560(var_2232)
    var_2248 = 3891750526885342399;
    var_2256 = 8;
    pri = fun_1560(var_2248)
    var_2264 = 3891747228350457766;
    var_2272 = 8;
    pri = fun_1560(var_2264)
    var_2280 = 3891748327862085977;
    var_2288 = 8;
    pri = fun_1560(var_2280)
    var_2296 = -2880323008892522216;
    var_2304 = 8;
    pri = fun_1560(var_2296)
    var_2312 = -2880319710357637583;
    var_2320 = 8;
    pri = fun_1560(var_2312)
    var_2328 = -2880320809869265794;
    var_2336 = 8;
    pri = fun_1560(var_2328)
    var_2344 = -2880318610846009372;
    var_2352 = 8;
    pri = fun_1560(var_2344)
    var_2360 = -2880315312311124739;
    var_2368 = 8;
    pri = fun_1560(var_2360)
    var_2376 = 0;
    var_2384 = 36424;
    var_2392 = 3891752725908598821;
    var_2400 = 24;
    pri = fun_0B78(var_2392, var_2384, var_2376)
    var_2408 = 0;
    var_2416 = 36472;
    var_2424 = 3891749427373714188;
    var_2432 = 24;
    pri = fun_0B78(var_2424, var_2416, var_2408)
    var_2440 = 0;
    var_2448 = 36520;
    var_2456 = 3891750526885342399;
    var_2464 = 24;
    pri = fun_0B78(var_2456, var_2448, var_2440)
    var_2472 = 0;
    var_2480 = 36568;
    var_2488 = 3891747228350457766;
    var_2496 = 24;
    pri = fun_0B78(var_2488, var_2480, var_2472)
    var_2504 = 0;
    var_2512 = 36616;
    var_2520 = 3891748327862085977;
    var_2528 = 24;
    pri = fun_0B78(var_2520, var_2512, var_2504)
    var_2536 = 0;
    var_2544 = 36664;
    var_2552 = -2880323008892522216;
    var_2560 = 24;
    pri = fun_0B78(var_2552, var_2544, var_2536)
    var_2568 = 0;
    var_2576 = 36712;
    var_2584 = -2880319710357637583;
    var_2592 = 24;
    pri = fun_0B78(var_2584, var_2576, var_2568)
    var_2600 = 0;
    var_2608 = 36760;
    var_2616 = -2880320809869265794;
    var_2624 = 24;
    pri = fun_0B78(var_2616, var_2608, var_2600)
    var_2632 = 0;
    var_2640 = 36808;
    var_2648 = -2880318610846009372;
    var_2656 = 24;
    pri = fun_0B78(var_2648, var_2640, var_2632)
    var_2664 = 0;
    var_2672 = 36856;
    var_2680 = -2880315312311124739;
    var_2688 = 24;
    pri = fun_0B78(var_2680, var_2672, var_2664)
    var_2696 = 0;
    var_2704 = 0;
    var_2712 = -1180051137964617721;
    var_2720 = 24;
    pri = fun_8628(var_2712, var_2704, var_2696)
    var_2728 = 0;
    var_2736 = 0;
    var_2744 = 3891752725908598821;
    var_2752 = 24;
    pri = fun_8628(var_2744, var_2736, var_2728)
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 3891749427373714188;
    var_2784 = 24;
    pri = fun_8628(var_2776, var_2768, var_2760)
    var_2792 = 0;
    var_2800 = 0;
    var_2808 = 3891750526885342399;
    var_2816 = 24;
    pri = fun_8628(var_2808, var_2800, var_2792)
    var_2824 = 0;
    var_2832 = 0;
    var_2840 = 3891747228350457766;
    var_2848 = 24;
    pri = fun_8628(var_2840, var_2832, var_2824)
    var_2856 = 0;
    var_2864 = 0;
    var_2872 = 3891748327862085977;
    var_2880 = 24;
    pri = fun_8628(var_2872, var_2864, var_2856)
    var_2888 = 0;
    var_2896 = 0;
    var_2904 = -2880323008892522216;
    var_2912 = 24;
    pri = fun_8628(var_2904, var_2896, var_2888)
    var_2920 = 0;
    var_2928 = 0;
    var_2936 = -2880319710357637583;
    var_2944 = 24;
    pri = fun_8628(var_2936, var_2928, var_2920)
    var_2952 = 0;
    var_2960 = 0;
    var_2968 = -2880320809869265794;
    var_2976 = 24;
    pri = fun_8628(var_2968, var_2960, var_2952)
    var_2984 = 0;
    var_2992 = 0;
    var_3000 = -2880318610846009372;
    var_3008 = 24;
    pri = fun_8628(var_3000, var_2992, var_2984)
    var_3016 = 0;
    var_3024 = 0;
    var_3032 = -2880315312311124739;
    var_3040 = 24;
    pri = fun_8628(var_3032, var_3024, var_3016)
    var_3048 = 0;
    var_3056 = 4630840390592548045;
    var_3064 = 0;
    OP_PUSH5_C 4657054177163843994, 4635847126740788838, 4671488126008636211, 4657127382648021320, 4636841437096019231
    var_3072 = 4671431866747421983;
    var_3080 = 1;
    pri = EvCameraMove(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008)
    var_3088 = 36904;
    pri = SoundPostEvent(var_3088)
    var_3096 = 37064;
    pri = SoundPostEvent(var_3096)
    var_3104 = 0;
    var_3112 = 3;
    var_3120 = 2;
    var_3128 = 100;
    var_3136 = -1;
    OP_PUSH2_C -3363909819271820990, -1180051137964617721
    var_3144 = 56;
    pri = fun_2138(var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3152 = -1180051137964617721;
    var_3160 = 8;
    pri = fun_0BF0(var_3152)
    var_3168 = 15;
    var_3176 = 8;
    pri = fun_0060(var_3168)
    var_3184 = 3891752725908598821;
    var_3192 = 8;
    pri = fun_0BF0(var_3184)
    var_3200 = 3891749427373714188;
    var_3208 = 8;
    pri = fun_0BF0(var_3200)
    var_3216 = 3891750526885342399;
    var_3224 = 8;
    pri = fun_0BF0(var_3216)
    var_3232 = 3891747228350457766;
    var_3240 = 8;
    pri = fun_0BF0(var_3232)
    var_3248 = 3891748327862085977;
    var_3256 = 8;
    pri = fun_0BF0(var_3248)
    var_3264 = -2880323008892522216;
    var_3272 = 8;
    pri = fun_0BF0(var_3264)
    var_3280 = -2880319710357637583;
    var_3288 = 8;
    pri = fun_0BF0(var_3280)
    var_3296 = -2880320809869265794;
    var_3304 = 8;
    pri = fun_0BF0(var_3296)
    var_3312 = -2880318610846009372;
    var_3320 = 8;
    pri = fun_0BF0(var_3312)
    var_3328 = -2880315312311124739;
    var_3336 = 8;
    pri = fun_0BF0(var_3328)
    var_3344 = 0;
    var_3352 = 0;
    var_3360 = 0;
    var_3368 = 0;
    OP_PUSH2_C 8802641224559852288, 3891752725908598821
    var_3376 = 48;
    pri = fun_09C0(var_3368, var_3360, var_3352, var_3344, var_3336, var_3328)
    var_3384 = 0;
    var_3392 = 0;
    var_3400 = 0;
    var_3408 = 0;
    OP_PUSH2_C 8802641224559852288, -2880319710357637583
    var_3416 = 48;
    pri = fun_09C0(var_3408, var_3400, var_3392, var_3384, var_3376, var_3368)
    var_3424 = 0;
    var_3432 = 0;
    var_3440 = 0;
    var_3448 = 0;
    OP_PUSH2_C 8802641224559852288, -2880318610846009372
    var_3456 = 48;
    pri = fun_09C0(var_3448, var_3440, var_3432, var_3424, var_3416, var_3408)
    var_3464 = 0;
    var_3472 = 0;
    var_3480 = 0;
    var_3488 = 0;
    OP_PUSH2_C 8802641224559852288, 1451246788605109846
    var_3496 = 48;
    pri = fun_09C0(var_3488, var_3480, var_3472, var_3464, var_3456, var_3448)
    var_3504 = 0;
    var_3512 = 0;
    var_3520 = 0;
    var_3528 = 0;
    OP_PUSH2_C 8802641224559852288, 5853608284009014273
    var_3536 = 48;
    pri = fun_09C0(var_3528, var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3544 = 2;
    var_3552 = 8;
    pri = fun_0060(var_3544)
    var_3560 = 0;
    var_3568 = 0;
    var_3576 = 0;
    var_3584 = 0;
    OP_PUSH2_C 8802641224559852288, -2880323008892522216
    var_3592 = 48;
    pri = fun_09C0(var_3584, var_3576, var_3568, var_3560, var_3552, var_3544)
    var_3600 = 0;
    var_3608 = 0;
    var_3616 = 0;
    var_3624 = 0;
    OP_PUSH2_C 8802641224559852288, 3891750526885342399
    var_3632 = 48;
    pri = fun_09C0(var_3624, var_3616, var_3608, var_3600, var_3592, var_3584)
    var_3640 = 0;
    var_3648 = 0;
    var_3656 = 0;
    var_3664 = 0;
    OP_PUSH2_C 8802641224559852288, -4275866473915358187
    var_3672 = 48;
    pri = fun_09C0(var_3664, var_3656, var_3648, var_3640, var_3632, var_3624)
    var_3680 = 5;
    var_3688 = 8;
    pri = fun_0060(var_3680)
    var_3696 = 0;
    var_3704 = 0;
    var_3712 = 0;
    var_3720 = 0;
    OP_PUSH2_C 8802641224559852288, 3891747228350457766
    var_3728 = 48;
    pri = fun_09C0(var_3720, var_3712, var_3704, var_3696, var_3688, var_3680)
    var_3736 = 0;
    var_3744 = 0;
    var_3752 = 0;
    var_3760 = 0;
    OP_PUSH2_C 8802641224559852288, -2880320809869265794
    var_3768 = 48;
    pri = fun_09C0(var_3760, var_3752, var_3744, var_3736, var_3728, var_3720)
    var_3776 = 0;
    var_3784 = 0;
    var_3792 = 0;
    var_3800 = 0;
    OP_PUSH2_C 8802641224559852288, 1451425131014577226
    var_3808 = 48;
    pri = fun_09C0(var_3800, var_3792, var_3784, var_3776, var_3768, var_3760)
    var_3816 = 3;
    var_3824 = 8;
    pri = fun_0060(var_3816)
    var_3832 = 0;
    var_3840 = 0;
    var_3848 = 0;
    var_3856 = 0;
    OP_PUSH2_C 8802641224559852288, 3891748327862085977
    var_3864 = 48;
    pri = fun_09C0(var_3856, var_3848, var_3840, var_3832, var_3824, var_3816)
    var_3872 = 0;
    var_3880 = 0;
    var_3888 = 0;
    var_3896 = 0;
    OP_PUSH2_C 8802641224559852288, 3891749427373714188
    var_3904 = 48;
    pri = fun_09C0(var_3896, var_3888, var_3880, var_3872, var_3864, var_3856)
    var_3912 = 0;
    var_3920 = 0;
    var_3928 = 0;
    var_3936 = 0;
    OP_PUSH2_C 8802641224559852288, -2880315312311124739
    var_3944 = 48;
    pri = fun_09C0(var_3936, var_3928, var_3920, var_3912, var_3904, var_3896)
    var_3952 = 0;
    var_3960 = 0;
    var_3968 = 0;
    var_3976 = 0;
    OP_PUSH2_C 8802641224559852288, 1451426230526205437
    var_3984 = 48;
    pri = fun_09C0(var_3976, var_3968, var_3960, var_3952, var_3944, var_3936)
    var_3992 = 0;
    pri = fun_2298()
    var_4000 = 1;
    var_4008 = 8;
    pri = fun_2330(var_4000)
    var_4016 = 0;
    pri = fun_23F0()
    var_4024 = 1;
    var_4032 = 1;
    OP_PUSH4_C -4586937331100103475, 4657212836691732070, 4671626032254550016, 3891752725908598821
    var_4040 = 48;
    pri = fun_0790(var_4032, var_4024, var_4016, var_4008, var_4000, var_3992)
    var_4048 = 1;
    var_4056 = 1;
    OP_PUSH4_C -4587633981667462349, 4656788645105736090, 4671650084071407616, -2880315312311124739
    var_4064 = 48;
    pri = fun_0790(var_4056, var_4048, var_4040, var_4032, var_4024, var_4016)
    var_4072 = 1;
    var_4080 = 1;
    OP_PUSH4_C -4587338432941916160, 4656784027156899430, 4671597884756878950, -4275866473915358187
    var_4088 = 48;
    pri = fun_0790(var_4080, var_4072, var_4064, var_4056, var_4048, var_4040)
    var_4096 = 0;
    var_4104 = 4629813006927554150;
    var_4112 = 0;
    OP_PUSH5_C 4657035177602916024, 4639269862457590415, 4671776057867380982, 4657108361096860795, 4639767369478926500
    var_4120 = 4671719798606166753;
    var_4128 = 1;
    pri = EvCameraMove(var_4128, var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072, var_4064, var_4056)
    var_4136 = 1;
    var_4144 = 0;
    var_4152 = 4641240890982006784;
    var_4160 = 0;
    var_4168 = 0;
    OP_PUSH4_C 4656990295538270208, 4671590710443507712, 4607182418800017408, -1180051137964617721
    var_4176 = 72;
    pri = fun_08A0(var_4168, var_4160, var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104)
    var_4184 = 45;
    var_4192 = 8;
    pri = fun_0060(var_4184)
    var_4200 = 0;
    var_4208 = 4629813006927554150;
    var_4216 = 0;
    OP_PUSH5_C 4657327273861950996, 4637049728578785116, 4671436776066840003, 4657436411386124042, 4638039113121923072
    var_4224 = 4671381434897834967;
    var_4232 = 1;
    pri = EvCameraMove(var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184, var_4176, var_4168, var_4160)
    var_4240 = 0;
    pri = fun_2918()
    var_4248 = 0;
    var_4256 = 4629813006927554150;
    var_4264 = 3;
    OP_PUSH5_C 4657516565783788913, 4637049728578785116, 4671438958597421138, 4657821394387473531, 4638040520496806625
    var_4272 = 4671396564177833165;
    var_4280 = 120;
    pri = EvCameraMove(var_4280, var_4272, var_4264, var_4256, var_4248, var_4240, var_4232, var_4224, var_4216, var_4208)
    var_4288 = 0;
    var_4296 = 3;
    var_4304 = 0;
    var_4312 = 100;
    var_4320 = -1;
    OP_PUSH2_C -3363908719760192779, -1180051137964617721
    var_4328 = 56;
    pri = fun_2138(var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272)
    var_4336 = 1;
    var_4344 = 8;
    pri = fun_2330(var_4336)
    var_4352 = 0;
    var_4360 = 4629813006927554150;
    var_4368 = 0;
    OP_PUSH5_C 4656963951239668695, 4638005336124717793, 4671592675820542362, 4657115244039650673, 4638777281248346767
    var_4376 = 4671538865721479004;
    var_4384 = 1;
    pri = EvCameraMove(var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336, var_4328, var_4320, var_4312)
    var_4392 = 0;
    var_4400 = 3;
    var_4408 = 0;
    var_4416 = 100;
    var_4424 = -1;
    OP_PUSH2_C -3363916416341590256, -1180051137964617721
    var_4432 = 56;
    pri = fun_2138(var_4424, var_4416, var_4408, var_4400, var_4392, var_4384, var_4376)
    var_4440 = 1;
    var_4448 = 8;
    pri = fun_2330(var_4440)
    var_4456 = 0;
    pri = fun_23F0()
    var_4464 = -1180051137964617721;
    var_4472 = 8;
    pri = fun_0A18(var_4464)
    var_4480 = 3891752725908598821;
    var_4488 = 8;
    pri = fun_0A18(var_4480)
    var_4496 = 3891749427373714188;
    var_4504 = 8;
    pri = fun_0A18(var_4496)
    var_4512 = 3891750526885342399;
    var_4520 = 8;
    pri = fun_0A18(var_4512)
    var_4528 = 3891747228350457766;
    var_4536 = 8;
    pri = fun_0A18(var_4528)
    var_4544 = 3891748327862085977;
    var_4552 = 8;
    pri = fun_0A18(var_4544)
    var_4560 = -2880323008892522216;
    var_4568 = 8;
    pri = fun_0A18(var_4560)
    var_4576 = -2880319710357637583;
    var_4584 = 8;
    pri = fun_0A18(var_4576)
    var_4592 = -2880320809869265794;
    var_4600 = 8;
    pri = fun_0A18(var_4592)
    var_4608 = -2880318610846009372;
    var_4616 = 8;
    pri = fun_0A18(var_4608)
    var_4624 = -2880315312311124739;
    var_4632 = 8;
    pri = fun_0A18(var_4624)
    var_4640 = 1451246788605109846;
    var_4648 = 8;
    pri = fun_0A18(var_4640)
    var_4656 = 5853608284009014273;
    var_4664 = 8;
    pri = fun_0A18(var_4656)
    var_4672 = -4275866473915358187;
    var_4680 = 8;
    pri = fun_0A18(var_4672)
    var_4688 = 1451425131014577226;
    var_4696 = 8;
    pri = fun_0A18(var_4688)
    var_4704 = 1451426230526205437;
    var_4712 = 8;
    pri = fun_0A18(var_4704)
    var_4720 = 0;
    var_4728 = 0;
    var_4736 = 0;
    var_4744 = 180;
    pri = float(var_4744)
    var_4752 = pri;
    var_4760 = 3891752725908598821;
    var_4768 = 40;
    pri = fun_0970(var_4760, var_4752, var_4744, var_4736, var_4728)
    var_4776 = 0;
    var_4784 = 0;
    var_4792 = 0;
    var_4800 = 180;
    pri = float(var_4800)
    var_4808 = pri;
    var_4816 = 3891749427373714188;
    var_4824 = 40;
    pri = fun_0970(var_4816, var_4808, var_4800, var_4792, var_4784)
    var_4832 = 0;
    var_4840 = 0;
    var_4848 = 0;
    var_4856 = 180;
    pri = float(var_4856)
    var_4864 = pri;
    var_4872 = 3891750526885342399;
    var_4880 = 40;
    pri = fun_0970(var_4872, var_4864, var_4856, var_4848, var_4840)
    var_4888 = 0;
    var_4896 = 0;
    var_4904 = 0;
    var_4912 = 180;
    pri = float(var_4912)
    var_4920 = pri;
    var_4928 = 3891747228350457766;
    var_4936 = 40;
    pri = fun_0970(var_4928, var_4920, var_4912, var_4904, var_4896)
    var_4944 = 0;
    var_4952 = 0;
    var_4960 = 0;
    var_4968 = 180;
    pri = float(var_4968)
    var_4976 = pri;
    var_4984 = 3891748327862085977;
    var_4992 = 40;
    pri = fun_0970(var_4984, var_4976, var_4968, var_4960, var_4952)
    var_5000 = 0;
    var_5008 = 0;
    var_5016 = 0;
    var_5024 = 180;
    pri = float(var_5024)
    var_5032 = pri;
    var_5040 = -2880323008892522216;
    var_5048 = 40;
    pri = fun_0970(var_5040, var_5032, var_5024, var_5016, var_5008)
    var_5056 = 0;
    var_5064 = 0;
    var_5072 = 0;
    var_5080 = 180;
    pri = float(var_5080)
    var_5088 = pri;
    var_5096 = -2880319710357637583;
    var_5104 = 40;
    pri = fun_0970(var_5096, var_5088, var_5080, var_5072, var_5064)
    var_5112 = 0;
    var_5120 = 0;
    var_5128 = 0;
    var_5136 = 180;
    pri = float(var_5136)
    var_5144 = pri;
    var_5152 = -2880320809869265794;
    var_5160 = 40;
    pri = fun_0970(var_5152, var_5144, var_5136, var_5128, var_5120)
    var_5168 = 0;
    var_5176 = 0;
    var_5184 = 0;
    var_5192 = 180;
    pri = float(var_5192)
    var_5200 = pri;
    var_5208 = -2880318610846009372;
    var_5216 = 40;
    pri = fun_0970(var_5208, var_5200, var_5192, var_5184, var_5176)
    var_5224 = 0;
    var_5232 = 0;
    var_5240 = 0;
    var_5248 = 180;
    pri = float(var_5248)
    var_5256 = pri;
    var_5264 = -2880315312311124739;
    var_5272 = 40;
    pri = fun_0970(var_5264, var_5256, var_5248, var_5240, var_5232)
    var_5280 = 0;
    var_5288 = 0;
    var_5296 = 0;
    var_5304 = 180;
    pri = float(var_5304)
    var_5312 = pri;
    var_5320 = 1451246788605109846;
    var_5328 = 40;
    pri = fun_0970(var_5320, var_5312, var_5304, var_5296, var_5288)
    var_5336 = 0;
    var_5344 = 0;
    var_5352 = 0;
    var_5360 = 180;
    pri = float(var_5360)
    var_5368 = pri;
    var_5376 = 5853608284009014273;
    var_5384 = 40;
    pri = fun_0970(var_5376, var_5368, var_5360, var_5352, var_5344)
    var_5392 = 0;
    var_5400 = 0;
    var_5408 = 0;
    var_5416 = 180;
    pri = float(var_5416)
    var_5424 = pri;
    var_5432 = -4275866473915358187;
    var_5440 = 40;
    pri = fun_0970(var_5432, var_5424, var_5416, var_5408, var_5400)
    var_5448 = 0;
    var_5456 = 0;
    var_5464 = 0;
    var_5472 = 180;
    pri = float(var_5472)
    var_5480 = pri;
    var_5488 = 1451425131014577226;
    var_5496 = 40;
    pri = fun_0970(var_5488, var_5480, var_5472, var_5464, var_5456)
    var_5504 = 0;
    var_5512 = 0;
    var_5520 = 0;
    var_5528 = 180;
    pri = float(var_5528)
    var_5536 = pri;
    var_5544 = 1451426230526205437;
    var_5552 = 40;
    pri = fun_0970(var_5544, var_5536, var_5528, var_5520, var_5512)
    var_5560 = 3891752725908598821;
    var_5568 = 8;
    pri = fun_0A18(var_5560)
    var_5576 = 3891749427373714188;
    var_5584 = 8;
    pri = fun_0A18(var_5576)
    var_5592 = 3891750526885342399;
    var_5600 = 8;
    pri = fun_0A18(var_5592)
    var_5608 = 3891747228350457766;
    var_5616 = 8;
    pri = fun_0A18(var_5608)
    var_5624 = 3891748327862085977;
    var_5632 = 8;
    pri = fun_0A18(var_5624)
    var_5640 = -2880323008892522216;
    var_5648 = 8;
    pri = fun_0A18(var_5640)
    var_5656 = -2880319710357637583;
    var_5664 = 8;
    pri = fun_0A18(var_5656)
    var_5672 = -2880320809869265794;
    var_5680 = 8;
    pri = fun_0A18(var_5672)
    var_5688 = -2880318610846009372;
    var_5696 = 8;
    pri = fun_0A18(var_5688)
    var_5704 = -2880315312311124739;
    var_5712 = 8;
    pri = fun_0A18(var_5704)
    var_5720 = 1451246788605109846;
    var_5728 = 8;
    pri = fun_0A18(var_5720)
    var_5736 = 5853608284009014273;
    var_5744 = 8;
    pri = fun_0A18(var_5736)
    var_5752 = -4275866473915358187;
    var_5760 = 8;
    pri = fun_0A18(var_5752)
    var_5768 = 1451425131014577226;
    var_5776 = 8;
    pri = fun_0A18(var_5768)
    var_5784 = 1451426230526205437;
    var_5792 = 8;
    pri = fun_0A18(var_5784)
    var_5800 = 0;
    var_5808 = 4627195289644145050;
    var_5816 = 0;
    OP_PUSH5_C 4657356454900552172, 4636821733847649485, 4671686898469484626, 4657496554672163389, 4637783674580558152
    var_5824 = 4671741090648838636;
    var_5832 = 1;
    pri = EvCameraMove(var_5832, var_5824, var_5816, var_5808, var_5800, var_5792, var_5784, var_5776, var_5768, var_5760)
    var_5840 = 1;
    var_5848 = 0;
    var_5856 = 45;
    var_5864 = 90;
    OP_PUSH2_C 4611686018427387904, 3891752725908598821
    var_5872 = 48;
    pri = fun_0918(var_5864, var_5856, var_5848, var_5840, var_5832, var_5824)
    var_5880 = 1;
    var_5888 = 0;
    var_5896 = 45;
    var_5904 = 90;
    OP_PUSH2_C 4611686018427387904, -2880323008892522216
    var_5912 = 48;
    pri = fun_0918(var_5904, var_5896, var_5888, var_5880, var_5872, var_5864)
    var_5920 = 1;
    var_5928 = 0;
    var_5936 = 45;
    var_5944 = 90;
    OP_PUSH2_C 4611686018427387904, -2880319710357637583
    var_5952 = 48;
    pri = fun_0918(var_5944, var_5936, var_5928, var_5920, var_5912, var_5904)
    var_5960 = 1;
    var_5968 = 0;
    var_5976 = 45;
    var_5984 = 90;
    OP_PUSH2_C 4611686018427387904, 3891749427373714188
    var_5992 = 48;
    pri = fun_0918(var_5984, var_5976, var_5968, var_5960, var_5952, var_5944)
    var_6000 = 1;
    var_6008 = 0;
    var_6016 = 45;
    var_6024 = 90;
    OP_PUSH2_C 4611686018427387904, 3891750526885342399
    var_6032 = 48;
    pri = fun_0918(var_6024, var_6016, var_6008, var_6000, var_5992, var_5984)
    var_6040 = 1;
    var_6048 = 0;
    var_6056 = 45;
    var_6064 = 90;
    OP_PUSH2_C 4611686018427387904, 3891747228350457766
    var_6072 = 48;
    pri = fun_0918(var_6064, var_6056, var_6048, var_6040, var_6032, var_6024)
    var_6080 = 1;
    var_6088 = 0;
    var_6096 = 45;
    var_6104 = 90;
    OP_PUSH2_C 4611686018427387904, -2880320809869265794
    var_6112 = 48;
    pri = fun_0918(var_6104, var_6096, var_6088, var_6080, var_6072, var_6064)
    var_6120 = 1;
    var_6128 = 0;
    var_6136 = 45;
    var_6144 = 90;
    OP_PUSH2_C 4611686018427387904, -2880318610846009372
    var_6152 = 48;
    pri = fun_0918(var_6144, var_6136, var_6128, var_6120, var_6112, var_6104)
    var_6160 = 1;
    var_6168 = 0;
    var_6176 = 45;
    var_6184 = 90;
    OP_PUSH2_C 4611686018427387904, -2880315312311124739
    var_6192 = 48;
    pri = fun_0918(var_6184, var_6176, var_6168, var_6160, var_6152, var_6144)
    var_6200 = 1;
    var_6208 = 0;
    var_6216 = 45;
    var_6224 = 90;
    OP_PUSH2_C 4611686018427387904, 3891748327862085977
    var_6232 = 48;
    pri = fun_0918(var_6224, var_6216, var_6208, var_6200, var_6192, var_6184)
    var_6240 = 1;
    var_6248 = 0;
    var_6256 = 0;
    var_6264 = 90;
    OP_PUSH2_C 4607182418800017408, 1451246788605109846
    var_6272 = 48;
    pri = fun_0918(var_6264, var_6256, var_6248, var_6240, var_6232, var_6224)
    var_6280 = 1;
    var_6288 = 0;
    var_6296 = 0;
    var_6304 = 90;
    OP_PUSH2_C 4607182418800017408, 5853608284009014273
    var_6312 = 48;
    pri = fun_0918(var_6304, var_6296, var_6288, var_6280, var_6272, var_6264)
    var_6320 = 1;
    var_6328 = 0;
    var_6336 = 0;
    var_6344 = 90;
    OP_PUSH2_C 4607182418800017408, -4275866473915358187
    var_6352 = 48;
    pri = fun_0918(var_6344, var_6336, var_6328, var_6320, var_6312, var_6304)
    var_6360 = 1;
    var_6368 = 0;
    var_6376 = 0;
    var_6384 = 90;
    OP_PUSH2_C 4607182418800017408, 1451425131014577226
    var_6392 = 48;
    pri = fun_0918(var_6384, var_6376, var_6368, var_6360, var_6352, var_6344)
    var_6400 = 1;
    var_6408 = 0;
    var_6416 = 0;
    var_6424 = 90;
    OP_PUSH2_C 4607182418800017408, 1451426230526205437
    var_6432 = 48;
    pri = fun_0918(var_6424, var_6416, var_6408, var_6400, var_6392, var_6384)
    var_6440 = 90;
    var_6448 = 8;
    pri = fun_0060(var_6440)
    var_6456 = 3891752725908598821;
    var_6464 = 8;
    pri = fun_0A18(var_6456)
    var_6472 = -2880323008892522216;
    var_6480 = 8;
    pri = fun_0A18(var_6472)
    var_6488 = -2880319710357637583;
    var_6496 = 8;
    pri = fun_0A18(var_6488)
    var_6504 = 3891749427373714188;
    var_6512 = 8;
    pri = fun_0A18(var_6504)
    var_6520 = 3891750526885342399;
    var_6528 = 8;
    pri = fun_0A18(var_6520)
    var_6536 = 3891747228350457766;
    var_6544 = 8;
    pri = fun_0A18(var_6536)
    var_6552 = -2880320809869265794;
    var_6560 = 8;
    pri = fun_0A18(var_6552)
    var_6568 = -2880318610846009372;
    var_6576 = 8;
    pri = fun_0A18(var_6568)
    var_6584 = -2880315312311124739;
    var_6592 = 8;
    pri = fun_0A18(var_6584)
    var_6600 = 3891748327862085977;
    var_6608 = 8;
    pri = fun_0A18(var_6600)
    var_6616 = 1451246788605109846;
    var_6624 = 8;
    pri = fun_0A18(var_6616)
    var_6632 = 5853608284009014273;
    var_6640 = 8;
    pri = fun_0A18(var_6632)
    var_6648 = -4275866473915358187;
    var_6656 = 8;
    pri = fun_0A18(var_6648)
    var_6664 = 1451425131014577226;
    var_6672 = 8;
    pri = fun_0A18(var_6664)
    var_6680 = 1451426230526205437;
    var_6688 = 8;
    pri = fun_0A18(var_6680)
    var_6696 = 1;
    var_6704 = 1;
    var_6712 = 0;
    OP_PUSH3_C 4654008420003741696, 4671530209816189338, -2880323008892522216
    var_6720 = 48;
    pri = fun_0790(var_6712, var_6704, var_6696, var_6688, var_6680, var_6672)
    var_6728 = 1;
    var_6736 = 1;
    var_6744 = 0;
    OP_PUSH3_C 4654119250775821517, 4671548406733629030, -4275866473915358187
    var_6752 = 48;
    pri = fun_0790(var_6744, var_6736, var_6728, var_6720, var_6712, var_6704)
    var_6760 = 1;
    var_6768 = 1;
    var_6776 = 0;
    OP_PUSH3_C 4654008420003741696, 4671502227245262438, 3891748327862085977
    var_6784 = 48;
    pri = fun_0790(var_6776, var_6768, var_6760, var_6752, var_6744, var_6736)
    var_6792 = 1;
    var_6800 = 1;
    var_6808 = 0;
    OP_PUSH3_C 4653960041492119552, 4671605801240598938, 1451246788605109846
    var_6816 = 48;
    pri = fun_0790(var_6808, var_6800, var_6792, var_6784, var_6776, var_6768)
    var_6824 = 1;
    var_6832 = 1;
    OP_PUSH4_C -4613487458278336102, 4654008420003741696, 4671577488816183706, 3891747228350457766
    var_6840 = 48;
    pri = fun_0790(var_6832, var_6824, var_6816, var_6808, var_6800, var_6792)
    var_6848 = 1;
    var_6856 = 1;
    var_6864 = 0;
    OP_PUSH3_C 4653608197771231232, 4671474849405730816, 3891752725908598821
    var_6872 = 48;
    pri = fun_0790(var_6864, var_6856, var_6848, var_6840, var_6832, var_6824)
    var_6880 = 1;
    var_6888 = 1;
    var_6896 = 0;
    OP_PUSH3_C 4653696158701453312, 4671419186629574656, -2880315312311124739
    var_6904 = 48;
    pri = fun_0790(var_6896, var_6888, var_6880, var_6872, var_6864, var_6856)
    var_6912 = 1;
    var_6920 = 1;
    var_6928 = 0;
    OP_PUSH3_C 4654004021957230592, 4671645108781291930, -2880319710357637583
    var_6936 = 48;
    pri = fun_0790(var_6928, var_6920, var_6912, var_6904, var_6896, var_6888)
    var_6944 = 1;
    var_6952 = 1;
    var_6960 = 0;
    OP_PUSH3_C 4653960041492119552, 4671627379156294042, 1451426230526205437
    var_6968 = 48;
    pri = fun_0790(var_6960, var_6952, var_6944, var_6936, var_6928, var_6920)
    var_6976 = 1;
    var_6984 = 1;
    var_6992 = 0;
    OP_PUSH3_C 4654004021957230592, 4671451319856896410, -2880318610846009372
    var_7000 = 48;
    pri = fun_0790(var_6992, var_6984, var_6976, var_6968, var_6960, var_6952)
    var_7008 = 1;
    var_7016 = 1;
    var_7024 = 0;
    OP_PUSH3_C 4653388295445676032, 4671563525018510950, 1451425131014577226
    var_7032 = 48;
    pri = fun_0790(var_7024, var_7016, var_7008, var_7000, var_6992, var_6984)
    var_7040 = 1;
    var_7048 = 1;
    var_7056 = 0;
    OP_PUSH3_C 4654179943817674752, 4671672294206288691, -2880320809869265794
    var_7064 = 48;
    pri = fun_0790(var_7056, var_7048, var_7040, var_7032, var_7024, var_7016)
    var_7072 = 1;
    var_7080 = 1;
    var_7088 = 0;
    OP_PUSH3_C 4654004021957230592, 4671394777471438029, 3891749427373714188
    var_7096 = 48;
    pri = fun_0790(var_7088, var_7080, var_7072, var_7064, var_7056, var_7048)
    var_7104 = 1;
    var_7112 = 1;
    var_7120 = 0;
    OP_PUSH3_C 4653872080561897472, 4671372072556324454, 3891750526885342399
    var_7128 = 48;
    pri = fun_0790(var_7120, var_7112, var_7104, var_7096, var_7088, var_7080)
    var_7136 = 1;
    var_7144 = 1;
    var_7152 = 0;
    OP_PUSH3_C 4653608197771231232, 4671706626456865997, 5853608284009014273
    var_7160 = 48;
    pri = fun_0790(var_7152, var_7144, var_7136, var_7128, var_7120, var_7112)
    var_7168 = 0;
    var_7176 = 4629728564434540954;
    var_7184 = 0;
    OP_PUSH5_C 4655172055149649592, 4636013196977048125, 4671521853527818240, 4656084209996052562, 4636296783016084111
    var_7192 = 4671522175134969364;
    var_7200 = 1;
    pri = EvCameraMove(var_7200, var_7192, var_7184, var_7176, var_7168, var_7160, var_7152, var_7144, var_7136, var_7128)
    var_7208 = 0;
    pri = fun_2918()
    var_7216 = 0;
    var_7224 = 4629728564434540954;
    var_7232 = 6;
    OP_PUSH5_C 4658070037946978796, 4637334018305262879, 4671523340617294807, 4658526115370180280, 4637618308031740641
    var_7240 = 4671523662224445932;
    var_7248 = 90;
    pri = EvCameraMove(var_7248, var_7240, var_7232, var_7224, var_7216, var_7208, var_7200, var_7192, var_7184, var_7176)
    var_7256 = 120;
    var_7264 = 8;
    pri = fun_0060(var_7256)
    var_7272 = 0;
    var_7280 = 4629728564434540954;
    var_7288 = 0;
    OP_PUSH5_C 4656917375927116104, 4638628099510690120, 4671588706583566090, 4657244656558239908, 4638809650870668493
    var_7296 = 4671548953740663849;
    var_7304 = 1;
    pri = EvCameraMove(var_7304, var_7296, var_7288, var_7280, var_7272, var_7264, var_7256, var_7248, var_7240, var_7232)
    var_7312 = 1;
    var_7320 = 1;
    var_7328 = -1;
    var_7336 = -1;
    var_7344 = 0;
    var_7352 = 6;
    var_7360 = -1180051137964617721;
    var_7368 = 56;
    pri = fun_45C0(var_7360, var_7352, var_7344, var_7336, var_7328, var_7320, var_7312)
    var_7376 = 0;
    var_7384 = 3;
    var_7392 = 2;
    var_7400 = 100;
    var_7408 = -1;
    OP_PUSH2_C -3363915316829962045, -1180051137964617721
    var_7416 = 56;
    pri = fun_2138(var_7408, var_7400, var_7392, var_7384, var_7376, var_7368, var_7360)
    var_7424 = 5;
    var_7432 = 8;
    pri = fun_0060(var_7424)
    var_7440 = 8;
    var_7448 = 8;
    var_7456 = -1180051137964617721;
    var_7464 = 24;
    pri = fun_14F8(var_7456, var_7448, var_7440)
    var_7472 = 15;
    var_7480 = 8;
    pri = fun_0060(var_7472)
    var_7488 = 0;
    pri = fun_2298()
    var_7496 = 1;
    var_7504 = 8;
    pri = fun_2330(var_7496)
    var_7512 = 0;
    pri = fun_23F0()
    var_7520 = 1;
    var_7528 = 3;
    var_7536 = 0;
    var_7544 = 6;
    var_7552 = -1180051137964617721;
    var_7560 = 40;
    pri = fun_68F8(var_7552, var_7544, var_7536, var_7528, var_7520)
    var_7568 = -1180051137964617721;
    var_7576 = 8;
    pri = fun_0BF0(var_7568)
    var_7584 = 15;
    var_7592 = 8;
    pri = fun_0060(var_7584)
    var_7600 = 0;
    var_7608 = 1;
    var_7616 = -1180051137964617721;
    var_7624 = 24;
    pri = fun_8628(var_7616, var_7608, var_7600)
    var_7632 = 2;
    var_7640 = 6;
    var_7648 = -1180051137964617721;
    var_7656 = 24;
    pri = fun_14F8(var_7648, var_7640, var_7632)
    var_7664 = 10;
    var_7672 = 8;
    pri = fun_0060(var_7664)
    var_7680 = 0;
    var_7688 = 4629728564434540954;
    var_7696 = 0;
    OP_PUSH5_C 4656979916148504003, 4638573211890231542, 4671586207943391969, 4657078740253608509, 4641821784965193400
    var_7704 = 4671536287366711869;
    var_7712 = 1;
    pri = EvCameraMove(var_7712, var_7704, var_7696, var_7688, var_7680, var_7672, var_7664, var_7656, var_7648, var_7640)
    var_7720 = 0;
    pri = fun_2918()
    var_7728 = 0;
    var_7736 = 4627786387095237427;
    var_7744 = 5;
    OP_PUSH5_C 4656960806636413256, 4637343869929447752, 4671595853409146634, 4657059652731750318, 4641207113984801505
    var_7752 = 4671545932832466534;
    var_7760 = 30;
    pri = EvCameraMove(var_7760, var_7752, var_7744, var_7736, var_7728, var_7720, var_7712, var_7704, var_7696, var_7688)
    var_7768 = 0;
    var_7776 = 1;
    var_7784 = 3891752725908598821;
    var_7792 = 24;
    pri = fun_8628(var_7784, var_7776, var_7768)
    var_7800 = 0;
    var_7808 = 1;
    var_7816 = 3891749427373714188;
    var_7824 = 24;
    pri = fun_8628(var_7816, var_7808, var_7800)
    var_7832 = 0;
    var_7840 = 1;
    var_7848 = 3891750526885342399;
    var_7856 = 24;
    pri = fun_8628(var_7848, var_7840, var_7832)
    var_7864 = 0;
    var_7872 = 1;
    var_7880 = -2880319710357637583;
    var_7888 = 24;
    pri = fun_8628(var_7880, var_7872, var_7864)
    var_7896 = 0;
    var_7904 = 1;
    var_7912 = -2880315312311124739;
    var_7920 = 24;
    pri = fun_8628(var_7912, var_7904, var_7896)
    var_7928 = 5;
    var_7936 = 8;
    pri = fun_0060(var_7928)
    var_7944 = 5;
    var_7952 = -1180051137964617721;
    var_7960 = 16;
    pri = fun_1480(var_7952, var_7944)
    var_7968 = 5;
    var_7976 = 8;
    pri = fun_0060(var_7968)
    var_7984 = 37248;
    pri = SoundPostEvent(var_7984)
    var_7992 = 37376;
    pri = SoundPostEvent(var_7992)
    var_8000 = 37536;
    pri = SoundPostEvent(var_8000)
    var_8008 = 0;
    var_8016 = 3;
    var_8024 = 0;
    var_8032 = 101;
    var_8040 = -1;
    OP_PUSH2_C -3363914217318333834, -1180051137964617721
    var_8048 = 56;
    pri = fun_2138(var_8040, var_8032, var_8024, var_8016, var_8008, var_8000, var_7992)
    var_8056 = 1;
    var_8064 = 1;
    var_8072 = -1;
    var_8080 = -1;
    var_8088 = 0;
    var_8096 = 1;
    var_8104 = 3891752725908598821;
    var_8112 = 56;
    pri = fun_45C0(var_8104, var_8096, var_8088, var_8080, var_8072, var_8064, var_8056)
    var_8120 = 1;
    var_8128 = 1;
    var_8136 = -1;
    var_8144 = -1;
    var_8152 = 0;
    var_8160 = 1;
    var_8168 = 3891749427373714188;
    var_8176 = 56;
    pri = fun_45C0(var_8168, var_8160, var_8152, var_8144, var_8136, var_8128, var_8120)
    var_8184 = 1;
    var_8192 = 1;
    var_8200 = -1;
    var_8208 = -1;
    var_8216 = 0;
    var_8224 = 1;
    var_8232 = 3891750526885342399;
    var_8240 = 56;
    pri = fun_45C0(var_8232, var_8224, var_8216, var_8208, var_8200, var_8192, var_8184)
    var_8248 = 1;
    var_8256 = 1;
    var_8264 = -1;
    var_8272 = -1;
    var_8280 = 0;
    var_8288 = 8;
    var_8296 = 3891747228350457766;
    var_8304 = 56;
    pri = fun_45C0(var_8296, var_8288, var_8280, var_8272, var_8264, var_8256, var_8248)
    var_8312 = 1;
    var_8320 = 1;
    var_8328 = -1;
    var_8336 = -1;
    var_8344 = 0;
    var_8352 = 8;
    var_8360 = 3891748327862085977;
    var_8368 = 56;
    pri = fun_45C0(var_8360, var_8352, var_8344, var_8336, var_8328, var_8320, var_8312)
    var_8376 = 1;
    var_8384 = 1;
    var_8392 = -1;
    var_8400 = -1;
    var_8408 = 0;
    var_8416 = 7;
    var_8424 = -2880323008892522216;
    var_8432 = 56;
    pri = fun_45C0(var_8424, var_8416, var_8408, var_8400, var_8392, var_8384, var_8376)
    var_8440 = 1;
    var_8448 = 1;
    var_8456 = -1;
    var_8464 = -1;
    var_8472 = 0;
    var_8480 = 1;
    var_8488 = -2880319710357637583;
    var_8496 = 56;
    pri = fun_45C0(var_8488, var_8480, var_8472, var_8464, var_8456, var_8448, var_8440)
    var_8504 = 1;
    var_8512 = 1;
    var_8520 = -1;
    var_8528 = -1;
    var_8536 = 0;
    var_8544 = 7;
    var_8552 = -2880320809869265794;
    var_8560 = 56;
    pri = fun_45C0(var_8552, var_8544, var_8536, var_8528, var_8520, var_8512, var_8504)
    var_8568 = 1;
    var_8576 = 1;
    var_8584 = -1;
    var_8592 = -1;
    var_8600 = 0;
    var_8608 = 8;
    var_8616 = -2880318610846009372;
    var_8624 = 56;
    pri = fun_45C0(var_8616, var_8608, var_8600, var_8592, var_8584, var_8576, var_8568)
    var_8632 = 1;
    var_8640 = 1;
    var_8648 = -1;
    var_8656 = -1;
    var_8664 = 0;
    var_8672 = 0;
    var_8680 = -2880315312311124739;
    var_8688 = 56;
    pri = fun_45C0(var_8680, var_8672, var_8664, var_8656, var_8648, var_8640, var_8632)
    var_8696 = 5;
    var_8704 = 8;
    pri = fun_0060(var_8696)
    var_8712 = 1;
    var_8720 = 8;
    pri = fun_2330(var_8712)
    var_8728 = 0;
    var_8736 = 4629362646964817101;
    var_8744 = 0;
    OP_PUSH5_C 4656972351508504904, 4636559962119308575, 4671568596515894067, 4657411298540545638, 4633363813758759076
    var_8752 = 4671556993919441961;
    var_8760 = 1;
    pri = EvCameraMove(var_8760, var_8752, var_8744, var_8736, var_8728, var_8720, var_8712, var_8704, var_8696, var_8688)
    var_8768 = 0;
    pri = fun_2918()
    var_8776 = 0;
    var_8784 = 4629362646964817101;
    var_8792 = 5;
    OP_PUSH5_C 4656998893719199416, 4636559962119308575, 4671584289295601500, 4657437840751240151, 4633363813758759076
    var_8800 = 4671572689447928463;
    var_8808 = 30;
    pri = EvCameraMove(var_8808, var_8800, var_8792, var_8784, var_8776, var_8768, var_8760, var_8752, var_8744, var_8736)
    var_8816 = 1;
    var_8824 = 1;
    var_8832 = -1;
    var_8840 = -1;
    var_8848 = 0;
    var_8856 = 43;
    var_8864 = -1180051137964617721;
    var_8872 = 56;
    pri = fun_45C0(var_8864, var_8856, var_8848, var_8840, var_8832, var_8824, var_8816)
    var_8880 = 0;
    var_8888 = 3;
    var_8896 = 2;
    var_8904 = 101;
    var_8912 = -1;
    OP_PUSH2_C -3363913117806705623, -1180051137964617721
    var_8920 = 56;
    pri = fun_2138(var_8912, var_8904, var_8896, var_8888, var_8880, var_8872, var_8864)
    var_8928 = 15;
    var_8936 = 8;
    pri = fun_0060(var_8928)
    var_8944 = 0;
    pri = fun_2298()
    var_8952 = 1;
    var_8960 = 8;
    pri = fun_2330(var_8952)
    OP_PUSH2_C -4608983858650965606, 4629362646964817101
    var_8968 = 0;
    OP_PUSH5_C 4656972857283853681, 4637957485378676982, 4671588085359496397, 4657041664721519903, 4638114407678193172
    var_8976 = 4671531633683747308;
    var_8984 = 1;
    pri = EvCameraMove(var_8984, var_8976, var_8968, var_8960, var_8952, var_8944, var_8936, var_8928, var_8920, var_8912)
    var_8992 = 0;
    pri = fun_2918()
    OP_PUSH2_C 4624746457346762342, 4629081171988106445
    var_9000 = 5;
    OP_PUSH5_C 4657059058995471319, 4636172934026331423, 4671471468407475405, 4657127448618718986, 4635256732977138237
    var_9008 = 4671415123934110024;
    var_9016 = 30;
    pri = EvCameraMove(var_9016, var_9008, var_9000, var_8992, var_8984, var_8976, var_8968, var_8960, var_8952, var_8944)
    var_9024 = 1;
    var_9032 = 3;
    var_9040 = 0;
    var_9048 = 43;
    var_9056 = -1180051137964617721;
    var_9064 = 40;
    pri = fun_68F8(var_9056, var_9048, var_9040, var_9032, var_9024)
    var_9072 = 0;
    var_9080 = 3;
    var_9088 = 0;
    var_9096 = 101;
    var_9104 = -1;
    OP_PUSH2_C -3363903222202051724, -1180051137964617721
    var_9112 = 56;
    pri = fun_2138(var_9104, var_9096, var_9088, var_9080, var_9072, var_9064, var_9056)
    var_9120 = 15;
    var_9128 = 8;
    pri = fun_0060(var_9120)
    var_9136 = 0;
    pri = fun_2298()
    var_9144 = 1;
    var_9152 = 8;
    pri = fun_2330(var_9144)
    var_9160 = 0;
    pri = fun_23F0()
    var_9168 = -1180051137964617721;
    var_9176 = 8;
    pri = fun_0BF0(var_9168)
    var_9184 = 0;
    pri = fun_2918()
    var_9192 = 37824;
    pri = SoundPostEvent(var_9192)
    var_9200 = 1;
    var_9208 = 0;
    var_9216 = 38112;
    var_9224 = 1;
    var_9232 = 32;
    pri = fun_02E0(var_9224, var_9216, var_9208, var_9200)
    var_9240 = 0;
    pri = fun_0350()
    var_9248 = 18;
    var_9256 = 0;
    var_9264 = 0;
    var_9272 = 4137458127409209711;
    var_9280 = 107;
    var_9288 = 40;
    pri = fun_26C0(var_9280, var_9272, var_9264, var_9256, var_9248)
    var_9296 = 0;
    pri = fun_27D8()
    OP_JZER lab_F6B8
    var_9304 = 0;
    pri = fun_28C8()
// lab_F6B8
    var_8 = 38168;
    pri = SoundPostEvent(var_8)
    var_16 = 38328;
    pri = SoundPostEvent(var_16)
    pri = EvCameraStart()
    var_24 = 1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 1;
    var_56 = 3891752725908598821;
    var_64 = 40;
    pri = fun_68F8(var_56, var_48, var_40, var_32, var_24)
    var_72 = 1;
    var_80 = 3;
    var_88 = 0;
    var_96 = 1;
    var_104 = 3891749427373714188;
    var_112 = 40;
    pri = fun_68F8(var_104, var_96, var_88, var_80, var_72)
    var_120 = 1;
    var_128 = 3;
    var_136 = 0;
    var_144 = 1;
    var_152 = 3891750526885342399;
    var_160 = 40;
    pri = fun_68F8(var_152, var_144, var_136, var_128, var_120)
    var_168 = 1;
    var_176 = 3;
    var_184 = 0;
    var_192 = 8;
    var_200 = 3891747228350457766;
    var_208 = 40;
    pri = fun_68F8(var_200, var_192, var_184, var_176, var_168)
    var_216 = 1;
    var_224 = 3;
    var_232 = 0;
    var_240 = 8;
    var_248 = 3891748327862085977;
    var_256 = 40;
    pri = fun_68F8(var_248, var_240, var_232, var_224, var_216)
    var_264 = 1;
    var_272 = 3;
    var_280 = 0;
    var_288 = 7;
    var_296 = -2880323008892522216;
    var_304 = 40;
    pri = fun_68F8(var_296, var_288, var_280, var_272, var_264)
    var_312 = 1;
    var_320 = 3;
    var_328 = 0;
    var_336 = 1;
    var_344 = -2880319710357637583;
    var_352 = 40;
    pri = fun_68F8(var_344, var_336, var_328, var_320, var_312)
    var_360 = 1;
    var_368 = 3;
    var_376 = 0;
    var_384 = 7;
    var_392 = -2880320809869265794;
    var_400 = 40;
    pri = fun_68F8(var_392, var_384, var_376, var_368, var_360)
    var_408 = 1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 8;
    var_440 = -2880318610846009372;
    var_448 = 40;
    pri = fun_68F8(var_440, var_432, var_424, var_416, var_408)
    var_456 = 1;
    var_464 = 3;
    var_472 = 0;
    var_480 = 0;
    var_488 = -2880315312311124739;
    var_496 = 40;
    pri = fun_68F8(var_488, var_480, var_472, var_464, var_456)
    var_504 = 3891752725908598821;
    var_512 = 8;
    pri = fun_0BF0(var_504)
    var_520 = 3891749427373714188;
    var_528 = 8;
    pri = fun_0BF0(var_520)
    var_536 = 3891750526885342399;
    var_544 = 8;
    pri = fun_0BF0(var_536)
    var_552 = 3891747228350457766;
    var_560 = 8;
    pri = fun_0BF0(var_552)
    var_568 = 3891748327862085977;
    var_576 = 8;
    pri = fun_0BF0(var_568)
    var_584 = -2880323008892522216;
    var_592 = 8;
    pri = fun_0BF0(var_584)
    var_600 = -2880319710357637583;
    var_608 = 8;
    pri = fun_0BF0(var_600)
    var_616 = -2880320809869265794;
    var_624 = 8;
    pri = fun_0BF0(var_616)
    var_632 = -2880318610846009372;
    var_640 = 8;
    pri = fun_0BF0(var_632)
    var_648 = -2880315312311124739;
    var_656 = 8;
    pri = fun_0BF0(var_648)
    var_664 = 0;
    var_672 = 0;
    var_680 = 3891752725908598821;
    var_688 = 24;
    pri = fun_8628(var_680, var_672, var_664)
    var_696 = 0;
    var_704 = 0;
    var_712 = 3891749427373714188;
    var_720 = 24;
    pri = fun_8628(var_712, var_704, var_696)
    var_728 = 0;
    var_736 = 0;
    var_744 = 3891750526885342399;
    var_752 = 24;
    pri = fun_8628(var_744, var_736, var_728)
    var_760 = 0;
    var_768 = 0;
    var_776 = -2880319710357637583;
    var_784 = 24;
    pri = fun_8628(var_776, var_768, var_760)
    var_792 = 0;
    var_800 = 0;
    var_808 = -2880315312311124739;
    var_816 = 24;
    pri = fun_8628(var_808, var_800, var_792)
    var_824 = 3891752725908598821;
    var_832 = 8;
    pri = fun_1560(var_824)
    var_840 = 3891749427373714188;
    var_848 = 8;
    pri = fun_1560(var_840)
    var_856 = 3891750526885342399;
    var_864 = 8;
    pri = fun_1560(var_856)
    var_872 = 3891747228350457766;
    var_880 = 8;
    pri = fun_1560(var_872)
    var_888 = 3891748327862085977;
    var_896 = 8;
    pri = fun_1560(var_888)
    var_904 = -2880323008892522216;
    var_912 = 8;
    pri = fun_1560(var_904)
    var_920 = -2880319710357637583;
    var_928 = 8;
    pri = fun_1560(var_920)
    var_936 = -2880320809869265794;
    var_944 = 8;
    pri = fun_1560(var_936)
    var_952 = -2880318610846009372;
    var_960 = 8;
    pri = fun_1560(var_952)
    var_968 = -2880315312311124739;
    var_976 = 8;
    pri = fun_1560(var_968)
    var_984 = 0;
    var_992 = 38480;
    var_1000 = 3891752725908598821;
    var_1008 = 24;
    pri = fun_0B78(var_1000, var_992, var_984)
    var_1016 = 0;
    var_1024 = 38528;
    var_1032 = 3891749427373714188;
    var_1040 = 24;
    pri = fun_0B78(var_1032, var_1024, var_1016)
    var_1048 = 0;
    var_1056 = 38576;
    var_1064 = 3891750526885342399;
    var_1072 = 24;
    pri = fun_0B78(var_1064, var_1056, var_1048)
    var_1080 = 0;
    var_1088 = 38624;
    var_1096 = 3891747228350457766;
    var_1104 = 24;
    pri = fun_0B78(var_1096, var_1088, var_1080)
    var_1112 = 0;
    var_1120 = 38672;
    var_1128 = 3891748327862085977;
    var_1136 = 24;
    pri = fun_0B78(var_1128, var_1120, var_1112)
    var_1144 = 0;
    var_1152 = 38720;
    var_1160 = -2880323008892522216;
    var_1168 = 24;
    pri = fun_0B78(var_1160, var_1152, var_1144)
    var_1176 = 0;
    var_1184 = 38768;
    var_1192 = -2880319710357637583;
    var_1200 = 24;
    pri = fun_0B78(var_1192, var_1184, var_1176)
    var_1208 = 0;
    var_1216 = 38816;
    var_1224 = -2880320809869265794;
    var_1232 = 24;
    pri = fun_0B78(var_1224, var_1216, var_1208)
    var_1240 = 0;
    var_1248 = 38864;
    var_1256 = -2880318610846009372;
    var_1264 = 24;
    pri = fun_0B78(var_1256, var_1248, var_1240)
    var_1272 = 0;
    var_1280 = 38912;
    var_1288 = -2880315312311124739;
    var_1296 = 24;
    pri = fun_0B78(var_1288, var_1280, var_1272)
    var_1304 = 1;
    var_1312 = 8802641224559852288;
    var_1320 = 16;
    pri = fun_0828(var_1312, var_1304)
    var_1328 = 1;
    var_1336 = -1180051137964617721;
    var_1344 = 16;
    pri = fun_0828(var_1336, var_1328)
    var_1352 = 1;
    var_1360 = 3891752725908598821;
    var_1368 = 16;
    pri = fun_0828(var_1360, var_1352)
    var_1376 = 1;
    var_1384 = 3891749427373714188;
    var_1392 = 16;
    pri = fun_0828(var_1384, var_1376)
    var_1400 = 1;
    var_1408 = 3891750526885342399;
    var_1416 = 16;
    pri = fun_0828(var_1408, var_1400)
    var_1424 = 1;
    var_1432 = 3891747228350457766;
    var_1440 = 16;
    pri = fun_0828(var_1432, var_1424)
    var_1448 = 1;
    var_1456 = 3891748327862085977;
    var_1464 = 16;
    pri = fun_0828(var_1456, var_1448)
    var_1472 = 1;
    var_1480 = -2880323008892522216;
    var_1488 = 16;
    pri = fun_0828(var_1480, var_1472)
    var_1496 = 1;
    var_1504 = -2880319710357637583;
    var_1512 = 16;
    pri = fun_0828(var_1504, var_1496)
    var_1520 = 1;
    var_1528 = -2880320809869265794;
    var_1536 = 16;
    pri = fun_0828(var_1528, var_1520)
    var_1544 = 1;
    var_1552 = -2880318610846009372;
    var_1560 = 16;
    pri = fun_0828(var_1552, var_1544)
    var_1568 = 1;
    var_1576 = -2880315312311124739;
    var_1584 = 16;
    pri = fun_0828(var_1576, var_1568)
    var_1592 = 1;
    var_1600 = -4275866473915358187;
    var_1608 = 16;
    pri = fun_0828(var_1600, var_1592)
    var_1616 = 1;
    var_1624 = 1451425131014577226;
    var_1632 = 16;
    pri = fun_0828(var_1624, var_1616)
    var_1640 = 1;
    var_1648 = 1451426230526205437;
    var_1656 = 16;
    pri = fun_0828(var_1648, var_1640)
    var_1664 = 1;
    var_1672 = 1451246788605109846;
    var_1680 = 16;
    pri = fun_0828(var_1672, var_1664)
    var_1688 = 1;
    var_1696 = 5853608284009014273;
    var_1704 = 16;
    pri = fun_0828(var_1696, var_1688)
    var_1712 = 1;
    var_1720 = 8;
    pri = fun_0060(var_1712)
    var_1728 = 0;
    var_1736 = 0;
    var_1744 = -1180051137964617721;
    var_1752 = 24;
    pri = fun_8628(var_1744, var_1736, var_1728)
    var_1760 = -1180051137964617721;
    var_1768 = 8;
    pri = fun_0BF0(var_1760)
    var_1776 = 8;
    var_1784 = -1180051137964617721;
    var_1792 = 16;
    pri = fun_1408(var_1784, var_1776)
    var_1800 = 0;
    var_1808 = 4629250056974132838;
    var_1816 = 0;
    OP_PUSH5_C 4656076733316983685, 4633847950718701404, 4671703182236691988, 4657304118147070034, 4639177679402717676
    var_1824 = 4671520572596771881;
    var_1832 = 1;
    pri = EvCameraMove(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
    var_1840 = 0;
    pri = fun_2918()
    var_1848 = 0;
    var_1856 = 4629250056974132838;
    var_1864 = 2;
    OP_PUSH5_C 4656080251754192568, 4631736888393371484, 4671702824895412961, 4657305877365674476, 4638592915138601288
    var_1872 = 4671520215255492854;
    var_1880 = 240;
    pri = EvCameraMove(var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1888 = 34776;
    var_1896 = 8;
    var_1904 = 16;
    pri = fun_0280(var_1896, var_1888)
    var_1912 = 0;
    pri = fun_0350()
    var_1920 = 1;
    var_1928 = 1;
    var_1936 = -1;
    var_1944 = -1;
    var_1952 = 0;
    var_1960 = 10;
    var_1968 = -1180051137964617721;
    var_1976 = 56;
    pri = fun_45C0(var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1984 = 60;
    var_1992 = 8;
    pri = fun_0060(var_1984)
    var_2000 = 1;
    var_2008 = 3;
    var_2016 = 0;
    var_2024 = 10;
    var_2032 = -1180051137964617721;
    var_2040 = 40;
    pri = fun_68F8(var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2048 = 10;
    var_2056 = 8;
    pri = fun_0060(var_2048)
    var_2064 = -1180051137964617721;
    var_2072 = 8;
    pri = fun_1448(var_2064)
    var_2080 = -1180051137964617721;
    var_2088 = 8;
    pri = fun_0BF0(var_2080)
    var_2096 = 0;
    var_2104 = 3;
    var_2112 = 0;
    var_2120 = 100;
    var_2128 = -1;
    OP_PUSH2_C -3363902122690423513, -1180051137964617721
    var_2136 = 56;
    pri = fun_2138(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2144 = 1;
    var_2152 = 8;
    pri = fun_2330(var_2144)
    var_2160 = 0;
    pri = fun_23F0()
    var_2168 = 1;
    var_2176 = 0;
    var_2184 = 0;
    var_2192 = 60;
    OP_PUSH2_C 4607182418800017408, -1180051137964617721
    var_2200 = 48;
    pri = fun_0918(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2208 = -1180051137964617721;
    var_2216 = 8;
    pri = fun_0A18(var_2208)
    var_2224 = 1;
    var_2232 = 1;
    OP_PUSH4_C -4587338432941916160, 4656990295538270208, 4671578615815602176, -1180051137964617721
    var_2240 = 48;
    pri = fun_0790(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2248 = 0;
    var_2256 = 4629250056974132838;
    var_2264 = 0;
    OP_PUSH5_C 4655661645687265690, 4636347448511892029, 4671364942223418327, 4657417873620079739, 4636950508649494610
    var_2272 = 4671517015676656026;
    var_2280 = 1;
    pri = EvCameraMove(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2288 = 1;
    var_2296 = 0;
    var_2304 = 0;
    var_2312 = 60;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_2320 = 48;
    pri = fun_0918(var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2328 = 8802641224559852288;
    var_2336 = 8;
    pri = fun_0A18(var_2328)
    var_2344 = 1;
    var_2352 = 1;
    OP_PUSH4_C 4636033603912859648, 4656990295538270208, 4671474162210963456, 8802641224559852288
    var_2360 = 48;
    pri = fun_0790(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2368 = 0;
    var_2376 = 4629250056974132838;
    var_2384 = 0;
    OP_PUSH5_C 4655162599349650719, 4635662760631043359, 4671524055299852861, 4657668452320049889, 4637674603027082772
    var_2392 = 4671523244410027377;
    var_2400 = 1;
    pri = EvCameraMove(var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328)
    var_2408 = 1;
    var_2416 = 0;
    var_2424 = 4641240890982006784;
    var_2432 = 0;
    var_2440 = 0;
    OP_PUSH4_C 4656990295538270208, 4671508521949331456, 4607182418800017408, 8802641224559852288
    var_2448 = 72;
    pri = fun_08A0(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376)
    var_2456 = 1;
    var_2464 = 0;
    var_2472 = 4641240890982006784;
    var_2480 = 0;
    var_2488 = 0;
    OP_PUSH4_C 4656990295538270208, 4671534635350491136, 4607182418800017408, -1180051137964617721
    var_2496 = 72;
    pri = fun_08A0(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2504 = 1;
    var_2512 = 0;
    var_2520 = 15;
    var_2528 = 2170;
    pri = float(var_2528)
    var_2536 = pri;
    var_2544 = 150;
    pri = float(var_2544)
    var_2552 = pri;
    var_2560 = 21120;
    pri = float(var_2560)
    var_2568 = pri;
    var_2576 = 8802641224559852288;
    var_2584 = 56;
    pri = fun_1270(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2592 = 1;
    var_2600 = 0;
    var_2608 = 15;
    var_2616 = 2170;
    pri = float(var_2616)
    var_2624 = pri;
    var_2632 = 130;
    pri = float(var_2632)
    var_2640 = pri;
    OP_PUSH2_C 4671508521949331456, -1180051137964617721
    var_2648 = 56;
    pri = fun_1270(var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2656 = 0;
    var_2664 = 15;
    var_2672 = -4620693217682128896;
    var_2680 = 0;
    var_2688 = -1180051137964617721;
    var_2696 = 40;
    pri = fun_1370(var_2688, var_2680, var_2672, var_2664, var_2656)
    var_2704 = 8802641224559852288;
    var_2712 = 8;
    pri = fun_0A18(var_2704)
    var_2720 = -1180051137964617721;
    var_2728 = 8;
    pri = fun_0A18(var_2720)
    var_2736 = 0;
    var_2744 = 3;
    var_2752 = 0;
    var_2760 = 100;
    var_2768 = -1;
    OP_PUSH2_C -3363060996295031323, -1180051137964617721
    var_2776 = 56;
    pri = fun_2138(var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2784 = 1;
    var_2792 = 8;
    pri = fun_2330(var_2784)
    var_2800 = 0;
    pri = fun_23F0()
    var_2808 = 1;
    var_2816 = 0;
    var_2824 = 15;
    OP_PUSH2_C -1180051137964617721, 8802641224559852288
    var_2832 = 40;
    pri = fun_12D8(var_2824, var_2816, var_2808, var_2800, var_2792)
    var_2840 = 1;
    var_2848 = 0;
    var_2856 = 15;
    OP_PUSH2_C 8802641224559852288, -1180051137964617721
    var_2864 = 40;
    pri = fun_12D8(var_2856, var_2848, var_2840, var_2832, var_2824)
    var_2872 = 38960;
    pri = SoundPostEvent(var_2872)
    var_2880 = 1;
    var_2888 = -1;
    var_2896 = -1;
    var_2904 = 1;
    var_2912 = 8802641224559852288;
    var_2920 = 40;
    pri = fun_8838(var_2912, var_2904, var_2896, var_2888, var_2880)
    var_2928 = 1;
    var_2936 = 1;
    var_2944 = -1;
    var_2952 = -1;
    var_2960 = 0;
    var_2968 = 40;
    var_2976 = -1180051137964617721;
    var_2984 = 56;
    pri = fun_45C0(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928)
    var_2992 = 1;
    var_3000 = 1;
    var_3008 = -1;
    var_3016 = -1;
    var_3024 = 0;
    var_3032 = 10;
    var_3040 = 3891752725908598821;
    var_3048 = 56;
    pri = fun_45C0(var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3056 = 1;
    var_3064 = 1;
    var_3072 = -1;
    var_3080 = -1;
    var_3088 = 0;
    var_3096 = 10;
    var_3104 = 3891749427373714188;
    var_3112 = 56;
    pri = fun_45C0(var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056)
    var_3120 = 1;
    var_3128 = 1;
    var_3136 = -1;
    var_3144 = -1;
    var_3152 = 0;
    var_3160 = 10;
    var_3168 = 3891750526885342399;
    var_3176 = 56;
    pri = fun_45C0(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120)
    var_3184 = 1;
    var_3192 = 1;
    var_3200 = -1;
    var_3208 = -1;
    var_3216 = 0;
    var_3224 = 10;
    var_3232 = 3891747228350457766;
    var_3240 = 56;
    pri = fun_45C0(var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184)
    var_3248 = 1;
    var_3256 = 1;
    var_3264 = -1;
    var_3272 = -1;
    var_3280 = 0;
    var_3288 = 10;
    var_3296 = 3891748327862085977;
    var_3304 = 56;
    pri = fun_45C0(var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3312 = 1;
    var_3320 = 1;
    var_3328 = -1;
    var_3336 = -1;
    var_3344 = 0;
    var_3352 = 10;
    var_3360 = -2880323008892522216;
    var_3368 = 56;
    pri = fun_45C0(var_3360, var_3352, var_3344, var_3336, var_3328, var_3320, var_3312)
    var_3376 = 1;
    var_3384 = 1;
    var_3392 = -1;
    var_3400 = -1;
    var_3408 = 0;
    var_3416 = 10;
    var_3424 = -2880319710357637583;
    var_3432 = 56;
    pri = fun_45C0(var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376)
    var_3440 = 1;
    var_3448 = 1;
    var_3456 = -1;
    var_3464 = -1;
    var_3472 = 0;
    var_3480 = 10;
    var_3488 = -2880320809869265794;
    var_3496 = 56;
    pri = fun_45C0(var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440)
    var_3504 = 1;
    var_3512 = 1;
    var_3520 = -1;
    var_3528 = -1;
    var_3536 = 0;
    var_3544 = 10;
    var_3552 = -2880318610846009372;
    var_3560 = 56;
    pri = fun_45C0(var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504)
    var_3568 = 1;
    var_3576 = 1;
    var_3584 = -1;
    var_3592 = -1;
    var_3600 = 0;
    var_3608 = 10;
    var_3616 = -2880315312311124739;
    var_3624 = 56;
    pri = fun_45C0(var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568)
    var_3632 = 15;
    var_3640 = 8;
    pri = fun_0060(var_3632)
    var_3648 = 0;
    var_3656 = 4626435307207026278;
    var_3664 = 0;
    OP_PUSH5_C 4654249169069759529, 4634822557825562051, 4671522898063864627, 4657211737180104294, 4636835103909043241
    var_3672 = 4671522089922818212;
    var_3680 = 1;
    pri = EvCameraMove(var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608)
    var_3688 = 30;
    var_3696 = 8;
    pri = fun_0060(var_3688)
    var_3704 = 1006;
    var_3712 = 39160;
    var_3720 = 16;
    pri = fun_2680(var_3712, var_3704)
    var_3728 = 15;
    var_3736 = 8;
    pri = fun_0060(var_3728)
    var_3744 = 0;
    var_3752 = 4629024876992764314;
    var_3760 = 0;
    OP_PUSH5_C 4653604767294952571, 4630176109647510897, 4671517771590900122, 4655963307697462313, 4634181498566103532
    var_3768 = 4671675323360823214;
    var_3776 = 1;
    pri = EvCameraMove(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720, var_3712, var_3704)
    var_3784 = 0;
    pri = fun_2918()
    var_3792 = 0;
    var_3800 = 4629024876992764314;
    var_3808 = 3;
    OP_PUSH5_C 4653475728610316780, 4630176109647510897, 4671525316989445734, 4655834269012826522, 4634181498566103532
    var_3816 = 4671682868759368827;
    var_3824 = 90;
    pri = EvCameraMove(var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768, var_3760, var_3752)
    var_3832 = 8802641224559852288;
    var_3840 = 8;
    pri = fun_8D20(var_3832)
    var_3848 = 1;
    var_3856 = 3;
    var_3864 = 0;
    var_3872 = 40;
    var_3880 = -1180051137964617721;
    var_3888 = 40;
    pri = fun_68F8(var_3880, var_3872, var_3864, var_3856, var_3848)
    var_3896 = 0;
    pri = fun_2918()
    var_3904 = 0;
    var_3912 = 4631347045550627226;
    var_3920 = 0;
    OP_PUSH5_C 4655314991661260472, 4638428252277225554, 4671635438576525640, 4657258136570796442, 4636973730335073239
    var_3928 = 4671485195810148188;
    var_3936 = 1;
    pri = EvCameraMove(var_3936, var_3928, var_3920, var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864)
    var_3944 = 3;
    var_3952 = 0;
    var_3960 = 281482660040367161;
    var_3968 = 24;
    pri = fun_21E8(var_3960, var_3952, var_3944)
    var_3976 = 1;
    var_3984 = 8;
    pri = fun_2330(var_3976)
    var_3992 = 0;
    pri = fun_23F0()
    var_4000 = 0;
    var_4008 = 3;
    var_4016 = 0;
    var_4024 = 100;
    var_4032 = -1;
    OP_PUSH2_C -3363063195318287745, -1180051137964617721
    var_4040 = 56;
    pri = fun_2138(var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984)
    var_4048 = 1;
    var_4056 = 8;
    pri = fun_2330(var_4048)
    var_4064 = 0;
    pri = fun_23F0()
    var_4072 = 8902961857111611602;
    var_4080 = 39288;
    var_4088 = -1180051137964617721;
    var_4096 = 24;
    pri = fun_8FE0(var_4088, var_4080, var_4072)
    var_4104 = -1180051137964617721;
    var_4112 = 8;
    pri = fun_13C8(var_4104)
    var_4120 = 8;
    var_4128 = 10;
    var_4136 = 0;
    var_4144 = 0;
    var_4152 = -1180051137964617721;
    var_4160 = 40;
    pri = fun_1370(var_4152, var_4144, var_4136, var_4128, var_4120)
    var_4168 = 15;
    var_4176 = -1180051137964617721;
    var_4184 = 16;
    pri = fun_1330(var_4176, var_4168)
    var_4192 = 1;
    var_4200 = 1;
    var_4208 = -1;
    var_4216 = -1;
    var_4224 = 0;
    var_4232 = 6;
    var_4240 = -1180051137964617721;
    var_4248 = 56;
    pri = fun_45C0(var_4240, var_4232, var_4224, var_4216, var_4208, var_4200, var_4192)
    var_4256 = 0;
    var_4264 = 3;
    var_4272 = 0;
    var_4280 = 100;
    var_4288 = -1;
    OP_PUSH2_C -3363062095806659534, -1180051137964617721
    var_4296 = 56;
    pri = fun_2138(var_4288, var_4280, var_4272, var_4264, var_4256, var_4248, var_4240)
    var_4304 = 39352;
    var_4312 = -1180051137964617721;
    var_4320 = 16;
    pri = fun_0DF0(var_4312, var_4304)
    var_4328 = 1;
    var_4336 = 8;
    pri = fun_2330(var_4328)
    var_4344 = 0;
    pri = fun_23F0()
    var_4352 = 1;
    var_4360 = 3;
    var_4368 = 0;
    var_4376 = 6;
    var_4384 = -1180051137964617721;
    var_4392 = 40;
    pri = fun_68F8(var_4384, var_4376, var_4368, var_4360, var_4352)
    var_4400 = 3;
    var_4408 = 1000;
    pri = EvCameraEnd(var_4408, var_4400)
    var_4416 = 0;
    var_4424 = 8802641224559852288;
    var_4432 = 16;
    pri = fun_0828(var_4424, var_4416)
    var_4440 = 0;
    var_4448 = -1180051137964617721;
    var_4456 = 16;
    pri = fun_0828(var_4448, var_4440)
    var_4464 = 0;
    var_4472 = 3891752725908598821;
    var_4480 = 16;
    pri = fun_0828(var_4472, var_4464)
    var_4488 = 0;
    var_4496 = 3891749427373714188;
    var_4504 = 16;
    pri = fun_0828(var_4496, var_4488)
    var_4512 = 0;
    var_4520 = 3891750526885342399;
    var_4528 = 16;
    pri = fun_0828(var_4520, var_4512)
    var_4536 = 0;
    var_4544 = 3891747228350457766;
    var_4552 = 16;
    pri = fun_0828(var_4544, var_4536)
    var_4560 = 0;
    var_4568 = 3891748327862085977;
    var_4576 = 16;
    pri = fun_0828(var_4568, var_4560)
    var_4584 = 0;
    var_4592 = -2880323008892522216;
    var_4600 = 16;
    pri = fun_0828(var_4592, var_4584)
    var_4608 = 0;
    var_4616 = -2880319710357637583;
    var_4624 = 16;
    pri = fun_0828(var_4616, var_4608)
    var_4632 = 0;
    var_4640 = -2880320809869265794;
    var_4648 = 16;
    pri = fun_0828(var_4640, var_4632)
    var_4656 = 0;
    var_4664 = -2880318610846009372;
    var_4672 = 16;
    pri = fun_0828(var_4664, var_4656)
    var_4680 = 0;
    var_4688 = -2880315312311124739;
    var_4696 = 16;
    pri = fun_0828(var_4688, var_4680)
    var_4704 = 0;
    var_4712 = -4275866473915358187;
    var_4720 = 16;
    pri = fun_0828(var_4712, var_4704)
    var_4728 = 0;
    var_4736 = 1451425131014577226;
    var_4744 = 16;
    pri = fun_0828(var_4736, var_4728)
    var_4752 = 0;
    var_4760 = 1451426230526205437;
    var_4768 = 16;
    pri = fun_0828(var_4760, var_4752)
    var_4776 = 0;
    var_4784 = 1451246788605109846;
    var_4792 = 16;
    pri = fun_0828(var_4784, var_4776)
    var_4800 = 0;
    var_4808 = 5853608284009014273;
    var_4816 = 16;
    pri = fun_0828(var_4808, var_4800)
    var_4824 = 15;
    var_4832 = 8802641224559852288;
    var_4840 = 16;
    pri = fun_1330(var_4832, var_4824)
    pri = 0;
    return pri;
}
// fun_11BF0
fun_11BF0() {
    pri = 0;
    return pri;
}
// fun_11C08
fun_11C08() {
    var_8 = 1370;
    var_16 = 8;
    pri = fun_A400(var_8)
    var_24 = 70;
    var_32 = 8021964092511761817;
    pri = WorkSet(var_32, var_24)
    var_40 = 5871714809546737952;
    pri = FlagReset(var_40)
    var_48 = 4949930660899271115;
    pri = VanishFlagSet(var_48)
    var_56 = 3593635681699453544;
    pri = VanishFlagSet(var_56)
    var_64 = -2963512058666503901;
    pri = VanishFlagSet(var_64)
    var_72 = -1397410882338721035;
    pri = VanishFlagSet(var_72)
    var_80 = -7205741670279695942;
    pri = VanishFlagReset(var_80)
    var_88 = -3446232929749219646;
    var_96 = 8;
    pri = fun_9410(var_88)
    var_104 = 39504;
    var_112 = 8;
    pri = fun_29A8(var_104)
    var_120 = -6557270466399249546;
    pri = FlagSet(var_120)
    var_128 = -7105276902789319269;
    pri = FlagSet(var_128)
    pri = 0;
    return pri;
}
// fun_11DF8
fun_11DF8() {
    var_8 = 5932353599669561925;
    pri = ReserveScript(var_8)
    var_16 = 0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_9A60(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_11E60
fun_11E60() {
    var_8 = -90;
    var_16 = -1;
    var_24 = 2850;
    var_32 = 3800;
    OP_PUSH2_C -7806788798280494145, -786951205769402670
    var_40 = 8;
    var_48 = 56;
    pri = fun_A360(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_11ED0
fun_11ED0() {
    var_8 = 0;
    pri = fun_A5D0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_A6F0()
    var_24 = 0;
    pri = fun_A748()
    var_32 = 0;
    pri = fun_A760()
    var_40 = 0;
    pri = fun_A778()
    var_48 = 0;
    pri = fun_11BF0()
    var_56 = 0;
    pri = fun_11C08()
    var_64 = 0;
    pri = fun_11DF8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_11FD8
fun_11FD8() {
    var_8 = 0;
    pri = fun_A748()
    var_16 = 0;
    pri = fun_11C08()
    pri = 0;
    return pri;
}
// fun_12020
fun_12020() {
    var_8 = 5298792739322404171;
    var_16 = 8;
    pri = fun_A150(var_8)
    OP_JZER lab_12098
    var_24 = 1330;
    var_32 = 8;
    pri = fun_A400(var_24)
    var_40 = 0;
    pri = fun_11E60()
// lab_12098
    pri = 0;
    return pri;
}
