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
    alt = -9223372036854775808;
    OP_XOR 
    return pri;
}
// fun_0090
fun_0090() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00D0
    pri = 0;
    return pri;
// lab_00D0
    OP_ZERO_P_S -8
    OP_JUMP lab_00F8
// lab_00F8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0150
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00F0
// lab_0150
    pri = 0;
    return pri;
// lab_00F0
    OP_INC_P_S -8
}
// fun_0168
fun_0168() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0198
// lab_0198
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0298
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0218
    pri = 0;
    return pri;
// lab_0298
    pri = 0;
    return pri;
// lab_0218
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
    OP_JUMP lab_0190
// lab_0190
    OP_INC_P_S -8
}
// fun_02B0
fun_02B0() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0310
fun_0310() {
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
// fun_0380
fun_0380() {
    OP_JUMP lab_0398
// lab_0398
    pri = FadeWait_()
    OP_JZER lab_03D0
    pri = 0;
    return pri;
// lab_03D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0398
    pri = 0;
    return pri;
}
// fun_0410
fun_0410() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0438
fun_0438() {
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
// fun_04D8
fun_04D8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0508
fun_0508() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0540
// lab_0540
    var_8 = 0;
    pri = fun_0688()
    OP_JNZ lab_0578
    OP_JUMP lab_05A8
// lab_0578
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0540
// lab_05A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_05D8
// lab_05D8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0618
    pri = 0;
    return pri;
// lab_0618
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
    pri = 0;
    return pri;
}
// fun_0658
fun_0658() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0688
fun_0688() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07F8
fun_07F8() {
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
// fun_0870
fun_0870() {
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    pri = GetAnglePositionToFieldObject_(var_32, var_24, var_16)
    var_8 = pri;
    var_40 = 0;
    var_48 = arg_7;
    var_56 = arg_5;
    var_64 = arg_6;
    var_72 = var_8;
    var_80 = 1;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = arg_0;
    pri = StartForceMove_(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    OP_JZER lab_0A50
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1890(var_24)
    OP_JNZ lab_0A50
    pri = 0;
    return pri;
// lab_0A50
    OP_JUMP lab_0A60
// lab_0A60
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AC0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A60
    pri = 0;
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B38
fun_0B38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BB0
fun_0BB0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BF8
    pri = 0;
    return pri;
// lab_0BF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C38
// lab_0C38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    OP_JNZ lab_0CC0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CB0
    pri = 0;
    return pri;
// lab_0CC0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D08
    pri = 0;
    return pri;
// lab_0D08
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DB0(var_8)
    pri = 0;
    return pri;
// lab_0D68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C38
    pri = 0;
    return pri;
// lab_0CB0
    OP_JUMP lab_0D08
}
// fun_0DB0
fun_0DB0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0DE8
fun_0DE8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E38
    pri = 0;
    return pri;
// lab_0E38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    OP_JZER lab_0F68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0E90
    OP_ZERO_P_S 64
// lab_0F68
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FA0
    OP_CONST_S 64, 1
// lab_0FA0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FD8
    OP_CONST_S 72, 1
// lab_0FD8
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
// lab_0E90
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB8
    OP_ZERO_P_S 72
// lab_0EB8
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
    OP_JUMP lab_1078
// lab_1078
    pri = 0;
    return pri;
}
// fun_1088
fun_1088() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10C8
fun_10C8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1108
fun_1108() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1160
fun_1160() {
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
// fun_11C0
fun_11C0() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1580
        case default:
        {
// switch_1580_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1580_case_0x0
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_1160(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1580_case_default
        }
        case 0x1:
        {
// switch_1580_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1160(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1580_case_default
        }
        case 0x2:
        {
// switch_1580_case_0x2
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = 0;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_1160(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1580_case_default
        }
        case 0x3:
        {
// switch_1580_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1160(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1580_case_default
        }
        case 0x4:
        {
// switch_1580_case_0x4
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = 8;
            pri = fun_0060(var_56)
            var_72 = pri;
            var_80 = arg_0;
            var_88 = 48;
            pri = fun_1160(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1580_case_default
        }
        case 0x5:
        {
// switch_1580_case_0x5
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 8;
            pri = fun_0060(var_32)
            var_48 = pri;
            var_56 = var_8;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_1160(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1580_case_default
        }
        case 0x6:
        {
// switch_1580_case_0x6
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = pri;
            var_64 = arg_0;
            var_72 = 48;
            pri = fun_1160(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1580_case_default
        }
        case 0x7:
        {
// switch_1580_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1160(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1580_case_default
        }
    }
}
// fun_1630
fun_1630() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1670
fun_1670() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1728
fun_1728() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_17A0
fun_17A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_16B0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1728(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16F0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1768(var_24)
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1890
fun_1890() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_18C0
fun_18C0() {
    OP_JUMP lab_18D8
// lab_18D8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1968
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1958
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB0(var_8)
    pri = 0;
    return pri;
// lab_1968
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_19E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB0(var_8)
    pri = 0;
    return pri;
// lab_19F8
    pri = 0;
    return pri;
// lab_19E8
    OP_JUMP lab_1A08
// lab_1A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18D8
    pri = 0;
    return pri;
// lab_1958
    OP_JUMP lab_1A08
}
// fun_1A48
fun_1A48() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BB0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_18C0(var_40)
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B30
fun_1B30() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1B68
fun_1B68() {
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
// switch_2180
        case default:
        {
// switch_2180_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_21C8
// lab_21C8
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
            OP_JNZ lab_2270
            var_88 = 0;
            pri = fun_24E0()
// lab_2270
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2180_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1D68
                case default:
                {
// switch_1D68_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1DE0
// lab_1DE0
                    OP_JUMP lab_21C8
                }
                case 0x0:
                {
// switch_1D68_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1DE0
                }
                case 0x1:
                {
// switch_1D68_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1DE0
                }
                case 0x2:
                {
// switch_1D68_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1DE0
                }
                case 0x3:
                {
// switch_1D68_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1DE0
                }
                case 0x4:
                {
// switch_1D68_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1DE0
                }
                case 0x5:
                {
// switch_1D68_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1DE0
                }
            }
        }
        case 0x65:
        {
// switch_2180_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F20
                case default:
                {
// switch_1F20_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1F98
// lab_1F98
                    OP_JUMP lab_21C8
                }
                case 0x0:
                {
// switch_1F20_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1F98
                }
                case 0x1:
                {
// switch_1F20_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1F98
                }
                case 0x2:
                {
// switch_1F20_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1F98
                }
                case 0x3:
                {
// switch_1F20_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1F98
                }
                case 0x4:
                {
// switch_1F20_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1F98
                }
                case 0x5:
                {
// switch_1F20_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1F98
                }
            }
        }
        case 0x66:
        {
// switch_2180_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_20D8
                case default:
                {
// switch_20D8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2150
// lab_2150
                    OP_JUMP lab_21C8
                }
                case 0x0:
                {
// switch_20D8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2150
                }
                case 0x1:
                {
// switch_20D8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2150
                }
                case 0x2:
                {
// switch_20D8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2150
                }
                case 0x3:
                {
// switch_20D8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2150
                }
                case 0x4:
                {
// switch_20D8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2150
                }
                case 0x5:
                {
// switch_20D8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2150
                }
            }
        }
    }
}
// fun_2288
fun_2288() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22F0
fun_22F0() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B78(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2398
    pri = 1;
    return pri;
// lab_2398
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_23E0
fun_23E0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2430
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_22F0(var_8)
    arg_2 = pri;
// lab_2430
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1B68(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2288(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24E0
fun_24E0() {
    OP_JUMP lab_24F8
// lab_24F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2538
    pri = 0;
    return pri;
// lab_2538
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_24F8
    pri = 0;
    return pri;
}
// fun_2578
fun_2578() {
    var_8 = 0;
    pri = fun_24E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2628
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2628
    pri = 0;
    return pri;
}
// fun_2638
fun_2638() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2698
// lab_2698
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_26D8
    OP_JUMP lab_2708
// lab_26D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2698
// lab_2708
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2750
fun_2750() {
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
// fun_27C0
fun_27C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2838()
    return pri;
}
// fun_2838
fun_2838() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2878
fun_2878() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_28D8(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_29C8(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_28D8
fun_28D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2928
fun_2928() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2978
fun_2978() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29C8
fun_29C8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A18
fun_2A18() {
    pri = arg_1;
    OP_JNZ lab_2A60
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2A60
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
// fun_2AB8
fun_2AB8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2B30
fun_2B30() {
    var_8 = 0;
    pri = fun_2AB8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2BB0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2BB0
    pri = 1;
    return pri;
// lab_2BB0
    var_8 = 0;
    pri = fun_2AB8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2BF0
    pri = 1;
    return pri;
// lab_2BF0
    var_8 = 0;
    pri = fun_2AB8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2C20
fun_2C20() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_2C70
fun_2C70() {
    OP_JUMP lab_2C88
// lab_2C88
    pri = EvCameraMoveWait_()
    OP_JZER lab_2CC0
    pri = 0;
    return pri;
// lab_2CC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2C88
    pri = 0;
    return pri;
}
// fun_2D00
fun_2D00() {
    pri = arg_6;
    OP_JNZ lab_2D38
    var_8 = 0;
    pri = fun_1088()
// lab_2D38
    pri = arg_1;
    switch (pri) {
// switch_42A0
        case default:
        {
// switch_42A0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_45F0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_45F0
            pri = 1;
            OP_JUMP lab_45F8
// lab_45F0
            pri = 0;
// lab_45F8
            OP_JZER lab_4750
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B78(var_24, var_16)
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
            OP_JUMP lab_47B0
// lab_4750
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
            pri = fun_0168(var_16, var_8, var_0)
// lab_47B0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4810
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4870
// lab_4810
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4870
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4870
            pri = arg_2;
            OP_JZER lab_48B0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_48B0
            var_8 = 0;
            pri = fun_10C8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_42A0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1:
        {
// switch_42A0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x2:
        {
// switch_42A0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x3:
        {
// switch_42A0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x4:
        {
// switch_42A0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x5:
        {
// switch_42A0_case_0x5
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0x6:
        {
// switch_42A0_case_0x6
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0x7:
        {
// switch_42A0_case_0x7
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0x8:
        {
// switch_42A0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x9:
        {
// switch_42A0_case_0x9
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0xa:
        {
// switch_42A0_case_0xa
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0xb:
        {
// switch_42A0_case_0xb
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0xc:
        {
// switch_42A0_case_0xc
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0xd:
        {
// switch_42A0_case_0xd
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0xe:
        {
// switch_42A0_case_0xe
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0xf:
        {
// switch_42A0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x10:
        {
// switch_42A0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x11:
        {
// switch_42A0_case_0x11
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0x12:
        {
// switch_42A0_case_0x12
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0x13:
        {
// switch_42A0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x14:
        {
// switch_42A0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x15:
        {
// switch_42A0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x16:
        {
// switch_42A0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x17:
        {
// switch_42A0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x18:
        {
// switch_42A0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x19:
        {
// switch_42A0_case_0x19
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
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1a:
        {
// switch_42A0_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B00(var_48, var_40)
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
            pri = fun_0DE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1b:
        {
// switch_42A0_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B00(var_48, var_40)
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
            pri = fun_0DE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1c:
        {
// switch_42A0_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B00(var_48, var_40)
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
            pri = fun_0DE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1d:
        {
// switch_42A0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1e:
        {
// switch_42A0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x1f:
        {
// switch_42A0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x20:
        {
// switch_42A0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x21:
        {
// switch_42A0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x22:
        {
// switch_42A0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x23:
        {
// switch_42A0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x24:
        {
// switch_42A0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x25:
        {
// switch_42A0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x26:
        {
// switch_42A0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x27:
        {
// switch_42A0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x28:
        {
// switch_42A0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
        case 0x29:
        {
// switch_42A0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_42A0_case_default
        }
    }
}
// fun_48E0
fun_48E0() {
    pri = arg_5;
    OP_JNZ lab_4918
    var_8 = 0;
    pri = fun_1088()
// lab_4918
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4968
    OP_CONST_S -8, -1
// lab_4968
    pri = arg_1;
    switch (pri) {
// switch_6420
        case default:
        {
// switch_6420_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_68C8
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B78(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_68C8
            pri = 1;
            OP_JUMP lab_68D0
// lab_68C8
            pri = 0;
// lab_68D0
            OP_JZER lab_6920
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6B78
// lab_6920
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6988
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6988
            pri = 1;
            OP_JUMP lab_6990
// lab_6988
            pri = 0;
// lab_6990
            OP_JZER lab_6B18
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B78(var_24, var_16)
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
            var_176 = 28568;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28584;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6B78
// lab_6B18
            var_8 = 64;
            alt = 8448;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_6B78
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6BE8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6BE8
            var_8 = 0;
            pri = fun_10C8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6420_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x1:
        {
// switch_6420_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x2:
        {
// switch_6420_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x3:
        {
// switch_6420_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x4:
        {
// switch_6420_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x5:
        {
// switch_6420_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DB0(var_40)
            OP_JUMP switch_6420_case_default
        }
        case 0x6:
        {
// switch_6420_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x7:
        {
// switch_6420_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x8:
        {
// switch_6420_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x9:
        {
// switch_6420_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0xa:
        {
// switch_6420_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0xb:
        {
// switch_6420_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0xc:
        {
// switch_6420_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0xd:
        {
// switch_6420_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19096;
            var_72 = 18920;
            var_80 = 18736;
            var_88 = 18544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0xe:
        {
// switch_6420_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19752;
            var_72 = 19544;
            var_80 = 19328;
            var_88 = 19104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0xf:
        {
// switch_6420_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20144;
            var_72 = 20024;
            var_80 = 19896;
            var_88 = 19760;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x10:
        {
// switch_6420_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20488;
            var_72 = 20384;
            var_80 = 20272;
            var_88 = 20152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x11:
        {
// switch_6420_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20832;
            var_72 = 20728;
            var_80 = 20616;
            var_88 = 20496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x12:
        {
// switch_6420_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x13:
        {
// switch_6420_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x14:
        {
// switch_6420_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21392;
            var_72 = 21216;
            var_80 = 21032;
            var_88 = 20840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x15:
        {
// switch_6420_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x16:
        {
// switch_6420_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x17:
        {
// switch_6420_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x18:
        {
// switch_6420_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x19:
        {
// switch_6420_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x1a:
        {
// switch_6420_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x1b:
        {
// switch_6420_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x1c:
        {
// switch_6420_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21784;
            var_72 = 21664;
            var_80 = 21536;
            var_88 = 21400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x1d:
        {
// switch_6420_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x1e:
        {
// switch_6420_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22248;
            var_72 = 22104;
            var_80 = 21952;
            var_88 = 21792;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x1f:
        {
// switch_6420_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x20:
        {
// switch_6420_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x21:
        {
// switch_6420_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x22:
        {
// switch_6420_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x23:
        {
// switch_6420_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x24:
        {
// switch_6420_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22504;
            var_80 = 22384;
            var_88 = 22256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x25:
        {
// switch_6420_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22984;
            var_72 = 22872;
            var_80 = 22752;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x26:
        {
// switch_6420_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x27:
        {
// switch_6420_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x28:
        {
// switch_6420_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x29:
        {
// switch_6420_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23424;
            var_72 = 23288;
            var_80 = 23144;
            var_88 = 22992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x2a:
        {
// switch_6420_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23816;
            var_72 = 23696;
            var_80 = 23568;
            var_88 = 23432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x2b:
        {
// switch_6420_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24232;
            var_72 = 24104;
            var_80 = 23968;
            var_88 = 23824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x2c:
        {
// switch_6420_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24672;
            var_72 = 24536;
            var_80 = 24392;
            var_88 = 24240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x2d:
        {
// switch_6420_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x2e:
        {
// switch_6420_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24992;
            var_72 = 24896;
            var_80 = 24792;
            var_88 = 24680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x2f:
        {
// switch_6420_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25384;
            var_72 = 25264;
            var_80 = 25136;
            var_88 = 25000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x30:
        {
// switch_6420_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25776;
            var_72 = 25656;
            var_80 = 25528;
            var_88 = 25392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x31:
        {
// switch_6420_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x32:
        {
// switch_6420_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x33:
        {
// switch_6420_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26168;
            var_72 = 26048;
            var_80 = 25920;
            var_88 = 25784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x34:
        {
// switch_6420_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26536;
            var_72 = 26424;
            var_80 = 26304;
            var_88 = 26176;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x35:
        {
// switch_6420_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27024;
            var_72 = 26872;
            var_80 = 26712;
            var_88 = 26544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x36:
        {
// switch_6420_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27392;
            var_72 = 27280;
            var_80 = 27160;
            var_88 = 27032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x37:
        {
// switch_6420_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x38:
        {
// switch_6420_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27760;
            var_72 = 27648;
            var_80 = 27528;
            var_88 = 27400;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0DE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6420_case_default
        }
        case 0x39:
        {
// switch_6420_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x3a:
        {
// switch_6420_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x3b:
        {
// switch_6420_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x3c:
        {
// switch_6420_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x3d:
        {
// switch_6420_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
        case 0x3e:
        {
// switch_6420_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            OP_JUMP switch_6420_case_default
        }
    }
}
// fun_6C18
fun_6C18() {
    pri = arg_4;
    OP_JNZ lab_6C50
    var_8 = 0;
    pri = fun_1088()
// lab_6C50
    pri = arg_1;
    switch (pri) {
// switch_8028
        case default:
        {
// switch_8028_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1860(var_264)
            OP_JZER lab_85F0
            pri = arg_3;
            switch (pri) {
// switch_8598
                case default:
                {
// switch_8598_case_default
                    OP_JUMP lab_88A8
// lab_88A8
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8918
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8918
                    var_8 = 0;
                    pri = fun_10C8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8598_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8598_case_default
                }
                case 0x2:
                {
// switch_8598_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8598_case_default
                }
                case 0x3:
                {
// switch_8598_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8598_case_default
                }
            }
// lab_85F0
            pri = arg_1;
            OP_JZER lab_8640
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8640
            pri = 0;
            OP_JUMP lab_8648
// lab_8640
            pri = 1;
// lab_8648
            OP_JZER lab_86B0
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B78(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_86B0
            pri = 1;
            OP_JUMP lab_86B8
// lab_86B0
            pri = 0;
// lab_86B8
            OP_JZER lab_8708
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_88A8
// lab_8708
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8770
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_88A8
// lab_8770
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B78(var_24, var_16)
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
            var_176 = 29992;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30008;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_8028_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1:
        {
// switch_8028_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2:
        {
// switch_8028_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x3:
        {
// switch_8028_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x4:
        {
// switch_8028_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x5:
        {
// switch_8028_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DB0(var_40)
            OP_JUMP switch_8028_case_default
        }
        case 0x6:
        {
// switch_8028_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x7:
        {
// switch_8028_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x8:
        {
// switch_8028_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x9:
        {
// switch_8028_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0xa:
        {
// switch_8028_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0xb:
        {
// switch_8028_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0xc:
        {
// switch_8028_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0xd:
        {
// switch_8028_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0xe:
        {
// switch_8028_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0xf:
        {
// switch_8028_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x10:
        {
// switch_8028_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x11:
        {
// switch_8028_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x12:
        {
// switch_8028_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x13:
        {
// switch_8028_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x14:
        {
// switch_8028_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x15:
        {
// switch_8028_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x16:
        {
// switch_8028_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x17:
        {
// switch_8028_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x18:
        {
// switch_8028_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x19:
        {
// switch_8028_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1a:
        {
// switch_8028_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1b:
        {
// switch_8028_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1c:
        {
// switch_8028_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1d:
        {
// switch_8028_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1e:
        {
// switch_8028_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x1f:
        {
// switch_8028_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x20:
        {
// switch_8028_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x21:
        {
// switch_8028_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x22:
        {
// switch_8028_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x23:
        {
// switch_8028_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x24:
        {
// switch_8028_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x25:
        {
// switch_8028_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x26:
        {
// switch_8028_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x27:
        {
// switch_8028_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x28:
        {
// switch_8028_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x29:
        {
// switch_8028_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2a:
        {
// switch_8028_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2b:
        {
// switch_8028_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2c:
        {
// switch_8028_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2d:
        {
// switch_8028_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2e:
        {
// switch_8028_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x2f:
        {
// switch_8028_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x30:
        {
// switch_8028_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x31:
        {
// switch_8028_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x32:
        {
// switch_8028_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x33:
        {
// switch_8028_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x34:
        {
// switch_8028_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x35:
        {
// switch_8028_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x36:
        {
// switch_8028_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x37:
        {
// switch_8028_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x38:
        {
// switch_8028_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x39:
        {
// switch_8028_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x3a:
        {
// switch_8028_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x3b:
        {
// switch_8028_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x3c:
        {
// switch_8028_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x3d:
        {
// switch_8028_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
        case 0x3e:
        {
// switch_8028_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B38(var_24, var_16, var_8)
            OP_JUMP switch_8028_case_default
        }
    }
}
// fun_8948
fun_8948() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8B58(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30056;
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
    var_424 = 30112;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30128;
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
    OP_JZER lab_8B40
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8B40
    pri = 0;
    return pri;
}
// fun_8B58
fun_8B58() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B38(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8BA0
fun_8BA0() {
    pri = 30280;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8C28
// lab_8C28
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8DA8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8D98
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8CE8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8CE8
    pri = 0;
    OP_JUMP lab_8CF0
// lab_8DA8
    pri = 0;
    return pri;
// lab_8D98
    OP_JUMP lab_8C20
// lab_8C20
    OP_INC_P_S -936
// lab_8CE8
    pri = 1;
// lab_8CF0
    OP_JZER lab_8D68
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8D60
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8D68
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8D60
}
// fun_8DC8
fun_8DC8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_8E10
    pri = arg_0;
    return pri;
// lab_8E10
    pri = arg_1;
    return pri;
}
// fun_8E20
fun_8E20() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8EB8
    var_8 = 1;
    var_16 = 0;
    var_24 = 31200;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1B08()
// lab_8EB8
    pri = arg_4;
    OP_JZER lab_8EF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B30(var_8)
// lab_8EF0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8F48
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8F48
    pri = 0;
    OP_JUMP lab_8F50
// lab_8F48
    pri = 1;
// lab_8F50
    OP_JZER lab_9018
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9018
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_8FF0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1A48(var_32, var_24)
    OP_JUMP lab_9018
// lab_9018
    pri = arg_2;
    OP_JZER lab_90F0
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_90C0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1630(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07C0(var_40)
    OP_JUMP lab_90F0
// lab_90F0
    pri = arg_3;
    OP_JZER lab_9128
    var_8 = 1;
    var_16 = 8;
    pri = fun_1AD0(var_8)
// lab_9128
    pri = 0;
    return pri;
// lab_90C0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1630(var_16, var_8)
// lab_8FF0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1A48(var_16, var_8)
}
// fun_9138
fun_9138() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8BA0(var_24)
    pri = 0;
    return pri;
}
// fun_91A0
fun_91A0() {
    pri = g_mode;
    switch (pri) {
// switch_9288
        case default:
        {
// switch_9288_case_default
            pri = CommandNOP()
            OP_JUMP lab_92E0
// lab_92E0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_9288_case_0x0
            var_8 = 0;
            pri = fun_92F0()
            OP_JUMP lab_92E0
        }
        case 0x16ad8b17fd01c7fa:
        {
// switch_9288_case_0x16ad8b17fd01c7fa
            var_8 = 0;
            pri = fun_12958()
            OP_JUMP lab_92E0
        }
        case 0x340cd51b86f66a26:
        {
// switch_9288_case_0x340cd51b86f66a26
            var_8 = 0;
            pri = fun_12868()
            OP_JUMP lab_92E0
        }
        case 0x385e9d40e4417f55:
        {
// switch_9288_case_0x385e9d40e4417f55
            var_8 = 0;
            pri = fun_129A0()
            OP_JUMP lab_92E0
        }
    }
}
// fun_92F0
fun_92F0() {
    pri = 0;
    return pri;
}
// fun_9308
fun_9308() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_8E20(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9360
fun_9360() {
    pri = 0;
    return pri;
}
// fun_9378
fun_9378() {
    var_8 = 0;
    pri = fun_0508()
    pri = 0;
    return pri;
}
// fun_93A8
fun_93A8() {
    var_8 = -3319423182739788766;
    var_16 = 8;
    pri = fun_04D8(var_8)
    var_24 = 3178397703945784922;
    var_32 = 8;
    pri = fun_04D8(var_24)
    var_40 = 0;
    pri = fun_0508()
    pri = EvCameraStart()
    OP_PUSH2_C 3178397703945784922, -3319423182739788766
    var_56 = 16;
    pri = fun_8DC8(var_48, var_40)
    var_8 = pri;
    OP_PUSH2_C -3319423182739788766, 3178397703945784922
    var_72 = 16;
    pri = fun_8DC8(var_64, var_56)
    var_16 = pri;
    var_80 = 1;
    var_88 = 8802641224559852288;
    var_96 = 16;
    pri = fun_0780(var_88, var_80)
    var_104 = 1;
    var_112 = -3181508942575245480;
    var_120 = 16;
    pri = fun_0780(var_112, var_104)
    var_128 = 1;
    var_136 = -3319423182739788766;
    var_144 = 16;
    pri = fun_0780(var_136, var_128)
    var_152 = 1;
    var_160 = 3178397703945784922;
    var_168 = 16;
    pri = fun_0780(var_160, var_152)
    var_176 = 1;
    var_184 = 8868142065411558194;
    var_192 = 16;
    pri = fun_0780(var_184, var_176)
    var_200 = 0;
    var_208 = -3319423182739788766;
    var_216 = 16;
    pri = fun_0748(var_208, var_200)
    var_224 = 0;
    var_232 = 3178397703945784922;
    var_240 = 16;
    pri = fun_0748(var_232, var_224)
    var_248 = 1;
    var_256 = 8;
    pri = fun_0090(var_248)
    var_264 = 1;
    var_272 = 1;
    OP_PUSH4_C 4639481672377565184, 4659267604021719859, 4658683103640394138, 8802641224559852288
    var_280 = 48;
    pri = fun_06B0(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 1;
    var_296 = 1;
    OP_PUSH4_C 4644337115725824000, 4659263205975208755, 4658926975319434854, -3181508942575245480
    var_304 = 48;
    pri = fun_06B0(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 1;
    var_320 = 1;
    OP_PUSH4_C 4640537203540230144, 4659816040421654528, 4658542805956689920, 8868142065411558194
    var_328 = 48;
    pri = fun_06B0(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 1;
    var_344 = 1;
    OP_PUSH3_C 4640537203540230144, 4660108510514642944, 4658719387524110746
    var_352 = var_8;
    var_360 = 48;
    pri = fun_06B0(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 1;
    var_376 = 1;
    OP_PUSH3_C 4640537203540230144, 4660108510514642944, 4658912901570599322
    var_384 = var_16;
    var_392 = 48;
    pri = fun_06B0(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 1;
    var_408 = 8;
    pri = fun_0090(var_400)
    var_416 = 0;
    pri = fun_2878()
    var_424 = 1;
    var_432 = 1103;
    var_440 = 1;
    var_448 = 24;
    pri = fun_2978(var_440, var_432, var_424)
    var_456 = 1;
    var_464 = 1104;
    var_472 = 2;
    var_480 = 24;
    pri = fun_2978(var_472, var_464, var_456)
    var_488 = 0;
    var_496 = 4631952216750555136;
    var_504 = 0;
    OP_PUSH5_C 4659079257679881830, 4638902185769262121, 4658811746500843930, 4660168829722542735, 4639024627384131256
    var_512 = 4658812933973401928;
    var_520 = 1;
    pri = EvCameraMove(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_528 = 0;
    pri = fun_2C70()
    var_536 = 31248;
    var_544 = 8;
    var_552 = 16;
    pri = fun_02B0(var_544, var_536)
    var_560 = 0;
    pri = fun_0380()
    var_568 = 1;
    var_576 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4659442206468210688, 4658542805956689920, 4607182418800017408
    var_584 = 8868142065411558194;
    var_592 = 64;
    pri = fun_0870(var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = -150;
    pri = float(var_624)
    var_632 = pri;
    var_640 = -3181508942575245480;
    var_648 = 40;
    pri = fun_0930(var_640, var_632, var_624, var_616, var_608)
    var_656 = -3181508942575245480;
    var_664 = 8;
    pri = fun_09D8(var_656)
    var_672 = 0;
    var_680 = 4631952216750555136;
    var_688 = 3;
    OP_PUSH5_C 4659078949816626053, 4639607280585922314, 4658811746500843930, 4659907497798852936, 4639700167328236831
    var_696 = 4658812648100378706;
    var_704 = 180;
    pri = EvCameraMove(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_712 = 1;
    var_720 = 1;
    var_728 = -1;
    var_736 = -1;
    var_744 = 0;
    var_752 = 1;
    var_760 = -3181508942575245480;
    var_768 = 56;
    pri = fun_48E0(var_760, var_752, var_744, var_736, var_728, var_720, var_712)
    var_776 = 0;
    var_784 = 3;
    var_792 = 0;
    var_800 = 100;
    var_808 = -1;
    OP_PUSH2_C -4322529488271536751, -3181508942575245480
    var_816 = 56;
    pri = fun_23E0(var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_824 = 1;
    var_832 = 8;
    pri = fun_2578(var_824)
    var_840 = 0;
    pri = fun_2638()
    var_848 = 0;
    var_856 = 4631952216750555136;
    var_864 = 0;
    OP_PUSH5_C 4659100148400809574, 4639268455082706862, 4658934605930131620, 4657905748919556506, 4649952541511201587
    var_872 = 4659857623951417016;
    var_880 = 1;
    pri = EvCameraMove(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
    var_888 = 0;
    pri = fun_2C70()
    var_896 = 0;
    var_904 = 4631952216750555136;
    var_912 = 3;
    OP_PUSH5_C 4659068768338952847, 4638548582829769359, 4658952835832920146, 4657751399477249311, 4649791221165174292
    var_920 = 4659690322262134620;
    var_928 = 150;
    pri = EvCameraMove(var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_936 = 1;
    var_944 = 3;
    var_952 = 0;
    var_960 = 1;
    var_968 = -3181508942575245480;
    var_976 = 40;
    pri = fun_6C18(var_968, var_960, var_952, var_944, var_936)
    var_984 = 0;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 100;
    var_1016 = -1;
    OP_PUSH2_C -4321538828294707865, -3181508942575245480
    var_1024 = 56;
    pri = fun_23E0(var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1032 = 8868142065411558194;
    var_1040 = 8;
    pri = fun_09D8(var_1032)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_2578(var_1048)
    var_1064 = 0;
    pri = fun_2638()
    var_1072 = 1;
    var_1080 = -1;
    var_1088 = -1;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 2;
    var_1120 = -3181508942575245480;
    var_1128 = 56;
    pri = fun_2D00(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 21;
    var_1184 = 8802641224559852288;
    var_1192 = 56;
    pri = fun_2D00(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 12;
    var_1208 = 8;
    pri = fun_0090(var_1200)
    var_1216 = 31296;
    pri = SoundPostEvent(var_1216)
    var_1224 = -3181508942575245480;
    var_1232 = 8;
    pri = fun_0BB0(var_1224)
    var_1240 = 8802641224559852288;
    var_1248 = 8;
    pri = fun_0BB0(var_1240)
    var_1256 = -21939952124344083;
    var_1264 = 8;
    pri = fun_04D8(var_1256)
    var_1272 = 4139704275241219055;
    var_1280 = 8;
    pri = fun_04D8(var_1272)
    var_1288 = 0;
    pri = fun_0508()
    var_1296 = 1;
    pri = SetCascadeShadowMapLevel(var_1296)
    var_1304 = 0;
    var_1312 = 4631952216750555136;
    var_1320 = 0;
    OP_PUSH5_C 4659253574253349437, 4639889459250074747, 4658805985059914383, 4659356554512406938, 4640068195860286013
    var_1328 = 4658806952630146826;
    var_1336 = 1;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 0;
    pri = fun_2C70()
    var_1352 = 0;
    var_1360 = 4631952216750555136;
    var_1368 = 3;
    OP_PUSH5_C 4659253574253349437, 4639889459250074747, 4658805985059914383, 4659608936411446641, 4640506241292791972
    var_1376 = 4658809283594797711;
    var_1384 = 120;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = 3;
    var_1400 = 0;
    var_1408 = -4850009718852212872;
    var_1416 = 24;
    pri = fun_2490(var_1408, var_1400, var_1392)
    var_1424 = 1;
    var_1432 = 8;
    pri = fun_2578(var_1424)
    var_1440 = 0;
    pri = fun_2638()
    var_1448 = 5;
    var_1456 = 5;
    var_1464 = -3181508942575245480;
    var_1472 = 24;
    pri = fun_17A0(var_1464, var_1456, var_1448)
    var_1480 = 1;
    var_1488 = 1;
    var_1496 = -1;
    var_1504 = -1;
    var_1512 = 0;
    var_1520 = 3;
    var_1528 = 8868142065411558194;
    var_1536 = 56;
    pri = fun_48E0(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1544 = 0;
    var_1552 = 4631952216750555136;
    var_1560 = 0;
    OP_PUSH5_C 4659305251299854909, 4639043626945059226, 4658769921078523331, 4660161462994636636, 4644126361337011896
    var_1568 = 4659113452491505664;
    var_1576 = 1;
    pri = EvCameraMove(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1584 = 0;
    pri = fun_2C70()
    var_1592 = 0;
    var_1600 = 4631952216750555136;
    var_1608 = 3;
    OP_PUSH5_C 4659305251299854909, 4639043626945059226, 4658769921078523331, 4660283926599738327, 4644555258832774758
    var_1616 = 4659162600661267251;
    var_1624 = 270;
    pri = EvCameraMove(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1632 = 0;
    var_1640 = 0;
    var_1648 = 0;
    var_1656 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_1664 = 48;
    pri = fun_0980(var_1656, var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1672 = 1;
    var_1680 = 1;
    var_1688 = 30;
    OP_PUSH2_C -3181508942575245480, 8802641224559852288
    var_1696 = 40;
    pri = fun_1108(var_1688, var_1680, var_1672, var_1664, var_1656)
    var_1704 = 0;
    var_1712 = 3;
    var_1720 = 0;
    var_1728 = 100;
    var_1736 = -1;
    OP_PUSH2_C -4322532786806421384, -3181508942575245480
    var_1744 = 56;
    pri = fun_23E0(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1752 = -3181508942575245480;
    var_1760 = 8;
    pri = fun_09D8(var_1752)
    var_1768 = 1;
    var_1776 = 8;
    pri = fun_2578(var_1768)
    var_1784 = 0;
    pri = fun_2638()
    var_1792 = -3181508942575245480;
    var_1800 = 8;
    pri = fun_1808(var_1792)
    var_1808 = 1;
    var_1816 = 3;
    var_1824 = 0;
    var_1832 = 3;
    var_1840 = 8868142065411558194;
    var_1848 = 40;
    pri = fun_6C18(var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1856 = 1;
    var_1864 = 1;
    var_1872 = 30;
    OP_PUSH2_C 8868142065411558194, -3181508942575245480
    var_1880 = 40;
    pri = fun_1108(var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1888 = 0;
    var_1896 = 3;
    var_1904 = 0;
    var_1912 = 100;
    var_1920 = -1;
    OP_PUSH2_C -4322531687294793173, -3181508942575245480
    var_1928 = 56;
    pri = fun_23E0(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1936 = 8868142065411558194;
    var_1944 = 8;
    pri = fun_0BB0(var_1936)
    var_1952 = 1;
    var_1960 = 8;
    pri = fun_2578(var_1952)
    var_1968 = 0;
    pri = fun_2638()
    var_1976 = 1;
    var_1984 = 0;
    var_1992 = 4641240890982006784;
    var_2000 = 0;
    var_2008 = 0;
    OP_PUSH4_C 4659629123444932608, 4658465840142745600, 4607182418800017408, 8868142065411558194
    var_2016 = 72;
    pri = fun_07F8(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2024 = 0;
    var_2032 = 3;
    var_2040 = 0;
    var_2048 = 100;
    var_2056 = -1;
    OP_PUSH2_C 5359020819405335890, 8868142065411558194
    var_2064 = 56;
    pri = fun_23E0(var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008)
    var_2072 = 8868142065411558194;
    var_2080 = 8;
    pri = fun_09D8(var_2072)
    var_2088 = 1;
    var_2096 = 8;
    pri = fun_2578(var_2088)
    var_2104 = 0;
    pri = fun_2638()
    var_2112 = 0;
    var_2120 = 4;
    var_2128 = 8868142065411558194;
    var_2136 = 24;
    pri = fun_8948(var_2128, var_2120, var_2112)
    var_2144 = 0;
    var_2152 = 3;
    var_2160 = 0;
    var_2168 = 100;
    var_2176 = -1;
    OP_PUSH2_C 5358027960405250582, 8868142065411558194
    var_2184 = 56;
    pri = fun_23E0(var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128)
    var_2192 = 8868142065411558194;
    var_2200 = 8;
    pri = fun_0BB0(var_2192)
    var_2208 = 1;
    var_2216 = 8;
    pri = fun_2578(var_2208)
    var_2224 = 0;
    pri = fun_2638()
    var_2232 = 1;
    var_2240 = var_8;
    var_2248 = 16;
    pri = fun_0748(var_2240, var_2232)
    var_2256 = 1;
    var_2264 = var_16;
    var_2272 = 16;
    pri = fun_0748(var_2264, var_2256)
    var_2280 = 31480;
    pri = SoundPostEvent(var_2280)
    var_2288 = 0;
    var_2296 = 4631952216750555136;
    var_2304 = 0;
    OP_PUSH5_C 4659493575651460383, 4638940888578559836, 4658806534815728271, 4660087399891389645, 4636080047284016906
    var_2312 = 4658824061031075021;
    var_2320 = 1;
    pri = EvCameraMove(var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
    var_2328 = 0;
    pri = fun_2C70()
    var_2336 = 0;
    var_2344 = 4631952216750555136;
    var_2352 = 9;
    OP_PUSH5_C 4659484911499833508, 4637469829981525770, 4658806270932937605, 4660401178519724360, 4632478574957004063
    var_2360 = 4658833296928748339;
    var_2368 = 40;
    pri = EvCameraMove(var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2376 = 0;
    var_2384 = 3;
    var_2392 = 0;
    var_2400 = 100;
    var_2408 = -1;
    OP_PUSH2_C -5886011638750778158, -3319423182739788766
    var_2416 = 56;
    pri = fun_23E0(var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2424 = 0;
    pri = fun_2C70()
    var_2432 = 1;
    var_2440 = 8;
    pri = fun_2578(var_2432)
    var_2448 = 0;
    pri = fun_2638()
    var_2456 = 0;
    var_2464 = 4631952216750555136;
    var_2472 = 3;
    OP_PUSH5_C 4659505384406342697, 4640418984050011668, 4658806864669216604, 4659671058818415985, 4640046029705870049
    var_2480 = 4658811746500843930;
    var_2488 = 140;
    pri = EvCameraMove(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416)
    var_2496 = 1;
    var_2504 = 0;
    var_2512 = 4641240890982006784;
    var_2520 = 0;
    var_2528 = 0;
    OP_PUSH3_C 4659255289491488768, 4658719387524110746, 4607182418800017408
    var_2536 = var_8;
    var_2544 = 72;
    pri = fun_07F8(var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2552 = 1;
    var_2560 = 0;
    var_2568 = 4641240890982006784;
    var_2576 = 0;
    var_2584 = 0;
    OP_PUSH3_C 4659255289491488768, 4658912901570599322, 4607182418800017408
    var_2592 = var_16;
    var_2600 = 72;
    pri = fun_07F8(var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2608 = 20;
    var_2616 = 8;
    pri = fun_0090(var_2608)
    var_2624 = 0;
    var_2632 = 0;
    var_2640 = 8868142065411558194;
    var_2648 = 24;
    pri = fun_8948(var_2640, var_2632, var_2624)
    var_2656 = 1;
    var_2664 = 0;
    var_2672 = 100;
    pri = float(var_2672)
    var_2680 = pri;
    OP_PUSH5_C -3181508942575245480, 4659460678263557325, 4658573372379942093, 4607182418800017408, 8802641224559852288
    var_2688 = 64;
    pri = fun_0870(var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624)
    var_2696 = 1;
    var_2704 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4659445944807745126, 4659037586189189120, 4607182418800017408
    var_2712 = -3181508942575245480;
    var_2720 = 64;
    pri = fun_0870(var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656)
    var_2728 = 8868142065411558194;
    var_2736 = 8;
    pri = fun_0BB0(var_2728)
    var_2744 = 0;
    var_2752 = 0;
    var_2760 = 0;
    OP_PUSH2_C 4639129828656676864, 8868142065411558194
    var_2768 = 40;
    pri = fun_0930(var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2776 = var_8;
    var_2784 = 8;
    pri = fun_09D8(var_2776)
    var_2792 = var_16;
    var_2800 = 8;
    pri = fun_09D8(var_2792)
    var_2808 = 0;
    var_2816 = 0;
    var_2824 = 0;
    var_2832 = 0;
    pri = float(var_2832)
    var_2840 = pri;
    var_2848 = var_8;
    var_2856 = 40;
    pri = fun_0930(var_2848, var_2840, var_2832, var_2824, var_2816)
    var_2864 = 0;
    var_2872 = 0;
    var_2880 = 0;
    var_2888 = 0;
    pri = float(var_2888)
    var_2896 = pri;
    var_2904 = var_16;
    var_2912 = 40;
    pri = fun_0930(var_2904, var_2896, var_2888, var_2880, var_2872)
    var_2920 = 8802641224559852288;
    var_2928 = 8;
    pri = fun_09D8(var_2920)
    var_2936 = -3181508942575245480;
    var_2944 = 8;
    pri = fun_09D8(var_2936)
    var_2952 = 40;
    var_2960 = 8;
    pri = fun_0090(var_2952)
    var_2968 = -3319423182739788766;
    var_2976 = 8;
    pri = fun_09D8(var_2968)
    var_2984 = 3178397703945784922;
    var_2992 = 8;
    pri = fun_09D8(var_2984)
    var_3000 = 31664;
    pri = SoundPostEvent(var_3000)
    var_3008 = 1;
    var_3016 = 8;
    pri = fun_0090(var_3008)
    var_3024 = 31792;
    pri = SoundPostEvent(var_3024)
    var_3032 = 0;
    var_3040 = 4631952216750555136;
    var_3048 = 0;
    OP_PUSH5_C 4659505384406342697, 4640418984050011668, 4658806864669216604, 4660040714627674276, 4644292607495131628
    var_3056 = 4659155959611035484;
    var_3064 = 1;
    pri = EvCameraMove(var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3072 = 0;
    pri = fun_2C70()
    var_3080 = 0;
    var_3088 = 4631952216750555136;
    var_3096 = 3;
    OP_PUSH5_C 4659505384406342697, 4640418984050011668, 4658806864669216604, 4659918866749084140, 4644292255651410739
    var_3104 = 4659294190212879483;
    var_3112 = 480;
    pri = EvCameraMove(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048, var_3040)
    var_3120 = 0;
    var_3128 = 0;
    var_3136 = 0;
    var_3144 = 0;
    var_3152 = var_8;
    var_3160 = 8802641224559852288;
    var_3168 = 48;
    pri = fun_0980(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120)
    var_3176 = 0;
    var_3184 = 0;
    var_3192 = 0;
    var_3200 = 0;
    var_3208 = var_16;
    var_3216 = -3181508942575245480;
    var_3224 = 48;
    pri = fun_0980(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176)
    var_3232 = 0;
    var_3240 = 0;
    var_3248 = 0;
    var_3256 = 0;
    OP_PUSH2_C 8868142065411558194, -3319423182739788766
    var_3264 = 48;
    pri = fun_0980(var_3256, var_3248, var_3240, var_3232, var_3224, var_3216)
    var_3272 = 0;
    var_3280 = 0;
    var_3288 = 0;
    var_3296 = 0;
    OP_PUSH2_C 8868142065411558194, 3178397703945784922
    var_3304 = 48;
    pri = fun_0980(var_3296, var_3288, var_3280, var_3272, var_3264, var_3256)
    var_3312 = 0;
    var_3320 = 3;
    var_3328 = 0;
    var_3336 = 100;
    var_3344 = -1;
    OP_PUSH2_C -8283272924805665468, 3178397703945784922
    var_3352 = 56;
    pri = fun_23E0(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3360 = 8802641224559852288;
    var_3368 = 8;
    pri = fun_09D8(var_3360)
    var_3376 = -3181508942575245480;
    var_3384 = 8;
    pri = fun_09D8(var_3376)
    var_3392 = 8868142065411558194;
    var_3400 = 8;
    pri = fun_09D8(var_3392)
    var_3408 = -3319423182739788766;
    var_3416 = 8;
    pri = fun_09D8(var_3408)
    var_3424 = 3178397703945784922;
    var_3432 = 8;
    pri = fun_09D8(var_3424)
    var_3440 = 1;
    var_3448 = 8;
    pri = fun_2578(var_3440)
    var_3456 = 0;
    pri = fun_2638()
    var_3464 = 7;
    var_3472 = 8868142065411558194;
    var_3480 = 16;
    pri = fun_16B0(var_3472, var_3464)
    var_3488 = 1;
    var_3496 = 1;
    var_3504 = -1;
    var_3512 = -1;
    var_3520 = 0;
    var_3528 = 1;
    var_3536 = 8868142065411558194;
    var_3544 = 56;
    pri = fun_48E0(var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488)
    var_3552 = 0;
    var_3560 = 4631952216750555136;
    var_3568 = 0;
    OP_PUSH5_C 4659592883541681111, 4641512162490811679, 4658686028341324022, 4659603856667726316, 4641717991067531346
    var_3576 = 4658726622310621512;
    var_3584 = 1;
    pri = EvCameraMove(var_3584, var_3576, var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512)
    var_3592 = 0;
    pri = fun_2C70()
    var_3600 = 0;
    var_3608 = 4631952216750555136;
    var_3616 = 3;
    OP_PUSH5_C 4659617776484933960, 4641512162490811679, 4658679299330162033, 4659628749610979164, 4641717991067531346
    var_3624 = 4658719893299459523;
    var_3632 = 50;
    pri = EvCameraMove(var_3632, var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560)
    var_3640 = 1;
    var_3648 = 1;
    var_3656 = 60;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_3664 = 40;
    pri = fun_1108(var_3656, var_3648, var_3640, var_3632, var_3624)
    var_3672 = 0;
    var_3680 = 3;
    var_3688 = 0;
    var_3696 = 100;
    var_3704 = -1;
    OP_PUSH2_C 5359019719893707679, 8868142065411558194
    var_3712 = 56;
    pri = fun_23E0(var_3704, var_3696, var_3688, var_3680, var_3672, var_3664, var_3656)
    var_3720 = 1;
    var_3728 = 8;
    pri = fun_2578(var_3720)
    var_3736 = 0;
    pri = fun_2638()
    var_3744 = 1;
    var_3752 = 3;
    var_3760 = 0;
    var_3768 = 1;
    var_3776 = 8868142065411558194;
    var_3784 = 40;
    pri = fun_6C18(var_3776, var_3768, var_3760, var_3752, var_3744)
    var_3792 = 1;
    var_3800 = -1;
    var_3808 = -1;
    var_3816 = 3;
    var_3824 = 0;
    var_3832 = 0;
    var_3840 = var_8;
    var_3848 = 56;
    pri = fun_2D00(var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792)
    var_3856 = 0;
    var_3864 = 4631952216750555136;
    var_3872 = 0;
    OP_PUSH5_C 4659514070548202127, 4641639178074052362, 4658821466183633469, 4659556599657964503, 4641681399320558961
    var_3880 = 4658832329358515896;
    var_3888 = 1;
    pri = EvCameraMove(var_3888, var_3880, var_3872, var_3864, var_3856, var_3848, var_3840, var_3832, var_3824, var_3816)
    var_3896 = 0;
    pri = fun_2C70()
    var_3904 = 0;
    var_3912 = 4631952216750555136;
    var_3920 = 3;
    OP_PUSH5_C 4659498765346343485, 4641639178074052362, 4658881213645486817, 4659541294456105861, 4641681399320558961
    var_3928 = 4658892098810601800;
    var_3936 = 180;
    pri = EvCameraMove(var_3936, var_3928, var_3920, var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864)
    var_3944 = 0;
    var_3952 = 3;
    var_3960 = 0;
    var_3968 = 100;
    var_3976 = -1;
    OP_PUSH2_C -5886012738262406369, -3319423182739788766
    var_3984 = 56;
    pri = fun_23E0(var_3976, var_3968, var_3960, var_3952, var_3944, var_3936, var_3928)
    var_3992 = var_8;
    var_4000 = 8;
    pri = fun_0BB0(var_3992)
    var_4008 = -1;
    var_4016 = 8802641224559852288;
    var_4024 = 16;
    pri = fun_1630(var_4016, var_4008)
    var_4032 = 1;
    var_4040 = 8;
    pri = fun_2578(var_4032)
    var_4048 = 0;
    pri = fun_2638()
    var_4056 = 1;
    var_4064 = -1;
    var_4072 = -1;
    var_4080 = 3;
    var_4088 = 0;
    var_4096 = 0;
    var_4104 = var_16;
    var_4112 = 56;
    pri = fun_2D00(var_4104, var_4096, var_4088, var_4080, var_4072, var_4064, var_4056)
    var_4120 = 0;
    var_4128 = 3;
    var_4136 = 0;
    var_4144 = 100;
    var_4152 = -1;
    OP_PUSH2_C -8283269626270780835, 3178397703945784922
    var_4160 = 56;
    pri = fun_23E0(var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104)
    var_4168 = var_16;
    var_4176 = 8;
    pri = fun_0BB0(var_4168)
    var_4184 = 1;
    var_4192 = 8;
    pri = fun_2578(var_4184)
    var_4200 = 0;
    pri = fun_2638()
    var_4208 = 5;
    var_4216 = 5;
    var_4224 = -3319423182739788766;
    var_4232 = 24;
    pri = fun_17A0(var_4224, var_4216, var_4208)
    var_4240 = 5;
    var_4248 = 5;
    var_4256 = 3178397703945784922;
    var_4264 = 24;
    pri = fun_17A0(var_4256, var_4248, var_4240)
    var_4272 = 1;
    var_4280 = 1;
    var_4288 = -1;
    var_4296 = -1;
    var_4304 = 0;
    var_4312 = 4;
    var_4320 = -3319423182739788766;
    var_4328 = 56;
    pri = fun_48E0(var_4320, var_4312, var_4304, var_4296, var_4288, var_4280, var_4272)
    var_4336 = 1;
    var_4344 = 1;
    var_4352 = -1;
    var_4360 = -1;
    var_4368 = 0;
    var_4376 = 4;
    var_4384 = 3178397703945784922;
    var_4392 = 56;
    pri = fun_48E0(var_4384, var_4376, var_4368, var_4360, var_4352, var_4344, var_4336)
    var_4400 = 0;
    var_4408 = 4631952216750555136;
    var_4416 = 0;
    OP_PUSH5_C 4660117768402548818, 4639321583484560998, 4658623708022261678, 4660161484984869192, 4639305398673400136
    var_4424 = 4658618936141797130;
    var_4432 = 1;
    pri = EvCameraMove(var_4432, var_4424, var_4416, var_4408, var_4400, var_4392, var_4384, var_4376, var_4368, var_4360)
    var_4440 = 0;
    pri = fun_2C70()
    var_4448 = 0;
    var_4456 = 3;
    var_4464 = 0;
    var_4472 = 100;
    var_4480 = -1;
    OP_PUSH2_C 5239710780491919077, 3178397703945784922
    var_4488 = 56;
    pri = fun_23E0(var_4480, var_4472, var_4464, var_4456, var_4448, var_4440, var_4432)
    var_4496 = 1;
    var_4504 = 8;
    pri = fun_2578(var_4496)
    var_4512 = 0;
    pri = fun_2638()
    var_4520 = 6;
    var_4528 = 6;
    var_4536 = 8868142065411558194;
    var_4544 = 24;
    pri = fun_17A0(var_4536, var_4528, var_4520)
    var_4552 = 1;
    var_4560 = 1;
    var_4568 = -1;
    var_4576 = -1;
    var_4584 = 0;
    var_4592 = 11;
    var_4600 = 8868142065411558194;
    var_4608 = 56;
    pri = fun_48E0(var_4600, var_4592, var_4584, var_4576, var_4568, var_4560, var_4552)
    var_4616 = 0;
    var_4624 = 3;
    var_4632 = 0;
    var_4640 = 100;
    var_4648 = -1;
    OP_PUSH2_C 5359018620382079468, 8868142065411558194
    var_4656 = 56;
    pri = fun_23E0(var_4648, var_4640, var_4632, var_4624, var_4616, var_4608, var_4600)
    var_4664 = 1;
    var_4672 = 8;
    pri = fun_2578(var_4664)
    var_4680 = 0;
    pri = fun_2638()
    var_4688 = 6;
    var_4696 = 6;
    var_4704 = -3181508942575245480;
    var_4712 = 24;
    pri = fun_17A0(var_4704, var_4696, var_4688)
    var_4720 = 1;
    var_4728 = 3;
    var_4736 = 0;
    var_4744 = 4;
    var_4752 = -3319423182739788766;
    var_4760 = 40;
    pri = fun_6C18(var_4752, var_4744, var_4736, var_4728, var_4720)
    var_4768 = 1;
    var_4776 = 3;
    var_4784 = 0;
    var_4792 = 4;
    var_4800 = 3178397703945784922;
    var_4808 = 40;
    pri = fun_6C18(var_4800, var_4792, var_4784, var_4776, var_4768)
    var_4816 = 1;
    var_4824 = 3;
    var_4832 = 0;
    var_4840 = 11;
    var_4848 = 8868142065411558194;
    var_4856 = 40;
    pri = fun_6C18(var_4848, var_4840, var_4832, var_4824, var_4816)
    var_4864 = 1;
    var_4872 = -1;
    var_4880 = -1;
    var_4888 = 3;
    var_4896 = 0;
    var_4904 = 4;
    var_4912 = -3181508942575245480;
    var_4920 = 56;
    pri = fun_2D00(var_4912, var_4904, var_4896, var_4888, var_4880, var_4872, var_4864)
    var_4928 = 0;
    var_4936 = 3;
    var_4944 = 0;
    var_4952 = 100;
    var_4960 = -1;
    OP_PUSH2_C -4322526189736652118, -3181508942575245480
    var_4968 = 56;
    pri = fun_23E0(var_4960, var_4952, var_4944, var_4936, var_4928, var_4920, var_4912)
    var_4976 = -3319423182739788766;
    var_4984 = 8;
    pri = fun_0BB0(var_4976)
    var_4992 = 3178397703945784922;
    var_5000 = 8;
    pri = fun_0BB0(var_4992)
    var_5008 = 8868142065411558194;
    var_5016 = 8;
    pri = fun_0BB0(var_5008)
    var_5024 = 1;
    var_5032 = 8;
    pri = fun_2578(var_5024)
    var_5040 = 0;
    pri = fun_2638()
    var_5048 = 31952;
    pri = SoundPostEvent(var_5048)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_BFD0
    var_5056 = 0;
    var_5064 = 4631952216750555136;
    var_5072 = 0;
    OP_PUSH5_C 4659417819300306616, 4641352073597807493, 4658660761564117729, 4659461381950999101, 4641260594230376530
    var_5080 = 4658662850636210504;
    var_5088 = 1;
    pri = EvCameraMove(var_5088, var_5080, var_5072, var_5064, var_5056, var_5048, var_5040, var_5032, var_5024, var_5016)
    var_5096 = 0;
    pri = fun_2C70()
    var_5104 = 0;
    var_5112 = 4631952216750555136;
    var_5120 = 9;
    OP_PUSH5_C 4659414542755655844, 4641352073597807493, 4658729129197132841, 4659458083416115773, 4641260594230376530
    var_5128 = 4658731218269225615;
    var_5136 = 20;
    pri = EvCameraMove(var_5136, var_5128, var_5120, var_5112, var_5104, var_5096, var_5088, var_5080, var_5072, var_5064)
    OP_JUMP lab_C0E8
// lab_BFD0
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4659401810411006198, 4641352073597807493, 4658992989997566525, 4659445351071466127, 4641260594230376530
    var_32 = 4658995101059891855;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_2C70()
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 9;
    OP_PUSH5_C 4659405592731005747, 4641352073597807493, 4658914418896645652, 4659449155381698232, 4641260594230376530
    var_80 = 4658916529958970982;
    var_88 = 20;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_C0E8
    var_8 = -3319423182739788766;
    var_16 = 8;
    pri = fun_1808(var_8)
    var_24 = 3178397703945784922;
    var_32 = 8;
    pri = fun_1808(var_24)
    var_40 = 8868142065411558194;
    var_48 = 8;
    pri = fun_1808(var_40)
    var_56 = -3181508942575245480;
    var_64 = 8;
    pri = fun_1808(var_56)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    pri = float(var_96)
    var_104 = pri;
    var_112 = -3319423182739788766;
    var_120 = 40;
    pri = fun_0930(var_112, var_104, var_96, var_88, var_80)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C -5886013837774034580, -3319423182739788766
    var_168 = 56;
    pri = fun_23E0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = -3319423182739788766;
    var_184 = 8;
    pri = fun_09D8(var_176)
    var_192 = 1;
    var_200 = 8;
    pri = fun_2578(var_192)
    var_208 = 0;
    pri = fun_2638()
    var_216 = 32096;
    pri = SoundPostEvent(var_216)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_C420
    var_224 = 0;
    var_232 = 4631952216750555136;
    var_240 = 0;
    OP_PUSH5_C 4659401810411006198, 4641352073597807493, 4658992989997566525, 4659445351071466127, 4641260594230376530
    var_248 = 4658995101059891855;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_2C70()
    var_272 = 0;
    var_280 = 4631952216750555136;
    var_288 = 9;
    OP_PUSH5_C 4659405592731005747, 4641352073597807493, 4658914418896645652, 4659449155381698232, 4641260594230376530
    var_296 = 4658916529958970982;
    var_304 = 20;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    OP_JUMP lab_C538
// lab_C420
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4659417819300306616, 4641352073597807493, 4658660761564117729, 4659461381950999101, 4641260594230376530
    var_32 = 4658662850636210504;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_2C70()
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 9;
    OP_PUSH5_C 4659414542755655844, 4641352073597807493, 4658729129197132841, 4659458083416115773, 4641260594230376530
    var_80 = 4658731218269225615;
    var_88 = 20;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_C538
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 3178397703945784922;
    var_56 = 40;
    pri = fun_0930(var_48, var_40, var_32, var_24, var_16)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C -8283270725782409046, 3178397703945784922
    var_104 = 56;
    pri = fun_23E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 3178397703945784922;
    var_120 = 8;
    pri = fun_09D8(var_112)
    var_128 = 1;
    var_136 = 8;
    pri = fun_2578(var_128)
    var_144 = 0;
    pri = fun_2638()
    var_152 = 32240;
    pri = SoundPostEvent(var_152)
    var_160 = 1;
    var_168 = 1;
    OP_PUSH3_C -4605043208977016422, 4659255289491488768, 4658719387524110746
    var_176 = var_8;
    var_184 = 48;
    pri = fun_06B0(var_176, var_168, var_160, var_152, var_144, var_136)
    var_192 = 1;
    var_200 = 1;
    OP_PUSH3_C 4625675324769907507, 4659255289491488768, 4658912901570599322
    var_208 = var_16;
    var_216 = 48;
    pri = fun_06B0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 0;
    var_232 = 4631952216750555136;
    var_240 = 0;
    OP_PUSH5_C 4659891093085366518, 4639914440154257818, 4658845017722700431, 4659935007579779891, 4639897903499376067
    var_248 = 4658847194755723428;
    var_256 = 1;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_2C70()
    var_272 = 0;
    var_280 = 4631952216750555136;
    var_288 = 9;
    OP_PUSH5_C 4659575995043078472, 4640667737560679711, 4658829426647818568, 4659619909537491845, 4640651200905797960
    var_296 = 4658831603680841564;
    var_304 = 20;
    pri = EvCameraMove(var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 1;
    var_320 = 1;
    var_328 = -1;
    var_336 = -1;
    var_344 = 0;
    var_352 = 9;
    var_360 = -3319423182739788766;
    var_368 = 56;
    pri = fun_48E0(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 0;
    var_416 = 9;
    var_424 = 3178397703945784922;
    var_432 = 56;
    pri = fun_48E0(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 0;
    var_448 = 3;
    var_456 = 0;
    var_464 = 100;
    var_472 = -1;
    OP_PUSH2_C -5886014937285662791, -3319423182739788766
    var_480 = 56;
    pri = fun_23E0(var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_488 = 1;
    var_496 = 8;
    pri = fun_2578(var_488)
    var_504 = 0;
    pri = fun_2638()
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -8283276223340550101, 3178397703945784922
    var_552 = 56;
    pri = fun_23E0(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 1;
    var_568 = 8;
    pri = fun_2578(var_560)
    var_576 = 0;
    pri = fun_2638()
    var_584 = 0;
    var_592 = 4631952216750555136;
    var_600 = 0;
    OP_PUSH5_C 4660859059141995397, 4646732643699492127, 4660754847429914788, 4660884106016876134, 4646823243457620869
    var_608 = 4660789086222003732;
    var_616 = 1;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    pri = fun_2C70()
    var_632 = 0;
    var_640 = 4631952216750555136;
    var_648 = 3;
    OP_PUSH5_C 4660819234830837350, 4646732643699492127, 4660781587552702300, 4660842566467578757, 4646823067535760425
    var_656 = 4660817013817349243;
    var_664 = 200;
    pri = EvCameraMove(var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = 1;
    var_680 = 1;
    var_688 = -1;
    var_696 = -1;
    var_704 = 0;
    var_712 = 12;
    var_720 = -3181508942575245480;
    var_728 = 56;
    pri = fun_48E0(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 0;
    var_744 = 3;
    var_752 = 0;
    var_760 = 100;
    var_768 = -1;
    OP_PUSH2_C -4322525090225023907, -3181508942575245480
    var_776 = 56;
    pri = fun_23E0(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 1;
    var_792 = 8;
    pri = fun_2578(var_784)
    var_800 = 0;
    pri = fun_2638()
    var_808 = 7;
    var_816 = 7;
    var_824 = 8868142065411558194;
    var_832 = 24;
    pri = fun_17A0(var_824, var_816, var_808)
    var_840 = 1;
    var_848 = 1;
    var_856 = -1;
    var_864 = -1;
    var_872 = 0;
    var_880 = 6;
    var_888 = 8868142065411558194;
    var_896 = 56;
    pri = fun_48E0(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 0;
    var_912 = 3;
    var_920 = 0;
    var_928 = 100;
    var_936 = -1;
    OP_PUSH2_C 5359017520870451257, 8868142065411558194
    var_944 = 56;
    pri = fun_23E0(var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_952 = 1;
    var_960 = 8;
    pri = fun_2578(var_952)
    var_968 = 0;
    pri = fun_2638()
    var_976 = 0;
    var_984 = 4631952216750555136;
    var_992 = 0;
    OP_PUSH5_C 4659390991216588882, 4643285982609670144, 4658824127001772687, 4659428462572863488, 4643468237657090294
    var_1000 = 4658826084132470129;
    var_1008 = 1;
    pri = EvCameraMove(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1016 = 0;
    pri = fun_2C70()
    var_1024 = 0;
    var_1032 = 4631952216750555136;
    var_1040 = 3;
    OP_PUSH5_C 4659390991216588882, 4643285982609670144, 4658824127001772687, 4659428462572863488, 4643468237657090294
    var_1048 = 4658826084132470129;
    var_1056 = 200;
    pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1064 = 1;
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 9;
    var_1096 = -3319423182739788766;
    var_1104 = 40;
    pri = fun_6C18(var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1112 = 1;
    var_1120 = 3;
    var_1128 = 0;
    var_1136 = 9;
    var_1144 = 3178397703945784922;
    var_1152 = 40;
    pri = fun_6C18(var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1160 = -3319423182739788766;
    var_1168 = 8;
    pri = fun_0BB0(var_1160)
    var_1176 = 3178397703945784922;
    var_1184 = 8;
    pri = fun_0BB0(var_1176)
    var_1192 = 1;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 12;
    var_1224 = -3181508942575245480;
    var_1232 = 40;
    pri = fun_6C18(var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1240 = 1;
    var_1248 = 3;
    var_1256 = 0;
    var_1264 = 6;
    var_1272 = 8868142065411558194;
    var_1280 = 40;
    pri = fun_6C18(var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 180;
    pri = float(var_1312)
    var_1320 = pri;
    var_1328 = -3319423182739788766;
    var_1336 = 40;
    pri = fun_0930(var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    OP_PUSH2_C -5886016036797291002, -3319423182739788766
    var_1384 = 56;
    pri = fun_23E0(var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1392 = -3319423182739788766;
    var_1400 = 8;
    pri = fun_09D8(var_1392)
    var_1408 = 1;
    var_1416 = 8;
    pri = fun_2578(var_1408)
    var_1424 = 0;
    pri = fun_2638()
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = 180;
    pri = float(var_1456)
    var_1464 = pri;
    var_1472 = 3178397703945784922;
    var_1480 = 40;
    pri = fun_0930(var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1488 = 0;
    var_1496 = 3;
    var_1504 = 0;
    var_1512 = 100;
    var_1520 = -1;
    OP_PUSH2_C -8283277322852178312, 3178397703945784922
    var_1528 = 56;
    pri = fun_23E0(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1536 = 3178397703945784922;
    var_1544 = 8;
    pri = fun_09D8(var_1536)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_2578(var_1552)
    var_1568 = 0;
    pri = fun_2638()
    var_1576 = -21939952124344083;
    var_1584 = 8;
    pri = fun_0658(var_1576)
    var_1592 = 4139704275241219055;
    var_1600 = 8;
    pri = fun_0658(var_1592)
    var_1608 = 0;
    var_1616 = 4631952216750555136;
    var_1624 = 0;
    OP_PUSH5_C 4658466016064606044, 4644372827863494164, 4659110549780808335, 4658433426539958764, 4644576369456028058
    var_1632 = 4659125085324527534;
    var_1640 = 1;
    pri = EvCameraMove(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1648 = 0;
    pri = fun_2C70()
    var_1656 = 32368;
    pri = SoundPostEvent(var_1656)
    var_1664 = 1;
    var_1672 = -1;
    var_1680 = -1;
    var_1688 = 3;
    var_1696 = 0;
    var_1704 = 3;
    var_1712 = -3319423182739788766;
    var_1720 = 56;
    pri = fun_2D00(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 3;
    var_1736 = 0;
    var_1744 = -4850002022270815395;
    var_1752 = 24;
    pri = fun_2490(var_1744, var_1736, var_1728)
    var_1760 = 1;
    var_1768 = 8;
    pri = fun_2578(var_1760)
    var_1776 = 0;
    pri = fun_2638()
    var_1784 = -3319423182739788766;
    var_1792 = 8;
    pri = fun_0BB0(var_1784)
    var_1800 = 32584;
    pri = SoundPostEvent(var_1800)
    var_1808 = 1;
    var_1816 = -1;
    var_1824 = -1;
    var_1832 = 3;
    var_1840 = 0;
    var_1848 = 3;
    var_1856 = 3178397703945784922;
    var_1864 = 56;
    pri = fun_2D00(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1872 = 3;
    var_1880 = 0;
    var_1888 = -4850003121782443606;
    var_1896 = 24;
    pri = fun_2490(var_1888, var_1880, var_1872)
    var_1904 = 1;
    var_1912 = 8;
    pri = fun_2578(var_1904)
    var_1920 = 0;
    pri = fun_2638()
    var_1928 = 3178397703945784922;
    var_1936 = 8;
    pri = fun_0BB0(var_1928)
    var_1944 = 4;
    var_1952 = 4;
    var_1960 = -3181508942575245480;
    var_1968 = 24;
    pri = fun_17A0(var_1960, var_1952, var_1944)
    var_1976 = 1;
    var_1984 = 1;
    var_1992 = -1;
    var_2000 = -1;
    var_2008 = 0;
    var_2016 = 22;
    var_2024 = -3181508942575245480;
    var_2032 = 56;
    pri = fun_48E0(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2040 = 0;
    var_2048 = 3;
    var_2056 = 0;
    var_2064 = 100;
    var_2072 = -1;
    OP_PUSH2_C -4322528388759908540, -3181508942575245480
    var_2080 = 56;
    pri = fun_23E0(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2088 = 1;
    var_2096 = 8;
    pri = fun_2578(var_2088)
    var_2104 = 0;
    pri = fun_2638()
    var_2112 = 0;
    var_2120 = 4631952216750555136;
    var_2128 = 0;
    OP_PUSH5_C 4659767573949102162, 4643655770360323768, 4658827711409679237, 4659805287197934879, 4643833627361232814
    var_2136 = 4658829250725958124;
    var_2144 = 1;
    pri = EvCameraMove(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2152 = 0;
    pri = fun_2C70()
    var_2160 = 0;
    var_2168 = 0;
    var_2176 = 0;
    var_2184 = 0;
    OP_PUSH2_C -3181508942575245480, -3319423182739788766
    var_2192 = 48;
    pri = fun_0980(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2200 = 0;
    var_2208 = 3;
    var_2216 = 0;
    var_2224 = 100;
    var_2232 = -1;
    OP_PUSH2_C -5886017136308919213, -3319423182739788766
    var_2240 = 56;
    pri = fun_23E0(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2248 = -3319423182739788766;
    var_2256 = 8;
    pri = fun_09D8(var_2248)
    var_2264 = 1;
    var_2272 = 8;
    pri = fun_2578(var_2264)
    var_2280 = 0;
    pri = fun_2638()
    var_2288 = 0;
    var_2296 = 0;
    var_2304 = 0;
    var_2312 = 0;
    OP_PUSH2_C -3181508942575245480, 3178397703945784922
    var_2320 = 48;
    pri = fun_0980(var_2312, var_2304, var_2296, var_2288, var_2280, var_2272)
    var_2328 = 0;
    var_2336 = 3;
    var_2344 = 0;
    var_2352 = 100;
    var_2360 = -1;
    OP_PUSH2_C -8283274024317293679, 3178397703945784922
    var_2368 = 56;
    pri = fun_23E0(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2376 = 3178397703945784922;
    var_2384 = 8;
    pri = fun_09D8(var_2376)
    var_2392 = 1;
    var_2400 = 8;
    pri = fun_2578(var_2392)
    var_2408 = 0;
    pri = fun_2638()
    var_2416 = 3;
    var_2424 = 3;
    var_2432 = -3181508942575245480;
    var_2440 = 24;
    pri = fun_17A0(var_2432, var_2424, var_2416)
    var_2448 = 1;
    var_2456 = 3;
    var_2464 = 0;
    var_2472 = 22;
    var_2480 = -3181508942575245480;
    var_2488 = 40;
    pri = fun_6C18(var_2480, var_2472, var_2464, var_2456, var_2448)
    var_2496 = 0;
    var_2504 = 4631952216750555136;
    var_2512 = 0;
    OP_PUSH5_C 4659442514331466465, 4642185943216312812, 4658895661228275794, 4659451178483093340, 4642540601686968238
    var_2520 = 4658858937539908076;
    var_2528 = 1;
    pri = EvCameraMove(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2536 = 0;
    pri = fun_2C70()
    var_2544 = 0;
    var_2552 = 3;
    var_2560 = 0;
    var_2568 = 100;
    var_2576 = -1;
    OP_PUSH2_C -4322527289248280329, -3181508942575245480
    var_2584 = 56;
    pri = fun_23E0(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
    var_2592 = -3181508942575245480;
    var_2600 = 8;
    pri = fun_0BB0(var_2592)
    var_2608 = 1;
    var_2616 = 8;
    pri = fun_2578(var_2608)
    var_2624 = 0;
    pri = fun_2638()
    var_2632 = 0;
    var_2640 = 4631952216750555136;
    var_2648 = 0;
    OP_PUSH5_C 4659912005796526817, 4641979410952151368, 4658535329277621043, 4659952006029545308, 4642137740626551112
    var_2656 = 4658520639802273956;
    var_2664 = 1;
    pri = EvCameraMove(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2672 = 0;
    pri = fun_2C70()
    var_2680 = 0;
    var_2688 = 0;
    var_2696 = 0;
    var_2704 = 0;
    OP_PUSH2_C 3178397703945784922, -3319423182739788766
    var_2712 = 48;
    pri = fun_0980(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2720 = 0;
    var_2728 = 0;
    var_2736 = 0;
    var_2744 = 0;
    OP_PUSH2_C -3319423182739788766, 3178397703945784922
    var_2752 = 48;
    pri = fun_0980(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704)
    var_2760 = 8;
    var_2768 = -3319423182739788766;
    var_2776 = 16;
    pri = fun_16B0(var_2768, var_2760)
    var_2784 = 8;
    var_2792 = 3178397703945784922;
    var_2800 = 16;
    pri = fun_16B0(var_2792, var_2784)
    var_2808 = -3319423182739788766;
    var_2816 = 8;
    pri = fun_09D8(var_2808)
    var_2824 = 3178397703945784922;
    var_2832 = 8;
    pri = fun_09D8(var_2824)
    var_2840 = 15;
    var_2848 = 8;
    pri = fun_0090(var_2840)
    var_2856 = -3319423182739788766;
    var_2864 = 8;
    pri = fun_16F0(var_2856)
    var_2872 = 3178397703945784922;
    var_2880 = 8;
    pri = fun_16F0(var_2872)
    var_2888 = 0;
    var_2896 = 0;
    var_2904 = 0;
    var_2912 = 0;
    var_2920 = 8802641224559852288;
    var_2928 = var_8;
    var_2936 = 48;
    pri = fun_0980(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888)
    var_2944 = 0;
    var_2952 = 0;
    var_2960 = 0;
    var_2968 = 0;
    var_2976 = -3181508942575245480;
    var_2984 = var_16;
    var_2992 = 48;
    pri = fun_0980(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944)
    var_3000 = 0;
    var_3008 = 3;
    var_3016 = 0;
    var_3024 = 100;
    var_3032 = -1;
    OP_PUSH2_C -5886018235820547424, -3319423182739788766
    var_3040 = 56;
    pri = fun_23E0(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984)
    var_3048 = var_8;
    var_3056 = 8;
    pri = fun_09D8(var_3048)
    var_3064 = var_16;
    var_3072 = 8;
    pri = fun_09D8(var_3064)
    var_3080 = 1;
    var_3088 = 8;
    pri = fun_2578(var_3080)
    var_3096 = 0;
    pri = fun_2638()
    var_3104 = 1;
    var_3112 = -1;
    var_3120 = -1;
    var_3128 = 3;
    var_3136 = 0;
    var_3144 = 0;
    var_3152 = 3178397703945784922;
    var_3160 = 56;
    pri = fun_2D00(var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104)
    var_3168 = 0;
    var_3176 = 3;
    var_3184 = 0;
    var_3192 = 100;
    var_3200 = -1;
    OP_PUSH2_C -8283275123828921890, 3178397703945784922
    var_3208 = 56;
    pri = fun_23E0(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3216 = 3178397703945784922;
    var_3224 = 8;
    pri = fun_0BB0(var_3216)
    var_3232 = 1;
    var_3240 = 8;
    pri = fun_2578(var_3232)
    var_3248 = 0;
    pri = fun_2638()
    var_3256 = 7;
    var_3264 = 7;
    var_3272 = 8868142065411558194;
    var_3280 = 24;
    pri = fun_17A0(var_3272, var_3264, var_3256)
    var_3288 = 0;
    var_3296 = 4626885667169763328;
    var_3304 = 0;
    OP_PUSH5_C 4659348352155663729, 4641383739532687442, 4658901532620368118, 4659301930774739026, 4641817210996821852
    var_3312 = 4659244668209164452;
    var_3320 = 1;
    pri = EvCameraMove(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3328 = 0;
    pri = fun_2C70()
    var_3336 = 1;
    var_3344 = -1;
    var_3352 = -1;
    var_3360 = 3;
    var_3368 = 0;
    var_3376 = 1;
    var_3384 = 8868142065411558194;
    var_3392 = 56;
    pri = fun_2D00(var_3384, var_3376, var_3368, var_3360, var_3352, var_3344, var_3336)
    var_3400 = 0;
    var_3408 = 3;
    var_3416 = 0;
    var_3424 = 100;
    var_3432 = -1;
    OP_PUSH2_C 5359016421358823046, 8868142065411558194
    var_3440 = 56;
    pri = fun_23E0(var_3432, var_3424, var_3416, var_3408, var_3400, var_3392, var_3384)
    var_3448 = 1;
    var_3456 = 8;
    pri = fun_2578(var_3448)
    var_3464 = 0;
    pri = fun_2638()
    var_3472 = 0;
    var_3480 = 4631952216750555136;
    var_3488 = 0;
    OP_PUSH5_C 4659634467071443599, 4641145189489925161, 4658960642365477356, 4659677743849112863, 4641247927856424550
    var_3496 = 4658960972218965688;
    var_3504 = 1;
    pri = EvCameraMove(var_3504, var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440, var_3432)
    var_3512 = 0;
    pri = fun_2C70()
    var_3520 = 0;
    var_3528 = 4631952216750555136;
    var_3536 = 12;
    OP_PUSH5_C 4659636929977489818, 4641145189489925161, 4658625423260401009, 4659680184764926525, 4641247927856424550
    var_3544 = 4658625753113889341;
    var_3552 = 30;
    pri = EvCameraMove(var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488, var_3480)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_E390
    var_3560 = 2;
    var_3568 = 2;
    var_3576 = -3319423182739788766;
    var_3584 = 24;
    pri = fun_17A0(var_3576, var_3568, var_3560)
    var_3592 = 1;
    var_3600 = 1;
    var_3608 = -1;
    var_3616 = -1;
    var_3624 = 0;
    var_3632 = 9;
    var_3640 = -3319423182739788766;
    var_3648 = 56;
    pri = fun_48E0(var_3640, var_3632, var_3624, var_3616, var_3608, var_3600, var_3592)
    var_3656 = 0;
    var_3664 = 3;
    var_3672 = 0;
    var_3680 = 100;
    var_3688 = -1;
    OP_PUSH2_C -5886001743146124259, -3319423182739788766
    var_3696 = 56;
    pri = fun_23E0(var_3688, var_3680, var_3672, var_3664, var_3656, var_3648, var_3640)
    var_3704 = 1;
    var_3712 = 8;
    pri = fun_2578(var_3704)
    var_3720 = 0;
    pri = fun_2638()
    OP_JUMP lab_E4B0
// lab_E390
    var_8 = 2;
    var_16 = 2;
    var_24 = 3178397703945784922;
    var_32 = 24;
    pri = fun_17A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    var_64 = -1;
    var_72 = 0;
    var_80 = 9;
    var_88 = 3178397703945784922;
    var_96 = 56;
    pri = fun_48E0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C -8283280621387062945, 3178397703945784922
    var_144 = 56;
    pri = fun_23E0(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_2578(var_152)
    var_168 = 0;
    pri = fun_2638()
// lab_E4B0
    var_8 = 0;
    pri = fun_2C70()
    var_24 = 222;
    var_32 = 221;
    var_40 = 16;
    pri = fun_8DC8(var_32, var_24)
    var_24 = pri;
    var_56 = 44;
    var_64 = 43;
    var_72 = 16;
    pri = fun_8DC8(var_64, var_56)
    var_32 = pri;
    var_80 = var_32;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = var_24;
    var_120 = 40;
    pri = fun_2A18(var_112, var_104, var_96, var_88, var_80)
    var_128 = 0;
    pri = fun_2B30()
    OP_JZER lab_E608
    var_136 = -3319423182739788766;
    var_144 = 8;
    pri = fun_0658(var_136)
    var_152 = 3178397703945784922;
    var_160 = 8;
    pri = fun_0658(var_152)
    var_168 = 0;
    pri = fun_2C20()
// lab_E608
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0780(var_16, var_8)
    var_32 = 1;
    var_40 = -3181508942575245480;
    var_48 = 16;
    pri = fun_0780(var_40, var_32)
    var_56 = 1;
    var_64 = -3319423182739788766;
    var_72 = 16;
    pri = fun_0780(var_64, var_56)
    var_80 = 1;
    var_88 = 3178397703945784922;
    var_96 = 16;
    pri = fun_0780(var_88, var_80)
    var_104 = 1;
    var_112 = 8868142065411558194;
    var_120 = 16;
    pri = fun_0780(var_112, var_104)
    var_128 = 1;
    pri = SetCascadeShadowMapLevel(var_128)
    var_136 = 0;
    var_144 = 4631952216750555136;
    var_152 = 0;
    OP_PUSH5_C 4659621712736561398, 4641182836768060211, 4658670987022256046, 4659663999953765663, 4641270797698282291
    var_160 = 4658680662724580475;
    var_168 = 1;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    pri = fun_2C70()
    var_184 = 0;
    var_192 = 4631952216750555136;
    var_200 = 3;
    OP_PUSH5_C 4659676974190973420, 4641067432027608842, 4658683631405975470, 4659719283398410240, 4641155392957830922
    var_208 = 4658693307108299899;
    var_216 = 120;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_E900
    var_224 = 6;
    var_232 = 6;
    var_240 = -3319423182739788766;
    var_248 = 24;
    pri = fun_17A0(var_240, var_232, var_224)
    var_256 = 1;
    var_264 = 1;
    var_272 = -1;
    var_280 = -1;
    var_288 = 0;
    var_296 = 9;
    var_304 = -3319423182739788766;
    var_312 = 56;
    pri = fun_48E0(var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    OP_JUMP lab_E990
// lab_E900
    var_8 = 6;
    var_16 = 6;
    var_24 = 3178397703945784922;
    var_32 = 24;
    pri = fun_17A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    var_64 = -1;
    var_72 = 0;
    var_80 = 9;
    var_88 = 3178397703945784922;
    var_96 = 56;
    pri = fun_48E0(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
// lab_E990
    var_8 = 15;
    var_16 = 8;
    pri = fun_0090(var_8)
    var_24 = 31248;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02B0(var_32, var_24)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 1;
    var_64 = 3;
    var_72 = 0;
    var_80 = 9;
    var_88 = -3319423182739788766;
    var_96 = 40;
    pri = fun_6C18(var_88, var_80, var_72, var_64, var_56)
    var_104 = 1;
    var_112 = 3;
    var_120 = 0;
    var_128 = 9;
    var_136 = 3178397703945784922;
    var_144 = 40;
    pri = fun_6C18(var_136, var_128, var_120, var_112, var_104)
    var_152 = -3319423182739788766;
    var_160 = 8;
    pri = fun_0BB0(var_152)
    var_168 = 3178397703945784922;
    var_176 = 8;
    pri = fun_0BB0(var_168)
    var_184 = 1;
    var_192 = 1104;
    var_200 = 1103;
    var_208 = 16;
    pri = fun_8DC8(var_200, var_192)
    var_216 = pri;
    var_224 = 1;
    var_232 = 24;
    pri = fun_2978(var_224, var_216, var_208)
    var_240 = 32800;
    pri = SoundPostEvent(var_240)
    var_248 = 3;
    var_256 = 0;
    var_264 = -4850008619340584661;
    var_272 = 24;
    pri = fun_2490(var_264, var_256, var_248)
    var_280 = 1;
    var_288 = 8;
    pri = fun_2578(var_280)
    var_296 = 0;
    pri = fun_2638()
    var_304 = 1;
    var_312 = 1;
    var_320 = -1;
    var_328 = -1;
    var_336 = 0;
    var_344 = 9;
    var_352 = -3181508942575245480;
    var_360 = 56;
    pri = fun_48E0(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_EF00
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C -5886002842657752470, -3319423182739788766
    var_408 = 56;
    pri = fun_23E0(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 1;
    var_424 = 8;
    pri = fun_2578(var_416)
    var_432 = 0;
    pri = fun_2638()
    var_440 = 5;
    var_448 = 5;
    var_456 = 3178397703945784922;
    var_464 = 24;
    pri = fun_17A0(var_456, var_448, var_440)
    var_472 = 1;
    var_480 = 1;
    var_488 = -1;
    var_496 = -1;
    var_504 = 0;
    var_512 = 4;
    var_520 = 3178397703945784922;
    var_528 = 56;
    pri = fun_48E0(var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_536 = 5;
    var_544 = 5;
    var_552 = -3319423182739788766;
    var_560 = 24;
    pri = fun_17A0(var_552, var_544, var_536)
    var_568 = 0;
    var_576 = 4631952216750555136;
    var_584 = 3;
    OP_PUSH5_C 4660145783958824550, 4640645923249984635, 4658780894204568535, 4660189170687656591, 4640733180492764938
    var_592 = 4658780608331545313;
    var_600 = 50;
    pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    var_608 = 0;
    var_616 = 1;
    var_624 = 40;
    OP_PUSH2_C 3178397703945784922, -3319423182739788766
    var_632 = 40;
    pri = fun_1108(var_624, var_616, var_608, var_600, var_592)
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 100;
    var_672 = -1;
    OP_PUSH2_C -5887002298727607044, -3319423182739788766
    var_680 = 56;
    pri = fun_23E0(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 1;
    var_696 = 8;
    pri = fun_2578(var_688)
    var_704 = 0;
    pri = fun_2638()
    OP_JUMP lab_F1B0
// lab_EF00
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -8283281720898691156, 3178397703945784922
    var_48 = 56;
    pri = fun_23E0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2578(var_56)
    var_72 = 0;
    pri = fun_2638()
    var_80 = 5;
    var_88 = 5;
    var_96 = -3319423182739788766;
    var_104 = 24;
    pri = fun_17A0(var_96, var_88, var_80)
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    var_136 = -1;
    var_144 = 0;
    var_152 = 4;
    var_160 = -3319423182739788766;
    var_168 = 56;
    pri = fun_48E0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 5;
    var_184 = 5;
    var_192 = 3178397703945784922;
    var_200 = 24;
    pri = fun_17A0(var_192, var_184, var_176)
    var_208 = 0;
    var_216 = 4631952216750555136;
    var_224 = 3;
    OP_PUSH5_C 4660145783958824550, 4640645923249984635, 4658780894204568535, 4660189170687656591, 4640733180492764938
    var_232 = 4658780608331545313;
    var_240 = 50;
    pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    var_256 = 1;
    var_264 = 40;
    OP_PUSH2_C -3319423182739788766, 3178397703945784922
    var_272 = 40;
    pri = fun_1108(var_264, var_256, var_248, var_240, var_232)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    OP_PUSH2_C -8284263584782494354, 3178397703945784922
    var_320 = 56;
    pri = fun_23E0(var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_328 = 1;
    var_336 = 8;
    pri = fun_2578(var_328)
    var_344 = 0;
    pri = fun_2638()
// lab_F1B0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 9;
    var_40 = -3181508942575245480;
    var_48 = 40;
    pri = fun_6C18(var_40, var_32, var_24, var_16, var_8)
    var_56 = -3181508942575245480;
    var_64 = 8;
    pri = fun_0BB0(var_56)
    var_72 = 3;
    var_80 = 3;
    var_88 = -3181508942575245480;
    var_96 = 24;
    pri = fun_17A0(var_88, var_80, var_72)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_136 = 48;
    pri = fun_0980(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    OP_PUSH2_C -4322539383876190650, -3181508942575245480
    var_184 = 56;
    pri = fun_23E0(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = -3181508942575245480;
    var_200 = 8;
    pri = fun_09D8(var_192)
    var_208 = 1;
    var_216 = 8;
    pri = fun_2578(var_208)
    var_224 = 0;
    pri = fun_2638()
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_F430
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C -8284258087224353299, 3178397703945784922
    var_272 = 56;
    pri = fun_23E0(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_2578(var_280)
    var_296 = 0;
    pri = fun_2638()
    OP_JUMP lab_F4C0
// lab_F430
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -5887005597262491677, -3319423182739788766
    var_48 = 56;
    pri = fun_23E0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_2578(var_56)
    var_72 = 0;
    pri = fun_2638()
// lab_F4C0
    var_8 = 3;
    var_16 = 8;
    var_24 = -3181508942575245480;
    var_32 = 24;
    pri = fun_17A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 1;
    var_56 = 70;
    var_64 = 3;
    var_72 = -3181508942575245480;
    var_80 = 40;
    pri = fun_11C0(var_72, var_64, var_56, var_48, var_40)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C -4321539927806336076, -3181508942575245480
    var_128 = 56;
    pri = fun_23E0(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_2578(var_136)
    var_152 = 0;
    pri = fun_2638()
    var_160 = 1;
    var_168 = 1;
    OP_PUSH4_C 4639291676768285491, 4659450122951930675, 4658529611817156608, 8802641224559852288
    var_176 = 48;
    pri = fun_06B0(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 0;
    var_192 = 4633429960378286080;
    var_200 = 0;
    OP_PUSH5_C 4659379490324962345, 4642850224161349960, 4659030945138957353, 4659388242437519442, 4643147532105500590
    var_208 = 4659069823870115512;
    var_216 = 1;
    pri = EvCameraMove(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_224 = 0;
    pri = fun_2C70()
    var_232 = -3319423182739788766;
    var_240 = 8;
    pri = fun_1808(var_232)
    var_248 = 3178397703945784922;
    var_256 = 8;
    pri = fun_1808(var_248)
    var_264 = -1;
    var_272 = -3319423182739788766;
    var_280 = 16;
    pri = fun_1630(var_272, var_264)
    var_288 = -1;
    var_296 = 3178397703945784922;
    var_304 = 16;
    pri = fun_1630(var_296, var_288)
    var_312 = 15;
    var_320 = -3319423182739788766;
    var_328 = 16;
    pri = fun_1670(var_320, var_312)
    var_336 = 15;
    var_344 = 3178397703945784922;
    var_352 = 16;
    pri = fun_1670(var_344, var_336)
    var_360 = 889;
    var_368 = 888;
    var_376 = 16;
    pri = fun_8DC8(var_368, var_360)
    var_384 = pri;
    var_392 = 1;
    var_400 = 16;
    pri = fun_2928(var_392, var_384)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_103A0
    var_408 = 1;
    var_416 = 3;
    var_424 = 0;
    var_432 = 4;
    var_440 = 3178397703945784922;
    var_448 = 40;
    pri = fun_6C18(var_440, var_432, var_424, var_416, var_408)
    var_456 = 3178397703945784922;
    var_464 = 8;
    pri = fun_0BB0(var_456)
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    OP_PUSH2_C 8802641224559852288, 3178397703945784922
    var_504 = 48;
    pri = fun_0980(var_496, var_488, var_480, var_472, var_464, var_456)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -8284262485270866143, 3178397703945784922
    var_552 = 56;
    pri = fun_23E0(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = 3178397703945784922;
    var_568 = 8;
    pri = fun_09D8(var_560)
    var_576 = 1;
    var_584 = 8;
    pri = fun_2578(var_576)
    var_592 = 0;
    pri = fun_2638()
    var_600 = 4;
    var_608 = 4;
    var_616 = -3319423182739788766;
    var_624 = 24;
    pri = fun_17A0(var_616, var_608, var_600)
    var_632 = 1;
    var_640 = 1;
    var_648 = -1;
    OP_PUSH2_C 8802641224559852288, -3319423182739788766
    var_656 = 40;
    pri = fun_1108(var_648, var_640, var_632, var_624, var_616)
    var_664 = 0;
    var_672 = 3;
    var_680 = 0;
    var_688 = 100;
    var_696 = -1;
    OP_PUSH2_C -5887000099704350622, -3319423182739788766
    var_704 = 56;
    pri = fun_23E0(var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_712 = 1;
    var_720 = 8;
    pri = fun_2578(var_712)
    var_728 = 0;
    pri = fun_2638()
    var_736 = 8;
    var_744 = 3178397703945784922;
    var_752 = 16;
    pri = fun_16B0(var_744, var_736)
    var_760 = 0;
    var_768 = 4630713726853028250;
    var_776 = 0;
    OP_PUSH5_C 4659762428234684170, 4641942819205178982, 4658623048315285012, 4659805221227237212, 4642065260820048118
    var_784 = 4658616473235750912;
    var_792 = 1;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    pri = fun_2C70()
    var_808 = 0;
    var_816 = 4630713726853028250;
    var_824 = 3;
    OP_PUSH5_C 4659758821836545065, 4641942819205178982, 4658599672698078495, 4659801614829098107, 4642065260820048118
    var_832 = 4658593097618544394;
    var_840 = 100;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_848 = 1;
    var_856 = -1;
    var_864 = -1;
    var_872 = 3;
    var_880 = 0;
    var_888 = 0;
    var_896 = 3178397703945784922;
    var_904 = 56;
    pri = fun_2D00(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 0;
    var_920 = 3;
    var_928 = 0;
    var_936 = 100;
    var_944 = -1;
    OP_PUSH2_C -8284261385759237932, 3178397703945784922
    var_952 = 56;
    pri = fun_23E0(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_960 = 3178397703945784922;
    var_968 = 8;
    pri = fun_0BB0(var_960)
    var_976 = 1;
    var_984 = 8;
    pri = fun_2578(var_976)
    var_992 = 0;
    pri = fun_2638()
    var_1000 = 6;
    var_1008 = 6;
    var_1016 = -3319423182739788766;
    var_1024 = 24;
    pri = fun_17A0(var_1016, var_1008, var_1000)
    var_1032 = 1;
    var_1040 = -1;
    var_1048 = -1;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 1;
    var_1080 = -3319423182739788766;
    var_1088 = 56;
    pri = fun_2D00(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1096 = 0;
    var_1104 = 3;
    var_1112 = 0;
    var_1120 = 100;
    var_1128 = -1;
    OP_PUSH2_C -5887003398239235255, -3319423182739788766
    var_1136 = 56;
    pri = fun_23E0(var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1144 = -3319423182739788766;
    var_1152 = 8;
    pri = fun_0BB0(var_1144)
    var_1160 = 1;
    var_1168 = 8;
    pri = fun_2578(var_1160)
    var_1176 = 0;
    pri = fun_2638()
    var_1184 = 7;
    var_1192 = 7;
    var_1200 = 8868142065411558194;
    var_1208 = 24;
    pri = fun_17A0(var_1200, var_1192, var_1184)
    var_1216 = 0;
    var_1224 = 4630713726853028250;
    var_1232 = 0;
    OP_PUSH5_C 4659448517664954122, 4642162721530734182, 4658762356438524232, 4659440359288676024, 4642406197385588900
    var_1240 = 4658802752495728722;
    var_1248 = 1;
    pri = EvCameraMove(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1256 = 0;
    pri = fun_2C70()
    var_1264 = 1;
    var_1272 = 1;
    var_1280 = -1;
    var_1288 = -1;
    var_1296 = 0;
    var_1304 = 1;
    var_1312 = 8868142065411558194;
    var_1320 = 56;
    pri = fun_48E0(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 100;
    var_1360 = -1;
    OP_PUSH2_C 5358029059916878793, 8868142065411558194
    var_1368 = 56;
    pri = fun_23E0(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1376 = 1;
    var_1384 = 8;
    pri = fun_2578(var_1376)
    var_1392 = 0;
    pri = fun_2638()
    var_1400 = 3178397703945784922;
    var_1408 = 8;
    pri = fun_1808(var_1400)
    var_1416 = 1;
    var_1424 = 3;
    var_1432 = 0;
    var_1440 = 1;
    var_1448 = 8868142065411558194;
    var_1456 = 40;
    pri = fun_6C18(var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1464 = 0;
    var_1472 = 4631952216750555136;
    var_1480 = 0;
    OP_PUSH5_C 4660145783958824550, 4640645923249984635, 4658780894204568535, 4660189170687656591, 4640733180492764938
    var_1488 = 4658780608331545313;
    var_1496 = 1;
    pri = EvCameraMove(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1504 = 0;
    pri = fun_2C70()
    var_1512 = 0;
    var_1520 = 0;
    var_1528 = 0;
    var_1536 = 0;
    OP_PUSH2_C -3319423182739788766, 3178397703945784922
    var_1544 = 48;
    pri = fun_0980(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1552 = 0;
    var_1560 = 3;
    var_1568 = 0;
    var_1576 = 100;
    var_1584 = -1;
    OP_PUSH2_C -8284264684294122565, 3178397703945784922
    var_1592 = 56;
    pri = fun_23E0(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1600 = 3178397703945784922;
    var_1608 = 8;
    pri = fun_09D8(var_1600)
    var_1616 = 8868142065411558194;
    var_1624 = 8;
    pri = fun_0BB0(var_1616)
    var_1632 = 1;
    var_1640 = 8;
    pri = fun_2578(var_1632)
    var_1648 = 0;
    pri = fun_2638()
    var_1656 = -3319423182739788766;
    var_1664 = 8;
    pri = fun_1808(var_1656)
    var_1672 = 0;
    var_1680 = 0;
    var_1688 = 0;
    var_1696 = 0;
    OP_PUSH2_C 3178397703945784922, -3319423182739788766
    var_1704 = 48;
    pri = fun_0980(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
    var_1712 = 0;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 100;
    var_1744 = -1;
    OP_PUSH2_C -5887006696774119888, -3319423182739788766
    var_1752 = 56;
    pri = fun_23E0(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1760 = -3319423182739788766;
    var_1768 = 8;
    pri = fun_09D8(var_1760)
    var_1776 = 1;
    var_1784 = 8;
    pri = fun_2578(var_1776)
    var_1792 = 0;
    pri = fun_2638()
    OP_JUMP lab_10EB0
// lab_103A0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 4;
    var_40 = -3319423182739788766;
    var_48 = 40;
    pri = fun_6C18(var_40, var_32, var_24, var_16, var_8)
    var_56 = -3319423182739788766;
    var_64 = 8;
    pri = fun_0BB0(var_56)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 8802641224559852288, -3319423182739788766
    var_104 = 48;
    pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    OP_PUSH2_C -5887001199215978833, -3319423182739788766
    var_152 = 56;
    pri = fun_23E0(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = -3319423182739788766;
    var_168 = 8;
    pri = fun_09D8(var_160)
    var_176 = 1;
    var_184 = 8;
    pri = fun_2578(var_176)
    var_192 = 0;
    pri = fun_2638()
    var_200 = 4;
    var_208 = 4;
    var_216 = 3178397703945784922;
    var_224 = 24;
    pri = fun_17A0(var_216, var_208, var_200)
    var_232 = 1;
    var_240 = 1;
    var_248 = -1;
    OP_PUSH2_C 8802641224559852288, 3178397703945784922
    var_256 = 40;
    pri = fun_1108(var_248, var_240, var_232, var_224, var_216)
    var_264 = 0;
    var_272 = 3;
    var_280 = 0;
    var_288 = 100;
    var_296 = -1;
    OP_PUSH2_C -8284265783805750776, 3178397703945784922
    var_304 = 56;
    pri = fun_23E0(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 1;
    var_320 = 8;
    pri = fun_2578(var_312)
    var_328 = 0;
    pri = fun_2638()
    var_336 = 8;
    var_344 = -3319423182739788766;
    var_352 = 16;
    pri = fun_16B0(var_344, var_336)
    var_360 = 0;
    var_368 = 4630713726853028250;
    var_376 = 0;
    OP_PUSH5_C 4659762428234684170, 4641942819205178982, 4658623048315285012, 4659805221227237212, 4642065260820048118
    var_384 = 4658616473235750912;
    var_392 = 1;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 0;
    pri = fun_2C70()
    var_408 = 0;
    var_416 = 4630713726853028250;
    var_424 = 3;
    OP_PUSH5_C 4659758821836545065, 4641942819205178982, 4658599672698078495, 4659801614829098107, 4642065260820048118
    var_432 = 4658593097618544394;
    var_440 = 100;
    pri = EvCameraMove(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_448 = 1;
    var_456 = -1;
    var_464 = -1;
    var_472 = 3;
    var_480 = 0;
    var_488 = 0;
    var_496 = -3319423182739788766;
    var_504 = 56;
    pri = fun_2D00(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 0;
    var_520 = 3;
    var_528 = 0;
    var_536 = 100;
    var_544 = -1;
    OP_PUSH2_C -5887004497750863466, -3319423182739788766
    var_552 = 56;
    pri = fun_23E0(var_544, var_536, var_528, var_520, var_512, var_504, var_496)
    var_560 = -3319423182739788766;
    var_568 = 8;
    pri = fun_0BB0(var_560)
    var_576 = 1;
    var_584 = 8;
    pri = fun_2578(var_576)
    var_592 = 0;
    pri = fun_2638()
    var_600 = 6;
    var_608 = 6;
    var_616 = 3178397703945784922;
    var_624 = 24;
    pri = fun_17A0(var_616, var_608, var_600)
    var_632 = 1;
    var_640 = -1;
    var_648 = -1;
    var_656 = 3;
    var_664 = 0;
    var_672 = 1;
    var_680 = 3178397703945784922;
    var_688 = 56;
    pri = fun_2D00(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_696 = 0;
    var_704 = 3;
    var_712 = 0;
    var_720 = 100;
    var_728 = -1;
    OP_PUSH2_C -8284260286247609721, 3178397703945784922
    var_736 = 56;
    pri = fun_23E0(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_744 = 3178397703945784922;
    var_752 = 8;
    pri = fun_0BB0(var_744)
    var_760 = 1;
    var_768 = 8;
    pri = fun_2578(var_760)
    var_776 = 0;
    pri = fun_2638()
    var_784 = 0;
    var_792 = 4630713726853028250;
    var_800 = 0;
    OP_PUSH5_C 4659448517664954122, 4642162721530734182, 4658762356438524232, 4659440359288676024, 4642406197385588900
    var_808 = 4658802752495728722;
    var_816 = 1;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 0;
    pri = fun_2C70()
    var_832 = 1;
    var_840 = 1;
    var_848 = -1;
    var_856 = -1;
    var_864 = 0;
    var_872 = 1;
    var_880 = 8868142065411558194;
    var_888 = 56;
    pri = fun_48E0(var_880, var_872, var_864, var_856, var_848, var_840, var_832)
    var_896 = 0;
    var_904 = 3;
    var_912 = 0;
    var_920 = 100;
    var_928 = -1;
    OP_PUSH2_C 5358029059916878793, 8868142065411558194
    var_936 = 56;
    pri = fun_23E0(var_928, var_920, var_912, var_904, var_896, var_888, var_880)
    var_944 = 1;
    var_952 = 8;
    pri = fun_2578(var_944)
    var_960 = 0;
    pri = fun_2638()
    var_968 = -3319423182739788766;
    var_976 = 8;
    pri = fun_1808(var_968)
    var_984 = 1;
    var_992 = 3;
    var_1000 = 0;
    var_1008 = 1;
    var_1016 = 8868142065411558194;
    var_1024 = 40;
    pri = fun_6C18(var_1016, var_1008, var_1000, var_992, var_984)
    var_1032 = 0;
    var_1040 = 4631952216750555136;
    var_1048 = 0;
    OP_PUSH5_C 4660145783958824550, 4640645923249984635, 4658780894204568535, 4660189170687656591, 4640733180492764938
    var_1056 = 4658780608331545313;
    var_1064 = 1;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 0;
    pri = fun_2C70()
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 0;
    var_1104 = 0;
    OP_PUSH2_C 3178397703945784922, -3319423182739788766
    var_1112 = 48;
    pri = fun_0980(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1120 = 0;
    var_1128 = 3;
    var_1136 = 0;
    var_1144 = 100;
    var_1152 = -1;
    OP_PUSH2_C -5886999000192722411, -3319423182739788766
    var_1160 = 56;
    pri = fun_23E0(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1168 = -3319423182739788766;
    var_1176 = 8;
    pri = fun_09D8(var_1168)
    var_1184 = 8868142065411558194;
    var_1192 = 8;
    pri = fun_0BB0(var_1184)
    var_1200 = 1;
    var_1208 = 8;
    pri = fun_2578(var_1200)
    var_1216 = 0;
    pri = fun_2638()
    var_1224 = 3178397703945784922;
    var_1232 = 8;
    pri = fun_1808(var_1224)
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 0;
    OP_PUSH2_C -3319423182739788766, 3178397703945784922
    var_1272 = 48;
    pri = fun_0980(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1280 = 0;
    var_1288 = 3;
    var_1296 = 0;
    var_1304 = 100;
    var_1312 = -1;
    OP_PUSH2_C -8284259186735981510, 3178397703945784922
    var_1320 = 56;
    pri = fun_23E0(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1328 = 3178397703945784922;
    var_1336 = 8;
    pri = fun_09D8(var_1328)
    var_1344 = 1;
    var_1352 = 8;
    pri = fun_2578(var_1344)
    var_1360 = 0;
    pri = fun_2638()
// lab_10EB0
    var_8 = -1;
    var_16 = -3181508942575245480;
    var_24 = 16;
    pri = fun_1630(var_16, var_8)
    var_32 = -3181508942575245480;
    var_40 = 8;
    pri = fun_1808(var_32)
    var_48 = 1;
    var_56 = 0;
    var_64 = 50;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH3_C 4660926547165708288, 4658719387524110746, 4611686018427387904
    var_96 = var_8;
    var_104 = 72;
    pri = fun_07F8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 1;
    var_120 = 0;
    var_128 = 50;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 0;
    var_152 = 0;
    OP_PUSH3_C 4660926547165708288, 4658912901570599322, 4611686018427387904
    var_160 = var_16;
    var_168 = 72;
    pri = fun_07F8(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 0;
    var_184 = 4631952216750555136;
    var_192 = 3;
    OP_PUSH5_C 4660665281212716155, 4643606688161259848, 4658777463728289874, 4660707414498292531, 4643699926747295252
    var_200 = 4658777199845499208;
    var_208 = 60;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    OP_PUSH2_C 5239707481957034444, -3319423182739788766
    var_256 = 56;
    pri = fun_23E0(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 35;
    var_272 = 8;
    pri = fun_0090(var_264)
    var_280 = 0;
    pri = fun_2638()
    var_288 = 6;
    var_296 = 6;
    var_304 = -3181508942575245480;
    var_312 = 24;
    pri = fun_17A0(var_304, var_296, var_288)
    var_320 = 1;
    var_328 = 0;
    var_336 = 30;
    pri = float(var_336)
    var_344 = pri;
    var_352 = 0;
    var_360 = 0;
    OP_PUSH4_C 4660708184156431974, 4659037586189189120, 4611686018427387904, -3181508942575245480
    var_368 = 72;
    pri = fun_07F8(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_376 = 1;
    var_384 = 1103;
    var_392 = 1104;
    var_400 = 16;
    pri = fun_8DC8(var_392, var_384)
    var_408 = pri;
    var_416 = 1;
    var_424 = 24;
    pri = fun_2978(var_416, var_408, var_400)
    var_432 = 0;
    var_440 = 3;
    var_448 = 0;
    var_456 = 100;
    var_464 = -1;
    OP_PUSH2_C -4322538284364562439, -3181508942575245480
    var_472 = 56;
    pri = fun_23E0(var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_480 = 35;
    var_488 = 8;
    pri = fun_0090(var_480)
    var_496 = 0;
    pri = fun_2638()
    var_504 = 33016;
    pri = SoundPostEvent(var_504)
    var_512 = 0;
    var_520 = 0;
    var_528 = 0;
    var_536 = 0;
    pri = float(var_536)
    var_544 = pri;
    var_552 = 8802641224559852288;
    var_560 = 40;
    pri = fun_0930(var_552, var_544, var_536, var_528, var_520)
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    var_592 = 20;
    pri = float(var_592)
    var_600 = pri;
    var_608 = 8868142065411558194;
    var_616 = 40;
    pri = fun_0930(var_608, var_600, var_592, var_584, var_576)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C 5359015321847194835, 8868142065411558194
    var_664 = 56;
    pri = fun_23E0(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 8868142065411558194;
    var_680 = 8;
    pri = fun_09D8(var_672)
    var_688 = 8802641224559852288;
    var_696 = 8;
    pri = fun_09D8(var_688)
    var_704 = 1;
    var_712 = 8;
    pri = fun_2578(var_704)
    var_720 = 0;
    pri = fun_2638()
    var_728 = 0;
    var_736 = 4631952216750555136;
    var_744 = 3;
    OP_PUSH5_C 4659938811890011996, 4640532981415579484, 4658628567863656448, 4659980901195123261, 4640620942345801564
    var_752 = 4658640090745515540;
    var_760 = 300;
    pri = EvCameraMove(var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688)
    var_768 = 8;
    var_776 = 8868142065411558194;
    var_784 = 16;
    pri = fun_16B0(var_776, var_768)
    var_792 = 1;
    var_800 = -1;
    var_808 = -1;
    var_816 = 3;
    var_824 = 0;
    var_832 = 1;
    var_840 = 8868142065411558194;
    var_848 = 56;
    pri = fun_2D00(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 0;
    var_864 = 3;
    var_872 = 0;
    var_880 = 100;
    var_888 = -1;
    OP_PUSH2_C 5359014222335566624, 8868142065411558194
    var_896 = 56;
    pri = fun_23E0(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 8868142065411558194;
    var_912 = 8;
    pri = fun_0BB0(var_904)
    var_920 = 1;
    var_928 = 8;
    pri = fun_2578(var_920)
    var_936 = 0;
    pri = fun_2638()
    var_944 = 8868142065411558194;
    var_952 = 8;
    pri = fun_16F0(var_944)
    var_960 = 0;
    var_968 = 0;
    var_976 = 0;
    var_984 = 0;
    OP_PUSH2_C 8802641224559852288, 8868142065411558194
    var_992 = 48;
    pri = fun_0980(var_984, var_976, var_968, var_960, var_952, var_944)
    var_1000 = 0;
    var_1008 = 3;
    var_1016 = 0;
    var_1024 = 100;
    var_1032 = -1;
    OP_PUSH2_C 5359030715009989789, 8868142065411558194
    var_1040 = 56;
    pri = fun_23E0(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1048 = 8868142065411558194;
    var_1056 = 8;
    pri = fun_09D8(var_1048)
    var_1064 = 1;
    var_1072 = 8;
    pri = fun_2578(var_1064)
    var_1080 = 0;
    pri = fun_2638()
    var_1088 = 7;
    var_1096 = 8868142065411558194;
    var_1104 = 16;
    pri = fun_16B0(var_1096, var_1088)
    var_1112 = 0;
    var_1120 = 4631952216750555136;
    var_1128 = 0;
    OP_PUSH5_C 4659466615626347315, 4640409484269547684, 4658763280028291564, 4659456851963092664, 4640466834796052480
    var_1136 = 4658805765157588828;
    var_1144 = 1;
    pri = EvCameraMove(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 0;
    pri = fun_2C70()
    var_1160 = 1;
    var_1168 = 1;
    var_1176 = -1;
    var_1184 = -1;
    var_1192 = 0;
    var_1200 = 6;
    var_1208 = 8868142065411558194;
    var_1216 = 56;
    pri = fun_48E0(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = 0;
    var_1248 = 0;
    OP_PUSH2_C 8868142065411558194, 8802641224559852288
    var_1256 = 48;
    pri = fun_0980(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208)
    var_1264 = 0;
    var_1272 = 3;
    var_1280 = 0;
    var_1288 = 100;
    var_1296 = -1;
    OP_PUSH2_C 5359029615498361578, 8868142065411558194
    var_1304 = 56;
    pri = fun_23E0(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1312 = 8802641224559852288;
    var_1320 = 8;
    pri = fun_09D8(var_1312)
    var_1328 = 1;
    var_1336 = 8;
    pri = fun_2578(var_1328)
    var_1344 = 0;
    pri = fun_2638()
    var_1352 = 0;
    var_1360 = 4628349337048658739;
    var_1368 = 0;
    OP_PUSH5_C 4659511079876574577, 4641233854107589018, 4658704236253879992, 4659493553661227827, 4641291204634093814
    var_1376 = 4658744148525968261;
    var_1384 = 1;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = 0;
    pri = fun_2C70()
    var_1400 = 0;
    var_1408 = 4628349337048658739;
    var_1416 = 3;
    OP_PUSH5_C 4659522316885410447, 4641233854107589018, 4658709184056204984, 4659504790670063698, 4641291204634093814
    var_1424 = 4658749096328293253;
    var_1432 = 150;
    pri = EvCameraMove(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1440 = 0;
    var_1448 = 3;
    var_1456 = 0;
    var_1464 = 100;
    var_1472 = -1;
    OP_PUSH2_C 5358030159428507004, 8868142065411558194
    var_1480 = 56;
    pri = fun_23E0(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1488 = 1;
    var_1496 = 8;
    pri = fun_2578(var_1488)
    var_1504 = 0;
    pri = fun_2638()
    var_1512 = 0;
    var_1520 = 4628349337048658739;
    var_1528 = 0;
    OP_PUSH5_C 4659402470117982863, 4642689431580903997, 4659038289876630897, 4659392508542635213, 4642887871439485010
    var_1536 = 4659078993797091164;
    var_1544 = 1;
    pri = EvCameraMove(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1552 = 0;
    pri = fun_2C70()
    var_1560 = 0;
    var_1568 = 4628349337048658739;
    var_1576 = 3;
    OP_PUSH5_C 4659383822400775782, 4642885408533438792, 4659114442051970662, 4659373860825428132, 4643083848392019804
    var_1584 = 4659155167962663485;
    var_1592 = 150;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 8868142065411558194;
    var_1608 = 8;
    pri = fun_16F0(var_1600)
    var_1616 = 1;
    var_1624 = 3;
    var_1632 = 0;
    var_1640 = 6;
    var_1648 = 8868142065411558194;
    var_1656 = 40;
    pri = fun_6C18(var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1664 = 0;
    var_1672 = 3;
    var_1680 = 0;
    var_1688 = 100;
    var_1696 = -1;
    OP_PUSH2_C 5358031258940135215, 8868142065411558194
    var_1704 = 56;
    pri = fun_23E0(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1712 = 8868142065411558194;
    var_1720 = 8;
    pri = fun_0BB0(var_1712)
    var_1728 = 1;
    var_1736 = 8;
    pri = fun_2578(var_1728)
    var_1744 = 0;
    pri = fun_2638()
    var_1752 = 0;
    var_1760 = 3;
    var_1768 = 0;
    var_1776 = 100;
    var_1784 = -1;
    OP_PUSH2_C 5358032358451763426, 8868142065411558194
    var_1792 = 56;
    pri = fun_23E0(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736)
    var_1800 = 1;
    var_1808 = 8;
    pri = fun_2578(var_1800)
    var_1816 = 0;
    var_1824 = 8806245076273718311;
    var_1832 = 0;
    var_1840 = 24;
    pri = fun_2668(var_1832, var_1824, var_1816)
    var_1848 = 0;
    var_1856 = 8806246175785346522;
    var_1864 = 1;
    var_1872 = 24;
    pri = fun_2668(var_1864, var_1856, var_1848)
    var_1888 = 0;
    var_1896 = 0;
    var_1904 = 0;
    var_1912 = 1;
    var_1920 = 32;
    pri = fun_2750(var_1912, var_1904, var_1896, var_1888)
    var_40 = pri;
    pri = var_40;
    switch (pri) {
// switch_12188
        case default:
        {
// switch_12188_case_default
            var_8 = 8868142065411558194;
            var_16 = 8;
            pri = fun_16F0(var_8)
            var_24 = 0;
            var_32 = 4631952216750555136;
            var_40 = 0;
            OP_PUSH5_C 4660409996602979123, 4642189461653521695, 4658760795132012790, 4660452921536927498, 4642323514111180145
            var_48 = 4658760377317594235;
            var_56 = 1;
            pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
            var_64 = 0;
            pri = fun_2C70()
            var_72 = 0;
            var_80 = 4631952216750555136;
            var_88 = 3;
            OP_PUSH5_C 4660644302530858189, 4640022104332849644, 4658758486157594460, 4660687777220620452, 4640097047045398856
            var_96 = 4658758068343175905;
            var_104 = 40;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            pri = float(var_136)
            var_144 = pri;
            var_152 = 8802641224559852288;
            var_160 = 40;
            pri = fun_0930(var_152, var_144, var_136, var_128, var_120)
            var_168 = 1;
            var_176 = 0;
            var_184 = 4641240890982006784;
            var_192 = 0;
            var_200 = 0;
            OP_PUSH4_C 4660623081956442112, 4658465840142745600, 4611686018427387904, 8868142065411558194
            var_208 = 72;
            pri = fun_07F8(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 0;
            var_224 = 3;
            var_232 = 0;
            var_240 = 100;
            var_248 = -1;
            OP_PUSH2_C 5358026860893622371, 8868142065411558194
            var_256 = 56;
            pri = fun_23E0(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
            var_264 = 8868142065411558194;
            var_272 = 8;
            pri = fun_09D8(var_264)
            var_280 = 8802641224559852288;
            var_288 = 8;
            pri = fun_09D8(var_280)
            var_296 = 1;
            var_304 = 8;
            pri = fun_2578(var_296)
            var_312 = 0;
            pri = fun_2638()
            var_320 = 0;
            var_328 = 8802641224559852288;
            var_336 = 16;
            pri = fun_0780(var_328, var_320)
            var_344 = 0;
            var_352 = -3181508942575245480;
            var_360 = 16;
            pri = fun_0780(var_352, var_344)
            var_368 = 0;
            var_376 = -3319423182739788766;
            var_384 = 16;
            pri = fun_0780(var_376, var_368)
            var_392 = 0;
            var_400 = 3178397703945784922;
            var_408 = 16;
            pri = fun_0780(var_400, var_392)
            var_416 = 0;
            var_424 = 8868142065411558194;
            var_432 = 16;
            pri = fun_0780(var_424, var_416)
            pri = 1;
            return pri;
        }
        case 0x0:
        {
// switch_12188_case_0x0
            var_8 = 5;
            var_16 = 8868142065411558194;
            var_24 = 16;
            pri = fun_16B0(var_16, var_8)
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 3;
            var_64 = 0;
            var_72 = 0;
            var_80 = 8868142065411558194;
            var_88 = 56;
            pri = fun_2D00(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 0;
            var_104 = 3;
            var_112 = 0;
            var_120 = 100;
            var_128 = -1;
            OP_PUSH2_C 5358033457963391637, 8868142065411558194
            var_136 = 56;
            pri = fun_23E0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_144 = 8868142065411558194;
            var_152 = 8;
            pri = fun_0BB0(var_144)
            var_160 = 1;
            var_168 = 8;
            pri = fun_2578(var_160)
            var_176 = 0;
            pri = fun_2638()
            OP_JUMP switch_12188_case_default
        }
        case 0x1:
        {
// switch_12188_case_0x1
            var_8 = 2;
            var_16 = 8868142065411558194;
            var_24 = 16;
            pri = fun_16B0(var_16, var_8)
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 3;
            var_64 = 0;
            var_72 = 0;
            var_80 = 8868142065411558194;
            var_88 = 56;
            pri = fun_2D00(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_96 = 0;
            var_104 = 3;
            var_112 = 0;
            var_120 = 100;
            var_128 = -1;
            OP_PUSH2_C 5358025761381994160, 8868142065411558194
            var_136 = 56;
            pri = fun_23E0(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_144 = 8868142065411558194;
            var_152 = 8;
            pri = fun_0BB0(var_144)
            var_160 = 1;
            var_168 = 8;
            pri = fun_2578(var_160)
            var_176 = 0;
            pri = fun_2638()
            OP_JUMP switch_12188_case_default
        }
    }
}
// fun_125C0
fun_125C0() {
    pri = 0;
    return pri;
}
// fun_125D8
fun_125D8() {
    var_8 = -3181508942575245480;
    var_16 = 8;
    pri = fun_0658(var_8)
    var_24 = 8868142065411558194;
    var_32 = 8;
    pri = fun_0658(var_24)
    var_40 = -3319423182739788766;
    var_48 = 8;
    pri = fun_0658(var_40)
    var_56 = 3178397703945784922;
    var_64 = 8;
    pri = fun_0658(var_56)
    var_72 = 3040;
    var_80 = 8;
    pri = fun_9138(var_72)
    var_88 = 2610993506854619934;
    pri = FlagReset(var_88)
    var_96 = -1528879600583155539;
    pri = FlagReset(var_96)
    pri = 0;
    return pri;
}
// fun_12700
fun_12700() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 31200;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH4_C 4677762763990446899, 4671092109408101990, 115789295882128190, -7332432130569991359
    var_96 = 72;
    pri = fun_0438(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 1;
    var_112 = 143;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 8802641224559852288;
    var_136 = 24;
    pri = fun_0708(var_128, var_120, var_112)
    var_144 = 31248;
    var_152 = 8;
    var_160 = 16;
    pri = fun_02B0(var_152, var_144)
    var_168 = 0;
    pri = fun_0380()
    pri = 0;
    return pri;
}
// fun_12868
fun_12868() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9308()
    var_16 = 0;
    pri = fun_9360()
    var_24 = 0;
    pri = fun_9378()
    var_32 = 0;
    pri = fun_93A8()
    var_40 = 0;
    pri = fun_125C0()
    var_48 = 0;
    pri = fun_125D8()
    var_56 = 0;
    pri = fun_12700()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_12958
fun_12958() {
    var_8 = 0;
    pri = fun_9360()
    var_16 = 0;
    pri = fun_125D8()
    pri = 0;
    return pri;
}
// fun_129A0
fun_129A0() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 3030;
    OP_JEQ lab_129F8
    pri = 0;
    return pri;
// lab_129F8
    var_8 = 1;
    var_16 = 1104;
    var_24 = 1103;
    var_32 = 16;
    pri = fun_8DC8(var_24, var_16)
    var_40 = pri;
    var_48 = 1;
    var_56 = 24;
    pri = fun_2978(var_48, var_40, var_32)
    var_64 = 3;
    var_72 = 0;
    var_80 = -4850005320805700028;
    var_88 = 24;
    pri = fun_2490(var_80, var_72, var_64)
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 48;
    pri = fun_27C0(var_136, var_128, var_120, var_112, var_104, var_96)
    OP_JZER lab_12B30
    var_152 = 0;
    pri = fun_2638()
    var_160 = 3750606903897909798;
    pri = ReserveScript(var_160)
    pri = 0;
    return pri;
// lab_12B30
    var_8 = 0;
    pri = fun_2638()
    pri = 0;
    return pri;
}
