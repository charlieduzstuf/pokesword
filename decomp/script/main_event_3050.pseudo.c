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
// fun_0320
fun_0320() {
    OP_JUMP lab_0338
// lab_0338
    pri = FadeWait_()
    OP_JZER lab_0370
    pri = 0;
    return pri;
// lab_0370
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0338
    pri = 0;
    return pri;
}
// fun_03B0
fun_03B0() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0408
fun_0408() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0440
// lab_0440
    var_8 = 0;
    pri = fun_0558()
    OP_JNZ lab_0478
    OP_JUMP lab_04A8
// lab_0478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0440
// lab_04A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_04D8
// lab_04D8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0518
    pri = 0;
    return pri;
// lab_0518
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04D8
    pri = 0;
    return pri;
}
// fun_0558
fun_0558() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0580
fun_0580() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05D0
fun_05D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0628
fun_0628() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0660
fun_0660() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06D8
fun_06D8() {
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
// fun_0750
fun_0750() {
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
    pri = fun_19A8(var_8)
    OP_JZER lab_0930
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_19D8(var_24)
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
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B18
// lab_0B18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_19A8(var_8)
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
    pri = fun_19A8(var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1040
fun_1040() {
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
// fun_10A0
fun_10A0() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_1460
        case default:
        {
// switch_1460_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1460_case_0x0
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x1:
        {
// switch_1460_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1040(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1460_case_default
        }
        case 0x2:
        {
// switch_1460_case_0x2
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x3:
        {
// switch_1460_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1040(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1460_case_default
        }
        case 0x4:
        {
// switch_1460_case_0x4
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
            pri = fun_1040(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_1460_case_default
        }
        case 0x5:
        {
// switch_1460_case_0x5
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x6:
        {
// switch_1460_case_0x6
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
            pri = fun_1040(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_1460_case_default
        }
        case 0x7:
        {
// switch_1460_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1040(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_1460_case_default
        }
    }
}
// fun_1510
fun_1510() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1550
fun_1550() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_15C8
fun_15C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1608
fun_1608() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1640
fun_1640() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1550(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_15C8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1590(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1608(var_24)
    pri = 0;
    return pri;
}
// fun_1700
fun_1700() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_19A8(var_8)
    OP_JZER lab_17A0
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 344;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_17A0
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 456;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_1808
fun_1808() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 560;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 1928;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_1700(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_19A8
fun_19A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_19D8
fun_19D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1A08
fun_1A08() {
    OP_JUMP lab_1A20
// lab_1A20
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1AB0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1AA0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1AB0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B40
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1B30
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    pri = 0;
    return pri;
// lab_1B40
    pri = 0;
    return pri;
// lab_1B30
    OP_JUMP lab_1B50
// lab_1B50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1A20
    pri = 0;
    return pri;
// lab_1AA0
    OP_JUMP lab_1B50
}
// fun_1B90
fun_1B90() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1A08(var_40)
    pri = 0;
    return pri;
}
// fun_1C18
fun_1C18() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1C50
fun_1C50() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1C78
fun_1C78() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1CA8
fun_1CA8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1CE0
fun_1CE0() {
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
// switch_22F8
        case default:
        {
// switch_22F8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2340
// lab_2340
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
            OP_JNZ lab_23E8
            var_88 = 0;
            pri = fun_2608()
// lab_23E8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_22F8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1EE0
                case default:
                {
// switch_1EE0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F58
// lab_1F58
                    OP_JUMP lab_2340
                }
                case 0x0:
                {
// switch_1EE0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1F58
                }
                case 0x1:
                {
// switch_1EE0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1F58
                }
                case 0x2:
                {
// switch_1EE0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1F58
                }
                case 0x3:
                {
// switch_1EE0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F58
                }
                case 0x4:
                {
// switch_1EE0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1F58
                }
                case 0x5:
                {
// switch_1EE0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1F58
                }
            }
        }
        case 0x65:
        {
// switch_22F8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2098
                case default:
                {
// switch_2098_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2110
// lab_2110
                    OP_JUMP lab_2340
                }
                case 0x0:
                {
// switch_2098_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2110
                }
                case 0x1:
                {
// switch_2098_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2110
                }
                case 0x2:
                {
// switch_2098_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2110
                }
                case 0x3:
                {
// switch_2098_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2110
                }
                case 0x4:
                {
// switch_2098_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2110
                }
                case 0x5:
                {
// switch_2098_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2110
                }
            }
        }
        case 0x66:
        {
// switch_22F8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2250
                case default:
                {
// switch_2250_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22C8
// lab_22C8
                    OP_JUMP lab_2340
                }
                case 0x0:
                {
// switch_2250_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_22C8
                }
                case 0x1:
                {
// switch_2250_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_22C8
                }
                case 0x2:
                {
// switch_2250_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_22C8
                }
                case 0x3:
                {
// switch_2250_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22C8
                }
                case 0x4:
                {
// switch_2250_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_22C8
                }
                case 0x5:
                {
// switch_2250_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_22C8
                }
            }
        }
    }
}
// fun_2400
fun_2400() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1CE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2468
fun_2468() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2510
    pri = 1;
    return pri;
// lab_2510
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2558
fun_2558() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_25A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2468(var_8)
    arg_2 = pri;
// lab_25A8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1CE0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2608
fun_2608() {
    OP_JUMP lab_2620
// lab_2620
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2660
    pri = 0;
    return pri;
// lab_2660
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2620
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
    var_8 = 0;
    pri = fun_2608()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2750
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_2750
    pri = 0;
    return pri;
}
// fun_2760
fun_2760() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2790
fun_2790() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_27C0
// lab_27C0
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2800
    OP_JUMP lab_2830
// lab_2800
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27C0
// lab_2830
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2878
fun_2878() {
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
// fun_28E8
fun_28E8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2960()
    return pri;
}
// fun_2960
fun_2960() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_29A0
fun_29A0() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2A00(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2A50(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2A00
fun_2A00() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A50
fun_2A50() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AA0
fun_2AA0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AE8
fun_2AE8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2B60
fun_2B60() {
    var_8 = 0;
    pri = fun_2AE8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2BE0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2BE0
    pri = 1;
    return pri;
// lab_2BE0
    var_8 = 0;
    pri = fun_2AE8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2C10
fun_2C10() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_2C60
fun_2C60() {
    OP_JUMP lab_2C78
// lab_2C78
    pri = EvCameraMoveWait_()
    OP_JZER lab_2CB0
    pri = 0;
    return pri;
// lab_2CB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2C78
    pri = 0;
    return pri;
}
// fun_2CF0
fun_2CF0() {
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
// fun_2D88
fun_2D88() {
    pri = EvCameraShakeEnd()
    var_8 = arg_0;
    pri = EvCameraHandShakeEnd(var_8)
    pri = 0;
    return pri;
}
// fun_2DD8
fun_2DD8() {
    pri = arg_6;
    OP_JNZ lab_2E10
    var_8 = 0;
    pri = fun_0F68()
// lab_2E10
    pri = arg_1;
    switch (pri) {
// switch_4378
        case default:
        {
// switch_4378_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_46C8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_46C8
            pri = 1;
            OP_JUMP lab_46D0
// lab_46C8
            pri = 0;
// lab_46D0
            OP_JZER lab_4828
            var_16 = 11080;
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
            var_64 = 11184;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4888
// lab_4828
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_4888
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_48E8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4948
// lab_48E8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4948
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4948
            pri = arg_2;
            OP_JZER lab_4988
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4988
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4378_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x1:
        {
// switch_4378_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x2:
        {
// switch_4378_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x3:
        {
// switch_4378_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x4:
        {
// switch_4378_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x5:
        {
// switch_4378_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8368;
            var_72 = 8360;
            var_80 = 8352;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0x6:
        {
// switch_4378_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8392;
            var_72 = 8384;
            var_80 = 8376;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0x7:
        {
// switch_4378_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8416;
            var_72 = 8408;
            var_80 = 8400;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0x8:
        {
// switch_4378_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x9:
        {
// switch_4378_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8440;
            var_72 = 8432;
            var_80 = 8424;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0xa:
        {
// switch_4378_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8464;
            var_72 = 8456;
            var_80 = 8448;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0xb:
        {
// switch_4378_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8488;
            var_72 = 8480;
            var_80 = 8472;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0xc:
        {
// switch_4378_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8512;
            var_72 = 8504;
            var_80 = 8496;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0xd:
        {
// switch_4378_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8536;
            var_72 = 8528;
            var_80 = 8520;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0xe:
        {
// switch_4378_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8560;
            var_72 = 8552;
            var_80 = 8544;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0xf:
        {
// switch_4378_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x10:
        {
// switch_4378_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x11:
        {
// switch_4378_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8584;
            var_72 = 8576;
            var_80 = 8568;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0x12:
        {
// switch_4378_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8608;
            var_72 = 8600;
            var_80 = 8592;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0x13:
        {
// switch_4378_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x14:
        {
// switch_4378_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x15:
        {
// switch_4378_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x16:
        {
// switch_4378_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x17:
        {
// switch_4378_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x18:
        {
// switch_4378_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x19:
        {
// switch_4378_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8632;
            var_72 = 8624;
            var_80 = 8616;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4378_case_default
        }
        case 0x1a:
        {
// switch_4378_case_0x1a
            var_8 = 1;
            var_16 = 8640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 8776;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8856;
            var_88 = 8848;
            var_96 = 8840;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4378_case_default
        }
        case 0x1b:
        {
// switch_4378_case_0x1b
            var_8 = 3;
            var_16 = 8864;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 9000;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9080;
            var_88 = 9072;
            var_96 = 9064;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4378_case_default
        }
        case 0x1c:
        {
// switch_4378_case_0x1c
            var_8 = 2;
            var_16 = 9088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = 9224;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09E0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9304;
            var_88 = 9296;
            var_96 = 9288;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0CC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4378_case_default
        }
        case 0x1d:
        {
// switch_4378_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9312;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x1e:
        {
// switch_4378_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9448;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x1f:
        {
// switch_4378_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9584;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x20:
        {
// switch_4378_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9720;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x21:
        {
// switch_4378_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x22:
        {
// switch_4378_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9960;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x23:
        {
// switch_4378_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10096;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x24:
        {
// switch_4378_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10232;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x25:
        {
// switch_4378_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10368;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x26:
        {
// switch_4378_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10504;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x27:
        {
// switch_4378_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10648;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x28:
        {
// switch_4378_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
        case 0x29:
        {
// switch_4378_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10936;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4378_case_default
        }
    }
}
// fun_49B8
fun_49B8() {
    pri = arg_5;
    OP_JNZ lab_49F0
    var_8 = 0;
    pri = fun_0F68()
// lab_49F0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4A40
    OP_CONST_S -8, -1
// lab_4A40
    pri = arg_1;
    switch (pri) {
// switch_64F8
        case default:
        {
// switch_64F8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_69A0
            var_520 = 30944;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_69A0
            pri = 1;
            OP_JUMP lab_69A8
// lab_69A0
            pri = 0;
// lab_69A8
            OP_JZER lab_69F8
            var_8 = 64;
            var_16 = 31040;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6C50
// lab_69F8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6A60
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6A60
            pri = 1;
            OP_JUMP lab_6A68
// lab_6A60
            pri = 0;
// lab_6A68
            OP_JZER lab_6BF0
            var_16 = 31216;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A58(var_24, var_16)
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
            var_176 = 31320;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31336;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6C50
// lab_6BF0
            var_8 = 64;
            alt = 11200;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
// lab_6C50
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6CC0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6CC0
            var_8 = 0;
            pri = fun_0FA8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_64F8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1:
        {
// switch_64F8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2:
        {
// switch_64F8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x3:
        {
// switch_64F8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x4:
        {
// switch_64F8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x5:
        {
// switch_64F8_case_0x5
            var_8 = 2;
            var_16 = 21200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_64F8_case_default
        }
        case 0x6:
        {
// switch_64F8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x7:
        {
// switch_64F8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x8:
        {
// switch_64F8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x9:
        {
// switch_64F8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0xa:
        {
// switch_64F8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0xb:
        {
// switch_64F8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0xc:
        {
// switch_64F8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0xd:
        {
// switch_64F8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21848;
            var_72 = 21672;
            var_80 = 21488;
            var_88 = 21296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0xe:
        {
// switch_64F8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22504;
            var_72 = 22296;
            var_80 = 22080;
            var_88 = 21856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0xf:
        {
// switch_64F8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22896;
            var_72 = 22776;
            var_80 = 22648;
            var_88 = 22512;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x10:
        {
// switch_64F8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23240;
            var_72 = 23136;
            var_80 = 23024;
            var_88 = 22904;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x11:
        {
// switch_64F8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23584;
            var_72 = 23480;
            var_80 = 23368;
            var_88 = 23248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x12:
        {
// switch_64F8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x13:
        {
// switch_64F8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x14:
        {
// switch_64F8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24144;
            var_72 = 23968;
            var_80 = 23784;
            var_88 = 23592;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x15:
        {
// switch_64F8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x16:
        {
// switch_64F8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x17:
        {
// switch_64F8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x18:
        {
// switch_64F8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x19:
        {
// switch_64F8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1a:
        {
// switch_64F8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1b:
        {
// switch_64F8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1c:
        {
// switch_64F8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24536;
            var_72 = 24416;
            var_80 = 24288;
            var_88 = 24152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1d:
        {
// switch_64F8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1e:
        {
// switch_64F8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25000;
            var_72 = 24856;
            var_80 = 24704;
            var_88 = 24544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x1f:
        {
// switch_64F8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x20:
        {
// switch_64F8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x21:
        {
// switch_64F8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x22:
        {
// switch_64F8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x23:
        {
// switch_64F8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x24:
        {
// switch_64F8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25368;
            var_72 = 25256;
            var_80 = 25136;
            var_88 = 25008;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x25:
        {
// switch_64F8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25736;
            var_72 = 25624;
            var_80 = 25504;
            var_88 = 25376;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x26:
        {
// switch_64F8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x27:
        {
// switch_64F8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x28:
        {
// switch_64F8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x29:
        {
// switch_64F8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26176;
            var_72 = 26040;
            var_80 = 25896;
            var_88 = 25744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2a:
        {
// switch_64F8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26568;
            var_72 = 26448;
            var_80 = 26320;
            var_88 = 26184;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2b:
        {
// switch_64F8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26984;
            var_72 = 26856;
            var_80 = 26720;
            var_88 = 26576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2c:
        {
// switch_64F8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27424;
            var_72 = 27288;
            var_80 = 27144;
            var_88 = 26992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2d:
        {
// switch_64F8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2e:
        {
// switch_64F8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27744;
            var_72 = 27648;
            var_80 = 27544;
            var_88 = 27432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x2f:
        {
// switch_64F8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28136;
            var_72 = 28016;
            var_80 = 27888;
            var_88 = 27752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x30:
        {
// switch_64F8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28528;
            var_72 = 28408;
            var_80 = 28280;
            var_88 = 28144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x31:
        {
// switch_64F8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x32:
        {
// switch_64F8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x33:
        {
// switch_64F8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28920;
            var_72 = 28800;
            var_80 = 28672;
            var_88 = 28536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x34:
        {
// switch_64F8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29288;
            var_72 = 29176;
            var_80 = 29056;
            var_88 = 28928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x35:
        {
// switch_64F8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29776;
            var_72 = 29624;
            var_80 = 29464;
            var_88 = 29296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x36:
        {
// switch_64F8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30144;
            var_72 = 30032;
            var_80 = 29912;
            var_88 = 29784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x37:
        {
// switch_64F8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x38:
        {
// switch_64F8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30512;
            var_72 = 30400;
            var_80 = 30280;
            var_88 = 30152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0CC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_64F8_case_default
        }
        case 0x39:
        {
// switch_64F8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x3a:
        {
// switch_64F8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x3b:
        {
// switch_64F8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x3c:
        {
// switch_64F8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30520;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x3d:
        {
// switch_64F8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30696;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
        case 0x3e:
        {
// switch_64F8_case_0x3e
            var_8 = 4;
            var_16 = 30840;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_64F8_case_default
        }
    }
}
// fun_6CF0
fun_6CF0() {
    pri = arg_4;
    OP_JNZ lab_6D28
    var_8 = 0;
    pri = fun_0F68()
// lab_6D28
    pri = arg_1;
    switch (pri) {
// switch_8100
        case default:
        {
// switch_8100_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 31912;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_19A8(var_264)
            OP_JZER lab_86C8
            pri = arg_3;
            switch (pri) {
// switch_8670
                case default:
                {
// switch_8670_case_default
                    OP_JUMP lab_8980
// lab_8980
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_89F0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_89F0
                    var_8 = 0;
                    pri = fun_0FA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8670_case_0x1
                    var_8 = 32;
                    var_16 = 32064;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8670_case_default
                }
                case 0x2:
                {
// switch_8670_case_0x2
                    var_8 = 32;
                    var_16 = 32168;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8670_case_default
                }
                case 0x3:
                {
// switch_8670_case_0x3
                    var_8 = 32;
                    var_16 = 31968;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8670_case_default
                }
            }
// lab_86C8
            pri = arg_1;
            OP_JZER lab_8718
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8718
            pri = 0;
            OP_JUMP lab_8720
// lab_8718
            pri = 1;
// lab_8720
            OP_JZER lab_8788
            var_8 = 32264;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8788
            pri = 1;
            OP_JUMP lab_8790
// lab_8788
            pri = 0;
// lab_8790
            OP_JZER lab_87E0
            var_8 = 32;
            var_16 = 32360;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8980
// lab_87E0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8848
            var_8 = 32;
            var_16 = 32520;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8980
// lab_8848
            var_16 = 32640;
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
            var_176 = 32744;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32760;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_8100_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1:
        {
// switch_8100_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2:
        {
// switch_8100_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x3:
        {
// switch_8100_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x4:
        {
// switch_8100_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x5:
        {
// switch_8100_case_0x5
            var_8 = 1;
            var_16 = 31392;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0C90(var_40)
            OP_JUMP switch_8100_case_default
        }
        case 0x6:
        {
// switch_8100_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x7:
        {
// switch_8100_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x8:
        {
// switch_8100_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x9:
        {
// switch_8100_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0xa:
        {
// switch_8100_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0xb:
        {
// switch_8100_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0xc:
        {
// switch_8100_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0xd:
        {
// switch_8100_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0xe:
        {
// switch_8100_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0xf:
        {
// switch_8100_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x10:
        {
// switch_8100_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x11:
        {
// switch_8100_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x12:
        {
// switch_8100_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x13:
        {
// switch_8100_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x14:
        {
// switch_8100_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x15:
        {
// switch_8100_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x16:
        {
// switch_8100_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x17:
        {
// switch_8100_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x18:
        {
// switch_8100_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x19:
        {
// switch_8100_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1a:
        {
// switch_8100_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1b:
        {
// switch_8100_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1c:
        {
// switch_8100_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1d:
        {
// switch_8100_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1e:
        {
// switch_8100_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x1f:
        {
// switch_8100_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x20:
        {
// switch_8100_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x21:
        {
// switch_8100_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x22:
        {
// switch_8100_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x23:
        {
// switch_8100_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x24:
        {
// switch_8100_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x25:
        {
// switch_8100_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x26:
        {
// switch_8100_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x27:
        {
// switch_8100_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x28:
        {
// switch_8100_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x29:
        {
// switch_8100_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2a:
        {
// switch_8100_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2b:
        {
// switch_8100_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2c:
        {
// switch_8100_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2d:
        {
// switch_8100_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2e:
        {
// switch_8100_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x2f:
        {
// switch_8100_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x30:
        {
// switch_8100_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x31:
        {
// switch_8100_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x32:
        {
// switch_8100_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x33:
        {
// switch_8100_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x34:
        {
// switch_8100_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x35:
        {
// switch_8100_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x36:
        {
// switch_8100_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x37:
        {
// switch_8100_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x38:
        {
// switch_8100_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x39:
        {
// switch_8100_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x3a:
        {
// switch_8100_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x3b:
        {
// switch_8100_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x3c:
        {
// switch_8100_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31488;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x3d:
        {
// switch_8100_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31664;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
        case 0x3e:
        {
// switch_8100_case_0x3e
            var_8 = 3;
            var_16 = 31808;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A18(var_24, var_16, var_8)
            OP_JUMP switch_8100_case_default
        }
    }
}
// fun_8A20
fun_8A20() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8B20
        case default:
        {
// switch_8B20_case_default
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
// switch_8B20_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8B20_case_default
        }
        case 0x1:
        {
// switch_8B20_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8B20_case_default
        }
        case 0x2:
        {
// switch_8B20_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8B20_case_default
        }
        case 0x3:
        {
// switch_8B20_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8B20_case_default
        }
    }
}
// fun_8BE0
fun_8BE0() {
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
    pri = fun_2558(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2608()
    pri = 0;
    return pri;
}
// fun_8C78
fun_8C78() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8A20(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8BE0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8D20
fun_8D20() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8D70
// lab_8D70
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32808;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8DE8
    OP_JUMP lab_8E18
// lab_8DE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8D70
// lab_8E18
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8EA0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6CF0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1C78(var_56)
// lab_8EA0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8F08
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1510(var_24, var_16)
// lab_8F08
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1510(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8FC8
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
// lab_8FC8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_9008
    pri = 0;
    return pri;
// lab_9008
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9150
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 32928;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09E0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9118
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9150
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
// lab_9118
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1510(var_16, var_8)
}
// fun_91D8
fun_91D8() {
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
    pri = fun_8C78(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_26A0(var_112)
    var_128 = 0;
    pri = fun_2760()
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
    pri = fun_8D20(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9350
fun_9350() {
    pri = 33064;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_93D8
// lab_93D8
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9558
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9548
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9498
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9498
    pri = 0;
    OP_JUMP lab_94A0
// lab_9558
    pri = 0;
    return pri;
// lab_9548
    OP_JUMP lab_93D0
// lab_93D0
    OP_INC_P_S -936
// lab_9498
    pri = 1;
// lab_94A0
    OP_JZER lab_9518
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9510
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9518
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9510
}
// fun_9578
fun_9578() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9610
    var_8 = 1;
    var_16 = 0;
    var_24 = 33984;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02B0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0320()
    var_56 = 0;
    pri = fun_1C50()
// lab_9610
    pri = arg_4;
    OP_JZER lab_9648
    var_8 = 1;
    var_16 = 8;
    pri = fun_1CA8(var_8)
// lab_9648
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_96A0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_96A0
    pri = 0;
    OP_JUMP lab_96A8
// lab_96A0
    pri = 1;
// lab_96A8
    OP_JZER lab_9770
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9770
    var_16 = 0;
    pri = fun_03B0()
    OP_JZER lab_9748
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1B90(var_32, var_24)
    OP_JUMP lab_9770
// lab_9770
    pri = arg_2;
    OP_JZER lab_9848
    var_8 = 0;
    pri = fun_03B0()
    OP_JZER lab_9818
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1510(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_06A0(var_40)
    OP_JUMP lab_9848
// lab_9848
    pri = arg_3;
    OP_JZER lab_9880
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C18(var_8)
// lab_9880
    pri = 0;
    return pri;
// lab_9818
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1510(var_16, var_8)
// lab_9748
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B90(var_16, var_8)
}
// fun_9890
fun_9890() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9350(var_24)
    pri = 0;
    return pri;
}
// fun_98F8
fun_98F8() {
    pri = g_mode;
    switch (pri) {
// switch_9A30
        case default:
        {
// switch_9A30_case_default
            pri = CommandNOP()
            OP_JUMP lab_9AA8
// lab_9AA8
            pri = 0;
            return pri;
        }
        case 0xd0c69cb26706e7e7:
        {
// switch_9A30_case_0xd0c69cb26706e7e7
            var_8 = 0;
            pri = fun_E538()
            OP_JUMP lab_9AA8
        }
        case 0x0:
        {
// switch_9A30_case_0x0
            var_8 = 0;
            pri = fun_9AB8()
            OP_JUMP lab_9AA8
        }
        case 0x166126946ba2b653:
        {
// switch_9A30_case_0x166126946ba2b653
            var_8 = 0;
            pri = fun_E9A0()
            OP_JUMP lab_9AA8
        }
        case 0x16b47717fd07c4ac:
        {
// switch_9A30_case_0x16b47717fd07c4ac
            var_8 = 0;
            pri = fun_E4F0()
            OP_JUMP lab_9AA8
        }
        case 0x33f8d11b86e5ba50:
        {
// switch_9A30_case_0x33f8d11b86e5ba50
            var_8 = 0;
            pri = fun_E398()
            OP_JUMP lab_9AA8
        }
        case 0x4c212b1dd5616334:
        {
// switch_9A30_case_0x4c212b1dd5616334
            var_8 = 0;
            pri = fun_E918()
            OP_JUMP lab_9AA8
        }
    }
}
// fun_9AB8
fun_9AB8() {
    pri = 0;
    return pri;
}
// fun_9AD0
fun_9AD0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9578(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9B28
fun_9B28() {
    var_8 = 8541340050249644631;
    var_16 = 8;
    pri = fun_03D8(var_8)
    var_24 = -6397670319191688058;
    var_32 = 8;
    pri = fun_03D8(var_24)
    pri = 0;
    return pri;
}
// fun_9B90
fun_9B90() {
    var_8 = 0;
    pri = fun_0408()
    pri = 0;
    return pri;
}
// fun_9BC0
fun_9BC0() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0660(var_16, var_8)
    var_32 = 1;
    var_40 = -6397670319191688058;
    var_48 = 16;
    pri = fun_0660(var_40, var_32)
    var_56 = 1;
    var_64 = 8541340050249644631;
    var_72 = 16;
    pri = fun_0660(var_64, var_56)
    pri = EvCameraStart()
    var_80 = 0;
    var_88 = 4627701944602224230;
    var_96 = 0;
    OP_PUSH5_C 4656899497868048466, 4642671487551138693, 4657822295987008307, 4658267620186490143, 4643043386364117647
    var_104 = 4658381111776709181;
    var_112 = 1;
    pri = EvCameraMove(var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_120 = 0;
    pri = fun_2C60()
    var_128 = 0;
    var_136 = 4627701944602224230;
    var_144 = 3;
    OP_PUSH5_C 4655808276557945897, 4633867653967071150, 4657590101121454572, 4657468253242864435, 4642478325348371005
    var_152 = 4658359143534386217;
    var_160 = 125;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_29A0()
    var_176 = 1;
    var_184 = 1;
    OP_PUSH4_C 4640537203540230144, 4657259236082424218, 4657557643538202624, 8802641224559852288
    var_192 = 48;
    pri = fun_05D0(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 1;
    var_208 = 0;
    OP_PUSH5_C 4641240890982006784, 8541340050249644631, 4656419868905780019, 4657557643538202624, 4607182418800017408
    var_216 = 8802641224559852288;
    var_224 = 64;
    pri = fun_0750(var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_232 = 30;
    var_240 = 8;
    pri = fun_0090(var_232)
    var_248 = 1;
    var_256 = 0;
    var_264 = 1;
    OP_PUSH2_C 4607182418800017408, 8541340050249644631
    var_272 = 0;
    var_280 = 48;
    pri = fun_1808(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 6;
    var_296 = 8;
    pri = fun_0090(var_288)
    var_304 = 1;
    var_312 = 0;
    var_320 = 2;
    OP_PUSH2_C 4607182418800017408, -6397670319191688058
    var_328 = 0;
    var_336 = 48;
    pri = fun_1808(var_328, var_320, var_312, var_304, var_296, var_288)
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH2_C 8802641224559852288, -6397670319191688058
    var_376 = 48;
    pri = fun_0860(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    OP_PUSH2_C 8802641224559852288, 8541340050249644631
    var_416 = 48;
    pri = fun_0860(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    OP_PUSH2_C 4776137057439039746, -6397670319191688058
    var_464 = 56;
    pri = fun_2558(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = -6397670319191688058;
    var_480 = 8;
    pri = fun_08B8(var_472)
    var_488 = 8541340050249644631;
    var_496 = 8;
    pri = fun_08B8(var_488)
    var_504 = 8802641224559852288;
    var_512 = 8;
    pri = fun_08B8(var_504)
    var_520 = 1;
    var_528 = 8;
    pri = fun_26A0(var_520)
    var_536 = 0;
    pri = fun_2760()
    var_544 = 5;
    var_552 = 5;
    var_560 = 8541340050249644631;
    var_568 = 24;
    pri = fun_1640(var_560, var_552, var_544)
    var_576 = 1;
    var_584 = 1;
    var_592 = -1;
    var_600 = -1;
    var_608 = 0;
    var_616 = 1;
    var_624 = 8541340050249644631;
    var_632 = 56;
    pri = fun_49B8(var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_640 = 0;
    var_648 = 3;
    var_656 = 0;
    var_664 = 100;
    var_672 = -1;
    OP_PUSH2_C -5082476566258544019, 8541340050249644631
    var_680 = 56;
    pri = fun_2558(var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_688 = 1;
    var_696 = 8;
    pri = fun_26A0(var_688)
    var_704 = 0;
    var_712 = 5851413849830820777;
    var_720 = 0;
    var_728 = 24;
    pri = fun_2790(var_720, var_712, var_704)
    var_736 = 0;
    var_744 = 5851410551295936144;
    var_752 = 1;
    var_760 = 24;
    pri = fun_2790(var_752, var_744, var_736)
    var_768 = 1;
    var_776 = 3;
    var_784 = 0;
    var_792 = 1;
    var_800 = 8541340050249644631;
    var_808 = 40;
    pri = fun_6CF0(var_800, var_792, var_784, var_776, var_768)
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 1;
    var_856 = 32;
    pri = fun_2878(var_848, var_840, var_832, var_824)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A320
        case default:
        {
// switch_A320_case_default
            var_8 = 1;
            var_16 = -1;
            var_24 = -1;
            var_32 = 3;
            var_40 = 0;
            var_48 = 19;
            var_56 = 8802641224559852288;
            var_64 = 56;
            pri = fun_2DD8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 8;
            var_80 = -6397670319191688058;
            var_88 = 16;
            pri = fun_1550(var_80, var_72)
            var_96 = 0;
            var_104 = 4627701944602224230;
            var_112 = 0;
            OP_PUSH5_C 4653822470597252219, 4633389146506663035, 4657221566814056612, 4656289027022074675, 4639981290461226598
            var_120 = 4658002132108847350;
            var_128 = 1;
            pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 0;
            pri = fun_2C60()
            var_144 = 0;
            var_152 = 4627701944602224230;
            var_160 = 3;
            OP_PUSH5_C 4653787022342372721, 4633389146506663035, 4657249560380099789, 4656253578767195177, 4639981290461226598
            var_168 = 4658030125674890527;
            var_176 = 60;
            pri = EvCameraMove(var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
            var_184 = 1;
            var_192 = -1;
            var_200 = -1;
            var_208 = 3;
            var_216 = 0;
            var_224 = 1;
            var_232 = -6397670319191688058;
            var_240 = 56;
            pri = fun_2DD8(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
            var_248 = 0;
            var_256 = 3;
            var_264 = 0;
            var_272 = 100;
            var_280 = -1;
            OP_PUSH2_C 4776135957927411535, -6397670319191688058
            var_288 = 56;
            pri = fun_2558(var_280, var_272, var_264, var_256, var_248, var_240, var_232)
            var_296 = 8541340050249644631;
            var_304 = 8;
            pri = fun_0A90(var_296)
            var_312 = -6397670319191688058;
            var_320 = 8;
            pri = fun_0A90(var_312)
            var_328 = 1;
            var_336 = 8;
            pri = fun_26A0(var_328)
            var_344 = 0;
            pri = fun_2760()
            var_352 = 7;
            var_360 = 8541340050249644631;
            var_368 = 16;
            pri = fun_1550(var_360, var_352)
            var_376 = 8541340050249644631;
            var_384 = 8;
            pri = fun_1608(var_376)
            var_392 = 0;
            var_400 = 4627701944602224230;
            var_408 = 0;
            OP_PUSH5_C 4654946875168281068, 4631572225531995750, 4657496070887047168, 4657244348694984131, 4641623696950333276
            var_416 = 4657749486327016980;
            var_424 = 1;
            pri = EvCameraMove(var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
            var_432 = 0;
            pri = fun_2C60()
            var_440 = 0;
            var_448 = 4627701944602224230;
            var_456 = 3;
            OP_PUSH5_C 4654971152385022362, 4631572225531995750, 4657449297662401577, 4657199576581501092, 4641609975045218632
            var_464 = 4657920504365601260;
            var_472 = 280;
            pri = EvCameraMove(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400)
            var_480 = 1;
            var_488 = 1;
            var_496 = -1;
            var_504 = -1;
            var_512 = 0;
            var_520 = 6;
            var_528 = 8541340050249644631;
            var_536 = 56;
            pri = fun_49B8(var_528, var_520, var_512, var_504, var_496, var_488, var_480)
            var_544 = 0;
            var_552 = 3;
            var_560 = 0;
            var_568 = 100;
            var_576 = -1;
            OP_PUSH2_C -5082479864793428652, 8541340050249644631
            var_584 = 56;
            pri = fun_2558(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
            var_592 = 1;
            var_600 = 8;
            pri = fun_26A0(var_592)
            var_608 = 0;
            pri = fun_2760()
            var_616 = -6397670319191688058;
            var_624 = 8;
            pri = fun_1590(var_616)
            var_632 = 1;
            var_640 = 3;
            var_648 = 0;
            var_656 = 6;
            var_664 = 8541340050249644631;
            var_672 = 40;
            pri = fun_6CF0(var_664, var_656, var_648, var_640, var_632)
            var_680 = 1;
            var_688 = 1;
            var_696 = -1;
            var_704 = -1;
            var_712 = 0;
            var_720 = 1;
            var_728 = -6397670319191688058;
            var_736 = 56;
            pri = fun_49B8(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
            var_744 = 0;
            var_752 = 3;
            var_760 = 0;
            var_768 = 100;
            var_776 = -1;
            OP_PUSH2_C 4776134858415783324, -6397670319191688058
            var_784 = 56;
            pri = fun_2558(var_776, var_768, var_760, var_752, var_744, var_736, var_728)
            var_792 = 8541340050249644631;
            var_800 = 8;
            pri = fun_0A90(var_792)
            var_808 = 1;
            var_816 = 8;
            pri = fun_26A0(var_808)
            var_824 = 0;
            pri = fun_2760()
            var_832 = 1;
            var_840 = 3;
            var_848 = 0;
            var_856 = 1;
            var_864 = -6397670319191688058;
            var_872 = 40;
            pri = fun_6CF0(var_864, var_856, var_848, var_840, var_832)
            var_880 = -6397670319191688058;
            var_888 = 8;
            pri = fun_0A90(var_880)
            var_896 = 0;
            var_904 = 0;
            pri = float(var_904)
            var_912 = pri;
            var_920 = 1;
            pri = float(var_920)
            var_928 = pri;
            var_936 = 0;
            pri = float(var_936)
            var_944 = pri;
            var_952 = 1;
            var_960 = 30;
            var_968 = 2;
            var_976 = 3;
            pri = float(var_976)
            var_984 = pri;
            var_992 = 2;
            var_1000 = 72;
            pri = fun_2CF0(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
            var_1008 = 34032;
            pri = SoundPostEvent(var_1008)
            var_1016 = 34336;
            pri = SoundPostEvent(var_1016)
            var_1024 = 0;
            var_1032 = 4627701944602224230;
            var_1040 = 0;
            OP_PUSH5_C 4656743631099694940, 4639929217590535127, 4657784912591663923, 4658099504858603192, 4644359281880239964
            var_1048 = 4658258868073933046;
            var_1056 = 1;
            pri = EvCameraMove(var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
            var_1064 = 0;
            pri = fun_2C60()
            var_1072 = 0;
            var_1080 = 4627701944602224230;
            var_1088 = 3;
            OP_PUSH5_C 4658107047508369736, 4644374763003959050, 4658261506901839708, 4659462921267277988, 4647163652257580319
            var_1096 = 4658735462384108831;
            var_1104 = 10;
            pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
            var_1112 = 0;
            var_1120 = 0;
            var_1128 = 0;
            var_1136 = 180;
            pri = float(var_1136)
            var_1144 = pri;
            var_1152 = -6397670319191688058;
            var_1160 = 40;
            pri = fun_0810(var_1152, var_1144, var_1136, var_1128, var_1120)
            var_1168 = 0;
            var_1176 = 0;
            var_1184 = 0;
            var_1192 = 180;
            pri = float(var_1192)
            var_1200 = pri;
            var_1208 = 8541340050249644631;
            var_1216 = 40;
            pri = fun_0810(var_1208, var_1200, var_1192, var_1184, var_1176)
            var_1224 = 3;
            var_1232 = 0;
            var_1240 = 101;
            var_1248 = -8529733682519812866;
            var_1256 = 32;
            pri = fun_2400(var_1248, var_1240, var_1232, var_1224)
            var_1264 = 20;
            var_1272 = 8;
            pri = fun_0090(var_1264)
            var_1280 = 8541340050249644631;
            var_1288 = 8;
            pri = fun_08B8(var_1280)
            var_1296 = -6397670319191688058;
            var_1304 = 8;
            pri = fun_08B8(var_1296)
            var_1312 = 1;
            var_1320 = 8;
            pri = fun_26A0(var_1312)
            var_1328 = 0;
            pri = fun_2760()
            var_1336 = 0;
            var_1344 = 4627701944602224230;
            var_1352 = 0;
            OP_PUSH5_C 4656550974672276029, -4607520188772070195, 4657178443968015237, 4654521803972982866, 4642774929605079859
            var_1360 = 4658105288289765294;
            var_1368 = 1;
            pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
            var_1376 = 0;
            pri = fun_2C60()
            var_1384 = 0;
            var_1392 = 4627701944602224230;
            var_1400 = 3;
            OP_PUSH5_C 4656603839191339500, -4607520188772070195, 4657207383114058301, 4654573041214837228, 4642752059763222118
            var_1408 = 4658134161465110692;
            var_1416 = 60;
            pri = EvCameraMove(var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
            var_1424 = 20;
            var_1432 = 8;
            pri = fun_2D88(var_1424)
            var_1440 = 2;
            var_1448 = 6;
            var_1456 = 8541340050249644631;
            var_1464 = 24;
            pri = fun_1640(var_1456, var_1448, var_1440)
            var_1472 = 6;
            var_1480 = 6;
            var_1488 = -6397670319191688058;
            var_1496 = 24;
            pri = fun_1640(var_1488, var_1480, var_1472)
            var_1504 = 25;
            var_1512 = 8;
            pri = fun_0090(var_1504)
            var_1520 = 34504;
            pri = SoundPostEvent(var_1520)
            var_1528 = 1;
            var_1536 = -1;
            var_1544 = -1;
            var_1552 = 3;
            var_1560 = 0;
            var_1568 = 1;
            var_1576 = 8541340050249644631;
            var_1584 = 56;
            pri = fun_2DD8(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
            var_1592 = 8541340050249644631;
            var_1600 = 8;
            pri = fun_0A90(var_1592)
            var_1608 = 5;
            var_1616 = 8;
            pri = fun_0090(var_1608)
            var_1624 = 8389417158930239541;
            var_1632 = 8;
            pri = fun_03D8(var_1624)
            var_1640 = 0;
            pri = fun_0408()
            var_1648 = 1;
            var_1656 = 8389417158930239541;
            var_1664 = 16;
            pri = fun_0660(var_1656, var_1648)
            var_1672 = 1;
            var_1680 = 0;
            OP_PUSH3_C 4653859018363759493, 4657536752817274880, 8389417158930239541
            var_1688 = 40;
            pri = fun_0580(var_1680, var_1672, var_1664, var_1656, var_1648)
            var_1696 = 0;
            var_1704 = 4627701944602224230;
            var_1712 = 0;
            OP_PUSH5_C 4652492721234619924, 4634196979689822618, 4657300533739163484, 4655281786410101637, 4640024215395174973
            var_1720 = 4657736358158181335;
            var_1728 = 1;
            pri = EvCameraMove(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664, var_1656)
            var_1736 = 0;
            pri = fun_2C60()
            var_1744 = 0;
            var_1752 = 4627701944602224230;
            var_1760 = 3;
            OP_PUSH5_C 4655329725117072671, 4629859450298711409, 4657532882536345108, 4657362744107063050, 4642920592905527624
            var_1768 = 4657950696954899988;
            var_1776 = 60;
            pri = EvCameraMove(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
            var_1784 = 34656;
            pri = SoundPostEvent(var_1784)
            var_1792 = 1;
            var_1800 = 0;
            var_1808 = 50;
            pri = float(var_1808)
            var_1816 = pri;
            OP_PUSH5_C 8541340050249644631, 4655481897526356869, 4657272870026608640, 4611686018427387904, 8389417158930239541
            var_1824 = 64;
            pri = fun_0750(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
            var_1832 = 0;
            var_1840 = 3;
            var_1848 = 0;
            var_1856 = 100;
            var_1864 = -1;
            OP_PUSH2_C 8568974220696028927, 8389417158930239541
            var_1872 = 56;
            pri = fun_2558(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
            var_1880 = 8389417158930239541;
            var_1888 = 8;
            pri = fun_08B8(var_1880)
            var_1896 = 1;
            var_1904 = 8;
            pri = fun_26A0(var_1896)
            var_1912 = 0;
            pri = fun_2760()
            var_1920 = 5;
            var_1928 = 5;
            var_1936 = 8541340050249644631;
            var_1944 = 24;
            pri = fun_1640(var_1936, var_1928, var_1920)
            var_1952 = -6397670319191688058;
            var_1960 = 8;
            pri = fun_1608(var_1952)
            var_1968 = 0;
            var_1976 = 0;
            var_1984 = 0;
            var_1992 = 0;
            OP_PUSH2_C 8389417158930239541, 8541340050249644631
            var_2000 = 48;
            pri = fun_0860(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952)
            var_2008 = 0;
            var_2016 = 0;
            var_2024 = 0;
            var_2032 = 0;
            OP_PUSH2_C 8389417158930239541, -6397670319191688058
            var_2040 = 48;
            pri = fun_0860(var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
            var_2048 = 0;
            var_2056 = 0;
            var_2064 = 0;
            var_2072 = 0;
            OP_PUSH2_C 8389417158930239541, 8802641224559852288
            var_2080 = 48;
            pri = fun_0860(var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
            var_2088 = 0;
            var_2096 = 3;
            var_2104 = 0;
            var_2112 = 100;
            var_2120 = -1;
            OP_PUSH2_C -5082478765281800441, 8541340050249644631
            var_2128 = 56;
            pri = fun_2558(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
            var_2136 = 8802641224559852288;
            var_2144 = 8;
            pri = fun_08B8(var_2136)
            var_2152 = 8541340050249644631;
            var_2160 = 8;
            pri = fun_08B8(var_2152)
            var_2168 = -6397670319191688058;
            var_2176 = 8;
            pri = fun_08B8(var_2168)
            var_2184 = 1;
            var_2192 = 8;
            pri = fun_26A0(var_2184)
            var_2200 = 0;
            pri = fun_2760()
            var_2208 = 7;
            var_2216 = 8541340050249644631;
            var_2224 = 16;
            pri = fun_1550(var_2216, var_2208)
            var_2232 = 1;
            var_2240 = -1;
            var_2248 = -1;
            var_2256 = 3;
            var_2264 = 0;
            var_2272 = 1;
            var_2280 = 8389417158930239541;
            var_2288 = 56;
            pri = fun_2DD8(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
            var_2296 = 0;
            var_2304 = 3;
            var_2312 = 0;
            var_2320 = 100;
            var_2328 = -1;
            OP_PUSH2_C 8568983016789054615, 8389417158930239541
            var_2336 = 56;
            pri = fun_2558(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
            var_2344 = 8389417158930239541;
            var_2352 = 8;
            pri = fun_0A90(var_2344)
            var_2360 = 1;
            var_2368 = 8;
            pri = fun_26A0(var_2360)
            var_2376 = 0;
            pri = fun_2760()
            var_2384 = 4;
            var_2392 = 4;
            var_2400 = 8389417158930239541;
            var_2408 = 24;
            pri = fun_1640(var_2400, var_2392, var_2384)
            var_2416 = 0;
            var_2424 = 0;
            var_2432 = 0;
            var_2440 = 0;
            OP_PUSH2_C 8802641224559852288, 8389417158930239541
            var_2448 = 48;
            pri = fun_0860(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
            var_2456 = 0;
            var_2464 = 3;
            var_2472 = 0;
            var_2480 = 100;
            var_2488 = -1;
            OP_PUSH2_C 8568975320207657138, 8389417158930239541
            var_2496 = 56;
            pri = fun_2558(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
            var_2504 = 8389417158930239541;
            var_2512 = 8;
            pri = fun_08B8(var_2504)
            var_2520 = 1;
            var_2528 = 8;
            pri = fun_26A0(var_2520)
            var_2536 = 0;
            pri = fun_2760()
            var_2544 = 8389417158930239541;
            var_2552 = 8;
            pri = fun_1608(var_2544)
            var_2560 = 1;
            var_2568 = 1;
            var_2576 = -1;
            var_2584 = -1;
            var_2592 = 0;
            var_2600 = 1;
            var_2608 = 8389417158930239541;
            var_2616 = 56;
            pri = fun_49B8(var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
            var_2624 = 0;
            var_2632 = 3;
            var_2640 = 0;
            var_2648 = 100;
            var_2656 = -1;
            OP_PUSH2_C 8568976419719285349, 8389417158930239541
            var_2664 = 56;
            pri = fun_2558(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608)
            var_2672 = 1;
            var_2680 = 8;
            pri = fun_26A0(var_2672)
            var_2688 = 0;
            pri = fun_2760()
            var_2696 = 7;
            var_2704 = 7;
            var_2712 = 8389417158930239541;
            var_2720 = 24;
            pri = fun_1640(var_2712, var_2704, var_2696)
            var_2728 = 1;
            var_2736 = 3;
            var_2744 = 0;
            var_2752 = 1;
            var_2760 = 8389417158930239541;
            var_2768 = 40;
            pri = fun_6CF0(var_2760, var_2752, var_2744, var_2736, var_2728)
            var_2776 = 0;
            var_2784 = 3;
            var_2792 = 0;
            var_2800 = 100;
            var_2808 = -1;
            OP_PUSH2_C 8568968723137887872, 8389417158930239541
            var_2816 = 56;
            pri = fun_2558(var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
            var_2824 = 8389417158930239541;
            var_2832 = 8;
            pri = fun_0A90(var_2824)
            var_2840 = 1;
            var_2848 = 8;
            pri = fun_26A0(var_2840)
            var_2856 = 0;
            pri = fun_2760()
            var_2864 = 3;
            var_2872 = 3;
            var_2880 = 8389417158930239541;
            var_2888 = 24;
            pri = fun_1640(var_2880, var_2872, var_2864)
            var_2896 = 0;
            var_2904 = 4627701944602224230;
            var_2912 = 0;
            OP_PUSH5_C 4653525514496822477, -4588983654180789944, 4656999773328501637, 4656153347287207117, 4640804956611826156
            var_2920 = 4657381237892642243;
            var_2928 = 1;
            pri = EvCameraMove(var_2928, var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856)
            var_2936 = 0;
            pri = fun_2C60()
            var_2944 = 0;
            var_2952 = 4627701944602224230;
            var_2960 = 3;
            OP_PUSH5_C 4653406019573115781, -4588522035218984468, 4656982423035015332, 4656033852363500421, 4640574498974644306
            var_2968 = 4657363887599155937;
            var_2976 = 120;
            pri = EvCameraMove(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
            var_2984 = 1;
            var_2992 = 1;
            var_3000 = 60;
            var_3008 = 3;
            var_3016 = 8389417158930239541;
            var_3024 = 40;
            pri = fun_10A0(var_3016, var_3008, var_3000, var_2992, var_2984)
            var_3032 = 0;
            var_3040 = 3;
            var_3048 = 0;
            var_3056 = 100;
            var_3064 = -1;
            OP_PUSH2_C 8568969822649516083, 8389417158930239541
            var_3072 = 56;
            pri = fun_2558(var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016)
            var_3080 = 1;
            var_3088 = 8;
            pri = fun_26A0(var_3080)
            var_3096 = 0;
            pri = fun_2760()
            var_3104 = 8;
            var_3112 = 8;
            var_3120 = 8541340050249644631;
            var_3128 = 24;
            pri = fun_1640(var_3120, var_3112, var_3104)
            var_3136 = 0;
            var_3144 = 4627701944602224230;
            var_3152 = 0;
            OP_PUSH5_C 4654634613865992684, -4595216917540047421, 4657807320638637998, 4656716473162488873, 4643180253571543204
            var_3160 = 4656960300861064479;
            var_3168 = 1;
            pri = EvCameraMove(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096)
            var_3176 = 0;
            pri = fun_2C60()
            var_3184 = 0;
            var_3192 = 4627701944602224230;
            var_3200 = 3;
            OP_PUSH5_C 4654732118557143859, -4599683925420445532, 4657767650259107840, 4656767996277366456, 4643427951551048581
            var_3208 = 4656920630481534321;
            var_3216 = 120;
            pri = EvCameraMove(var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144)
            var_3224 = 1;
            var_3232 = 1;
            var_3240 = -1;
            var_3248 = -1;
            var_3256 = 0;
            var_3264 = 6;
            var_3272 = 8541340050249644631;
            var_3280 = 56;
            pri = fun_49B8(var_3272, var_3264, var_3256, var_3248, var_3240, var_3232, var_3224)
            var_3288 = 0;
            var_3296 = 3;
            var_3304 = 0;
            var_3312 = 100;
            var_3320 = -1;
            OP_PUSH2_C -5082482063816685074, 8541340050249644631
            var_3328 = 56;
            pri = fun_2558(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
            var_3336 = 1;
            var_3344 = 8;
            pri = fun_26A0(var_3336)
            var_3352 = 0;
            pri = fun_2760()
            var_3360 = 8389417158930239541;
            var_3368 = 8;
            pri = fun_16A8(var_3360)
            var_3376 = 5;
            var_3384 = 5;
            var_3392 = 8541340050249644631;
            var_3400 = 24;
            pri = fun_1640(var_3392, var_3384, var_3376)
            var_3408 = 1;
            var_3416 = 1;
            var_3424 = 60;
            OP_PUSH2_C 8541340050249644631, 8389417158930239541
            var_3432 = 40;
            pri = fun_0FE8(var_3424, var_3416, var_3408, var_3400, var_3392)
            var_3440 = 1;
            var_3448 = 3;
            var_3456 = 0;
            var_3464 = 6;
            var_3472 = 8541340050249644631;
            var_3480 = 40;
            pri = fun_6CF0(var_3472, var_3464, var_3456, var_3448, var_3440)
            var_3488 = 0;
            var_3496 = 3;
            var_3504 = 0;
            var_3512 = 100;
            var_3520 = -1;
            OP_PUSH2_C -5082480964305056863, 8541340050249644631
            var_3528 = 56;
            pri = fun_2558(var_3520, var_3512, var_3504, var_3496, var_3488, var_3480, var_3472)
            var_3536 = 8541340050249644631;
            var_3544 = 8;
            pri = fun_0A90(var_3536)
            var_3552 = 1;
            var_3560 = 8;
            pri = fun_26A0(var_3552)
            var_3568 = 0;
            pri = fun_2760()
            var_3576 = 8541340050249644631;
            var_3584 = 8;
            pri = fun_16A8(var_3576)
            var_3592 = 0;
            var_3600 = 4627701944602224230;
            var_3608 = 0;
            OP_PUSH5_C 4654680617432498831, 4616707532011906007, 4657441601081007145, 4657304426010325811, 4642155684656316416
            var_3616 = 4657823285547473306;
            var_3624 = 1;
            pri = EvCameraMove(var_3624, var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560, var_3552)
            var_3632 = 0;
            pri = fun_2C60()
            var_3640 = 0;
            var_3648 = 0;
            var_3656 = 0;
            var_3664 = 0;
            OP_PUSH2_C 8802641224559852288, 8541340050249644631
            var_3672 = 48;
            pri = fun_0860(var_3664, var_3656, var_3648, var_3640, var_3632, var_3624)
            var_3680 = 0;
            var_3688 = 3;
            var_3696 = 0;
            var_3704 = 100;
            var_3712 = -1;
            OP_PUSH2_C -5082484262839941496, 8541340050249644631
            var_3720 = 56;
            pri = fun_2558(var_3712, var_3704, var_3696, var_3688, var_3680, var_3672, var_3664)
            var_3728 = 8541340050249644631;
            var_3736 = 8;
            pri = fun_08B8(var_3728)
            var_3744 = 1;
            var_3752 = 8;
            pri = fun_26A0(var_3744)
            var_3760 = 0;
            var_3768 = 5851411650807564355;
            var_3776 = 0;
            var_3784 = 24;
            pri = fun_2790(var_3776, var_3768, var_3760)
            var_3792 = 0;
            var_3800 = 5851417148365705410;
            var_3808 = 1;
            var_3816 = 24;
            pri = fun_2790(var_3808, var_3800, var_3792)
            var_3824 = 0;
            var_3832 = 1;
            var_3840 = 0;
            var_3848 = 1;
            var_3856 = 32;
            pri = fun_2878(var_3848, var_3840, var_3832, var_3824)
            var_8 = pri;
            pri = var_8;
            switch (pri) {
// switch_C438
                case default:
                {
// switch_C438_case_default
                    pri = 1;
                    return pri;
                }
                case 0x0:
                {
// switch_C438_case_0x0
                    var_8 = 0;
                    pri = fun_C488()
                    pri = 1;
                    return pri;
                    OP_JUMP switch_C438_case_default
                }
                case 0x1:
                {
// switch_C438_case_0x1
                    var_8 = 0;
                    pri = fun_DE80()
                    pri = 0;
                    return pri;
                    OP_JUMP switch_C438_case_default
                }
            }
        }
        case 0x0:
        {
// switch_A320_case_0x0
            OP_JUMP switch_A320_case_default
        }
        case 0x1:
        {
// switch_A320_case_0x1
            OP_JUMP switch_A320_case_default
        }
    }
}
// fun_C488
fun_C488() {
    var_8 = 1;
    OP_PUSH4_C 4640537203540230144, 4656419868905780019, 4657557643538202624, 8802641224559852288
    var_16 = 40;
    pri = fun_0580(var_8, var_0, var_-8, var_-16, var_-24)
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    pri = float(var_40)
    var_48 = pri;
    OP_PUSH3_C 4655719260096561152, 4657568638654480384, 8541340050249644631
    var_56 = 48;
    pri = fun_05D0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 4627701944602224230;
    var_80 = 0;
    OP_PUSH5_C 4654680617432498831, 4616707532011906007, 4657441601081007145, 4657304426010325811, 4642155684656316416
    var_88 = 4657823285547473306;
    var_96 = 1;
    pri = EvCameraMove(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    var_104 = 0;
    pri = fun_2C60()
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH2_C 8541340050249644631, 8802641224559852288
    var_144 = 48;
    pri = fun_0860(var_136, var_128, var_120, var_112, var_104, var_96)
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_152 = 3;
    OP_PUSH5_C 4655204380791506207, 4629494940203871109, 4657484482034490409, 4657256773176377999, 4643130643606897951
    var_160 = 4658005804477684122;
    var_168 = 360;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 3;
    var_208 = 0;
    var_216 = 0;
    var_224 = 8541340050249644631;
    var_232 = 56;
    pri = fun_2DD8(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 0;
    var_248 = 3;
    var_256 = 0;
    var_264 = 100;
    var_272 = -1;
    OP_PUSH2_C -5082483163328313285, 8541340050249644631
    var_280 = 56;
    pri = fun_2558(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 8541340050249644631;
    var_296 = 8;
    pri = fun_0A90(var_288)
    var_304 = 8802641224559852288;
    var_312 = 8;
    pri = fun_08B8(var_304)
    var_320 = 1;
    var_328 = 8;
    pri = fun_26A0(var_320)
    var_336 = 0;
    pri = fun_2760()
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    OP_PUSH2_C 8802641224559852288, -6397670319191688058
    var_376 = 48;
    pri = fun_0860(var_368, var_360, var_352, var_344, var_336, var_328)
    var_384 = 1;
    var_392 = 1;
    var_400 = 70;
    OP_PUSH2_C -6397670319191688058, 8802641224559852288
    var_408 = 40;
    pri = fun_0FE8(var_400, var_392, var_384, var_376, var_368)
    var_416 = 1;
    var_424 = 1;
    var_432 = 70;
    OP_PUSH2_C -6397670319191688058, 8541340050249644631
    var_440 = 40;
    pri = fun_0FE8(var_432, var_424, var_416, var_408, var_400)
    var_448 = 0;
    var_456 = 3;
    var_464 = 0;
    var_472 = 100;
    var_480 = -1;
    OP_PUSH2_C 4776133758904155113, -6397670319191688058
    var_488 = 56;
    pri = fun_2558(var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_496 = -6397670319191688058;
    var_504 = 8;
    pri = fun_08B8(var_496)
    var_512 = 1;
    var_520 = 8;
    pri = fun_26A0(var_512)
    var_528 = 0;
    pri = fun_2760()
    var_536 = 2;
    var_544 = 6;
    var_552 = -6397670319191688058;
    var_560 = 24;
    pri = fun_1640(var_552, var_544, var_536)
    var_568 = 1;
    var_576 = -1;
    var_584 = -1;
    var_592 = 3;
    var_600 = 0;
    var_608 = 1;
    var_616 = -6397670319191688058;
    var_624 = 56;
    pri = fun_2DD8(var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    var_656 = 100;
    var_664 = -1;
    OP_PUSH2_C 4776132659392526902, -6397670319191688058
    var_672 = 56;
    pri = fun_2558(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = -6397670319191688058;
    var_688 = 8;
    pri = fun_0A90(var_680)
    var_696 = 1;
    var_704 = 8;
    pri = fun_26A0(var_696)
    var_712 = 0;
    pri = fun_2760()
    var_720 = -6397670319191688058;
    var_728 = 8;
    pri = fun_16A8(var_720)
    var_736 = 1;
    var_744 = 1;
    var_752 = 70;
    OP_PUSH2_C 8389417158930239541, -6397670319191688058
    var_760 = 40;
    pri = fun_0FE8(var_752, var_744, var_736, var_728, var_720)
    var_768 = 0;
    var_776 = 3;
    var_784 = 0;
    var_792 = 100;
    var_800 = -1;
    OP_PUSH2_C 4776131559880898691, -6397670319191688058
    var_808 = 56;
    pri = fun_2558(var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_816 = 1;
    var_824 = 8;
    pri = fun_26A0(var_816)
    var_832 = 0;
    pri = fun_2760()
    var_840 = 7;
    var_848 = 8389417158930239541;
    var_856 = 16;
    pri = fun_1550(var_848, var_840)
    var_864 = 1;
    var_872 = 1;
    var_880 = 70;
    OP_PUSH2_C 8389417158930239541, 8802641224559852288
    var_888 = 40;
    pri = fun_0FE8(var_880, var_872, var_864, var_856, var_848)
    var_896 = 1;
    var_904 = 1;
    var_912 = 70;
    OP_PUSH2_C 8389417158930239541, 8541340050249644631
    var_920 = 40;
    pri = fun_0FE8(var_912, var_904, var_896, var_888, var_880)
    var_928 = 0;
    var_936 = 0;
    var_944 = 0;
    var_952 = 0;
    OP_PUSH2_C -6397670319191688058, 8389417158930239541
    var_960 = 48;
    pri = fun_0860(var_952, var_944, var_936, var_928, var_920, var_912)
    var_968 = 0;
    var_976 = 3;
    var_984 = 0;
    var_992 = 100;
    var_1000 = -1;
    OP_PUSH2_C 8568970922161144294, 8389417158930239541
    var_1008 = 56;
    pri = fun_2558(var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1016 = 8389417158930239541;
    var_1024 = 8;
    pri = fun_08B8(var_1016)
    var_1032 = 1;
    var_1040 = 8;
    pri = fun_26A0(var_1032)
    var_1048 = 0;
    pri = fun_2760()
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_1056 = 0;
    OP_PUSH5_C 4653497542921011855, -4591760404826040566, 4656878695108050944, 4656094149581167657, 4640292672154212762
    var_1064 = 4657396015328919552;
    var_1072 = 1;
    pri = EvCameraMove(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1080 = 0;
    pri = fun_2C60()
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_1088 = 3;
    OP_PUSH5_C 4653481841894967214, -4591760404826040566, 4656898398356420690, 4656078448555123016, 4640292672154212762
    var_1096 = 4657415740567521853;
    var_1104 = 240;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 1;
    var_1120 = -1;
    var_1128 = -1;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 1;
    var_1160 = 8389417158930239541;
    var_1168 = 56;
    pri = fun_2DD8(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 0;
    var_1184 = 3;
    var_1192 = 0;
    var_1200 = 100;
    var_1208 = -1;
    OP_PUSH2_C 8569964880672857813, 8389417158930239541
    var_1216 = 56;
    pri = fun_2558(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1224 = 8389417158930239541;
    var_1232 = 8;
    pri = fun_0A90(var_1224)
    var_1240 = 1;
    var_1248 = 8;
    pri = fun_26A0(var_1240)
    var_1256 = 0;
    pri = fun_2760()
    var_1264 = 1;
    var_1272 = 1;
    var_1280 = 30;
    OP_PUSH2_C -6397670319191688058, 8541340050249644631
    var_1288 = 40;
    pri = fun_0FE8(var_1280, var_1272, var_1264, var_1256, var_1248)
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_1296 = 0;
    OP_PUSH5_C 4653603711763789906, -4595670092252551578, 4657357554412179948, 4656200318423945708, 4641019933125288919
    var_1304 = 4657874874633048556;
    var_1312 = 10;
    pri = EvCameraMove(var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1320 = 0;
    pri = fun_2C60()
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_1328 = 3;
    OP_PUSH5_C 4653489978281012756, -4595326692780964577, 4657548407640529306, 4656214744016502129, 4640975952660177879
    var_1336 = 4657860185157701468;
    var_1344 = 240;
    pri = EvCameraMove(var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272)
    var_1352 = 1;
    var_1360 = 3;
    var_1368 = 0;
    var_1376 = 11;
    var_1384 = -6397670319191688058;
    var_1392 = 40;
    pri = fun_6CF0(var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1400 = 0;
    var_1408 = 3;
    var_1416 = 0;
    var_1424 = 100;
    var_1432 = -1;
    OP_PUSH2_C 4776130460369270480, -6397670319191688058
    var_1440 = 56;
    pri = fun_2558(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = -6397670319191688058;
    var_1456 = 8;
    pri = fun_0A90(var_1448)
    var_1464 = 1;
    var_1472 = 8;
    pri = fun_26A0(var_1464)
    var_1480 = 0;
    pri = fun_2760()
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_1488 = 0;
    OP_PUSH5_C 4655765175702137078, 4634080167574487695, 4657522415185648681, 4656831306156893798, 4644850631636460503
    var_1496 = 4658723741590156739;
    var_1504 = 1;
    pri = EvCameraMove(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1512 = 0;
    pri = fun_2C60()
    var_1520 = 0;
    var_1528 = 0;
    var_1536 = 0;
    var_1544 = 180;
    pri = float(var_1544)
    var_1552 = pri;
    var_1560 = -6397670319191688058;
    var_1568 = 40;
    pri = fun_0810(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = 0;
    var_1584 = 3;
    var_1592 = 0;
    var_1600 = 100;
    var_1608 = -1;
    OP_PUSH2_C 4776146953043693645, -6397670319191688058
    var_1616 = 56;
    pri = fun_2558(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1624 = -6397670319191688058;
    var_1632 = 8;
    pri = fun_08B8(var_1624)
    var_1640 = 1;
    var_1648 = 8;
    pri = fun_26A0(var_1640)
    var_1656 = 0;
    pri = fun_2760()
    var_1664 = 8389417158930239541;
    var_1672 = 8;
    pri = fun_1590(var_1664)
    var_1680 = 1;
    var_1688 = -1;
    var_1696 = -1;
    var_1704 = 3;
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 8389417158930239541;
    var_1736 = 56;
    pri = fun_2DD8(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1744 = 0;
    var_1752 = 3;
    var_1760 = 0;
    var_1768 = 100;
    var_1776 = -1;
    OP_PUSH2_C 8568972021672772505, 8389417158930239541
    var_1784 = 56;
    pri = fun_2558(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1792 = 8389417158930239541;
    var_1800 = 8;
    pri = fun_0A90(var_1792)
    var_1808 = 1;
    var_1816 = 8;
    pri = fun_26A0(var_1808)
    var_1824 = 0;
    pri = fun_2760()
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_1832 = 3;
    OP_PUSH5_C 4655350395935674860, 4619938864744544338, 4657175475286620242, 4657025567871289262, 4642508583908367401
    var_1840 = 4658151489768364442;
    var_1848 = 240;
    pri = EvCameraMove(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 1;
    var_1864 = 0;
    var_1872 = 4641240890982006784;
    var_1880 = 0;
    var_1888 = 0;
    OP_PUSH4_C 4653858886422364160, 4657536752817274880, 4611686018427387904, 8389417158930239541
    var_1896 = 72;
    pri = fun_06D8(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1904 = 1;
    var_1912 = 0;
    var_1920 = 4641240890982006784;
    var_1928 = 0;
    var_1936 = 0;
    OP_PUSH4_C 4653858886422364160, 4657536752817274880, 4607182418800017408, -6397670319191688058
    var_1944 = 72;
    pri = fun_06D8(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = 0;
    var_1960 = 0;
    var_1968 = 0;
    var_1976 = 0;
    pri = float(var_1976)
    var_1984 = pri;
    var_1992 = 8541340050249644631;
    var_2000 = 40;
    pri = fun_0810(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 35;
    var_2016 = 8;
    pri = fun_0090(var_2008)
    var_2024 = 34816;
    pri = SoundPostEvent(var_2024)
    var_2032 = 8541340050249644631;
    var_2040 = 8;
    pri = fun_08B8(var_2032)
    var_2048 = 5;
    var_2056 = 8541340050249644631;
    var_2064 = 16;
    pri = fun_1550(var_2056, var_2048)
    var_2072 = -1;
    var_2080 = 8802641224559852288;
    var_2088 = 16;
    pri = fun_1510(var_2080, var_2072)
    var_2096 = -1;
    var_2104 = 8541340050249644631;
    var_2112 = 16;
    pri = fun_1510(var_2104, var_2096)
    var_2120 = 0;
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = 0;
    OP_PUSH2_C 8802641224559852288, 8541340050249644631
    var_2152 = 48;
    pri = fun_0860(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2160 = 0;
    var_2168 = 3;
    var_2176 = 0;
    var_2184 = 100;
    var_2192 = -1;
    OP_PUSH2_C -5082486461863197918, 8541340050249644631
    var_2200 = 56;
    pri = fun_2558(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144)
    var_2208 = 8541340050249644631;
    var_2216 = 8;
    pri = fun_08B8(var_2208)
    var_2224 = 1;
    var_2232 = 8;
    pri = fun_26A0(var_2224)
    var_2240 = 0;
    pri = fun_2760()
    var_2248 = 8541340050249644631;
    var_2256 = 8;
    pri = fun_1590(var_2248)
    var_2264 = 1;
    var_2272 = -1;
    var_2280 = -1;
    var_2288 = 3;
    var_2296 = 0;
    var_2304 = 0;
    var_2312 = 8541340050249644631;
    var_2320 = 56;
    pri = fun_2DD8(var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2328 = 0;
    var_2336 = 3;
    var_2344 = 0;
    var_2352 = 100;
    var_2360 = -1;
    OP_PUSH2_C -5082485362351569707, 8541340050249644631
    var_2368 = 56;
    pri = fun_2558(var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2376 = 8541340050249644631;
    var_2384 = 8;
    pri = fun_0A90(var_2376)
    var_2392 = 1;
    var_2400 = 8;
    pri = fun_26A0(var_2392)
    var_2408 = 0;
    pri = fun_2760()
    var_2416 = 0;
    var_2424 = 8389417158930239541;
    var_2432 = 16;
    pri = fun_0628(var_2424, var_2416)
    var_2440 = 0;
    var_2448 = -6397670319191688058;
    var_2456 = 16;
    pri = fun_0628(var_2448, var_2440)
    var_2464 = 1;
    var_2472 = 0;
    var_2480 = 4641240890982006784;
    var_2488 = 0;
    var_2496 = 0;
    OP_PUSH4_C 4653858886422364160, 4657536752817274880, 4611686018427387904, 8541340050249644631
    var_2504 = 72;
    pri = fun_06D8(var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2512 = 28;
    var_2520 = 8;
    pri = fun_0090(var_2512)
    OP_PUSH2_C -4618891777831180697, 4627701944602224230
    var_2528 = 3;
    OP_PUSH5_C 4654579154499487662, 4645307852551754875, 4657532574673089331, 4656976793535481119, 4638776577560904991
    var_2536 = 4657899635634906071;
    var_2544 = 60;
    pri = EvCameraMove(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472)
    var_2552 = 1;
    var_2560 = 0;
    var_2568 = 4641240890982006784;
    var_2576 = 0;
    var_2584 = 0;
    OP_PUSH4_C 4653858886422364160, 4657536752817274880, 4611686018427387904, 8802641224559852288
    var_2592 = 72;
    pri = fun_06D8(var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2600 = 8541340050249644631;
    var_2608 = 8;
    pri = fun_08B8(var_2600)
    var_2616 = 8802641224559852288;
    var_2624 = 8;
    pri = fun_08B8(var_2616)
    var_2632 = 34968;
    pri = SoundPostEvent(var_2632)
    var_2640 = 0;
    var_2648 = 8802641224559852288;
    var_2656 = 16;
    pri = fun_0660(var_2648, var_2640)
    var_2664 = 0;
    var_2672 = 8389417158930239541;
    var_2680 = 16;
    pri = fun_0660(var_2672, var_2664)
    var_2688 = 0;
    var_2696 = -6397670319191688058;
    var_2704 = 16;
    pri = fun_0660(var_2696, var_2688)
    var_2712 = 0;
    var_2720 = 8541340050249644631;
    var_2728 = 16;
    pri = fun_0660(var_2720, var_2712)
    var_2736 = 15;
    var_2744 = 8;
    pri = fun_0090(var_2736)
    var_2752 = 1;
    var_2760 = 0;
    var_2768 = 33984;
    var_2776 = 8;
    var_2784 = 32;
    pri = fun_02B0(var_2776, var_2768, var_2760, var_2752)
    var_2792 = 0;
    pri = fun_0320()
    var_2800 = 0;
    var_2808 = -1;
    var_2816 = -6762665750092955797;
    var_2824 = 24;
    pri = fun_2AA0(var_2816, var_2808, var_2800)
    var_2832 = 0;
    pri = fun_2B60()
    OP_JZER lab_DE20
    var_2840 = 3051;
    var_2848 = 8;
    pri = fun_9890(var_2840)
    var_2856 = 0;
    pri = fun_2C10()
// lab_DE20
    var_8 = 8389417158930239541;
    var_16 = 8;
    pri = fun_08B8(var_8)
    var_24 = -6397670319191688058;
    var_32 = 8;
    pri = fun_08B8(var_24)
    pri = 0;
    return pri;
}
// fun_DE80
fun_DE80() {
    var_8 = -6397670319191688058;
    var_16 = 8;
    pri = fun_16A8(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH2_C 4629711564753322514, 8389417158930239541
    var_48 = 40;
    pri = fun_0810(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C -4589271134426128722, -6397670319191688058
    var_80 = 40;
    pri = fun_0810(var_72, var_64, var_56, var_48, var_40)
    var_88 = 1;
    var_96 = -1;
    var_104 = -1;
    var_112 = 3;
    var_120 = 0;
    var_128 = 0;
    var_136 = 8541340050249644631;
    var_144 = 56;
    pri = fun_2DD8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 0;
    var_160 = 3;
    var_168 = 0;
    var_176 = 100;
    var_184 = -1;
    OP_PUSH2_C -5081521090653817885, 8541340050249644631
    var_192 = 56;
    pri = fun_2558(var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_200 = -6397670319191688058;
    var_208 = 8;
    pri = fun_08B8(var_200)
    var_216 = 8389417158930239541;
    var_224 = 8;
    pri = fun_08B8(var_216)
    var_232 = 8541340050249644631;
    var_240 = 8;
    pri = fun_0A90(var_232)
    var_248 = 1;
    var_256 = 8;
    pri = fun_26A0(var_248)
    var_264 = 0;
    pri = fun_2760()
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 8541340050249644631;
    var_320 = 40;
    pri = fun_0810(var_312, var_304, var_296, var_288, var_280)
    var_328 = 8541340050249644631;
    var_336 = 8;
    pri = fun_08B8(var_328)
    var_344 = 0;
    var_352 = 8802641224559852288;
    var_360 = 16;
    pri = fun_0660(var_352, var_344)
    var_368 = 0;
    var_376 = 8389417158930239541;
    var_384 = 16;
    pri = fun_0660(var_376, var_368)
    var_392 = 0;
    var_400 = -6397670319191688058;
    var_408 = 16;
    pri = fun_0660(var_400, var_392)
    var_416 = 0;
    var_424 = 8541340050249644631;
    var_432 = 16;
    pri = fun_0660(var_424, var_416)
    OP_PUSH2_C 8389417158930239541, 4282318905463245617
    pri = SetBamiriInfoToChara(var_432, var_424)
    OP_PUSH2_C -6397670319191688058, -5353196020520548670
    pri = SetBamiriInfoToChara(var_432, var_424)
    OP_PUSH2_C 8541340050249644631, -504963913447042996
    pri = SetBamiriInfoToChara(var_432, var_424)
    var_440 = 3;
    var_448 = 0;
    pri = EvCameraEnd(var_448, var_440)
    pri = 0;
    return pri;
}
// fun_E2B8
fun_E2B8() {
    pri = 0;
    return pri;
}
// fun_E2D0
fun_E2D0() {
    var_8 = 3060;
    var_16 = 8;
    pri = fun_9890(var_8)
    pri = 0;
    return pri;
}
// fun_E308
fun_E308() {
    var_8 = 3051;
    var_16 = 8;
    pri = fun_9890(var_8)
    pri = 0;
    return pri;
}
// fun_E340
fun_E340() {
    var_8 = 3747807547293052267;
    pri = ReserveScript(var_8)
    pri = 0;
    return pri;
}
// fun_E380
fun_E380() {
    pri = 0;
    return pri;
}
// fun_E398
fun_E398() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9AD0()
    var_16 = 0;
    pri = fun_9B28()
    var_24 = 0;
    pri = fun_9B90()
    var_32 = 0;
    pri = fun_9BC0()
    OP_JZER lab_E480
    var_40 = 0;
    pri = fun_E2B8()
    var_48 = 0;
    pri = fun_E2D0()
    var_56 = 0;
    pri = fun_E340()
    OP_JUMP lab_E4C8
// lab_E480
    var_8 = 0;
    pri = fun_E2B8()
    var_16 = 0;
    pri = fun_E308()
    var_24 = 0;
    pri = fun_E380()
// lab_E4C8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_E4F0
fun_E4F0() {
    var_8 = 0;
    pri = fun_9B28()
    var_16 = 0;
    pri = fun_E2D0()
    pri = 0;
    return pri;
}
// fun_E538
fun_E538() {
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0660(var_16, var_8)
    var_32 = 1;
    var_40 = 8389417158930239541;
    var_48 = 16;
    pri = fun_0660(var_40, var_32)
    var_56 = 1;
    var_64 = -6397670319191688058;
    var_72 = 16;
    pri = fun_0660(var_64, var_56)
    var_80 = 1;
    var_88 = 8541340050249644631;
    var_96 = 16;
    pri = fun_0660(var_88, var_80)
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    OP_PUSH2_C 8802641224559852288, 8541340050249644631
    var_136 = 48;
    pri = fun_0860(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH2_C 8541340050249644631, 8802641224559852288
    var_176 = 48;
    pri = fun_0860(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    OP_PUSH2_C -5081522190165446096, 8541340050249644631
    var_224 = 56;
    pri = fun_2558(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 8541340050249644631;
    var_240 = 8;
    pri = fun_08B8(var_232)
    var_248 = 8802641224559852288;
    var_256 = 8;
    pri = fun_08B8(var_248)
    var_264 = 1;
    var_272 = 8;
    pri = fun_26A0(var_264)
    var_288 = 0;
    var_296 = 0;
    var_304 = 1;
    OP_PUSH2_C 5851417148365705410, 5851411650807564355
    var_312 = 1;
    var_320 = 48;
    pri = fun_28E8(var_312, var_304, var_296, var_288, var_280, var_272)
    var_8 = pri;
    var_328 = 0;
    pri = fun_2760()
    pri = var_8;
    OP_JZER lab_E8A8
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    var_360 = 8541340050249644631;
    var_368 = 32;
    pri = fun_8D20(var_360, var_352, var_344, var_336)
    pri = EvCameraStart()
    var_376 = 0;
    pri = fun_C488()
    var_384 = 0;
    pri = fun_E2D0()
    var_392 = 0;
    pri = fun_E340()
    OP_JUMP lab_E900
// lab_E8A8
    var_8 = 0;
    pri = fun_DE80()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 8541340050249644631;
    var_48 = 32;
    pri = fun_8D20(var_40, var_32, var_24, var_16)
// lab_E900
    pri = 0;
    return pri;
}
// fun_E918
fun_E918() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4776145853532065434;
    var_88 = 80;
    pri = fun_91D8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_E9A0
fun_E9A0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8568981917277426404;
    var_88 = 80;
    pri = fun_91D8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
