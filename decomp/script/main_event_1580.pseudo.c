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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_04D8
fun_04D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0510
// lab_0510
    var_8 = 0;
    pri = fun_0658()
    OP_JNZ lab_0548
    OP_JUMP lab_0578
// lab_0548
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A8
// lab_05A8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05E8
    pri = 0;
    return pri;
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A8
    pri = 0;
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0658
fun_0658() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0680
fun_0680() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_06D8
fun_06D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0718
fun_0718() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0750
fun_0750() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0790
fun_0790() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07C8
fun_07C8() {
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
// fun_0840
fun_0840() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13E0(var_8)
    OP_JZER lab_09B8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1410(var_24)
    OP_JNZ lab_09B8
    pri = 0;
    return pri;
// lab_09B8
    OP_JUMP lab_09C8
// lab_09C8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0A28
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0A28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C8
    pri = 0;
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B18
fun_0B18() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0B60
    pri = 0;
    return pri;
// lab_0B60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0BA0
// lab_0BA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13E0(var_8)
    OP_JNZ lab_0C28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C18
    pri = 0;
    return pri;
// lab_0C28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C70
    pri = 0;
    return pri;
// lab_0C70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0CD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E40(var_8)
    pri = 0;
    return pri;
// lab_0CD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BA0
    pri = 0;
    return pri;
// lab_0C18
    OP_JUMP lab_0C70
}
// fun_0D18
fun_0D18() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D60
// lab_0D60
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0DB8
    pri = 0;
    return pri;
// lab_0DB8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DF8
    pri = 0;
    return pri;
// lab_0DF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D60
    pri = 0;
    return pri;
}
// fun_0E40
fun_0E40() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0EC8
    pri = 0;
    return pri;
// lab_0EC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13E0(var_8)
    OP_JZER lab_0FF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F20
    OP_ZERO_P_S 64
// lab_0FF8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1030
    OP_CONST_S 64, 1
// lab_1030
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1068
    OP_CONST_S 72, 1
// lab_1068
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
// lab_0F20
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F48
    OP_ZERO_P_S 72
// lab_0F48
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
    OP_JUMP lab_1108
// lab_1108
    pri = 0;
    return pri;
}
// fun_1118
fun_1118() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1158
fun_1158() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F0
fun_11F0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1230
fun_1230() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_12A8
fun_12A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12E8
fun_12E8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1320
fun_1320() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1230(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_12A8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1270(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12E8(var_24)
    pri = 0;
    return pri;
}
// fun_13E0
fun_13E0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1410
fun_1410() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1440
fun_1440() {
    OP_JUMP lab_1458
// lab_1458
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_14E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_14D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_14E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1578
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1568
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B18(var_8)
    pri = 0;
    return pri;
// lab_1578
    pri = 0;
    return pri;
// lab_1568
    OP_JUMP lab_1588
// lab_1588
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1458
    pri = 0;
    return pri;
// lab_14D8
    OP_JUMP lab_1588
}
// fun_15C8
fun_15C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1440(var_40)
    pri = 0;
    return pri;
}
// fun_1650
fun_1650() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1688
fun_1688() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_16B0
fun_16B0() {
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
// fun_1780
fun_1780() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_17B8
fun_17B8() {
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
// switch_1DD0
        case default:
        {
// switch_1DD0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E18
// lab_1E18
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
            OP_JNZ lab_1EC0
            var_88 = 0;
            pri = fun_2078()
// lab_1EC0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1DD0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_19B8
                case default:
                {
// switch_19B8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A30
// lab_1A30
                    OP_JUMP lab_1E18
                }
                case 0x0:
                {
// switch_19B8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A30
                }
                case 0x1:
                {
// switch_19B8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A30
                }
                case 0x2:
                {
// switch_19B8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A30
                }
                case 0x3:
                {
// switch_19B8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A30
                }
                case 0x4:
                {
// switch_19B8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A30
                }
                case 0x5:
                {
// switch_19B8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A30
                }
            }
        }
        case 0x65:
        {
// switch_1DD0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B70
                case default:
                {
// switch_1B70_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BE8
// lab_1BE8
                    OP_JUMP lab_1E18
                }
                case 0x0:
                {
// switch_1B70_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BE8
                }
                case 0x1:
                {
// switch_1B70_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BE8
                }
                case 0x2:
                {
// switch_1B70_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BE8
                }
                case 0x3:
                {
// switch_1B70_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BE8
                }
                case 0x4:
                {
// switch_1B70_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BE8
                }
                case 0x5:
                {
// switch_1B70_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BE8
                }
            }
        }
        case 0x66:
        {
// switch_1DD0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D28
                case default:
                {
// switch_1D28_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DA0
// lab_1DA0
                    OP_JUMP lab_1E18
                }
                case 0x0:
                {
// switch_1D28_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DA0
                }
                case 0x1:
                {
// switch_1D28_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DA0
                }
                case 0x2:
                {
// switch_1D28_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DA0
                }
                case 0x3:
                {
// switch_1D28_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DA0
                }
                case 0x4:
                {
// switch_1D28_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DA0
                }
                case 0x5:
                {
// switch_1D28_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DA0
                }
            }
        }
    }
}
// fun_1ED8
fun_1ED8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0AE0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F80
    pri = 1;
    return pri;
// lab_1F80
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1FC8
fun_1FC8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2018
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1ED8(var_8)
    arg_2 = pri;
// lab_2018
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_17B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2078
fun_2078() {
    OP_JUMP lab_2090
// lab_2090
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20D0
    pri = 0;
    return pri;
// lab_20D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2090
    pri = 0;
    return pri;
}
// fun_2110
fun_2110() {
    var_8 = 0;
    pri = fun_2078()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_21C0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_21C0
    pri = 0;
    return pri;
}
// fun_21D0
fun_21D0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2200
fun_2200() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2278()
    return pri;
}
// fun_2278
fun_2278() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_22B8
fun_22B8() {
    OP_JUMP lab_22D0
// lab_22D0
    pri = EvCameraMoveWait_()
    OP_JZER lab_2308
    pri = 0;
    return pri;
// lab_2308
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22D0
    pri = 0;
    return pri;
}
// fun_2348
fun_2348() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_23B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2488()
    pri = 0;
    return pri;
}
// fun_23B0
fun_23B0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2408
fun_2408() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_23B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2488()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2488
fun_2488() {
    OP_JUMP lab_24A0
// lab_24A0
    pri = IsEasingRunningDof_()
    OP_JZER lab_24F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2508
// lab_24F8
    pri = 0;
    return pri;
// lab_2508
    OP_JUMP lab_24A0
    pri = 0;
    return pri;
}
// fun_2528
fun_2528() {
    pri = arg_6;
    OP_JNZ lab_2560
    var_8 = 0;
    pri = fun_1118()
// lab_2560
    pri = arg_1;
    switch (pri) {
// switch_3AC8
        case default:
        {
// switch_3AC8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3E18
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3E18
            pri = 1;
            OP_JUMP lab_3E20
// lab_3E18
            pri = 0;
// lab_3E20
            OP_JZER lab_3F78
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE0(var_24, var_16)
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
            OP_JUMP lab_3FD8
// lab_3F78
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
// lab_3FD8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4038
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4098
// lab_4038
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4098
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4098
            pri = arg_2;
            OP_JZER lab_40D8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_40D8
            var_8 = 0;
            pri = fun_1158()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3AC8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1:
        {
// switch_3AC8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x2:
        {
// switch_3AC8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x3:
        {
// switch_3AC8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x4:
        {
// switch_3AC8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x5:
        {
// switch_3AC8_case_0x5
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x6:
        {
// switch_3AC8_case_0x6
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x7:
        {
// switch_3AC8_case_0x7
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x8:
        {
// switch_3AC8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x9:
        {
// switch_3AC8_case_0x9
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0xa:
        {
// switch_3AC8_case_0xa
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0xb:
        {
// switch_3AC8_case_0xb
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0xc:
        {
// switch_3AC8_case_0xc
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0xd:
        {
// switch_3AC8_case_0xd
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0xe:
        {
// switch_3AC8_case_0xe
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0xf:
        {
// switch_3AC8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x10:
        {
// switch_3AC8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x11:
        {
// switch_3AC8_case_0x11
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x12:
        {
// switch_3AC8_case_0x12
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x13:
        {
// switch_3AC8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x14:
        {
// switch_3AC8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x15:
        {
// switch_3AC8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x16:
        {
// switch_3AC8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x17:
        {
// switch_3AC8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x18:
        {
// switch_3AC8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x19:
        {
// switch_3AC8_case_0x19
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1a:
        {
// switch_3AC8_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A68(var_48, var_40)
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
            pri = fun_0E78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1b:
        {
// switch_3AC8_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A68(var_48, var_40)
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
            pri = fun_0E78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1c:
        {
// switch_3AC8_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0A68(var_48, var_40)
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
            pri = fun_0E78(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1d:
        {
// switch_3AC8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1e:
        {
// switch_3AC8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x1f:
        {
// switch_3AC8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x20:
        {
// switch_3AC8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x21:
        {
// switch_3AC8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x22:
        {
// switch_3AC8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x23:
        {
// switch_3AC8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x24:
        {
// switch_3AC8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x25:
        {
// switch_3AC8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x26:
        {
// switch_3AC8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x27:
        {
// switch_3AC8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x28:
        {
// switch_3AC8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
        case 0x29:
        {
// switch_3AC8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3AC8_case_default
        }
    }
}
// fun_4108
fun_4108() {
    pri = arg_5;
    OP_JNZ lab_4140
    var_8 = 0;
    pri = fun_1118()
// lab_4140
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4190
    OP_CONST_S -8, -1
// lab_4190
    pri = arg_1;
    switch (pri) {
// switch_5C48
        case default:
        {
// switch_5C48_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_60F0
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0AE0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_60F0
            pri = 1;
            OP_JUMP lab_60F8
// lab_60F0
            pri = 0;
// lab_60F8
            OP_JZER lab_6148
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_63A0
// lab_6148
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_61B0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_61B0
            pri = 1;
            OP_JUMP lab_61B8
// lab_61B0
            pri = 0;
// lab_61B8
            OP_JZER lab_6340
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE0(var_24, var_16)
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
            OP_JUMP lab_63A0
// lab_6340
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
// lab_63A0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6410
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6410
            var_8 = 0;
            pri = fun_1158()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5C48_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1:
        {
// switch_5C48_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2:
        {
// switch_5C48_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x3:
        {
// switch_5C48_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x4:
        {
// switch_5C48_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x5:
        {
// switch_5C48_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E40(var_40)
            OP_JUMP switch_5C48_case_default
        }
        case 0x6:
        {
// switch_5C48_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x7:
        {
// switch_5C48_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x8:
        {
// switch_5C48_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x9:
        {
// switch_5C48_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0xa:
        {
// switch_5C48_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0xb:
        {
// switch_5C48_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0xc:
        {
// switch_5C48_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0xd:
        {
// switch_5C48_case_0xd
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0xe:
        {
// switch_5C48_case_0xe
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0xf:
        {
// switch_5C48_case_0xf
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x10:
        {
// switch_5C48_case_0x10
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x11:
        {
// switch_5C48_case_0x11
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x12:
        {
// switch_5C48_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x13:
        {
// switch_5C48_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x14:
        {
// switch_5C48_case_0x14
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x15:
        {
// switch_5C48_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x16:
        {
// switch_5C48_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x17:
        {
// switch_5C48_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x18:
        {
// switch_5C48_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x19:
        {
// switch_5C48_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1a:
        {
// switch_5C48_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1b:
        {
// switch_5C48_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1c:
        {
// switch_5C48_case_0x1c
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1d:
        {
// switch_5C48_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1e:
        {
// switch_5C48_case_0x1e
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x1f:
        {
// switch_5C48_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x20:
        {
// switch_5C48_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x21:
        {
// switch_5C48_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x22:
        {
// switch_5C48_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x23:
        {
// switch_5C48_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x24:
        {
// switch_5C48_case_0x24
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x25:
        {
// switch_5C48_case_0x25
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x26:
        {
// switch_5C48_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x27:
        {
// switch_5C48_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x28:
        {
// switch_5C48_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x29:
        {
// switch_5C48_case_0x29
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2a:
        {
// switch_5C48_case_0x2a
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2b:
        {
// switch_5C48_case_0x2b
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2c:
        {
// switch_5C48_case_0x2c
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2d:
        {
// switch_5C48_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2e:
        {
// switch_5C48_case_0x2e
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x2f:
        {
// switch_5C48_case_0x2f
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x30:
        {
// switch_5C48_case_0x30
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x31:
        {
// switch_5C48_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x32:
        {
// switch_5C48_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x33:
        {
// switch_5C48_case_0x33
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x34:
        {
// switch_5C48_case_0x34
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x35:
        {
// switch_5C48_case_0x35
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x36:
        {
// switch_5C48_case_0x36
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x37:
        {
// switch_5C48_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x38:
        {
// switch_5C48_case_0x38
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
            pri = fun_0E78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5C48_case_default
        }
        case 0x39:
        {
// switch_5C48_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x3a:
        {
// switch_5C48_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x3b:
        {
// switch_5C48_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x3c:
        {
// switch_5C48_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x3d:
        {
// switch_5C48_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
        case 0x3e:
        {
// switch_5C48_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            OP_JUMP switch_5C48_case_default
        }
    }
}
// fun_6440
fun_6440() {
    pri = arg_4;
    OP_JNZ lab_6478
    var_8 = 0;
    pri = fun_1118()
// lab_6478
    pri = arg_1;
    switch (pri) {
// switch_7850
        case default:
        {
// switch_7850_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_13E0(var_264)
            OP_JZER lab_7E18
            pri = arg_3;
            switch (pri) {
// switch_7DC0
                case default:
                {
// switch_7DC0_case_default
                    OP_JUMP lab_80D0
// lab_80D0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8140
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8140
                    var_8 = 0;
                    pri = fun_1158()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7DC0_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7DC0_case_default
                }
                case 0x2:
                {
// switch_7DC0_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7DC0_case_default
                }
                case 0x3:
                {
// switch_7DC0_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7DC0_case_default
                }
            }
// lab_7E18
            pri = arg_1;
            OP_JZER lab_7E68
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7E68
            pri = 0;
            OP_JUMP lab_7E70
// lab_7E68
            pri = 1;
// lab_7E70
            OP_JZER lab_7ED8
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0AE0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7ED8
            pri = 1;
            OP_JUMP lab_7EE0
// lab_7ED8
            pri = 0;
// lab_7EE0
            OP_JZER lab_7F30
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_80D0
// lab_7F30
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7F98
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_80D0
// lab_7F98
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0AE0(var_24, var_16)
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
// switch_7850_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1:
        {
// switch_7850_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2:
        {
// switch_7850_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x3:
        {
// switch_7850_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x4:
        {
// switch_7850_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x5:
        {
// switch_7850_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E40(var_40)
            OP_JUMP switch_7850_case_default
        }
        case 0x6:
        {
// switch_7850_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x7:
        {
// switch_7850_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x8:
        {
// switch_7850_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x9:
        {
// switch_7850_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0xa:
        {
// switch_7850_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0xb:
        {
// switch_7850_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0xc:
        {
// switch_7850_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0xd:
        {
// switch_7850_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0xe:
        {
// switch_7850_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0xf:
        {
// switch_7850_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x10:
        {
// switch_7850_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x11:
        {
// switch_7850_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x12:
        {
// switch_7850_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x13:
        {
// switch_7850_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x14:
        {
// switch_7850_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x15:
        {
// switch_7850_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x16:
        {
// switch_7850_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x17:
        {
// switch_7850_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x18:
        {
// switch_7850_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x19:
        {
// switch_7850_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1a:
        {
// switch_7850_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1b:
        {
// switch_7850_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1c:
        {
// switch_7850_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1d:
        {
// switch_7850_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1e:
        {
// switch_7850_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x1f:
        {
// switch_7850_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x20:
        {
// switch_7850_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x21:
        {
// switch_7850_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x22:
        {
// switch_7850_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x23:
        {
// switch_7850_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x24:
        {
// switch_7850_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x25:
        {
// switch_7850_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x26:
        {
// switch_7850_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x27:
        {
// switch_7850_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x28:
        {
// switch_7850_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x29:
        {
// switch_7850_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2a:
        {
// switch_7850_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2b:
        {
// switch_7850_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2c:
        {
// switch_7850_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2d:
        {
// switch_7850_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2e:
        {
// switch_7850_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x2f:
        {
// switch_7850_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x30:
        {
// switch_7850_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x31:
        {
// switch_7850_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x32:
        {
// switch_7850_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x33:
        {
// switch_7850_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x34:
        {
// switch_7850_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x35:
        {
// switch_7850_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x36:
        {
// switch_7850_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x37:
        {
// switch_7850_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x38:
        {
// switch_7850_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x39:
        {
// switch_7850_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x3a:
        {
// switch_7850_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x3b:
        {
// switch_7850_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x3c:
        {
// switch_7850_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x3d:
        {
// switch_7850_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
        case 0x3e:
        {
// switch_7850_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0AA0(var_24, var_16, var_8)
            OP_JUMP switch_7850_case_default
        }
    }
}
// fun_8170
fun_8170() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8380(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_8368
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8368
    pri = 0;
    return pri;
}
// fun_8380
fun_8380() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0AA0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_83C8
fun_83C8() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8450
// lab_8450
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_85D0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_85C0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8510
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8510
    pri = 0;
    OP_JUMP lab_8518
// lab_85D0
    pri = 0;
    return pri;
// lab_85C0
    OP_JUMP lab_8448
// lab_8448
    OP_INC_P_S -936
// lab_8510
    pri = 1;
// lab_8518
    OP_JZER lab_8590
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8588
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8590
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8588
}
// fun_85F0
fun_85F0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8688
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1688()
// lab_8688
    pri = arg_4;
    OP_JZER lab_86C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1780(var_8)
// lab_86C0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8718
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8718
    pri = 0;
    OP_JUMP lab_8720
// lab_8718
    pri = 1;
// lab_8720
    OP_JZER lab_87E8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_87E8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_87C0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_15C8(var_32, var_24)
    OP_JUMP lab_87E8
// lab_87E8
    pri = arg_2;
    OP_JZER lab_88C0
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8890
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11F0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0790(var_40)
    OP_JUMP lab_88C0
// lab_88C0
    pri = arg_3;
    OP_JZER lab_88F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1650(var_8)
// lab_88F8
    pri = 0;
    return pri;
// lab_8890
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11F0(var_16, var_8)
// lab_87C0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_15C8(var_16, var_8)
}
// fun_8908
fun_8908() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_83C8(var_24)
    pri = 0;
    return pri;
}
// fun_8970
fun_8970() {
    pri = g_mode;
    switch (pri) {
// switch_8A30
        case default:
        {
// switch_8A30_case_default
            pri = CommandNOP()
            OP_JUMP lab_8A78
// lab_8A78
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_8A30_case_0x0
            var_8 = 0;
            pri = fun_8A88()
            OP_JUMP lab_8A78
        }
        case 0x1f7bf02ae1d5dee0:
        {
// switch_8A30_case_0x1f7bf02ae1d5dee0
            var_8 = 0;
            pri = fun_D978()
            OP_JUMP lab_8A78
        }
        case 0x46c55e277e969a5c:
        {
// switch_8A30_case_0x46c55e277e969a5c
            var_8 = 0;
            pri = fun_DB08()
            OP_JUMP lab_8A78
        }
    }
}
// fun_8A88
fun_8A88() {
    pri = 0;
    return pri;
}
// fun_8AA0
fun_8AA0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8B08
fun_8B08() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_85F0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8B60
fun_8B60() {
    var_8 = -4971445171120860642;
    var_16 = 8;
    pri = fun_04A8(var_8)
    var_24 = -2780782667399596389;
    var_32 = 8;
    pri = fun_04A8(var_24)
    var_40 = -8861403721397965071;
    var_48 = 8;
    pri = fun_04A8(var_40)
    var_56 = 118753704079410460;
    var_64 = 8;
    pri = fun_04A8(var_56)
    var_72 = -66433073690856353;
    var_80 = 8;
    pri = fun_04A8(var_72)
    var_88 = 8287683314310166736;
    var_96 = 8;
    pri = fun_04A8(var_88)
    var_104 = 3444054333069265930;
    var_112 = 8;
    pri = fun_04A8(var_104)
    pri = 0;
    return pri;
}
// fun_8C90
fun_8C90() {
    var_8 = 0;
    pri = fun_04D8()
    pri = 0;
    return pri;
}
// fun_8CC0
fun_8CC0() {
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4662136867575331553, 4633600252739196027, 4663362537167278572, 4662135240298122445, 4644513213508128604
    var_32 = 4663640009921664123;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_22B8()
    var_56 = 1;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_0750(var_64, var_56)
    var_80 = 1;
    var_88 = -8861403721397965071;
    var_96 = 16;
    pri = fun_0750(var_88, var_80)
    var_104 = 1;
    var_112 = 6660951804926948019;
    var_120 = 16;
    pri = fun_0750(var_112, var_104)
    var_128 = 1;
    var_136 = 118753704079410460;
    var_144 = 16;
    pri = fun_0750(var_136, var_128)
    var_152 = 1;
    var_160 = -66433073690856353;
    var_168 = 16;
    pri = fun_0750(var_160, var_152)
    var_176 = 1;
    var_184 = 8287683314310166736;
    var_192 = 16;
    pri = fun_0750(var_184, var_176)
    var_200 = 1;
    var_208 = 3444054333069265930;
    var_216 = 16;
    pri = fun_0750(var_208, var_200)
    var_224 = 1;
    var_232 = -4971445171120860642;
    var_240 = 16;
    pri = fun_0750(var_232, var_224)
    var_248 = 1;
    var_256 = -2780782667399596389;
    var_264 = 16;
    pri = fun_0750(var_256, var_248)
    var_272 = 1;
    var_280 = 1;
    OP_PUSH4_C 4635329916471083008, 4662035954398134272, 4663225625979387904, 8802641224559852288
    var_288 = 48;
    pri = fun_0680(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 1;
    var_304 = 1;
    OP_PUSH4_C 4639376119261298688, 4662263553305083904, 4663320183979376640, -8861403721397965071
    var_312 = 48;
    pri = fun_0680(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 1;
    var_328 = 1;
    OP_PUSH4_C -4592967932476129280, 4662048049026039808, 4663534588746792960, 6660951804926948019
    var_336 = 48;
    pri = fun_0680(var_328, var_320, var_312, var_304, var_296, var_288)
    var_344 = 1;
    var_352 = 1;
    OP_PUSH4_C 4629137466983448576, 4661468606398201856, 4663024415351504896, 118753704079410460
    var_360 = 48;
    pri = fun_0680(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 1;
    var_376 = 1;
    OP_PUSH4_C 4629137466983448576, 4661703901886545920, 4663102480677076992, -66433073690856353
    var_384 = 48;
    pri = fun_0680(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 1;
    var_400 = 1;
    OP_PUSH4_C 4633641066610819072, 4660959532514541568, 4662473560025989120, 8287683314310166736
    var_408 = 48;
    pri = fun_0680(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 1;
    var_424 = 1;
    OP_PUSH4_C 4633641066610819072, 4661322371351707648, 4662556023398072320, 3444054333069265930
    var_432 = 48;
    pri = fun_0680(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = 0;
    var_448 = -4971445171120860642;
    var_456 = 16;
    pri = fun_0718(var_448, var_440)
    var_464 = 0;
    var_472 = -2780782667399596389;
    var_480 = 16;
    pri = fun_0718(var_472, var_464)
    var_488 = 1;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_512 = 31240;
    var_520 = 1;
    var_528 = 0;
    var_536 = 1;
    var_544 = -1;
    var_552 = 0;
    var_560 = 0;
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    OP_PUSH5_C 4661953161172562739, 4621819117588971520, 4663403856814250394, 4661427044858671923, 4625253112304841523
    var_624 = 4663113695695680307;
    var_632 = 2;
    var_640 = 168;
    pri = fun_16B0(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_8 = pri;
    var_648 = 1;
    var_656 = 4596373779694328218;
    var_664 = -1;
    var_672 = 4611686018427387904;
    var_680 = var_8;
    var_688 = -66433073690856353;
    var_696 = 48;
    pri = fun_0840(var_688, var_680, var_672, var_664, var_656, var_648)
    var_704 = 31288;
    var_712 = 8;
    var_720 = 16;
    pri = fun_0280(var_712, var_704)
    var_728 = 0;
    pri = fun_0350()
    var_736 = 30;
    var_744 = 8;
    pri = fun_0060(var_736)
    var_760 = 31336;
    var_768 = 1;
    var_776 = 0;
    var_784 = 1;
    var_792 = -1;
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 0;
    var_856 = 0;
    var_864 = 0;
    OP_PUSH5_C 4661982847986512691, 4621819117588971520, 4663316885444493312, 4661469486007504077, 4625253112304841523
    var_872 = 4663024525302667674;
    var_880 = 2;
    var_888 = 168;
    pri = fun_16B0(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_16 = pri;
    var_896 = 1;
    var_904 = 4596373779694328218;
    var_912 = -1;
    var_920 = 4607182418800017408;
    var_928 = var_16;
    var_936 = 118753704079410460;
    var_944 = 48;
    pri = fun_0840(var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 31384;
    var_968 = 1;
    var_976 = 0;
    var_984 = 1;
    var_992 = -1;
    var_1000 = 0;
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH5_C 4661841450791180698, 4625253112304841523, 4662903249170123981, 4661499612626105139, 4625253112304841523
    OP_PUSH4_C 4662697750446892646, 4661093013226153574, 4625253112304841523, 4662549756181793997
    var_1048 = 3;
    var_1056 = 168;
    pri = fun_16B0(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_24 = pri;
    var_1064 = 1;
    var_1072 = 4596373779694328218;
    var_1080 = -1;
    var_1088 = 4607182418800017408;
    var_1096 = var_24;
    var_1104 = 8287683314310166736;
    var_1112 = 48;
    pri = fun_0840(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1128 = 31432;
    var_1136 = 1;
    var_1144 = 0;
    var_1152 = 1;
    var_1160 = -1;
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 0;
    var_1200 = 0;
    var_1208 = 0;
    OP_PUSH5_C 4661765584488864154, 4625253112304841523, 4663034420907317658, 4661443317630763008, 4625253112304841523
    OP_PUSH4_C 4662848383539897958, 4661021764872673690, 4625253112304841523, 4662663885488757146
    var_1216 = 3;
    var_1224 = 168;
    pri = fun_16B0(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_32 = pri;
    var_1232 = 1;
    var_1240 = 4596373779694328218;
    var_1248 = -1;
    var_1256 = 4607182418800017408;
    var_1264 = var_32;
    var_1272 = 3444054333069265930;
    var_1280 = 48;
    pri = fun_0840(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1288 = 5;
    var_1296 = 8;
    pri = fun_0060(var_1288)
    var_1304 = 0;
    var_1312 = 4631952216750555136;
    var_1320 = 3;
    OP_PUSH5_C 4661898878283499438, 4624583201860270162, 4663180480031951421, 4662443103553899725, 4641446015871284675
    var_1328 = 4663654545465383322;
    var_1336 = 90;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 1;
    var_1352 = 1;
    var_1360 = -1;
    OP_PUSH2_C 118753704079410460, 8802641224559852288
    var_1368 = 40;
    pri = fun_1198(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 1;
    var_1384 = 1;
    var_1392 = -1;
    OP_PUSH2_C 118753704079410460, -8861403721397965071
    var_1400 = 40;
    pri = fun_1198(var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1408 = 1;
    var_1416 = 1;
    var_1424 = -1;
    OP_PUSH2_C 118753704079410460, 6660951804926948019
    var_1432 = 40;
    pri = fun_1198(var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1440 = 1;
    var_1448 = 1;
    var_1456 = -1;
    OP_PUSH2_C 6660951804926948019, 118753704079410460
    var_1464 = 40;
    pri = fun_1198(var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1472 = 0;
    var_1480 = 0;
    var_1488 = -8861403721397965071;
    var_1496 = 24;
    pri = fun_8170(var_1488, var_1480, var_1472)
    var_1504 = 25;
    var_1512 = 8;
    pri = fun_0060(var_1504)
    var_1520 = 0;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 100;
    var_1552 = -1;
    OP_PUSH2_C -220217944655213085, 118753704079410460
    var_1560 = 56;
    pri = fun_1FC8(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1568 = 1;
    var_1576 = 8;
    pri = fun_2110(var_1568)
    var_1584 = 0;
    pri = fun_21D0()
    var_1592 = -8861403721397965071;
    var_1600 = 8;
    pri = fun_0B18(var_1592)
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 0;
    OP_PUSH2_C 118753704079410460, 6660951804926948019
    var_1640 = 48;
    pri = fun_08E8(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 0;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C -6954810434939863724, 6660951804926948019
    var_1688 = 56;
    pri = fun_1FC8(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 1;
    var_1704 = 8;
    pri = fun_2110(var_1696)
    var_1712 = 0;
    pri = fun_21D0()
    var_1720 = 118753704079410460;
    var_1728 = 8;
    pri = fun_0940(var_1720)
    var_1736 = 6660951804926948019;
    var_1744 = 8;
    pri = fun_0940(var_1736)
    var_1752 = -66433073690856353;
    var_1760 = 8;
    pri = fun_0940(var_1752)
    var_1768 = 0;
    var_1776 = 4631952216750555136;
    var_1784 = 0;
    OP_PUSH5_C 4661807475881882419, -4595762978994866094, 4663304658875192443, 4662010852547672146, 4631774887515227423
    var_1792 = 4663481757213078323;
    var_1800 = 1;
    pri = EvCameraMove(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1808 = 0;
    pri = fun_22B8()
    var_1816 = 0;
    var_1824 = 4631952216750555136;
    var_1832 = 3;
    OP_PUSH5_C 4661825276975136113, -4595762978994866094, 4663284207958915809, 4662028664636042117, 4631774887515227423
    var_1840 = 4663461306296801690;
    var_1848 = 20;
    pri = EvCameraMove(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 5;
    var_1864 = 8;
    pri = fun_0060(var_1856)
    var_1872 = 0;
    var_1880 = 0;
    var_1888 = 0;
    var_1896 = 877;
    pri = SoundPlayPokeVoice(var_1896, var_1888, var_1880, var_1872)
    var_1904 = 1;
    var_1912 = -1;
    var_1920 = -1;
    var_1928 = 3;
    var_1936 = 0;
    var_1944 = 29;
    var_1952 = -66433073690856353;
    var_1960 = 56;
    pri = fun_2528(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904)
    var_1968 = -66433073690856353;
    var_1976 = 8;
    pri = fun_0B18(var_1968)
    var_1984 = 1;
    var_1992 = 1;
    var_2000 = -1;
    OP_PUSH2_C -66433073690856353, 8802641224559852288
    var_2008 = 40;
    pri = fun_1198(var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2016 = 1;
    var_2024 = 1;
    var_2032 = -1;
    OP_PUSH2_C -66433073690856353, 118753704079410460
    var_2040 = 40;
    pri = fun_1198(var_2032, var_2024, var_2016, var_2008, var_2000)
    var_2048 = 0;
    var_2056 = 4631952216750555136;
    var_2064 = 2;
    OP_PUSH5_C 4661901165267685212, 4629946707541491712, 4663208671510087598, 4662152491635562250, 4640097398889119744
    var_2072 = 4663442328726106276;
    var_2080 = 30;
    pri = EvCameraMove(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2088 = 0;
    pri = fun_22B8()
    var_2096 = 5;
    var_2104 = 5;
    var_2112 = 8802641224559852288;
    var_2120 = 24;
    pri = fun_1320(var_2112, var_2104, var_2096)
    var_2128 = 5;
    var_2136 = 5;
    var_2144 = 118753704079410460;
    var_2152 = 24;
    pri = fun_1320(var_2144, var_2136, var_2128)
    var_2160 = 35;
    var_2168 = 8;
    pri = fun_0060(var_2160)
    var_2176 = 31480;
    pri = SoundPostEvent(var_2176)
    var_2184 = 8802641224559852288;
    var_2192 = 8;
    pri = fun_1388(var_2184)
    var_2200 = 118753704079410460;
    var_2208 = 8;
    pri = fun_1388(var_2200)
    var_2216 = 1;
    var_2224 = -4971445171120860642;
    var_2232 = 16;
    pri = fun_0718(var_2224, var_2216)
    var_2240 = 0;
    var_2248 = 4631952216750555136;
    var_2256 = 0;
    OP_PUSH5_C 4662020726162089574, 4639165364872486584, 4663386121691694367, 4662634088723644416, 4639795165132876677
    var_2264 = 4663752555931883274;
    var_2272 = 1;
    pri = EvCameraMove(var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2280 = 0;
    pri = fun_22B8()
    var_2288 = 0;
    var_2296 = 3;
    var_2304 = 0;
    var_2312 = 100;
    var_2320 = -1;
    OP_PUSH2_C 150036458400793782, -4971445171120860642
    var_2328 = 56;
    pri = fun_1FC8(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2336 = 1;
    var_2344 = 8;
    pri = fun_2110(var_2336)
    var_2352 = 0;
    pri = fun_21D0()
    var_2360 = 0;
    var_2368 = 4631952216750555136;
    var_2376 = 0;
    OP_PUSH5_C 4662320848856007311, 4636552221557449032, 4663572774785625620, 4662234976997878006, 4639129476812955976
    var_2384 = 4663532367733304852;
    var_2392 = 1;
    pri = EvCameraMove(var_2392, var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2400 = 0;
    pri = fun_22B8()
    var_2408 = 0;
    var_2416 = 4631952216750555136;
    var_2424 = 3;
    OP_PUSH5_C 4662352712702980260, 4639911977248211599, 4663587761129112207, 4662266829849734676, 4641410479655474954
    var_2432 = 4663547354076791439;
    var_2440 = 45;
    pri = EvCameraMove(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368)
    var_2448 = 0;
    pri = fun_22B8()
    var_2456 = 0;
    var_2464 = 4631952216750555136;
    var_2472 = 0;
    OP_PUSH5_C 4662246598835783598, 4629244427474598625, 4663540844967955005, 4661848696572807741, 4643594901396610089
    var_2480 = 4663321019608213750;
    var_2488 = 1;
    pri = EvCameraMove(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416)
    var_2496 = 0;
    pri = fun_22B8()
    var_2504 = 0;
    var_2512 = 4631952216750555136;
    var_2520 = 2;
    OP_PUSH5_C 4662226774641134797, -4607137382803743703, 4663529893832142356, 4661712126233521684, 4644266746981646336
    var_2528 = 4663245571120315761;
    var_2536 = 20;
    pri = EvCameraMove(var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2544 = -1;
    var_2552 = 8802641224559852288;
    var_2560 = 16;
    pri = fun_11F0(var_2552, var_2544)
    var_2568 = -1;
    var_2576 = -8861403721397965071;
    var_2584 = 16;
    pri = fun_11F0(var_2576, var_2568)
    var_2592 = -1;
    var_2600 = 6660951804926948019;
    var_2608 = 16;
    pri = fun_11F0(var_2600, var_2592)
    var_2616 = -1;
    var_2624 = 118753704079410460;
    var_2632 = 16;
    pri = fun_11F0(var_2624, var_2616)
    var_2640 = 0;
    var_2648 = 0;
    var_2656 = 0;
    var_2664 = 0;
    OP_PUSH2_C -4971445171120860642, -8861403721397965071
    var_2672 = 48;
    pri = fun_08E8(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2680 = 0;
    var_2688 = 0;
    var_2696 = 0;
    var_2704 = 0;
    OP_PUSH2_C -4971445171120860642, 8802641224559852288
    var_2712 = 48;
    pri = fun_08E8(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2720 = 0;
    var_2728 = 0;
    var_2736 = 0;
    var_2744 = 0;
    OP_PUSH2_C -4971445171120860642, 6660951804926948019
    var_2752 = 48;
    pri = fun_08E8(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704)
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = 0;
    OP_PUSH2_C -4971445171120860642, 118753704079410460
    var_2792 = 48;
    pri = fun_08E8(var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2800 = 5;
    var_2808 = 8;
    pri = fun_0060(var_2800)
    var_2816 = 0;
    var_2824 = 3;
    var_2832 = 0;
    var_2840 = 100;
    var_2848 = -1;
    OP_PUSH2_C 7466395725373578997, -8861403721397965071
    var_2856 = 56;
    pri = fun_1FC8(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2864 = 1;
    var_2872 = 8;
    pri = fun_2110(var_2864)
    var_2880 = 0;
    pri = fun_21D0()
    var_2888 = -8861403721397965071;
    var_2896 = 8;
    pri = fun_0940(var_2888)
    var_2904 = 8802641224559852288;
    var_2912 = 8;
    pri = fun_0940(var_2904)
    var_2920 = 6660951804926948019;
    var_2928 = 8;
    pri = fun_0940(var_2920)
    var_2936 = 118753704079410460;
    var_2944 = 8;
    pri = fun_0940(var_2936)
    var_2952 = 1;
    var_2960 = 1;
    var_2968 = -1;
    var_2976 = -1;
    var_2984 = 0;
    var_2992 = 1;
    var_3000 = -4971445171120860642;
    var_3008 = 56;
    pri = fun_4108(var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3016 = 0;
    var_3024 = 3;
    var_3032 = 0;
    var_3040 = 100;
    var_3048 = -1;
    OP_PUSH2_C 150035358889165571, -4971445171120860642
    var_3056 = 56;
    pri = fun_1FC8(var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000)
    var_3064 = 1;
    var_3072 = 8;
    pri = fun_2110(var_3064)
    var_3080 = 0;
    pri = fun_21D0()
    var_3088 = 1;
    var_3096 = 3;
    var_3104 = 0;
    var_3112 = 1;
    var_3120 = -4971445171120860642;
    var_3128 = 40;
    pri = fun_6440(var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3136 = -4971445171120860642;
    var_3144 = 8;
    pri = fun_0B18(var_3136)
    var_3152 = 1;
    var_3160 = -1;
    var_3168 = -1;
    var_3176 = 3;
    var_3184 = 0;
    var_3192 = 1;
    var_3200 = -4971445171120860642;
    var_3208 = 56;
    pri = fun_2528(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3216 = 5;
    var_3224 = 8;
    pri = fun_0060(var_3216)
    var_3232 = 0;
    var_3240 = 3;
    var_3248 = 0;
    var_3256 = 100;
    var_3264 = -1;
    OP_PUSH2_C 150034259377537360, -4971445171120860642
    var_3272 = 56;
    pri = fun_1FC8(var_3264, var_3256, var_3248, var_3240, var_3232, var_3224, var_3216)
    var_3280 = 1;
    var_3288 = 8;
    pri = fun_2110(var_3280)
    var_3296 = 0;
    pri = fun_21D0()
    var_3304 = -4971445171120860642;
    var_3312 = 8;
    pri = fun_0B18(var_3304)
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    var_3344 = 160;
    pri = float(var_3344)
    var_3352 = pri;
    var_3360 = -4971445171120860642;
    var_3368 = 40;
    pri = fun_0898(var_3360, var_3352, var_3344, var_3336, var_3328)
    var_3376 = -4971445171120860642;
    var_3384 = 8;
    pri = fun_0940(var_3376)
    OP_PUSH2_C 4600877379321698714, 4631952216750555136
    var_3392 = 0;
    OP_PUSH5_C 4662663566630385091, 4648232817364429701, 4667025664608818954, 4664569493071320842, 4639781795071482921
    var_3400 = 4666663392020141179;
    var_3408 = 1;
    pri = EvCameraMove(var_3408, var_3400, var_3392, var_3384, var_3376, var_3368, var_3360, var_3352, var_3344, var_3336)
    var_3416 = 0;
    pri = fun_22B8()
    OP_PUSH2_C 4600877379321698714, 4631952216750555136
    var_3424 = 3;
    OP_PUSH5_C 4662314119844845322, 4648227627669546598, 4666565887328990003, 4664220552061129851, 4639785313508691804
    var_3432 = 4666204065540079616;
    var_3440 = 400;
    pri = EvCameraMove(var_3440, var_3432, var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376, var_3368)
    var_3448 = 30;
    var_3456 = 8;
    pri = fun_0060(var_3448)
    var_3464 = 0;
    var_3472 = 3;
    var_3480 = 0;
    var_3488 = 100;
    var_3496 = -1;
    OP_PUSH2_C 150041955958934837, -4971445171120860642
    var_3504 = 56;
    pri = fun_1FC8(var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448)
    var_3512 = 1;
    var_3520 = 8;
    pri = fun_2110(var_3512)
    var_3528 = 0;
    pri = fun_21D0()
    var_3536 = 15;
    var_3544 = 8;
    pri = fun_0060(var_3536)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3552 = 16;
    pri = fun_2348(var_3544, var_3536)
    var_3560 = 3;
    var_3568 = 20;
    OP_PUSH2_C 4634969698869637546, 4611719795424593183
    var_3576 = 32;
    pri = fun_23B0(var_3568, var_3560, var_3552, var_3544)
    var_3584 = 0;
    var_3592 = 4631867774257541939;
    var_3600 = 0;
    OP_PUSH5_C 4662354306994840535, 4641974133296338043, 4663552246903535043, 4662361893625072189, 4641314426319672443
    var_3608 = 4663512235675400274;
    var_3616 = 1;
    pri = EvCameraMove(var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552, var_3544)
    var_3624 = 0;
    pri = fun_22B8()
    var_3632 = 0;
    var_3640 = 4631867774257541939;
    var_3648 = 2;
    OP_PUSH5_C 4662410041239252500, 4639663927424985334, 4663599998693529354, 4662417616874367877, 4639005275979482399
    var_3656 = 4663559987465394586;
    var_3664 = 20;
    pri = EvCameraMove(var_3664, var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592)
    var_3672 = 0;
    var_3680 = 0;
    var_3688 = 0;
    var_3696 = 0;
    OP_PUSH2_C 8802641224559852288, -4971445171120860642
    var_3704 = 48;
    pri = fun_08E8(var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3712 = 0;
    var_3720 = 3;
    var_3728 = 0;
    var_3736 = 101;
    var_3744 = -1;
    OP_PUSH2_C 150040856447306626, -4971445171120860642
    var_3752 = 56;
    pri = fun_1FC8(var_3744, var_3736, var_3728, var_3720, var_3712, var_3704, var_3696)
    var_3760 = 1;
    var_3768 = 8;
    pri = fun_2110(var_3760)
    var_3776 = 0;
    pri = fun_21D0()
    var_3784 = -4971445171120860642;
    var_3792 = 8;
    pri = fun_0940(var_3784)
    var_3800 = 1;
    var_3808 = -2780782667399596389;
    var_3816 = 16;
    pri = fun_0718(var_3808, var_3800)
    var_3824 = 1;
    var_3832 = 30;
    pri = float(var_3832)
    var_3840 = pri;
    var_3848 = -2780782667399596389;
    var_3856 = 24;
    pri = fun_06D8(var_3848, var_3840, var_3832)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_3864 = 3;
    var_3872 = 1;
    var_3880 = 32;
    pri = fun_2408(var_3872, var_3864, var_3856, var_3848)
    var_3888 = 6;
    var_3896 = 6;
    var_3904 = 8802641224559852288;
    var_3912 = 24;
    pri = fun_1320(var_3904, var_3896, var_3888)
    var_3920 = 7;
    var_3928 = 7;
    var_3936 = -8861403721397965071;
    var_3944 = 24;
    pri = fun_1320(var_3936, var_3928, var_3920)
    var_3952 = 0;
    var_3960 = 4631952216750555136;
    var_3968 = 0;
    OP_PUSH5_C 4662316692702054318, 4636174341401214976, 4663499580296564572, 4662590614033882153, 4640696940589513441
    var_3976 = 4663383405897973760;
    var_3984 = 1;
    pri = EvCameraMove(var_3984, var_3976, var_3968, var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
    var_3992 = 0;
    pri = fun_22B8()
    var_4000 = 0;
    var_4008 = 4631952216750555136;
    var_4016 = 2;
    OP_PUSH5_C 4662295758000661463, 4636174341401214976, 4663450212224477430, 4662569701322721853, 4640695885058350776
    var_4024 = 4663334070811235451;
    var_4032 = 20;
    pri = EvCameraMove(var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976, var_3968, var_3960)
    var_4040 = 1;
    var_4048 = -1;
    var_4056 = -1;
    var_4064 = 3;
    var_4072 = 0;
    var_4080 = 4;
    var_4088 = -8861403721397965071;
    var_4096 = 56;
    pri = fun_2528(var_4088, var_4080, var_4072, var_4064, var_4056, var_4048, var_4040)
    var_4104 = 45;
    var_4112 = 8;
    pri = fun_0060(var_4104)
    var_4120 = 8802641224559852288;
    var_4128 = 8;
    pri = fun_1388(var_4120)
    var_4136 = -8861403721397965071;
    var_4144 = 8;
    pri = fun_1388(var_4136)
    var_4152 = 0;
    var_4160 = -4616189618054758400;
    var_4168 = -1;
    OP_PUSH5_C 4662331942928331571, 4634745855894408397, 4663442669574710886, 4661877844626060083, 4644940527707147469
    var_4176 = 4663191651070089626;
    var_4184 = 1;
    pri = EvCameraMove(var_4184, var_4176, var_4168, var_4160, var_4152, var_4144, var_4136, var_4128, var_4120, var_4112)
    var_4192 = 0;
    pri = fun_22B8()
    var_4200 = 0;
    var_4208 = 0;
    var_4216 = 0;
    var_4224 = 0;
    OP_PUSH2_C -2780782667399596389, -4971445171120860642
    var_4232 = 48;
    pri = fun_08E8(var_4224, var_4216, var_4208, var_4200, var_4192, var_4184)
    var_4240 = -4971445171120860642;
    var_4248 = 8;
    pri = fun_0940(var_4240)
    var_4256 = 0;
    var_4264 = 3;
    var_4272 = 0;
    var_4280 = 100;
    var_4288 = -1;
    OP_PUSH2_C 150039756935678415, -4971445171120860642
    var_4296 = 56;
    pri = fun_1FC8(var_4288, var_4280, var_4272, var_4264, var_4256, var_4248, var_4240)
    var_4304 = 1;
    var_4312 = 8;
    pri = fun_2110(var_4304)
    var_4320 = 0;
    pri = fun_21D0()
    var_4328 = 0;
    var_4336 = 4631952216750555136;
    var_4344 = 0;
    OP_PUSH5_C 4662539717640632402, 4636906176340662682, 4663554313985395261, 4662426445952738918, 4640392947614665933
    var_4352 = 4663493412036332749;
    var_4360 = 1;
    pri = EvCameraMove(var_4360, var_4352, var_4344, var_4336, var_4328, var_4320, var_4312, var_4304, var_4296, var_4288)
    var_4368 = 0;
    pri = fun_22B8()
    var_4376 = 0;
    var_4384 = 0;
    var_4392 = 0;
    var_4400 = 210;
    pri = float(var_4400)
    var_4408 = pri;
    var_4416 = -2780782667399596389;
    var_4424 = 40;
    pri = fun_0898(var_4416, var_4408, var_4400, var_4392, var_4384)
    var_4432 = 0;
    var_4440 = 4631952216750555136;
    var_4448 = 3;
    OP_PUSH5_C 4662576683221558231, 4639944346870533325, 4663574193155625452, 4662463422528781025, 4642530750062783365
    var_4456 = 4663513291206562939;
    var_4464 = 90;
    pri = EvCameraMove(var_4464, var_4456, var_4448, var_4440, var_4432, var_4424, var_4416, var_4408, var_4400, var_4392)
    var_4472 = 15;
    var_4480 = 8;
    pri = fun_0060(var_4472)
    var_4488 = 0;
    var_4496 = 3;
    var_4504 = 0;
    var_4512 = 100;
    var_4520 = -1;
    OP_PUSH2_C 150038657424050204, -4971445171120860642
    var_4528 = 56;
    pri = fun_1FC8(var_4520, var_4512, var_4504, var_4496, var_4488, var_4480, var_4472)
    var_4536 = 1;
    var_4544 = 8;
    pri = fun_2110(var_4536)
    var_4552 = 0;
    pri = fun_21D0()
    var_4560 = 0;
    var_4568 = 2;
    var_4576 = -2780782667399596389;
    var_4584 = 24;
    pri = fun_8170(var_4576, var_4568, var_4560)
    var_4592 = 0;
    pri = fun_22B8()
    var_4600 = -8861403721397965071;
    var_4608 = 8;
    pri = fun_0B18(var_4600)
    var_4616 = 118753704079410460;
    var_4624 = 8;
    pri = fun_0B18(var_4616)
    var_4632 = -2780782667399596389;
    var_4640 = 8;
    pri = fun_0940(var_4632)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_4648 = 16;
    pri = fun_2348(var_4640, var_4632)
    var_4656 = 3;
    var_4664 = 1;
    OP_PUSH2_C 4635195723275936203, 4611719795424593183
    var_4672 = 32;
    pri = fun_23B0(var_4664, var_4656, var_4648, var_4640)
    var_4680 = 0;
    var_4688 = 4631698889271515546;
    var_4696 = 0;
    OP_PUSH5_C 4662591757525975040, 4640764846427644887, 4663585771013065933, 4662549767176910275, 4641375647127107011
    var_4704 = 4663594259242832364;
    var_4712 = 1;
    pri = EvCameraMove(var_4712, var_4704, var_4696, var_4688, var_4680, var_4672, var_4664, var_4656, var_4648, var_4640)
    var_4720 = 0;
    pri = fun_22B8()
    var_4728 = 5;
    var_4736 = 8;
    pri = fun_0060(var_4728)
    var_4744 = 0;
    var_4752 = 3;
    var_4760 = 0;
    var_4768 = 100;
    var_4776 = -1;
    OP_PUSH2_C 8994428556705908907, -2780782667399596389
    var_4784 = 56;
    pri = fun_1FC8(var_4776, var_4768, var_4760, var_4752, var_4744, var_4736, var_4728)
    var_4792 = 1;
    var_4800 = 8;
    pri = fun_2110(var_4792)
    var_4808 = 0;
    pri = fun_21D0()
    var_4816 = 0;
    var_4824 = -4616189618054758400;
    var_4832 = -1;
    OP_PUSH5_C 4662331942928331571, 4634745855894408397, 4663442669574710886, 4661877844626060083, 4644940527707147469
    var_4840 = 4663191651070089626;
    var_4848 = 1;
    pri = EvCameraMove(var_4848, var_4840, var_4832, var_4824, var_4816, var_4808, var_4800, var_4792, var_4784, var_4776)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_4856 = 3;
    var_4864 = 1;
    var_4872 = 32;
    pri = fun_2408(var_4864, var_4856, var_4848, var_4840)
    var_4880 = 0;
    pri = fun_22B8()
    var_4888 = 0;
    var_4896 = 0;
    var_4904 = -2780782667399596389;
    var_4912 = 24;
    pri = fun_8170(var_4904, var_4896, var_4888)
    var_4920 = -2780782667399596389;
    var_4928 = 8;
    pri = fun_0B18(var_4920)
    var_4936 = 1;
    var_4944 = 0;
    var_4952 = 4641240890982006784;
    var_4960 = 0;
    var_4968 = 0;
    OP_PUSH4_C 4664162409886253056, 4664390008793202688, 4611686018427387904, -2780782667399596389
    var_4976 = 72;
    pri = fun_07C8(var_4968, var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904)
    var_4984 = 30;
    var_4992 = 8;
    pri = fun_0060(var_4984)
    var_5000 = 1;
    var_5008 = 0;
    var_5016 = 4641240890982006784;
    var_5024 = 0;
    var_5032 = 0;
    OP_PUSH4_C 4663813864700248064, 4664602214537363456, 4607182418800017408, -4971445171120860642
    var_5040 = 72;
    pri = fun_07C8(var_5032, var_5024, var_5016, var_5008, var_5000, var_4992, var_4984, var_4976, var_4968)
    var_5048 = 60;
    var_5056 = 8;
    pri = fun_0060(var_5048)
    var_5064 = 31640;
    pri = SoundPostEvent(var_5064)
    var_5072 = 1;
    var_5080 = 1;
    var_5088 = -1;
    OP_PUSH2_C 6660951804926948019, 118753704079410460
    var_5096 = 40;
    pri = fun_1198(var_5088, var_5080, var_5072, var_5064, var_5056)
    var_5104 = 1;
    var_5112 = 1;
    var_5120 = -1;
    OP_PUSH2_C 6660951804926948019, 8802641224559852288
    var_5128 = 40;
    pri = fun_1198(var_5120, var_5112, var_5104, var_5096, var_5088)
    var_5136 = 1;
    var_5144 = 1;
    var_5152 = -1;
    OP_PUSH2_C 6660951804926948019, -8861403721397965071
    var_5160 = 40;
    pri = fun_1198(var_5152, var_5144, var_5136, var_5128, var_5120)
    var_5168 = 0;
    var_5176 = 4631698889271515546;
    var_5184 = 0;
    OP_PUSH5_C 4662086487952546857, 4635750721561265439, 4663332102685421732, 4662478936637848945, 4645883820722849055
    var_5192 = 4663775337812810793;
    var_5200 = 1;
    pri = EvCameraMove(var_5200, var_5192, var_5184, var_5176, var_5168, var_5160, var_5152, var_5144, var_5136, var_5128)
    var_5208 = 0;
    pri = fun_22B8()
    var_5216 = 1;
    var_5224 = 1;
    var_5232 = -1;
    var_5240 = -1;
    var_5248 = 0;
    var_5256 = 2;
    var_5264 = 118753704079410460;
    var_5272 = 56;
    pri = fun_4108(var_5264, var_5256, var_5248, var_5240, var_5232, var_5224, var_5216)
    var_5280 = 0;
    var_5288 = 3;
    var_5296 = 0;
    var_5304 = 100;
    var_5312 = -1;
    OP_PUSH2_C -220216845143584874, 118753704079410460
    var_5320 = 56;
    pri = fun_1FC8(var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264)
    var_5328 = 1;
    var_5336 = 8;
    pri = fun_2110(var_5328)
    var_5344 = 0;
    pri = fun_21D0()
    var_5352 = 1;
    var_5360 = 3;
    var_5368 = 0;
    var_5376 = 2;
    var_5384 = 118753704079410460;
    var_5392 = 40;
    pri = fun_6440(var_5384, var_5376, var_5368, var_5360, var_5352)
    var_5400 = 1;
    var_5408 = 1;
    var_5416 = -1;
    OP_PUSH2_C 118753704079410460, 6660951804926948019
    var_5424 = 40;
    pri = fun_1198(var_5416, var_5408, var_5400, var_5392, var_5384)
    var_5432 = 1;
    var_5440 = -1;
    var_5448 = -1;
    var_5456 = 3;
    var_5464 = 0;
    var_5472 = 1;
    var_5480 = 6660951804926948019;
    var_5488 = 56;
    pri = fun_2528(var_5480, var_5472, var_5464, var_5456, var_5448, var_5440, var_5432)
    var_5496 = 0;
    var_5504 = 3;
    var_5512 = 0;
    var_5520 = 100;
    var_5528 = -1;
    OP_PUSH2_C -6954807136404979091, 6660951804926948019
    var_5536 = 56;
    pri = fun_1FC8(var_5528, var_5520, var_5512, var_5504, var_5496, var_5488, var_5480)
    var_5544 = 1;
    var_5552 = 8;
    pri = fun_2110(var_5544)
    var_5560 = 0;
    pri = fun_21D0()
    var_5568 = 6660951804926948019;
    var_5576 = 8;
    pri = fun_0B18(var_5568)
    var_5584 = 118753704079410460;
    var_5592 = 8;
    pri = fun_0B18(var_5584)
    var_5600 = -1;
    var_5608 = -8861403721397965071;
    var_5616 = 16;
    pri = fun_11F0(var_5608, var_5600)
    var_5624 = 1;
    var_5632 = 1;
    var_5640 = -1;
    OP_PUSH2_C -8861403721397965071, 118753704079410460
    var_5648 = 40;
    pri = fun_1198(var_5640, var_5632, var_5624, var_5616, var_5608)
    var_5656 = 1;
    var_5664 = 1;
    var_5672 = -1;
    OP_PUSH2_C -8861403721397965071, 8802641224559852288
    var_5680 = 40;
    pri = fun_1198(var_5672, var_5664, var_5656, var_5648, var_5640)
    var_5688 = 1;
    var_5696 = 1;
    var_5704 = -1;
    OP_PUSH2_C -8861403721397965071, 6660951804926948019
    var_5712 = 40;
    pri = fun_1198(var_5704, var_5696, var_5688, var_5680, var_5672)
    var_5720 = 1;
    var_5728 = 1;
    var_5736 = -1;
    OP_PUSH2_C 6660951804926948019, 8287683314310166736
    var_5744 = 40;
    pri = fun_1198(var_5736, var_5728, var_5720, var_5712, var_5704)
    var_5752 = 1;
    var_5760 = 1;
    var_5768 = -1;
    OP_PUSH2_C 6660951804926948019, 3444054333069265930
    var_5776 = 40;
    pri = fun_1198(var_5768, var_5760, var_5752, var_5744, var_5736)
    var_5784 = 0;
    var_5792 = 4631698889271515546;
    var_5800 = 0;
    OP_PUSH5_C 4661881011219548078, 4638708319879052657, 4663112959022889697, 4661975514243955425, 4639809238881712210
    var_5808 = 4663284306914962309;
    var_5816 = 1;
    pri = EvCameraMove(var_5816, var_5808, var_5800, var_5792, var_5784, var_5776, var_5768, var_5760, var_5752, var_5744)
    var_5824 = 0;
    pri = fun_22B8()
    var_5832 = 0;
    var_5840 = 3;
    var_5848 = 0;
    var_5856 = 100;
    var_5864 = -1;
    OP_PUSH2_C -6954811534451491935, 6660951804926948019
    var_5872 = 56;
    pri = fun_1FC8(var_5864, var_5856, var_5848, var_5840, var_5832, var_5824, var_5816)
    var_5880 = 1;
    var_5888 = 8;
    pri = fun_2110(var_5880)
    var_5896 = 0;
    pri = fun_21D0()
    var_5904 = 31800;
    pri = SoundPostEvent(var_5904)
    var_5912 = 1;
    var_5920 = 1;
    var_5928 = -1;
    var_5936 = -1;
    var_5944 = 0;
    var_5952 = 47;
    var_5960 = 8287683314310166736;
    var_5968 = 56;
    pri = fun_4108(var_5960, var_5952, var_5944, var_5936, var_5928, var_5920, var_5912)
    var_5976 = 1;
    var_5984 = 1;
    var_5992 = -1;
    var_6000 = -1;
    var_6008 = 0;
    var_6016 = 47;
    var_6024 = 3444054333069265930;
    var_6032 = 56;
    pri = fun_4108(var_6024, var_6016, var_6008, var_6000, var_5992, var_5984, var_5976)
    var_6040 = 1;
    var_6048 = 210;
    pri = float(var_6048)
    var_6056 = pri;
    var_6064 = -8861403721397965071;
    var_6072 = 24;
    pri = fun_06D8(var_6064, var_6056, var_6048)
    var_6080 = 0;
    var_6088 = 4631698889271515546;
    var_6096 = 2;
    OP_PUSH5_C 4661869444357223875, 4639321935328281887, 4663086801641264906, 4661917811873729741, 4640058696079822029
    var_6104 = 4663223602877992796;
    var_6112 = 30;
    pri = EvCameraMove(var_6112, var_6104, var_6096, var_6088, var_6080, var_6072, var_6064, var_6056, var_6048, var_6040)
    var_6120 = 0;
    pri = fun_22B8()
    var_6128 = 30;
    var_6136 = 8;
    pri = fun_0060(var_6128)
    var_6144 = 0;
    var_6152 = 0;
    var_6160 = -8861403721397965071;
    var_6168 = 24;
    pri = fun_8170(var_6160, var_6152, var_6144)
    var_6176 = -8861403721397965071;
    var_6184 = 8;
    pri = fun_0B18(var_6176)
    var_6192 = 1;
    var_6200 = 1;
    var_6208 = -1;
    var_6216 = -1;
    var_6224 = 0;
    var_6232 = 22;
    var_6240 = -8861403721397965071;
    var_6248 = 56;
    pri = fun_4108(var_6240, var_6232, var_6224, var_6216, var_6208, var_6200, var_6192)
    var_6256 = 0;
    var_6264 = 4631698889271515546;
    var_6272 = 0;
    OP_PUSH5_C 4662086487952546857, 4635750721561265439, 4663332102685421732, 4662478936637848945, 4645883820722849055
    var_6280 = 4663775337812810793;
    var_6288 = 1;
    pri = EvCameraMove(var_6288, var_6280, var_6272, var_6264, var_6256, var_6248, var_6240, var_6232, var_6224, var_6216)
    var_6296 = 0;
    pri = fun_22B8()
    var_6304 = 0;
    var_6312 = 3;
    var_6320 = 0;
    var_6328 = 100;
    var_6336 = -1;
    OP_PUSH2_C 7466392426838694364, -8861403721397965071
    var_6344 = 56;
    pri = fun_1FC8(var_6336, var_6328, var_6320, var_6312, var_6304, var_6296, var_6288)
    var_6352 = 1;
    var_6360 = 8;
    pri = fun_2110(var_6352)
    var_6368 = 0;
    pri = fun_21D0()
    var_6376 = 31992;
    var_6384 = -8861403721397965071;
    var_6392 = 16;
    pri = fun_0D18(var_6384, var_6376)
    var_6400 = 1;
    var_6408 = 3;
    var_6416 = 0;
    var_6424 = 22;
    var_6432 = -8861403721397965071;
    var_6440 = 40;
    pri = fun_6440(var_6432, var_6424, var_6416, var_6408, var_6400)
    var_6448 = -8861403721397965071;
    var_6456 = 8;
    pri = fun_0B18(var_6448)
    var_6464 = 1;
    var_6472 = 0;
    var_6480 = 4641240890982006784;
    var_6488 = 0;
    var_6496 = 0;
    OP_PUSH4_C 4663158555770093568, 4663817163235131392, 4611686018427387904, -8861403721397965071
    var_6504 = 72;
    pri = fun_07C8(var_6496, var_6488, var_6480, var_6472, var_6464, var_6456, var_6448, var_6440, var_6432)
    var_6512 = 40;
    var_6520 = 8;
    pri = fun_0060(var_6512)
    var_6528 = -1;
    var_6536 = 8802641224559852288;
    var_6544 = 16;
    pri = fun_11F0(var_6536, var_6528)
    var_6552 = 0;
    var_6560 = 0;
    var_6568 = 0;
    var_6576 = 0;
    OP_PUSH2_C 6660951804926948019, 8802641224559852288
    var_6584 = 48;
    pri = fun_08E8(var_6576, var_6568, var_6560, var_6552, var_6544, var_6536)
    var_6592 = 1;
    var_6600 = 1;
    var_6608 = -1;
    OP_PUSH2_C 6660951804926948019, 118753704079410460
    var_6616 = 40;
    pri = fun_1198(var_6608, var_6600, var_6592, var_6584, var_6576)
    var_6624 = 1;
    var_6632 = 1;
    var_6640 = -1;
    OP_PUSH2_C 8802641224559852288, 6660951804926948019
    var_6648 = 40;
    pri = fun_1198(var_6640, var_6632, var_6624, var_6616, var_6608)
    var_6656 = 0;
    var_6664 = 0;
    var_6672 = 0;
    var_6680 = 0;
    OP_PUSH2_C 8802641224559852288, 6660951804926948019
    var_6688 = 48;
    pri = fun_08E8(var_6680, var_6672, var_6664, var_6656, var_6648, var_6640)
    var_6696 = -2780782667399596389;
    var_6704 = 8;
    pri = fun_0940(var_6696)
    var_6712 = -4971445171120860642;
    var_6720 = 8;
    pri = fun_0940(var_6712)
    var_6728 = 6660951804926948019;
    var_6736 = 8;
    pri = fun_0940(var_6728)
    var_6744 = 8802641224559852288;
    var_6752 = 8;
    pri = fun_0940(var_6744)
    var_6760 = 0;
    var_6768 = 4631698889271515546;
    var_6776 = 2;
    OP_PUSH5_C 4662051864331388191, 4637048321203901563, 4663404736423552614, 4662360002465072415, 4639850404597056143
    var_6784 = 4663679768262124503;
    var_6792 = 30;
    pri = EvCameraMove(var_6792, var_6784, var_6776, var_6768, var_6760, var_6752, var_6744, var_6736, var_6728, var_6720)
    var_6800 = 20;
    var_6808 = 8;
    pri = fun_0060(var_6800)
    var_6816 = 0;
    var_6824 = 3;
    var_6832 = 0;
    var_6840 = 100;
    var_6848 = -1;
    OP_PUSH2_C -6954808235916607302, 6660951804926948019
    var_6856 = 56;
    pri = fun_1FC8(var_6848, var_6840, var_6832, var_6824, var_6816, var_6808, var_6800)
    var_6864 = 1;
    var_6872 = 8;
    pri = fun_2110(var_6864)
    var_6888 = 0;
    var_6896 = 0;
    var_6904 = 1;
    var_6912 = 0;
    var_6920 = 0;
    var_6928 = 0;
    var_6936 = 48;
    pri = fun_2200(var_6928, var_6920, var_6912, var_6904, var_6896, var_6888)
    var_40 = pri;
    var_6944 = 0;
    pri = fun_21D0()
    pri = var_40;
    OP_JZER lab_CD18
    var_6952 = 1;
    var_6960 = -1;
    var_6968 = -1;
    var_6976 = 3;
    var_6984 = 0;
    var_6992 = 19;
    var_7000 = 8802641224559852288;
    var_7008 = 56;
    pri = fun_2528(var_7000, var_6992, var_6984, var_6976, var_6968, var_6960, var_6952)
    var_7016 = 8802641224559852288;
    var_7024 = 8;
    pri = fun_0B18(var_7016)
    var_7032 = 0;
    var_7040 = 0;
    var_7048 = 0;
    var_7056 = 30;
    pri = float(var_7056)
    var_7064 = pri;
    var_7072 = 6660951804926948019;
    var_7080 = 40;
    pri = fun_0898(var_7072, var_7064, var_7056, var_7048, var_7040)
    var_7088 = 6660951804926948019;
    var_7096 = 8;
    pri = fun_0940(var_7088)
    var_7104 = 0;
    var_7112 = 3;
    var_7120 = 0;
    var_7128 = 100;
    var_7136 = -1;
    OP_PUSH2_C -6954813733474748357, 6660951804926948019
    var_7144 = 56;
    pri = fun_1FC8(var_7136, var_7128, var_7120, var_7112, var_7104, var_7096, var_7088)
    var_7152 = 1;
    var_7160 = 8;
    pri = fun_2110(var_7152)
    var_7168 = 0;
    pri = fun_21D0()
    var_7176 = 1;
    var_7184 = 0;
    var_7192 = 31192;
    var_7200 = 8;
    var_7208 = 32;
    pri = fun_02E0(var_7200, var_7192, var_7184, var_7176)
    var_7216 = 0;
    pri = fun_0350()
    var_7224 = 1;
    var_7232 = 3;
    var_7240 = 0;
    var_7248 = 47;
    var_7256 = 8287683314310166736;
    var_7264 = 40;
    pri = fun_6440(var_7256, var_7248, var_7240, var_7232, var_7224)
    var_7272 = 1;
    var_7280 = 3;
    var_7288 = 0;
    var_7296 = 47;
    var_7304 = 3444054333069265930;
    var_7312 = 40;
    pri = fun_6440(var_7304, var_7296, var_7288, var_7280, var_7272)
    var_7320 = 8287683314310166736;
    var_7328 = 8;
    pri = fun_0B18(var_7320)
    var_7336 = 3444054333069265930;
    var_7344 = 8;
    pri = fun_0B18(var_7336)
    var_7352 = -1;
    var_7360 = 118753704079410460;
    var_7368 = 16;
    pri = fun_11F0(var_7360, var_7352)
    var_7376 = -1;
    var_7384 = 6660951804926948019;
    var_7392 = 16;
    pri = fun_11F0(var_7384, var_7376)
    var_7400 = -1;
    var_7408 = 8287683314310166736;
    var_7416 = 16;
    pri = fun_11F0(var_7408, var_7400)
    var_7424 = -1;
    var_7432 = 3444054333069265930;
    var_7440 = 16;
    pri = fun_11F0(var_7432, var_7424)
    var_7448 = -8861403721397965071;
    var_7456 = 8;
    pri = fun_0940(var_7448)
    pri = 1;
    return pri;
// lab_CD18
    var_8 = 1;
    var_16 = -1;
    var_24 = -1;
    var_32 = 3;
    var_40 = 0;
    var_48 = 20;
    var_56 = 8802641224559852288;
    var_64 = 56;
    pri = fun_2528(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_0B18(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 30;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 6660951804926948019;
    var_136 = 40;
    pri = fun_0898(var_128, var_120, var_112, var_104, var_96)
    var_144 = 6660951804926948019;
    var_152 = 8;
    pri = fun_0940(var_144)
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C -6954814832986376568, 6660951804926948019
    var_200 = 56;
    pri = fun_1FC8(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_2110(var_208)
    var_224 = 0;
    pri = fun_21D0()
    var_232 = 1;
    var_240 = 0;
    var_248 = 31192;
    var_256 = 8;
    var_264 = 32;
    pri = fun_02E0(var_256, var_248, var_240, var_232)
    var_272 = 0;
    pri = fun_0350()
    var_280 = 1;
    var_288 = 3;
    var_296 = 0;
    var_304 = 47;
    var_312 = 8287683314310166736;
    var_320 = 40;
    pri = fun_6440(var_312, var_304, var_296, var_288, var_280)
    var_328 = 1;
    var_336 = 3;
    var_344 = 0;
    var_352 = 47;
    var_360 = 3444054333069265930;
    var_368 = 40;
    pri = fun_6440(var_360, var_352, var_344, var_336, var_328)
    var_376 = 8287683314310166736;
    var_384 = 8;
    pri = fun_0B18(var_376)
    var_392 = 3444054333069265930;
    var_400 = 8;
    pri = fun_0B18(var_392)
    var_408 = -1;
    var_416 = 118753704079410460;
    var_424 = 16;
    pri = fun_11F0(var_416, var_408)
    var_432 = -1;
    var_440 = 6660951804926948019;
    var_448 = 16;
    pri = fun_11F0(var_440, var_432)
    var_456 = -1;
    var_464 = 8287683314310166736;
    var_472 = 16;
    pri = fun_11F0(var_464, var_456)
    var_480 = -1;
    var_488 = 3444054333069265930;
    var_496 = 16;
    pri = fun_11F0(var_488, var_480)
    var_504 = -8861403721397965071;
    var_512 = 8;
    pri = fun_0940(var_504)
    OP_PUSH2_C 118753704079410460, 2330143171726504470
    pri = SetBamiriInfoToChara(var_512, var_504)
    OP_PUSH2_C -66433073690856353, 3856524905287274505
    pri = SetBamiriInfoToChara(var_512, var_504)
    OP_PUSH2_C 6660951804926948019, -1531425688595603819
    pri = SetBamiriInfoToChara(var_512, var_504)
    var_520 = 3;
    var_528 = 1;
    pri = EvCameraEnd(var_528, var_520)
    var_536 = 0;
    var_544 = 8802641224559852288;
    var_552 = 16;
    pri = fun_0750(var_544, var_536)
    var_560 = 0;
    var_568 = -8861403721397965071;
    var_576 = 16;
    pri = fun_0750(var_568, var_560)
    var_584 = 0;
    var_592 = 6660951804926948019;
    var_600 = 16;
    pri = fun_0750(var_592, var_584)
    var_608 = 0;
    var_616 = 118753704079410460;
    var_624 = 16;
    pri = fun_0750(var_616, var_608)
    var_632 = 0;
    var_640 = -66433073690856353;
    var_648 = 16;
    pri = fun_0750(var_640, var_632)
    var_656 = 0;
    var_664 = 8287683314310166736;
    var_672 = 16;
    pri = fun_0750(var_664, var_656)
    var_680 = 0;
    var_688 = 3444054333069265930;
    var_696 = 16;
    pri = fun_0750(var_688, var_680)
    var_704 = 0;
    var_712 = -4971445171120860642;
    var_720 = 16;
    pri = fun_0750(var_712, var_704)
    var_728 = 0;
    var_736 = -2780782667399596389;
    var_744 = 16;
    pri = fun_0750(var_736, var_728)
    var_752 = 1;
    var_760 = 30;
    pri = float(var_760)
    var_768 = pri;
    var_776 = 8802641224559852288;
    var_784 = 24;
    pri = fun_06D8(var_776, var_768, var_760)
    pri = 0;
    return pri;
}
// fun_D3A8
fun_D3A8() {
    pri = 0;
    return pri;
}
// fun_D3C0
fun_D3C0() {
    var_8 = -6966129411289188542;
    pri = FlagSet(var_8)
    var_16 = -4971445171120860642;
    var_24 = 8;
    pri = fun_0628(var_16)
    var_32 = -2780782667399596389;
    var_40 = 8;
    pri = fun_0628(var_32)
    var_48 = 8287683314310166736;
    var_56 = 8;
    pri = fun_0628(var_48)
    var_64 = 3444054333069265930;
    var_72 = 8;
    pri = fun_0628(var_64)
    var_80 = 1585;
    var_88 = 8;
    pri = fun_8908(var_80)
    var_96 = 6862435835977116128;
    var_104 = 8;
    pri = fun_04A8(var_96)
    var_112 = 6862436935488744339;
    var_120 = 8;
    pri = fun_04A8(var_112)
    var_128 = 6862438035000372550;
    var_136 = 8;
    pri = fun_04A8(var_128)
    var_144 = 6862439134512000761;
    var_152 = 8;
    pri = fun_04A8(var_144)
    var_160 = 6862449030116654660;
    var_168 = 8;
    pri = fun_04A8(var_160)
    var_176 = 8053569876173910393;
    var_184 = 8;
    pri = fun_04A8(var_176)
    var_192 = 1630852289642056826;
    var_200 = 8;
    pri = fun_0628(var_192)
    var_208 = -5092834258003007029;
    var_216 = 8;
    pri = fun_0628(var_208)
    var_224 = 5125789878332258075;
    var_232 = 8;
    pri = fun_0628(var_224)
    var_240 = -4322017226219254454;
    var_248 = 8;
    pri = fun_0628(var_240)
    var_256 = 1630851190130428615;
    var_264 = 8;
    pri = fun_0628(var_256)
    var_272 = -4026809036642052317;
    var_280 = 8;
    pri = fun_0628(var_272)
    var_288 = 5125795375890399130;
    var_296 = 8;
    pri = fun_0628(var_288)
    var_304 = 766121820021451030;
    var_312 = 8;
    pri = fun_0628(var_304)
    var_320 = 7910991384959417448;
    var_328 = 8;
    pri = fun_0628(var_320)
    var_336 = 8106626419537127196;
    var_344 = 8;
    pri = fun_0628(var_336)
    var_352 = -2818721618577334593;
    var_360 = 8;
    pri = fun_0628(var_352)
    var_368 = 5118005038650923130;
    var_376 = 8;
    pri = fun_0628(var_368)
    var_384 = 8240744505783900195;
    var_392 = 8;
    pri = fun_0628(var_384)
    var_400 = 3444053233557637719;
    var_408 = 8;
    pri = fun_0628(var_400)
    var_416 = 3444052134046009508;
    var_424 = 8;
    pri = fun_0628(var_416)
    pri = 0;
    return pri;
}
// fun_D808
fun_D808() {
    var_8 = 0;
    pri = fun_04D8()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 19083;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 16340;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C -935838431704349219, 5475743609293200544
    var_88 = 72;
    pri = fun_0408(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 2268676401837500255;
    pri = ReserveScript(var_96)
    pri = 0;
    return pri;
}
// fun_D908
fun_D908() {
    var_8 = 0;
    pri = fun_04D8()
    var_16 = 31288;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_D978
fun_D978() {
    var_8 = 0;
    pri = fun_8AA0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8B08()
    var_24 = 0;
    pri = fun_8B60()
    var_32 = 0;
    pri = fun_8C90()
    var_48 = 0;
    pri = fun_8CC0()
    var_8 = pri;
    pri = var_8;
    OP_JZER lab_DA90
    var_56 = 0;
    pri = fun_D3A8()
    var_64 = 0;
    pri = fun_D3C0()
    var_72 = 0;
    pri = fun_D808()
    OP_JUMP lab_DAD8
// lab_DA90
    var_8 = 0;
    pri = fun_D3A8()
    var_16 = 0;
    pri = fun_D3C0()
    var_24 = 0;
    pri = fun_D908()
// lab_DAD8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_DB08
fun_DB08() {
    var_8 = 0;
    pri = fun_8B60()
    var_16 = 0;
    pri = fun_D3C0()
    pri = 0;
    return pri;
}
