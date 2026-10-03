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
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05C8
fun_05C8() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0650
fun_0650() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0688
fun_0688() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0700
fun_0700() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAttachModelPosAndRotationByFieldObject_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
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
// fun_07B8
fun_07B8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0860
fun_0860() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08B8
fun_08B8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1558(var_8)
    OP_JZER lab_0930
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1588(var_24)
    OP_JNZ lab_0930
    pri = 0;
    return pri;
// lab_0930
    OP_JUMP lab_0940
// lab_0940
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09A0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0940
    pri = 0;
    return pri;
}
// fun_09E0
fun_09E0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A18
fun_0A18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A58
fun_0A58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0A90
fun_0A90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AD8
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B18
// lab_0B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1558(var_8)
    OP_JNZ lab_0BA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0B90
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0BE8
    pri = 0;
    return pri;
// lab_0BE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_0C48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B18
    pri = 0;
    return pri;
// lab_0B90
    OP_JUMP lab_0BE8
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0CC8
fun_0CC8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D18
    pri = 0;
    return pri;
// lab_0D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1558(var_8)
    OP_JZER lab_0E48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D70
    OP_ZERO_P_S 64
// lab_0E48
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E80
    OP_CONST_S 64, 1
// lab_0E80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB8
    OP_CONST_S 72, 1
// lab_0EB8
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
// lab_0D70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D98
    OP_ZERO_P_S 72
// lab_0D98
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
    OP_JUMP lab_0F58
// lab_0F58
    pri = 0;
    return pri;
}
// fun_0F68
fun_0F68() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1030
// lab_1030
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = IsAttachModelAnimationStateName_(var_24, var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1090
    pri = 0;
    return pri;
// lab_1090
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_10D0
    pri = 0;
    return pri;
// lab_10D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1030
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1170
fun_1170() {
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
// fun_11D0
fun_11D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
    OP_ZERO_P_S -8
    OP_JUMP lab_1238
// lab_1238
    var_8 = arg_0;
    pri = IsFinishFieldObjectLookAt_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1288
    pri = 0;
    return pri;
// lab_1288
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_12C8
    pri = 0;
    return pri;
// lab_12C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1238
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1498
fun_1498() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13A8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1420(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13E8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1460(var_24)
    pri = 0;
    return pri;
}
// fun_1558
fun_1558() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1588
fun_1588() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15B8
fun_15B8() {
    OP_JUMP lab_15D0
// lab_15D0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1660
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1650
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1660
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16F0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_16E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_16F0
    pri = 0;
    return pri;
// lab_16E0
    OP_JUMP lab_1700
// lab_1700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15D0
    pri = 0;
    return pri;
// lab_1650
    OP_JUMP lab_1700
}
// fun_1740
fun_1740() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_15B8(var_40)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1828
fun_1828() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1858
fun_1858() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
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
// switch_1EA8
        case default:
        {
// switch_1EA8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1EF0
// lab_1EF0
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
            OP_JNZ lab_1F98
            var_88 = 0;
            pri = fun_2268()
// lab_1F98
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1EA8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A90
                case default:
                {
// switch_1A90_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B08
// lab_1B08
                    OP_JUMP lab_1EF0
                }
                case 0x0:
                {
// switch_1A90_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B08
                }
                case 0x1:
                {
// switch_1A90_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B08
                }
                case 0x2:
                {
// switch_1A90_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B08
                }
                case 0x3:
                {
// switch_1A90_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B08
                }
                case 0x4:
                {
// switch_1A90_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B08
                }
                case 0x5:
                {
// switch_1A90_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B08
                }
            }
        }
        case 0x65:
        {
// switch_1EA8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C48
                case default:
                {
// switch_1C48_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CC0
// lab_1CC0
                    OP_JUMP lab_1EF0
                }
                case 0x0:
                {
// switch_1C48_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1CC0
                }
                case 0x1:
                {
// switch_1C48_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1CC0
                }
                case 0x2:
                {
// switch_1C48_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1CC0
                }
                case 0x3:
                {
// switch_1C48_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CC0
                }
                case 0x4:
                {
// switch_1C48_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1CC0
                }
                case 0x5:
                {
// switch_1C48_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1CC0
                }
            }
        }
        case 0x66:
        {
// switch_1EA8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E00
                case default:
                {
// switch_1E00_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E78
// lab_1E78
                    OP_JUMP lab_1EF0
                }
                case 0x0:
                {
// switch_1E00_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1E78
                }
                case 0x1:
                {
// switch_1E00_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1E78
                }
                case 0x2:
                {
// switch_1E00_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1E78
                }
                case 0x3:
                {
// switch_1E00_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1E78
                }
                case 0x4:
                {
// switch_1E00_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1E78
                }
                case 0x5:
                {
// switch_1E00_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1E78
                }
            }
        }
    }
}
// fun_1FB0
fun_1FB0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2018
fun_2018() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_20C0
    pri = 1;
    return pri;
// lab_20C0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2108
fun_2108() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2158
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2018(var_8)
    arg_2 = pri;
// lab_2158
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1890(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1FB0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_21B8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2268
fun_2268() {
    OP_JUMP lab_2280
// lab_2280
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22C0
    pri = 0;
    return pri;
// lab_22C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2280
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    var_8 = 0;
    pri = fun_2268()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_23B0
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_23B0
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2420
// lab_2420
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2460
    OP_JUMP lab_2490
// lab_2460
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2420
// lab_2490
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24D8
fun_24D8() {
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
// fun_2548
fun_2548() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2588
fun_2588() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_25C0
fun_25C0() {
    OP_JUMP lab_25D8
// lab_25D8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2620
    OP_JUMP lab_2650
    OP_JUMP lab_2640
// lab_2620
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2650
    pri = 0;
    return pri;
// lab_2640
    OP_JUMP lab_25D8
}
// fun_2660
fun_2660() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2690
fun_2690() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E0
fun_26E0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2730
fun_2730() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2780
fun_2780() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27D0
fun_27D0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2820
fun_2820() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2870
fun_2870() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_28A8
fun_28A8() {
    var_8 = 0;
    var_16 = 0;
    pri = PokePartyGetCount(var_16, var_8)
    OP_EQ_P_C_PRI 6
    OP_JZER lab_2930
    pri = PokeBoxIsFull()
    OP_JZER lab_2930
    pri = 1;
    OP_JUMP lab_2938
// lab_2930
    pri = 0;
// lab_2938
    return pri;
}
// fun_2940
fun_2940() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2988
fun_2988() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2A00
fun_2A00() {
    var_8 = 0;
    pri = fun_2988()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2A80
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2A80
    pri = 1;
    return pri;
// lab_2A80
    var_8 = 0;
    pri = fun_2988()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2AB0
fun_2AB0() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2B00
fun_2B00() {
    OP_JUMP lab_2B18
// lab_2B18
    pri = EvCameraMoveWait_()
    OP_JZER lab_2B50
    pri = 0;
    return pri;
// lab_2B50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B18
    pri = 0;
    return pri;
}
// fun_2B90
fun_2B90() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 4607182418800017408;
    var_88 = 0;
    var_96 = 0;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C28
fun_2C28() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2C60
fun_2C60() {
    pri = arg_6;
    OP_JNZ lab_2C98
    var_8 = 0;
    pri = fun_0F68()
// lab_2C98
    pri = arg_1;
    switch (pri) {
// switch_4200
        case default:
        {
// switch_4200_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4550
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4550
            pri = 1;
            OP_JUMP lab_4558
// lab_4550
            pri = 0;
// lab_4558
            OP_JZER lab_46B0
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            var_64 = 8472;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4710
// lab_46B0
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_4710
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4770
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_47D0
// lab_4770
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_47D0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_47D0
            pri = arg_2;
            OP_JZER lab_4810
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4810
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4200_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x1:
        {
// switch_4200_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x2:
        {
// switch_4200_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x3:
        {
// switch_4200_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x4:
        {
// switch_4200_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x5:
        {
// switch_4200_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0x6:
        {
// switch_4200_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0x7:
        {
// switch_4200_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0x8:
        {
// switch_4200_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x9:
        {
// switch_4200_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0xa:
        {
// switch_4200_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0xb:
        {
// switch_4200_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0xc:
        {
// switch_4200_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0xd:
        {
// switch_4200_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0xe:
        {
// switch_4200_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0xf:
        {
// switch_4200_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x10:
        {
// switch_4200_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x11:
        {
// switch_4200_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0x12:
        {
// switch_4200_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0x13:
        {
// switch_4200_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x14:
        {
// switch_4200_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x15:
        {
// switch_4200_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x16:
        {
// switch_4200_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x17:
        {
// switch_4200_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x18:
        {
// switch_4200_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x19:
        {
// switch_4200_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4200_case_default
        }
        case 0x1a:
        {
// switch_4200_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6144;
            var_88 = 6136;
            var_96 = 6128;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4200_case_default
        }
        case 0x1b:
        {
// switch_4200_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6368;
            var_88 = 6360;
            var_96 = 6352;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4200_case_default
        }
        case 0x1c:
        {
// switch_4200_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6592;
            var_88 = 6584;
            var_96 = 6576;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4200_case_default
        }
        case 0x1d:
        {
// switch_4200_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x1e:
        {
// switch_4200_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x1f:
        {
// switch_4200_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x20:
        {
// switch_4200_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x21:
        {
// switch_4200_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x22:
        {
// switch_4200_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x23:
        {
// switch_4200_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x24:
        {
// switch_4200_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x25:
        {
// switch_4200_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x26:
        {
// switch_4200_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x27:
        {
// switch_4200_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x28:
        {
// switch_4200_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
        case 0x29:
        {
// switch_4200_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4200_case_default
        }
    }
}
// fun_4840
fun_4840() {
    pri = arg_4;
    OP_JNZ lab_4878
    var_8 = 0;
    pri = fun_0F68()
// lab_4878
    pri = arg_1;
    switch (pri) {
// switch_5C50
        case default:
        {
// switch_5C50_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 9008;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1558(var_264)
            OP_JZER lab_6218
            pri = arg_3;
            switch (pri) {
// switch_61C0
                case default:
                {
// switch_61C0_case_default
                    OP_JUMP lab_64D0
// lab_64D0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6540
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6540
                    var_8 = 0;
                    pri = fun_0FA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_61C0_case_0x1
                    var_8 = 32;
                    var_16 = 9160;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_61C0_case_default
                }
                case 0x2:
                {
// switch_61C0_case_0x2
                    var_8 = 32;
                    var_16 = 9264;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_61C0_case_default
                }
                case 0x3:
                {
// switch_61C0_case_0x3
                    var_8 = 32;
                    var_16 = 9064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_61C0_case_default
                }
            }
// lab_6218
            pri = arg_1;
            OP_JZER lab_6268
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6268
            pri = 0;
            OP_JUMP lab_6270
// lab_6268
            pri = 1;
// lab_6270
            OP_JZER lab_62D8
            var_8 = 9360;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_62D8
            pri = 1;
            OP_JUMP lab_62E0
// lab_62D8
            pri = 0;
// lab_62E0
            OP_JZER lab_6330
            var_8 = 32;
            var_16 = 9456;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_64D0
// lab_6330
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6398
            var_8 = 32;
            var_16 = 9616;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_64D0
// lab_6398
            var_16 = 9736;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            var_176 = 9840;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9856;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5C50_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1:
        {
// switch_5C50_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2:
        {
// switch_5C50_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x3:
        {
// switch_5C50_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x4:
        {
// switch_5C50_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x5:
        {
// switch_5C50_case_0x5
            var_8 = 1;
            var_16 = 8488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_5C50_case_default
        }
        case 0x6:
        {
// switch_5C50_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x7:
        {
// switch_5C50_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x8:
        {
// switch_5C50_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x9:
        {
// switch_5C50_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0xa:
        {
// switch_5C50_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0xb:
        {
// switch_5C50_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0xc:
        {
// switch_5C50_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0xd:
        {
// switch_5C50_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0xe:
        {
// switch_5C50_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0xf:
        {
// switch_5C50_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x10:
        {
// switch_5C50_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x11:
        {
// switch_5C50_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x12:
        {
// switch_5C50_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x13:
        {
// switch_5C50_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x14:
        {
// switch_5C50_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x15:
        {
// switch_5C50_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x16:
        {
// switch_5C50_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x17:
        {
// switch_5C50_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x18:
        {
// switch_5C50_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x19:
        {
// switch_5C50_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1a:
        {
// switch_5C50_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1b:
        {
// switch_5C50_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1c:
        {
// switch_5C50_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1d:
        {
// switch_5C50_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1e:
        {
// switch_5C50_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x1f:
        {
// switch_5C50_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x20:
        {
// switch_5C50_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x21:
        {
// switch_5C50_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x22:
        {
// switch_5C50_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x23:
        {
// switch_5C50_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x24:
        {
// switch_5C50_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x25:
        {
// switch_5C50_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x26:
        {
// switch_5C50_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x27:
        {
// switch_5C50_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x28:
        {
// switch_5C50_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x29:
        {
// switch_5C50_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2a:
        {
// switch_5C50_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2b:
        {
// switch_5C50_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2c:
        {
// switch_5C50_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2d:
        {
// switch_5C50_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2e:
        {
// switch_5C50_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x2f:
        {
// switch_5C50_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x30:
        {
// switch_5C50_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x31:
        {
// switch_5C50_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x32:
        {
// switch_5C50_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x33:
        {
// switch_5C50_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x34:
        {
// switch_5C50_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x35:
        {
// switch_5C50_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x36:
        {
// switch_5C50_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x37:
        {
// switch_5C50_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x38:
        {
// switch_5C50_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x39:
        {
// switch_5C50_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x3a:
        {
// switch_5C50_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x3b:
        {
// switch_5C50_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x3c:
        {
// switch_5C50_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8584;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x3d:
        {
// switch_5C50_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8760;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
        case 0x3e:
        {
// switch_5C50_case_0x3e
            var_8 = 3;
            var_16 = 8904;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_5C50_case_default
        }
    }
}
// fun_6570
fun_6570() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6670
        case default:
        {
// switch_6670_case_default
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
// switch_6670_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6670_case_default
        }
        case 0x1:
        {
// switch_6670_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6670_case_default
        }
        case 0x2:
        {
// switch_6670_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6670_case_default
        }
        case 0x3:
        {
// switch_6670_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6670_case_default
        }
    }
}
// fun_6730
fun_6730() {
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
    pri = fun_2108(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2268()
    pri = 0;
    return pri;
}
// fun_67C8
fun_67C8() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_6570(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_6730(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_6870
fun_6870() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_68C0
// lab_68C0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9904;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6938
    OP_JUMP lab_6968
// lab_6938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_68C0
// lab_6968
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_69F0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4840(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1828(var_56)
// lab_69F0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6A58
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11D0(var_24, var_16)
// lab_6A58
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_11D0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_6B18
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0A90(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0810(var_88, var_80, var_72, var_64, var_56)
// lab_6B18
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6B58
    pri = 0;
    return pri;
// lab_6B58
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6CA0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 10024;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09E0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6C68
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6CA0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08B8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08B8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A90(var_40)
    pri = 0;
    return pri;
// lab_6C68
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11D0(var_16, var_8)
}
// fun_6D28
fun_6D28() {
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
    pri = fun_67C8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2300(var_112)
    var_128 = 0;
    pri = fun_23C0()
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
    pri = fun_6870(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_6EA0
fun_6EA0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_6F38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2C60(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_6F38
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_7090
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_6FF8
    var_24 = 10160;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_6FF8
    pri = 1;
    OP_JUMP lab_7000
// lab_7090
    pri = 0;
    return pri;
// lab_6FF8
    pri = 0;
// lab_7000
    OP_JZER lab_7090
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2C60(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_70A0
fun_70A0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_7420(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7108
fun_7108() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_7178
    OP_CONST_S -8, 1
// lab_7178
    pri = arg_0;
    OP_JNZ lab_7198
    OP_ZERO_P_S -8
// lab_7198
    pri = var_8;
    OP_JZER lab_7220
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_7220
    pri = 0;
    return pri;
}
// fun_7238
fun_7238() {
    var_8 = 10264;
    var_16 = 8;
    pri = fun_2588(var_8)
    var_24 = 0;
    pri = fun_25C0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2690(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2820(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_7350
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_7350
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_6EA0(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_70A0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2660()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2C28(var_112)
    pri = 0;
    return pri;
}
// fun_7420
fun_7420() {
    var_8 = 10424;
    var_16 = 8;
    pri = fun_2588(var_8)
    var_24 = 0;
    pri = fun_25C0()
    pri = arg_3;
    OP_JNZ lab_7540
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_7508
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_75B0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_7530
// lab_7540
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7750(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_7508
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7678(var_16, var_8)
// lab_7530
    OP_JUMP lab_7588
// lab_7588
    var_8 = 0;
    pri = fun_2660()
    pri = 0;
    return pri;
}
// fun_75B0
fun_75B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7750(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_7660
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_7660
    pri = 0;
    return pri;
}
// fun_7678
fun_7678() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2730(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2208(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2300(var_72)
    var_88 = 0;
    pri = fun_23C0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2690(var_96)
    pri = 0;
    return pri;
}
// fun_7750
fun_7750() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_7798
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_7A58(var_8)
// lab_7798
    pri = arg_4;
    OP_JNZ lab_7800
    var_8 = 0;
    var_16 = 8;
    pri = fun_2690(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2730(var_40, var_32, var_24)
// lab_7800
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_78A0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2780(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2208(var_56, var_48, var_40)
    OP_JUMP lab_7990
// lab_78A0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_7958
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_7958
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_7958
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2208(var_24, var_16, var_8)
// lab_7990
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_79D0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0430(var_8)
// lab_79D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_2300(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_7C60(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_7108(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_7A58
fun_7A58() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_7AB8
    var_16 = 10584;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_7AB8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7BF8
        case default:
        {
// switch_7BF8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_7BE8
            var_16 = 11128;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_7BE8
            OP_JUMP lab_7C30
// lab_7C30
            var_8 = 11344;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_7BF8_case_0x1
            var_8 = 10800;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_7C30
        }
        case 0x2:
        {
// switch_7BF8_case_0x2
            var_8 = 10928;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_7C30
        }
    }
}
// fun_7C60
fun_7C60() {
    pri = arg_2;
    OP_JNZ lab_7D48
    var_8 = 0;
    var_16 = 8;
    pri = fun_2690(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2730(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_27D0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_7D48
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2208(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2300(var_40)
    var_56 = 0;
    pri = fun_23C0()
    pri = 0;
    return pri;
}
// fun_7DC0
fun_7DC0() {
    pri = 11528;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7E48
// lab_7E48
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7FC8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7FB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_7F08
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_7F08
    pri = 0;
    OP_JUMP lab_7F10
// lab_7FC8
    pri = 0;
    return pri;
// lab_7FB8
    OP_JUMP lab_7E40
// lab_7E40
    OP_INC_P_S -936
// lab_7F08
    pri = 1;
// lab_7F10
    OP_JZER lab_7F88
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7F80
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7F88
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7F80
}
// fun_7FE8
fun_7FE8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_8030
    pri = arg_0;
    return pri;
// lab_8030
    pri = arg_1;
    return pri;
}
// fun_8040
fun_8040() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_80D8
    var_8 = 1;
    var_16 = 0;
    var_24 = 12448;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1800()
// lab_80D8
    pri = arg_4;
    OP_JZER lab_8110
    var_8 = 1;
    var_16 = 8;
    pri = fun_1858(var_8)
// lab_8110
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8168
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8168
    pri = 0;
    OP_JUMP lab_8170
// lab_8168
    pri = 1;
// lab_8170
    OP_JZER lab_8238
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8238
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_8210
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1740(var_32, var_24)
    OP_JUMP lab_8238
// lab_8238
    pri = arg_2;
    OP_JZER lab_8310
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_82E0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11D0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06C8(var_40)
    OP_JUMP lab_8310
// lab_8310
    pri = arg_3;
    OP_JZER lab_8348
    var_8 = 1;
    var_16 = 8;
    pri = fun_17C8(var_8)
// lab_8348
    pri = 0;
    return pri;
// lab_82E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11D0(var_16, var_8)
// lab_8210
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1740(var_16, var_8)
}
// fun_8358
fun_8358() {
    var_8 = 12704;
    var_16 = 12696;
    var_24 = 8802641224559852288;
    var_32 = 12648;
    var_40 = 12544;
    var_48 = 12496;
    var_56 = 48;
    pri = fun_0570(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 12712;
    var_80 = 16;
    pri = fun_0700(var_72, var_64)
    pri = arg_0;
    OP_JZER lab_8410
    var_88 = 0;
    pri = fun_8420()
// lab_8410
    pri = 0;
    return pri;
}
// fun_8420
fun_8420() {
    var_8 = 1;
    var_16 = 12808;
    var_24 = 12760;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 12936;
    var_48 = 12888;
    pri = SetAttachModelAnimationStateIntParameter_(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_8498
fun_8498() {
    var_8 = 0;
    var_16 = 13112;
    var_24 = 13064;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 13288;
    var_48 = 13240;
    var_56 = 24;
    pri = fun_0FE8(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_8510
fun_8510() {
    pri = arg_0;
    OP_JZER lab_8548
    var_8 = 0;
    pri = fun_8498()
// lab_8548
    var_8 = 13408;
    var_16 = 8;
    pri = fun_05C8(var_8)
    pri = 0;
    return pri;
}
// fun_8578
fun_8578() {
    var_8 = 0;
    pri = fun_28A8()
    OP_JZER lab_8678
    var_16 = 13456;
    var_24 = 8;
    pri = fun_2588(var_16)
    var_32 = 0;
    pri = fun_25C0()
    var_40 = 3;
    var_48 = 0;
    var_56 = -7763515063518001126;
    var_64 = 24;
    pri = fun_2208(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2300(var_72)
    var_88 = 0;
    pri = fun_23C0()
    var_96 = 0;
    pri = fun_2660()
    pri = 1;
    return pri;
// lab_8678
    pri = 0;
    return pri;
}
// fun_8688
fun_8688() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7DC0(var_24)
    pri = 0;
    return pri;
}
// fun_86F0
fun_86F0() {
    pri = g_mode;
    switch (pri) {
// switch_87D8
        case default:
        {
// switch_87D8_case_default
            pri = CommandNOP()
            OP_JUMP lab_8830
// lab_8830
            pri = 0;
            return pri;
        }
        case 0xed07251df6b15606:
        {
// switch_87D8_case_0xed07251df6b15606
            var_8 = 0;
            pri = fun_D970()
            OP_JUMP lab_8830
        }
        case 0x0:
        {
// switch_87D8_case_0x0
            var_8 = 0;
            pri = fun_8840()
            OP_JUMP lab_8830
        }
        case 0xdaf5a17f7d2070e:
        {
// switch_87D8_case_0xdaf5a17f7d2070e
            var_8 = 0;
            pri = fun_D908()
            OP_JUMP lab_8830
        }
        case 0x2cc1c41b8338741a:
        {
// switch_87D8_case_0x2cc1c41b8338741a
            var_8 = 0;
            pri = fun_D778()
            OP_JUMP lab_8830
        }
    }
}
// fun_8840
fun_8840() {
    pri = 0;
    return pri;
}
// fun_8858
fun_8858() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8040(var_40, var_32, var_24, var_16, var_8)
    var_56 = 1;
    var_64 = 0;
    var_72 = 12448;
    var_80 = 8;
    var_88 = 32;
    pri = fun_0308(var_80, var_72, var_64, var_56)
    var_96 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_8900
fun_8900() {
    pri = 0;
    return pri;
}
// fun_8918
fun_8918() {
    pri = 0;
    return pri;
}
// fun_8930
fun_8930() {
    var_8 = 1;
    var_16 = 1104;
    var_24 = 1103;
    var_32 = 16;
    pri = fun_7FE8(var_24, var_16)
    var_40 = pri;
    var_48 = 2;
    var_56 = 24;
    pri = fun_2730(var_48, var_40, var_32)
    var_64 = 13640;
    var_72 = 8;
    pri = fun_2870(var_64)
    var_80 = 0;
    pri = fun_2548()
    OP_JNZ lab_89E8
    pri = 0;
    return pri;
// lab_89E8
    OP_PUSH2_C 6513469414483989899, -8218456393840537451
    var_16 = 16;
    pri = fun_7FE8(var_8, var_0)
    var_8 = pri;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 889;
    var_56 = 888;
    var_64 = 16;
    pri = fun_7FE8(var_56, var_48)
    var_72 = pri;
    pri = SoundPlayPokeVoice(var_72, var_64, var_56, var_48)
    var_80 = 1;
    var_88 = -1;
    var_96 = -1;
    var_104 = 3;
    var_112 = 0;
    var_120 = 30;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_2C60(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 0;
    var_152 = 3;
    var_160 = 2;
    var_168 = 101;
    var_176 = -1;
    OP_PUSH2_C -3849406693138959501, 1490346562787402346
    var_184 = 16;
    pri = fun_7FE8(var_176, var_168)
    var_192 = pri;
    var_200 = var_8;
    var_208 = 56;
    pri = fun_2108(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
    var_216 = 0;
    pri = fun_2268()
    var_224 = 0;
    var_232 = 8;
    pri = fun_0430(var_224)
    var_240 = var_8;
    var_248 = 8;
    pri = fun_0A90(var_240)
    var_256 = 0;
    pri = fun_23C0()
    var_272 = 42;
    var_280 = 41;
    var_288 = 16;
    pri = fun_7FE8(var_280, var_272)
    var_16 = pri;
    var_296 = 0;
    var_304 = var_16;
    OP_PUSH2_C -2181162285712756589, -2181130399875538470
    var_312 = 16;
    pri = fun_7FE8(var_304, var_296)
    var_320 = pri;
    var_328 = 24;
    pri = fun_2940(var_320, var_312, var_304)
    var_336 = 0;
    pri = fun_2A00()
    OP_JZER lab_8CA0
    var_344 = 0;
    pri = fun_2AB0()
// lab_8CA0
    var_16 = 0;
    pri = fun_2988()
    var_24 = pri;
    pri = var_24;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_D328
    var_32 = 889;
    var_40 = 888;
    var_48 = 16;
    pri = fun_7FE8(var_40, var_32)
    var_32 = pri;
    var_56 = var_32;
    var_64 = 4;
    var_72 = 13800;
    pri = PokeMemoryCheckParty(var_72, var_64, var_56)
    var_80 = 0;
    OP_PUSH2_C 6513469414483989899, -8218456393840537451
    var_88 = 16;
    pri = fun_7FE8(var_80, var_72)
    var_96 = pri;
    var_104 = 16;
    pri = fun_0650(var_96, var_88)
    OP_PUSH2_C -8218456393840537451, 6513469414483989899
    var_120 = 16;
    pri = fun_7FE8(var_112, var_104)
    var_40 = pri;
    OP_PUSH2_C 387838090113935797, 7694382768399930019
    var_136 = 16;
    pri = fun_7FE8(var_128, var_120)
    var_48 = pri;
    OP_PUSH2_C 7694382768399930019, 387838090113935797
    var_152 = 16;
    pri = fun_7FE8(var_144, var_136)
    var_56 = pri;
    var_160 = 1;
    var_168 = 8802641224559852288;
    var_176 = 16;
    pri = fun_0688(var_168, var_160)
    var_184 = 1;
    var_192 = -1349778034395884683;
    var_200 = 16;
    pri = fun_0688(var_192, var_184)
    var_208 = 1;
    var_216 = 7473960101546429514;
    var_224 = 16;
    pri = fun_0688(var_216, var_208)
    var_232 = 1;
    var_240 = var_56;
    var_248 = 16;
    pri = fun_0688(var_240, var_232)
    var_256 = 1;
    var_264 = var_48;
    var_272 = 16;
    pri = fun_0688(var_264, var_256)
    var_280 = 1;
    var_288 = var_8;
    var_296 = 16;
    pri = fun_0688(var_288, var_280)
    pri = EvCameraStart()
    var_304 = 1;
    var_312 = 1;
    OP_PUSH4_C 4640537203540230144, 4665898538746511360, 4665672039351189504, 8802641224559852288
    var_320 = 48;
    pri = fun_05F8(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 1;
    var_336 = 1;
    OP_PUSH4_C -4583714442616766464, 4666305358048788480, 4665821572932567040, -1349778034395884683
    var_344 = 48;
    pri = fun_05F8(var_336, var_328, var_320, var_312, var_304, var_296)
    var_352 = 1;
    var_360 = 1;
    OP_PUSH4_C -4583538520756322304, 4666360333630177280, 4665785838804664320, 7473960101546429514
    var_368 = 48;
    pri = fun_05F8(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 1;
    var_384 = 1;
    OP_PUSH3_C 4639129828656676864, 4666343840955760640, 4665166264002412544
    var_392 = var_56;
    var_400 = 48;
    pri = fun_05F8(var_392, var_384, var_376, var_368, var_360, var_352)
    var_408 = 1;
    var_416 = 1;
    OP_PUSH3_C 4639481672377565184, 4666354836072038400, 4665246528351240192
    var_424 = var_48;
    var_432 = 48;
    pri = fun_05F8(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = 1;
    var_448 = 1;
    OP_PUSH4_C 4639129828656676864, 4666393318979010560, 4665034322607079424, 1688300219790732716
    var_456 = 48;
    pri = fun_05F8(var_448, var_440, var_432, var_424, var_416, var_408)
    var_464 = 15;
    var_472 = 8;
    pri = fun_0060(var_464)
    var_480 = 0;
    var_488 = 4630375956880975462;
    var_496 = 0;
    OP_PUSH5_C 4665902980773487575, 4635649390569649603, 4665766075083155046, 4665938736891622851, 4637404387049440543
    var_504 = 4665856202051283845;
    var_512 = 1;
    pri = EvCameraMove(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 0;
    pri = fun_2B00()
    var_528 = 0;
    var_536 = 4630375956880975462;
    var_544 = 2;
    OP_PUSH5_C 4665902980773487575, 4635649390569649603, 4665766075083155046, 4665947967291738030, 4637856858074502922
    var_552 = 4665879462219769446;
    var_560 = 90;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 1;
    var_576 = -1;
    var_584 = -1;
    var_592 = 3;
    var_600 = 0;
    var_608 = 15;
    var_616 = 8802641224559852288;
    var_624 = 56;
    pri = fun_2C60(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 13960;
    var_640 = 8;
    var_648 = 16;
    pri = fun_02A8(var_640, var_632)
    var_656 = 0;
    pri = fun_0378()
    var_664 = 90;
    var_672 = 8;
    pri = fun_0060(var_664)
    var_680 = 1;
    var_688 = 1;
    OP_PUSH4_C 4640537203540230144, 4666016736246497280, 4665672149302352282, 8802641224559852288
    var_696 = 48;
    pri = fun_05F8(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 0;
    var_712 = 4629221909476461773;
    var_720 = 0;
    OP_PUSH5_C 4666046703435912315, 4637390313300605010, 4665727960512578191, 4665919654867322798, 4638074297494011904
    var_728 = 4665719230390253650;
    var_736 = 1;
    pri = EvCameraMove(var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_744 = 0;
    pri = fun_2B00()
    var_752 = 0;
    var_760 = 4629221909476461773;
    var_768 = 2;
    OP_PUSH5_C 4666047099260098314, 4637390313300605010, 4665704925743976284, 4665920050691508797, 4638074297494011904
    var_776 = 4665696195621651743;
    var_784 = 240;
    pri = EvCameraMove(var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_792 = 1;
    var_800 = 0;
    var_808 = 4641240890982006784;
    var_816 = 0;
    var_824 = 0;
    OP_PUSH4_C 4666239387351121920, 4665788587583733760, 4607182418800017408, -1349778034395884683
    var_832 = 72;
    pri = fun_0740(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_840 = 0;
    var_848 = 3;
    var_856 = 0;
    var_864 = 100;
    var_872 = -1;
    OP_PUSH2_C -2045952123494972874, -1349778034395884683
    var_880 = 56;
    pri = fun_2108(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 0;
    var_896 = 0;
    var_904 = 0;
    var_912 = 0;
    OP_PUSH2_C -1349778034395884683, 8802641224559852288
    var_920 = 48;
    pri = fun_0860(var_912, var_904, var_896, var_888, var_880, var_872)
    var_928 = 1;
    var_936 = 8;
    pri = fun_2300(var_928)
    var_944 = 0;
    var_952 = 3;
    var_960 = 0;
    var_968 = 100;
    var_976 = -1;
    OP_PUSH2_C -2045953223006601085, -1349778034395884683
    var_984 = 56;
    pri = fun_2108(var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_992 = -1349778034395884683;
    var_1000 = 8;
    pri = fun_08B8(var_992)
    var_1008 = 8802641224559852288;
    var_1016 = 8;
    pri = fun_08B8(var_1008)
    var_1024 = 1;
    var_1032 = 8;
    pri = fun_2300(var_1024)
    var_1040 = 0;
    pri = fun_23C0()
    var_1048 = 0;
    var_1056 = 4629221909476461773;
    var_1064 = 6;
    OP_PUSH5_C 4666045532456028733, 4637390313300605010, 4665674898081421722, 4665920781866741268, 4638073593806570127
    var_1072 = 4665723793363508920;
    var_1080 = 90;
    pri = EvCameraMove(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1088 = 15;
    var_1096 = 8;
    pri = fun_0060(var_1088)
    var_1104 = 1;
    var_1112 = 0;
    var_1120 = 4641240890982006784;
    var_1128 = 0;
    var_1136 = 0;
    OP_PUSH3_C 4666151426420899840, 4665452137025634304, 4607182418800017408
    var_1144 = var_56;
    var_1152 = 72;
    pri = fun_0740(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 30;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = 0;
    var_1208 = var_56;
    var_1216 = 8802641224559852288;
    var_1224 = 48;
    pri = fun_0860(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1232 = 30;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 0;
    var_1256 = 7473960101546429514;
    var_1264 = 16;
    pri = fun_0650(var_1256, var_1248)
    var_1272 = 0;
    var_1280 = 4631544078034324685;
    var_1288 = 0;
    OP_PUSH5_C 4666284274913325875, 4634484787853509263, 4665738422365716480, 4666407233298660065, 4635161031485056614
    var_1296 = 4665770341188270817;
    var_1304 = 1;
    pri = EvCameraMove(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1312 = 0;
    pri = fun_2B00()
    var_1320 = 0;
    var_1328 = 4631544078034324685;
    var_1336 = 2;
    OP_PUSH5_C 4666291834055766835, 4634484787853509263, 4665689389644675809, 4666414786943542886, 4635161031485056614
    var_1344 = 4665741231617925448;
    var_1352 = 240;
    pri = EvCameraMove(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1360 = 10;
    var_1368 = 8;
    pri = fun_0060(var_1360)
    var_1376 = 1;
    var_1384 = 1;
    var_1392 = 15;
    var_1400 = var_56;
    var_1408 = -1349778034395884683;
    var_1416 = 40;
    pri = fun_1118(var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1424 = 0;
    var_1432 = 3;
    var_1440 = 0;
    var_1448 = 100;
    var_1456 = -1;
    OP_PUSH2_C -2045954322518229296, -1349778034395884683
    var_1464 = 56;
    pri = fun_2108(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
    var_1472 = var_56;
    var_1480 = 8;
    pri = fun_08B8(var_1472)
    var_1488 = 1;
    var_1496 = 8;
    pri = fun_2300(var_1488)
    var_1504 = 0;
    pri = fun_23C0()
    var_1512 = 0;
    var_1520 = 4629672269439198822;
    var_1528 = 0;
    OP_PUSH5_C 4666149067968458260, 4639014775759946383, 4665355962743552737, 4666134878770901811, 4638777984935788544
    var_1536 = 4665608498574220329;
    var_1544 = 1;
    pri = EvCameraMove(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1552 = 0;
    pri = fun_2B00()
    var_1560 = 0;
    var_1568 = 4629672269439198822;
    var_1576 = 2;
    OP_PUSH5_C 4666154609507062252, 4639014775759946383, 4665357205191692124, 4666140420309505802, 4638777984935788544
    var_1584 = 4665609741022359716;
    var_1592 = 240;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 0;
    var_1608 = 3;
    var_1616 = 0;
    var_1624 = 100;
    var_1632 = 0;
    OP_PUSH2_C 6735864448795819238, 4258985106674426128
    var_1640 = 16;
    pri = fun_7FE8(var_1632, var_1624)
    var_1648 = pri;
    var_1656 = var_56;
    var_1664 = 56;
    pri = fun_2108(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1672 = 1;
    var_1680 = 8;
    pri = fun_2300(var_1672)
    var_1688 = 0;
    pri = fun_23C0()
    var_1696 = 1;
    var_1704 = 0;
    var_1712 = 15;
    var_1720 = 20;
    pri = float(var_1720)
    var_1728 = pri;
    var_1736 = 0;
    pri = float(var_1736)
    var_1744 = pri;
    var_1752 = var_56;
    var_1760 = 48;
    pri = fun_1170(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1768 = 8;
    var_1776 = var_56;
    var_1784 = 16;
    pri = fun_13A8(var_1776, var_1768)
    var_1792 = 0;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 100;
    var_1824 = -1;
    OP_PUSH2_C 6735863349284191027, 4258988405209310761
    var_1832 = 16;
    pri = fun_7FE8(var_1824, var_1816)
    var_1840 = pri;
    var_1848 = var_56;
    var_1856 = 56;
    pri = fun_2108(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1864 = var_56;
    var_1872 = 8;
    pri = fun_1210(var_1864)
    var_1880 = 1;
    var_1888 = 8;
    pri = fun_2300(var_1880)
    var_1896 = 0;
    pri = fun_23C0()
    var_1904 = var_56;
    var_1912 = 8;
    pri = fun_13E8(var_1904)
    var_1920 = -1;
    var_1928 = var_56;
    var_1936 = 16;
    pri = fun_11D0(var_1928, var_1920)
    var_1944 = 1;
    var_1952 = -1;
    var_1960 = -1;
    var_1968 = 3;
    var_1976 = 0;
    var_1984 = 1;
    var_1992 = var_56;
    var_2000 = 56;
    pri = fun_2C60(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2008 = 1;
    var_2016 = 1;
    OP_PUSH4_C -4584066286337654784, 4666283367816232960, 4665730863223275520, 7473960101546429514
    var_2024 = 48;
    pri = fun_05F8(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2032 = 0;
    var_2040 = 3;
    var_2048 = 0;
    var_2056 = 100;
    var_2064 = -1;
    OP_PUSH2_C 6735862249772562816, 4258987305697682550
    var_2072 = 16;
    pri = fun_7FE8(var_2064, var_2056)
    var_2080 = pri;
    var_2088 = var_56;
    var_2096 = 56;
    pri = fun_2108(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2104 = var_56;
    var_2112 = 8;
    pri = fun_0A90(var_2104)
    var_2120 = 1;
    var_2128 = 8;
    pri = fun_2300(var_2120)
    var_2136 = 0;
    pri = fun_23C0()
    var_2144 = 1;
    var_2152 = 7473960101546429514;
    var_2160 = 16;
    pri = fun_0650(var_2152, var_2144)
    var_2168 = 1;
    var_2176 = 1;
    OP_PUSH3_C 4634978072750194688, 4666211899560427520, 4665312499048906752
    var_2184 = var_48;
    var_2192 = 48;
    pri = fun_05F8(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2200 = 0;
    var_2208 = 4630361883132139930;
    var_2216 = 0;
    OP_PUSH5_C 4666161371503573074, 4637456459920132014, 4665538448688414720, 4666056785957539021, 4639104847752493793
    var_2224 = 4665397788165873336;
    var_2232 = 1;
    pri = EvCameraMove(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2240 = 0;
    pri = fun_2B00()
    var_2248 = 0;
    var_2256 = 4630361883132139930;
    var_2264 = 2;
    OP_PUSH5_C 4666164411653223875, 4637456459920132014, 4665529410702834401, 4666059826107189821, 4639104847752493793
    var_2272 = 4665388761175409295;
    var_2280 = 90;
    pri = EvCameraMove(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208)
    var_2288 = 15;
    var_2296 = 8;
    pri = fun_0060(var_2288)
    var_2304 = var_56;
    var_2312 = 8;
    pri = fun_08B8(var_2304)
    var_2320 = 0;
    var_2328 = 0;
    var_2336 = 0;
    var_2344 = 0;
    var_2352 = 7473960101546429514;
    var_2360 = var_56;
    var_2368 = 48;
    pri = fun_0860(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2376 = 0;
    var_2384 = 3;
    var_2392 = 0;
    var_2400 = 100;
    var_2408 = -1;
    OP_PUSH2_C 6735869946353960293, 4258990604232567183
    var_2416 = 16;
    pri = fun_7FE8(var_2408, var_2400)
    var_2424 = pri;
    var_2432 = var_56;
    var_2440 = 56;
    pri = fun_2108(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2448 = var_56;
    var_2456 = 8;
    pri = fun_08B8(var_2448)
    var_2464 = 7473960101546429514;
    var_2472 = 8;
    pri = fun_1368(var_2464)
    var_2480 = 6;
    var_2488 = 7473960101546429514;
    var_2496 = 16;
    pri = fun_13A8(var_2488, var_2480)
    var_2504 = 0;
    var_2512 = 15;
    var_2520 = 0;
    pri = float(var_2520)
    var_2528 = pri;
    OP_PUSH2_C -4618891777831180697, -1349778034395884683
    var_2536 = 40;
    pri = fun_1310(var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2544 = 1;
    var_2552 = 8;
    pri = fun_2300(var_2544)
    var_2560 = 0;
    pri = fun_23C0()
    var_2568 = 6;
    var_2576 = 7473960101546429514;
    var_2584 = 16;
    pri = fun_1420(var_2576, var_2568)
    var_2592 = 0;
    var_2600 = 3;
    var_2608 = 0;
    var_2616 = 100;
    var_2624 = -1;
    OP_PUSH2_C -6933904983015804300, 7473960101546429514
    var_2632 = 56;
    pri = fun_2108(var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    var_2640 = 1;
    var_2648 = 8;
    pri = fun_2300(var_2640)
    var_2656 = 0;
    pri = fun_23C0()
    var_2664 = 8;
    var_2672 = 10;
    var_2680 = 0;
    pri = float(var_2680)
    var_2688 = pri;
    var_2696 = 0;
    pri = float(var_2696)
    var_2704 = pri;
    var_2712 = -1349778034395884683;
    var_2720 = 40;
    pri = fun_1310(var_2712, var_2704, var_2696, var_2688, var_2680)
    var_2728 = 1;
    var_2736 = 1;
    OP_PUSH4_C -4583770737612108595, 4666283367816232960, 4665843563165122560, -1349778034395884683
    var_2744 = 48;
    pri = fun_05F8(var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2752 = 0;
    var_2760 = 4631952216750555136;
    var_2768 = 0;
    OP_PUSH5_C 4666252922339259843, 4636170822964006093, 4665639999582356111, 4666239827155773030, 4637946226379608556
    var_2776 = 4665810121518963753;
    var_2784 = 1;
    pri = EvCameraMove(var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712)
    var_2792 = 0;
    pri = fun_2B00()
    var_2800 = 0;
    var_2808 = 4631952216750555136;
    var_2816 = 2;
    OP_PUSH5_C 4666248513297632461, 4636170822964006093, 4665637503690961060, 4666213889676473795, 4637946930067050332
    var_2824 = 4665804700926638817;
    var_2832 = 360;
    pri = EvCameraMove(var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
    var_2840 = 0;
    var_2848 = 3;
    var_2856 = 0;
    var_2864 = 100;
    var_2872 = -1;
    OP_PUSH2_C 6735868846842332082, 4258989504720938972
    var_2880 = 16;
    pri = fun_7FE8(var_2872, var_2864)
    var_2888 = pri;
    var_2896 = var_56;
    var_2904 = 56;
    pri = fun_2108(var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
    var_2912 = 1;
    var_2920 = 8;
    pri = fun_2300(var_2912)
    var_2928 = 0;
    pri = fun_23C0()
    var_2936 = 1;
    var_2944 = -1;
    var_2952 = -1;
    var_2960 = 3;
    var_2968 = 0;
    var_2976 = 1;
    var_2984 = 7473960101546429514;
    var_2992 = 56;
    pri = fun_2C60(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936)
    var_3000 = 0;
    var_3008 = 3;
    var_3016 = 0;
    var_3024 = 100;
    var_3032 = -1;
    OP_PUSH2_C -6933901684480919667, 7473960101546429514
    var_3040 = 56;
    pri = fun_2108(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3048 = 1;
    var_3056 = 8;
    pri = fun_2300(var_3048)
    var_3064 = 0;
    pri = fun_23C0()
    var_3072 = 0;
    var_3080 = 3;
    var_3088 = 0;
    var_3096 = 100;
    var_3104 = -1;
    OP_PUSH2_C -6933902783992547878, 7473960101546429514
    var_3112 = 56;
    pri = fun_2108(var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056)
    var_3120 = 7473960101546429514;
    var_3128 = 8;
    pri = fun_0A90(var_3120)
    var_3136 = 1;
    var_3144 = 8;
    pri = fun_2300(var_3136)
    var_3152 = 0;
    pri = fun_23C0()
    var_3160 = 1;
    var_3168 = 1;
    OP_PUSH4_C -4583770737612108595, 4666239387351121920, 4665788587583733760, -1349778034395884683
    var_3176 = 48;
    pri = fun_05F8(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128)
    var_3184 = 0;
    var_3192 = 4631952216750555136;
    var_3200 = 0;
    OP_PUSH5_C 4666083938397186949, 4635617020947327877, 4665694722276070523, 4665958896437318124, 4638139740426097132
    var_3208 = 4665714469504905380;
    var_3216 = 1;
    pri = EvCameraMove(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144)
    var_3224 = 7473960101546429514;
    var_3232 = 8;
    pri = fun_1368(var_3224)
    var_3240 = 7473960101546429514;
    var_3248 = 8;
    pri = fun_1500(var_3240)
    var_3256 = 1;
    var_3264 = 0;
    var_3272 = 4641240890982006784;
    var_3280 = 0;
    var_3288 = 0;
    OP_PUSH4_C 4666129436188344320, 4665721517374439424, 4607182418800017408, 7473960101546429514
    var_3296 = 72;
    pri = fun_0740(var_3288, var_3280, var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224)
    var_3304 = 8802641224559852288;
    var_3312 = 8;
    pri = fun_08B8(var_3304)
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    var_3344 = 0;
    OP_PUSH2_C 7473960101546429514, 8802641224559852288
    var_3352 = 48;
    pri = fun_0860(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304)
    var_3360 = 0;
    var_3368 = 3;
    var_3376 = 2;
    var_3384 = 100;
    var_3392 = -1;
    OP_PUSH2_C -6933908281550688933, 7473960101546429514
    var_3400 = 56;
    pri = fun_2108(var_3392, var_3384, var_3376, var_3368, var_3360, var_3352, var_3344)
    var_3408 = 15;
    var_3416 = 8;
    pri = fun_0060(var_3408)
    var_3424 = 1;
    var_3432 = 1;
    var_3440 = 15;
    OP_PUSH2_C 8802641224559852288, -1349778034395884683
    var_3448 = 40;
    pri = fun_1118(var_3440, var_3432, var_3424, var_3416, var_3408)
    var_3456 = 0;
    var_3464 = 0;
    var_3472 = 0;
    var_3480 = 0;
    var_3488 = 8802641224559852288;
    var_3496 = var_56;
    var_3504 = 48;
    pri = fun_0860(var_3496, var_3488, var_3480, var_3472, var_3464, var_3456)
    var_3512 = 5;
    var_3520 = 8;
    pri = fun_0060(var_3512)
    var_3528 = 0;
    var_3536 = 0;
    var_3544 = 0;
    var_3552 = 0;
    var_3560 = 8802641224559852288;
    var_3568 = var_48;
    var_3576 = 48;
    pri = fun_0860(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528)
    var_3584 = 7473960101546429514;
    var_3592 = 8;
    pri = fun_08B8(var_3584)
    var_3600 = 0;
    pri = fun_2268()
    var_3608 = 1;
    var_3616 = 8;
    pri = fun_2300(var_3608)
    var_3624 = 0;
    pri = fun_23C0()
    var_3632 = 0;
    var_3640 = 1688300219790732716;
    var_3648 = 16;
    pri = fun_0650(var_3640, var_3632)
    var_3656 = 0;
    var_3664 = 4629362646964817101;
    var_3672 = 0;
    OP_PUSH5_C 4666161767327759073, 4638849057367407985, 4665693084003745137, 4666043734754517320, 4639182957058531000
    var_3680 = 4665757504390016532;
    var_3688 = 1;
    pri = EvCameraMove(var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616)
    var_3696 = 7473960101546429514;
    var_3704 = 8;
    pri = fun_1368(var_3696)
    var_3712 = 3;
    var_3720 = 7473960101546429514;
    var_3728 = 16;
    pri = fun_13A8(var_3720, var_3712)
    var_3736 = 0;
    var_3744 = 3;
    var_3752 = 0;
    var_3760 = 100;
    var_3768 = -1;
    OP_PUSH2_C -6933909381062317144, 7473960101546429514
    var_3776 = 56;
    pri = fun_2108(var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720)
    var_3784 = var_56;
    var_3792 = 8;
    pri = fun_08B8(var_3784)
    var_3800 = var_48;
    var_3808 = 8;
    pri = fun_08B8(var_3800)
    var_3816 = 7473960101546429514;
    var_3824 = 8;
    pri = fun_08B8(var_3816)
    var_3832 = 8802641224559852288;
    var_3840 = 8;
    pri = fun_08B8(var_3832)
    var_3848 = 1;
    var_3856 = 8;
    pri = fun_2300(var_3848)
    var_3864 = 0;
    pri = fun_23C0()
    var_3872 = var_56;
    var_3880 = 8;
    pri = fun_08B8(var_3872)
    var_3888 = var_48;
    var_3896 = 8;
    pri = fun_08B8(var_3888)
    var_3904 = 1;
    var_3912 = 21;
    OP_PUSH2_C -5887039907420794789, 7473960101546429514
    var_3920 = 32;
    pri = fun_7238(var_3912, var_3904, var_3896, var_3888)
    var_3928 = 1;
    var_3936 = 1;
    var_3944 = 121;
    pri = float(var_3944)
    var_3952 = pri;
    OP_PUSH3_C 4666294362932510720, 4665672039351189504, 1688300219790732716
    var_3960 = 48;
    pri = fun_05F8(var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
    var_3968 = 6;
    var_3976 = 7;
    var_3984 = 1688300219790732716;
    var_3992 = 24;
    pri = fun_1498(var_3984, var_3976, var_3968)
    var_4000 = 1;
    var_4008 = 1688300219790732716;
    var_4016 = 16;
    pri = fun_0650(var_4008, var_4000)
    var_4024 = 0;
    var_4032 = 4633120337903904358;
    var_4040 = 0;
    OP_PUSH5_C 4666250706823329874, 4635565651764078182, 4665794222580826112, 4666159975123805798, 4636827363347183698
    var_4048 = 4665725552582113362;
    var_4056 = 1;
    pri = EvCameraMove(var_4056, var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984)
    var_4064 = 0;
    pri = fun_2B00()
    var_4072 = 15;
    var_4080 = 8;
    pri = fun_0060(var_4072)
    var_4088 = 0;
    var_4096 = 4633120337903904358;
    var_4104 = 3;
    OP_PUSH5_C 4666265676674142044, 4635621243071978537, 4665765547317573714, 4666174944974617969, 4636882250967642276
    var_4112 = 4665668191060492288;
    var_4120 = 90;
    pri = EvCameraMove(var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072, var_4064, var_4056, var_4048)
    var_4128 = 1;
    var_4136 = 0;
    var_4144 = 4641240890982006784;
    var_4152 = 0;
    var_4160 = 0;
    OP_PUSH4_C 4666277870258094080, 4665727014932578304, 4607182418800017408, 1688300219790732716
    var_4168 = 72;
    pri = fun_0740(var_4160, var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104, var_4096)
    var_4176 = 15;
    var_4184 = 8;
    pri = fun_0060(var_4176)
    var_4192 = -1;
    var_4200 = -1349778034395884683;
    var_4208 = 16;
    pri = fun_11D0(var_4200, var_4192)
    var_4216 = 0;
    var_4224 = 0;
    var_4232 = 0;
    var_4240 = 0;
    OP_PUSH2_C 1688300219790732716, -1349778034395884683
    var_4248 = 48;
    pri = fun_0860(var_4240, var_4232, var_4224, var_4216, var_4208, var_4200)
    var_4256 = 0;
    var_4264 = 3;
    var_4272 = 0;
    var_4280 = 100;
    var_4288 = -1;
    OP_PUSH2_C -1466030996601429854, 1688300219790732716
    var_4296 = 56;
    pri = fun_2108(var_4288, var_4280, var_4272, var_4264, var_4256, var_4248, var_4240)
    var_4304 = 1;
    var_4312 = 8;
    pri = fun_2300(var_4304)
    var_4320 = -1349778034395884683;
    var_4328 = 8;
    pri = fun_08B8(var_4320)
    var_4336 = 1688300219790732716;
    var_4344 = 8;
    pri = fun_08B8(var_4336)
    var_4352 = 0;
    pri = fun_23C0()
    var_4360 = 1;
    var_4368 = 0;
    var_4376 = 20;
    var_4384 = 30;
    pri = float(var_4384)
    var_4392 = pri;
    var_4400 = 0;
    pri = float(var_4400)
    var_4408 = pri;
    var_4416 = 1688300219790732716;
    var_4424 = 48;
    pri = fun_1170(var_4416, var_4408, var_4400, var_4392, var_4384, var_4376)
    var_4432 = 0;
    var_4440 = 3;
    var_4448 = 0;
    var_4456 = 100;
    var_4464 = -1;
    OP_PUSH2_C -1466032096113058065, 1688300219790732716
    var_4472 = 56;
    pri = fun_2108(var_4464, var_4456, var_4448, var_4440, var_4432, var_4424, var_4416)
    var_4480 = 1;
    var_4488 = 8;
    pri = fun_2300(var_4480)
    var_4496 = 0;
    pri = fun_23C0()
    var_4504 = 5;
    var_4512 = -1349778034395884683;
    var_4520 = 16;
    pri = fun_13A8(var_4512, var_4504)
    var_4528 = 0;
    var_4536 = 3;
    var_4544 = 0;
    var_4552 = 100;
    var_4560 = -1;
    OP_PUSH2_C -2045943327401947186, -1349778034395884683
    var_4568 = 56;
    pri = fun_2108(var_4560, var_4552, var_4544, var_4536, var_4528, var_4520, var_4512)
    var_4576 = 10;
    var_4584 = 1688300219790732716;
    var_4592 = 16;
    pri = fun_11D0(var_4584, var_4576)
    var_4600 = 1;
    var_4608 = 8;
    pri = fun_2300(var_4600)
    var_4616 = 0;
    pri = fun_23C0()
    var_4624 = 1688300219790732716;
    var_4632 = 8;
    pri = fun_1368(var_4624)
    var_4640 = 5;
    var_4648 = 1688300219790732716;
    var_4656 = 16;
    pri = fun_13A8(var_4648, var_4640)
    var_4664 = 1688300219790732716;
    var_4672 = 8;
    pri = fun_1460(var_4664)
    var_4680 = 0;
    var_4688 = 3;
    var_4696 = 0;
    var_4704 = 100;
    var_4712 = -1;
    OP_PUSH2_C -1466033195624686276, 1688300219790732716
    var_4720 = 56;
    pri = fun_2108(var_4712, var_4704, var_4696, var_4688, var_4680, var_4672, var_4664)
    var_4728 = 1;
    var_4736 = 8;
    pri = fun_2300(var_4728)
    var_4744 = 0;
    pri = fun_23C0()
    var_4752 = 1;
    var_4760 = 0;
    var_4768 = 14008;
    var_4776 = 1;
    var_4784 = 32;
    pri = fun_0308(var_4776, var_4768, var_4760, var_4752)
    var_4792 = 0;
    pri = fun_0378()
    var_4800 = 1;
    var_4808 = 1;
    var_4816 = 0;
    OP_PUSH3_C 4666635376463865446, 4665672039351189504, 8802641224559852288
    var_4824 = 48;
    pri = fun_05F8(var_4816, var_4808, var_4800, var_4792, var_4784, var_4776)
    var_4832 = 1;
    var_4840 = 1;
    OP_PUSH4_C -4599638889424171827, 4666657201769676800, 4665838065606983680, -1349778034395884683
    var_4848 = 48;
    pri = fun_05F8(var_4840, var_4832, var_4824, var_4816, var_4808, var_4800)
    var_4856 = 1;
    var_4864 = 1;
    var_4872 = 0;
    OP_PUSH3_C 4667300416071925760, 4665733612002344960, 387838090113935797
    var_4880 = 48;
    pri = fun_05F8(var_4872, var_4864, var_4856, var_4848, var_4840, var_4832)
    var_4888 = 1;
    var_4896 = 1;
    var_4904 = 0;
    OP_PUSH3_C 4667300416071925760, 4665609367188406272, 7694382768399930019
    var_4912 = 48;
    pri = fun_05F8(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864)
    var_4920 = 1;
    var_4928 = 1;
    var_4936 = 0;
    OP_PUSH3_C 4667195962467287040, 4665666541793050624, 7473960101546429514
    var_4944 = 48;
    pri = fun_05F8(var_4936, var_4928, var_4920, var_4912, var_4904, var_4896)
    var_4952 = 1;
    var_4960 = 1;
    var_4968 = 0;
    OP_PUSH3_C 4667146484444037120, 4665766597351178240, 1688300219790732716
    var_4976 = 48;
    pri = fun_05F8(var_4968, var_4960, var_4952, var_4944, var_4936, var_4928)
    var_4984 = 1688300219790732716;
    var_4992 = 8;
    pri = fun_1500(var_4984)
    var_5000 = -1349778034395884683;
    var_5008 = 8;
    pri = fun_1500(var_5000)
    var_5016 = 6;
    var_5024 = 6;
    var_5032 = 7473960101546429514;
    var_5040 = 24;
    pri = fun_1498(var_5032, var_5024, var_5016)
    var_5048 = 0;
    var_5056 = 4631952216750555136;
    var_5064 = 0;
    OP_PUSH5_C 4667627982576072786, 4642339347078620119, 4665830484474310164, 4667725806125596017, 4644186702535144243
    var_5072 = 4665865872256050135;
    var_5080 = 1;
    pri = EvCameraMove(var_5080, var_5072, var_5064, var_5056, var_5048, var_5040, var_5032, var_5024, var_5016, var_5008)
    var_5088 = 1;
    var_5096 = 0;
    var_5104 = 0;
    var_5112 = 90;
    OP_PUSH2_C 4607182418800017408, 387838090113935797
    var_5120 = 48;
    pri = fun_07B8(var_5112, var_5104, var_5096, var_5088, var_5080, var_5072)
    var_5128 = 1;
    var_5136 = 0;
    var_5144 = 0;
    var_5152 = 90;
    OP_PUSH2_C 4607182418800017408, 7694382768399930019
    var_5160 = 48;
    pri = fun_07B8(var_5152, var_5144, var_5136, var_5128, var_5120, var_5112)
    var_5168 = 1;
    var_5176 = 0;
    var_5184 = 0;
    var_5192 = 90;
    OP_PUSH2_C 4607182418800017408, 7473960101546429514
    var_5200 = 48;
    pri = fun_07B8(var_5192, var_5184, var_5176, var_5168, var_5160, var_5152)
    var_5208 = 1;
    var_5216 = 0;
    var_5224 = 0;
    var_5232 = 90;
    OP_PUSH2_C 4607182418800017408, 1688300219790732716
    var_5240 = 48;
    pri = fun_07B8(var_5232, var_5224, var_5216, var_5208, var_5200, var_5192)
    var_5248 = 14056;
    var_5256 = 15;
    var_5264 = 16;
    pri = fun_02A8(var_5256, var_5248)
    var_5272 = 0;
    pri = fun_0378()
    var_5280 = 60;
    var_5288 = 8;
    pri = fun_0060(var_5280)
    var_5296 = 0;
    var_5304 = 4631952216750555136;
    var_5312 = 0;
    OP_PUSH5_C 4666691852878626161, 4635956901981705994, 4665772023441061315, 4666803645723380285, 4637654196091271250
    var_5320 = 4665780704085362606;
    var_5328 = 1;
    pri = EvCameraMove(var_5328, var_5320, var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264, var_5256)
    var_5336 = 15;
    var_5344 = 8;
    pri = fun_0060(var_5336)
    var_5352 = 0;
    var_5360 = 0;
    var_5368 = 0;
    var_5376 = 0;
    OP_PUSH2_C 8802641224559852288, -1349778034395884683
    var_5384 = 48;
    pri = fun_0860(var_5376, var_5368, var_5360, var_5352, var_5344, var_5336)
    var_5392 = 0;
    var_5400 = 0;
    var_5408 = 0;
    var_5416 = 0;
    OP_PUSH2_C -1349778034395884683, 8802641224559852288
    var_5424 = 48;
    pri = fun_0860(var_5416, var_5408, var_5400, var_5392, var_5384, var_5376)
    var_5432 = 888;
    var_5440 = 889;
    var_5448 = 16;
    pri = fun_7FE8(var_5440, var_5432)
    var_5456 = pri;
    var_5464 = 1;
    var_5472 = 16;
    pri = fun_26E0(var_5464, var_5456)
    var_5480 = 0;
    var_5488 = 3;
    var_5496 = 0;
    var_5504 = 100;
    var_5512 = -1;
    OP_PUSH2_C -2045946625936831819, -1349778034395884683
    var_5520 = 56;
    pri = fun_2108(var_5512, var_5504, var_5496, var_5488, var_5480, var_5472, var_5464)
    var_5528 = 8802641224559852288;
    var_5536 = 8;
    pri = fun_08B8(var_5528)
    var_5544 = -1349778034395884683;
    var_5552 = 8;
    pri = fun_08B8(var_5544)
    var_5560 = 1;
    var_5568 = 8;
    pri = fun_2300(var_5560)
    var_5576 = 0;
    pri = fun_23C0()
    var_5584 = 0;
    var_5592 = 4629024876992764314;
    var_5600 = 0;
    OP_PUSH5_C 4666607141005264159, 4633690324731743437, 4665729653760484966, 4666682006751999427, 4637008211019720294
    var_5608 = 4665568124507248394;
    var_5616 = 1;
    pri = EvCameraMove(var_5616, var_5608, var_5600, var_5592, var_5584, var_5576, var_5568, var_5560, var_5552, var_5544)
    var_5624 = 0;
    pri = fun_2B00()
    var_5632 = 0;
    var_5640 = 4629024876992764314;
    var_5648 = 2;
    OP_PUSH5_C 4666600450477009142, 4633144263276924764, 4665736888546995732, 4666675321721302548, 4636735180292310958
    var_5656 = 4665582594080269926;
    var_5664 = 10;
    pri = EvCameraMove(var_5664, var_5656, var_5648, var_5640, var_5632, var_5624, var_5616, var_5608, var_5600, var_5592)
    var_5672 = 14104;
    pri = SoundPostEvent(var_5672)
    var_5680 = 3;
    var_5688 = 0;
    var_5696 = -3287387220983985473;
    var_5704 = 24;
    pri = fun_21B8(var_5696, var_5688, var_5680)
    var_5712 = 1;
    var_5720 = 8;
    pri = fun_2300(var_5712)
    var_5728 = 0;
    pri = fun_23C0()
    var_5736 = 0;
    var_5744 = 4630164850648442470;
    var_5752 = 0;
    OP_PUSH5_C 4666626745297587405, 4637041988016925573, 4665758142106760643, 4666661517352815821, 4638857501616709304
    var_5760 = 4665574501674689495;
    var_5768 = 1;
    pri = EvCameraMove(var_5768, var_5760, var_5752, var_5744, var_5736, var_5728, var_5720, var_5712, var_5704, var_5696)
    var_5776 = 1;
    var_5784 = 0;
    var_5792 = 4641240890982006784;
    var_5800 = 0;
    var_5808 = 0;
    OP_PUSH4_C 4666648955432468480, 4665791336362803200, 4607182418800017408, -1349778034395884683
    var_5816 = 72;
    pri = fun_0740(var_5808, var_5800, var_5792, var_5784, var_5776, var_5768, var_5760, var_5752, var_5744)
    var_5824 = 1;
    var_5832 = 0;
    var_5840 = 15;
    var_5848 = 15;
    pri = float(var_5848)
    var_5856 = pri;
    var_5864 = 0;
    pri = float(var_5864)
    var_5872 = pri;
    var_5880 = 8802641224559852288;
    var_5888 = 48;
    pri = fun_1170(var_5880, var_5872, var_5864, var_5856, var_5848, var_5840)
    var_5896 = 1;
    var_5904 = 8;
    pri = fun_8358(var_5896)
    var_5912 = 0;
    var_5920 = 3;
    var_5928 = 0;
    var_5936 = 100;
    var_5944 = -1;
    OP_PUSH2_C -2045947725448460030, -1349778034395884683
    var_5952 = 56;
    pri = fun_2108(var_5944, var_5936, var_5928, var_5920, var_5912, var_5904, var_5896)
    var_5960 = 1;
    var_5968 = 8;
    pri = fun_2300(var_5960)
    var_5976 = 0;
    pri = fun_23C0()
    var_5984 = 0;
    var_5992 = 4631290750555285094;
    var_6000 = 0;
    OP_PUSH5_C 4666587349795964191, 4638850112898570650, 4665586750234222920, 4666663694385838817, 4637227761501554606
    var_6008 = 4665739945189320950;
    var_6016 = 1;
    pri = EvCameraMove(var_6016, var_6008, var_6000, var_5992, var_5984, var_5976, var_5968, var_5960, var_5952, var_5944)
    var_6024 = 0;
    pri = fun_2B00()
    var_6032 = 0;
    var_6040 = 4631290750555285094;
    var_6048 = 2;
    OP_PUSH5_C 4666596189869451510, 4638748078219513037, 4665605727804918333, 4666672534459326136, 4637023692143439380
    var_6056 = 4665749439472226796;
    var_6064 = 180;
    pri = EvCameraMove(var_6064, var_6056, var_6048, var_6040, var_6032, var_6024, var_6016, var_6008, var_6000, var_5992)
    var_6072 = 14280;
    pri = SoundPostEvent(var_6072)
    var_6080 = 30;
    var_6088 = 8;
    pri = fun_0060(var_6080)
    var_6096 = 3;
    var_6104 = 0;
    var_6112 = 100;
    var_6120 = -3389053102479409155;
    var_6128 = 32;
    pri = fun_1FB0(var_6120, var_6112, var_6104, var_6096)
    var_6136 = 1;
    var_6144 = 8;
    pri = fun_2300(var_6136)
    var_6152 = 0;
    pri = fun_23C0()
    var_6160 = 0;
    var_6168 = 0;
    pri = float(var_6168)
    var_6176 = pri;
    var_6184 = 1;
    pri = float(var_6184)
    var_6192 = pri;
    var_6200 = 1;
    pri = float(var_6200)
    var_6208 = pri;
    var_6216 = 0;
    var_6224 = 15;
    var_6232 = 3;
    var_6240 = 5;
    pri = float(var_6240)
    var_6248 = pri;
    var_6256 = 5;
    var_6264 = 72;
    pri = fun_2B90(var_6256, var_6248, var_6240, var_6232, var_6224, var_6216, var_6208, var_6200, var_6192)
    var_6272 = 15;
    pri = EvCameraHandShakeEnd(var_6272)
    var_6280 = 0;
    var_6288 = 0;
    var_6296 = 0;
    var_6304 = 888;
    var_6312 = 889;
    var_6320 = 16;
    pri = fun_7FE8(var_6312, var_6304)
    var_6328 = pri;
    pri = SoundPlayPokeVoice(var_6328, var_6320, var_6312, var_6304)
    var_6336 = 3;
    var_6344 = 0;
    var_6352 = 101;
    OP_PUSH2_C 1490347662299030557, -3849407792650587712
    var_6360 = 16;
    pri = fun_7FE8(var_6352, var_6344)
    var_6368 = pri;
    var_6376 = 32;
    pri = fun_1FB0(var_6368, var_6360, var_6352, var_6344)
    var_6384 = 30;
    var_6392 = 8;
    pri = fun_0060(var_6384)
    var_6400 = 1;
    var_6408 = 8;
    pri = fun_2300(var_6400)
    var_6416 = 0;
    pri = fun_23C0()
    var_6424 = 0;
    var_6432 = 4631614446778502349;
    var_6440 = 0;
    OP_PUSH5_C 4666651363362933309, 4636480445438387814, 4665748532375133880, 4666752963734897951, 4640345800556066898
    var_6448 = 4665771896997224120;
    var_6456 = 1;
    pri = EvCameraMove(var_6456, var_6448, var_6440, var_6432, var_6424, var_6416, var_6408, var_6400, var_6392, var_6384)
    var_6464 = 0;
    pri = fun_2B00()
    var_6472 = 0;
    var_6480 = 4631614446778502349;
    var_6488 = 2;
    OP_PUSH5_C 4666651462318979809, 4636480445438387814, 4665747135995366605, 4666755558582339502, 4640343337650020680
    var_6496 = 4665752974402110095;
    var_6504 = 360;
    pri = EvCameraMove(var_6504, var_6496, var_6488, var_6480, var_6472, var_6464, var_6456, var_6448, var_6440, var_6432)
    var_6512 = 888;
    var_6520 = 889;
    var_6528 = 16;
    pri = fun_7FE8(var_6520, var_6512)
    var_6536 = pri;
    var_6544 = 1;
    var_6552 = 16;
    pri = fun_26E0(var_6544, var_6536)
    var_6560 = 3;
    var_6568 = 0;
    var_6576 = 100;
    var_6584 = -3389056401014293788;
    var_6592 = 32;
    pri = fun_1FB0(var_6584, var_6576, var_6568, var_6560)
    var_6600 = 1;
    var_6608 = 8;
    pri = fun_2300(var_6600)
    var_6616 = 0;
    var_6624 = 5251680648415012763;
    var_6632 = 0;
    var_6640 = 24;
    pri = fun_23F0(var_6632, var_6624, var_6616)
    var_6648 = 0;
    var_6656 = 5251681747926640974;
    var_6664 = 1;
    var_6672 = 24;
    pri = fun_23F0(var_6664, var_6656, var_6648)
    var_6688 = 0;
    var_6696 = 0;
    var_6704 = 0;
    var_6712 = 1;
    var_6720 = 32;
    pri = fun_24D8(var_6712, var_6704, var_6696, var_6688)
    var_64 = pri;
    var_6728 = 888;
    var_6736 = 889;
    var_6744 = 16;
    pri = fun_7FE8(var_6736, var_6728)
    var_6752 = pri;
    var_6760 = 1;
    var_6768 = 16;
    pri = fun_26E0(var_6760, var_6752)
    pri = var_64;
    switch (pri) {
// switch_C988
        case default:
        {
// switch_C988_case_default
            var_8 = 3;
            var_16 = 0;
            var_24 = 100;
            var_32 = -3389057500525921999;
            var_40 = 32;
            pri = fun_1FB0(var_32, var_24, var_16, var_8)
            var_48 = 1;
            var_56 = 8;
            pri = fun_2300(var_48)
            var_64 = 0;
            pri = fun_23C0()
            var_72 = 3;
            var_80 = 0;
            var_88 = 100;
            var_96 = -3389060799060806632;
            var_104 = 32;
            pri = fun_1FB0(var_96, var_88, var_80, var_72)
            var_112 = 1;
            var_120 = 8;
            pri = fun_2300(var_112)
            var_128 = 0;
            pri = fun_23C0()
            var_136 = 14480;
            pri = SoundPostEvent(var_136)
            var_144 = 1;
            var_152 = 8;
            pri = fun_8510(var_144)
            var_160 = 10;
            var_168 = 8802641224559852288;
            var_176 = 16;
            pri = fun_11D0(var_168, var_160)
            var_184 = 0;
            var_192 = 3;
            var_200 = 0;
            var_208 = 100;
            var_216 = -1;
            OP_PUSH2_C -2045948824960088241, -1349778034395884683
            var_224 = 56;
            pri = fun_2108(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_232 = 1;
            var_240 = 8;
            pri = fun_2300(var_232)
            var_248 = 0;
            pri = fun_23C0()
            var_256 = 0;
            var_264 = 4631614446778502349;
            var_272 = 0;
            OP_PUSH5_C 4666603507119334359, 4631683408147796460, 4665732331071298601, 4666678658739092849, 4637450126733156024
            var_280 = 4665582759007014093;
            var_288 = 1;
            pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
            var_296 = 0;
            pri = fun_2B00()
            var_304 = 0;
            var_312 = 0;
            var_320 = 1;
            pri = float(var_320)
            var_328 = pri;
            var_336 = 1;
            pri = float(var_336)
            var_344 = pri;
            var_352 = 0;
            var_360 = 15;
            var_368 = 2;
            var_376 = 5;
            pri = float(var_376)
            var_384 = pri;
            var_392 = 7;
            var_400 = 72;
            pri = fun_2B90(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
            var_408 = 15;
            pri = EvCameraHandShakeEnd(var_408)
            var_416 = 0;
            var_424 = 0;
            var_432 = 0;
            var_440 = 889;
            var_448 = 888;
            var_456 = 16;
            pri = fun_7FE8(var_448, var_440)
            var_464 = pri;
            pri = SoundPlayPokeVoice(var_464, var_456, var_448, var_440)
            var_472 = 0;
            var_480 = 3;
            var_488 = 0;
            var_496 = 100;
            var_504 = -1;
            OP_PUSH2_C -3849400096069190235, 1490339965717633080
            var_512 = 16;
            pri = fun_7FE8(var_504, var_496)
            var_520 = pri;
            var_528 = var_8;
            var_536 = 56;
            pri = fun_2108(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
            var_544 = 30;
            var_552 = 8;
            pri = fun_0060(var_544)
            var_560 = 1;
            var_568 = 8;
            pri = fun_2300(var_560)
            var_576 = 0;
            pri = fun_23C0()
            var_584 = 0;
            var_592 = 4632135175485417062;
            var_600 = 0;
            OP_PUSH5_C 4666619735910960333, 4635779572746378281, 4665760170705713889, 4666665530570257203, 4636042048162160968
            var_608 = 4665585133952130089;
            var_616 = 1;
            pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
            var_624 = 0;
            pri = fun_2B00()
            var_632 = 0;
            var_640 = 4632135175485417062;
            var_648 = 2;
            OP_PUSH5_C 4666618663887123251, 4635779572746378281, 4665759560476760474, 4666674453107116605, 4636041344474719191
            var_656 = 4665594018006082519;
            var_664 = 360;
            pri = EvCameraMove(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
            var_672 = 5;
            var_680 = -1349778034395884683;
            var_688 = 16;
            pri = fun_13A8(var_680, var_672)
            var_696 = 889;
            var_704 = 888;
            var_712 = 16;
            pri = fun_7FE8(var_704, var_696)
            var_720 = pri;
            var_728 = 2;
            var_736 = 16;
            pri = fun_26E0(var_728, var_720)
            var_744 = 0;
            var_752 = 3;
            var_760 = 0;
            var_768 = 100;
            var_776 = -1;
            OP_PUSH2_C -2045949924471716452, -1349778034395884683
            var_784 = 56;
            pri = fun_2108(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
            var_792 = 1;
            var_800 = 8;
            pri = fun_2300(var_792)
            var_808 = 0;
            pri = fun_23C0()
            var_816 = -1349778034395884683;
            var_824 = 8;
            pri = fun_1500(var_816)
            var_832 = 888;
            var_840 = 889;
            var_848 = 16;
            pri = fun_7FE8(var_840, var_832)
            var_856 = pri;
            var_864 = 1;
            var_872 = 16;
            pri = fun_26E0(var_864, var_856)
            var_880 = 0;
            var_888 = 3;
            var_896 = 0;
            var_904 = 100;
            var_912 = -1;
            OP_PUSH2_C -2045942227890318975, -1349778034395884683
            var_920 = 56;
            pri = fun_2108(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
            var_928 = 1;
            var_936 = 8;
            pri = fun_2300(var_928)
            var_944 = 0;
            pri = fun_23C0()
            var_952 = 1;
            var_960 = 0;
            var_968 = 12448;
            var_976 = 8;
            var_984 = 32;
            pri = fun_0308(var_976, var_968, var_960, var_952)
            var_992 = 0;
            pri = fun_0378()
            var_1000 = 0;
            var_1008 = 8802641224559852288;
            var_1016 = 16;
            pri = fun_0688(var_1008, var_1000)
            var_1024 = 0;
            var_1032 = -1349778034395884683;
            var_1040 = 16;
            pri = fun_0688(var_1032, var_1024)
            var_1048 = 0;
            var_1056 = 7473960101546429514;
            var_1064 = 16;
            pri = fun_0688(var_1056, var_1048)
            var_1072 = 0;
            var_1080 = var_56;
            var_1088 = 16;
            pri = fun_0688(var_1080, var_1072)
            var_1096 = 0;
            var_1104 = var_48;
            var_1112 = 16;
            pri = fun_0688(var_1104, var_1096)
            var_1120 = 0;
            var_1128 = var_8;
            var_1136 = 16;
            pri = fun_0688(var_1128, var_1120)
            var_1144 = 3;
            var_1152 = 1;
            pri = EvCameraEnd(var_1152, var_1144)
            pri = 1;
            return pri;
        }
        case 0x0:
        {
// switch_C988_case_0x0
            var_8 = 3;
            var_16 = 0;
            var_24 = 100;
            var_32 = -3389055301502665577;
            var_40 = 32;
            pri = fun_1FB0(var_32, var_24, var_16, var_8)
            var_48 = 1;
            var_56 = 8;
            pri = fun_2300(var_48)
            var_64 = 0;
            pri = fun_23C0()
            OP_JUMP switch_C988_case_default
        }
        case 0x1:
        {
// switch_C988_case_0x1
            var_8 = 3;
            var_16 = 0;
            var_24 = 100;
            var_32 = -3389058600037550210;
            var_40 = 32;
            pri = fun_1FB0(var_32, var_24, var_16, var_8)
            var_48 = 1;
            var_56 = 8;
            pri = fun_2300(var_48)
            var_64 = 0;
            pri = fun_23C0()
            OP_JUMP switch_C988_case_default
        }
    }
// lab_D328
    var_8 = 13960;
    var_16 = 8;
    var_24 = 16;
    pri = fun_02A8(var_16, var_8)
    var_32 = 0;
    pri = fun_0378()
    var_40 = 14664;
    var_48 = 8;
    pri = fun_2870(var_40)
    pri = 0;
    return pri;
}
// fun_D3A0
fun_D3A0() {
    pri = 0;
    return pri;
}
// fun_D3B8
fun_D3B8() {
    pri = 0;
    return pri;
}
// fun_D3D0
fun_D3D0() {
    var_8 = 7694382768399930019;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 387838090113935797;
    var_32 = 8;
    pri = fun_0540(var_24)
    var_40 = 1688300219790732716;
    var_48 = 8;
    pri = fun_0540(var_40)
    var_56 = 7473960101546429514;
    var_64 = 8;
    pri = fun_0540(var_56)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_D4E0
    var_72 = -8218456393840537451;
    var_80 = 8;
    pri = fun_0540(var_72)
    OP_JUMP lab_D508
// lab_D4E0
    var_8 = 6513469414483989899;
    var_16 = 8;
    pri = fun_0540(var_8)
// lab_D508
    var_8 = 3190;
    var_16 = 8;
    pri = fun_8688(var_8)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_D590
    var_24 = -5225704462842025352;
    pri = FlagReset(var_24)
    OP_JUMP lab_D5B8
// lab_D590
    var_8 = -1787470995557921022;
    pri = FlagReset(var_8)
// lab_D5B8
    var_8 = -3181508942575245480;
    pri = FlagReset(var_8)
    var_16 = -5766348188344541335;
    pri = FlagReset(var_16)
    var_24 = -6558254529306309166;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_D640
fun_D640() {
    pri = 0;
    return pri;
}
// fun_D658
fun_D658() {
    OP_PUSH2_C -1349778034395884683, -2059510470662850929
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 13960;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_D700
fun_D700() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 13960;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_D778
fun_D778() {
    var_8 = 0;
    pri = fun_8578()
    OP_JZER lab_D7B8
    pri = 0;
    return pri;
// lab_D7B8
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8858()
    var_16 = 0;
    pri = fun_8900()
    var_24 = 0;
    pri = fun_8918()
    var_32 = 0;
    pri = fun_8930()
    OP_JZER lab_D898
    var_40 = 0;
    pri = fun_D3A0()
    var_48 = 0;
    pri = fun_D3D0()
    var_56 = 0;
    pri = fun_D658()
    OP_JUMP lab_D8E0
// lab_D898
    var_8 = 0;
    pri = fun_D3B8()
    var_16 = 0;
    pri = fun_D640()
    var_24 = 0;
    pri = fun_D700()
// lab_D8E0
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_D908
fun_D908() {
    var_8 = 0;
    pri = fun_8900()
    var_16 = 0;
    pri = fun_D3D0()
    var_24 = 21;
    pri = SetNpcLicenseCardFlag(var_24)
    pri = 0;
    return pri;
}
// fun_D970
fun_D970() {
    var_8 = 888;
    var_16 = 889;
    var_24 = 16;
    pri = fun_7FE8(var_16, var_8)
    var_32 = pri;
    var_40 = 1;
    var_48 = 16;
    pri = fun_26E0(var_40, var_32)
    var_56 = 1;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    var_120 = 1;
    var_128 = -2045942227890318975;
    var_136 = 80;
    pri = fun_6D28(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
