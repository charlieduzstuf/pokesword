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
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0468
fun_0468() {
    OP_JUMP lab_0480
// lab_0480
    pri = IsLoadedLogoFade_()
    OP_JZER lab_04B8
    pri = 0;
    return pri;
// lab_04B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
    pri = 0;
    return pri;
}
// fun_04F8
fun_04F8() {
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
// fun_0598
fun_0598() {
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
// fun_0658
fun_0658() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_06A0
// lab_06A0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06E0
    OP_JUMP lab_0750
// lab_06E0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0720
    OP_JUMP lab_0750
// lab_0720
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06A0
// lab_0750
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0840
fun_0840() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0880
fun_0880() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08F8
fun_08F8() {
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
// fun_0970
fun_0970() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14A8(var_8)
    OP_JZER lab_0A90
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_14D8(var_24)
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
    pri = fun_14A8(var_8)
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
    pri = fun_0DF0(var_8)
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
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E78
    pri = 0;
    return pri;
// lab_0E78
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_14A8(var_8)
    OP_JZER lab_0FA8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED0
    OP_ZERO_P_S 64
// lab_0FA8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE0
    OP_CONST_S 64, 1
// lab_0FE0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1018
    OP_CONST_S 72, 1
// lab_1018
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
// lab_0ED0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF8
    OP_ZERO_P_S 72
// lab_0EF8
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
    OP_JUMP lab_10B8
// lab_10B8
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1148
fun_1148() {
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
// fun_11B0
fun_11B0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = StartFieldObjectEyeLookAtFieldObject_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13B0
fun_13B0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_12F8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1370(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1450
fun_1450() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1338(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_13B0(var_24)
    pri = 0;
    return pri;
}
// fun_14A8
fun_14A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_14D8
fun_14D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1508
fun_1508() {
    OP_JUMP lab_1520
// lab_1520
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_15B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_15A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    pri = 0;
    return pri;
// lab_15B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1640
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1630
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    pri = 0;
    return pri;
// lab_1640
    pri = 0;
    return pri;
// lab_1630
    OP_JUMP lab_1650
// lab_1650
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1520
    pri = 0;
    return pri;
// lab_15A0
    OP_JUMP lab_1650
}
// fun_1690
fun_1690() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BF0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1508(var_40)
    pri = 0;
    return pri;
}
// fun_1718
fun_1718() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1750
fun_1750() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1778
fun_1778() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
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
// switch_1E58
        case default:
        {
// switch_1E58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1EA0
// lab_1EA0
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
            OP_JNZ lab_1F48
            var_88 = 0;
            pri = fun_2218()
// lab_1F48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A40
                case default:
                {
// switch_1A40_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AB8
// lab_1AB8
                    OP_JUMP lab_1EA0
                }
                case 0x0:
                {
// switch_1A40_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1AB8
                }
                case 0x1:
                {
// switch_1A40_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1AB8
                }
                case 0x2:
                {
// switch_1A40_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1AB8
                }
                case 0x3:
                {
// switch_1A40_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1AB8
                }
                case 0x4:
                {
// switch_1A40_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1AB8
                }
                case 0x5:
                {
// switch_1A40_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1AB8
                }
            }
        }
        case 0x65:
        {
// switch_1E58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BF8
                case default:
                {
// switch_1BF8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C70
// lab_1C70
                    OP_JUMP lab_1EA0
                }
                case 0x0:
                {
// switch_1BF8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C70
                }
                case 0x1:
                {
// switch_1BF8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C70
                }
                case 0x2:
                {
// switch_1BF8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C70
                }
                case 0x3:
                {
// switch_1BF8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C70
                }
                case 0x4:
                {
// switch_1BF8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C70
                }
                case 0x5:
                {
// switch_1BF8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C70
                }
            }
        }
        case 0x66:
        {
// switch_1E58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1DB0
                case default:
                {
// switch_1DB0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E28
// lab_1E28
                    OP_JUMP lab_1EA0
                }
                case 0x0:
                {
// switch_1DB0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E28
                }
                case 0x1:
                {
// switch_1DB0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E28
                }
                case 0x2:
                {
// switch_1DB0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E28
                }
                case 0x3:
                {
// switch_1DB0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E28
                }
                case 0x4:
                {
// switch_1DB0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E28
                }
                case 0x5:
                {
// switch_1DB0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E28
                }
            }
        }
    }
}
// fun_1F60
fun_1F60() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1840(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1FC8
fun_1FC8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BB8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2070
    pri = 1;
    return pri;
// lab_2070
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20B8
fun_20B8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2108
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1FC8(var_8)
    arg_2 = pri;
// lab_2108
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1840(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1F60(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2168(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
    OP_JUMP lab_2230
// lab_2230
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2270
    pri = 0;
    return pri;
// lab_2270
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2230
    pri = 0;
    return pri;
}
// fun_22B0
fun_22B0() {
    var_8 = 0;
    pri = fun_2218()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2360
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2360
    pri = 0;
    return pri;
}
// fun_2370
fun_2370() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_23A0
fun_23A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2418()
    return pri;
}
// fun_2418
fun_2418() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2458
fun_2458() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    OP_JUMP lab_24A8
// lab_24A8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_24F0
    OP_JUMP lab_2520
    OP_JUMP lab_2510
// lab_24F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2520
    pri = 0;
    return pri;
// lab_2510
    OP_JUMP lab_24A8
}
// fun_2530
fun_2530() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2560
fun_2560() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2600
fun_2600() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2650
fun_2650() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26F0
fun_26F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2730
fun_2730() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 0;
    pri = StartLoadTrainerBattleSeamless_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2790
fun_2790() {
    OP_JUMP lab_27A8
// lab_27A8
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_27E0
    pri = 0;
    return pri;
// lab_27E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27A8
    pri = 0;
    return pri;
}
// fun_2820
fun_2820() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2850
fun_2850() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_28C8
fun_28C8() {
    var_8 = 0;
    pri = fun_2850()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2948
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2948
    pri = 1;
    return pri;
// lab_2948
    var_8 = 0;
    pri = fun_2850()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2988
    pri = 1;
    return pri;
// lab_2988
    var_8 = 0;
    pri = fun_2850()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_29B8
fun_29B8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2A08
fun_2A08() {
    OP_JUMP lab_2A20
// lab_2A20
    pri = EvCameraMoveWait_()
    OP_JZER lab_2A58
    pri = 0;
    return pri;
// lab_2A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A20
    pri = 0;
    return pri;
}
// fun_2A98
fun_2A98() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2B00(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2BD8()
    pri = 0;
    return pri;
}
// fun_2B00
fun_2B00() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B58
fun_2B58() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2B00(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2BD8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2BD8
fun_2BD8() {
    OP_JUMP lab_2BF0
// lab_2BF0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2C58
// lab_2C48
    pri = 0;
    return pri;
// lab_2C58
    OP_JUMP lab_2BF0
    pri = 0;
    return pri;
}
// fun_2C78
fun_2C78() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_2CB0
fun_2CB0() {
    pri = arg_6;
    OP_JNZ lab_2CE8
    var_8 = 0;
    pri = fun_10C8()
// lab_2CE8
    pri = arg_1;
    switch (pri) {
// switch_4250
        case default:
        {
// switch_4250_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_45A0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_45A0
            pri = 1;
            OP_JUMP lab_45A8
// lab_45A0
            pri = 0;
// lab_45A8
            OP_JZER lab_4700
            var_16 = 8320;
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
            OP_JUMP lab_4760
// lab_4700
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
// lab_4760
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_47C0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4820
// lab_47C0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4820
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4820
            pri = arg_2;
            OP_JZER lab_4860
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4860
            var_8 = 0;
            pri = fun_1108()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4250_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x1:
        {
// switch_4250_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x2:
        {
// switch_4250_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x3:
        {
// switch_4250_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x4:
        {
// switch_4250_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x5:
        {
// switch_4250_case_0x5
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0x6:
        {
// switch_4250_case_0x6
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0x7:
        {
// switch_4250_case_0x7
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0x8:
        {
// switch_4250_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x9:
        {
// switch_4250_case_0x9
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0xa:
        {
// switch_4250_case_0xa
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0xb:
        {
// switch_4250_case_0xb
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0xc:
        {
// switch_4250_case_0xc
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0xd:
        {
// switch_4250_case_0xd
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0xe:
        {
// switch_4250_case_0xe
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0xf:
        {
// switch_4250_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x10:
        {
// switch_4250_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x11:
        {
// switch_4250_case_0x11
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0x12:
        {
// switch_4250_case_0x12
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0x13:
        {
// switch_4250_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x14:
        {
// switch_4250_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x15:
        {
// switch_4250_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x16:
        {
// switch_4250_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x17:
        {
// switch_4250_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x18:
        {
// switch_4250_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x19:
        {
// switch_4250_case_0x19
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4250_case_default
        }
        case 0x1a:
        {
// switch_4250_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
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
            pri = fun_0E28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4250_case_default
        }
        case 0x1b:
        {
// switch_4250_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
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
            pri = fun_0E28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4250_case_default
        }
        case 0x1c:
        {
// switch_4250_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B40(var_48, var_40)
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
            pri = fun_0E28(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4250_case_default
        }
        case 0x1d:
        {
// switch_4250_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x1e:
        {
// switch_4250_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x1f:
        {
// switch_4250_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x20:
        {
// switch_4250_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x21:
        {
// switch_4250_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x22:
        {
// switch_4250_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x23:
        {
// switch_4250_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x24:
        {
// switch_4250_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x25:
        {
// switch_4250_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x26:
        {
// switch_4250_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x27:
        {
// switch_4250_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x28:
        {
// switch_4250_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
        case 0x29:
        {
// switch_4250_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4250_case_default
        }
    }
}
// fun_4890
fun_4890() {
    pri = arg_5;
    OP_JNZ lab_48C8
    var_8 = 0;
    pri = fun_10C8()
// lab_48C8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4918
    OP_CONST_S -8, -1
// lab_4918
    pri = arg_1;
    switch (pri) {
// switch_63D0
        case default:
        {
// switch_63D0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6878
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BB8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6878
            pri = 1;
            OP_JUMP lab_6880
// lab_6878
            pri = 0;
// lab_6880
            OP_JZER lab_68D0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6B28
// lab_68D0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6938
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6938
            pri = 1;
            OP_JUMP lab_6940
// lab_6938
            pri = 0;
// lab_6940
            OP_JZER lab_6AC8
            var_16 = 28456;
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
            OP_JUMP lab_6B28
// lab_6AC8
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
// lab_6B28
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6B98
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6B98
            var_8 = 0;
            pri = fun_1108()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_63D0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1:
        {
// switch_63D0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2:
        {
// switch_63D0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x3:
        {
// switch_63D0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x4:
        {
// switch_63D0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x5:
        {
// switch_63D0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DF0(var_40)
            OP_JUMP switch_63D0_case_default
        }
        case 0x6:
        {
// switch_63D0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x7:
        {
// switch_63D0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x8:
        {
// switch_63D0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x9:
        {
// switch_63D0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0xa:
        {
// switch_63D0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0xb:
        {
// switch_63D0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0xc:
        {
// switch_63D0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0xd:
        {
// switch_63D0_case_0xd
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0xe:
        {
// switch_63D0_case_0xe
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0xf:
        {
// switch_63D0_case_0xf
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x10:
        {
// switch_63D0_case_0x10
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x11:
        {
// switch_63D0_case_0x11
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x12:
        {
// switch_63D0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x13:
        {
// switch_63D0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x14:
        {
// switch_63D0_case_0x14
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x15:
        {
// switch_63D0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x16:
        {
// switch_63D0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x17:
        {
// switch_63D0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x18:
        {
// switch_63D0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x19:
        {
// switch_63D0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1a:
        {
// switch_63D0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1b:
        {
// switch_63D0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1c:
        {
// switch_63D0_case_0x1c
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1d:
        {
// switch_63D0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1e:
        {
// switch_63D0_case_0x1e
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x1f:
        {
// switch_63D0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x20:
        {
// switch_63D0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x21:
        {
// switch_63D0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x22:
        {
// switch_63D0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x23:
        {
// switch_63D0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x24:
        {
// switch_63D0_case_0x24
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x25:
        {
// switch_63D0_case_0x25
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x26:
        {
// switch_63D0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x27:
        {
// switch_63D0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x28:
        {
// switch_63D0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x29:
        {
// switch_63D0_case_0x29
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2a:
        {
// switch_63D0_case_0x2a
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2b:
        {
// switch_63D0_case_0x2b
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2c:
        {
// switch_63D0_case_0x2c
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2d:
        {
// switch_63D0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2e:
        {
// switch_63D0_case_0x2e
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x2f:
        {
// switch_63D0_case_0x2f
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x30:
        {
// switch_63D0_case_0x30
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x31:
        {
// switch_63D0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x32:
        {
// switch_63D0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x33:
        {
// switch_63D0_case_0x33
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x34:
        {
// switch_63D0_case_0x34
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x35:
        {
// switch_63D0_case_0x35
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x36:
        {
// switch_63D0_case_0x36
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x37:
        {
// switch_63D0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x38:
        {
// switch_63D0_case_0x38
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
            pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63D0_case_default
        }
        case 0x39:
        {
// switch_63D0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x3a:
        {
// switch_63D0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x3b:
        {
// switch_63D0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x3c:
        {
// switch_63D0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x3d:
        {
// switch_63D0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
        case 0x3e:
        {
// switch_63D0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            OP_JUMP switch_63D0_case_default
        }
    }
}
// fun_6BC8
fun_6BC8() {
    pri = arg_4;
    OP_JNZ lab_6C00
    var_8 = 0;
    pri = fun_10C8()
// lab_6C00
    pri = arg_1;
    switch (pri) {
// switch_7FD8
        case default:
        {
// switch_7FD8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_14A8(var_264)
            OP_JZER lab_85A0
            pri = arg_3;
            switch (pri) {
// switch_8548
                case default:
                {
// switch_8548_case_default
                    OP_JUMP lab_8858
// lab_8858
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_88C8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_88C8
                    var_8 = 0;
                    pri = fun_1108()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8548_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8548_case_default
                }
                case 0x2:
                {
// switch_8548_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8548_case_default
                }
                case 0x3:
                {
// switch_8548_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8548_case_default
                }
            }
// lab_85A0
            pri = arg_1;
            OP_JZER lab_85F0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_85F0
            pri = 0;
            OP_JUMP lab_85F8
// lab_85F0
            pri = 1;
// lab_85F8
            OP_JZER lab_8660
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BB8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8660
            pri = 1;
            OP_JUMP lab_8668
// lab_8660
            pri = 0;
// lab_8668
            OP_JZER lab_86B8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8858
// lab_86B8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8720
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8858
// lab_8720
            var_16 = 29880;
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
// switch_7FD8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1:
        {
// switch_7FD8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2:
        {
// switch_7FD8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x3:
        {
// switch_7FD8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x4:
        {
// switch_7FD8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x5:
        {
// switch_7FD8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DF0(var_40)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x6:
        {
// switch_7FD8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x7:
        {
// switch_7FD8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x8:
        {
// switch_7FD8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x9:
        {
// switch_7FD8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0xa:
        {
// switch_7FD8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0xb:
        {
// switch_7FD8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0xc:
        {
// switch_7FD8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0xd:
        {
// switch_7FD8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0xe:
        {
// switch_7FD8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0xf:
        {
// switch_7FD8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x10:
        {
// switch_7FD8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x11:
        {
// switch_7FD8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x12:
        {
// switch_7FD8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x13:
        {
// switch_7FD8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x14:
        {
// switch_7FD8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x15:
        {
// switch_7FD8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x16:
        {
// switch_7FD8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x17:
        {
// switch_7FD8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x18:
        {
// switch_7FD8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x19:
        {
// switch_7FD8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1a:
        {
// switch_7FD8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1b:
        {
// switch_7FD8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1c:
        {
// switch_7FD8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1d:
        {
// switch_7FD8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1e:
        {
// switch_7FD8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x1f:
        {
// switch_7FD8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x20:
        {
// switch_7FD8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x21:
        {
// switch_7FD8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x22:
        {
// switch_7FD8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x23:
        {
// switch_7FD8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x24:
        {
// switch_7FD8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x25:
        {
// switch_7FD8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x26:
        {
// switch_7FD8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x27:
        {
// switch_7FD8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x28:
        {
// switch_7FD8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x29:
        {
// switch_7FD8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2a:
        {
// switch_7FD8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2b:
        {
// switch_7FD8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2c:
        {
// switch_7FD8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2d:
        {
// switch_7FD8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2e:
        {
// switch_7FD8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x2f:
        {
// switch_7FD8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x30:
        {
// switch_7FD8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x31:
        {
// switch_7FD8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x32:
        {
// switch_7FD8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x33:
        {
// switch_7FD8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x34:
        {
// switch_7FD8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x35:
        {
// switch_7FD8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x36:
        {
// switch_7FD8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x37:
        {
// switch_7FD8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x38:
        {
// switch_7FD8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x39:
        {
// switch_7FD8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x3a:
        {
// switch_7FD8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x3b:
        {
// switch_7FD8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x3c:
        {
// switch_7FD8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x3d:
        {
// switch_7FD8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
        case 0x3e:
        {
// switch_7FD8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B78(var_24, var_16, var_8)
            OP_JUMP switch_7FD8_case_default
        }
    }
}
// fun_88F8
fun_88F8() {
    pri = arg_4;
    OP_JNZ lab_8930
    var_8 = 0;
    pri = fun_10C8()
// lab_8930
    pri = arg_1;
    OP_JNZ lab_89D8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30352;
    var_72 = 30344;
    var_80 = 30200;
    var_88 = 30048;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_89D8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8A38
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8A38
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8AE8
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30808;
    var_72 = 30664;
    var_80 = 30512;
    var_88 = 30360;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8AE8
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_8B98
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31440;
    var_72 = 31288;
    var_80 = 31120;
    var_88 = 30944;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8B98
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8C48
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31640;
    var_72 = 31632;
    var_80 = 31624;
    var_88 = 31448;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8C48
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_8CF8
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32056;
    var_72 = 31928;
    var_80 = 31792;
    var_88 = 31648;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E28(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8CF8
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8D58
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8D58
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_8DB8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8DB8
    var_8 = 0;
    pri = fun_1108()
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
    pri = fun_2CB0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8E78
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8FD0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8F38
    var_24 = 32224;
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
    pri = fun_2CB0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8FE0
fun_8FE0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8DE0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9068(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9068
fun_9068() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9408(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_90D0
fun_90D0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9140
    OP_CONST_S -8, 1
// lab_9140
    pri = arg_0;
    OP_JNZ lab_9160
    OP_ZERO_P_S -8
// lab_9160
    pri = var_8;
    OP_JZER lab_91E8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_91E8
    pri = 0;
    return pri;
}
// fun_9200
fun_9200() {
    var_8 = 32328;
    var_16 = 8;
    pri = fun_2458(var_8)
    var_24 = 0;
    pri = fun_2490()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2560(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_26A0(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_2530()
    var_88 = 32560;
    var_96 = 8;
    pri = fun_2458(var_88)
    var_104 = 0;
    pri = fun_2490()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_8DE0(var_128, var_120, var_112)
    var_144 = 32720;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_21B8(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0658(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_22B0(var_200)
    var_216 = 0;
    pri = fun_2370()
    var_224 = 0;
    pri = fun_2530()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_2C78(var_232)
    pri = 0;
    return pri;
}
// fun_9408
fun_9408() {
    var_8 = 32904;
    var_16 = 8;
    pri = fun_2458(var_8)
    var_24 = 0;
    pri = fun_2490()
    pri = arg_3;
    OP_JNZ lab_9528
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_94F0
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9598(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9518
// lab_9528
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9738(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_94F0
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9660(var_16, var_8)
// lab_9518
    OP_JUMP lab_9570
// lab_9570
    var_8 = 0;
    pri = fun_2530()
    pri = 0;
    return pri;
}
// fun_9598
fun_9598() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9738(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9648
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9648
    pri = 0;
    return pri;
}
// fun_9660
fun_9660() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_25B0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_21B8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_22B0(var_72)
    var_88 = 0;
    pri = fun_2370()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2560(var_96)
    pri = 0;
    return pri;
}
// fun_9738
fun_9738() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9780
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9A40(var_8)
// lab_9780
    pri = arg_4;
    OP_JNZ lab_97E8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2560(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_25B0(var_40, var_32, var_24)
// lab_97E8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9888
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2600(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_21B8(var_56, var_48, var_40)
    OP_JUMP lab_9978
// lab_9888
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9940
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9940
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9940
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_21B8(var_24, var_16, var_8)
// lab_9978
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_99B8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
// lab_99B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_22B0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9C48(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_90D0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9A40
fun_9A40() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9AA0
    var_16 = 33064;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9AA0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9BE0
        case default:
        {
// switch_9BE0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9BD0
            var_16 = 33608;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9BD0
            OP_JUMP lab_9C18
// lab_9C18
            var_8 = 33824;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9BE0_case_0x1
            var_8 = 33280;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9C18
        }
        case 0x2:
        {
// switch_9BE0_case_0x2
            var_8 = 33408;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9C18
        }
    }
}
// fun_9C48
fun_9C48() {
    pri = arg_2;
    OP_JNZ lab_9D30
    var_8 = 0;
    var_16 = 8;
    pri = fun_2560(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_25B0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2650(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9D30
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_21B8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_22B0(var_40)
    var_56 = 0;
    pri = fun_2370()
    pri = 0;
    return pri;
}
// fun_9DA8
fun_9DA8() {
    pri = 34008;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9E30
// lab_9E30
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9FB0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9FA0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9EF0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9EF0
    pri = 0;
    OP_JUMP lab_9EF8
// lab_9FB0
    pri = 0;
    return pri;
// lab_9FA0
    OP_JUMP lab_9E28
// lab_9E28
    OP_INC_P_S -936
// lab_9EF0
    pri = 1;
// lab_9EF8
    OP_JZER lab_9F70
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9F68
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9F70
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9F68
}
// fun_9FD0
fun_9FD0() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_A058()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_A058
fun_A058() {
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
// fun_A308
fun_A308() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A3A0
    var_8 = 1;
    var_16 = 0;
    var_24 = 34928;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1750()
// lab_A3A0
    pri = arg_4;
    OP_JZER lab_A3D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1808(var_8)
// lab_A3D8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_A430
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_A430
    pri = 0;
    OP_JUMP lab_A438
// lab_A430
    pri = 1;
// lab_A438
    OP_JZER lab_A500
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_A500
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_A4D8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1690(var_32, var_24)
    OP_JUMP lab_A500
// lab_A500
    pri = arg_2;
    OP_JZER lab_A5D8
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_A5A8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1268(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_08C0(var_40)
    OP_JUMP lab_A5D8
// lab_A5D8
    pri = arg_3;
    OP_JZER lab_A610
    var_8 = 1;
    var_16 = 8;
    pri = fun_1718(var_8)
// lab_A610
    pri = 0;
    return pri;
// lab_A5A8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1268(var_16, var_8)
// lab_A4D8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1690(var_16, var_8)
}
// fun_A620
fun_A620() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_A7A0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A6B8
    var_8 = 1;
    var_16 = 0;
    var_24 = 34928;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_A7A0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_A6B8
    pri = arg_0;
    OP_JNZ lab_A700
    var_8 = 34976;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_A720
// lab_A700
    var_8 = 35152;
    pri = SoundPostEvent(var_8)
// lab_A720
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A7A0
    var_24 = 35416;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_A7E0
fun_A7E0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0430(var_8)
    var_24 = 0;
    pri = fun_0468()
    pri = arg_1;
    OP_JZER lab_A858
    var_32 = 35464;
    pri = SoundPostEvent(var_32)
// lab_A858
    var_8 = 35664;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 35928;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0308(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_A8D8
fun_A8D8() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_A928
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_A7E0(var_16, var_8)
// lab_A928
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A18(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_A9C8
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_A9C8
    pri = 1;
    OP_JUMP lab_A9D0
// lab_A9C8
    pri = 0;
// lab_A9D0
    OP_JZER lab_AB68
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_AAB0
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
    pri = fun_04F8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_AB58
// lab_AB68
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
    pri = fun_0798(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_AAB0
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
    pri = fun_0598(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_AB58
    OP_JUMP lab_AC28
// lab_AC28
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_ACA0
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0840(var_32, var_24, var_16)
// lab_ACA0
    var_8 = 35944;
    pri = SoundPostEvent(var_8)
    var_16 = 36216;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02A8(var_24, var_16)
    var_40 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_AD10
fun_AD10() {
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2168(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_22B0(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_23A0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_AE10
    pri = 1;
    return pri;
// lab_AE10
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
    pri = fun_08F8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0A18(var_96)
    pri = 0;
    return pri;
}
// fun_AF20
fun_AF20() {
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
    pri = fun_A8D8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_AFC0
fun_AFC0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9DA8(var_24)
    pri = 0;
    return pri;
}
// fun_B028
fun_B028() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_B1A8(var_16)
    var_8 = pri;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = arg_0;
    pri = GetFieldObjectPositionX_(var_64)
    var_72 = pri;
    var_80 = var_8;
    var_88 = 40;
    pri = fun_0798(var_80, var_72, var_64, var_56, var_48)
    var_96 = 36288;
    var_104 = 36232;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1778(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_B130
fun_B130() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_B1A8(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_17C8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_B1A8
fun_B1A8() {
    pri = arg_0;
    OP_JNZ lab_B1F0
    var_8 = 36344;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_B1F0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B238
    var_8 = 36496;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_B238
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 36648;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_B280
fun_B280() {
    pri = g_mode;
    switch (pri) {
// switch_B368
        case default:
        {
// switch_B368_case_default
            pri = CommandNOP()
            OP_JUMP lab_B3C0
// lab_B3C0
            pri = 0;
            return pri;
        }
        case 0xb20741f8b8c848bb:
        {
// switch_B368_case_0xb20741f8b8c848bb
            var_8 = 0;
            pri = fun_E428()
            OP_JUMP lab_B3C0
        }
        case 0x0:
        {
// switch_B368_case_0x0
            var_8 = 0;
            pri = fun_B3D0()
            OP_JUMP lab_B3C0
        }
        case 0x3da14927794639c7:
        {
// switch_B368_case_0x3da14927794639c7
            var_8 = 0;
            pri = fun_E3B0()
            OP_JUMP lab_B3C0
        }
        case 0x5b52232b038027cb:
        {
// switch_B368_case_0x5b52232b038027cb
            var_8 = 0;
            pri = fun_E2C0()
            OP_JUMP lab_B3C0
        }
    }
}
// fun_B3D0
fun_B3D0() {
    pri = 0;
    return pri;
}
// fun_B3E8
fun_B3E8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A308(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_B440
fun_B440() {
    pri = 0;
    return pri;
}
// fun_B458
fun_B458() {
    pri = 0;
    return pri;
}
// fun_B470
fun_B470() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 34928;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_B028(var_64, var_56)
    var_80 = 1;
    var_88 = -3646626466504250240;
    var_96 = 16;
    pri = fun_B028(var_88, var_80)
    pri = EvCameraStart()
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0880(var_112, var_104)
    var_128 = 1;
    var_136 = -3646626466504250240;
    var_144 = 16;
    pri = fun_0880(var_136, var_128)
    var_152 = 1;
    var_160 = -5585800380538139753;
    var_168 = 16;
    pri = fun_0880(var_160, var_152)
    var_176 = 1;
    var_184 = -5585801480049767964;
    var_192 = 16;
    pri = fun_0880(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_216 = 48;
    pri = fun_07E8(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, -3646626466504250240
    var_248 = 48;
    pri = fun_07E8(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 2;
    var_264 = 2;
    var_272 = 8802641224559852288;
    var_280 = 24;
    pri = fun_13E8(var_272, var_264, var_256)
    var_288 = 1;
    var_296 = 1;
    var_304 = -3646626466504250240;
    var_312 = 24;
    pri = fun_13E8(var_304, var_296, var_288)
    OP_CONST_S -8, 274
    var_328 = 14;
    var_336 = 0;
    var_344 = var_8;
    var_352 = 135;
    var_360 = 32;
    pri = fun_2730(var_352, var_344, var_336, var_328)
    var_368 = 0;
    var_376 = 60;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 36656;
    pri = SoundSetRTPC(var_392, var_384, var_376)
    var_400 = 15;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 1;
    var_424 = 0;
    var_432 = 0;
    var_440 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_448 = 48;
    pri = fun_0970(var_440, var_432, var_424, var_416, var_408, var_400)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_456 = 16;
    pri = fun_2A98(var_448, var_440)
    var_464 = 0;
    var_472 = 1;
    var_480 = 220;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 4609434218613702656;
    var_504 = 32;
    pri = fun_2B00(var_496, var_488, var_480, var_472)
    var_512 = 0;
    var_520 = 4630798169346041446;
    var_528 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_536 = 4671166637055011717;
    var_544 = 1;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 0;
    pri = fun_2A08()
    var_560 = 0;
    var_568 = 4630798169346041446;
    var_576 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_584 = 4671174919126347940;
    var_592 = 90;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 0;
    var_608 = 60;
    var_616 = 100;
    pri = float(var_616)
    var_624 = pri;
    var_632 = 4609434218613702656;
    var_640 = 32;
    pri = fun_2B00(var_632, var_624, var_616, var_608)
    var_648 = 35416;
    var_656 = 8;
    var_664 = 16;
    pri = fun_02A8(var_656, var_648)
    var_672 = 0;
    pri = fun_0378()
    var_680 = 8802641224559852288;
    var_688 = 8;
    pri = fun_0A18(var_680)
    var_696 = 1;
    var_704 = 0;
    var_712 = 0;
    var_720 = 75;
    OP_PUSH2_C 4607182418800017408, -3646626466504250240
    var_728 = 48;
    pri = fun_0970(var_720, var_712, var_704, var_696, var_688, var_680)
    var_736 = 0;
    var_744 = 1;
    var_752 = 220;
    pri = float(var_752)
    var_760 = pri;
    var_768 = 4609434218613702656;
    var_776 = 32;
    pri = fun_2B00(var_768, var_760, var_752, var_744)
    var_784 = 0;
    var_792 = 4630798169346041446;
    var_800 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_808 = 4671252805781280522;
    var_816 = 1;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 0;
    pri = fun_2A08()
    var_832 = 0;
    var_840 = 4630798169346041446;
    var_848 = 3;
    OP_PUSH5_C 4670052427705551421, 4641170522237829120, 4671391718080333742, 4670402297803067884, 4632852936676029235
    var_856 = 4671208891286867149;
    var_864 = 180;
    pri = EvCameraMove(var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = -3646626466504250240;
    var_880 = 8;
    pri = fun_0A18(var_872)
    var_888 = 1;
    var_896 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_904 = 48;
    pri = fun_07E8(var_896, var_888, var_880, var_872, var_864, var_856)
    var_912 = 1;
    var_920 = 1;
    var_928 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, -3646626466504250240
    var_936 = 48;
    pri = fun_07E8(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 1;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 4641240890982006784;
    var_984 = 0;
    var_992 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1000 = 72;
    pri = fun_08F8(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 1;
    var_1016 = 0;
    var_1024 = 4641240890982006784;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, -3646626466504250240
    var_1048 = 72;
    pri = fun_08F8(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 15;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 0;
    var_1080 = 1;
    var_1088 = 700;
    pri = float(var_1088)
    var_1096 = pri;
    var_1104 = 4611686018427387904;
    var_1112 = 32;
    pri = fun_2B00(var_1104, var_1096, var_1088, var_1080)
    var_1120 = 0;
    var_1128 = 4626857519672092262;
    var_1136 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1144 = 4671083459000370463;
    var_1152 = 1;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    pri = fun_2A08()
    var_1168 = 0;
    var_1176 = 4626857519672092262;
    var_1184 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1192 = 4671072741510778716;
    var_1200 = 480;
    pri = EvCameraMove(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 8802641224559852288;
    var_1216 = 8;
    pri = fun_0A18(var_1208)
    var_1224 = -3646626466504250240;
    var_1232 = 8;
    pri = fun_0A18(var_1224)
    var_1240 = 15;
    var_1248 = 8;
    pri = fun_0060(var_1240)
    var_1256 = 0;
    var_1264 = 30;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 36792;
    pri = SoundSetRTPC(var_1280, var_1272, var_1264)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 90;
    pri = float(var_1312)
    var_1320 = pri;
    var_1328 = 8802641224559852288;
    var_1336 = 40;
    pri = fun_09C8(var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 270;
    pri = float(var_1368)
    var_1376 = pri;
    var_1384 = -3646626466504250240;
    var_1392 = 40;
    pri = fun_09C8(var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1400 = 30;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 8802641224559852288;
    var_1424 = 8;
    pri = fun_0A18(var_1416)
    var_1432 = -3646626466504250240;
    var_1440 = 8;
    pri = fun_0A18(var_1432)
    var_1448 = 0;
    var_1456 = 3;
    var_1464 = 0;
    var_1472 = 100;
    var_1480 = -1;
    OP_PUSH2_C 1619325555354961895, -3646626466504250240
    var_1488 = 56;
    pri = fun_20B8(var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1496 = 1;
    var_1504 = 8;
    pri = fun_22B0(var_1496)
    var_1512 = 1;
    var_1520 = 1;
    var_1528 = -1;
    var_1536 = -1;
    var_1544 = 0;
    var_1552 = 1;
    var_1560 = -3646626466504250240;
    var_1568 = 56;
    pri = fun_4890(var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
    var_1576 = 6707178634600329409;
    pri = FlagGet(var_1576)
    OP_JNZ lab_C350
    var_1584 = 0;
    var_1592 = 3;
    var_1600 = 0;
    var_1608 = 100;
    var_1616 = -1;
    OP_PUSH2_C 1619326654866590106, -3646626466504250240
    var_1624 = 56;
    pri = fun_20B8(var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1632 = 1;
    var_1640 = 8;
    pri = fun_22B0(var_1632)
    OP_JUMP lab_C3C8
// lab_C350
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 1619327754378218317, -3646626466504250240
    var_48 = 56;
    pri = fun_20B8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_22B0(var_56)
// lab_C3C8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 1619320057796820840, -3646626466504250240
    var_48 = 56;
    pri = fun_20B8(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_22B0(var_56)
    var_72 = 0;
    pri = fun_2370()
    var_80 = 1;
    var_88 = 3;
    var_96 = 0;
    var_104 = 1;
    var_112 = -3646626466504250240;
    var_120 = 40;
    pri = fun_6BC8(var_112, var_104, var_96, var_88, var_80)
    var_128 = -3646626466504250240;
    var_136 = 8;
    pri = fun_0BF0(var_128)
    var_144 = 0;
    var_152 = 1;
    var_160 = 200;
    pri = float(var_160)
    var_168 = pri;
    var_176 = 4612811918334230528;
    var_184 = 32;
    pri = fun_2B00(var_176, var_168, var_160, var_152)
    var_192 = 0;
    var_200 = 4631952216750555136;
    var_208 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_216 = 4671031446602818519;
    var_224 = 1;
    pri = EvCameraMove(var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_232 = 0;
    pri = fun_2A08()
    var_240 = 0;
    var_248 = 4631952216750555136;
    var_256 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_264 = 4671018568572878193;
    var_272 = 240;
    pri = EvCameraMove(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 0;
    var_288 = 60;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 36928;
    pri = SoundSetRTPC(var_304, var_296, var_288)
    var_312 = 37064;
    pri = SoundPostEvent(var_312)
    var_320 = 30;
    var_328 = 8;
    pri = fun_0060(var_320)
    var_336 = 0;
    var_344 = 120;
    var_352 = 850;
    pri = float(var_352)
    var_360 = pri;
    var_368 = 4605380978949069210;
    var_376 = 32;
    pri = fun_2B00(var_368, var_360, var_352, var_344)
    var_384 = 1;
    var_392 = 0;
    var_400 = 4641240890982006784;
    var_408 = 0;
    var_416 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_424 = 72;
    pri = fun_08F8(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 1;
    var_440 = 0;
    var_448 = 4641240890982006784;
    var_456 = 0;
    var_464 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -3646626466504250240
    var_472 = 72;
    pri = fun_08F8(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_480 = 8802641224559852288;
    var_488 = 8;
    pri = fun_0A18(var_480)
    var_496 = -3646626466504250240;
    var_504 = 8;
    pri = fun_0A18(var_496)
    var_512 = 15;
    var_520 = 8;
    pri = fun_0060(var_512)
    var_528 = 0;
    var_536 = 0;
    var_544 = 0;
    var_552 = 90;
    pri = float(var_552)
    var_560 = pri;
    var_568 = 8802641224559852288;
    var_576 = 40;
    pri = fun_09C8(var_568, var_560, var_552, var_544, var_536)
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 270;
    pri = float(var_608)
    var_616 = pri;
    var_624 = -3646626466504250240;
    var_632 = 40;
    pri = fun_09C8(var_624, var_616, var_608, var_600, var_592)
    var_640 = 30;
    var_648 = 8;
    pri = fun_0060(var_640)
    var_656 = 8802641224559852288;
    var_664 = 8;
    pri = fun_0A18(var_656)
    var_672 = -3646626466504250240;
    var_680 = 8;
    pri = fun_0A18(var_672)
    var_688 = 0;
    pri = fun_2790()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_696 = 3;
    var_704 = 1;
    var_712 = 32;
    pri = fun_2B58(var_704, var_696, var_688, var_680)
    var_720 = 0;
    pri = fun_2820()
    var_728 = 0;
    pri = fun_28C8()
    OP_JZER lab_CA70
    var_736 = 0;
    pri = fun_29B8()
// lab_CA70
    var_8 = 0;
    var_16 = 0;
    var_24 = 37312;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    var_48 = 90;
    pri = float(var_48)
    var_56 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_64 = 48;
    pri = fun_07E8(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    var_88 = 270;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 4671226772094713856;
    var_112 = 20580;
    pri = float(var_112)
    var_120 = pri;
    var_128 = -3646626466504250240;
    var_136 = 48;
    pri = fun_07E8(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_1450(var_144)
    var_160 = 5;
    var_168 = -3646626466504250240;
    var_176 = 16;
    pri = fun_12F8(var_168, var_160)
    var_184 = 15;
    var_192 = 8;
    pri = fun_0060(var_184)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_200 = 16;
    pri = fun_2A98(var_192, var_184)
    var_208 = 0;
    var_216 = 1;
    var_224 = 250;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 4609434218613702656;
    var_248 = 32;
    pri = fun_2B00(var_240, var_232, var_224, var_216)
    var_256 = 1;
    var_264 = 0;
    var_272 = 4641240890982006784;
    var_280 = 0;
    var_288 = 0;
    var_296 = 20000;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 19850;
    pri = float(var_312)
    var_320 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_328 = 72;
    pri = fun_08F8(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 1;
    var_344 = 0;
    var_352 = 4641240890982006784;
    var_360 = 0;
    var_368 = 0;
    var_376 = 20000;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 20150;
    pri = float(var_392)
    var_400 = pri;
    OP_PUSH2_C 4607182418800017408, -3646626466504250240
    var_408 = 72;
    pri = fun_08F8(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_416 = 0;
    var_424 = 4631952216750555136;
    var_432 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_440 = 4671115501517982925;
    var_448 = 1;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    pri = fun_2A08()
    var_464 = 0;
    var_472 = 4631952216750555136;
    var_480 = 2;
    OP_PUSH5_C 4671260076301919191, 4633083746156931973, 4671169237400011407, 4671333688605398794, 4633439812002470953
    var_488 = 4671093984075427348;
    var_496 = 240;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 0;
    var_512 = 30;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 37464;
    pri = SoundSetRTPC(var_528, var_520, var_512)
    var_536 = 35416;
    var_544 = 8;
    var_552 = 16;
    pri = fun_02A8(var_544, var_536)
    var_560 = 0;
    pri = fun_0378()
    var_568 = 8802641224559852288;
    var_576 = 8;
    pri = fun_0A18(var_568)
    var_584 = -3646626466504250240;
    var_592 = 8;
    pri = fun_0A18(var_584)
    var_600 = 30;
    var_608 = 8;
    pri = fun_0060(var_600)
    var_616 = 0;
    var_624 = 1;
    var_632 = 320;
    pri = float(var_632)
    var_640 = pri;
    var_648 = 4611686018427387904;
    var_656 = 32;
    pri = fun_2B00(var_648, var_640, var_632, var_624)
    var_664 = 0;
    var_672 = 4629587826946185626;
    var_680 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_688 = 4671148720513037107;
    var_696 = 1;
    pri = EvCameraMove(var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_704 = 0;
    pri = fun_2A08()
    var_712 = 0;
    var_720 = 4629587826946185626;
    var_728 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_736 = 4671146447272746680;
    var_744 = 240;
    pri = EvCameraMove(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_752 = 2;
    var_760 = -3646626466504250240;
    var_768 = 16;
    pri = fun_1370(var_760, var_752)
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    OP_PUSH2_C 1619321157308449051, -3646626466504250240
    var_816 = 56;
    pri = fun_20B8(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 1;
    var_832 = 8;
    pri = fun_22B0(var_824)
    var_840 = 0;
    var_848 = 3;
    var_856 = 0;
    var_864 = 100;
    var_872 = -1;
    OP_PUSH2_C 1619322256820077262, -3646626466504250240
    var_880 = 56;
    pri = fun_20B8(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 1;
    var_896 = 8;
    pri = fun_22B0(var_888)
    var_904 = 0;
    pri = fun_2370()
    var_912 = -3646626466504250240;
    var_920 = 8;
    pri = fun_13B0(var_912)
    var_928 = 0;
    var_936 = 1;
    var_944 = 230;
    pri = float(var_944)
    var_952 = pri;
    var_960 = 4611686018427387904;
    var_968 = 32;
    pri = fun_2B00(var_960, var_952, var_944, var_936)
    var_976 = 0;
    var_984 = 4630164850648442470;
    var_992 = 0;
    OP_PUSH5_C 4671157876696117412, 4637353721553632625, 4671228891403376394, 4671324917251388211, 4634457344043279974
    var_1000 = 4671225930968318607;
    var_1008 = 1;
    pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 0;
    pri = fun_2A08()
    var_1024 = 0;
    var_1032 = 4630164850648442470;
    var_1040 = 3;
    OP_PUSH5_C 4671145570412223529, 4637566938848490947, 4671229111305701949, 4671312281114005996, 4634676190837672509
    var_1048 = 4671226156368202301;
    var_1056 = 90;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 1;
    var_1072 = 0;
    var_1080 = 4641240890982006784;
    var_1088 = -90;
    pri = float(var_1088)
    var_1096 = pri;
    var_1104 = 0;
    var_1112 = 20000;
    pri = float(var_1112)
    var_1120 = pri;
    var_1128 = 20050;
    pri = float(var_1128)
    var_1136 = pri;
    OP_PUSH2_C 4607182418800017408, -3646626466504250240
    var_1144 = 72;
    pri = fun_08F8(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 1;
    var_1160 = 0;
    var_1168 = 4641240890982006784;
    var_1176 = 90;
    pri = float(var_1176)
    var_1184 = pri;
    var_1192 = 0;
    var_1200 = 20000;
    pri = float(var_1200)
    var_1208 = pri;
    var_1216 = 19950;
    pri = float(var_1216)
    var_1224 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1232 = 72;
    pri = fun_08F8(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 1;
    var_1248 = 0;
    var_1256 = 15;
    var_1264 = 20000;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 150;
    pri = float(var_1280)
    var_1288 = pri;
    var_1296 = 20050;
    pri = float(var_1296)
    var_1304 = pri;
    var_1312 = 8802641224559852288;
    var_1320 = 56;
    pri = fun_1148(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 1;
    var_1336 = 0;
    var_1344 = 15;
    var_1352 = 10;
    pri = float(var_1352)
    var_1360 = pri;
    var_1368 = 0;
    var_1376 = -3646626466504250240;
    var_1384 = 48;
    pri = fun_1208(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1392 = -3646626466504250240;
    var_1400 = 8;
    pri = fun_0A18(var_1392)
    var_1408 = 8802641224559852288;
    var_1416 = 8;
    pri = fun_0A18(var_1408)
    var_1424 = 15;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = 1;
    var_1448 = 0;
    var_1456 = 15;
    OP_PUSH2_C -3646626466504250240, 8802641224559852288
    var_1464 = 40;
    pri = fun_11B0(var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1472 = 1;
    var_1480 = 0;
    var_1488 = 15;
    OP_PUSH2_C 8802641224559852288, -3646626466504250240
    var_1496 = 40;
    pri = fun_11B0(var_1488, var_1480, var_1472, var_1464, var_1456)
    var_1504 = 0;
    var_1512 = 10;
    OP_PUSH2_C 8802641224559852288, -3646626466504250240
    var_1520 = 32;
    pri = fun_12A8(var_1512, var_1504, var_1496, var_1488)
    var_1528 = 37600;
    pri = SoundPostEvent(var_1528)
    var_1536 = 1;
    var_1544 = -1;
    var_1552 = -1;
    var_1560 = 1;
    var_1568 = 8802641224559852288;
    var_1576 = 40;
    pri = fun_88F8(var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1584 = 1;
    var_1592 = 1;
    var_1600 = -1;
    var_1608 = -1;
    var_1616 = 0;
    var_1624 = 40;
    var_1632 = -3646626466504250240;
    var_1640 = 56;
    pri = fun_4890(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 15;
    var_1656 = 8;
    pri = fun_0060(var_1648)
    var_1664 = 0;
    var_1672 = 4626379012211684147;
    var_1680 = 0;
    OP_PUSH5_C 4671094728994555167, 4636874510405782733, 4671230012905236726, 4671261819027849216, 4636590220679304970
    var_1688 = 4671227044223841731;
    var_1696 = 1;
    pri = EvCameraMove(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1704 = 3;
    var_1712 = 1;
    var_1720 = 32;
    pri = fun_2B58(var_1712, var_1704, var_1696, var_1688)
    var_1728 = 30;
    var_1736 = 8;
    pri = fun_0060(var_1728)
    var_1744 = 1005;
    var_1752 = 37800;
    var_1760 = 16;
    pri = fun_26F0(var_1752, var_1744)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1768 = 16;
    pri = fun_2A98(var_1760, var_1752)
    var_1776 = 0;
    var_1784 = 1;
    var_1792 = 230;
    pri = float(var_1792)
    var_1800 = pri;
    var_1808 = 4611686018427387904;
    var_1816 = 32;
    pri = fun_2B00(var_1808, var_1800, var_1792, var_1784)
    var_1824 = 0;
    var_1832 = 4630601136862343987;
    var_1840 = 0;
    OP_PUSH5_C 4671115254127866675, 4638811410089272934, 4671272701444185129, 4671268712965755372, 4637260834811318108
    var_1848 = 4671206843446460416;
    var_1856 = 1;
    pri = EvCameraMove(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1864 = 0;
    pri = fun_2A08()
    var_1872 = 0;
    var_1880 = 4630601136862343987;
    var_1888 = 3;
    OP_PUSH5_C 4671122585121644872, 4638772003592533443, 4671269556840929690, 4671276043959533568, 4637182021817839124
    var_1896 = 4671203698843204977;
    var_1904 = 360;
    pri = EvCameraMove(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 4829169075101351985;
    var_1936 = 24;
    pri = fun_2168(var_1928, var_1920, var_1912)
    var_1944 = 1;
    var_1952 = 8;
    pri = fun_22B0(var_1944)
    var_1960 = 0;
    pri = fun_2370()
    var_1968 = 0;
    var_1976 = 3;
    var_1984 = 0;
    var_1992 = 100;
    var_2000 = -1;
    OP_PUSH2_C 1619323356331705473, -3646626466504250240
    var_2008 = 56;
    pri = fun_20B8(var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
    var_2016 = 1;
    var_2024 = 8;
    pri = fun_22B0(var_2016)
    var_2032 = 0;
    pri = fun_2370()
    var_2040 = 0;
    var_2048 = 1;
    var_2056 = 16;
    pri = fun_A7E0(var_2048, var_2040)
    var_2064 = 0;
    var_2072 = 8802641224559852288;
    var_2080 = 16;
    pri = fun_B130(var_2072, var_2064)
    var_2088 = 1;
    var_2096 = -3646626466504250240;
    var_2104 = 16;
    pri = fun_B130(var_2096, var_2088)
    var_2112 = 0;
    var_2120 = -1;
    var_2128 = 0;
    var_2136 = 180;
    var_2144 = 2100;
    var_2152 = 2425;
    OP_PUSH2_C -5995480830238164870, -2628904761907173737
    var_2160 = -1;
    var_2168 = 72;
    pri = fun_A8D8(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096)
    var_2176 = 0;
    var_2184 = 3;
    var_2192 = 0;
    var_2200 = 100;
    var_2208 = -1;
    OP_PUSH2_C -7800117078538269003, 8411299318447548111
    var_2216 = 56;
    pri = fun_20B8(var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_22B0(var_2224)
    var_2240 = 0;
    pri = fun_2370()
    var_2248 = 6;
    var_2256 = 4;
    var_2264 = 2;
    var_2272 = 1;
    var_2280 = 9;
    var_2288 = 1;
    var_2296 = 375;
    var_2304 = 8411299318447548111;
    var_2312 = 64;
    pri = fun_8FE0(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2320 = 0;
    var_2328 = 3;
    var_2336 = 0;
    var_2344 = 100;
    var_2352 = -1;
    OP_PUSH2_C -7800119277561525425, 8411299318447548111
    var_2360 = 56;
    pri = fun_20B8(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304)
    var_2368 = 1;
    var_2376 = 8;
    pri = fun_22B0(var_2368)
    var_2384 = 0;
    pri = fun_2370()
    var_2392 = 8903944820507043011;
    var_2400 = 37928;
    var_2408 = 8411299318447548111;
    var_2416 = 24;
    pri = fun_9200(var_2408, var_2400, var_2392)
    var_2424 = 0;
    var_2432 = 3;
    var_2440 = 0;
    var_2448 = 100;
    var_2456 = -1;
    OP_PUSH2_C -7800120377073153636, 8411299318447548111
    var_2464 = 56;
    pri = fun_20B8(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408)
    var_2472 = 1;
    var_2480 = 8;
    pri = fun_22B0(var_2472)
    var_2488 = 0;
    pri = fun_2370()
    pri = 0;
    return pri;
}
// fun_E068
fun_E068() {
    pri = 0;
    return pri;
}
// fun_E080
fun_E080() {
    var_8 = -3646626466504250240;
    var_16 = 8;
    pri = fun_0768(var_8)
    var_24 = 1260;
    var_32 = 8;
    pri = fun_AFC0(var_24)
    var_40 = 60;
    var_48 = 8021964092511761817;
    pri = WorkSet(var_48, var_40)
    var_56 = 2162984971204676483;
    pri = VanishFlagReset(var_56)
    var_64 = -2282713863028048545;
    var_72 = 8;
    pri = fun_9FD0(var_64)
    var_80 = 1;
    var_88 = 375;
    pri = ItemAdd(var_88, var_80)
    var_96 = 37992;
    var_104 = 8;
    pri = fun_2C78(var_96)
    var_112 = -7105279101812575691;
    pri = FlagSet(var_112)
    pri = 0;
    return pri;
}
// fun_E1D0
fun_E1D0() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_A620(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_E210
fun_E210() {
    var_8 = 1240;
    var_16 = 8;
    pri = fun_AFC0(var_8)
    pri = 0;
    return pri;
}
// fun_E248
fun_E248() {
    var_8 = 180;
    var_16 = 8628079166804250617;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C -5995480830238164870, -2628904761907173737
    var_40 = 1;
    var_48 = 56;
    pri = fun_AF20(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_E2C0
fun_E2C0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_B3E8()
    var_16 = 0;
    pri = fun_B440()
    var_24 = 0;
    pri = fun_B458()
    var_32 = 0;
    pri = fun_B470()
    var_40 = 0;
    pri = fun_E068()
    var_48 = 0;
    pri = fun_E080()
    var_56 = 0;
    pri = fun_E1D0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_E3B0
fun_E3B0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_E418
    var_8 = 0;
    pri = fun_B440()
    var_16 = 0;
    pri = fun_E080()
// lab_E418
    pri = 0;
    return pri;
}
// fun_E428
fun_E428() {
    var_8 = 5679294227680320019;
    var_16 = 8;
    pri = fun_AD10(var_8)
    OP_JZER lab_E498
    var_24 = 0;
    pri = fun_E210()
    var_32 = 0;
    pri = fun_E248()
// lab_E498
    pri = 0;
    return pri;
}
