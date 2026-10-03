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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0520
// lab_0520
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0560
    OP_JUMP lab_05D0
// lab_0560
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05A0
    OP_JUMP lab_05D0
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0520
// lab_05D0
    pri = 0;
    return pri;
}
// fun_05E8
fun_05E8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0618
fun_0618() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0650
// lab_0650
    var_8 = 0;
    pri = fun_0798()
    OP_JNZ lab_0688
    OP_JUMP lab_06B8
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0650
// lab_06B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_06E8
// lab_06E8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0728
    pri = 0;
    return pri;
// lab_0728
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06E8
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
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
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
// fun_09D8
fun_09D8() {
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
// fun_0A98
fun_0A98() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AE8
fun_0AE8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1988(var_8)
    OP_JZER lab_0BB8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_19B8(var_24)
    OP_JNZ lab_0BB8
    pri = 0;
    return pri;
// lab_0BB8
    OP_JUMP lab_0BC8
// lab_0BC8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C28
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BC8
    pri = 0;
    return pri;
}
// fun_0C68
fun_0C68() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CA0
fun_0CA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CE0
fun_0CE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D18
fun_0D18() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D60
    pri = 0;
    return pri;
// lab_0D60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DA0
// lab_0DA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1988(var_8)
    OP_JNZ lab_0E28
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E18
    pri = 0;
    return pri;
// lab_0E28
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E70
    pri = 0;
    return pri;
// lab_0E70
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0ED0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F18(var_8)
    pri = 0;
    return pri;
// lab_0ED0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DA0
    pri = 0;
    return pri;
// lab_0E18
    OP_JUMP lab_0E70
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
    pri = fun_1988(var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
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
// fun_1328
fun_1328() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_16E8
        case default:
        {
// switch_16E8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_16E8_case_0x0
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
            pri = fun_12C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16E8_case_default
        }
        case 0x1:
        {
// switch_16E8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12C8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16E8_case_default
        }
        case 0x2:
        {
// switch_16E8_case_0x2
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
            pri = fun_12C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16E8_case_default
        }
        case 0x3:
        {
// switch_16E8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12C8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16E8_case_default
        }
        case 0x4:
        {
// switch_16E8_case_0x4
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
            pri = fun_12C8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_16E8_case_default
        }
        case 0x5:
        {
// switch_16E8_case_0x5
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
            pri = fun_12C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16E8_case_default
        }
        case 0x6:
        {
// switch_16E8_case_0x6
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
            pri = fun_12C8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16E8_case_default
        }
        case 0x7:
        {
// switch_16E8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12C8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16E8_case_default
        }
    }
}
// fun_1798
fun_1798() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17D8
fun_17D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1818
fun_1818() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1850
fun_1850() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1890
fun_1890() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_17D8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1850(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1930
fun_1930() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1818(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1890(var_24)
    pri = 0;
    return pri;
}
// fun_1988
fun_1988() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_19B8
fun_19B8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_19E8
fun_19E8() {
    OP_JUMP lab_1A00
// lab_1A00
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1A90
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1A80
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D18(var_8)
    pri = 0;
    return pri;
// lab_1A90
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B20
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1B10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D18(var_8)
    pri = 0;
    return pri;
// lab_1B20
    pri = 0;
    return pri;
// lab_1B10
    OP_JUMP lab_1B30
// lab_1B30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A00
    pri = 0;
    return pri;
// lab_1A80
    OP_JUMP lab_1B30
}
// fun_1B70
fun_1B70() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D18(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_19E8(var_40)
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1C30
fun_1C30() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1C58
fun_1C58() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1C88
fun_1C88() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1CC0
fun_1CC0() {
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
// switch_22D8
        case default:
        {
// switch_22D8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2320
// lab_2320
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
            OP_JNZ lab_23C8
            var_88 = 0;
            pri = fun_2638()
// lab_23C8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_22D8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1EC0
                case default:
                {
// switch_1EC0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F38
// lab_1F38
                    OP_JUMP lab_2320
                }
                case 0x0:
                {
// switch_1EC0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1F38
                }
                case 0x1:
                {
// switch_1EC0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1F38
                }
                case 0x2:
                {
// switch_1EC0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1F38
                }
                case 0x3:
                {
// switch_1EC0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F38
                }
                case 0x4:
                {
// switch_1EC0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1F38
                }
                case 0x5:
                {
// switch_1EC0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1F38
                }
            }
        }
        case 0x65:
        {
// switch_22D8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2078
                case default:
                {
// switch_2078_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20F0
// lab_20F0
                    OP_JUMP lab_2320
                }
                case 0x0:
                {
// switch_2078_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_20F0
                }
                case 0x1:
                {
// switch_2078_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_20F0
                }
                case 0x2:
                {
// switch_2078_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_20F0
                }
                case 0x3:
                {
// switch_2078_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20F0
                }
                case 0x4:
                {
// switch_2078_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_20F0
                }
                case 0x5:
                {
// switch_2078_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_20F0
                }
            }
        }
        case 0x66:
        {
// switch_22D8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2230
                case default:
                {
// switch_2230_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22A8
// lab_22A8
                    OP_JUMP lab_2320
                }
                case 0x0:
                {
// switch_2230_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_22A8
                }
                case 0x1:
                {
// switch_2230_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_22A8
                }
                case 0x2:
                {
// switch_2230_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_22A8
                }
                case 0x3:
                {
// switch_2230_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22A8
                }
                case 0x4:
                {
// switch_2230_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_22A8
                }
                case 0x5:
                {
// switch_2230_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_22A8
                }
            }
        }
    }
}
// fun_23E0
fun_23E0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1CC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2448
fun_2448() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CE0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_24F0
    pri = 1;
    return pri;
// lab_24F0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2538
fun_2538() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2588
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2448(var_8)
    arg_2 = pri;
// lab_2588
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1CC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25E8
fun_25E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_23E0(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2638
fun_2638() {
    OP_JUMP lab_2650
// lab_2650
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2690
    pri = 0;
    return pri;
// lab_2690
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2650
    pri = 0;
    return pri;
}
// fun_26D0
fun_26D0() {
    var_8 = 0;
    pri = fun_2638()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2780
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2780
    pri = 0;
    return pri;
}
// fun_2790
fun_2790() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_27C0
fun_27C0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_27F0
// lab_27F0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2830
    OP_JUMP lab_2860
// lab_2830
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27F0
// lab_2860
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28A8
fun_28A8() {
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
// fun_2918
fun_2918() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2990()
    return pri;
}
// fun_2990
fun_2990() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_29D0
fun_29D0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A20
fun_2A20() {
    OP_JUMP lab_2A38
// lab_2A38
    pri = EvCameraMoveWait_()
    OP_JZER lab_2A70
    pri = 0;
    return pri;
// lab_2A70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A38
    pri = 0;
    return pri;
}
// fun_2AB0
fun_2AB0() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 0;
    var_88 = 4607182418800017408;
    var_96 = 0;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B48
fun_2B48() {
    pri = EvCameraShakeEnd()
    var_8 = arg_0;
    pri = EvCameraHandShakeEnd(var_8)
    pri = 0;
    return pri;
}
// fun_2B98
fun_2B98() {
    pri = arg_6;
    OP_JNZ lab_2BD0
    var_8 = 0;
    pri = fun_11F0()
// lab_2BD0
    pri = arg_1;
    switch (pri) {
// switch_4138
        case default:
        {
// switch_4138_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4488
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4488
            pri = 1;
            OP_JUMP lab_4490
// lab_4488
            pri = 0;
// lab_4490
            OP_JZER lab_45E8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CE0(var_24, var_16)
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
            OP_JUMP lab_4648
// lab_45E8
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
            pri = fun_0168(var_16, var_8, var_0)
// lab_4648
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_46A8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4708
// lab_46A8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4708
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4708
            pri = arg_2;
            OP_JZER lab_4748
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4748
            var_8 = 0;
            pri = fun_1230()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4138_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x1:
        {
// switch_4138_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x2:
        {
// switch_4138_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x3:
        {
// switch_4138_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x4:
        {
// switch_4138_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x5:
        {
// switch_4138_case_0x5
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x6:
        {
// switch_4138_case_0x6
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x7:
        {
// switch_4138_case_0x7
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x8:
        {
// switch_4138_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x9:
        {
// switch_4138_case_0x9
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xa:
        {
// switch_4138_case_0xa
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xb:
        {
// switch_4138_case_0xb
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xc:
        {
// switch_4138_case_0xc
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xd:
        {
// switch_4138_case_0xd
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xe:
        {
// switch_4138_case_0xe
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0xf:
        {
// switch_4138_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x10:
        {
// switch_4138_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x11:
        {
// switch_4138_case_0x11
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x12:
        {
// switch_4138_case_0x12
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x13:
        {
// switch_4138_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x14:
        {
// switch_4138_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x15:
        {
// switch_4138_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x16:
        {
// switch_4138_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x17:
        {
// switch_4138_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x18:
        {
// switch_4138_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x19:
        {
// switch_4138_case_0x19
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4138_case_default
        }
        case 0x1a:
        {
// switch_4138_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C68(var_48, var_40)
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
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4138_case_default
        }
        case 0x1b:
        {
// switch_4138_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C68(var_48, var_40)
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
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4138_case_default
        }
        case 0x1c:
        {
// switch_4138_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0C68(var_48, var_40)
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
            pri = fun_0F50(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4138_case_default
        }
        case 0x1d:
        {
// switch_4138_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x1e:
        {
// switch_4138_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x1f:
        {
// switch_4138_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x20:
        {
// switch_4138_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x21:
        {
// switch_4138_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x22:
        {
// switch_4138_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x23:
        {
// switch_4138_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x24:
        {
// switch_4138_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x25:
        {
// switch_4138_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x26:
        {
// switch_4138_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x27:
        {
// switch_4138_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x28:
        {
// switch_4138_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
        case 0x29:
        {
// switch_4138_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4138_case_default
        }
    }
}
// fun_4778
fun_4778() {
    pri = arg_5;
    OP_JNZ lab_47B0
    var_8 = 0;
    pri = fun_11F0()
// lab_47B0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4800
    OP_CONST_S -8, -1
// lab_4800
    pri = arg_1;
    switch (pri) {
// switch_62B8
        case default:
        {
// switch_62B8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6760
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0CE0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6760
            pri = 1;
            OP_JUMP lab_6768
// lab_6760
            pri = 0;
// lab_6768
            OP_JZER lab_67B8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6A10
// lab_67B8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6820
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6820
            pri = 1;
            OP_JUMP lab_6828
// lab_6820
            pri = 0;
// lab_6828
            OP_JZER lab_69B0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CE0(var_24, var_16)
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
            OP_JUMP lab_6A10
// lab_69B0
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
            pri = fun_0168(var_16, var_8, var_0)
// lab_6A10
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6A80
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6A80
            var_8 = 0;
            pri = fun_1230()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_62B8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1:
        {
// switch_62B8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2:
        {
// switch_62B8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3:
        {
// switch_62B8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x4:
        {
// switch_62B8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x5:
        {
// switch_62B8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F18(var_40)
            OP_JUMP switch_62B8_case_default
        }
        case 0x6:
        {
// switch_62B8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x7:
        {
// switch_62B8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x8:
        {
// switch_62B8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x9:
        {
// switch_62B8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xa:
        {
// switch_62B8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xb:
        {
// switch_62B8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xc:
        {
// switch_62B8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0xd:
        {
// switch_62B8_case_0xd
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0xe:
        {
// switch_62B8_case_0xe
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0xf:
        {
// switch_62B8_case_0xf
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x10:
        {
// switch_62B8_case_0x10
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x11:
        {
// switch_62B8_case_0x11
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x12:
        {
// switch_62B8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x13:
        {
// switch_62B8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x14:
        {
// switch_62B8_case_0x14
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x15:
        {
// switch_62B8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x16:
        {
// switch_62B8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x17:
        {
// switch_62B8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x18:
        {
// switch_62B8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x19:
        {
// switch_62B8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1a:
        {
// switch_62B8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1b:
        {
// switch_62B8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1c:
        {
// switch_62B8_case_0x1c
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1d:
        {
// switch_62B8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1e:
        {
// switch_62B8_case_0x1e
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x1f:
        {
// switch_62B8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x20:
        {
// switch_62B8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x21:
        {
// switch_62B8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x22:
        {
// switch_62B8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x23:
        {
// switch_62B8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x24:
        {
// switch_62B8_case_0x24
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x25:
        {
// switch_62B8_case_0x25
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x26:
        {
// switch_62B8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x27:
        {
// switch_62B8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x28:
        {
// switch_62B8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x29:
        {
// switch_62B8_case_0x29
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2a:
        {
// switch_62B8_case_0x2a
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2b:
        {
// switch_62B8_case_0x2b
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2c:
        {
// switch_62B8_case_0x2c
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2d:
        {
// switch_62B8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2e:
        {
// switch_62B8_case_0x2e
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x2f:
        {
// switch_62B8_case_0x2f
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x30:
        {
// switch_62B8_case_0x30
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x31:
        {
// switch_62B8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x32:
        {
// switch_62B8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x33:
        {
// switch_62B8_case_0x33
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x34:
        {
// switch_62B8_case_0x34
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x35:
        {
// switch_62B8_case_0x35
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x36:
        {
// switch_62B8_case_0x36
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x37:
        {
// switch_62B8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x38:
        {
// switch_62B8_case_0x38
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
            pri = fun_0F50(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_62B8_case_default
        }
        case 0x39:
        {
// switch_62B8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3a:
        {
// switch_62B8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3b:
        {
// switch_62B8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3c:
        {
// switch_62B8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3d:
        {
// switch_62B8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
        case 0x3e:
        {
// switch_62B8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            OP_JUMP switch_62B8_case_default
        }
    }
}
// fun_6AB0
fun_6AB0() {
    pri = arg_4;
    OP_JNZ lab_6AE8
    var_8 = 0;
    pri = fun_11F0()
// lab_6AE8
    pri = arg_1;
    switch (pri) {
// switch_7EC0
        case default:
        {
// switch_7EC0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1988(var_264)
            OP_JZER lab_8488
            pri = arg_3;
            switch (pri) {
// switch_8430
                case default:
                {
// switch_8430_case_default
                    OP_JUMP lab_8740
// lab_8740
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_87B0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_87B0
                    var_8 = 0;
                    pri = fun_1230()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8430_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8430_case_default
                }
                case 0x2:
                {
// switch_8430_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8430_case_default
                }
                case 0x3:
                {
// switch_8430_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8430_case_default
                }
            }
// lab_8488
            pri = arg_1;
            OP_JZER lab_84D8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_84D8
            pri = 0;
            OP_JUMP lab_84E0
// lab_84D8
            pri = 1;
// lab_84E0
            OP_JZER lab_8548
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CE0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8548
            pri = 1;
            OP_JUMP lab_8550
// lab_8548
            pri = 0;
// lab_8550
            OP_JZER lab_85A0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8740
// lab_85A0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8608
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8740
// lab_8608
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CE0(var_24, var_16)
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
// switch_7EC0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1:
        {
// switch_7EC0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2:
        {
// switch_7EC0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3:
        {
// switch_7EC0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x4:
        {
// switch_7EC0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x5:
        {
// switch_7EC0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F18(var_40)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x6:
        {
// switch_7EC0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x7:
        {
// switch_7EC0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x8:
        {
// switch_7EC0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x9:
        {
// switch_7EC0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xa:
        {
// switch_7EC0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xb:
        {
// switch_7EC0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xc:
        {
// switch_7EC0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xd:
        {
// switch_7EC0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xe:
        {
// switch_7EC0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0xf:
        {
// switch_7EC0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x10:
        {
// switch_7EC0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x11:
        {
// switch_7EC0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x12:
        {
// switch_7EC0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x13:
        {
// switch_7EC0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x14:
        {
// switch_7EC0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x15:
        {
// switch_7EC0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x16:
        {
// switch_7EC0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x17:
        {
// switch_7EC0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x18:
        {
// switch_7EC0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x19:
        {
// switch_7EC0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1a:
        {
// switch_7EC0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1b:
        {
// switch_7EC0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1c:
        {
// switch_7EC0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1d:
        {
// switch_7EC0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1e:
        {
// switch_7EC0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x1f:
        {
// switch_7EC0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x20:
        {
// switch_7EC0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x21:
        {
// switch_7EC0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x22:
        {
// switch_7EC0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x23:
        {
// switch_7EC0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x24:
        {
// switch_7EC0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x25:
        {
// switch_7EC0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x26:
        {
// switch_7EC0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x27:
        {
// switch_7EC0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x28:
        {
// switch_7EC0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x29:
        {
// switch_7EC0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2a:
        {
// switch_7EC0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2b:
        {
// switch_7EC0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2c:
        {
// switch_7EC0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2d:
        {
// switch_7EC0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2e:
        {
// switch_7EC0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x2f:
        {
// switch_7EC0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x30:
        {
// switch_7EC0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x31:
        {
// switch_7EC0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x32:
        {
// switch_7EC0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x33:
        {
// switch_7EC0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x34:
        {
// switch_7EC0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x35:
        {
// switch_7EC0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x36:
        {
// switch_7EC0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x37:
        {
// switch_7EC0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x38:
        {
// switch_7EC0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x39:
        {
// switch_7EC0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3a:
        {
// switch_7EC0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3b:
        {
// switch_7EC0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3c:
        {
// switch_7EC0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3d:
        {
// switch_7EC0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
        case 0x3e:
        {
// switch_7EC0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CA0(var_24, var_16, var_8)
            OP_JUMP switch_7EC0_case_default
        }
    }
}
// fun_87E0
fun_87E0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_88E0
        case default:
        {
// switch_88E0_case_default
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
// switch_88E0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_88E0_case_default
        }
        case 0x1:
        {
// switch_88E0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_88E0_case_default
        }
        case 0x2:
        {
// switch_88E0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_88E0_case_default
        }
        case 0x3:
        {
// switch_88E0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_88E0_case_default
        }
    }
}
// fun_89A0
fun_89A0() {
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
    pri = fun_2538(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2638()
    pri = 0;
    return pri;
}
// fun_8A38
fun_8A38() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_87E0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_89A0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8AE0
fun_8AE0() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8B30
// lab_8B30
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30048;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8BA8
    OP_JUMP lab_8BD8
// lab_8BA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8B30
// lab_8BD8
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8C60
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6AB0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1C58(var_56)
// lab_8C60
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8CC8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1798(var_24, var_16)
// lab_8CC8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1798(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8D88
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D18(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0A98(var_88, var_80, var_72, var_64, var_56)
// lab_8D88
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8DC8
    pri = 0;
    return pri;
// lab_8DC8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8F10
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 30168;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0C68(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8ED8
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_8F10
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B40(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B40(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D18(var_40)
    pri = 0;
    return pri;
// lab_8ED8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1798(var_16, var_8)
}
// fun_8F98
fun_8F98() {
    pri = 30304;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9020
// lab_9020
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_91A0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9190
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_90E0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_90E0
    pri = 0;
    OP_JUMP lab_90E8
// lab_91A0
    pri = 0;
    return pri;
// lab_9190
    OP_JUMP lab_9018
// lab_9018
    OP_INC_P_S -936
// lab_90E0
    pri = 1;
// lab_90E8
    OP_JZER lab_9160
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9158
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9160
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9158
}
// fun_91C0
fun_91C0() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9208
    pri = arg_0;
    return pri;
// lab_9208
    pri = arg_1;
    return pri;
}
// fun_9218
fun_9218() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_92B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 31224;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1C30()
// lab_92B0
    pri = arg_4;
    OP_JZER lab_92E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C88(var_8)
// lab_92E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9340
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9340
    pri = 0;
    OP_JUMP lab_9348
// lab_9340
    pri = 1;
// lab_9348
    OP_JZER lab_9410
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9410
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_93E8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1B70(var_32, var_24)
    OP_JUMP lab_9410
// lab_9410
    pri = arg_2;
    OP_JZER lab_94E8
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_94B8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1798(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0928(var_40)
    OP_JUMP lab_94E8
// lab_94E8
    pri = arg_3;
    OP_JZER lab_9520
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BF8(var_8)
// lab_9520
    pri = 0;
    return pri;
// lab_94B8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1798(var_16, var_8)
// lab_93E8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B70(var_16, var_8)
}
// fun_9530
fun_9530() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8F98(var_24)
    pri = 0;
    return pri;
}
// fun_9598
fun_9598() {
    pri = g_mode;
    switch (pri) {
// switch_96A8
        case default:
        {
// switch_96A8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9710
// lab_9710
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_96A8_case_0x0
            var_8 = 0;
            pri = fun_9720()
            OP_JUMP lab_9710
        }
        case 0xdb26017f7d44717:
        {
// switch_96A8_case_0xdb26017f7d44717
            var_8 = 0;
            pri = fun_F6B0()
            OP_JUMP lab_9710
        }
        case 0x10ccc0a9ee9cd620:
        {
// switch_96A8_case_0x10ccc0a9ee9cd620
            var_8 = 0;
            pri = fun_F720()
            OP_JUMP lab_9710
        }
        case 0x10ccc3a9ee9cdb39:
        {
// switch_96A8_case_0x10ccc3a9ee9cdb39
            var_8 = 0;
            pri = fun_FE50()
            OP_JUMP lab_9710
        }
        case 0x2cc52a1b833b5743:
        {
// switch_96A8_case_0x2cc52a1b833b5743
            var_8 = 0;
            pri = fun_F5C0()
            OP_JUMP lab_9710
        }
    }
}
// fun_9720
fun_9720() {
    pri = 0;
    return pri;
}
// fun_9738
fun_9738() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_9218(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9790
fun_9790() {
    var_8 = 5598396028474176704;
    var_16 = 8;
    pri = fun_05E8(var_8)
    var_24 = -1349778034395884683;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_97F8
fun_97F8() {
    var_8 = 0;
    pri = fun_0618()
    pri = 0;
    return pri;
}
// fun_9828
fun_9828() {
    var_8 = 0;
    var_16 = 5598396028474176704;
    var_24 = 16;
    pri = fun_08B0(var_16, var_8)
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9990
    OP_CONST_S -8, -5225704462842025352
    OP_CONST_S -16, 8665549678277899496
    OP_CONST_S -24, 8665552976812784129
    OP_CONST_S -32, 8665551877301155918
    OP_CONST_S -40, 8665555175836040551
    OP_CONST_S -48, 8665554076324412340
    OP_JUMP lab_9A20
// lab_9990
    OP_CONST_S -8, -1787470995557921022
    OP_CONST_S -16, 531220336685314735
    OP_CONST_S -24, 531221436196942946
    OP_CONST_S -32, 531222535708571157
    OP_CONST_S -40, 531214839127173680
    OP_CONST_S -48, 531215938638801891
// lab_9A20
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_08E8(var_16, var_8)
    var_32 = 1;
    var_40 = -3181508942575245480;
    var_48 = 16;
    pri = fun_08E8(var_40, var_32)
    var_56 = 1;
    var_64 = var_8;
    var_72 = 16;
    pri = fun_08E8(var_64, var_56)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C 4640537203540230144, 4662204399579509555, 4658819662984563917, 8802641224559852288
    var_96 = 48;
    pri = fun_07C0(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 888;
    var_112 = 889;
    var_120 = 16;
    pri = fun_91C0(var_112, var_104)
    var_128 = pri;
    var_136 = 1;
    var_144 = 16;
    pri = fun_29D0(var_136, var_128)
    pri = EvCameraStart()
    var_152 = 2;
    var_160 = 8;
    var_168 = var_8;
    var_176 = 24;
    pri = fun_18C8(var_168, var_160, var_152)
    var_184 = 1;
    var_192 = 1;
    OP_PUSH3_C -4592151655043668378, 4661492795654012928, 4659015595956633600
    var_200 = var_8;
    var_208 = 48;
    pri = fun_07C0(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 0;
    var_224 = 4631952216750555136;
    var_232 = 0;
    OP_PUSH5_C 4661420117935416934, 4634798632452541645, 4658818805365494252, 4662096108679289897, 4639002813073436180
    var_240 = 4658810097233402266;
    var_248 = 1;
    pri = EvCameraMove(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_256 = 0;
    pri = fun_2A20()
    var_264 = 0;
    var_272 = 4631952216750555136;
    var_280 = 3;
    OP_PUSH5_C 4661334828818450350, 4634231460374469673, 4658819904877122028, 4662010830557439590, 4638718875190679306
    var_288 = 4658811196745030042;
    var_296 = 100;
    pri = EvCameraMove(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_304 = 1;
    var_312 = 1;
    var_320 = -1;
    var_328 = -1;
    var_336 = 0;
    var_344 = 2;
    var_352 = -3181508942575245480;
    var_360 = 56;
    pri = fun_4778(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 31272;
    var_376 = 8;
    var_384 = 16;
    pri = fun_02B0(var_376, var_368)
    var_392 = 0;
    pri = fun_0380()
    var_400 = 40;
    var_408 = 8;
    pri = fun_0090(var_400)
    var_416 = 2;
    var_424 = 2;
    var_432 = -3181508942575245480;
    var_440 = 24;
    pri = fun_18C8(var_432, var_424, var_416)
    var_448 = 0;
    var_456 = 0;
    pri = float(var_456)
    var_464 = pri;
    var_472 = 4602678819172646912;
    var_480 = 0;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 0;
    var_504 = 30;
    var_512 = 2;
    var_520 = 3;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 2;
    var_544 = 72;
    pri = fun_2AB0(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 888;
    var_584 = 889;
    var_592 = 16;
    pri = fun_91C0(var_584, var_576)
    var_600 = pri;
    pri = SoundPlayPokeVoice(var_600, var_592, var_584, var_576)
    var_608 = 1;
    var_616 = -1;
    var_624 = -1;
    var_632 = 3;
    var_640 = 0;
    var_648 = 33;
    var_656 = var_8;
    var_664 = 56;
    pri = fun_2B98(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 0;
    var_680 = 3;
    var_688 = 0;
    var_696 = 100;
    var_704 = -1;
    OP_PUSH2_C -8821208554541217334, -3181508942575245480
    var_712 = 56;
    pri = fun_2538(var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_720 = var_8;
    var_728 = 8;
    pri = fun_0D18(var_720)
    var_736 = 20;
    var_744 = 8;
    pri = fun_2B48(var_736)
    var_752 = 1;
    var_760 = 8;
    pri = fun_26D0(var_752)
    var_768 = 0;
    pri = fun_2790()
    var_776 = 0;
    var_784 = 0;
    pri = float(var_784)
    var_792 = pri;
    var_800 = 4596373779694328218;
    var_808 = 0;
    pri = float(var_808)
    var_816 = pri;
    var_824 = 0;
    var_832 = 30;
    var_840 = 2;
    var_848 = 3;
    pri = float(var_848)
    var_856 = pri;
    var_864 = 2;
    var_872 = 72;
    pri = fun_2AB0(var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_880 = 0;
    var_888 = 2;
    var_896 = 0;
    var_904 = 888;
    var_912 = 889;
    var_920 = 16;
    pri = fun_91C0(var_912, var_904)
    var_928 = pri;
    pri = SoundPlayPokeVoice(var_928, var_920, var_912, var_904)
    var_936 = 1;
    var_944 = -1;
    var_952 = -1;
    var_960 = 3;
    var_968 = 0;
    var_976 = 32;
    var_984 = var_8;
    var_992 = 56;
    pri = fun_2B98(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 1;
    var_1016 = -1;
    var_1024 = 3;
    var_1032 = var_8;
    var_1040 = 40;
    pri = fun_1328(var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1048 = 0;
    var_1056 = 3;
    var_1064 = 0;
    var_1072 = 100;
    var_1080 = -1;
    var_1088 = var_16;
    var_1096 = var_8;
    var_1104 = 56;
    pri = fun_2538(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = var_8;
    var_1120 = 8;
    pri = fun_0D18(var_1112)
    var_1128 = 20;
    var_1136 = 8;
    pri = fun_2B48(var_1128)
    var_1144 = 1;
    var_1152 = 8;
    pri = fun_26D0(var_1144)
    var_1160 = 0;
    pri = fun_2790()
    var_1168 = 2;
    var_1176 = 7;
    var_1184 = var_8;
    var_1192 = 24;
    pri = fun_18C8(var_1184, var_1176, var_1168)
    var_1200 = 1;
    var_1208 = 1;
    OP_PUSH3_C -4592151655043668378, 4661515885398196224, 4658991406700822528
    var_1216 = var_8;
    var_1224 = 48;
    pri = fun_07C0(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1232 = 1;
    pri = SetCascadeShadowMapLevel(var_1232)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_A4A8
    var_1240 = 0;
    var_1248 = 4631952216750555136;
    var_1256 = 0;
    OP_PUSH5_C 4661505451032848630, 4631417414294804890, 4657762042749806182, 4661758052834213888, 4639146365311558615
    var_1264 = 4659006118166402171;
    var_1272 = 1;
    pri = EvCameraMove(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1280 = 0;
    pri = fun_2A20()
    var_1288 = 0;
    var_1296 = 4631952216750555136;
    var_1304 = 3;
    OP_PUSH5_C 4661339710650077676, 4634448196106536878, 4658011104123730002, 4661810862377695969, 4639205123212946964
    var_1312 = 4658976981108266107;
    var_1320 = 250;
    pri = EvCameraMove(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    OP_JUMP lab_A608
// lab_A4A8
    var_8 = 1;
    var_16 = 1;
    var_24 = 50;
    var_32 = 2;
    var_40 = -3181508942575245480;
    var_48 = 40;
    pri = fun_1328(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 4631952216750555136;
    var_72 = 0;
    OP_PUSH5_C 4661526396729357763, -4581579454918416138, 4658080197434419446, 4661693313589570437, 4642415697166052884
    var_80 = 4658902764073391227;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_2A20()
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 3;
    OP_PUSH5_C 4661501723688430469, -4581579454918416138, 4658100230536277524, 4661678997948176794, 4643303750717575004
    var_128 = 4658973858495243223;
    var_136 = 250;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
// lab_A608
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -8821209654052845545, -3181508942575245480
    var_48 = 56;
    pri = fun_2538(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_26D0(var_56)
    var_72 = 0;
    pri = fun_2790()
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = var_24;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_2538(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_26D0(var_144)
    var_160 = 0;
    pri = fun_2790()
    var_168 = -1;
    var_176 = var_8;
    var_184 = 16;
    pri = fun_1798(var_176, var_168)
    var_192 = 5;
    var_200 = var_8;
    var_208 = 16;
    pri = fun_17D8(var_200, var_192)
    var_216 = var_8;
    var_224 = 8;
    pri = fun_1890(var_216)
    var_232 = 0;
    var_240 = 1;
    var_248 = 0;
    var_256 = 888;
    var_264 = 889;
    var_272 = 16;
    pri = fun_91C0(var_264, var_256)
    var_280 = pri;
    pri = SoundPlayPokeVoice(var_280, var_272, var_264, var_256)
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 3;
    var_320 = 0;
    var_328 = 30;
    var_336 = var_8;
    var_344 = 56;
    pri = fun_2B98(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_352 = 0;
    var_360 = -3181508942575245480;
    var_368 = 16;
    pri = fun_08B0(var_360, var_352)
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_A948
    var_376 = 0;
    var_384 = 4627054552155789722;
    var_392 = 0;
    OP_PUSH5_C 4660430249607162757, 4634631858528840581, 4659677633897950085, 4661841967561645752, 4639463728347799880
    var_400 = 4658508875027856753;
    var_408 = 1;
    pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
    var_416 = 0;
    pri = fun_2A20()
    OP_JUMP lab_AA10
// lab_A948
    var_8 = -1;
    var_16 = -3181508942575245480;
    var_24 = 16;
    pri = fun_1798(var_16, var_8)
    var_32 = 0;
    var_40 = 4627054552155789722;
    var_48 = 0;
    OP_PUSH5_C 4660465785822972477, 4638905352362750116, 4659754115926778184, 4661807069062580142, 4641612437951264850
    var_56 = 4658546874149712691;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_2A20()
// lab_AA10
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = var_32;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_2538(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = var_8;
    var_80 = 8;
    pri = fun_0D18(var_72)
    var_88 = 1;
    var_96 = 8;
    pri = fun_26D0(var_88)
    var_104 = 0;
    pri = fun_2790()
    var_112 = 1;
    var_120 = 3;
    var_128 = 0;
    var_136 = 2;
    var_144 = -3181508942575245480;
    var_152 = 40;
    pri = fun_6AB0(var_144, var_136, var_128, var_120, var_112)
    var_160 = -3181508942575245480;
    var_168 = 8;
    pri = fun_0D18(var_160)
    var_176 = 1;
    var_184 = -3181508942575245480;
    var_192 = 16;
    pri = fun_08B0(var_184, var_176)
    var_200 = 0;
    var_208 = var_8;
    var_216 = 16;
    pri = fun_08B0(var_208, var_200)
    var_224 = 5;
    var_232 = 5;
    var_240 = -3181508942575245480;
    var_248 = 24;
    pri = fun_18C8(var_240, var_232, var_224)
    var_256 = 0;
    var_264 = 4627054552155789722;
    var_272 = 0;
    OP_PUSH5_C 4662178220207652209, -4605200834963974390, 4656845050052240998, 4661630531475624428, 4639507356969190031
    var_280 = 4658892274732462244;
    var_288 = 1;
    pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_296 = 0;
    pri = fun_2A20()
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 3;
    var_336 = 0;
    var_344 = 0;
    var_352 = -3181508942575245480;
    var_360 = 56;
    pri = fun_2B98(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C -8821210753564473756, -3181508942575245480
    var_408 = 56;
    pri = fun_2538(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = -3181508942575245480;
    var_424 = 8;
    pri = fun_0D18(var_416)
    var_432 = 1;
    var_440 = 8;
    pri = fun_26D0(var_432)
    var_448 = 0;
    pri = fun_2790()
    var_456 = 8868142065411558194;
    var_464 = 8;
    pri = fun_05E8(var_456)
    var_472 = 0;
    pri = fun_0618()
    var_480 = 1;
    var_488 = 8868142065411558194;
    var_496 = 16;
    pri = fun_08E8(var_488, var_480)
    var_504 = 1;
    var_512 = 1;
    OP_PUSH4_C 4640537203540230144, 4662325345858564915, 4658574911696220979, 8868142065411558194
    var_520 = 48;
    pri = fun_07C0(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 1;
    var_536 = var_8;
    var_544 = 16;
    pri = fun_08B0(var_536, var_528)
    var_552 = var_8;
    var_560 = 8;
    pri = fun_1818(var_552)
    var_568 = 1;
    var_576 = 0;
    var_584 = 20;
    pri = float(var_584)
    var_592 = pri;
    OP_PUSH5_C -3181508942575245480, 4661899175151638938, 4658574911696220979, 4611686018427387904, 8868142065411558194
    var_600 = 64;
    pri = fun_09D8(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_608 = 1;
    var_616 = 0;
    var_624 = 20;
    pri = float(var_624)
    var_632 = pri;
    OP_PUSH5_C -3181508942575245480, 4661914018558613914, 4658819662984563917, 4611686018427387904, 8802641224559852288
    var_640 = 64;
    pri = fun_09D8(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_648 = 0;
    var_656 = 4631952216750555136;
    var_664 = 0;
    OP_PUSH5_C 4662109577696730153, 4636301005140734771, 4658804049919449498, 4662747173494561178, 4643106014546435768
    var_672 = 4659118994030109655;
    var_680 = 1;
    pri = EvCameraMove(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_688 = 0;
    pri = fun_2A20()
    var_696 = 0;
    var_704 = 4631952216750555136;
    var_712 = 3;
    OP_PUSH5_C 4661529585313078313, 4623310934965537997, 4658492118470649446, 4662095130113941176, 4640247284314218168
    var_720 = 4659159961833360589;
    var_728 = 80;
    pri = EvCameraMove(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_736 = 0;
    var_744 = 3;
    var_752 = 0;
    var_760 = 100;
    var_768 = -1;
    OP_PUSH2_C -3897521780276291600, 8868142065411558194
    var_776 = 56;
    pri = fun_2538(var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_784 = 8802641224559852288;
    var_792 = 8;
    pri = fun_0B40(var_784)
    var_800 = 8868142065411558194;
    var_808 = 8;
    pri = fun_0B40(var_800)
    var_816 = 1;
    var_824 = 8;
    pri = fun_26D0(var_816)
    var_832 = 0;
    pri = fun_2790()
    var_840 = 5;
    var_848 = 8;
    pri = fun_0090(var_840)
    var_856 = -3181508942575245480;
    var_864 = 8;
    pri = fun_1930(var_856)
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    var_896 = 0;
    OP_PUSH2_C 8802641224559852288, -3181508942575245480
    var_904 = 48;
    pri = fun_0AE8(var_896, var_888, var_880, var_872, var_864, var_856)
    var_912 = 1;
    var_920 = 1;
    var_928 = 70;
    var_936 = 8802641224559852288;
    var_944 = var_8;
    var_952 = 40;
    pri = fun_1270(var_944, var_936, var_928, var_920, var_912)
    var_960 = 0;
    var_968 = 3;
    var_976 = 0;
    var_984 = 100;
    var_992 = -1;
    OP_PUSH2_C -8821211853076101967, -3181508942575245480
    var_1000 = 56;
    pri = fun_2538(var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1008 = -3181508942575245480;
    var_1016 = 8;
    pri = fun_0B40(var_1008)
    var_1024 = 1;
    var_1032 = 8;
    pri = fun_26D0(var_1024)
    var_1040 = 0;
    pri = fun_2790()
    var_1048 = 8;
    var_1056 = 8868142065411558194;
    var_1064 = 16;
    pri = fun_17D8(var_1056, var_1048)
    var_1072 = 1;
    var_1080 = 1;
    var_1088 = -1;
    var_1096 = -1;
    var_1104 = 0;
    var_1112 = 9;
    var_1120 = 8868142065411558194;
    var_1128 = 56;
    pri = fun_4778(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = 0;
    var_1144 = 3;
    var_1152 = 0;
    var_1160 = 100;
    var_1168 = -1;
    OP_PUSH2_C -3897518481741406967, 8868142065411558194
    var_1176 = 56;
    pri = fun_2538(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1184 = 1;
    var_1192 = 8;
    pri = fun_26D0(var_1184)
    var_1200 = 0;
    pri = fun_2790()
    var_1208 = 0;
    var_1216 = 0;
    var_1224 = 0;
    var_1232 = -25;
    pri = float(var_1232)
    var_1240 = pri;
    var_1248 = var_8;
    var_1256 = 40;
    pri = fun_0A98(var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1264 = 6;
    var_1272 = var_8;
    var_1280 = 16;
    pri = fun_17D8(var_1272, var_1264)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 888;
    var_1320 = 889;
    var_1328 = 16;
    pri = fun_91C0(var_1320, var_1312)
    var_1336 = pri;
    pri = SoundPlayPokeVoice(var_1336, var_1328, var_1320, var_1312)
    var_1344 = 0;
    var_1352 = 3;
    var_1360 = 0;
    var_1368 = 100;
    var_1376 = -1;
    var_1384 = var_40;
    var_1392 = var_8;
    var_1400 = 56;
    pri = fun_2538(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1408 = var_8;
    var_1416 = 8;
    pri = fun_0B40(var_1408)
    var_1424 = var_8;
    var_1432 = 8;
    pri = fun_1818(var_1424)
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_26D0(var_1440)
    var_1456 = 0;
    var_1464 = -2555635340526258890;
    var_1472 = 0;
    var_1480 = 24;
    pri = fun_27C0(var_1472, var_1464, var_1456)
    var_1488 = 0;
    var_1496 = -2555636440037887101;
    var_1504 = 1;
    var_1512 = 24;
    pri = fun_27C0(var_1504, var_1496, var_1488)
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 0;
    var_1552 = 1;
    var_1560 = 32;
    pri = fun_28A8(var_1552, var_1544, var_1536, var_1528)
    var_56 = pri;
    pri = var_56;
    switch (pri) {
// switch_BF08
        case default:
        {
// switch_BF08_case_default
            var_8 = 0;
            var_16 = 1;
            var_24 = 0;
            var_32 = 888;
            var_40 = 889;
            var_48 = 16;
            pri = fun_91C0(var_40, var_32)
            var_56 = pri;
            pri = SoundPlayPokeVoice(var_56, var_48, var_40, var_32)
            var_64 = 8868142065411558194;
            var_72 = 8;
            pri = fun_1818(var_64)
            var_80 = 1;
            var_88 = -1;
            var_96 = -1;
            var_104 = 3;
            var_112 = 0;
            var_120 = 30;
            var_128 = var_8;
            var_136 = 56;
            pri = fun_2B98(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_144 = 1;
            var_152 = 3;
            var_160 = 0;
            var_168 = 9;
            var_176 = 8868142065411558194;
            var_184 = 40;
            pri = fun_6AB0(var_176, var_168, var_160, var_152, var_144)
            var_192 = 0;
            var_200 = 3;
            var_208 = 0;
            var_216 = 100;
            var_224 = -1;
            var_232 = var_48;
            var_240 = var_8;
            var_248 = 56;
            pri = fun_2538(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
            var_256 = 8868142065411558194;
            var_264 = 8;
            pri = fun_0D18(var_256)
            var_272 = 1;
            var_280 = 8;
            pri = fun_26D0(var_272)
            var_288 = 0;
            pri = fun_2790()
            var_296 = 4;
            var_304 = 4;
            var_312 = -3181508942575245480;
            var_320 = 24;
            pri = fun_18C8(var_312, var_304, var_296)
            var_328 = 0;
            var_336 = 4631952216750555136;
            var_344 = 0;
            OP_PUSH5_C 4661752632241888952, 4635807720244049347, 4658867161886883840, 4662380816220186214, 4635110365989248696
            var_352 = 4659385757541240668;
            var_360 = 1;
            pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
            var_368 = 0;
            pri = fun_2A20()
            var_376 = 0;
            var_384 = 4631952216750555136;
            var_392 = 3;
            OP_PUSH5_C 4661752632241888952, 4635807720244049347, 4658867161886883840, 4662341321762516500, 4635119513925991793
            var_400 = 4659546308229128520;
            var_408 = 250;
            pri = EvCameraMove(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_416 = 0;
            var_424 = 0;
            var_432 = 0;
            var_440 = 0;
            var_448 = var_8;
            var_456 = -3181508942575245480;
            var_464 = 48;
            pri = fun_0AE8(var_456, var_448, var_440, var_432, var_424, var_416)
            var_472 = 0;
            var_480 = 3;
            var_488 = 0;
            var_496 = 100;
            var_504 = -1;
            OP_PUSH2_C -8821215151610986600, -3181508942575245480
            var_512 = 56;
            pri = fun_2538(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
            var_520 = -3181508942575245480;
            var_528 = 8;
            pri = fun_0B40(var_520)
            var_536 = 1;
            var_544 = 8;
            pri = fun_26D0(var_536)
            var_552 = 0;
            pri = fun_2790()
            var_560 = 1;
            var_568 = 1;
            var_576 = -1;
            var_584 = -1;
            var_592 = 0;
            var_600 = 1;
            var_608 = 8868142065411558194;
            var_616 = 56;
            pri = fun_4778(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
            var_624 = 0;
            var_632 = 3;
            var_640 = 0;
            var_648 = 100;
            var_656 = -1;
            OP_PUSH2_C -3897519581253035178, 8868142065411558194
            var_664 = 56;
            pri = fun_2538(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
            var_672 = 1;
            var_680 = 8;
            pri = fun_26D0(var_672)
            var_688 = 0;
            pri = fun_2790()
            var_696 = 1;
            var_704 = 3;
            var_712 = 0;
            var_720 = 1;
            var_728 = 8868142065411558194;
            var_736 = 40;
            pri = fun_6AB0(var_728, var_720, var_712, var_704, var_696)
            var_744 = 8868142065411558194;
            var_752 = 8;
            pri = fun_0D18(var_744)
            pri = RomGetVersion()
            OP_EQ_P_C_PRI 44
            OP_JZER lab_C618
            var_760 = 0;
            var_768 = 4629081171988106445;
            var_776 = 0;
            OP_PUSH5_C 4661120808880103752, 4632876862049049641, 4658898058163624346, 4661919065316985405, 4639440858505942139
            var_784 = 4658657990794815734;
            var_792 = 1;
            pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
            var_800 = 0;
            pri = fun_2A20()
            var_808 = 0;
            var_816 = 4629081171988106445;
            var_824 = 3;
            OP_PUSH5_C 4661067086741970616, 4634389790048869417, 4658906700325018665, 4661892215243035116, 4639863774658449900
            var_832 = 4658666720917140275;
            var_840 = 150;
            pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
            OP_JUMP lab_C730
// lab_C618
            OP_PUSH2_C 4616977747989548237, 4629081171988106445
            var_8 = 0;
            OP_PUSH5_C 4661154893740564808, 4642311551424669942, 4659009152818494833, 4661911698589079306, 4637239020500623032
            var_16 = 4658596550085055611;
            var_24 = 1;
            pri = EvCameraMove(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40, var_-48)
            var_32 = 0;
            pri = fun_2A20()
            OP_PUSH2_C 4616977747989548237, 4629081171988106445
            var_40 = 3;
            OP_PUSH5_C 4661094442591269683, 4642638766085096079, 4659033605957096571, 4661881484009548022, 4637894153508917084
            var_48 = 4658621113174820127;
            var_56 = 150;
            pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
// lab_C730
            var_8 = 5;
            var_16 = 5;
            var_24 = -3181508942575245480;
            var_32 = 24;
            pri = fun_18C8(var_24, var_16, var_8)
            var_40 = 0;
            var_48 = 0;
            var_56 = 0;
            var_64 = 0;
            OP_PUSH2_C 8868142065411558194, -3181508942575245480
            var_72 = 48;
            pri = fun_0AE8(var_64, var_56, var_48, var_40, var_32, var_24)
            var_80 = 0;
            var_88 = 3;
            var_96 = 0;
            var_104 = 100;
            var_112 = -1;
            OP_PUSH2_C -8821216251122614811, -3181508942575245480
            var_120 = 56;
            pri = fun_2538(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            var_128 = -3181508942575245480;
            var_136 = 8;
            pri = fun_0B40(var_128)
            var_144 = 1;
            var_152 = 8;
            pri = fun_26D0(var_144)
            var_160 = 0;
            pri = fun_2790()
            var_168 = 6;
            var_176 = 5;
            var_184 = 8868142065411558194;
            var_192 = 24;
            pri = fun_18C8(var_184, var_176, var_168)
            var_200 = 0;
            var_208 = 4629081171988106445;
            var_216 = 0;
            OP_PUSH5_C 4662009456167904870, 4636989915146234102, 4657839536329331835, 4661817657359555625, 4637801970454044344
            var_224 = 4659143403188246282;
            var_232 = 1;
            pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
            var_240 = 0;
            pri = fun_2A20()
            var_248 = 0;
            var_256 = 4629081171988106445;
            var_264 = 3;
            OP_PUSH5_C 4662022738268368404, 4636989915146234102, 4657847342861889044, 4661831258318391214, 4637797044641951908
            var_272 = 4659151407632896492;
            var_280 = 100;
            pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
            var_288 = 1;
            var_296 = 1;
            var_304 = -1;
            var_312 = -1;
            var_320 = 0;
            var_328 = 12;
            var_336 = 8868142065411558194;
            var_344 = 56;
            pri = fun_4778(var_336, var_328, var_320, var_312, var_304, var_296, var_288)
            var_352 = 0;
            var_360 = 3;
            var_368 = 0;
            var_376 = 100;
            var_384 = -1;
            OP_PUSH2_C 767759775262983740, 8868142065411558194
            var_392 = 56;
            pri = fun_2538(var_384, var_376, var_368, var_360, var_352, var_344, var_336)
            var_400 = 1;
            var_408 = 8;
            pri = fun_26D0(var_400)
            var_416 = 0;
            pri = fun_2790()
            var_424 = 8868142065411558194;
            var_432 = 8;
            pri = fun_1930(var_424)
            var_440 = -3181508942575245480;
            var_448 = 8;
            pri = fun_1890(var_440)
            var_456 = 0;
            var_464 = 4629081171988106445;
            var_472 = 0;
            OP_PUSH5_C 4661840021426064589, 4638526768519074284, 4658859069481303409, 4662405291349020508, 4646539657418584883
            var_480 = 4659133111759410299;
            var_488 = 1;
            pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
            var_496 = 0;
            pri = fun_2A20()
            var_504 = 0;
            var_512 = 4629081171988106445;
            var_520 = 3;
            OP_PUSH5_C 4661998428066278277, 4641769712094501929, 4658935859373387284, 4662563708984350474, 4647915366367258214
            var_528 = 4659209901651494175;
            var_536 = 100;
            pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
            var_544 = 1;
            var_552 = 3;
            var_560 = 0;
            var_568 = 12;
            var_576 = 8868142065411558194;
            var_584 = 40;
            pri = fun_6AB0(var_576, var_568, var_560, var_552, var_544)
            var_592 = 0;
            var_600 = 0;
            var_608 = 0;
            var_616 = 0;
            var_624 = var_8;
            var_632 = -3181508942575245480;
            var_640 = 48;
            pri = fun_0AE8(var_632, var_624, var_616, var_608, var_600, var_592)
            var_648 = 0;
            var_656 = 3;
            var_664 = 0;
            var_672 = 100;
            var_680 = -1;
            OP_PUSH2_C -8821217350634243022, -3181508942575245480
            var_688 = 56;
            pri = fun_2538(var_680, var_672, var_664, var_656, var_648, var_640, var_632)
            var_696 = -3181508942575245480;
            var_704 = 8;
            pri = fun_0B40(var_696)
            var_712 = 8868142065411558194;
            var_720 = 8;
            pri = fun_0D18(var_712)
            var_728 = 1;
            var_736 = 8;
            pri = fun_26D0(var_728)
            var_744 = 0;
            pri = fun_2790()
            var_752 = 1;
            var_760 = 1;
            OP_PUSH3_C -4590209477704364851, 4661518084421451776, 4658987008654311424
            var_768 = var_8;
            var_776 = 48;
            pri = fun_07C0(var_768, var_760, var_752, var_744, var_736, var_728)
            var_784 = -3181508942575245480;
            var_792 = 8;
            pri = fun_1818(var_784)
            var_800 = 0;
            var_808 = 4629081171988106445;
            var_816 = 0;
            OP_PUSH5_C 4661228824902416466, 4637155281695051612, 4658677738023650591, 4661907542435126313, 4638980295075299328
            var_824 = 4658648249121793638;
            var_832 = 1;
            pri = EvCameraMove(var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
            var_840 = 0;
            pri = fun_2A20()
            var_848 = 0;
            var_856 = 4629081171988106445;
            var_864 = 3;
            OP_PUSH5_C 4661335147676822405, 4637155281695051612, 4658986898703148646, 4661886992562803180, 4638977480325532221
            var_872 = 4658196107950219592;
            var_880 = 60;
            pri = EvCameraMove(var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808)
            var_888 = 1;
            var_896 = 0;
            var_904 = 4641240890982006784;
            var_912 = 0;
            var_920 = 0;
            OP_PUSH4_C 4661699503840034816, 4658362486049734656, 4607182418800017408, -3181508942575245480
            var_928 = 72;
            pri = fun_0960(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856)
            var_936 = -3181508942575245480;
            var_944 = 8;
            pri = fun_0B40(var_936)
            var_952 = 30;
            var_960 = 8;
            pri = fun_0090(var_952)
            var_968 = 0;
            var_976 = 0;
            var_984 = 0;
            var_992 = 0;
            var_1000 = var_8;
            var_1008 = -3181508942575245480;
            var_1016 = 48;
            pri = fun_0AE8(var_1008, var_1000, var_992, var_984, var_976, var_968)
            var_1024 = -3181508942575245480;
            var_1032 = 8;
            pri = fun_0B40(var_1024)
            var_1040 = 8;
            var_1048 = 8;
            pri = fun_0090(var_1040)
            var_1056 = 0;
            var_1064 = 4629081171988106445;
            var_1072 = 0;
            OP_PUSH5_C 4661803935454440980, 4634231460374469673, 4657388274767060009, 4661649388100040786, 4639187882870623437
            var_1080 = 4658621113174820127;
            var_1088 = 1;
            pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
            var_1096 = 0;
            pri = fun_2A20()
            var_1104 = 0;
            var_1112 = 4629081171988106445;
            var_1120 = 3;
            OP_PUSH5_C 4661814072951649075, 4634231460374469673, 4657393354510780334, 4661659393655853548, 4639191753151553208
            var_1128 = 4658626082967377674;
            var_1136 = 60;
            pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
            var_1144 = 0;
            var_1152 = 3;
            var_1160 = 0;
            var_1168 = 100;
            var_1176 = -1;
            OP_PUSH2_C -8822058477029635212, -3181508942575245480
            var_1184 = 56;
            pri = fun_2538(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
            var_1192 = 1;
            var_1200 = 8;
            pri = fun_26D0(var_1192)
            var_1208 = 0;
            pri = fun_2790()
            var_1216 = 1;
            var_1224 = -1;
            var_1232 = -1;
            var_1240 = 3;
            var_1248 = 0;
            var_1256 = 30;
            var_1264 = var_8;
            var_1272 = 56;
            pri = fun_2B98(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
            pri = RomGetVersion()
            OP_EQ_P_C_PRI 44
            OP_JZER lab_D3D0
            var_1280 = 0;
            var_1288 = 4629081171988106445;
            var_1296 = 0;
            OP_PUSH5_C 4661276092907294556, 4637895560883800637, 4659155387864989041, 4661790004642117059, 4639644224176615588
            var_1304 = 4658393228394847273;
            var_1312 = 1;
            pri = EvCameraMove(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
            var_1320 = 0;
            pri = fun_2A20()
            var_1328 = 0;
            var_1336 = 4629081171988106445;
            var_1344 = 3;
            OP_PUSH5_C 4661259930086366249, 4637982818126580941, 4659179379208707113, 4661773830826072474, 4639687852798005740
            var_1352 = 4658417197748332790;
            var_1360 = 75;
            pri = EvCameraMove(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
            var_1368 = 0;
            pri = fun_2A20()
            OP_JUMP lab_D500
// lab_D3D0
            OP_PUSH2_C 4614613358185178726, 4629081171988106445
            var_8 = 0;
            OP_PUSH5_C 4661268572247760568, 4641221891421078815, 4659231034264980029, 4661767772517003428, 4640802845549500826
            var_16 = 4658426829470192108;
            var_24 = 1;
            pri = EvCameraMove(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40, var_-48)
            var_32 = 0;
            pri = fun_2A20()
            OP_PUSH2_C 4614613358185178726, 4629081171988106445
            var_40 = 3;
            OP_PUSH5_C 4661255696966599311, 4641418923904776274, 4659251771054279885, 4661754897235842171, 4641000581720640061
            var_48 = 4658447610239957074;
            var_56 = 75;
            pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
            var_64 = 0;
            pri = fun_2A20()
// lab_D500
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 8;
            var_56 = -3181508942575245480;
            var_64 = 56;
            pri = fun_2B98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 0;
            var_80 = 4629081171988106445;
            var_88 = 0;
            OP_PUSH5_C 4661390112263094927, 4632022585494732800, 4659077212588254167, 4661823550741880504, 4636816104348115272
            var_96 = 4658139417130691461;
            var_104 = 1;
            pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
            var_112 = 0;
            pri = fun_2A20()
            var_120 = 0;
            var_128 = 4629081171988106445;
            var_136 = 3;
            OP_PUSH5_C 4661387121591467377, 4636236969583533097, 4659083677716625490, 4661821780528159785, 4638884593583217705
            var_144 = 4658145178571621007;
            var_152 = 50;
            pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
            var_160 = 50;
            var_168 = 8;
            pri = fun_0090(var_160)
            var_176 = 1;
            var_184 = 1;
            OP_PUSH3_C -4590209477704364851, 4661486198584246272, 4659160731491500032
            var_192 = var_8;
            var_200 = 48;
            pri = fun_07C0(var_192, var_184, var_176, var_168, var_160, var_152)
            var_208 = 0;
            var_216 = 4629081171988106445;
            var_224 = 0;
            OP_PUSH5_C 4661486528437734605, 4635199030606912553, 4658347290799038792, 4661951324988144353, 4639037645601804124
            var_232 = 4659330452106363535;
            var_240 = 1;
            pri = EvCameraMove(var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
            var_248 = 0;
            pri = fun_2A20()
            var_256 = 0;
            var_264 = 4629081171988106445;
            var_272 = 16;
            OP_PUSH5_C 4661296785716129300, 4634171646941918659, 4657817018331194982, 4661761582266539049, 4638350142971188347
            var_280 = 4658800223618984837;
            var_288 = 20;
            pri = EvCameraMove(var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216)
            var_296 = 0;
            var_304 = 3;
            var_312 = 0;
            var_320 = 100;
            var_328 = -1;
            OP_PUSH2_C -8822057377518007001, -3181508942575245480
            var_336 = 56;
            pri = fun_2538(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
            var_344 = 10;
            var_352 = 8;
            pri = fun_0090(var_344)
            var_360 = 31320;
            pri = SoundPostEvent(var_360)
            var_368 = 0;
            pri = fun_2790()
            var_376 = 1;
            var_384 = 0;
            var_392 = 31528;
            var_400 = 8;
            var_408 = 32;
            pri = fun_0310(var_400, var_392, var_384, var_376)
            var_416 = 0;
            pri = fun_0380()
            var_424 = -3181508942575245480;
            var_432 = 8;
            pri = fun_0D18(var_424)
            var_440 = 31576;
            pri = SoundPostEvent(var_440)
            var_448 = 0;
            var_456 = var_8;
            var_464 = 16;
            pri = fun_08B0(var_456, var_448)
            var_472 = 1;
            var_480 = 5598396028474176704;
            var_488 = 16;
            pri = fun_08B0(var_480, var_472)
            var_496 = 40;
            var_504 = 8;
            pri = fun_0090(var_496)
            var_512 = 0;
            var_520 = 4629081171988106445;
            var_528 = 0;
            OP_PUSH5_C 4660648788538299515, -4593744803411850691, 4659263623789627310, 4661596512585861038, 4623648704937590784
            var_536 = 4658948613708269486;
            var_544 = 1;
            pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
            var_552 = 0;
            pri = fun_2A20()
            var_560 = 31272;
            var_568 = 8;
            var_576 = 16;
            pri = fun_02B0(var_568, var_560)
            var_584 = 0;
            pri = fun_0380()
            var_592 = 31720;
            pri = SoundPostEvent(var_592)
            var_600 = 0;
            var_608 = 4629081171988106445;
            var_616 = 3;
            OP_PUSH5_C 4660713263900152300, -4594364048360614134, 4659248230626838446, 4661628761261903708, 4624887194835117670
            var_624 = 4658933220545480622;
            var_632 = 80;
            pri = EvCameraMove(var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
            var_640 = 0;
            pri = fun_2A20()
            var_648 = 0;
            var_656 = 4629081171988106445;
            var_664 = 0;
            OP_PUSH5_C 4661373619588678287, 4633679065732675011, 4659019114393842483, 4661899724907452826, 4637117282573195674
            var_672 = 4658164244103246643;
            var_680 = 1;
            pri = EvCameraMove(var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608)
            var_688 = 0;
            pri = fun_2A20()
            var_696 = 0;
            var_704 = 4629081171988106445;
            var_712 = 3;
            OP_PUSH5_C 4661428419248206643, 4634272274246092718, 4658930075942225183, 4661954513571864904, 4637448015670830694
            var_720 = 4658075205651629343;
            var_728 = 80;
            pri = EvCameraMove(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
            var_736 = 40;
            var_744 = 8;
            pri = fun_0090(var_736)
            var_752 = 1;
            var_760 = 0;
            var_768 = 4641240890982006784;
            var_776 = 0;
            var_784 = 0;
            OP_PUSH4_C 4661546671723773952, 4658890251631067136, 4607182418800017408, -3181508942575245480
            var_792 = 72;
            pri = fun_0960(var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
            var_800 = -3181508942575245480;
            var_808 = 8;
            pri = fun_0B40(var_800)
            var_816 = 1;
            var_824 = 1;
            var_832 = -1;
            var_840 = -1;
            var_848 = 0;
            var_856 = 26;
            var_864 = -3181508942575245480;
            var_872 = 56;
            pri = fun_4778(var_864, var_856, var_848, var_840, var_832, var_824, var_816)
            var_880 = 30;
            var_888 = 8;
            pri = fun_0090(var_880)
            var_896 = 1;
            var_904 = 0;
            OP_PUSH4_C 4661530179049357312, 4633781804099174400, 4658960620375244800, 5598396028474176704
            var_912 = 48;
            pri = fun_0818(var_904, var_896, var_888, var_880, var_872, var_864)
            var_920 = 0;
            var_928 = 4629081171988106445;
            var_936 = 0;
            OP_PUSH5_C 4661273058255201894, 4636467075376994058, 4657884880188861317, 4661580866535397786, 4635948457732404675
            var_944 = 4659096673944065802;
            var_952 = 1;
            pri = EvCameraMove(var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880)
            var_960 = 0;
            pri = fun_2A20()
            var_968 = 0;
            var_976 = 4629081171988106445;
            var_984 = 3;
            OP_PUSH5_C 4661310529611476500, 4634859149572534436, 4658032390668843745, 4661618348886788669, 4634340531927945052
            var_992 = 4659244184424048230;
            var_1000 = 70;
            pri = EvCameraMove(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
            var_1008 = 55;
            var_1016 = 8;
            pri = fun_0090(var_1008)
            var_1024 = 31872;
            pri = SoundPostEvent(var_1024)
            var_1032 = 3;
            var_1040 = 0;
            var_1048 = 101354087860431457;
            var_1056 = 24;
            pri = fun_25E8(var_1048, var_1040, var_1032)
            var_1064 = 0;
            var_1072 = 8;
            pri = fun_04D8(var_1064)
            var_1080 = 1;
            var_1088 = 8;
            pri = fun_26D0(var_1080)
            var_1096 = 0;
            pri = fun_2790()
            var_1104 = 0;
            var_1112 = 5598396028474176704;
            var_1120 = 16;
            pri = fun_08B0(var_1112, var_1104)
            var_1128 = 1;
            var_1136 = 1;
            OP_PUSH4_C 4639587225493831680, 4661899175151638938, 4658574911696220979, 8868142065411558194
            var_1144 = 48;
            pri = fun_07C0(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
            var_1152 = 1;
            var_1160 = 1;
            OP_PUSH4_C 4640537203540230144, 4661914018558613914, 4658819662984563917, 8802641224559852288
            var_1168 = 48;
            pri = fun_07C0(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
            var_1176 = 0;
            var_1184 = 4629081171988106445;
            var_1192 = 0;
            OP_PUSH5_C 4661930654169542164, 4636095528407735992, 4658277317879047127, 4661424834840300093, 4638586581951625298
            var_1200 = 4659181864104985887;
            var_1208 = 1;
            pri = EvCameraMove(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
            var_1216 = 0;
            pri = fun_2A20()
            var_1224 = 0;
            var_1232 = 4629081171988106445;
            var_1240 = 3;
            OP_PUSH5_C 4661944881850005586, 4636054010848671171, 4658309291677182853, 4661438215896810127, 4638519027957214740
            var_1248 = 4659212012713819505;
            var_1256 = 120;
            pri = EvCameraMove(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
            var_1264 = 1;
            var_1272 = 3;
            var_1280 = 0;
            var_1288 = 26;
            var_1296 = -3181508942575245480;
            var_1304 = 40;
            pri = fun_6AB0(var_1296, var_1288, var_1280, var_1272, var_1264)
            var_1312 = -3181508942575245480;
            var_1320 = 8;
            pri = fun_0D18(var_1312)
            var_1328 = 0;
            var_1336 = 0;
            var_1344 = 0;
            var_1352 = 0;
            OP_PUSH2_C 8868142065411558194, -3181508942575245480
            var_1360 = 48;
            pri = fun_0AE8(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
            var_1368 = 10;
            var_1376 = 8;
            pri = fun_0090(var_1368)
            var_1384 = 4;
            var_1392 = 4;
            var_1400 = 8868142065411558194;
            var_1408 = 24;
            pri = fun_18C8(var_1400, var_1392, var_1384)
            var_1416 = 1;
            var_1424 = -1;
            var_1432 = -1;
            var_1440 = 3;
            var_1448 = 0;
            var_1456 = 1;
            var_1464 = 8868142065411558194;
            var_1472 = 56;
            pri = fun_2B98(var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
            var_1480 = 0;
            var_1488 = 3;
            var_1496 = 0;
            var_1504 = 100;
            var_1512 = -1;
            OP_PUSH2_C 767760874774611951, 8868142065411558194
            var_1520 = 56;
            pri = fun_2538(var_1512, var_1504, var_1496, var_1488, var_1480, var_1472, var_1464)
            var_1528 = -3181508942575245480;
            var_1536 = 8;
            pri = fun_0B40(var_1528)
            var_1544 = 8868142065411558194;
            var_1552 = 8;
            pri = fun_0D18(var_1544)
            var_1560 = 1;
            var_1568 = 8;
            pri = fun_26D0(var_1560)
            var_1576 = 0;
            pri = fun_2790()
            var_1584 = 2;
            pri = SetCascadeShadowMapLevel(var_1584)
            var_1592 = 0;
            var_1600 = 4629081171988106445;
            var_1608 = 0;
            OP_PUSH5_C 4661584011138653225, 4634556563972570481, 4658505994307391980, 4662183552839046922, 4637543013475470541
            var_1616 = 4659139378975688622;
            var_1624 = 1;
            pri = EvCameraMove(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552)
            var_1632 = 0;
            pri = fun_2A20()
            var_1640 = 1;
            var_1648 = 1;
            var_1656 = -1;
            var_1664 = -1;
            var_1672 = 0;
            var_1680 = 1;
            var_1688 = -3181508942575245480;
            var_1696 = 56;
            pri = fun_4778(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
            var_1704 = 0;
            var_1712 = 3;
            var_1720 = 0;
            var_1728 = 100;
            var_1736 = -1;
            OP_PUSH2_C -8822056278006378790, -3181508942575245480
            var_1744 = 56;
            pri = fun_2538(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
            var_1752 = 1;
            var_1760 = 8;
            pri = fun_26D0(var_1752)
            var_1768 = 0;
            pri = fun_2790()
            var_1776 = 32056;
            pri = SoundPostEvent(var_1776)
            var_1784 = 5;
            var_1792 = 5;
            var_1800 = -3181508942575245480;
            var_1808 = 24;
            pri = fun_18C8(var_1800, var_1792, var_1784)
            var_1816 = 1;
            var_1824 = 3;
            var_1832 = 0;
            var_1840 = 1;
            var_1848 = -3181508942575245480;
            var_1856 = 40;
            pri = fun_6AB0(var_1848, var_1840, var_1832, var_1824, var_1816)
            var_1864 = 0;
            var_1872 = 3;
            var_1880 = 0;
            var_1888 = 100;
            var_1896 = -1;
            OP_PUSH2_C -8822055178494750579, -3181508942575245480
            var_1904 = 56;
            pri = fun_2538(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848)
            var_1912 = -3181508942575245480;
            var_1920 = 8;
            pri = fun_0D18(var_1912)
            var_1928 = 1;
            var_1936 = 8;
            pri = fun_26D0(var_1928)
            var_1944 = 0;
            pri = fun_2790()
            var_1952 = -3181508942575245480;
            var_1960 = 8;
            pri = fun_1930(var_1952)
            var_1968 = 0;
            var_1976 = 0;
            var_1984 = 0;
            var_1992 = 0;
            OP_PUSH2_C 8802641224559852288, -3181508942575245480
            var_2000 = 48;
            pri = fun_0AE8(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
            var_2008 = 0;
            var_2016 = 3;
            var_2024 = 0;
            var_2032 = 100;
            var_2040 = -1;
            OP_PUSH2_C -8822062875076148056, -3181508942575245480
            var_2048 = 56;
            pri = fun_2538(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
            var_2056 = -3181508942575245480;
            var_2064 = 8;
            pri = fun_0B40(var_2056)
            var_2072 = 1;
            var_2080 = 8;
            pri = fun_26D0(var_2072)
            var_2088 = 0;
            pri = fun_2790()
            var_2096 = 5;
            var_2104 = -3181508942575245480;
            var_2112 = 16;
            pri = fun_1850(var_2104, var_2096)
            var_2120 = 1;
            var_2128 = 1;
            OP_PUSH4_C 4612811918334230528, 4661546671723773952, 4658890251631067136, -3181508942575245480
            var_2136 = 48;
            pri = fun_07C0(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
            var_2144 = 0;
            var_2152 = 4629081171988106445;
            var_2160 = 0;
            OP_PUSH5_C 4660812131985721917, 4637042691704367350, 4658844621898514432, 4661697414767942042, 4638593618826043064
            var_2168 = 4658905248969670001;
            var_2176 = 1;
            pri = EvCameraMove(var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
            var_2184 = 0;
            pri = fun_2A20()
            var_2192 = 0;
            var_2200 = 4629081171988106445;
            var_2208 = 3;
            OP_PUSH5_C 4660741037563869921, 4637415646048508969, 4658838222740840776, 4661661867557016044, 4638837094680897782
            var_2216 = 4658898871802228900;
            var_2224 = 100;
            pri = EvCameraMove(var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168, var_2160, var_2152)
            var_2232 = 0;
            var_2240 = 3;
            var_2248 = 0;
            var_2256 = 100;
            var_2264 = -1;
            OP_PUSH2_C -8822061775564519845, -3181508942575245480
            var_2272 = 56;
            pri = fun_2538(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
            var_2280 = 1;
            var_2288 = 8;
            pri = fun_26D0(var_2280)
            var_2296 = 0;
            pri = fun_2790()
            var_2304 = 0;
            var_2312 = 4629081171988106445;
            var_2320 = 0;
            OP_PUSH5_C 4661524054769590600, 4634797928765099868, 4658712042786437202, 4662988923116160287, 4643202419725959168
            var_2328 = 4659402492108215419;
            var_2336 = 1;
            pri = EvCameraMove(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
            var_2344 = 0;
            pri = fun_2A20()
            var_2352 = 0;
            var_2360 = 4629081171988106445;
            var_2368 = 3;
            OP_PUSH5_C 4661524054769590600, 4634797928765099868, 4658712042786437202, 4662949054824537129, 4643197845757587620
            var_2376 = 4659680404667252081;
            var_2384 = 200;
            pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
            var_2392 = 1;
            var_2400 = 0;
            var_2408 = 20;
            pri = float(var_2408)
            var_2416 = pri;
            var_2424 = 4640537203540230144;
            var_2432 = 0;
            OP_PUSH4_C 4659237697305444352, 4658800091677589504, 4611686018427387904, -3181508942575245480
            var_2440 = 72;
            pri = fun_0960(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368)
            var_2448 = 0;
            var_2456 = 3;
            var_2464 = 0;
            var_2472 = 100;
            var_2480 = -1;
            OP_PUSH2_C -8822060676052891634, -3181508942575245480
            var_2488 = 56;
            pri = fun_2538(var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
            var_2496 = -3181508942575245480;
            var_2504 = 8;
            pri = fun_0B40(var_2496)
            var_2512 = 1;
            var_2520 = 8;
            pri = fun_26D0(var_2512)
            var_2528 = 0;
            pri = fun_2790()
            var_2536 = 2;
            var_2544 = 2;
            var_2552 = 8802641224559852288;
            var_2560 = 24;
            pri = fun_18C8(var_2552, var_2544, var_2536)
            var_2568 = 0;
            var_2576 = 4629081171988106445;
            var_2584 = 0;
            OP_PUSH5_C 4658213832077659341, 4639902477467747615, 4658759519698524570, 4659570365543544259, 4641011137032266711
            var_2592 = 4658809943301774377;
            var_2600 = 1;
            pri = EvCameraMove(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528)
            var_2608 = 0;
            pri = fun_2A20()
            var_2616 = 0;
            var_2624 = 0;
            var_2632 = 0;
            var_2640 = 0;
            pri = float(var_2640)
            var_2648 = pri;
            var_2656 = -3181508942575245480;
            var_2664 = 40;
            pri = fun_0A98(var_2656, var_2648, var_2640, var_2632, var_2624)
            var_2672 = -3181508942575245480;
            var_2680 = 8;
            pri = fun_0B40(var_2672)
            var_2688 = 0;
            var_2696 = 4629081171988106445;
            var_2704 = 9;
            OP_PUSH5_C 4661502295434476913, 4634778225516730122, 4658695242248764785, 4662162563162072678, 4636992026208559432
            var_2712 = 4659009746554773832;
            var_2720 = 40;
            pri = EvCameraMove(var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
            var_2728 = 1;
            var_2736 = 1;
            var_2744 = -1;
            var_2752 = -1;
            var_2760 = 0;
            var_2768 = 23;
            var_2776 = -3181508942575245480;
            var_2784 = 56;
            pri = fun_4778(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728)
            var_2792 = 0;
            var_2800 = 3;
            var_2808 = 0;
            var_2816 = 100;
            var_2824 = -1;
            OP_PUSH2_C -8822059576541263423, -3181508942575245480
            var_2832 = 56;
            pri = fun_2538(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776)
            var_2840 = -3181508942575245480;
            var_2848 = 8;
            pri = fun_0B40(var_2840)
            var_2856 = 0;
            pri = fun_2A20()
            var_2864 = 1;
            var_2872 = 8;
            pri = fun_26D0(var_2864)
            var_2880 = 0;
            pri = fun_2790()
            var_2888 = 0;
            var_2896 = 4629081171988106445;
            var_2904 = 0;
            OP_PUSH5_C 4662405841104834396, -4588384112480396247, 4658509644685996196, 4661801703445836595, 4639922884403559137
            var_2912 = 4658847524609211761;
            var_2920 = 1;
            pri = EvCameraMove(var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848)
            var_2928 = 0;
            pri = fun_2A20()
            var_2936 = 0;
            var_2944 = 4629081171988106445;
            var_2952 = 3;
            OP_PUSH5_C 4662407303455299338, -4588384112480396247, 4658520090046460068, 4661803176791417815, 4639922884403559137
            var_2960 = 4658857969969675633;
            var_2968 = 80;
            pri = EvCameraMove(var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904, var_2896)
            var_2976 = 0;
            pri = fun_2A20()
            var_2984 = 0;
            var_2992 = 4629081171988106445;
            var_3000 = 0;
            OP_PUSH5_C 4658185596619058053, 4639021460790643261, 4658463905002280714, 4659486868630530949, 4641394998531755868
            var_3008 = 4658827095683167683;
            var_3016 = 1;
            pri = EvCameraMove(var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952, var_2944)
            var_3024 = 0;
            pri = fun_2A20()
            var_3032 = 0;
            var_3040 = 4629081171988106445;
            var_3048 = 3;
            OP_PUSH5_C 4658179593285570396, 4639021460790643261, 4658485411449720013, 4659480887287275848, 4641394998531755868
            var_3056 = 4658848602130606981;
            var_3064 = 80;
            pri = EvCameraMove(var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
            var_3072 = 25;
            var_3080 = 8;
            pri = fun_0090(var_3072)
            var_3088 = 5;
            var_3096 = -3181508942575245480;
            var_3104 = 16;
            pri = fun_17D8(var_3096, var_3088)
            var_3112 = 0;
            pri = fun_2A20()
            var_3120 = 0;
            var_3128 = 8802641224559852288;
            var_3136 = 16;
            pri = fun_08E8(var_3128, var_3120)
            var_3144 = 0;
            var_3152 = -3181508942575245480;
            var_3160 = 16;
            pri = fun_08E8(var_3152, var_3144)
            var_3168 = 0;
            var_3176 = 8868142065411558194;
            var_3184 = 16;
            pri = fun_08E8(var_3176, var_3168)
            var_3192 = 0;
            var_3200 = var_8;
            var_3208 = 16;
            pri = fun_08E8(var_3200, var_3192)
            var_3216 = 1;
            var_3224 = 3;
            var_3232 = 0;
            var_3240 = 23;
            var_3248 = -3181508942575245480;
            var_3256 = 40;
            pri = fun_6AB0(var_3248, var_3240, var_3232, var_3224, var_3216)
            var_3264 = 3;
            var_3272 = 30;
            pri = EvCameraEnd(var_3272, var_3264)
            var_3280 = -3181508942575245480;
            var_3288 = 8;
            pri = fun_0D18(var_3280)
            var_3296 = 8802641224559852288;
            var_3304 = 8;
            pri = fun_1930(var_3296)
            var_3312 = -3181508942575245480;
            var_3320 = 8;
            pri = fun_1930(var_3312)
            var_3328 = 32216;
            pri = SoundPostEvent(var_3328)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_BF08_case_0x0
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 19;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2B98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8802641224559852288;
            var_80 = 8;
            pri = fun_0D18(var_72)
            pri = RomGetVersion()
            OP_EQ_P_C_PRI 44
            OP_JZER lab_B850
            var_88 = 0;
            var_96 = 4631952216750555136;
            var_104 = 0;
            OP_PUSH5_C 4661249319799158211, -4599160381963763712, 4658107355371625513, 4661814864600021074, 4639300824705028588
            var_112 = 4658775220724569211;
            var_120 = 1;
            pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_128 = 0;
            pri = fun_2A20()
            var_136 = 0;
            var_144 = 4631952216750555136;
            var_152 = 3;
            OP_PUSH5_C 4661225713284509860, -4613352350289514988, 4658172798303710740, 4661791258085372723, 4639744851480789647
            var_160 = 4658840641666421883;
            var_168 = 220;
            pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            OP_JUMP lab_B968
// lab_B850
            var_8 = 0;
            var_16 = 4628180452062632346;
            var_24 = 0;
            OP_PUSH5_C 4661453081294017659, -4587040069466602865, 4658100120585114747, 4661788652242814894, 4642772818542754529
            var_32 = 4659019664149656371;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            var_48 = 0;
            pri = fun_2A20()
            var_56 = 0;
            var_64 = 4628180452062632346;
            var_72 = 3;
            OP_PUSH5_C 4661477259554712453, -4592576682258501468, 4658292073325091881, 4661812830503509688, 4643950087632846848
            var_80 = 4659211594899400950;
            var_88 = 150;
            pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_B968
            var_8 = 5;
            var_16 = 5;
            var_24 = -3181508942575245480;
            var_32 = 24;
            pri = fun_18C8(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = -1;
            var_56 = -1;
            var_64 = 3;
            var_72 = 0;
            var_80 = 0;
            var_88 = -3181508942575245480;
            var_96 = 56;
            pri = fun_2B98(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 0;
            var_112 = 3;
            var_120 = 0;
            var_128 = 100;
            var_136 = -1;
            OP_PUSH2_C -8821212952587730178, -3181508942575245480
            var_144 = 56;
            pri = fun_2538(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = -3181508942575245480;
            var_160 = 8;
            pri = fun_0D18(var_152)
            var_168 = 1;
            var_176 = 8;
            pri = fun_26D0(var_168)
            var_184 = 0;
            pri = fun_2790()
            OP_JUMP switch_BF08_case_default
        }
        case 0x1:
        {
// switch_BF08_case_0x1
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 19;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2B98(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8802641224559852288;
            var_80 = 8;
            pri = fun_0D18(var_72)
            pri = RomGetVersion()
            OP_EQ_P_C_PRI 44
            OP_JZER lab_BC98
            var_88 = 0;
            var_96 = 4631952216750555136;
            var_104 = 0;
            OP_PUSH5_C 4661249319799158211, -4599160381963763712, 4658107355371625513, 4661814864600021074, 4639300824705028588
            var_112 = 4658775220724569211;
            var_120 = 1;
            pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            var_128 = 0;
            pri = fun_2A20()
            var_136 = 0;
            var_144 = 4631952216750555136;
            var_152 = 3;
            OP_PUSH5_C 4661225713284509860, -4613352350289514988, 4658172798303710740, 4661791258085372723, 4639744851480789647
            var_160 = 4658840641666421883;
            var_168 = 150;
            pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            OP_JUMP lab_BDB0
// lab_BC98
            var_8 = 0;
            var_16 = 4628180452062632346;
            var_24 = 0;
            OP_PUSH5_C 4661453081294017659, -4587040069466602865, 4658100120585114747, 4661788652242814894, 4642772818542754529
            var_32 = 4659019664149656371;
            var_40 = 1;
            pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
            var_48 = 0;
            pri = fun_2A20()
            var_56 = 0;
            var_64 = 4628180452062632346;
            var_72 = 3;
            OP_PUSH5_C 4661477259554712453, -4592576682258501468, 4658292073325091881, 4661812830503509688, 4643950087632846848
            var_80 = 4659211594899400950;
            var_88 = 150;
            pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_BDB0
            var_8 = 5;
            var_16 = 5;
            var_24 = -3181508942575245480;
            var_32 = 24;
            pri = fun_18C8(var_24, var_16, var_8)
            var_40 = 1;
            var_48 = -1;
            var_56 = -1;
            var_64 = 3;
            var_72 = 0;
            var_80 = 1;
            var_88 = -3181508942575245480;
            var_96 = 56;
            pri = fun_2B98(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
            var_104 = 0;
            var_112 = 3;
            var_120 = 0;
            var_128 = 100;
            var_136 = -1;
            OP_PUSH2_C -8821214052099358389, -3181508942575245480
            var_144 = 56;
            pri = fun_2538(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            var_152 = -3181508942575245480;
            var_160 = 8;
            pri = fun_0D18(var_152)
            var_168 = 1;
            var_176 = 8;
            pri = fun_26D0(var_168)
            var_184 = 0;
            pri = fun_2790()
            OP_JUMP switch_BF08_case_default
        }
    }
}
// fun_F440
fun_F440() {
    pri = 0;
    return pri;
}
// fun_F458
fun_F458() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_F4C8
    var_8 = -5225704462842025352;
    var_16 = 8;
    pri = fun_0768(var_8)
    OP_JUMP lab_F4F0
// lab_F4C8
    var_8 = -1787470995557921022;
    var_16 = 8;
    pri = fun_0768(var_8)
// lab_F4F0
    var_8 = 5598396028474176704;
    var_16 = 8;
    pri = fun_0768(var_8)
    var_24 = 3200;
    var_32 = 8;
    pri = fun_9530(var_24)
    pri = 0;
    return pri;
}
// fun_F548
fun_F548() {
    OP_PUSH2_C -3181508942575245480, 3472199914154341087
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 8868142065411558194, 7699275116347892939
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_F5C0
fun_F5C0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9738()
    var_16 = 0;
    pri = fun_9790()
    var_24 = 0;
    pri = fun_97F8()
    var_32 = 0;
    pri = fun_9828()
    var_40 = 0;
    pri = fun_F440()
    var_48 = 0;
    pri = fun_F458()
    var_56 = 0;
    pri = fun_F548()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_F6B0
fun_F6B0() {
    var_8 = 0;
    pri = fun_9790()
    var_16 = 0;
    pri = fun_F458()
    var_24 = 8868142065411558194;
    pri = FlagReset(var_24)
    pri = 0;
    return pri;
}
// fun_F720
fun_F720() {
    var_8 = -3725993099991847983;
    pri = FlagGet(var_8)
    OP_JNZ lab_F8E0
    var_16 = 888;
    var_24 = 889;
    var_32 = 16;
    pri = fun_91C0(var_24, var_16)
    var_40 = pri;
    var_48 = 1;
    var_56 = 16;
    pri = fun_29D0(var_48, var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    OP_PUSH2_C 8802641224559852288, 8868142065411558194
    var_96 = 48;
    pri = fun_0AE8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C 767761974286240162, 8868142065411558194
    var_144 = 56;
    pri = fun_2538(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 8868142065411558194;
    var_160 = 8;
    pri = fun_0B40(var_152)
    var_168 = 1;
    var_176 = 8;
    pri = fun_26D0(var_168)
    var_184 = 0;
    pri = fun_2790()
    var_192 = -3725993099991847983;
    pri = FlagSet(var_192)
// lab_F8E0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 8802641224559852288, 8868142065411558194
    var_40 = 48;
    pri = fun_0AE8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 3;
    var_64 = 0;
    var_72 = 100;
    var_80 = -1;
    OP_PUSH2_C 767763073797868373, 8868142065411558194
    var_88 = 56;
    pri = fun_2538(var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_96 = 8868142065411558194;
    var_104 = 8;
    pri = fun_0B40(var_96)
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    var_136 = -1;
    var_144 = 0;
    var_152 = 1;
    var_160 = 8868142065411558194;
    var_168 = 56;
    pri = fun_4778(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_26D0(var_176)
    var_192 = 0;
    var_200 = 0;
    var_208 = 1;
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 48;
    pri = fun_2918(var_232, var_224, var_216, var_208, var_200, var_192)
    OP_JZER lab_FD40
    var_248 = 1;
    var_256 = 1;
    var_264 = 1;
    var_272 = 1;
    var_280 = 0;
    var_288 = 40;
    pri = fun_9218(var_280, var_272, var_264, var_256, var_248)
    var_296 = 1;
    var_304 = 3;
    var_312 = 0;
    var_320 = 1;
    var_328 = 8868142065411558194;
    var_336 = 40;
    pri = fun_6AB0(var_328, var_320, var_312, var_304, var_296)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C 767765272821124795, 8868142065411558194
    var_384 = 56;
    pri = fun_2538(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 8868142065411558194;
    var_400 = 8;
    pri = fun_0D18(var_392)
    var_408 = 1;
    var_416 = 8;
    pri = fun_26D0(var_408)
    var_424 = 0;
    pri = fun_2790()
    var_432 = 1;
    var_440 = 0;
    var_448 = 31224;
    var_456 = 8;
    var_464 = 32;
    pri = fun_0310(var_456, var_448, var_440, var_432)
    var_472 = 0;
    pri = fun_0380()
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    var_504 = 0;
    var_512 = 0;
    var_520 = 22115;
    pri = float(var_520)
    var_528 = pri;
    OP_PUSH3_C 4669005659650559836, -8113290503354198418, -2340100625610442929
    var_536 = 72;
    pri = fun_0438(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 1;
    var_552 = 90;
    pri = float(var_552)
    var_560 = pri;
    var_568 = 8802641224559852288;
    var_576 = 24;
    pri = fun_0870(var_568, var_560, var_552)
    var_584 = 31272;
    var_592 = 8;
    var_600 = 16;
    pri = fun_02B0(var_592, var_584)
    var_608 = 0;
    pri = fun_0380()
    OP_JUMP lab_FE40
// lab_FD40
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 1;
    var_40 = 8868142065411558194;
    var_48 = 40;
    pri = fun_6AB0(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 3;
    var_72 = 0;
    var_80 = 100;
    var_88 = -1;
    OP_PUSH2_C 768747136704927993, 8868142065411558194
    var_96 = 56;
    pri = fun_2538(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 8868142065411558194;
    var_112 = 8;
    pri = fun_0D18(var_104)
    var_120 = 1;
    var_128 = 8;
    pri = fun_26D0(var_120)
    var_136 = 0;
    pri = fun_2790()
// lab_FE40
    pri = 0;
    return pri;
}
// fun_FE50
fun_FE50() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 1;
    var_64 = 1;
    var_72 = 1;
    OP_PUSH2_C 767764173309496584, -5766348188344541335
    var_80 = 88;
    pri = fun_8A38(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 48;
    pri = fun_2918(var_128, var_120, var_112, var_104, var_96, var_88)
    OP_JZER lab_102C0
    var_144 = 1;
    var_152 = 1;
    var_160 = 1;
    var_168 = 1;
    var_176 = 0;
    var_184 = 40;
    pri = fun_9218(var_176, var_168, var_160, var_152, var_144)
    var_192 = 1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 1;
    var_224 = -5766348188344541335;
    var_232 = 40;
    pri = fun_6AB0(var_224, var_216, var_208, var_200, var_192)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C 767765272821124795, -5766348188344541335
    var_280 = 56;
    pri = fun_2538(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = -5766348188344541335;
    var_296 = 8;
    pri = fun_0D18(var_288)
    var_304 = 1;
    var_312 = 8;
    pri = fun_26D0(var_304)
    var_320 = 0;
    pri = fun_2790()
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    var_352 = -5766348188344541335;
    var_360 = 32;
    pri = fun_8AE0(var_352, var_344, var_336, var_328)
    var_368 = 1;
    var_376 = 0;
    var_384 = 31224;
    var_392 = 8;
    var_400 = 32;
    pri = fun_0310(var_392, var_384, var_376, var_368)
    var_408 = 0;
    pri = fun_0380()
    var_416 = 6910712898869243;
    pri = WorkGet(var_416)
    alt = 3200;
    OP_JSLESS lab_101B0
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    var_456 = 0;
    OP_PUSH4_C 4661914018558613914, 4658819662984563917, -8113291602865826629, -2340099526098814718
    var_464 = 72;
    pri = fun_0438(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    OP_JUMP lab_10218
// lab_102C0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 768747136704927993, -5766348188344541335
    var_48 = 56;
    pri = fun_2538(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_26D0(var_56)
    var_72 = 0;
    pri = fun_2790()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -5766348188344541335;
    var_112 = 32;
    pri = fun_8AE0(var_104, var_96, var_88, var_80)
// lab_101B0
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH4_C 4663616722265387827, 4658828678979911680, -8113291602865826629, -2340099526098814718
    var_48 = 72;
    pri = fun_0438(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
// lab_10218
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0870(var_32, var_24, var_16)
    var_48 = 31272;
    var_56 = 8;
    var_64 = 16;
    pri = fun_02B0(var_56, var_48)
    var_72 = 0;
    pri = fun_0380()
    OP_JUMP lab_10390
// lab_10390
    pri = 0;
    return pri;
}
