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
    pri = arg_0;
    switch (pri) {
// switch_05B0
        case default:
        {
// switch_05B0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_05B0_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x1:
        {
// switch_05B0_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x2:
        {
// switch_05B0_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x3:
        {
// switch_05B0_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x4:
        {
// switch_05B0_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x5:
        {
// switch_05B0_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
        case 0x6:
        {
// switch_05B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_05B0_case_default
        }
    }
}
// fun_0648
fun_0648() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_06B0
// lab_06B0
    var_8 = 0;
    pri = fun_07F8()
    OP_JNZ lab_06E8
    OP_JUMP lab_0718
// lab_06E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06B0
// lab_0718
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0748
// lab_0748
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0788
    pri = 0;
    return pri;
// lab_0788
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0748
    pri = 0;
    return pri;
}
// fun_07C8
fun_07C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07F8
fun_07F8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0978
fun_0978() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = SetAttachModelPositionXYZ_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A00
fun_0A00() {
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
// fun_0A78
fun_0A78() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AC8
fun_0AC8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B20
fun_0B20() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B0(var_8)
    OP_JZER lab_0B98
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15E0(var_24)
    OP_JNZ lab_0B98
    pri = 0;
    return pri;
// lab_0B98
    OP_JUMP lab_0BA8
// lab_0BA8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C08
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BA8
    pri = 0;
    return pri;
}
// fun_0C48
fun_0C48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CC0
fun_0CC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D40
    pri = 0;
    return pri;
// lab_0D40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D80
// lab_0D80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B0(var_8)
    OP_JNZ lab_0E08
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0DF8
    pri = 0;
    return pri;
// lab_0E08
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E50
    pri = 0;
    return pri;
// lab_0E50
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EF8(var_8)
    pri = 0;
    return pri;
// lab_0EB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D80
    pri = 0;
    return pri;
// lab_0DF8
    OP_JUMP lab_0E50
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F30
fun_0F30() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F80
    pri = 0;
    return pri;
// lab_0F80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_15B0(var_8)
    OP_JZER lab_10B0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FD8
    OP_ZERO_P_S 64
// lab_10B0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10E8
    OP_CONST_S 64, 1
// lab_10E8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1120
    OP_CONST_S 72, 1
// lab_1120
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
// lab_0FD8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1000
    OP_ZERO_P_S 72
// lab_1000
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
    OP_JUMP lab_11C0
// lab_11C0
    pri = 0;
    return pri;
}
// fun_11D0
fun_11D0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1210
fun_1210() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1250
fun_1250() {
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
// fun_12B8
fun_12B8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1390
fun_1390() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13D0
fun_13D0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1480
fun_1480() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1390(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1408(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1448(var_24)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = arg_5;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = 392;
    var_64 = 0;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_15B0
fun_15B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_15E0
fun_15E0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1610
fun_1610() {
    OP_JUMP lab_1628
// lab_1628
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_16B8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_16A8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    pri = 0;
    return pri;
// lab_16B8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1748
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1738
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    pri = 0;
    return pri;
// lab_1748
    pri = 0;
    return pri;
// lab_1738
    OP_JUMP lab_1758
// lab_1758
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1628
    pri = 0;
    return pri;
// lab_16A8
    OP_JUMP lab_1758
}
// fun_1798
fun_1798() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CF8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1610(var_40)
    pri = 0;
    return pri;
}
// fun_1820
fun_1820() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1858
fun_1858() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1880
fun_1880() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
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
// switch_1ED0
        case default:
        {
// switch_1ED0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F18
// lab_1F18
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
            OP_JNZ lab_1FC0
            var_88 = 0;
            pri = fun_2178()
// lab_1FC0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1ED0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1AB8
                case default:
                {
// switch_1AB8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B30
// lab_1B30
                    OP_JUMP lab_1F18
                }
                case 0x0:
                {
// switch_1AB8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B30
                }
                case 0x1:
                {
// switch_1AB8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B30
                }
                case 0x2:
                {
// switch_1AB8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B30
                }
                case 0x3:
                {
// switch_1AB8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B30
                }
                case 0x4:
                {
// switch_1AB8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B30
                }
                case 0x5:
                {
// switch_1AB8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B30
                }
            }
        }
        case 0x65:
        {
// switch_1ED0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1C70
                case default:
                {
// switch_1C70_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CE8
// lab_1CE8
                    OP_JUMP lab_1F18
                }
                case 0x0:
                {
// switch_1C70_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1CE8
                }
                case 0x1:
                {
// switch_1C70_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1CE8
                }
                case 0x2:
                {
// switch_1C70_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1CE8
                }
                case 0x3:
                {
// switch_1C70_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1CE8
                }
                case 0x4:
                {
// switch_1C70_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1CE8
                }
                case 0x5:
                {
// switch_1C70_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1CE8
                }
            }
        }
        case 0x66:
        {
// switch_1ED0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E28
                case default:
                {
// switch_1E28_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1EA0
// lab_1EA0
                    OP_JUMP lab_1F18
                }
                case 0x0:
                {
// switch_1E28_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1EA0
                }
                case 0x1:
                {
// switch_1E28_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1EA0
                }
                case 0x2:
                {
// switch_1E28_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1EA0
                }
                case 0x3:
                {
// switch_1E28_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1EA0
                }
                case 0x4:
                {
// switch_1E28_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1EA0
                }
                case 0x5:
                {
// switch_1E28_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1EA0
                }
            }
        }
    }
}
// fun_1FD8
fun_1FD8() {
    pri = 400;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 480;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CC0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2080
    pri = 1;
    return pri;
// lab_2080
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_20C8
fun_20C8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2118
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1FD8(var_8)
    arg_2 = pri;
// lab_2118
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_18B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2178
fun_2178() {
    OP_JUMP lab_2190
// lab_2190
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_21D0
    pri = 0;
    return pri;
// lab_21D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2190
    pri = 0;
    return pri;
}
// fun_2210
fun_2210() {
    var_8 = 0;
    pri = fun_2178()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_22C0
    var_32 = 528;
    pri = SoundPostEvent(var_32)
// lab_22C0
    pri = 0;
    return pri;
}
// fun_22D0
fun_22D0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2350
fun_2350() {
    OP_JUMP lab_2368
// lab_2368
    pri = EvCameraMoveWait_()
    OP_JZER lab_23A0
    pri = 0;
    return pri;
// lab_23A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2368
    pri = 0;
    return pri;
}
// fun_23E0
fun_23E0() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2448(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2520()
    pri = 0;
    return pri;
}
// fun_2448
fun_2448() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24A0
fun_24A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2448(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2520()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2520
fun_2520() {
    OP_JUMP lab_2538
// lab_2538
    pri = IsEasingRunningDof_()
    OP_JZER lab_2590
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25A0
// lab_2590
    pri = 0;
    return pri;
// lab_25A0
    OP_JUMP lab_2538
    pri = 0;
    return pri;
}
// fun_25C0
fun_25C0() {
    pri = arg_6;
    OP_JNZ lab_25F8
    var_8 = 0;
    pri = fun_11D0()
// lab_25F8
    pri = arg_1;
    switch (pri) {
// switch_3B60
        case default:
        {
// switch_3B60_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3EB0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3EB0
            pri = 1;
            OP_JUMP lab_3EB8
// lab_3EB0
            pri = 0;
// lab_3EB8
            OP_JZER lab_4010
            var_16 = 8376;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CC0(var_24, var_16)
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
            OP_JUMP lab_4070
// lab_4010
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
// lab_4070
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_40D0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4130
// lab_40D0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4130
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4130
            pri = arg_2;
            OP_JZER lab_4170
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4170
            var_8 = 0;
            pri = fun_1210()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3B60_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1:
        {
// switch_3B60_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x2:
        {
// switch_3B60_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x3:
        {
// switch_3B60_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x4:
        {
// switch_3B60_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x5:
        {
// switch_3B60_case_0x5
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0x6:
        {
// switch_3B60_case_0x6
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0x7:
        {
// switch_3B60_case_0x7
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0x8:
        {
// switch_3B60_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x9:
        {
// switch_3B60_case_0x9
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0xa:
        {
// switch_3B60_case_0xa
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0xb:
        {
// switch_3B60_case_0xb
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0xc:
        {
// switch_3B60_case_0xc
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0xd:
        {
// switch_3B60_case_0xd
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0xe:
        {
// switch_3B60_case_0xe
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0xf:
        {
// switch_3B60_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x10:
        {
// switch_3B60_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x11:
        {
// switch_3B60_case_0x11
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0x12:
        {
// switch_3B60_case_0x12
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0x13:
        {
// switch_3B60_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x14:
        {
// switch_3B60_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x15:
        {
// switch_3B60_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x16:
        {
// switch_3B60_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x17:
        {
// switch_3B60_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x18:
        {
// switch_3B60_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x19:
        {
// switch_3B60_case_0x19
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1a:
        {
// switch_3B60_case_0x1a
            var_8 = 1;
            var_16 = 5936;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            var_40 = 6072;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C48(var_48, var_40)
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
            pri = fun_0F30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1b:
        {
// switch_3B60_case_0x1b
            var_8 = 3;
            var_16 = 6160;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            var_40 = 6296;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C48(var_48, var_40)
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
            pri = fun_0F30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1c:
        {
// switch_3B60_case_0x1c
            var_8 = 2;
            var_16 = 6384;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            var_40 = 6520;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C48(var_48, var_40)
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
            pri = fun_0F30(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1d:
        {
// switch_3B60_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6608;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1e:
        {
// switch_3B60_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6744;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x1f:
        {
// switch_3B60_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6880;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x20:
        {
// switch_3B60_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7016;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x21:
        {
// switch_3B60_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7136;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x22:
        {
// switch_3B60_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7256;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x23:
        {
// switch_3B60_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7392;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x24:
        {
// switch_3B60_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7528;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x25:
        {
// switch_3B60_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7664;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x26:
        {
// switch_3B60_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7800;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x27:
        {
// switch_3B60_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7944;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x28:
        {
// switch_3B60_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
        case 0x29:
        {
// switch_3B60_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8232;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3B60_case_default
        }
    }
}
// fun_41A0
fun_41A0() {
    pri = arg_5;
    OP_JNZ lab_41D8
    var_8 = 0;
    pri = fun_11D0()
// lab_41D8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4228
    OP_CONST_S -8, -1
// lab_4228
    pri = arg_1;
    switch (pri) {
// switch_5CE0
        case default:
        {
// switch_5CE0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6188
            var_520 = 28240;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0CC0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6188
            pri = 1;
            OP_JUMP lab_6190
// lab_6188
            pri = 0;
// lab_6190
            OP_JZER lab_61E0
            var_8 = 64;
            var_16 = 28336;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6438
// lab_61E0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6248
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6248
            pri = 1;
            OP_JUMP lab_6250
// lab_6248
            pri = 0;
// lab_6250
            OP_JZER lab_63D8
            var_16 = 28512;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CC0(var_24, var_16)
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
            OP_JUMP lab_6438
// lab_63D8
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
// lab_6438
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_64A8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_64A8
            var_8 = 0;
            pri = fun_1210()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5CE0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1:
        {
// switch_5CE0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2:
        {
// switch_5CE0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x3:
        {
// switch_5CE0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x4:
        {
// switch_5CE0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x5:
        {
// switch_5CE0_case_0x5
            var_8 = 2;
            var_16 = 18496;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EF8(var_40)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x6:
        {
// switch_5CE0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x7:
        {
// switch_5CE0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x8:
        {
// switch_5CE0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x9:
        {
// switch_5CE0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0xa:
        {
// switch_5CE0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0xb:
        {
// switch_5CE0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0xc:
        {
// switch_5CE0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0xd:
        {
// switch_5CE0_case_0xd
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0xe:
        {
// switch_5CE0_case_0xe
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0xf:
        {
// switch_5CE0_case_0xf
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x10:
        {
// switch_5CE0_case_0x10
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x11:
        {
// switch_5CE0_case_0x11
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x12:
        {
// switch_5CE0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x13:
        {
// switch_5CE0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x14:
        {
// switch_5CE0_case_0x14
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x15:
        {
// switch_5CE0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x16:
        {
// switch_5CE0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x17:
        {
// switch_5CE0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x18:
        {
// switch_5CE0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x19:
        {
// switch_5CE0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1a:
        {
// switch_5CE0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1b:
        {
// switch_5CE0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1c:
        {
// switch_5CE0_case_0x1c
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1d:
        {
// switch_5CE0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1e:
        {
// switch_5CE0_case_0x1e
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x1f:
        {
// switch_5CE0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x20:
        {
// switch_5CE0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x21:
        {
// switch_5CE0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x22:
        {
// switch_5CE0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x23:
        {
// switch_5CE0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x24:
        {
// switch_5CE0_case_0x24
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x25:
        {
// switch_5CE0_case_0x25
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x26:
        {
// switch_5CE0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x27:
        {
// switch_5CE0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x28:
        {
// switch_5CE0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x29:
        {
// switch_5CE0_case_0x29
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2a:
        {
// switch_5CE0_case_0x2a
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2b:
        {
// switch_5CE0_case_0x2b
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2c:
        {
// switch_5CE0_case_0x2c
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2d:
        {
// switch_5CE0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2e:
        {
// switch_5CE0_case_0x2e
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x2f:
        {
// switch_5CE0_case_0x2f
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x30:
        {
// switch_5CE0_case_0x30
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x31:
        {
// switch_5CE0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x32:
        {
// switch_5CE0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x33:
        {
// switch_5CE0_case_0x33
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x34:
        {
// switch_5CE0_case_0x34
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x35:
        {
// switch_5CE0_case_0x35
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x36:
        {
// switch_5CE0_case_0x36
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x37:
        {
// switch_5CE0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x38:
        {
// switch_5CE0_case_0x38
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
            pri = fun_0F30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x39:
        {
// switch_5CE0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x3a:
        {
// switch_5CE0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x3b:
        {
// switch_5CE0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x3c:
        {
// switch_5CE0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27816;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x3d:
        {
// switch_5CE0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27992;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
        case 0x3e:
        {
// switch_5CE0_case_0x3e
            var_8 = 4;
            var_16 = 28136;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            OP_JUMP switch_5CE0_case_default
        }
    }
}
// fun_64D8
fun_64D8() {
    pri = arg_4;
    OP_JNZ lab_6510
    var_8 = 0;
    pri = fun_11D0()
// lab_6510
    pri = arg_1;
    switch (pri) {
// switch_78E8
        case default:
        {
// switch_78E8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29208;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_15B0(var_264)
            OP_JZER lab_7EB0
            pri = arg_3;
            switch (pri) {
// switch_7E58
                case default:
                {
// switch_7E58_case_default
                    OP_JUMP lab_8168
// lab_8168
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_81D8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_81D8
                    var_8 = 0;
                    pri = fun_1210()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7E58_case_0x1
                    var_8 = 32;
                    var_16 = 29360;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E58_case_default
                }
                case 0x2:
                {
// switch_7E58_case_0x2
                    var_8 = 32;
                    var_16 = 29464;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E58_case_default
                }
                case 0x3:
                {
// switch_7E58_case_0x3
                    var_8 = 32;
                    var_16 = 29264;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_7E58_case_default
                }
            }
// lab_7EB0
            pri = arg_1;
            OP_JZER lab_7F00
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7F00
            pri = 0;
            OP_JUMP lab_7F08
// lab_7F00
            pri = 1;
// lab_7F08
            OP_JZER lab_7F70
            var_8 = 29560;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CC0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7F70
            pri = 1;
            OP_JUMP lab_7F78
// lab_7F70
            pri = 0;
// lab_7F78
            OP_JZER lab_7FC8
            var_8 = 32;
            var_16 = 29656;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8168
// lab_7FC8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8030
            var_8 = 32;
            var_16 = 29816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8168
// lab_8030
            var_16 = 29936;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CC0(var_24, var_16)
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
// switch_78E8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1:
        {
// switch_78E8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2:
        {
// switch_78E8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x3:
        {
// switch_78E8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x4:
        {
// switch_78E8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x5:
        {
// switch_78E8_case_0x5
            var_8 = 1;
            var_16 = 28688;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EF8(var_40)
            OP_JUMP switch_78E8_case_default
        }
        case 0x6:
        {
// switch_78E8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x7:
        {
// switch_78E8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x8:
        {
// switch_78E8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x9:
        {
// switch_78E8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0xa:
        {
// switch_78E8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0xb:
        {
// switch_78E8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0xc:
        {
// switch_78E8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0xd:
        {
// switch_78E8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0xe:
        {
// switch_78E8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0xf:
        {
// switch_78E8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x10:
        {
// switch_78E8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x11:
        {
// switch_78E8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x12:
        {
// switch_78E8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x13:
        {
// switch_78E8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x14:
        {
// switch_78E8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x15:
        {
// switch_78E8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x16:
        {
// switch_78E8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x17:
        {
// switch_78E8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x18:
        {
// switch_78E8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x19:
        {
// switch_78E8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1a:
        {
// switch_78E8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1b:
        {
// switch_78E8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1c:
        {
// switch_78E8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1d:
        {
// switch_78E8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1e:
        {
// switch_78E8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x1f:
        {
// switch_78E8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x20:
        {
// switch_78E8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x21:
        {
// switch_78E8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x22:
        {
// switch_78E8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x23:
        {
// switch_78E8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x24:
        {
// switch_78E8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x25:
        {
// switch_78E8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x26:
        {
// switch_78E8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x27:
        {
// switch_78E8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x28:
        {
// switch_78E8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x29:
        {
// switch_78E8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2a:
        {
// switch_78E8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2b:
        {
// switch_78E8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2c:
        {
// switch_78E8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2d:
        {
// switch_78E8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2e:
        {
// switch_78E8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x2f:
        {
// switch_78E8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x30:
        {
// switch_78E8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x31:
        {
// switch_78E8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x32:
        {
// switch_78E8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x33:
        {
// switch_78E8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x34:
        {
// switch_78E8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x35:
        {
// switch_78E8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x36:
        {
// switch_78E8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x37:
        {
// switch_78E8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x38:
        {
// switch_78E8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x39:
        {
// switch_78E8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x3a:
        {
// switch_78E8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x3b:
        {
// switch_78E8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x3c:
        {
// switch_78E8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28784;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x3d:
        {
// switch_78E8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28960;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
        case 0x3e:
        {
// switch_78E8_case_0x3e
            var_8 = 3;
            var_16 = 29104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C80(var_24, var_16, var_8)
            OP_JUMP switch_78E8_case_default
        }
    }
}
// fun_8208
fun_8208() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8418(var_16, var_8)
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
    OP_JZER lab_8400
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8400
    pri = 0;
    return pri;
}
// fun_8418
fun_8418() {
    var_8 = arg_1;
    var_16 = 30224;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C80(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8460
fun_8460() {
    pri = 30328;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_84E8
// lab_84E8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8668
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8658
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_85A8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_85A8
    pri = 0;
    OP_JUMP lab_85B0
// lab_8668
    pri = 0;
    return pri;
// lab_8658
    OP_JUMP lab_84E0
// lab_84E0
    OP_INC_P_S -936
// lab_85A8
    pri = 1;
// lab_85B0
    OP_JZER lab_8628
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8620
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8628
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8620
}
// fun_8688
fun_8688() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_86C0
fun_86C0() {
    var_8 = 0;
    pri = fun_8688()
    switch (pri) {
// switch_8770
        case default:
        {
// switch_8770_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_87B8
// lab_87B8
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8770_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_87B8
        }
        case 0x1:
        {
// switch_8770_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_87B8
        }
        case 0x2:
        {
// switch_8770_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_87B8
        }
    }
}
// fun_87C8
fun_87C8() {
    var_16 = 816;
    var_24 = 813;
    var_32 = 810;
    var_40 = 24;
    pri = fun_86C0(var_32, var_24, var_16)
    var_8 = pri;
    var_48 = 0;
    var_56 = arg_0;
    var_64 = 0;
    var_72 = var_8;
    pri = SoundPlayPokeVoice(var_72, var_64, var_56, var_48)
    pri = 0;
    return pri;
}
// fun_8860
fun_8860() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_88F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 31248;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1858()
// lab_88F8
    pri = arg_4;
    OP_JZER lab_8930
    var_8 = 1;
    var_16 = 8;
    pri = fun_1880(var_8)
// lab_8930
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8988
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8988
    pri = 0;
    OP_JUMP lab_8990
// lab_8988
    pri = 1;
// lab_8990
    OP_JZER lab_8A58
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8A58
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8A30
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1798(var_32, var_24)
    OP_JUMP lab_8A58
// lab_8A58
    pri = arg_2;
    OP_JZER lab_8B30
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8B00
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1310(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0978(var_40)
    OP_JUMP lab_8B30
// lab_8B30
    pri = arg_3;
    OP_JZER lab_8B68
    var_8 = 1;
    var_16 = 8;
    pri = fun_1820(var_8)
// lab_8B68
    pri = 0;
    return pri;
// lab_8B00
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1310(var_16, var_8)
// lab_8A30
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1798(var_16, var_8)
}
// fun_8B78
fun_8B78() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8460(var_24)
    pri = 0;
    return pri;
}
// fun_8BE0
fun_8BE0() {
    pri = g_mode;
    switch (pri) {
// switch_8CA0
        case default:
        {
// switch_8CA0_case_default
            pri = CommandNOP()
            OP_JUMP lab_8CE8
// lab_8CE8
            pri = 0;
            return pri;
        }
        case 0x945ac9220612a6c0:
        {
// switch_8CA0_case_0x945ac9220612a6c0
            var_8 = 0;
            pri = fun_DE38()
            OP_JUMP lab_8CE8
        }
        case 0x0:
        {
// switch_8CA0_case_0x0
            var_8 = 0;
            pri = fun_8CF8()
            OP_JUMP lab_8CE8
        }
        case 0x76c4ff1e7bef9ba4:
        {
// switch_8CA0_case_0x76c4ff1e7bef9ba4
            var_8 = 0;
            pri = fun_DF28()
            OP_JUMP lab_8CE8
        }
    }
}
// fun_8CF8
fun_8CF8() {
    pri = 0;
    return pri;
}
// fun_8D10
fun_8D10() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8860(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8D68
fun_8D68() {
    var_8 = -8551397936661211544;
    var_16 = 8;
    pri = fun_0648(var_8)
    var_24 = -8286243085875040294;
    var_32 = 8;
    pri = fun_0648(var_24)
    var_40 = 4044457239875455202;
    var_48 = 8;
    pri = fun_0648(var_40)
    var_56 = 5388264540081088874;
    var_64 = 8;
    pri = fun_0648(var_56)
    pri = 0;
    return pri;
}
// fun_8E20
fun_8E20() {
    var_8 = 0;
    pri = fun_0678()
    pri = 0;
    return pri;
}
// fun_8E50
fun_8E50() {
    pri = EvCameraStart()
    var_8 = 5;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_PUSH3_C 7149317435715846772, 3480884744796360697, -7766450811062851545
    var_32 = 24;
    pri = fun_86C0(var_24, var_16, var_8)
    var_8 = pri;
    var_48 = 816;
    var_56 = 813;
    var_64 = 810;
    var_72 = 24;
    pri = fun_86C0(var_64, var_56, var_48)
    var_16 = pri;
    OP_PUSH3_C 3480884744796360697, -7766450811062851545, 7149317435715846772
    var_88 = 24;
    pri = fun_86C0(var_80, var_72, var_64)
    var_24 = pri;
    var_104 = 813;
    var_112 = 810;
    var_120 = 816;
    var_128 = 24;
    pri = fun_86C0(var_120, var_112, var_104)
    var_32 = pri;
    OP_PUSH3_C -7766450811062851545, 7149317435715846772, 3480884744796360697
    var_144 = 24;
    pri = fun_86C0(var_136, var_128, var_120)
    var_40 = pri;
    var_160 = 810;
    var_168 = 816;
    var_176 = 813;
    var_184 = 24;
    pri = fun_86C0(var_176, var_168, var_160)
    var_48 = pri;
    var_192 = 1;
    var_200 = 1;
    OP_PUSH4_C -4582834833314545664, 4677454186052111565, 4672174825995763712, 8802641224559852288
    var_208 = 48;
    pri = fun_08A8(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 1;
    var_224 = 1;
    var_232 = 0;
    OP_PUSH2_C 4677440112303276032, 4672174825995763712
    var_240 = var_8;
    var_248 = 48;
    pri = fun_08A8(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 1;
    var_264 = 1;
    OP_PUSH3_C -4588851360941735936, 4677438834121008742, 4672238322792267776
    var_272 = var_24;
    var_280 = 48;
    pri = fun_08A8(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 1;
    var_296 = 1;
    OP_PUSH3_C -4593249407452839936, 4677420224886708634, 4672215480438200730
    var_304 = var_40;
    var_312 = 48;
    pri = fun_08A8(var_304, var_296, var_288, var_280, var_272, var_264)
    var_320 = 1;
    var_328 = 1;
    OP_PUSH4_C -4587338432941916160, 4677456604977692672, 4672289999838773248, -1655053127185566619
    var_336 = 48;
    pri = fun_08A8(var_328, var_320, var_312, var_304, var_296, var_288)
    var_344 = 1;
    var_352 = 1;
    OP_PUSH4_C -4587338432941916160, 4677467229008796058, 4672295497396912128, -2409953949732425464
    var_360 = 48;
    pri = fun_08A8(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 1;
    var_376 = 1;
    OP_PUSH4_C -4587338432941916160, 4677472135579435008, 4672415893920153600, -8286243085875040294
    var_384 = 48;
    pri = fun_08A8(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 1;
    var_400 = 1;
    OP_PUSH4_C -4587338432941916160, 4677481343989317632, 4672440358053871616, -8551397936661211544
    var_408 = 48;
    pri = fun_08A8(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 1;
    var_424 = 1;
    OP_PUSH4_C -4587338432941916160, 4677449444408216781, 4672302396832376422, 5388264540081088874
    var_432 = 48;
    pri = fun_08A8(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = 1;
    var_448 = 1;
    OP_PUSH4_C -4587338432941916160, 4677469950300074803, 4672336316766093312, 4044457239875455202
    var_456 = 48;
    pri = fun_08A8(var_448, var_440, var_432, var_424, var_416, var_408)
    var_464 = 1;
    var_472 = 8802641224559852288;
    var_480 = 16;
    pri = fun_0938(var_472, var_464)
    var_488 = 1;
    var_496 = var_8;
    var_504 = 16;
    pri = fun_0938(var_496, var_488)
    var_512 = 1;
    var_520 = -1655053127185566619;
    var_528 = 16;
    pri = fun_0938(var_520, var_512)
    var_536 = 1;
    var_544 = var_24;
    var_552 = 16;
    pri = fun_0938(var_544, var_536)
    var_560 = 1;
    var_568 = 5388264540081088874;
    var_576 = 16;
    pri = fun_0938(var_568, var_560)
    var_584 = 1;
    var_592 = -2409953949732425464;
    var_600 = 16;
    pri = fun_0938(var_592, var_584)
    var_608 = 1;
    var_616 = var_40;
    var_624 = 16;
    pri = fun_0938(var_616, var_608)
    var_632 = 1;
    var_640 = -8551397936661211544;
    var_648 = 16;
    pri = fun_0938(var_640, var_632)
    var_656 = 1;
    var_664 = -8286243085875040294;
    var_672 = 16;
    pri = fun_0938(var_664, var_656)
    var_680 = 1;
    var_688 = 4044457239875455202;
    var_696 = 16;
    pri = fun_0938(var_688, var_680)
    var_704 = 0;
    var_712 = -8551397936661211544;
    var_720 = 16;
    pri = fun_0900(var_712, var_704)
    var_728 = 0;
    var_736 = -8286243085875040294;
    var_744 = 16;
    pri = fun_0900(var_736, var_728)
    var_752 = 10;
    var_760 = 8;
    pri = fun_0060(var_752)
    var_768 = 1;
    var_776 = 1;
    var_784 = -1;
    var_792 = -1;
    var_800 = 0;
    var_808 = 58;
    var_816 = 8802641224559852288;
    var_824 = 56;
    pri = fun_41A0(var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_832 = 1;
    var_840 = 1;
    var_848 = -1;
    var_856 = var_8;
    var_864 = 8802641224559852288;
    var_872 = 40;
    pri = fun_12B8(var_864, var_856, var_848, var_840, var_832)
    var_880 = 1;
    var_888 = 1;
    var_896 = -1;
    var_904 = 8802641224559852288;
    var_912 = var_8;
    var_920 = 40;
    pri = fun_12B8(var_912, var_904, var_896, var_888, var_880)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_928 = 16;
    pri = fun_23E0(var_920, var_912)
    var_936 = 0;
    var_944 = 1;
    var_952 = 500;
    pri = float(var_952)
    var_960 = pri;
    var_968 = 4611686018427387904;
    var_976 = 32;
    pri = fun_2448(var_968, var_960, var_952, var_944)
    var_984 = 0;
    var_992 = 4630826316843712512;
    var_1000 = 0;
    OP_PUSH5_C 4677391812131857367, 4649867923096327946, 4672232734524419604, 4677469135287080714, 4652433875372301353
    var_1008 = 4672148500938615685;
    var_1016 = 1;
    pri = EvCameraMove(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1024 = 0;
    pri = fun_2350()
    var_1032 = 0;
    var_1040 = 4630826316843712512;
    var_1048 = 2;
    OP_PUSH5_C 4677388339049503130, 4649724722701926400, 4672234710896570532, 4677465660830336942, 4652362231194635469
    var_1056 = 4672150477310766612;
    var_1064 = 180;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 31296;
    var_1080 = 8;
    var_1088 = 16;
    pri = fun_0280(var_1080, var_1072)
    var_1096 = 0;
    pri = fun_0350()
    var_1104 = 0;
    var_1112 = 8;
    pri = fun_87C8(var_1104)
    var_1120 = 1;
    var_1128 = -1;
    var_1136 = -1;
    var_1144 = 3;
    var_1152 = 0;
    var_1160 = 30;
    var_1168 = var_8;
    var_1176 = 56;
    pri = fun_25C0(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1184 = 90;
    var_1192 = 8;
    pri = fun_0060(var_1184)
    var_1200 = 1;
    var_1208 = 0;
    var_1216 = 4641240890982006784;
    var_1224 = 0;
    var_1232 = 0;
    OP_PUSH4_C 4677456604977692672, 4672259763269009408, 4607182418800017408, -1655053127185566619
    var_1240 = 72;
    pri = fun_0A00(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1248 = 1;
    var_1256 = 0;
    var_1264 = 4641240890982006784;
    var_1272 = 0;
    var_1280 = 0;
    OP_PUSH4_C 4677449444408216781, 4672288652937029222, 4602678819172646912, 5388264540081088874
    var_1288 = 72;
    pri = fun_0A00(var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1296 = 0;
    var_1304 = 4631952216750555136;
    var_1312 = 0;
    OP_PUSH5_C 4677428369519091384, 4650449872610677228, 4672208440815003894, 4677512631967075533, 4652943125177822085
    var_1320 = 4672207319313143562;
    var_1328 = 1;
    pri = EvCameraMove(var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 0;
    pri = fun_2350()
    var_1344 = 0;
    var_1352 = 4631952216750555136;
    var_1360 = 2;
    OP_PUSH5_C 4677428413499556495, 4650449872610677228, 4672220752596455916, 4677512675947540644, 4652943125177822085
    var_1368 = 4672219631094595584;
    var_1376 = 180;
    pri = EvCameraMove(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1384 = 1;
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = 58;
    var_1416 = 8802641224559852288;
    var_1424 = 40;
    pri = fun_64D8(var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1432 = var_16;
    var_1440 = 1;
    var_1448 = 16;
    pri = fun_2300(var_1440, var_1432)
    var_1456 = 0;
    var_1464 = 3;
    var_1472 = 2;
    var_1480 = 100;
    var_1488 = -1;
    OP_PUSH2_C 5485263861334140977, -1655053127185566619
    var_1496 = 56;
    pri = fun_20C8(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 8802641224559852288;
    var_1512 = 8;
    pri = fun_0CF8(var_1504)
    var_1520 = 10;
    var_1528 = 8802641224559852288;
    var_1536 = 16;
    pri = fun_1310(var_1528, var_1520)
    var_1544 = 0;
    var_1552 = 0;
    var_1560 = 0;
    var_1568 = 90;
    pri = float(var_1568)
    var_1576 = pri;
    var_1584 = 8802641224559852288;
    var_1592 = 40;
    pri = fun_0A78(var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1600 = 0;
    pri = fun_2178()
    var_1608 = 8802641224559852288;
    var_1616 = 8;
    pri = fun_0B20(var_1608)
    var_1624 = -1655053127185566619;
    var_1632 = 8;
    pri = fun_0B20(var_1624)
    var_1640 = 5388264540081088874;
    var_1648 = 8;
    pri = fun_0B20(var_1640)
    var_1656 = 1;
    var_1664 = 8;
    pri = fun_2210(var_1656)
    var_1672 = 0;
    pri = fun_22D0()
    var_1680 = 0;
    var_1688 = 4630108555653100339;
    var_1696 = 0;
    OP_PUSH5_C 4677394863276624445, 4649677575643327365, 4672256753355928371, 4677479127098998129, 4652552094862519828
    var_1704 = 4672255631854068040;
    var_1712 = 1;
    pri = EvCameraMove(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1720 = 1;
    var_1728 = 1;
    OP_PUSH4_C -4586282901779251200, 4677467229008796058, 4672306492513189888, -2409953949732425464
    var_1736 = 48;
    pri = fun_08A8(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1744 = 1;
    var_1752 = 1;
    OP_PUSH4_C -4586634745500139520, 4677478883832050483, 4672334942376558592, 4044457239875455202
    var_1760 = 48;
    pri = fun_08A8(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1768 = 0;
    var_1776 = -2409953949732425464;
    var_1784 = 16;
    pri = fun_0900(var_1776, var_1768)
    var_1792 = 0;
    var_1800 = 4044457239875455202;
    var_1808 = 16;
    pri = fun_0900(var_1800, var_1792)
    var_1816 = 0;
    var_1824 = 0;
    var_1832 = 0;
    var_1840 = 0;
    var_1848 = var_24;
    var_1856 = -1655053127185566619;
    var_1864 = 48;
    pri = fun_0AC8(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1872 = 1;
    var_1880 = 1;
    var_1888 = -1;
    var_1896 = var_24;
    var_1904 = -1655053127185566619;
    var_1912 = 40;
    pri = fun_12B8(var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1920 = 0;
    var_1928 = 0;
    var_1936 = 0;
    var_1944 = 0;
    var_1952 = var_24;
    var_1960 = 5388264540081088874;
    var_1968 = 48;
    pri = fun_0AC8(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920)
    var_1976 = 0;
    var_1984 = 0;
    var_1992 = 0;
    var_2000 = 0;
    var_2008 = -1655053127185566619;
    var_2016 = var_24;
    var_2024 = 48;
    pri = fun_0AC8(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2032 = 1;
    var_2040 = 1;
    var_2048 = -1;
    var_2056 = -1655053127185566619;
    var_2064 = var_24;
    var_2072 = 40;
    pri = fun_12B8(var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2080 = var_32;
    var_2088 = 2;
    var_2096 = 16;
    pri = fun_2300(var_2088, var_2080)
    var_2104 = 0;
    var_2112 = 3;
    var_2120 = 0;
    var_2128 = 100;
    var_2136 = -1;
    OP_PUSH2_C 5485260562799256344, -1655053127185566619
    var_2144 = 56;
    pri = fun_20C8(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2152 = -1655053127185566619;
    var_2160 = 8;
    pri = fun_0B20(var_2152)
    var_2168 = var_24;
    var_2176 = 8;
    pri = fun_0B20(var_2168)
    var_2184 = 1;
    var_2192 = 8;
    pri = fun_2210(var_2184)
    var_2200 = 0;
    pri = fun_22D0()
    var_2208 = 0;
    var_2216 = 1;
    var_2224 = 150;
    pri = float(var_2224)
    var_2232 = pri;
    var_2240 = 4617878467915022336;
    var_2248 = 32;
    pri = fun_2448(var_2240, var_2232, var_2224, var_2216)
    var_2256 = 0;
    var_2264 = var_40;
    var_2272 = 16;
    pri = fun_0900(var_2264, var_2256)
    var_2280 = 0;
    var_2288 = 4628264894555645542;
    var_2296 = 0;
    OP_PUSH5_C 4677447841870019297, 4651428525920328090, 4672362133299113492, 4677454525526326641, 4652296700301620019
    var_2304 = 4672217822397967892;
    var_2312 = 1;
    pri = EvCameraMove(var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2320 = 0;
    pri = fun_2350()
    var_2328 = 0;
    var_2336 = 4628264894555645542;
    var_2344 = 2;
    OP_PUSH5_C 4677449680803216753, 4651428525920328090, 4672362474147718103, 4677456364459524096, 4652296612340689797
    var_2352 = 4672218163246572503;
    var_2360 = 180;
    pri = EvCameraMove(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2368 = 5;
    var_2376 = 8;
    pri = fun_0060(var_2368)
    var_2384 = -1655053127185566619;
    var_2392 = 8;
    pri = fun_1350(var_2384)
    var_2400 = 2;
    var_2408 = 2;
    var_2416 = -1655053127185566619;
    var_2424 = 24;
    pri = fun_1480(var_2416, var_2408, var_2400)
    var_2432 = 15;
    var_2440 = 8;
    pri = fun_0060(var_2432)
    var_2448 = 0;
    var_2456 = 3;
    var_2464 = 0;
    var_2472 = 100;
    var_2480 = -1;
    OP_PUSH2_C 5485261662310884555, -1655053127185566619
    var_2488 = 56;
    pri = fun_20C8(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2496 = 5388264540081088874;
    var_2504 = 8;
    pri = fun_0B20(var_2496)
    var_2512 = 1;
    var_2520 = 8;
    pri = fun_2210(var_2512)
    var_2528 = 0;
    pri = fun_22D0()
    var_2536 = 1;
    var_2544 = -2409953949732425464;
    var_2552 = 16;
    pri = fun_0900(var_2544, var_2536)
    var_2560 = 1;
    var_2568 = 4044457239875455202;
    var_2576 = 16;
    pri = fun_0900(var_2568, var_2560)
    var_2584 = 0;
    var_2592 = 4629869301922896282;
    var_2600 = 0;
    OP_PUSH5_C 4677368134148953211, 4649456793708469944, 4672246632351394693, 4677458045337925059, 4651951453650498355
    var_2608 = 4672245439381278556;
    var_2616 = 1;
    pri = EvCameraMove(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2624 = 0;
    var_2632 = 0;
    var_2640 = 0;
    var_2648 = var_32;
    pri = SoundPlayPokeVoice(var_2648, var_2640, var_2632, var_2624)
    var_2656 = 1;
    var_2664 = -1;
    var_2672 = -1;
    var_2680 = 3;
    var_2688 = 0;
    var_2696 = 30;
    var_2704 = var_24;
    var_2712 = 56;
    pri = fun_25C0(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656)
    var_2720 = 1;
    var_2728 = 0;
    var_2736 = 4641240890982006784;
    var_2744 = 0;
    var_2752 = 0;
    OP_PUSH4_C 4677445321239612621, 4672266662704473702, 4602678819172646912, 5388264540081088874
    var_2760 = 72;
    pri = fun_0A00(var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696, var_2688)
    var_2768 = 90;
    var_2776 = 8;
    pri = fun_0060(var_2768)
    var_2784 = 0;
    var_2792 = 4629869301922896282;
    var_2800 = 3;
    OP_PUSH5_C 4677370601178168033, 4649456793708469944, 4672280623753367388, 4677458354575570371, 4651941777948173926
    var_2808 = 4672241390429709271;
    var_2816 = 90;
    pri = EvCameraMove(var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2824 = -1;
    var_2832 = var_24;
    var_2840 = 16;
    pri = fun_1310(var_2832, var_2824)
    var_2848 = 0;
    var_2856 = 0;
    var_2864 = 0;
    var_2872 = 65;
    pri = float(var_2872)
    var_2880 = pri;
    var_2888 = var_24;
    var_2896 = 40;
    pri = fun_0A78(var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2904 = 5388264540081088874;
    var_2912 = 8;
    pri = fun_0B20(var_2904)
    var_2920 = 0;
    var_2928 = 0;
    var_2936 = 0;
    var_2944 = 831;
    pri = SoundPlayPokeVoice(var_2944, var_2936, var_2928, var_2920)
    var_2952 = 1;
    var_2960 = -1;
    var_2968 = -1;
    var_2976 = 3;
    var_2984 = 0;
    var_2992 = 30;
    var_3000 = 5388264540081088874;
    var_3008 = 56;
    pri = fun_25C0(var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3016 = 30;
    var_3024 = 8;
    pri = fun_0060(var_3016)
    var_3032 = 0;
    var_3040 = 0;
    var_3048 = 0;
    var_3056 = var_32;
    pri = SoundPlayPokeVoice(var_3056, var_3048, var_3040, var_3032)
    var_3064 = 1;
    var_3072 = -1;
    var_3080 = -1;
    var_3088 = 3;
    var_3096 = 0;
    var_3104 = 30;
    var_3112 = var_24;
    var_3120 = 56;
    pri = fun_25C0(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3128 = 5;
    var_3136 = -2409953949732425464;
    var_3144 = 16;
    pri = fun_1390(var_3136, var_3128)
    var_3152 = 60;
    var_3160 = 8;
    pri = fun_0060(var_3152)
    var_3168 = 0;
    var_3176 = 1;
    var_3184 = 400;
    pri = float(var_3184)
    var_3192 = pri;
    var_3200 = 4612811918334230528;
    var_3208 = 32;
    pri = fun_2448(var_3200, var_3192, var_3184, var_3176)
    var_3216 = 0;
    var_3224 = 4627842682090579558;
    var_3232 = 0;
    OP_PUSH5_C 4677443377852810527, 4651536278059850138, 4672392369868877332, 4677462799351325655, 4652276337346273608
    var_3240 = 4672129600333734216;
    var_3248 = 1;
    pri = EvCameraMove(var_3248, var_3240, var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176)
    var_3256 = 1;
    var_3264 = -1;
    var_3272 = -1;
    var_3280 = 3;
    var_3288 = 0;
    var_3296 = 0;
    var_3304 = -2409953949732425464;
    var_3312 = 56;
    pri = fun_25C0(var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256)
    var_3320 = 0;
    var_3328 = 3;
    var_3336 = 2;
    var_3344 = 100;
    var_3352 = -1;
    OP_PUSH2_C -1489301589734169225, -2409953949732425464
    var_3360 = 56;
    pri = fun_20C8(var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304)
    var_3368 = 1;
    var_3376 = var_40;
    var_3384 = 16;
    pri = fun_0900(var_3376, var_3368)
    var_3392 = 10;
    var_3400 = 8;
    pri = fun_0060(var_3392)
    var_3408 = 0;
    var_3416 = 0;
    var_3424 = 0;
    var_3432 = 0;
    OP_PUSH2_C -2409953949732425464, -1655053127185566619
    var_3440 = 48;
    pri = fun_0AC8(var_3432, var_3424, var_3416, var_3408, var_3400, var_3392)
    var_3448 = -1655053127185566619;
    var_3456 = 8;
    pri = fun_14E8(var_3448)
    var_3464 = -1;
    var_3472 = -1655053127185566619;
    var_3480 = 16;
    pri = fun_1310(var_3472, var_3464)
    var_3488 = 5;
    var_3496 = 8;
    pri = fun_0060(var_3488)
    var_3504 = 0;
    var_3512 = 0;
    var_3520 = 0;
    var_3528 = 0;
    OP_PUSH2_C -1655053127185566619, 8802641224559852288
    var_3536 = 48;
    pri = fun_0AC8(var_3528, var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3544 = -1655053127185566619;
    var_3552 = 8;
    pri = fun_0B20(var_3544)
    var_3560 = 8802641224559852288;
    var_3568 = 8;
    pri = fun_0B20(var_3560)
    var_3576 = 0;
    pri = fun_2178()
    var_3584 = 1;
    var_3592 = 8;
    pri = fun_2210(var_3584)
    var_3600 = 0;
    pri = fun_22D0()
    var_3608 = 0;
    var_3616 = -1655053127185566619;
    var_3624 = 16;
    pri = fun_0900(var_3616, var_3608)
    var_3632 = 0;
    var_3640 = var_24;
    var_3648 = 16;
    pri = fun_0900(var_3640, var_3632)
    var_3656 = 1;
    var_3664 = 1;
    OP_PUSH4_C -4583186677035433984, 4677475612784957850, 4672194617205063680, 8802641224559852288
    var_3672 = 48;
    pri = fun_08A8(var_3664, var_3656, var_3648, var_3640, var_3632, var_3624)
    var_3680 = 1;
    var_3688 = 1;
    OP_PUSH3_C -4601552919265804288, 4677462102535831552, 4672194067449249792
    var_3696 = var_8;
    var_3704 = 48;
    pri = fun_08A8(var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3712 = 1;
    var_3720 = 1;
    OP_PUSH4_C -4582834833314545664, 4677452481809088512, 4672254265710870528, -1655053127185566619
    var_3728 = 48;
    pri = fun_08A8(var_3720, var_3712, var_3704, var_3696, var_3688, var_3680)
    var_3736 = 1;
    var_3744 = 1;
    var_3752 = 0;
    OP_PUSH2_C 4677441582900078182, 4672257564245753856
    var_3760 = var_24;
    var_3768 = 48;
    pri = fun_08A8(var_3760, var_3752, var_3744, var_3736, var_3728, var_3720)
    var_3776 = 1;
    var_3784 = 1;
    OP_PUSH4_C -4585726988700247654, 4677443946850077901, 4672288652937029222, 5388264540081088874
    var_3792 = 48;
    pri = fun_08A8(var_3784, var_3776, var_3768, var_3760, var_3752, var_3744)
    var_3800 = 1;
    var_3808 = 1;
    OP_PUSH4_C -4582834833314545664, 4677450736334379418, 4672213034024828928, -2409953949732425464
    var_3816 = 48;
    pri = fun_08A8(var_3808, var_3800, var_3792, var_3784, var_3776, var_3768)
    var_3824 = 1;
    var_3832 = 1;
    OP_PUSH3_C 4632655904192331776, 4677420224886708634, 4672215480438200730
    var_3840 = var_40;
    var_3848 = 48;
    pri = fun_08A8(var_3840, var_3832, var_3824, var_3816, var_3808, var_3800)
    var_3856 = 1;
    var_3864 = 1;
    OP_PUSH4_C 4638777984935788544, 4677450021651821363, 4672161769295183872, 4044457239875455202
    var_3872 = 48;
    pri = fun_08A8(var_3864, var_3856, var_3848, var_3840, var_3832, var_3824)
    var_3880 = 0;
    var_3888 = 1;
    var_3896 = 180;
    pri = float(var_3896)
    var_3904 = pri;
    var_3912 = 4613937818241073152;
    var_3920 = 32;
    pri = fun_2448(var_3912, var_3904, var_3896, var_3888)
    var_3928 = 0;
    var_3936 = 4628687107020711526;
    var_3944 = 0;
    OP_PUSH5_C 4677383799440869949, 4650817461338075300, 4672127082452106609, 4677434724696299930, 4651622127927746888
    var_3952 = 4672251365748952269;
    var_3960 = 1;
    pri = EvCameraMove(var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912, var_3904, var_3896, var_3888)
    var_3968 = 0;
    pri = fun_2350()
    var_3976 = 1;
    var_3984 = 1;
    var_3992 = -1;
    var_4000 = var_40;
    var_4008 = -2409953949732425464;
    var_4016 = 40;
    pri = fun_12B8(var_4008, var_4000, var_3992, var_3984, var_3976)
    var_4024 = -2409953949732425464;
    var_4032 = 8;
    pri = fun_13D0(var_4024)
    var_4040 = 30;
    var_4048 = 8;
    pri = fun_0060(var_4040)
    var_4056 = 0;
    var_4064 = 0;
    var_4072 = 0;
    var_4080 = 30;
    pri = float(var_4080)
    var_4088 = pri;
    var_4096 = var_40;
    var_4104 = 40;
    pri = fun_0A78(var_4096, var_4088, var_4080, var_4072, var_4064)
    var_4112 = var_40;
    var_4120 = 8;
    pri = fun_0B20(var_4112)
    var_4128 = 15;
    var_4136 = 8;
    pri = fun_0060(var_4128)
    var_4144 = 0;
    var_4152 = 0;
    var_4160 = 0;
    var_4168 = 80;
    pri = float(var_4168)
    var_4176 = pri;
    var_4184 = var_40;
    var_4192 = 40;
    pri = fun_0A78(var_4184, var_4176, var_4168, var_4160, var_4152)
    var_4200 = var_40;
    var_4208 = 8;
    pri = fun_0B20(var_4200)
    var_4216 = 1;
    var_4224 = 0;
    var_4232 = 4641240890982006784;
    var_4240 = 0;
    var_4248 = 0;
    OP_PUSH4_C 4677436992439032218, 4672213034024828928, 4607182418800017408, -2409953949732425464
    var_4256 = 72;
    pri = fun_0A00(var_4248, var_4240, var_4232, var_4224, var_4216, var_4208, var_4200, var_4192, var_4184)
    var_4264 = 15;
    var_4272 = 8;
    pri = fun_0060(var_4264)
    var_4280 = 3;
    var_4288 = 60;
    var_4296 = 250;
    pri = float(var_4296)
    var_4304 = pri;
    var_4312 = 4611686018427387904;
    var_4320 = 32;
    pri = fun_2448(var_4312, var_4304, var_4296, var_4288)
    var_4328 = 0;
    var_4336 = 4630699653104192717;
    var_4344 = 3;
    OP_PUSH5_C 4677403910882931507, 4651006137533401661, 4672108679376236708, 4677442525731299000, 4652314028604873769
    var_4352 = 4672300134587202273;
    var_4360 = 60;
    pri = EvCameraMove(var_4360, var_4352, var_4344, var_4336, var_4328, var_4320, var_4312, var_4304, var_4296, var_4288)
    var_4368 = 0;
    var_4376 = 0;
    var_4384 = 0;
    var_4392 = 0;
    var_4400 = -2409953949732425464;
    var_4408 = var_40;
    var_4416 = 48;
    pri = fun_0AC8(var_4408, var_4400, var_4392, var_4384, var_4376, var_4368)
    var_4424 = 1;
    var_4432 = 1;
    var_4440 = -1;
    var_4448 = -2409953949732425464;
    var_4456 = var_40;
    var_4464 = 40;
    pri = fun_12B8(var_4456, var_4448, var_4440, var_4432, var_4424)
    var_4472 = 0;
    pri = fun_2350()
    var_4480 = 0;
    var_4488 = 3;
    var_4496 = 0;
    var_4504 = 100;
    var_4512 = -1;
    OP_PUSH2_C -1489302689245797436, -2409953949732425464
    var_4520 = 56;
    pri = fun_20C8(var_4512, var_4504, var_4496, var_4488, var_4480, var_4472, var_4464)
    var_4528 = var_40;
    var_4536 = 8;
    pri = fun_0B20(var_4528)
    var_4544 = 1;
    var_4552 = 8;
    pri = fun_2210(var_4544)
    var_4560 = 0;
    pri = fun_22D0()
    var_4568 = 0;
    var_4576 = 0;
    var_4584 = 0;
    var_4592 = var_48;
    pri = SoundPlayPokeVoice(var_4592, var_4584, var_4576, var_4568)
    var_4600 = 1;
    var_4608 = -1;
    var_4616 = -1;
    var_4624 = 3;
    var_4632 = 0;
    var_4640 = 30;
    var_4648 = var_40;
    var_4656 = 56;
    pri = fun_25C0(var_4648, var_4640, var_4632, var_4624, var_4616, var_4608, var_4600)
    var_4664 = 90;
    var_4672 = 8;
    pri = fun_0060(var_4664)
    var_4680 = 1;
    var_4688 = -1655053127185566619;
    var_4696 = 16;
    pri = fun_0900(var_4688, var_4680)
    var_4704 = 1;
    var_4712 = var_24;
    var_4720 = 16;
    pri = fun_0900(var_4712, var_4704)
    var_4728 = 1;
    var_4736 = -8551397936661211544;
    var_4744 = 16;
    pri = fun_0900(var_4736, var_4728)
    var_4752 = 1;
    var_4760 = -8286243085875040294;
    var_4768 = 16;
    pri = fun_0900(var_4760, var_4752)
    var_4776 = 0;
    var_4784 = 1;
    var_4792 = 400;
    pri = float(var_4792)
    var_4800 = pri;
    var_4808 = 4613937818241073152;
    var_4816 = 32;
    pri = fun_2448(var_4808, var_4800, var_4792, var_4784)
    var_4824 = 1;
    var_4832 = 0;
    var_4840 = 4641240890982006784;
    var_4848 = 0;
    var_4856 = 0;
    OP_PUSH4_C 4677472135579435008, 4672381259303878656, 4607182418800017408, -8286243085875040294
    var_4864 = 72;
    pri = fun_0A00(var_4856, var_4848, var_4840, var_4832, var_4824, var_4816, var_4808, var_4800, var_4792)
    var_4872 = 1;
    var_4880 = 0;
    var_4888 = 4641240890982006784;
    var_4896 = 0;
    var_4904 = 0;
    OP_PUSH4_C 4677481343989317632, 4672401875146899456, 4607182418800017408, -8551397936661211544
    var_4912 = 72;
    pri = fun_0A00(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864, var_4856, var_4848, var_4840)
    var_4920 = 0;
    var_4928 = 4631445561792475955;
    var_4936 = 0;
    OP_PUSH5_C 4677441398731880530, 4651039914530606940, 4672238649896977039, 4677508405719256269, 4653251560179645809
    var_4944 = 4672110683236178330;
    var_4952 = 1;
    pri = EvCameraMove(var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904, var_4896, var_4888, var_4880)
    var_4960 = 0;
    pri = fun_2350()
    var_4968 = 0;
    var_4976 = 4631445561792475955;
    var_4984 = 2;
    OP_PUSH5_C 4677448784701240115, 4651039914530606940, 4672254109030463570, 4677515790314226319, 4653251340277320253
    var_4992 = 4672126183601350902;
    var_5000 = 240;
    pri = EvCameraMove(var_5000, var_4992, var_4984, var_4976, var_4968, var_4960, var_4952, var_4944, var_4936, var_4928)
    var_5008 = 8802641224559852288;
    var_5016 = 8;
    pri = fun_0B20(var_5008)
    var_5024 = -1655053127185566619;
    var_5032 = 8;
    pri = fun_0B20(var_5024)
    var_5040 = -2409953949732425464;
    var_5048 = 8;
    pri = fun_0B20(var_5040)
    var_5056 = var_8;
    var_5064 = 8;
    pri = fun_0B20(var_5056)
    var_5072 = var_24;
    var_5080 = 8;
    pri = fun_0B20(var_5072)
    var_5088 = var_40;
    var_5096 = 8;
    pri = fun_0B20(var_5088)
    var_5104 = 5388264540081088874;
    var_5112 = 8;
    pri = fun_0B20(var_5104)
    var_5120 = 4044457239875455202;
    var_5128 = 8;
    pri = fun_0B20(var_5120)
    var_5136 = 0;
    var_5144 = 0;
    var_5152 = 0;
    var_5160 = 0;
    OP_PUSH2_C -8286243085875040294, 8802641224559852288
    var_5168 = 48;
    pri = fun_0AC8(var_5160, var_5152, var_5144, var_5136, var_5128, var_5120)
    var_5176 = 3;
    var_5184 = 8;
    pri = fun_0060(var_5176)
    var_5192 = 0;
    var_5200 = 0;
    var_5208 = 0;
    var_5216 = 0;
    OP_PUSH2_C -8286243085875040294, -1655053127185566619
    var_5224 = 48;
    pri = fun_0AC8(var_5216, var_5208, var_5200, var_5192, var_5184, var_5176)
    var_5232 = 3;
    var_5240 = 8;
    pri = fun_0060(var_5232)
    var_5248 = -1;
    var_5256 = var_8;
    var_5264 = 16;
    pri = fun_1310(var_5256, var_5248)
    var_5272 = 0;
    var_5280 = 0;
    var_5288 = 0;
    var_5296 = 0;
    var_5304 = -8286243085875040294;
    var_5312 = var_8;
    var_5320 = 48;
    pri = fun_0AC8(var_5312, var_5304, var_5296, var_5288, var_5280, var_5272)
    var_5328 = 1;
    var_5336 = 8;
    pri = fun_0060(var_5328)
    var_5344 = 0;
    var_5352 = 0;
    var_5360 = 0;
    var_5368 = 0;
    var_5376 = -8286243085875040294;
    var_5384 = var_24;
    var_5392 = 48;
    pri = fun_0AC8(var_5384, var_5376, var_5368, var_5360, var_5352, var_5344)
    var_5400 = 1;
    var_5408 = 8;
    pri = fun_0060(var_5400)
    var_5416 = 0;
    var_5424 = 0;
    var_5432 = 0;
    var_5440 = 0;
    OP_PUSH2_C -8286243085875040294, -2409953949732425464
    var_5448 = 48;
    pri = fun_0AC8(var_5440, var_5432, var_5424, var_5416, var_5408, var_5400)
    var_5456 = -1;
    var_5464 = -2409953949732425464;
    var_5472 = 16;
    pri = fun_1310(var_5464, var_5456)
    var_5480 = 2;
    var_5488 = 8;
    pri = fun_0060(var_5480)
    var_5496 = 0;
    var_5504 = 0;
    var_5512 = 0;
    var_5520 = 0;
    OP_PUSH2_C -8286243085875040294, 5388264540081088874
    var_5528 = 48;
    pri = fun_0AC8(var_5520, var_5512, var_5504, var_5496, var_5488, var_5480)
    var_5536 = 0;
    var_5544 = 0;
    var_5552 = 0;
    var_5560 = 0;
    OP_PUSH2_C -8286243085875040294, 4044457239875455202
    var_5568 = 48;
    pri = fun_0AC8(var_5560, var_5552, var_5544, var_5536, var_5528, var_5520)
    var_5576 = 1;
    var_5584 = 8;
    pri = fun_0060(var_5576)
    var_5592 = -1;
    var_5600 = var_40;
    var_5608 = 16;
    pri = fun_1310(var_5600, var_5592)
    var_5616 = 0;
    var_5624 = 0;
    var_5632 = 0;
    var_5640 = 0;
    var_5648 = -8286243085875040294;
    var_5656 = var_40;
    var_5664 = 48;
    pri = fun_0AC8(var_5656, var_5648, var_5640, var_5632, var_5624, var_5616)
    var_5672 = 1;
    var_5680 = 8;
    pri = fun_0060(var_5672)
    var_5688 = 0;
    var_5696 = 3;
    var_5704 = 0;
    var_5712 = 100;
    var_5720 = -1;
    OP_PUSH2_C -5527400390188612267, -8286243085875040294
    var_5728 = 56;
    pri = fun_20C8(var_5720, var_5712, var_5704, var_5696, var_5688, var_5680, var_5672)
    var_5736 = 8802641224559852288;
    var_5744 = 8;
    pri = fun_0B20(var_5736)
    var_5752 = -1655053127185566619;
    var_5760 = 8;
    pri = fun_0B20(var_5752)
    var_5768 = -2409953949732425464;
    var_5776 = 8;
    pri = fun_0B20(var_5768)
    var_5784 = var_8;
    var_5792 = 8;
    pri = fun_0B20(var_5784)
    var_5800 = var_24;
    var_5808 = 8;
    pri = fun_0B20(var_5800)
    var_5816 = var_40;
    var_5824 = 8;
    pri = fun_0B20(var_5816)
    var_5832 = 5388264540081088874;
    var_5840 = 8;
    pri = fun_0B20(var_5832)
    var_5848 = 4044457239875455202;
    var_5856 = 8;
    pri = fun_0B20(var_5848)
    var_5864 = -8551397936661211544;
    var_5872 = 8;
    pri = fun_0B20(var_5864)
    var_5880 = -8286243085875040294;
    var_5888 = 8;
    pri = fun_0B20(var_5880)
    var_5896 = 1;
    var_5904 = 8;
    pri = fun_2210(var_5896)
    var_5912 = 0;
    pri = fun_22D0()
    var_5920 = 1;
    var_5928 = 0;
    var_5936 = 31248;
    var_5944 = 8;
    var_5952 = 32;
    pri = fun_02E0(var_5944, var_5936, var_5928, var_5920)
    var_5960 = 0;
    pri = fun_0350()
    var_5968 = 15;
    var_5976 = 8;
    pri = fun_0060(var_5968)
    var_5984 = 4;
    var_5992 = 8;
    pri = fun_0408(var_5984)
    var_6000 = 1;
    var_6008 = 1;
    OP_PUSH4_C -4582834833314545664, 4677459326268971418, 4672216882315526144, 8802641224559852288
    var_6016 = 48;
    pri = fun_08A8(var_6008, var_6000, var_5992, var_5984, var_5976, var_5968)
    var_6024 = 1;
    var_6032 = 1;
    var_6040 = 0;
    OP_PUSH2_C 4677442173887578112, 4672220180850409472
    var_6048 = var_8;
    var_6056 = 48;
    pri = fun_08A8(var_6048, var_6040, var_6032, var_6024, var_6016, var_6008)
    var_6064 = 1;
    var_6072 = 1;
    OP_PUSH4_C -4582834833314545664, 4677445609861414912, 4672364766629462016, -1655053127185566619
    var_6080 = 48;
    pri = fun_08A8(var_6072, var_6064, var_6056, var_6048, var_6040, var_6032)
    var_6088 = 1;
    var_6096 = 1;
    OP_PUSH3_C 4631530004285489152, 4677433336562869862, 4672307042269003776
    var_6104 = var_24;
    var_6112 = 48;
    pri = fun_08A8(var_6104, var_6096, var_6088, var_6080, var_6072, var_6064)
    var_6120 = 1;
    var_6128 = 1;
    OP_PUSH4_C 4630122629401935872, 4677432951733800141, 4672324387064931942, 5388264540081088874
    var_6136 = 48;
    pri = fun_08A8(var_6128, var_6120, var_6112, var_6104, var_6096, var_6088)
    var_6144 = 1;
    var_6152 = 1;
    OP_PUSH4_C -4598738169498697728, 4677405381479733658, 4672232275478315008, -2409953949732425464
    var_6160 = 48;
    pri = fun_08A8(var_6152, var_6144, var_6136, var_6128, var_6120, var_6112)
    var_6168 = 1;
    var_6176 = 1;
    OP_PUSH3_C -4586634745500139520, 4677420224886708634, 4672231973112617370
    var_6184 = var_40;
    var_6192 = 48;
    pri = fun_08A8(var_6184, var_6176, var_6168, var_6160, var_6152, var_6144)
    var_6200 = 1;
    var_6208 = 1;
    OP_PUSH4_C 4629137466983448576, 4677422245239324672, 4672333155670163456, -8551397936661211544
    var_6216 = 48;
    pri = fun_08A8(var_6208, var_6200, var_6192, var_6184, var_6176, var_6168)
    var_6224 = 1;
    var_6232 = 1;
    var_6240 = 0;
    OP_PUSH3_C 4677416747681185792, 4672366141018996736, -8286243085875040294
    var_6248 = 48;
    pri = fun_08A8(var_6240, var_6232, var_6224, var_6216, var_6208, var_6200)
    var_6256 = 1;
    var_6264 = 1;
    OP_PUSH4_C 4632233691727265792, 4677404666797175603, 4672197503423086592, 4044457239875455202
    var_6272 = 48;
    pri = fun_08A8(var_6264, var_6256, var_6248, var_6240, var_6232, var_6224)
    var_6288 = 0;
    OP_PUSH2_C 4605831338911806259, 4677426034431271895
    var_6296 = 960;
    pri = float(var_6296)
    var_6304 = pri;
    var_6312 = 4672366006328822333;
    var_6320 = 31344;
    var_6328 = 48;
    pri = fun_1540(var_6320, var_6312, var_6304, var_6296, var_6288, var_6280)
    var_56 = pri;
    var_6336 = 31896;
    var_6344 = 31888;
    var_6352 = 8802641224559852288;
    var_6360 = 31816;
    var_6368 = 31760;
    var_6376 = 31672;
    var_6384 = 48;
    pri = fun_0820(var_6376, var_6368, var_6360, var_6352, var_6344, var_6336)
    var_6392 = 32128;
    var_6400 = 32120;
    var_6408 = 8802641224559852288;
    var_6416 = 32048;
    var_6424 = 31992;
    var_6432 = 31904;
    var_6440 = 48;
    pri = fun_0820(var_6432, var_6424, var_6416, var_6408, var_6400, var_6392)
    var_6448 = 32360;
    var_6456 = 32352;
    var_6464 = 8802641224559852288;
    var_6472 = 32280;
    var_6480 = 32224;
    var_6488 = 32136;
    var_6496 = 48;
    pri = fun_0820(var_6488, var_6480, var_6472, var_6464, var_6456, var_6448)
    var_6504 = 32592;
    var_6512 = 32584;
    var_6520 = 8802641224559852288;
    var_6528 = 32512;
    var_6536 = 32456;
    var_6544 = 32368;
    var_6552 = 48;
    pri = fun_0820(var_6544, var_6536, var_6528, var_6520, var_6512, var_6504)
    var_6560 = 32824;
    var_6568 = 32816;
    var_6576 = 8802641224559852288;
    var_6584 = 32744;
    var_6592 = 32688;
    var_6600 = 32600;
    var_6608 = 48;
    pri = fun_0820(var_6600, var_6592, var_6584, var_6576, var_6568, var_6560)
    var_6616 = 52300;
    pri = float(var_6616)
    var_6624 = pri;
    var_6632 = 980;
    pri = float(var_6632)
    var_6640 = pri;
    var_6648 = 24145;
    pri = float(var_6648)
    var_6656 = pri;
    var_6664 = 32832;
    var_6672 = 32;
    pri = fun_09B0(var_6664, var_6656, var_6648, var_6640)
    var_6680 = 52300;
    pri = float(var_6680)
    var_6688 = pri;
    var_6696 = 980;
    pri = float(var_6696)
    var_6704 = pri;
    var_6712 = 24160;
    pri = float(var_6712)
    var_6720 = pri;
    var_6728 = 32920;
    var_6736 = 32;
    pri = fun_09B0(var_6728, var_6720, var_6712, var_6704)
    var_6744 = 52300;
    pri = float(var_6744)
    var_6752 = pri;
    var_6760 = 980;
    pri = float(var_6760)
    var_6768 = pri;
    var_6776 = 24130;
    pri = float(var_6776)
    var_6784 = pri;
    var_6792 = 33008;
    var_6800 = 32;
    pri = fun_09B0(var_6792, var_6784, var_6776, var_6768)
    var_6808 = 52300;
    pri = float(var_6808)
    var_6816 = pri;
    var_6824 = 980;
    pri = float(var_6824)
    var_6832 = pri;
    var_6840 = 24175;
    pri = float(var_6840)
    var_6848 = pri;
    var_6856 = 33096;
    var_6864 = 32;
    pri = fun_09B0(var_6856, var_6848, var_6840, var_6832)
    var_6872 = 52300;
    pri = float(var_6872)
    var_6880 = pri;
    var_6888 = 980;
    pri = float(var_6888)
    var_6896 = pri;
    var_6904 = 24115;
    pri = float(var_6904)
    var_6912 = pri;
    var_6920 = 33184;
    var_6928 = 32;
    pri = fun_09B0(var_6920, var_6912, var_6904, var_6896)
    var_6936 = 6;
    var_6944 = -8286243085875040294;
    var_6952 = 16;
    pri = fun_1390(var_6944, var_6936)
    var_6960 = 0;
    var_6968 = 3;
    var_6976 = -8286243085875040294;
    var_6984 = 24;
    pri = fun_8208(var_6976, var_6968, var_6960)
    var_6992 = 1;
    var_7000 = 1;
    var_7008 = 1;
    var_7016 = 52300;
    pri = float(var_7016)
    var_7024 = pri;
    var_7032 = 980;
    pri = float(var_7032)
    var_7040 = pri;
    var_7048 = 24145;
    pri = float(var_7048)
    var_7056 = pri;
    var_7064 = -8286243085875040294;
    var_7072 = 56;
    pri = fun_1250(var_7064, var_7056, var_7048, var_7040, var_7032, var_7024, var_7016)
    var_7080 = 15;
    var_7088 = 8;
    pri = fun_0060(var_7080)
    var_7096 = 8802641224559852288;
    var_7104 = 8;
    pri = fun_0B20(var_7096)
    var_7112 = -1655053127185566619;
    var_7120 = 8;
    pri = fun_0B20(var_7112)
    var_7128 = -2409953949732425464;
    var_7136 = 8;
    pri = fun_0B20(var_7128)
    var_7144 = var_8;
    var_7152 = 8;
    pri = fun_0B20(var_7144)
    var_7160 = var_24;
    var_7168 = 8;
    pri = fun_0B20(var_7160)
    var_7176 = var_40;
    var_7184 = 8;
    pri = fun_0B20(var_7176)
    var_7192 = 5388264540081088874;
    var_7200 = 8;
    pri = fun_0B20(var_7192)
    var_7208 = 4044457239875455202;
    var_7216 = 8;
    pri = fun_0B20(var_7208)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_7224 = 3;
    var_7232 = 1;
    var_7240 = 32;
    pri = fun_24A0(var_7232, var_7224, var_7216, var_7208)
    var_7248 = 33272;
    pri = SoundPostEvent(var_7248)
    var_7256 = 33536;
    pri = SoundPostEvent(var_7256)
    var_7264 = 0;
    var_7272 = 4627758239597566362;
    var_7280 = 0;
    OP_PUSH5_C 4677461775431122289, 4651929111574221947, 4672323413997141361, 4677539983693205996, 4652601133081118638
    var_7288 = 4672286104818831852;
    var_7296 = 1;
    pri = EvCameraMove(var_7296, var_7288, var_7280, var_7272, var_7264, var_7256, var_7248, var_7240, var_7232, var_7224)
    var_7304 = 0;
    pri = fun_2350()
    var_7312 = 0;
    var_7320 = 4627758239597566362;
    var_7328 = 2;
    OP_PUSH5_C 4677460034079581798, 4651950222197475246, 4672242676858313769, 4677539910850560655, 4652608257916466627
    var_7336 = 4672260942495230198;
    var_7344 = 480;
    pri = EvCameraMove(var_7344, var_7336, var_7328, var_7320, var_7312, var_7304, var_7296, var_7288, var_7280, var_7272)
    var_7352 = 1;
    var_7360 = 1;
    var_7368 = -1;
    var_7376 = -1;
    var_7384 = 0;
    var_7392 = 8;
    var_7400 = -1655053127185566619;
    var_7408 = 56;
    pri = fun_41A0(var_7400, var_7392, var_7384, var_7376, var_7368, var_7360, var_7352)
    var_7416 = 31296;
    var_7424 = 8;
    var_7432 = 16;
    pri = fun_0280(var_7424, var_7416)
    var_7440 = 0;
    pri = fun_0350()
    var_7448 = 1;
    var_7456 = -1;
    var_7464 = -1;
    var_7472 = 3;
    var_7480 = 0;
    var_7488 = 30;
    var_7496 = var_24;
    var_7504 = 56;
    pri = fun_25C0(var_7496, var_7488, var_7480, var_7472, var_7464, var_7456, var_7448)
    var_7512 = 1;
    var_7520 = -1;
    var_7528 = -1;
    var_7536 = 3;
    var_7544 = 0;
    var_7552 = 30;
    var_7560 = 5388264540081088874;
    var_7568 = 56;
    pri = fun_25C0(var_7560, var_7552, var_7544, var_7536, var_7528, var_7520, var_7512)
    var_7576 = 30;
    var_7584 = 8;
    pri = fun_0060(var_7576)
    var_7592 = 5;
    var_7600 = 5;
    var_7608 = -8551397936661211544;
    var_7616 = 24;
    pri = fun_1480(var_7608, var_7600, var_7592)
    var_7624 = 1;
    var_7632 = 1;
    var_7640 = -1;
    var_7648 = -1;
    var_7656 = 0;
    var_7664 = 4;
    var_7672 = -8551397936661211544;
    var_7680 = 56;
    pri = fun_41A0(var_7672, var_7664, var_7656, var_7648, var_7640, var_7632, var_7624)
    var_7688 = 60;
    var_7696 = 8;
    pri = fun_0060(var_7688)
    var_7704 = 1;
    var_7712 = -1;
    var_7720 = -1;
    var_7728 = 3;
    var_7736 = 0;
    var_7744 = 30;
    var_7752 = var_40;
    var_7760 = 56;
    pri = fun_25C0(var_7752, var_7744, var_7736, var_7728, var_7720, var_7712, var_7704)
    var_7768 = 30;
    var_7776 = 8;
    pri = fun_0060(var_7768)
    var_7784 = 1;
    var_7792 = -1;
    var_7800 = -1;
    var_7808 = 3;
    var_7816 = 0;
    var_7824 = 30;
    var_7832 = 4044457239875455202;
    var_7840 = 56;
    pri = fun_25C0(var_7832, var_7824, var_7816, var_7808, var_7800, var_7792, var_7784)
    var_7848 = 70;
    var_7856 = 8;
    pri = fun_0060(var_7848)
    var_7864 = 34072;
    var_7872 = 33960;
    var_7880 = -1655053127185566619;
    var_7888 = 33888;
    var_7896 = 33832;
    var_7904 = 33744;
    var_7912 = 48;
    pri = fun_0820(var_7904, var_7896, var_7888, var_7880, var_7872, var_7864)
    var_7920 = 34488;
    var_7928 = 34376;
    var_7936 = -1655053127185566619;
    var_7944 = 34304;
    var_7952 = 34248;
    var_7960 = 34160;
    var_7968 = 48;
    pri = fun_0820(var_7960, var_7952, var_7944, var_7936, var_7928, var_7920)
    var_7976 = 1;
    var_7984 = 3;
    var_7992 = 0;
    var_8000 = 8;
    var_8008 = -1655053127185566619;
    var_8016 = 40;
    pri = fun_64D8(var_8008, var_8000, var_7992, var_7984, var_7976)
    var_8024 = -1655053127185566619;
    var_8032 = 8;
    pri = fun_0CF8(var_8024)
    var_8040 = 1;
    var_8048 = 1;
    OP_PUSH4_C -4587338432941916160, 4677441486692810752, 4672364766629462016, -1655053127185566619
    var_8056 = 48;
    pri = fun_08A8(var_8048, var_8040, var_8032, var_8024, var_8016, var_8008)
    var_8064 = -1655053127185566619;
    var_8072 = 8;
    pri = fun_0B20(var_8064)
    var_8080 = 20;
    var_8088 = 8;
    pri = fun_0060(var_8080)
    var_8096 = -8551397936661211544;
    var_8104 = 8;
    pri = fun_14E8(var_8096)
    var_8112 = 1;
    var_8120 = 3;
    var_8128 = 0;
    var_8136 = 4;
    var_8144 = -8551397936661211544;
    var_8152 = 40;
    pri = fun_64D8(var_8144, var_8136, var_8128, var_8120, var_8112)
    var_8160 = 1;
    var_8168 = 1;
    var_8176 = -1;
    var_8184 = -1;
    var_8192 = 0;
    var_8200 = 25;
    var_8208 = -1655053127185566619;
    var_8216 = 56;
    pri = fun_41A0(var_8208, var_8200, var_8192, var_8184, var_8176, var_8168, var_8160)
    var_8224 = 40;
    var_8232 = 8;
    pri = fun_0060(var_8224)
    var_8240 = 0;
    var_8248 = 0;
    var_8256 = 0;
    var_8264 = -55;
    pri = float(var_8264)
    var_8272 = pri;
    var_8280 = 5388264540081088874;
    var_8288 = 40;
    pri = fun_0A78(var_8280, var_8272, var_8264, var_8256, var_8248)
    var_8296 = 0;
    var_8304 = 0;
    var_8312 = 0;
    var_8320 = -60;
    pri = float(var_8320)
    var_8328 = pri;
    var_8336 = var_24;
    var_8344 = 40;
    pri = fun_0A78(var_8336, var_8328, var_8320, var_8312, var_8304)
    var_8352 = 0;
    var_8360 = 0;
    var_8368 = 0;
    var_8376 = 120;
    pri = float(var_8376)
    var_8384 = pri;
    var_8392 = 8802641224559852288;
    var_8400 = 40;
    pri = fun_0A78(var_8392, var_8384, var_8376, var_8368, var_8360)
    var_8408 = 5;
    var_8416 = 8;
    pri = fun_0060(var_8408)
    var_8424 = 0;
    var_8432 = 0;
    var_8440 = 0;
    var_8448 = -70;
    pri = float(var_8448)
    var_8456 = pri;
    var_8464 = -8551397936661211544;
    var_8472 = 40;
    pri = fun_0A78(var_8464, var_8456, var_8448, var_8440, var_8432)
    var_8480 = 0;
    var_8488 = 0;
    var_8496 = 0;
    var_8504 = 90;
    pri = float(var_8504)
    var_8512 = pri;
    var_8520 = var_8;
    var_8528 = 40;
    pri = fun_0A78(var_8520, var_8512, var_8504, var_8496, var_8488)
    var_8536 = 0;
    var_8544 = 0;
    var_8552 = 0;
    var_8560 = 15;
    pri = float(var_8560)
    var_8568 = pri;
    var_8576 = -2409953949732425464;
    var_8584 = 40;
    pri = fun_0A78(var_8576, var_8568, var_8560, var_8552, var_8544)
    var_8592 = 0;
    var_8600 = 0;
    var_8608 = 0;
    var_8616 = 20;
    pri = float(var_8616)
    var_8624 = pri;
    var_8632 = var_40;
    var_8640 = 40;
    pri = fun_0A78(var_8632, var_8624, var_8616, var_8608, var_8600)
    var_8648 = 5;
    var_8656 = 8;
    pri = fun_0060(var_8648)
    var_8664 = -1655053127185566619;
    var_8672 = 8;
    pri = fun_0B20(var_8664)
    var_8680 = 15;
    var_8688 = 8;
    pri = fun_0060(var_8680)
    var_8696 = 10;
    var_8704 = 8;
    pri = fun_0060(var_8696)
    var_8712 = 5;
    var_8720 = -2409953949732425464;
    var_8728 = 16;
    pri = fun_1390(var_8720, var_8712)
    var_8736 = 5;
    var_8744 = 5;
    var_8752 = -8551397936661211544;
    var_8760 = 24;
    pri = fun_1480(var_8752, var_8744, var_8736)
    var_8768 = 1;
    var_8776 = 1;
    var_8784 = -1;
    var_8792 = -1;
    var_8800 = 0;
    var_8808 = 4;
    var_8816 = -8551397936661211544;
    var_8824 = 56;
    pri = fun_41A0(var_8816, var_8808, var_8800, var_8792, var_8784, var_8776, var_8768)
    var_8832 = 1;
    var_8840 = 0;
    var_8848 = 31248;
    var_8856 = 75;
    var_8864 = 32;
    pri = fun_02E0(var_8856, var_8848, var_8840, var_8832)
    var_8872 = 45;
    var_8880 = 8;
    pri = fun_0060(var_8872)
    var_8888 = 34576;
    pri = SoundPostEvent(var_8888)
    var_8896 = 30;
    var_8904 = 8;
    pri = fun_0060(var_8896)
    var_8912 = 0;
    pri = fun_0350()
    var_8920 = 34688;
    pri = SoundPostEvent(var_8920)
    var_8928 = 34952;
    pri = SoundPostEvent(var_8928)
    var_8936 = var_56;
    var_8944 = 8;
    pri = fun_07C8(var_8936)
    var_8952 = -2409953949732425464;
    var_8960 = 8;
    pri = fun_13D0(var_8952)
    var_8968 = -8551397936661211544;
    var_8976 = 8;
    pri = fun_14E8(var_8968)
    var_8984 = -8286243085875040294;
    var_8992 = 8;
    pri = fun_14E8(var_8984)
    var_9000 = 1;
    var_9008 = 3;
    var_9016 = 0;
    var_9024 = 4;
    var_9032 = -8551397936661211544;
    var_9040 = 40;
    pri = fun_64D8(var_9032, var_9024, var_9016, var_9008, var_9000)
    var_9048 = 1;
    var_9056 = 3;
    var_9064 = 0;
    var_9072 = 25;
    var_9080 = -1655053127185566619;
    var_9088 = 40;
    pri = fun_64D8(var_9080, var_9072, var_9064, var_9056, var_9048)
    var_9096 = 0;
    var_9104 = 0;
    var_9112 = -8286243085875040294;
    var_9120 = 24;
    pri = fun_8208(var_9112, var_9104, var_9096)
    var_9128 = 0;
    var_9136 = 8802641224559852288;
    var_9144 = 16;
    pri = fun_0938(var_9136, var_9128)
    var_9152 = 0;
    var_9160 = var_8;
    var_9168 = 16;
    pri = fun_0938(var_9160, var_9152)
    var_9176 = 0;
    var_9184 = -1655053127185566619;
    var_9192 = 16;
    pri = fun_0938(var_9184, var_9176)
    var_9200 = 0;
    var_9208 = var_24;
    var_9216 = 16;
    pri = fun_0938(var_9208, var_9200)
    var_9224 = 0;
    var_9232 = 5388264540081088874;
    var_9240 = 16;
    pri = fun_0938(var_9232, var_9224)
    var_9248 = 0;
    var_9256 = -2409953949732425464;
    var_9264 = 16;
    pri = fun_0938(var_9256, var_9248)
    var_9272 = 0;
    var_9280 = var_40;
    var_9288 = 16;
    pri = fun_0938(var_9280, var_9272)
    var_9296 = 0;
    var_9304 = -8551397936661211544;
    var_9312 = 16;
    pri = fun_0938(var_9304, var_9296)
    var_9320 = 0;
    var_9328 = -8286243085875040294;
    var_9336 = 16;
    pri = fun_0938(var_9328, var_9320)
    var_9344 = 0;
    var_9352 = 4044457239875455202;
    var_9360 = 16;
    pri = fun_0938(var_9352, var_9344)
    var_9368 = 35160;
    var_9376 = 8;
    pri = fun_0878(var_9368)
    var_9384 = 35248;
    var_9392 = 8;
    pri = fun_0878(var_9384)
    var_9400 = 35336;
    var_9408 = 8;
    pri = fun_0878(var_9400)
    var_9416 = 35424;
    var_9424 = 8;
    pri = fun_0878(var_9416)
    var_9432 = 35512;
    var_9440 = 8;
    pri = fun_0878(var_9432)
    var_9448 = 35600;
    var_9456 = 8;
    pri = fun_0878(var_9448)
    var_9464 = 35688;
    var_9472 = 8;
    pri = fun_0878(var_9464)
    var_9480 = 3;
    var_9488 = 1;
    pri = EvCameraEnd(var_9488, var_9480)
    var_9496 = 5388264540081088874;
    var_9504 = 8;
    pri = fun_0B20(var_9496)
    var_9512 = var_24;
    var_9520 = 8;
    pri = fun_0B20(var_9512)
    var_9528 = 8802641224559852288;
    var_9536 = 8;
    pri = fun_0B20(var_9528)
    var_9544 = -8551397936661211544;
    var_9552 = 8;
    pri = fun_0B20(var_9544)
    var_9560 = var_8;
    var_9568 = 8;
    pri = fun_0B20(var_9560)
    var_9576 = -2409953949732425464;
    var_9584 = 8;
    pri = fun_0B20(var_9576)
    pri = 0;
    return pri;
}
// fun_DC10
fun_DC10() {
    pri = 0;
    return pri;
}
// fun_DC28
fun_DC28() {
    var_8 = -8551397936661211544;
    var_16 = 8;
    pri = fun_07C8(var_8)
    var_24 = -8286243085875040294;
    var_32 = 8;
    pri = fun_07C8(var_24)
    var_40 = -7766450811062851545;
    var_48 = 8;
    pri = fun_07C8(var_40)
    var_56 = 7149317435715846772;
    var_64 = 8;
    pri = fun_07C8(var_56)
    var_72 = 3480884744796360697;
    var_80 = 8;
    pri = fun_07C8(var_72)
    var_88 = 4044457239875455202;
    var_96 = 8;
    pri = fun_07C8(var_88)
    var_104 = 5388264540081088874;
    var_112 = 8;
    pri = fun_07C8(var_104)
    var_120 = 90;
    var_128 = 8;
    pri = fun_8B78(var_120)
    var_136 = 4;
    var_144 = 8;
    pri = fun_0408(var_136)
    pri = 0;
    return pri;
}
// fun_DD98
fun_DD98() {
    OP_PUSH2_C -1655053127185566619, 1820662325319012619
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C -2409953949732425464, 7896309497983890666
    pri = SetBamiriInfoToChara(var_0, var_-8)
    var_8 = -7124846196890156519;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_DE38
fun_DE38() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8D10()
    var_16 = 0;
    pri = fun_8D68()
    var_24 = 0;
    pri = fun_8E20()
    var_32 = 0;
    pri = fun_8E50()
    var_40 = 0;
    pri = fun_DC10()
    var_48 = 0;
    pri = fun_DC28()
    var_56 = 0;
    pri = fun_DD98()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_DF28
fun_DF28() {
    var_8 = 0;
    pri = fun_8D68()
    var_16 = 0;
    pri = fun_DC28()
    pri = 0;
    return pri;
}
