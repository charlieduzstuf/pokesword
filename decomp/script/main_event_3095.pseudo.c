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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0480
// lab_0480
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_04C0
    OP_JUMP lab_0530
// lab_04C0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0500
    OP_JUMP lab_0530
// lab_0500
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
// lab_0530
    pri = 0;
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0578
fun_0578() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_05B0
// lab_05B0
    var_8 = 0;
    pri = fun_06F8()
    OP_JNZ lab_05E8
    OP_JUMP lab_0618
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05B0
// lab_0618
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_0648
// lab_0648
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0688
    pri = 0;
    return pri;
// lab_0688
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0648
    pri = 0;
    return pri;
}
// fun_06C8
fun_06C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06F8
fun_06F8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0828
fun_0828() {
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
// fun_08A0
fun_08A0() {
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
// fun_0960
fun_0960() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09B0
fun_09B0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A08
fun_0A08() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AB8(var_8)
    OP_JZER lab_0A80
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1AE8(var_24)
    OP_JNZ lab_0A80
    pri = 0;
    return pri;
// lab_0A80
    OP_JUMP lab_0A90
// lab_0A90
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AF0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A90
    pri = 0;
    return pri;
}
// fun_0B30
fun_0B30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C28
    pri = 0;
    return pri;
// lab_0C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C68
// lab_0C68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AB8(var_8)
    OP_JNZ lab_0CF0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CE0
    pri = 0;
    return pri;
// lab_0CF0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D38
    pri = 0;
    return pri;
// lab_0D38
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F08(var_8)
    pri = 0;
    return pri;
// lab_0D98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C68
    pri = 0;
    return pri;
// lab_0CE0
    OP_JUMP lab_0D38
}
// fun_0DE0
fun_0DE0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E28
// lab_0E28
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E80
    pri = 0;
    return pri;
// lab_0E80
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EC0
    pri = 0;
    return pri;
// lab_0EC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E28
    pri = 0;
    return pri;
}
// fun_0F08
fun_0F08() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0F40
fun_0F40() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F90
    pri = 0;
    return pri;
// lab_0F90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1AB8(var_8)
    OP_JZER lab_10C0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FE8
    OP_ZERO_P_S 64
// lab_10C0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10F8
    OP_CONST_S 64, 1
// lab_10F8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1130
    OP_CONST_S 72, 1
// lab_1130
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
// lab_0FE8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1010
    OP_ZERO_P_S 72
// lab_1010
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
    OP_JUMP lab_11D0
// lab_11D0
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1220
fun_1220() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1260
fun_1260() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12B8
fun_12B8() {
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
// fun_1318
fun_1318() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_16D8
        case default:
        {
// switch_16D8_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_16D8_case_0x0
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
            pri = fun_12B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16D8_case_default
        }
        case 0x1:
        {
// switch_16D8_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12B8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16D8_case_default
        }
        case 0x2:
        {
// switch_16D8_case_0x2
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
            pri = fun_12B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16D8_case_default
        }
        case 0x3:
        {
// switch_16D8_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12B8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16D8_case_default
        }
        case 0x4:
        {
// switch_16D8_case_0x4
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
            pri = fun_12B8(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_16D8_case_default
        }
        case 0x5:
        {
// switch_16D8_case_0x5
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
            pri = fun_12B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16D8_case_default
        }
        case 0x6:
        {
// switch_16D8_case_0x6
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
            pri = fun_12B8(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_16D8_case_default
        }
        case 0x7:
        {
// switch_16D8_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_12B8(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_16D8_case_default
        }
    }
}
// fun_1788
fun_1788() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    OP_ZERO_P_S -8
    OP_JUMP lab_17F0
// lab_17F0
    var_8 = arg_0;
    pri = IsFinishFieldObjectLookAt_(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1840
    pri = 0;
    return pri;
// lab_1840
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1880
    pri = 0;
    return pri;
// lab_1880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_17F0
    pri = 0;
    return pri;
}
// fun_18C8
fun_18C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1908
fun_1908() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1948
fun_1948() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1980
fun_1980() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_19C0
fun_19C0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_19F8
fun_19F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1908(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1980(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1A60
fun_1A60() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1948(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_19C0(var_24)
    pri = 0;
    return pri;
}
// fun_1AB8
fun_1AB8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1AE8
fun_1AE8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1B18
fun_1B18() {
    OP_JUMP lab_1B30
// lab_1B30
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1BC0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1BB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BE0(var_8)
    pri = 0;
    return pri;
// lab_1BC0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C50
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1C40
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BE0(var_8)
    pri = 0;
    return pri;
// lab_1C50
    pri = 0;
    return pri;
// lab_1C40
    OP_JUMP lab_1C60
// lab_1C60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1B30
    pri = 0;
    return pri;
// lab_1BB0
    OP_JUMP lab_1C60
}
// fun_1CA0
fun_1CA0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BE0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1B18(var_40)
    pri = 0;
    return pri;
}
// fun_1D28
fun_1D28() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1D60
fun_1D60() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1D88
fun_1D88() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1DB8
fun_1DB8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1DF0
fun_1DF0() {
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
// switch_2408
        case default:
        {
// switch_2408_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2450
// lab_2450
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
            OP_JNZ lab_24F8
            var_88 = 0;
            pri = fun_2768()
// lab_24F8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2408_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1FF0
                case default:
                {
// switch_1FF0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2068
// lab_2068
                    OP_JUMP lab_2450
                }
                case 0x0:
                {
// switch_1FF0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_2068
                }
                case 0x1:
                {
// switch_1FF0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_2068
                }
                case 0x2:
                {
// switch_1FF0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_2068
                }
                case 0x3:
                {
// switch_1FF0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_2068
                }
                case 0x4:
                {
// switch_1FF0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_2068
                }
                case 0x5:
                {
// switch_1FF0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_2068
                }
            }
        }
        case 0x65:
        {
// switch_2408_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_21A8
                case default:
                {
// switch_21A8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2220
// lab_2220
                    OP_JUMP lab_2450
                }
                case 0x0:
                {
// switch_21A8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2220
                }
                case 0x1:
                {
// switch_21A8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2220
                }
                case 0x2:
                {
// switch_21A8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2220
                }
                case 0x3:
                {
// switch_21A8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2220
                }
                case 0x4:
                {
// switch_21A8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2220
                }
                case 0x5:
                {
// switch_21A8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2220
                }
            }
        }
        case 0x66:
        {
// switch_2408_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2360
                case default:
                {
// switch_2360_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_23D8
// lab_23D8
                    OP_JUMP lab_2450
                }
                case 0x0:
                {
// switch_2360_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_23D8
                }
                case 0x1:
                {
// switch_2360_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_23D8
                }
                case 0x2:
                {
// switch_2360_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_23D8
                }
                case 0x3:
                {
// switch_2360_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_23D8
                }
                case 0x4:
                {
// switch_2360_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_23D8
                }
                case 0x5:
                {
// switch_2360_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_23D8
                }
            }
        }
    }
}
// fun_2510
fun_2510() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1DF0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2578
fun_2578() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BA8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2620
    pri = 1;
    return pri;
// lab_2620
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2668
fun_2668() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_26B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2578(var_8)
    arg_2 = pri;
// lab_26B8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1DF0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2718
fun_2718() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2510(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2768
fun_2768() {
    OP_JUMP lab_2780
// lab_2780
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_27C0
    pri = 0;
    return pri;
// lab_27C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2780
    pri = 0;
    return pri;
}
// fun_2800
fun_2800() {
    var_8 = 0;
    pri = fun_2768()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_28B0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_28B0
    pri = 0;
    return pri;
}
// fun_28C0
fun_28C0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_28F0
fun_28F0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2920
// lab_2920
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2960
    OP_JUMP lab_2990
// lab_2960
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2920
// lab_2990
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29D8
fun_29D8() {
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
// fun_2A48
fun_2A48() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2AA8(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_2B48(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2AA8
fun_2AA8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AF8
fun_2AF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B48
fun_2B48() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B98
fun_2B98() {
    pri = arg_3;
    OP_JNZ lab_2BE0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_3 = pri;
// lab_2BE0
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
// fun_2C48
fun_2C48() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2CC0
fun_2CC0() {
    var_8 = 0;
    pri = fun_2C48()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2D40
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2D40
    pri = 1;
    return pri;
// lab_2D40
    var_8 = 0;
    pri = fun_2C48()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2D80
    pri = 1;
    return pri;
// lab_2D80
    var_8 = 0;
    pri = fun_2C48()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2DB0
fun_2DB0() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_2E00
fun_2E00() {
    OP_JUMP lab_2E18
// lab_2E18
    pri = EvCameraMoveWait_()
    OP_JZER lab_2E50
    pri = 0;
    return pri;
// lab_2E50
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2E18
    pri = 0;
    return pri;
}
// fun_2E90
fun_2E90() {
    pri = arg_6;
    OP_JNZ lab_2EC8
    var_8 = 0;
    pri = fun_11E0()
// lab_2EC8
    pri = arg_1;
    switch (pri) {
// switch_4430
        case default:
        {
// switch_4430_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4780
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4780
            pri = 1;
            OP_JUMP lab_4788
// lab_4780
            pri = 0;
// lab_4788
            OP_JZER lab_48E0
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BA8(var_24, var_16)
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
            OP_JUMP lab_4940
// lab_48E0
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
// lab_4940
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_49A0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4A00
// lab_49A0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4A00
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4A00
            pri = arg_2;
            OP_JZER lab_4A40
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4A40
            var_8 = 0;
            pri = fun_1220()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4430_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x1:
        {
// switch_4430_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x2:
        {
// switch_4430_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x3:
        {
// switch_4430_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x4:
        {
// switch_4430_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x5:
        {
// switch_4430_case_0x5
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0x6:
        {
// switch_4430_case_0x6
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0x7:
        {
// switch_4430_case_0x7
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0x8:
        {
// switch_4430_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x9:
        {
// switch_4430_case_0x9
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0xa:
        {
// switch_4430_case_0xa
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0xb:
        {
// switch_4430_case_0xb
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0xc:
        {
// switch_4430_case_0xc
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0xd:
        {
// switch_4430_case_0xd
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0xe:
        {
// switch_4430_case_0xe
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0xf:
        {
// switch_4430_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x10:
        {
// switch_4430_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x11:
        {
// switch_4430_case_0x11
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0x12:
        {
// switch_4430_case_0x12
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0x13:
        {
// switch_4430_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x14:
        {
// switch_4430_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x15:
        {
// switch_4430_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x16:
        {
// switch_4430_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x17:
        {
// switch_4430_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x18:
        {
// switch_4430_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x19:
        {
// switch_4430_case_0x19
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4430_case_default
        }
        case 0x1a:
        {
// switch_4430_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B30(var_48, var_40)
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
            pri = fun_0F40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4430_case_default
        }
        case 0x1b:
        {
// switch_4430_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B30(var_48, var_40)
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
            pri = fun_0F40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4430_case_default
        }
        case 0x1c:
        {
// switch_4430_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B30(var_48, var_40)
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
            pri = fun_0F40(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4430_case_default
        }
        case 0x1d:
        {
// switch_4430_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x1e:
        {
// switch_4430_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x1f:
        {
// switch_4430_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x20:
        {
// switch_4430_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x21:
        {
// switch_4430_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x22:
        {
// switch_4430_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x23:
        {
// switch_4430_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x24:
        {
// switch_4430_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x25:
        {
// switch_4430_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x26:
        {
// switch_4430_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x27:
        {
// switch_4430_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x28:
        {
// switch_4430_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
        case 0x29:
        {
// switch_4430_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4430_case_default
        }
    }
}
// fun_4A70
fun_4A70() {
    pri = arg_5;
    OP_JNZ lab_4AA8
    var_8 = 0;
    pri = fun_11E0()
// lab_4AA8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4AF8
    OP_CONST_S -8, -1
// lab_4AF8
    pri = arg_1;
    switch (pri) {
// switch_65B0
        case default:
        {
// switch_65B0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6A58
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0BA8(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6A58
            pri = 1;
            OP_JUMP lab_6A60
// lab_6A58
            pri = 0;
// lab_6A60
            OP_JZER lab_6AB0
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_6D08
// lab_6AB0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6B18
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6B18
            pri = 1;
            OP_JUMP lab_6B20
// lab_6B18
            pri = 0;
// lab_6B20
            OP_JZER lab_6CA8
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BA8(var_24, var_16)
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
            OP_JUMP lab_6D08
// lab_6CA8
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
// lab_6D08
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6D78
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6D78
            var_8 = 0;
            pri = fun_1220()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_65B0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1:
        {
// switch_65B0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2:
        {
// switch_65B0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x3:
        {
// switch_65B0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x4:
        {
// switch_65B0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x5:
        {
// switch_65B0_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F08(var_40)
            OP_JUMP switch_65B0_case_default
        }
        case 0x6:
        {
// switch_65B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x7:
        {
// switch_65B0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x8:
        {
// switch_65B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x9:
        {
// switch_65B0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0xa:
        {
// switch_65B0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0xb:
        {
// switch_65B0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0xc:
        {
// switch_65B0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0xd:
        {
// switch_65B0_case_0xd
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0xe:
        {
// switch_65B0_case_0xe
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0xf:
        {
// switch_65B0_case_0xf
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x10:
        {
// switch_65B0_case_0x10
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x11:
        {
// switch_65B0_case_0x11
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x12:
        {
// switch_65B0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x13:
        {
// switch_65B0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x14:
        {
// switch_65B0_case_0x14
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x15:
        {
// switch_65B0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x16:
        {
// switch_65B0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x17:
        {
// switch_65B0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x18:
        {
// switch_65B0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x19:
        {
// switch_65B0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1a:
        {
// switch_65B0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1b:
        {
// switch_65B0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1c:
        {
// switch_65B0_case_0x1c
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1d:
        {
// switch_65B0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1e:
        {
// switch_65B0_case_0x1e
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x1f:
        {
// switch_65B0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x20:
        {
// switch_65B0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x21:
        {
// switch_65B0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x22:
        {
// switch_65B0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x23:
        {
// switch_65B0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x24:
        {
// switch_65B0_case_0x24
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x25:
        {
// switch_65B0_case_0x25
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x26:
        {
// switch_65B0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x27:
        {
// switch_65B0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x28:
        {
// switch_65B0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x29:
        {
// switch_65B0_case_0x29
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2a:
        {
// switch_65B0_case_0x2a
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2b:
        {
// switch_65B0_case_0x2b
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2c:
        {
// switch_65B0_case_0x2c
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2d:
        {
// switch_65B0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2e:
        {
// switch_65B0_case_0x2e
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x2f:
        {
// switch_65B0_case_0x2f
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x30:
        {
// switch_65B0_case_0x30
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x31:
        {
// switch_65B0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x32:
        {
// switch_65B0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x33:
        {
// switch_65B0_case_0x33
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x34:
        {
// switch_65B0_case_0x34
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x35:
        {
// switch_65B0_case_0x35
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x36:
        {
// switch_65B0_case_0x36
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x37:
        {
// switch_65B0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x38:
        {
// switch_65B0_case_0x38
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
            pri = fun_0F40(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_65B0_case_default
        }
        case 0x39:
        {
// switch_65B0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x3a:
        {
// switch_65B0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x3b:
        {
// switch_65B0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x3c:
        {
// switch_65B0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x3d:
        {
// switch_65B0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
        case 0x3e:
        {
// switch_65B0_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            OP_JUMP switch_65B0_case_default
        }
    }
}
// fun_6DA8
fun_6DA8() {
    pri = arg_4;
    OP_JNZ lab_6DE0
    var_8 = 0;
    pri = fun_11E0()
// lab_6DE0
    pri = arg_1;
    switch (pri) {
// switch_81B8
        case default:
        {
// switch_81B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1AB8(var_264)
            OP_JZER lab_8780
            pri = arg_3;
            switch (pri) {
// switch_8728
                case default:
                {
// switch_8728_case_default
                    OP_JUMP lab_8A38
// lab_8A38
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8AA8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8AA8
                    var_8 = 0;
                    pri = fun_1220()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8728_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8728_case_default
                }
                case 0x2:
                {
// switch_8728_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8728_case_default
                }
                case 0x3:
                {
// switch_8728_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8728_case_default
                }
            }
// lab_8780
            pri = arg_1;
            OP_JZER lab_87D0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_87D0
            pri = 0;
            OP_JUMP lab_87D8
// lab_87D0
            pri = 1;
// lab_87D8
            OP_JZER lab_8840
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BA8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8840
            pri = 1;
            OP_JUMP lab_8848
// lab_8840
            pri = 0;
// lab_8848
            OP_JZER lab_8898
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8A38
// lab_8898
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8900
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8A38
// lab_8900
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BA8(var_24, var_16)
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
// switch_81B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1:
        {
// switch_81B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2:
        {
// switch_81B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x3:
        {
// switch_81B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x4:
        {
// switch_81B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x5:
        {
// switch_81B8_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F08(var_40)
            OP_JUMP switch_81B8_case_default
        }
        case 0x6:
        {
// switch_81B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x7:
        {
// switch_81B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x8:
        {
// switch_81B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x9:
        {
// switch_81B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0xa:
        {
// switch_81B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0xb:
        {
// switch_81B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0xc:
        {
// switch_81B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0xd:
        {
// switch_81B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0xe:
        {
// switch_81B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0xf:
        {
// switch_81B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x10:
        {
// switch_81B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x11:
        {
// switch_81B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x12:
        {
// switch_81B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x13:
        {
// switch_81B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x14:
        {
// switch_81B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x15:
        {
// switch_81B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x16:
        {
// switch_81B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x17:
        {
// switch_81B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x18:
        {
// switch_81B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x19:
        {
// switch_81B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1a:
        {
// switch_81B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1b:
        {
// switch_81B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1c:
        {
// switch_81B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1d:
        {
// switch_81B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1e:
        {
// switch_81B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x1f:
        {
// switch_81B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x20:
        {
// switch_81B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x21:
        {
// switch_81B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x22:
        {
// switch_81B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x23:
        {
// switch_81B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x24:
        {
// switch_81B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x25:
        {
// switch_81B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x26:
        {
// switch_81B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x27:
        {
// switch_81B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x28:
        {
// switch_81B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x29:
        {
// switch_81B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2a:
        {
// switch_81B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2b:
        {
// switch_81B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2c:
        {
// switch_81B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2d:
        {
// switch_81B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2e:
        {
// switch_81B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x2f:
        {
// switch_81B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x30:
        {
// switch_81B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x31:
        {
// switch_81B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x32:
        {
// switch_81B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x33:
        {
// switch_81B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x34:
        {
// switch_81B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x35:
        {
// switch_81B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x36:
        {
// switch_81B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x37:
        {
// switch_81B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x38:
        {
// switch_81B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x39:
        {
// switch_81B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x3a:
        {
// switch_81B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x3b:
        {
// switch_81B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x3c:
        {
// switch_81B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x3d:
        {
// switch_81B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
        case 0x3e:
        {
// switch_81B8_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B68(var_24, var_16, var_8)
            OP_JUMP switch_81B8_case_default
        }
    }
}
// fun_8AD8
fun_8AD8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8BD8
        case default:
        {
// switch_8BD8_case_default
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
// switch_8BD8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8BD8_case_default
        }
        case 0x1:
        {
// switch_8BD8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8BD8_case_default
        }
        case 0x2:
        {
// switch_8BD8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8BD8_case_default
        }
        case 0x3:
        {
// switch_8BD8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8BD8_case_default
        }
    }
}
// fun_8C98
fun_8C98() {
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
    pri = fun_2668(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2768()
    pri = 0;
    return pri;
}
// fun_8D30
fun_8D30() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8AD8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8C98(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8DD8
fun_8DD8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8E28
// lab_8E28
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30056;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8EA0
    OP_JUMP lab_8ED0
// lab_8EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8E28
// lab_8ED0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8F58
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6DA8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1D88(var_56)
// lab_8F58
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8FC0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1788(var_24, var_16)
// lab_8FC0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1788(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_9080
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0BE0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0960(var_88, var_80, var_72, var_64, var_56)
// lab_9080
    pri = IsPlayerRideBicycle()
    OP_JZER lab_90C0
    pri = 0;
    return pri;
// lab_90C0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9208
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 30176;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B30(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_91D0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9208
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A08(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A08(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0BE0(var_40)
    pri = 0;
    return pri;
// lab_91D0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1788(var_16, var_8)
}
// fun_9290
fun_9290() {
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
    pri = fun_8D30(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_2800(var_112)
    var_128 = 0;
    pri = fun_28C0()
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
    pri = fun_8DD8(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9408
fun_9408() {
    pri = 30312;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9490
// lab_9490
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9610
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9600
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9550
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9550
    pri = 0;
    OP_JUMP lab_9558
// lab_9610
    pri = 0;
    return pri;
// lab_9600
    OP_JUMP lab_9488
// lab_9488
    OP_INC_P_S -936
// lab_9550
    pri = 1;
// lab_9558
    OP_JZER lab_95D0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_95C8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_95D0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_95C8
}
// fun_9630
fun_9630() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9668
fun_9668() {
    var_8 = 0;
    pri = fun_9630()
    switch (pri) {
// switch_9718
        case default:
        {
// switch_9718_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_9760
// lab_9760
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_9718_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_9760
        }
        case 0x1:
        {
// switch_9718_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_9760
        }
        case 0x2:
        {
// switch_9718_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_9760
        }
    }
}
// fun_9770
fun_9770() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_97B8
    pri = arg_0;
    return pri;
// lab_97B8
    pri = arg_1;
    return pri;
}
// fun_97C8
fun_97C8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9860
    var_8 = 1;
    var_16 = 0;
    var_24 = 31232;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1D60()
// lab_9860
    pri = arg_4;
    OP_JZER lab_9898
    var_8 = 1;
    var_16 = 8;
    pri = fun_1DB8(var_8)
// lab_9898
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_98F0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_98F0
    pri = 0;
    OP_JUMP lab_98F8
// lab_98F0
    pri = 1;
// lab_98F8
    OP_JZER lab_99C0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_99C0
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_9998
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1CA0(var_32, var_24)
    OP_JUMP lab_99C0
// lab_99C0
    pri = arg_2;
    OP_JZER lab_9A98
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_9A68
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1788(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07F0(var_40)
    OP_JUMP lab_9A98
// lab_9A98
    pri = arg_3;
    OP_JZER lab_9AD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1D28(var_8)
// lab_9AD0
    pri = 0;
    return pri;
// lab_9A68
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1788(var_16, var_8)
// lab_9998
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1CA0(var_16, var_8)
}
// fun_9AE0
fun_9AE0() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9C60
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9B78
    var_8 = 1;
    var_16 = 0;
    var_24 = 31232;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
// lab_9C60
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9B78
    pri = arg_0;
    OP_JNZ lab_9BC0
    var_8 = 31280;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_9BE0
// lab_9BC0
    var_8 = 31456;
    pri = SoundPostEvent(var_8)
// lab_9BE0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0438(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9C60
    var_24 = 31720;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02B0(var_32, var_24)
    var_48 = 0;
    pri = fun_0380()
}
// fun_9CA0
fun_9CA0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9408(var_24)
    pri = 0;
    return pri;
}
// fun_9D08
fun_9D08() {
    pri = g_mode;
    switch (pri) {
// switch_9E68
        case default:
        {
// switch_9E68_case_default
            pri = CommandNOP()
            OP_JUMP lab_9EF0
// lab_9EF0
            pri = 0;
            return pri;
        }
        case 0x952b1d85b12b3ff6:
        {
// switch_9E68_case_0x952b1d85b12b3ff6
            var_8 = 0;
            pri = fun_11C58()
            OP_JUMP lab_9EF0
        }
        case 0xccdeaa4fac2859d8:
        {
// switch_9E68_case_0xccdeaa4fac2859d8
            var_8 = 0;
            pri = fun_11B48()
            OP_JUMP lab_9EF0
        }
        case 0xfcd1c345595d251b:
        {
// switch_9E68_case_0xfcd1c345595d251b
            var_8 = 0;
            pri = fun_11BD0()
            OP_JUMP lab_9EF0
        }
        case 0x0:
        {
// switch_9E68_case_0x0
            var_8 = 0;
            pri = fun_9F00()
            OP_JUMP lab_9EF0
        }
        case 0x168b7417fce4ba7f:
        {
// switch_9E68_case_0x168b7417fce4ba7f
            var_8 = 0;
            pri = fun_11B00()
            OP_JUMP lab_9EF0
        }
        case 0x3421561b8707ee63:
        {
// switch_9E68_case_0x3421561b8707ee63
            var_8 = 0;
            pri = fun_11A10()
            OP_JUMP lab_9EF0
        }
        case 0x6bbea6ca438bf063:
        {
// switch_9E68_case_0x6bbea6ca438bf063
            var_8 = 0;
            pri = fun_11CE0()
            OP_JUMP lab_9EF0
        }
    }
}
// fun_9F00
fun_9F00() {
    pri = 0;
    return pri;
}
// fun_9F18
fun_9F18() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_97C8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9F70
fun_9F70() {
    var_8 = 2610993506854619934;
    var_16 = 8;
    pri = fun_0548(var_8)
    var_24 = 6712433672450853327;
    var_32 = 8;
    pri = fun_0548(var_24)
    var_40 = 2556148519277313732;
    var_48 = 8;
    pri = fun_0548(var_40)
    var_56 = 1656060553018210897;
    var_64 = 8;
    pri = fun_0548(var_56)
    var_72 = -4273768064731533314;
    var_80 = 8;
    pri = fun_0548(var_72)
    var_88 = -968882842724727458;
    var_96 = 8;
    pri = fun_0548(var_88)
    var_104 = -1528879600583155539;
    var_112 = 8;
    pri = fun_0548(var_104)
    pri = 0;
    return pri;
}
// fun_A0A0
fun_A0A0() {
    var_8 = 0;
    pri = fun_0578()
    pri = 0;
    return pri;
}
// fun_A0D0
fun_A0D0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_07B0(var_16, var_8)
    var_32 = 1;
    var_40 = 2556148519277313732;
    var_48 = 16;
    pri = fun_07B0(var_40, var_32)
    var_56 = 1;
    var_64 = 2610993506854619934;
    var_72 = 16;
    pri = fun_07B0(var_64, var_56)
    var_80 = 1;
    var_88 = 1656060553018210897;
    var_96 = 16;
    pri = fun_07B0(var_88, var_80)
    var_104 = 1;
    var_112 = 6712433672450853327;
    var_120 = 16;
    pri = fun_07B0(var_112, var_104)
    var_128 = 1;
    var_136 = -4273768064731533314;
    var_144 = 16;
    pri = fun_07B0(var_136, var_128)
    var_152 = 1;
    var_160 = -968882842724727458;
    var_168 = 16;
    pri = fun_07B0(var_160, var_152)
    var_176 = 1;
    var_184 = 8;
    pri = fun_0090(var_176)
    var_192 = 0;
    pri = fun_2A48()
    var_200 = 1;
    var_208 = 1103;
    var_216 = 1104;
    var_224 = 16;
    pri = fun_9770(var_216, var_208)
    var_232 = pri;
    var_240 = 1;
    var_248 = 24;
    pri = fun_2AF8(var_240, var_232, var_224)
    var_256 = 0;
    var_264 = -1528879600583155539;
    var_272 = 16;
    pri = fun_0778(var_264, var_256)
    var_280 = 1;
    var_288 = 1;
    OP_PUSH4_C 4636878028842991616, 4655564448859370291, 4649541763967064474, -4273768064731533314
    var_296 = 48;
    pri = fun_0720(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 1;
    var_312 = 1;
    OP_PUSH4_C 4631980364248226202, 4655388526998926131, 4650044020878632550, -968882842724727458
    var_320 = 48;
    pri = fun_0720(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 1;
    var_336 = 1;
    OP_PUSH4_C -4591082050132167885, 4654904741882704691, 4652179712264424653, 2610993506854619934
    var_344 = 48;
    pri = fun_0720(var_336, var_328, var_320, var_312, var_304, var_296)
    var_352 = 1;
    var_360 = 1;
    OP_PUSH4_C -4584207023826010112, 4656567203463902003, 4652674492496923853, 2556148519277313732
    var_368 = 48;
    pri = fun_0720(var_360, var_352, var_344, var_336, var_328, var_320)
    var_376 = 1;
    var_384 = 1;
    OP_PUSH4_C -4584558867546898432, 4656426465975546675, 4652947171380612301, 1656060553018210897
    var_392 = 48;
    pri = fun_0720(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 1;
    var_408 = 1;
    OP_PUSH4_C -4600989969312382976, 4654099459566521549, 4650801364487844659, 6712433672450853327
    var_416 = 48;
    pri = fun_0720(var_408, var_400, var_392, var_384, var_376, var_368)
    var_424 = 1;
    var_432 = 1;
    OP_PUSH4_C -4594797519824748544, 4653797313771208704, 4652240405306277888, -1528879600583155539
    var_440 = 48;
    pri = fun_0720(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 1;
    OP_PUSH4_C -4583960733221388288, 4656773471845272781, 4652664816794599424, 8802641224559852288
    var_464 = 48;
    pri = fun_0720(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 1;
    var_480 = 1;
    var_488 = -1;
    var_496 = -1;
    var_504 = 0;
    var_512 = 5;
    var_520 = -4273768064731533314;
    var_528 = 56;
    pri = fun_4A70(var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_536 = 1;
    var_544 = 1;
    var_552 = -1;
    var_560 = -1;
    var_568 = 0;
    var_576 = 5;
    var_584 = -968882842724727458;
    var_592 = 56;
    pri = fun_4A70(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 31768;
    pri = SoundPostEvent(var_600)
    var_608 = 0;
    var_616 = 4631952216750555136;
    var_624 = 0;
    OP_PUSH5_C 4654810755628762399, 4633805729472194806, 4646281228205592412, 4655775555091903283, 4637737934896842670
    var_632 = 4649465149996841042;
    var_640 = 1;
    pri = EvCameraMove(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 0;
    pri = fun_2E00()
    var_656 = 31720;
    var_664 = 8;
    var_672 = 16;
    pri = fun_02B0(var_664, var_656)
    var_680 = 0;
    pri = fun_0380()
    var_688 = 0;
    var_696 = 3;
    var_704 = 0;
    var_712 = 100;
    var_720 = -1;
    OP_PUSH2_C 6815911051858101105, -4273768064731533314
    var_728 = 56;
    pri = fun_2668(var_720, var_712, var_704, var_696, var_688, var_680, var_672)
    var_736 = 1;
    var_744 = 8;
    pri = fun_2800(var_736)
    var_752 = 0;
    pri = fun_28C0()
    var_760 = 0;
    var_768 = 4631952216750555136;
    var_776 = 3;
    OP_PUSH5_C 4654167189482792550, 4633805729472194806, 4648180040806296453, 4655455025462174024, 4637735120147075564
    var_784 = 4649962129252595794;
    var_792 = 15;
    pri = EvCameraMove(var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720)
    var_800 = 0;
    pri = fun_2E00()
    var_808 = 0;
    var_816 = 3;
    var_824 = 0;
    var_832 = 100;
    var_840 = -1;
    OP_PUSH2_C -3791131369929755495, -968882842724727458
    var_848 = 56;
    pri = fun_2668(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 1;
    var_864 = 8;
    pri = fun_2800(var_856)
    var_872 = 0;
    pri = fun_28C0()
    var_880 = 6;
    var_888 = 6;
    var_896 = 2610993506854619934;
    var_904 = 24;
    pri = fun_19F8(var_896, var_888, var_880)
    var_912 = 0;
    var_920 = 4631980364248226202;
    var_928 = 3;
    OP_PUSH5_C 4653949574141423124, 4635971679417983304, 4651129634679433462, 4655429780675200287, 4639200901088296305
    var_936 = 4652153060102567363;
    var_944 = 15;
    pri = EvCameraMove(var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888, var_880, var_872)
    var_952 = 1;
    var_960 = 1;
    var_968 = -1;
    var_976 = -1;
    var_984 = 0;
    var_992 = 11;
    var_1000 = 2610993506854619934;
    var_1008 = 56;
    pri = fun_4A70(var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1016 = 0;
    var_1024 = 3;
    var_1032 = 0;
    var_1040 = 100;
    var_1048 = -1;
    OP_PUSH2_C -7254137270099611709, 2610993506854619934
    var_1056 = 56;
    pri = fun_2668(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1064 = 1;
    var_1072 = 8;
    pri = fun_2800(var_1064)
    var_1080 = 0;
    pri = fun_28C0()
    var_1088 = 2610993506854619934;
    var_1096 = 8;
    pri = fun_19C0(var_1088)
    var_1104 = 0;
    var_1112 = 4631952216750555136;
    var_1120 = 3;
    OP_PUSH5_C 4655342831295675761, 4636587405929537864, 4650611808683216077, 4656750404091322040, 4639521078874304676
    var_1128 = 4651860853892369613;
    var_1136 = 100;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 1;
    var_1152 = 3;
    var_1160 = 0;
    var_1168 = 11;
    var_1176 = 2610993506854619934;
    var_1184 = 40;
    pri = fun_6DA8(var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH2_C -7254136170587983498, 2610993506854619934
    var_1232 = 56;
    pri = fun_2668(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1240 = 2610993506854619934;
    var_1248 = 8;
    pri = fun_0BE0(var_1240)
    var_1256 = 1;
    var_1264 = 8;
    pri = fun_2800(var_1256)
    var_1272 = 0;
    pri = fun_28C0()
    var_1280 = 8;
    var_1288 = 6712433672450853327;
    var_1296 = 16;
    pri = fun_1908(var_1288, var_1280)
    var_1304 = 1;
    var_1312 = -1;
    var_1320 = -1;
    var_1328 = 3;
    var_1336 = 0;
    var_1344 = 0;
    var_1352 = 6712433672450853327;
    var_1360 = 56;
    pri = fun_2E90(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1368 = 0;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 100;
    var_1400 = -1;
    OP_PUSH2_C 4615593430361868713, 6712433672450853327
    var_1408 = 56;
    pri = fun_2668(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 6712433672450853327;
    var_1424 = 8;
    pri = fun_0BE0(var_1416)
    var_1432 = 1;
    var_1440 = 8;
    pri = fun_2800(var_1432)
    var_1448 = 0;
    pri = fun_28C0()
    var_1456 = 6712433672450853327;
    var_1464 = 8;
    pri = fun_1948(var_1456)
    var_1472 = 0;
    var_1480 = 4631952216750555136;
    var_1488 = 0;
    OP_PUSH5_C 4654851481539455222, 4633095005156000399, 4647826613788664136, 4655801723468644352, 4637390313300605010
    var_1496 = 4650315996074879222;
    var_1504 = 1;
    pri = EvCameraMove(var_1504, var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1512 = 0;
    pri = fun_2E00()
    var_1520 = 0;
    var_1528 = 1;
    var_1536 = 40;
    OP_PUSH2_C -968882842724727458, -4273768064731533314
    var_1544 = 40;
    pri = fun_1260(var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1552 = 0;
    var_1560 = 3;
    var_1568 = 0;
    var_1576 = 100;
    var_1584 = -1;
    OP_PUSH2_C 6815907753323216472, -4273768064731533314
    var_1592 = 56;
    pri = fun_2668(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1600 = 1;
    var_1608 = 8;
    pri = fun_2800(var_1600)
    var_1616 = 0;
    pri = fun_28C0()
    var_1624 = 0;
    var_1632 = 1;
    var_1640 = 40;
    OP_PUSH2_C -4273768064731533314, -968882842724727458
    var_1648 = 40;
    pri = fun_1260(var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C -3791134668464640128, -968882842724727458
    var_1696 = 56;
    pri = fun_2668(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_2800(var_1704)
    var_1720 = 0;
    pri = fun_28C0()
    var_1728 = 0;
    var_1736 = 4631952216750555136;
    var_1744 = 3;
    OP_PUSH5_C 4655186480742206013, 4636733772917427405, 4650531236471132652, 4656601552207153725, 4639587929181273457
    var_1752 = 4651872816578879816;
    var_1760 = 10;
    pri = EvCameraMove(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1768 = 15;
    var_1776 = -4273768064731533314;
    var_1784 = 16;
    pri = fun_18C8(var_1776, var_1768)
    var_1792 = 15;
    var_1800 = -4273768064731533314;
    var_1808 = 16;
    pri = fun_18C8(var_1800, var_1792)
    var_1816 = 1;
    var_1824 = 1;
    var_1832 = -1;
    var_1840 = 2;
    var_1848 = -4273768064731533314;
    var_1856 = 40;
    pri = fun_1318(var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1864 = 1;
    var_1872 = 1;
    var_1880 = -1;
    var_1888 = 2;
    var_1896 = -968882842724727458;
    var_1904 = 40;
    pri = fun_1318(var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1912 = 5;
    var_1920 = 5;
    var_1928 = -4273768064731533314;
    var_1936 = 24;
    pri = fun_19F8(var_1928, var_1920, var_1912)
    var_1944 = 5;
    var_1952 = 5;
    var_1960 = -968882842724727458;
    var_1968 = 24;
    pri = fun_19F8(var_1960, var_1952, var_1944)
    var_1976 = 0;
    var_1984 = 3;
    var_1992 = 0;
    var_2000 = 100;
    var_2008 = -1;
    OP_PUSH2_C -5426583930292462540, -4273768064731533314
    var_2016 = 56;
    pri = fun_2668(var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2024 = 1;
    var_2032 = 8;
    pri = fun_2800(var_2024)
    var_2040 = 0;
    pri = fun_28C0()
    var_2048 = 31928;
    pri = SoundPostEvent(var_2048)
    var_2056 = -4273768064731533314;
    var_2064 = 8;
    pri = fun_1A60(var_2056)
    var_2072 = -968882842724727458;
    var_2080 = 8;
    pri = fun_1A60(var_2072)
    var_2088 = 2610993506854619934;
    var_2096 = 8;
    pri = fun_1948(var_2088)
    var_2104 = 6;
    var_2112 = 6;
    var_2120 = 2556148519277313732;
    var_2128 = 24;
    pri = fun_19F8(var_2120, var_2112, var_2104)
    var_2136 = 1;
    var_2144 = 1;
    var_2152 = 30;
    OP_PUSH2_C 2556148519277313732, -4273768064731533314
    var_2160 = 40;
    pri = fun_1260(var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2168 = 1;
    var_2176 = 1;
    var_2184 = 30;
    OP_PUSH2_C 2556148519277313732, -968882842724727458
    var_2192 = 40;
    pri = fun_1260(var_2184, var_2176, var_2168, var_2160, var_2152)
    var_2200 = 1;
    var_2208 = 1;
    var_2216 = 30;
    OP_PUSH2_C 2556148519277313732, 6712433672450853327
    var_2224 = 40;
    pri = fun_1260(var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2232 = 1;
    var_2240 = 1;
    var_2248 = 30;
    OP_PUSH2_C 2556148519277313732, 2610993506854619934
    var_2256 = 40;
    pri = fun_1260(var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2264 = 1;
    var_2272 = 0;
    OP_PUSH5_C 4641240890982006784, -4273768064731533314, 4655027887185015603, 4651415331780794778, 4611686018427387904
    var_2280 = 2556148519277313732;
    var_2288 = 64;
    pri = fun_08A0(var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232, var_2224)
    var_2296 = 0;
    var_2304 = 3;
    var_2312 = 0;
    var_2320 = 100;
    var_2328 = -1;
    OP_PUSH2_C 8747635390078802794, 2556148519277313732
    var_2336 = 56;
    pri = fun_2668(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280)
    var_2344 = 2556148519277313732;
    var_2352 = 8;
    pri = fun_0A08(var_2344)
    var_2360 = 1;
    var_2368 = 8;
    pri = fun_2800(var_2360)
    var_2376 = 0;
    pri = fun_28C0()
    var_2384 = 5;
    var_2392 = 5;
    var_2400 = 2610993506854619934;
    var_2408 = 24;
    pri = fun_19F8(var_2400, var_2392, var_2384)
    var_2416 = 0;
    var_2424 = 0;
    var_2432 = 0;
    var_2440 = 0;
    OP_PUSH2_C 2556148519277313732, 2610993506854619934
    var_2448 = 48;
    pri = fun_09B0(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2456 = 0;
    var_2464 = 3;
    var_2472 = 0;
    var_2480 = 100;
    var_2488 = -1;
    OP_PUSH2_C -7254135071076355287, 2610993506854619934
    var_2496 = 56;
    pri = fun_2668(var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2504 = 2610993506854619934;
    var_2512 = 8;
    pri = fun_0A08(var_2504)
    var_2520 = 1;
    var_2528 = 8;
    pri = fun_2800(var_2520)
    var_2536 = 0;
    pri = fun_28C0()
    var_2544 = 0;
    var_2552 = 4631952216750555136;
    var_2560 = 0;
    OP_PUSH5_C 4653898336899568763, 4632527833077928428, 4650758967319477617, 4655414871297527644, 4639227993054804705
    var_2568 = 4651196660908262687;
    var_2576 = 1;
    pri = EvCameraMove(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2584 = 0;
    pri = fun_2E00()
    var_2592 = 0;
    var_2600 = 4631952216750555136;
    var_2608 = 3;
    OP_PUSH5_C 4653890904200964997, 4632527833077928428, 4650861881607837450, 4655407702481714545, 4639222715398991380
    var_2616 = 4651298607626390077;
    var_2624 = 120;
    pri = EvCameraMove(var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552)
    var_2632 = 1;
    var_2640 = 1;
    var_2648 = -1;
    OP_PUSH2_C 2556148519277313732, -4273768064731533314
    var_2656 = 40;
    pri = fun_1260(var_2648, var_2640, var_2632, var_2624, var_2616)
    var_2664 = 1;
    var_2672 = 1;
    var_2680 = -1;
    OP_PUSH2_C 2556148519277313732, -968882842724727458
    var_2688 = 40;
    pri = fun_1260(var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2696 = 1;
    var_2704 = -1;
    var_2712 = -1;
    var_2720 = 3;
    var_2728 = 0;
    var_2736 = 1;
    var_2744 = 2556148519277313732;
    var_2752 = 56;
    pri = fun_2E90(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2760 = 0;
    var_2768 = 3;
    var_2776 = 0;
    var_2784 = 100;
    var_2792 = -1;
    OP_PUSH2_C 8747634290567174583, 2556148519277313732
    var_2800 = 56;
    pri = fun_2668(var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2808 = 1;
    var_2816 = 8;
    pri = fun_2800(var_2808)
    var_2824 = 0;
    pri = fun_28C0()
    var_2832 = 0;
    var_2840 = 3;
    var_2848 = 0;
    var_2856 = 100;
    var_2864 = -1;
    OP_PUSH2_C 8747633191055546372, 2556148519277313732
    var_2872 = 56;
    pri = fun_2668(var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816)
    var_2880 = 1;
    var_2888 = 1;
    var_2896 = -1;
    OP_PUSH2_C 2556148519277313732, -4273768064731533314
    var_2904 = 40;
    pri = fun_1260(var_2896, var_2888, var_2880, var_2872, var_2864)
    var_2912 = 1;
    var_2920 = 1;
    var_2928 = -1;
    OP_PUSH2_C 2556148519277313732, -968882842724727458
    var_2936 = 40;
    pri = fun_1260(var_2928, var_2920, var_2912, var_2904, var_2896)
    var_2944 = 2556148519277313732;
    var_2952 = 8;
    pri = fun_0BE0(var_2944)
    var_2960 = -4273768064731533314;
    var_2968 = 8;
    pri = fun_17C8(var_2960)
    var_2976 = -968882842724727458;
    var_2984 = 8;
    pri = fun_17C8(var_2976)
    var_2992 = 1;
    var_3000 = 8;
    pri = fun_2800(var_2992)
    var_3008 = 0;
    pri = fun_28C0()
    var_3016 = 8;
    var_3024 = -4273768064731533314;
    var_3032 = 16;
    pri = fun_1908(var_3024, var_3016)
    var_3040 = 2610993506854619934;
    var_3048 = 8;
    pri = fun_1A60(var_3040)
    var_3056 = 1;
    var_3064 = 1;
    var_3072 = 50;
    var_3080 = 3;
    var_3088 = -4273768064731533314;
    var_3096 = 40;
    pri = fun_1318(var_3088, var_3080, var_3072, var_3064, var_3056)
    var_3104 = 1;
    var_3112 = 1;
    OP_PUSH4_C 4612811918334230528, 4655419313324503859, 4649569031855433318, -968882842724727458
    var_3120 = 48;
    pri = fun_0720(var_3112, var_3104, var_3096, var_3088, var_3080, var_3072)
    var_3128 = 0;
    var_3136 = 4631952216750555136;
    var_3144 = 0;
    OP_PUSH5_C 4654810271843646177, 4632336430093765181, 4649633507217286103, 4655719128155165819, 4639332842483629425
    var_3152 = 4652088056975133245;
    var_3160 = 1;
    pri = EvCameraMove(var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3168 = 0;
    pri = fun_2E00()
    var_3176 = 0;
    var_3184 = 3;
    var_3192 = 0;
    var_3200 = 100;
    var_3208 = -1;
    OP_PUSH2_C 6815908852834844683, -4273768064731533314
    var_3216 = 56;
    pri = fun_2668(var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160)
    var_3224 = 1;
    var_3232 = 8;
    pri = fun_2800(var_3224)
    var_3240 = 0;
    pri = fun_28C0()
    var_3248 = 1;
    var_3256 = 1;
    var_3264 = 50;
    var_3272 = 3;
    var_3280 = -968882842724727458;
    var_3288 = 40;
    pri = fun_1318(var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3296 = 8;
    var_3304 = -968882842724727458;
    var_3312 = 16;
    pri = fun_1908(var_3304, var_3296)
    var_3320 = 0;
    var_3328 = 3;
    var_3336 = 0;
    var_3344 = 100;
    var_3352 = -1;
    OP_PUSH2_C -3791133568953011917, -968882842724727458
    var_3360 = 56;
    pri = fun_2668(var_3352, var_3344, var_3336, var_3328, var_3320, var_3312, var_3304)
    var_3368 = 1;
    var_3376 = 8;
    pri = fun_2800(var_3368)
    var_3384 = 0;
    pri = fun_28C0()
    var_3392 = -1;
    var_3400 = -4273768064731533314;
    var_3408 = 16;
    pri = fun_1788(var_3400, var_3392)
    var_3416 = -1;
    var_3424 = -968882842724727458;
    var_3432 = 16;
    pri = fun_1788(var_3424, var_3416)
    var_3440 = 4;
    var_3448 = 7;
    var_3456 = 2556148519277313732;
    var_3464 = 24;
    pri = fun_19F8(var_3456, var_3448, var_3440)
    var_3472 = 0;
    var_3480 = 4631952216750555136;
    var_3488 = 0;
    OP_PUSH5_C 4653987177439093064, 4632816344929056850, 4651538389122175468, 4655508857551469937, 4639450358286406124
    var_3496 = 4651278288651508777;
    var_3504 = 1;
    pri = EvCameraMove(var_3504, var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448, var_3440, var_3432)
    var_3512 = 0;
    pri = fun_2E00()
    var_3520 = 0;
    var_3528 = 4631952216750555136;
    var_3536 = 3;
    OP_PUSH5_C 4653992587036301722, 4632816344929056850, 4651665052861695263, 4655514311129143706, 4639450358286406124
    var_3544 = 4651404952391028572;
    var_3552 = 120;
    pri = EvCameraMove(var_3552, var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496, var_3488, var_3480)
    var_3560 = 1;
    var_3568 = -1;
    var_3576 = -1;
    var_3584 = 3;
    var_3592 = 0;
    var_3600 = 1;
    var_3608 = 2556148519277313732;
    var_3616 = 56;
    pri = fun_2E90(var_3608, var_3600, var_3592, var_3584, var_3576, var_3568, var_3560)
    var_3624 = 0;
    var_3632 = 3;
    var_3640 = 0;
    var_3648 = 100;
    var_3656 = -1;
    OP_PUSH2_C 8747632091543918161, 2556148519277313732
    var_3664 = 56;
    pri = fun_2668(var_3656, var_3648, var_3640, var_3632, var_3624, var_3616, var_3608)
    var_3672 = 1;
    var_3680 = 8;
    pri = fun_2800(var_3672)
    var_3688 = 0;
    pri = fun_28C0()
    var_3696 = 2;
    var_3704 = 6;
    var_3712 = 2610993506854619934;
    var_3720 = 24;
    pri = fun_19F8(var_3712, var_3704, var_3696)
    var_3728 = 1;
    var_3736 = -1;
    var_3744 = -1;
    var_3752 = 3;
    var_3760 = 0;
    var_3768 = 4;
    var_3776 = 2610993506854619934;
    var_3784 = 56;
    pri = fun_2E90(var_3776, var_3768, var_3760, var_3752, var_3744, var_3736, var_3728)
    var_3792 = 0;
    var_3800 = 3;
    var_3808 = 0;
    var_3816 = 100;
    var_3824 = -1;
    OP_PUSH2_C -7254133971564727076, 2610993506854619934
    var_3832 = 56;
    pri = fun_2668(var_3824, var_3816, var_3808, var_3800, var_3792, var_3784, var_3776)
    var_3840 = 2556148519277313732;
    var_3848 = 8;
    pri = fun_0BE0(var_3840)
    var_3856 = 2556148519277313732;
    var_3864 = 8;
    pri = fun_0BE0(var_3856)
    var_3872 = 1;
    var_3880 = 8;
    pri = fun_2800(var_3872)
    var_3888 = 0;
    pri = fun_28C0()
    var_3896 = 32176;
    pri = SoundPostEvent(var_3896)
    var_3904 = 2556148519277313732;
    var_3912 = 8;
    pri = fun_1A60(var_3904)
    var_3920 = 2610993506854619934;
    var_3928 = 8;
    pri = fun_1A60(var_3920)
    var_3936 = -1;
    var_3944 = -4273768064731533314;
    var_3952 = 16;
    pri = fun_1788(var_3944, var_3936)
    var_3960 = -1;
    var_3968 = -968882842724727458;
    var_3976 = 16;
    pri = fun_1788(var_3968, var_3960)
    var_3984 = -4273768064731533314;
    var_3992 = 8;
    pri = fun_1A60(var_3984)
    var_4000 = -968882842724727458;
    var_4008 = 8;
    pri = fun_1A60(var_4000)
    var_4016 = 0;
    var_4024 = 4631952216750555136;
    var_4032 = 0;
    OP_PUSH5_C 4656182638276971069, 4640176915570040504, 4651801480264469709, 4657213166545220403, 4643364619681288684
    var_4040 = 4651541379793803018;
    var_4048 = 1;
    pri = EvCameraMove(var_4048, var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992, var_3984, var_3976)
    var_4056 = 0;
    pri = fun_2E00()
    var_4064 = 0;
    var_4072 = 4631952216750555136;
    var_4080 = 3;
    OP_PUSH5_C 4655306899255680041, 4634437640794910228, 4650891172597601403, 4656749590452717486, 4640440798360706744
    var_4088 = 4651558356253335880;
    var_4096 = 80;
    pri = EvCameraMove(var_4096, var_4088, var_4080, var_4072, var_4064, var_4056, var_4048, var_4040, var_4032, var_4024)
    var_4104 = 1;
    var_4112 = 0;
    OP_PUSH5_C 4641240890982006784, -4273768064731533314, 4655792267668645478, 4651837544245860762, 4607182418800017408
    var_4120 = 8802641224559852288;
    var_4128 = 64;
    pri = fun_08A0(var_4120, var_4112, var_4104, var_4096, var_4088, var_4080, var_4072, var_4064)
    var_4136 = 1;
    var_4144 = 0;
    OP_PUSH5_C 4641240890982006784, -4273768064731533314, 4655546856673325875, 4652331444869057741, 4607182418800017408
    var_4152 = 1656060553018210897;
    var_4160 = 64;
    pri = fun_08A0(var_4152, var_4144, var_4136, var_4128, var_4120, var_4112, var_4104, var_4096)
    var_4168 = 0;
    var_4176 = 0;
    var_4184 = 0;
    var_4192 = 20;
    pri = float(var_4192)
    var_4200 = pri;
    var_4208 = 2556148519277313732;
    var_4216 = 40;
    pri = fun_0960(var_4208, var_4200, var_4192, var_4184, var_4176)
    var_4224 = 1;
    var_4232 = 1;
    var_4240 = 30;
    OP_PUSH2_C 8802641224559852288, 2610993506854619934
    var_4248 = 40;
    pri = fun_1260(var_4240, var_4232, var_4224, var_4216, var_4208)
    var_4256 = 0;
    var_4264 = 3;
    var_4272 = 0;
    var_4280 = 100;
    var_4288 = -1;
    OP_PUSH2_C -589393476495711385, 1656060553018210897
    var_4296 = 56;
    pri = fun_2668(var_4288, var_4280, var_4272, var_4264, var_4256, var_4248, var_4240)
    var_4304 = 8802641224559852288;
    var_4312 = 8;
    pri = fun_0A08(var_4304)
    var_4320 = 1656060553018210897;
    var_4328 = 8;
    pri = fun_0A08(var_4320)
    var_4336 = 2556148519277313732;
    var_4344 = 8;
    pri = fun_0A08(var_4336)
    var_4352 = 1;
    var_4360 = 8;
    pri = fun_2800(var_4352)
    var_4368 = 0;
    pri = fun_28C0()
    var_4376 = 2610993506854619934;
    var_4384 = 8;
    pri = fun_1948(var_4376)
    var_4392 = 2;
    var_4400 = 2;
    var_4408 = 1656060553018210897;
    var_4416 = 24;
    pri = fun_19F8(var_4408, var_4400, var_4392)
    var_4424 = 0;
    var_4432 = 4629362646964817101;
    var_4440 = 0;
    OP_PUSH5_C 4655196860131972219, 4634842964761373573, 4652160448820706017, 4656453689883450409, 4642324921486063698
    var_4448 = 4650824938017144177;
    var_4456 = 1;
    pri = EvCameraMove(var_4456, var_4448, var_4440, var_4432, var_4424, var_4416, var_4408, var_4400, var_4392, var_4384)
    var_4464 = 0;
    pri = fun_2E00()
    var_4472 = 1;
    var_4480 = 1;
    var_4488 = 30;
    OP_PUSH2_C 2556148519277313732, 1656060553018210897
    var_4496 = 40;
    pri = fun_1260(var_4488, var_4480, var_4472, var_4464, var_4456)
    var_4504 = 1;
    var_4512 = 1;
    var_4520 = 30;
    OP_PUSH2_C 2556148519277313732, 8802641224559852288
    var_4528 = 40;
    pri = fun_1260(var_4520, var_4512, var_4504, var_4496, var_4488)
    var_4536 = 0;
    var_4544 = 3;
    var_4552 = 0;
    var_4560 = 100;
    var_4568 = -1;
    OP_PUSH2_C -589392376984083174, 1656060553018210897
    var_4576 = 56;
    pri = fun_2668(var_4568, var_4560, var_4552, var_4544, var_4536, var_4528, var_4520)
    var_4584 = 1;
    var_4592 = 8;
    pri = fun_2800(var_4584)
    var_4600 = 0;
    pri = fun_28C0()
    var_4608 = 0;
    var_4616 = 1;
    var_4624 = 40;
    var_4632 = 3;
    var_4640 = 2556148519277313732;
    var_4648 = 40;
    pri = fun_1318(var_4640, var_4632, var_4624, var_4616, var_4608)
    var_4656 = 0;
    var_4664 = 3;
    var_4672 = 0;
    var_4680 = 100;
    var_4688 = -1;
    OP_PUSH2_C 8747630992032289950, 2556148519277313732
    var_4696 = 56;
    pri = fun_2668(var_4688, var_4680, var_4672, var_4664, var_4656, var_4648, var_4640)
    var_4704 = 1;
    var_4712 = 8;
    pri = fun_2800(var_4704)
    var_4720 = 0;
    var_4728 = 6103953949767934038;
    var_4736 = 0;
    var_4744 = 24;
    pri = fun_28F0(var_4736, var_4728, var_4720)
    var_4752 = 0;
    var_4760 = 6103952850256305827;
    var_4768 = 1;
    var_4776 = 24;
    pri = fun_28F0(var_4768, var_4760, var_4752)
    var_4792 = 0;
    var_4800 = 0;
    var_4808 = 0;
    var_4816 = 1;
    var_4824 = 32;
    pri = fun_29D8(var_4816, var_4808, var_4800, var_4792)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_CA70
        case default:
        {
// switch_CA70_case_default
            var_8 = 15;
            var_16 = 2556148519277313732;
            var_24 = 16;
            pri = fun_18C8(var_16, var_8)
            var_32 = 1;
            var_40 = 1;
            OP_PUSH4_C 4633106264155068826, 4655300566068704051, 4650299107576276582, -968882842724727458
            var_48 = 48;
            pri = fun_0720(var_40, var_32, var_24, var_16, var_8, var_0)
            var_56 = 1;
            var_64 = 1;
            OP_PUSH4_C 4637370610052235264, 4655652409789592371, 4649796850664708506, -4273768064731533314
            var_72 = 48;
            pri = fun_0720(var_64, var_56, var_48, var_40, var_32, var_24)
            var_80 = 1;
            var_88 = 3;
            var_96 = 0;
            var_104 = 5;
            var_112 = -4273768064731533314;
            var_120 = 40;
            pri = fun_6DA8(var_112, var_104, var_96, var_88, var_80)
            var_128 = 1;
            var_136 = 3;
            var_144 = 0;
            var_152 = 5;
            var_160 = -968882842724727458;
            var_168 = 40;
            pri = fun_6DA8(var_160, var_152, var_144, var_136, var_128)
            var_176 = 0;
            var_184 = 4629362646964817101;
            var_192 = 0;
            OP_PUSH5_C 4654130333853029499, 4628428150042137723, 4652030882370488893, 4655523503046351913, 4640344041337462456
            var_200 = 4651262279762208358;
            var_208 = 1;
            pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 0;
            pri = fun_2E00()
            var_224 = -1;
            var_232 = 2556148519277313732;
            var_240 = 16;
            pri = fun_1788(var_232, var_224)
            var_248 = 1;
            var_256 = -1;
            var_264 = -1;
            var_272 = 3;
            var_280 = 0;
            var_288 = 0;
            var_296 = 2556148519277313732;
            var_304 = 56;
            pri = fun_2E90(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
            var_312 = 0;
            var_320 = 3;
            var_328 = 0;
            var_336 = 100;
            var_344 = -1;
            OP_PUSH2_C 8747629892520661739, 2556148519277313732
            var_352 = 56;
            pri = fun_2668(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
            var_360 = 1;
            var_368 = 8;
            pri = fun_2800(var_360)
            var_376 = 0;
            pri = fun_28C0()
            var_384 = 2556148519277313732;
            var_392 = 8;
            pri = fun_0BE0(var_384)
            var_400 = 6;
            var_408 = 6;
            var_416 = 2556148519277313732;
            var_424 = 24;
            pri = fun_19F8(var_416, var_408, var_400)
            var_432 = 6;
            var_440 = 6;
            var_448 = 1656060553018210897;
            var_456 = 24;
            pri = fun_19F8(var_448, var_440, var_432)
            var_464 = -1;
            var_472 = 1656060553018210897;
            var_480 = 16;
            pri = fun_1788(var_472, var_464)
            var_488 = -1;
            var_496 = 8802641224559852288;
            var_504 = 16;
            pri = fun_1788(var_496, var_488)
            var_512 = 0;
            var_520 = 4629362646964817101;
            var_528 = 0;
            OP_PUSH5_C 4655196860131972219, 4634842964761373573, 4652160448820706017, 4656453689883450409, 4642324921486063698
            var_536 = 4650824938017144177;
            var_544 = 1;
            pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
            var_552 = 0;
            pri = fun_2E00()
            var_560 = 0;
            var_568 = 0;
            var_576 = 0;
            var_584 = 0;
            OP_PUSH2_C -968882842724727458, 2556148519277313732
            var_592 = 48;
            pri = fun_09B0(var_584, var_576, var_568, var_560, var_552, var_544)
            var_600 = 0;
            var_608 = 3;
            var_616 = 0;
            var_624 = 100;
            var_632 = -1;
            OP_PUSH2_C 8747628793009033528, 2556148519277313732
            var_640 = 56;
            pri = fun_2668(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
            var_648 = 2556148519277313732;
            var_656 = 8;
            pri = fun_0A08(var_648)
            var_664 = 1;
            var_672 = 8;
            pri = fun_2800(var_664)
            var_680 = 0;
            pri = fun_28C0()
            var_688 = 6;
            var_696 = 6;
            var_704 = -4273768064731533314;
            var_712 = 24;
            pri = fun_19F8(var_704, var_696, var_688)
            var_720 = 6;
            var_728 = 6;
            var_736 = -968882842724727458;
            var_744 = 24;
            pri = fun_19F8(var_736, var_728, var_720)
            var_752 = 0;
            var_760 = 4629362646964817101;
            var_768 = 0;
            OP_PUSH5_C 4656100966553259868, 4639408137039899525, 4651789869421680394, 4656630271450871235, 4640866529262981612
            var_776 = 4652434447118347796;
            var_784 = 1;
            pri = EvCameraMove(var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712)
            var_792 = 0;
            pri = fun_2E00()
            var_800 = 0;
            var_808 = 3;
            var_816 = 0;
            var_824 = 100;
            var_832 = -1;
            OP_PUSH2_C 6815915449904613949, -4273768064731533314
            var_840 = 56;
            pri = fun_2668(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
            var_848 = 1;
            var_856 = 8;
            pri = fun_2800(var_848)
            var_864 = 0;
            pri = fun_28C0()
            var_872 = 0;
            var_880 = 0;
            var_888 = 0;
            var_896 = 0;
            OP_PUSH2_C -4273768064731533314, -968882842724727458
            var_904 = 48;
            pri = fun_09B0(var_896, var_888, var_880, var_872, var_864, var_856)
            var_912 = 0;
            var_920 = 3;
            var_928 = 0;
            var_936 = 100;
            var_944 = -1;
            OP_PUSH2_C -3791126971883242651, -968882842724727458
            var_952 = 56;
            pri = fun_2668(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
            var_960 = -968882842724727458;
            var_968 = 8;
            pri = fun_0A08(var_960)
            var_976 = 1;
            var_984 = 8;
            pri = fun_2800(var_976)
            var_992 = 0;
            pri = fun_28C0()
            var_1000 = 1;
            var_1008 = -1;
            var_1016 = -1;
            var_1024 = 3;
            var_1032 = 0;
            var_1040 = 0;
            var_1048 = -4273768064731533314;
            var_1056 = 56;
            pri = fun_2E90(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
            var_1064 = 0;
            var_1072 = 3;
            var_1080 = 0;
            var_1088 = 100;
            var_1096 = -1;
            OP_PUSH2_C 6815912151369729316, -4273768064731533314
            var_1104 = 56;
            pri = fun_2668(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
            var_1112 = -4273768064731533314;
            var_1120 = 8;
            pri = fun_0BE0(var_1112)
            var_1128 = 1;
            var_1136 = 8;
            pri = fun_2800(var_1128)
            var_1144 = 0;
            pri = fun_28C0()
            var_1152 = -1;
            var_1160 = -4273768064731533314;
            var_1168 = 16;
            pri = fun_1788(var_1160, var_1152)
            var_1176 = -1;
            var_1184 = -968882842724727458;
            var_1192 = 16;
            pri = fun_1788(var_1184, var_1176)
            var_1200 = 0;
            var_1208 = 0;
            var_1216 = 0;
            var_1224 = 90;
            pri = float(var_1224)
            var_1232 = pri;
            var_1240 = -4273768064731533314;
            var_1248 = 40;
            pri = fun_0960(var_1240, var_1232, var_1224, var_1216, var_1208)
            var_1256 = 0;
            var_1264 = 0;
            var_1272 = 0;
            var_1280 = 90;
            pri = float(var_1280)
            var_1288 = pri;
            var_1296 = -968882842724727458;
            var_1304 = 40;
            pri = fun_0960(var_1296, var_1288, var_1280, var_1272, var_1264)
            var_1312 = -4273768064731533314;
            var_1320 = 8;
            pri = fun_0A08(var_1312)
            var_1328 = -968882842724727458;
            var_1336 = 8;
            pri = fun_0A08(var_1328)
            var_1344 = 1;
            var_1352 = 1;
            var_1360 = -1;
            var_1368 = -1;
            var_1376 = 0;
            var_1384 = 9;
            var_1392 = -4273768064731533314;
            var_1400 = 56;
            pri = fun_4A70(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
            var_1408 = 1;
            var_1416 = 1;
            var_1424 = -1;
            var_1432 = -1;
            var_1440 = 0;
            var_1448 = 9;
            var_1456 = -968882842724727458;
            var_1464 = 56;
            pri = fun_4A70(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408)
            var_1472 = 5;
            var_1480 = 8;
            pri = fun_0090(var_1472)
            var_1488 = 2;
            var_1496 = 2;
            var_1504 = -4273768064731533314;
            var_1512 = 24;
            pri = fun_19F8(var_1504, var_1496, var_1488)
            var_1520 = 2;
            var_1528 = 2;
            var_1536 = -968882842724727458;
            var_1544 = 24;
            pri = fun_19F8(var_1536, var_1528, var_1520)
            var_1552 = 0;
            var_1560 = 4629362646964817101;
            var_1568 = 12;
            OP_PUSH5_C 4655607285832388444, 4636559962119308575, 4650399998763241308, 4656136634710464922, 4639091125847379149
            var_1576 = 4651260608504534139;
            var_1584 = 15;
            pri = EvCameraMove(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520, var_1512)
            var_1592 = 32424;
            pri = SoundPostEvent(var_1592)
            var_1600 = 0;
            var_1608 = 3;
            var_1616 = 0;
            var_1624 = 100;
            var_1632 = -1;
            OP_PUSH2_C -3791130270418127284, -968882842724727458
            var_1640 = 56;
            pri = fun_2668(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
            var_1648 = 1;
            var_1656 = 8;
            pri = fun_2800(var_1648)
            var_1664 = 0;
            pri = fun_28C0()
            var_1672 = 0;
            pri = fun_2E00()
            var_1688 = 227;
            var_1696 = 226;
            var_1704 = 225;
            var_1712 = 24;
            pri = fun_9668(var_1704, var_1696, var_1688)
            var_16 = pri;
            var_1720 = -1;
            var_1728 = 0;
            var_1736 = 0;
            var_1744 = 0;
            var_1752 = 223;
            var_1760 = 224;
            var_1768 = var_16;
            var_1776 = 56;
            pri = fun_2B98(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
            var_1784 = 0;
            pri = fun_2CC0()
            OP_JZER lab_D8D8
            var_1792 = 0;
            pri = fun_2DB0()
// lab_D8D8
            var_8 = 1;
            var_16 = 8802641224559852288;
            var_24 = 16;
            pri = fun_07B0(var_16, var_8)
            var_32 = 1;
            var_40 = 2556148519277313732;
            var_48 = 16;
            pri = fun_07B0(var_40, var_32)
            var_56 = 1;
            var_64 = 2610993506854619934;
            var_72 = 16;
            pri = fun_07B0(var_64, var_56)
            var_80 = 1;
            var_88 = 1656060553018210897;
            var_96 = 16;
            pri = fun_07B0(var_88, var_80)
            var_104 = 1;
            var_112 = 6712433672450853327;
            var_120 = 16;
            pri = fun_07B0(var_112, var_104)
            var_128 = 1;
            var_136 = -4273768064731533314;
            var_144 = 16;
            pri = fun_07B0(var_136, var_128)
            var_152 = 1;
            var_160 = -968882842724727458;
            var_168 = 16;
            pri = fun_07B0(var_160, var_152)
            var_176 = 1;
            var_184 = -1528879600583155539;
            var_192 = 16;
            pri = fun_0778(var_184, var_176)
            var_200 = 1;
            var_208 = 1;
            OP_PUSH4_C -4594797519824748544, 4653383897399164928, 4653120014608498688, -1528879600583155539
            var_216 = 48;
            pri = fun_0720(var_208, var_200, var_192, var_184, var_176, var_168)
            var_224 = 1;
            var_232 = 1;
            OP_PUSH4_C -4587338432941916160, 4655710903808190054, 4652970041222470042, 8802641224559852288
            var_240 = 48;
            pri = fun_0720(var_232, var_224, var_216, var_208, var_200, var_192)
            var_248 = 1;
            var_256 = 1;
            OP_PUSH4_C -4588598033462696346, 4654500121603683123, 4652902751110850150, 2610993506854619934
            var_264 = 48;
            pri = fun_0720(var_256, var_248, var_240, var_232, var_224, var_216)
            var_272 = 1;
            var_280 = 1;
            OP_PUSH4_C -4587338432941916160, 4655494080115192627, 4653351791659633869, 1656060553018210897
            var_288 = 48;
            pri = fun_0720(var_280, var_272, var_264, var_256, var_248, var_240)
            var_296 = 1;
            var_304 = 1;
            OP_PUSH4_C -4587338432941916160, 4655238993417548595, 4652907588962012365, 2556148519277313732
            var_312 = 48;
            pri = fun_0720(var_304, var_296, var_288, var_280, var_272, var_264)
            var_320 = 1;
            var_328 = 1;
            OP_PUSH4_C -4600989969312382976, 4653554101799144653, 4651751342534243123, 6712433672450853327
            var_336 = 48;
            pri = fun_0720(var_328, var_320, var_312, var_304, var_296, var_288)
            var_344 = 1;
            var_352 = 1;
            OP_PUSH4_C 4636033603912859648, 4655705186347725619, 4651344963036617114, -4273768064731533314
            var_360 = 48;
            pri = fun_0720(var_352, var_344, var_336, var_328, var_320, var_312)
            var_368 = 1;
            var_376 = 1;
            OP_PUSH4_C 4636033603912859648, 4655247789510570803, 4651389823111030374, -968882842724727458
            var_384 = 48;
            pri = fun_0720(var_376, var_368, var_360, var_352, var_344, var_336)
            var_392 = 1;
            var_400 = 1;
            var_408 = -1;
            var_416 = -1;
            var_424 = 0;
            var_432 = 9;
            var_440 = -4273768064731533314;
            var_448 = 56;
            pri = fun_4A70(var_440, var_432, var_424, var_416, var_408, var_400, var_392)
            var_456 = 1;
            var_464 = 1;
            var_472 = -1;
            var_480 = -1;
            var_488 = 0;
            var_496 = 9;
            var_504 = -968882842724727458;
            var_512 = 56;
            pri = fun_4A70(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
            var_520 = 0;
            var_528 = 4628236747057974477;
            var_536 = 0;
            OP_PUSH5_C 4656240912393243197, 4640643460343938417, 4649972156798641111, 4656656175944821637, 4642414993478611108
            var_544 = 4648919704268533924;
            var_552 = 1;
            pri = EvCameraMove(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
            var_560 = 0;
            pri = fun_2E00()
            var_568 = 0;
            var_576 = 4628236747057974477;
            var_584 = 3;
            OP_PUSH5_C 4655975138442577183, 4640050251830520709, 4650645761602281800, 4656390445974620733, 4641821433121472512
            var_592 = 4649593221111244390;
            var_600 = 80;
            pri = EvCameraMove(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528)
            var_608 = 2;
            var_616 = 2;
            var_624 = 2556148519277313732;
            var_632 = 24;
            pri = fun_19F8(var_624, var_616, var_608)
            var_640 = 3;
            var_648 = 3;
            var_656 = -4273768064731533314;
            var_664 = 24;
            pri = fun_19F8(var_656, var_648, var_640)
            var_672 = 3;
            var_680 = 3;
            var_688 = -968882842724727458;
            var_696 = 24;
            pri = fun_19F8(var_688, var_680, var_672)
            var_704 = 15;
            var_712 = 8;
            pri = fun_0090(var_704)
            var_720 = 31720;
            var_728 = 8;
            var_736 = 16;
            pri = fun_02B0(var_728, var_720)
            var_744 = 0;
            pri = fun_0380()
            var_752 = 1;
            var_760 = 3;
            var_768 = 0;
            var_776 = 9;
            var_784 = -4273768064731533314;
            var_792 = 40;
            pri = fun_6DA8(var_784, var_776, var_768, var_760, var_752)
            var_800 = 1;
            var_808 = 3;
            var_816 = 0;
            var_824 = 9;
            var_832 = -968882842724727458;
            var_840 = 40;
            pri = fun_6DA8(var_832, var_824, var_816, var_808, var_800)
            var_848 = 1;
            var_856 = -1;
            var_864 = -1;
            var_872 = 3;
            var_880 = 0;
            var_888 = 0;
            var_896 = 2556148519277313732;
            var_904 = 56;
            pri = fun_2E90(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
            var_912 = 0;
            var_920 = 3;
            var_928 = 0;
            var_936 = 100;
            var_944 = -1;
            OP_PUSH2_C 8747627693497405317, 2556148519277313732
            var_952 = 56;
            pri = fun_2668(var_944, var_936, var_928, var_920, var_912, var_904, var_896)
            var_960 = 2556148519277313732;
            var_968 = 8;
            pri = fun_0BE0(var_960)
            var_976 = 1;
            var_984 = 8;
            pri = fun_2800(var_976)
            var_992 = 0;
            pri = fun_28C0()
            var_1000 = 0;
            var_1008 = 4628236747057974477;
            var_1016 = 0;
            OP_PUSH5_C 4655629539947734630, 4639137217374815519, 4651390262915681485, 4656153831072323338, 4640902417322512220
            var_1024 = 4652222637198373028;
            var_1032 = 1;
            pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
            var_1040 = 0;
            pri = fun_2E00()
            var_1048 = 0;
            var_1056 = 4628236747057974477;
            var_1064 = 3;
            OP_PUSH5_C 4655580457748670710, 4639137217374815519, 4651513320257062175, 4656104880814654751, 4640901361791349555
            var_1072 = 4652284077908133151;
            var_1080 = 240;
            pri = EvCameraMove(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
            var_1088 = 1;
            var_1096 = -1;
            var_1104 = -1;
            var_1112 = 3;
            var_1120 = 0;
            var_1128 = 1;
            var_1136 = -4273768064731533314;
            var_1144 = 56;
            pri = fun_2E90(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
            var_1152 = 0;
            var_1160 = 3;
            var_1168 = 0;
            var_1176 = 100;
            var_1184 = -1;
            OP_PUSH2_C 6815913250881357527, -4273768064731533314
            var_1192 = 56;
            pri = fun_2668(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
            var_1200 = -4273768064731533314;
            var_1208 = 8;
            pri = fun_1A60(var_1200)
            var_1216 = 1;
            var_1224 = 8;
            pri = fun_2800(var_1216)
            var_1232 = 0;
            pri = fun_28C0()
            var_1240 = 1;
            var_1248 = -1;
            var_1256 = -1;
            var_1264 = 3;
            var_1272 = 0;
            var_1280 = 0;
            var_1288 = -968882842724727458;
            var_1296 = 56;
            pri = fun_2E90(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
            var_1304 = 0;
            var_1312 = 3;
            var_1320 = 0;
            var_1328 = 100;
            var_1336 = -1;
            OP_PUSH2_C -3791129170906499073, -968882842724727458
            var_1344 = 56;
            pri = fun_2668(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
            var_1352 = -968882842724727458;
            var_1360 = 8;
            pri = fun_1A60(var_1352)
            var_1368 = -4273768064731533314;
            var_1376 = 8;
            pri = fun_0BE0(var_1368)
            var_1384 = -968882842724727458;
            var_1392 = 8;
            pri = fun_0BE0(var_1384)
            var_1400 = 1;
            var_1408 = 8;
            pri = fun_2800(var_1400)
            var_1416 = 0;
            pri = fun_28C0()
            var_1424 = 0;
            var_1432 = 4628236747057974477;
            var_1440 = 0;
            OP_PUSH5_C 4656756055581088809, 4641167003800620237, 4653686263096803328, 4657018333084778496, 4642929388998549832
            var_1448 = 4654104385378613985;
            var_1456 = 1;
            pri = EvCameraMove(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
            var_1464 = 0;
            pri = fun_2E00()
            var_1472 = 8;
            var_1480 = 1656060553018210897;
            var_1488 = 16;
            pri = fun_1908(var_1480, var_1472)
            var_1496 = 1;
            var_1504 = 1;
            var_1512 = -1;
            var_1520 = -1;
            var_1528 = 0;
            var_1536 = 1;
            var_1544 = 1656060553018210897;
            var_1552 = 56;
            pri = fun_4A70(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
            var_1560 = 0;
            var_1568 = 3;
            var_1576 = 0;
            var_1584 = 100;
            var_1592 = -1;
            OP_PUSH2_C -589391277472454963, 1656060553018210897
            var_1600 = 56;
            pri = fun_2668(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
            var_1608 = 1;
            var_1616 = 8;
            pri = fun_2800(var_1608)
            var_1624 = 0;
            pri = fun_28C0()
            var_1632 = 1;
            var_1640 = 3;
            var_1648 = 0;
            var_1656 = 1;
            var_1664 = 1656060553018210897;
            var_1672 = 40;
            pri = fun_6DA8(var_1664, var_1656, var_1648, var_1640, var_1632)
            var_1680 = 1656060553018210897;
            var_1688 = 8;
            pri = fun_0BE0(var_1680)
            var_1696 = 1656060553018210897;
            var_1704 = 8;
            pri = fun_1948(var_1696)
            var_1712 = 6;
            var_1720 = 6;
            var_1728 = 2556148519277313732;
            var_1736 = 24;
            pri = fun_19F8(var_1728, var_1720, var_1712)
            var_1744 = 1;
            var_1752 = 0;
            var_1760 = 4641240890982006784;
            var_1768 = 0;
            var_1776 = 0;
            OP_PUSH4_C 4653665372375875584, 4652873724003876864, 4607182418800017408, -1528879600583155539
            var_1784 = 72;
            pri = fun_0828(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
            var_1792 = 1;
            var_1800 = 1;
            var_1808 = -1;
            var_1816 = -1;
            var_1824 = 0;
            var_1832 = 22;
            var_1840 = 2556148519277313732;
            var_1848 = 56;
            pri = fun_4A70(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792)
            var_1856 = 0;
            var_1864 = 3;
            var_1872 = 0;
            var_1880 = 100;
            var_1888 = -1;
            OP_PUSH2_C 8747626593985777106, 2556148519277313732
            var_1896 = 56;
            pri = fun_2668(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
            var_1904 = 1;
            var_1912 = 8;
            pri = fun_2800(var_1904)
            var_1920 = 0;
            pri = fun_28C0()
            var_1928 = 32568;
            var_1936 = 2556148519277313732;
            var_1944 = 16;
            pri = fun_0DE0(var_1936, var_1928)
            var_1952 = 1;
            var_1960 = 3;
            var_1968 = 0;
            var_1976 = 22;
            var_1984 = 2556148519277313732;
            var_1992 = 40;
            pri = fun_6DA8(var_1984, var_1976, var_1968, var_1960, var_1952)
            var_2000 = 2556148519277313732;
            var_2008 = 8;
            pri = fun_0BE0(var_2000)
            var_2016 = -1528879600583155539;
            var_2024 = 8;
            pri = fun_0A08(var_2016)
            var_2032 = 2556148519277313732;
            var_2040 = 8;
            pri = fun_1A60(var_2032)
            var_2048 = 4;
            var_2056 = 4;
            var_2064 = 2610993506854619934;
            var_2072 = 24;
            pri = fun_19F8(var_2064, var_2056, var_2048)
            var_2080 = 0;
            var_2088 = 4628236747057974477;
            var_2096 = 0;
            OP_PUSH5_C 4654695746712497029, 4639395822509668434, 4652694151764828488, 4655370275105905050, 4640933731413671281
            var_2104 = 4652613359650419507;
            var_2112 = 1;
            pri = EvCameraMove(var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
            var_2120 = 0;
            pri = fun_2E00()
            var_2128 = 0;
            var_2136 = 4628236747057974477;
            var_2144 = 3;
            OP_PUSH5_C 4654458999868804301, 4639100625627843133, 4652722519164825108, 4655133528262212321, 4640638182688125092
            var_2152 = 4652641727050416128;
            var_2160 = 75;
            pri = EvCameraMove(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
            var_2168 = 1;
            var_2176 = -1;
            var_2184 = -1;
            var_2192 = 3;
            var_2200 = 0;
            var_2208 = 0;
            var_2216 = -1528879600583155539;
            var_2224 = 56;
            pri = fun_2E90(var_2216, var_2208, var_2200, var_2192, var_2184, var_2176, var_2168)
            var_2232 = 0;
            var_2240 = 1;
            var_2248 = 30;
            OP_PUSH2_C -1528879600583155539, 2610993506854619934
            var_2256 = 40;
            pri = fun_1260(var_2248, var_2240, var_2232, var_2224, var_2216)
            var_2264 = 0;
            var_2272 = 3;
            var_2280 = 0;
            var_2288 = 100;
            var_2296 = -1;
            OP_PUSH2_C 8269694298607158483, -1528879600583155539
            var_2304 = 56;
            pri = fun_2668(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248)
            var_2312 = -1528879600583155539;
            var_2320 = 8;
            pri = fun_0BE0(var_2312)
            var_2328 = 1;
            var_2336 = 8;
            pri = fun_2800(var_2328)
            var_2344 = 0;
            pri = fun_28C0()
            var_2352 = 0;
            var_2360 = 4628236747057974477;
            var_2368 = 3;
            OP_PUSH5_C 4656818441870848819, 4640223007097476874, 4652254391094183199, 4657155816018715607, 4641756693876829061
            var_2376 = 4652129398612337623;
            var_2384 = 75;
            pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
            var_2392 = 1;
            var_2400 = 0;
            var_2408 = 4641240890982006784;
            var_2416 = 0;
            var_2424 = 0;
            OP_PUSH4_C 4655508153864028160, 4652231609213255680, 4607182418800017408, -1528879600583155539
            var_2432 = 72;
            pri = fun_0828(var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
            var_2440 = 0;
            var_2448 = 3;
            var_2456 = 0;
            var_2464 = 100;
            var_2472 = -1;
            OP_PUSH2_C 8269695398118786694, -1528879600583155539
            var_2480 = 56;
            pri = fun_2668(var_2472, var_2464, var_2456, var_2448, var_2440, var_2432, var_2424)
            var_2488 = 65;
            var_2496 = 8;
            pri = fun_0090(var_2488)
            var_2504 = 0;
            pri = fun_28C0()
            var_2512 = 15;
            var_2520 = 2610993506854619934;
            var_2528 = 16;
            pri = fun_18C8(var_2520, var_2512)
            var_2536 = 4;
            var_2544 = 4;
            var_2552 = 2610993506854619934;
            var_2560 = 24;
            pri = fun_19F8(var_2552, var_2544, var_2536)
            var_2568 = 0;
            var_2576 = 0;
            var_2584 = 0;
            OP_PUSH2_C -4596739697164052070, 2610993506854619934
            var_2592 = 40;
            pri = fun_0960(var_2584, var_2576, var_2568, var_2560, var_2552)
            var_2600 = 0;
            var_2608 = 0;
            var_2616 = 0;
            OP_PUSH2_C -4588499517220847616, 2556148519277313732
            var_2624 = 40;
            pri = fun_0960(var_2616, var_2608, var_2600, var_2592, var_2584)
            var_2632 = 0;
            var_2640 = 3;
            var_2648 = 0;
            var_2656 = 100;
            var_2664 = -1;
            OP_PUSH2_C -7254132872053098865, 2610993506854619934
            var_2672 = 56;
            pri = fun_2668(var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616)
            var_2680 = 65;
            var_2688 = 8;
            pri = fun_0090(var_2680)
            var_2696 = 7;
            var_2704 = 4;
            var_2712 = 2556148519277313732;
            var_2720 = 24;
            pri = fun_19F8(var_2712, var_2704, var_2696)
            var_2728 = 2610993506854619934;
            var_2736 = 8;
            pri = fun_0A08(var_2728)
            var_2744 = 0;
            pri = fun_28C0()
            var_2752 = -1528879600583155539;
            var_2760 = 8;
            pri = fun_0A08(var_2752)
            var_2768 = 2556148519277313732;
            var_2776 = 8;
            pri = fun_0A08(var_2768)
            var_2784 = 0;
            var_2792 = 0;
            var_2800 = 0;
            var_2808 = 270;
            pri = float(var_2808)
            var_2816 = pri;
            var_2824 = -1528879600583155539;
            var_2832 = 40;
            pri = fun_0960(var_2824, var_2816, var_2808, var_2800, var_2792)
            var_2840 = -1528879600583155539;
            var_2848 = 8;
            pri = fun_0A08(var_2840)
            var_2856 = 0;
            var_2864 = 0;
            var_2872 = 0;
            var_2880 = 130;
            pri = float(var_2880)
            var_2888 = pri;
            var_2896 = -4273768064731533314;
            var_2904 = 40;
            pri = fun_0960(var_2896, var_2888, var_2880, var_2872, var_2864)
            var_2912 = 0;
            var_2920 = 0;
            var_2928 = 0;
            var_2936 = 60;
            pri = float(var_2936)
            var_2944 = pri;
            var_2952 = -968882842724727458;
            var_2960 = 40;
            pri = fun_0960(var_2952, var_2944, var_2936, var_2928, var_2920)
            var_2968 = 7;
            var_2976 = 7;
            var_2984 = 2610993506854619934;
            var_2992 = 24;
            pri = fun_19F8(var_2984, var_2976, var_2968)
            var_3000 = 0;
            var_3008 = 4627758239597566362;
            var_3016 = 0;
            OP_PUSH5_C 4655329021429630894, 4637453645170364908, 4652326387115569971, 4655816237022130995, 4638488065709776568
            var_3024 = 4651420609436608102;
            var_3032 = 1;
            pri = EvCameraMove(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960)
            var_3040 = 0;
            pri = fun_2E00()
            var_3048 = 0;
            var_3056 = 3;
            var_3064 = 0;
            var_3072 = 100;
            var_3080 = -1;
            OP_PUSH2_C 8269697597142043116, -1528879600583155539
            var_3088 = 56;
            pri = fun_2668(var_3080, var_3072, var_3064, var_3056, var_3048, var_3040, var_3032)
            var_3096 = -4273768064731533314;
            var_3104 = 8;
            pri = fun_0A08(var_3096)
            var_3112 = -968882842724727458;
            var_3120 = 8;
            pri = fun_0A08(var_3112)
            var_3128 = 1;
            var_3136 = 8;
            pri = fun_2800(var_3128)
            var_3144 = 0;
            pri = fun_28C0()
            var_3152 = 0;
            var_3160 = 4627758239597566362;
            var_3168 = 0;
            OP_PUSH5_C 4657049933048960778, 4640793345769036841, 4652681045586225398, 4657371144375899259, 4642000873419125555
            var_3176 = 4652931910159218770;
            var_3184 = 1;
            pri = EvCameraMove(var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120, var_3112)
            var_3192 = 0;
            pri = fun_2E00()
            var_3200 = 0;
            var_3208 = 4627758239597566362;
            var_3216 = 3;
            OP_PUSH5_C 4656674691720633385, 4639471820753380311, 4652406431562072064, 4657019586528034161, 4640679348403469025
            var_3224 = 4652657296135065436;
            var_3232 = 280;
            pri = EvCameraMove(var_3232, var_3224, var_3216, var_3208, var_3200, var_3192, var_3184, var_3176, var_3168, var_3160)
            var_3240 = 1;
            var_3248 = 1;
            var_3256 = -1;
            var_3264 = -1;
            var_3272 = 0;
            var_3280 = 1;
            var_3288 = -4273768064731533314;
            var_3296 = 56;
            pri = fun_4A70(var_3288, var_3280, var_3272, var_3264, var_3256, var_3248, var_3240)
            var_3304 = 0;
            var_3312 = 3;
            var_3320 = 0;
            var_3328 = 100;
            var_3336 = -1;
            OP_PUSH2_C 6815901156253447206, -4273768064731533314
            var_3344 = 56;
            pri = fun_2668(var_3336, var_3328, var_3320, var_3312, var_3304, var_3296, var_3288)
            var_3352 = 1;
            var_3360 = 8;
            pri = fun_2800(var_3352)
            var_3368 = 0;
            pri = fun_28C0()
            var_3376 = 1;
            var_3384 = 1;
            var_3392 = -1;
            var_3400 = -1;
            var_3408 = 0;
            var_3416 = 1;
            var_3424 = -968882842724727458;
            var_3432 = 56;
            pri = fun_4A70(var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376)
            var_3440 = 0;
            var_3448 = 3;
            var_3456 = 0;
            var_3464 = 100;
            var_3472 = -1;
            OP_PUSH2_C -3791123673348358018, -968882842724727458
            var_3480 = 56;
            pri = fun_2668(var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424)
            var_3488 = 1;
            var_3496 = 8;
            pri = fun_2800(var_3488)
            var_3504 = 0;
            pri = fun_28C0()
            var_3512 = 1;
            var_3520 = 3;
            var_3528 = 0;
            var_3536 = 1;
            var_3544 = -4273768064731533314;
            var_3552 = 40;
            pri = fun_6DA8(var_3544, var_3536, var_3528, var_3520, var_3512)
            var_3560 = 1;
            var_3568 = 3;
            var_3576 = 0;
            var_3584 = 1;
            var_3592 = -968882842724727458;
            var_3600 = 40;
            pri = fun_6DA8(var_3592, var_3584, var_3576, var_3568, var_3560)
            var_3608 = -4273768064731533314;
            var_3616 = 8;
            pri = fun_0BE0(var_3608)
            var_3624 = -968882842724727458;
            var_3632 = 8;
            pri = fun_0BE0(var_3624)
            var_3640 = 5;
            var_3648 = 5;
            var_3656 = -1528879600583155539;
            var_3664 = 24;
            pri = fun_19F8(var_3656, var_3648, var_3640)
            var_3672 = 1;
            var_3680 = -1;
            var_3688 = -1;
            var_3696 = 3;
            var_3704 = 0;
            var_3712 = 0;
            var_3720 = -1528879600583155539;
            var_3728 = 56;
            pri = fun_2E90(var_3720, var_3712, var_3704, var_3696, var_3688, var_3680, var_3672)
            var_3736 = 0;
            var_3744 = 3;
            var_3752 = 0;
            var_3760 = 100;
            var_3768 = -1;
            OP_PUSH2_C 8269696497630414905, -1528879600583155539
            var_3776 = 56;
            pri = fun_2668(var_3768, var_3760, var_3752, var_3744, var_3736, var_3728, var_3720)
            var_3784 = -1528879600583155539;
            var_3792 = 8;
            pri = fun_0BE0(var_3784)
            var_3800 = 1;
            var_3808 = 8;
            pri = fun_2800(var_3800)
            var_3816 = 0;
            pri = fun_28C0()
            var_3824 = 1;
            var_3832 = -1;
            var_3840 = -1;
            var_3848 = 3;
            var_3856 = 0;
            var_3864 = 2;
            var_3872 = -1528879600583155539;
            var_3880 = 56;
            pri = fun_2E90(var_3872, var_3864, var_3856, var_3848, var_3840, var_3832, var_3824)
            var_3888 = 5;
            var_3896 = 8;
            pri = fun_0090(var_3888)
            var_3904 = 32744;
            pri = SoundPostEvent(var_3904)
            var_3912 = 1;
            var_3920 = -1;
            var_3928 = -1;
            var_3936 = 3;
            var_3944 = 0;
            var_3952 = 3;
            var_3960 = -4273768064731533314;
            var_3968 = 56;
            pri = fun_2E90(var_3960, var_3952, var_3944, var_3936, var_3928, var_3920, var_3912)
            var_3976 = 2;
            var_3984 = 8;
            pri = fun_0090(var_3976)
            var_3992 = 1;
            var_4000 = -1;
            var_4008 = -1;
            var_4016 = 3;
            var_4024 = 0;
            var_4032 = 3;
            var_4040 = -968882842724727458;
            var_4048 = 56;
            pri = fun_2E90(var_4040, var_4032, var_4024, var_4016, var_4008, var_4000, var_3992)
            var_4056 = 3;
            var_4064 = 0;
            var_4072 = -1691835783390583551;
            var_4080 = 24;
            pri = fun_2718(var_4072, var_4064, var_4056)
            var_4088 = 1;
            var_4096 = 8;
            pri = fun_2800(var_4088)
            var_4104 = 0;
            pri = fun_28C0()
            var_4112 = -1528879600583155539;
            var_4120 = 8;
            pri = fun_0BE0(var_4112)
            var_4128 = -4273768064731533314;
            var_4136 = 8;
            pri = fun_0BE0(var_4128)
            var_4144 = -968882842724727458;
            var_4152 = 8;
            pri = fun_0BE0(var_4144)
            var_4160 = 6;
            var_4168 = 7;
            var_4176 = 2610993506854619934;
            var_4184 = 24;
            pri = fun_19F8(var_4176, var_4168, var_4160)
            var_4192 = 0;
            var_4200 = 4627758239597566362;
            var_4208 = 3;
            OP_PUSH5_C 4656861014961076306, 4640238136377475072, 4652366497299751240, 4657205799817314304, 4641445312183842898
            var_4216 = 4652380571048586772;
            var_4224 = 20;
            pri = EvCameraMove(var_4224, var_4216, var_4208, var_4200, var_4192, var_4184, var_4176, var_4168, var_4160, var_4152)
            var_4232 = 1;
            var_4240 = 1;
            var_4248 = -1;
            var_4256 = -1;
            var_4264 = 0;
            var_4272 = 11;
            var_4280 = 2610993506854619934;
            var_4288 = 56;
            pri = fun_4A70(var_4280, var_4272, var_4264, var_4256, var_4248, var_4240, var_4232)
            var_4296 = 0;
            var_4304 = 3;
            var_4312 = 0;
            var_4320 = 100;
            var_4328 = -1;
            OP_PUSH2_C -7254131772541470654, 2610993506854619934
            var_4336 = 56;
            pri = fun_2668(var_4328, var_4320, var_4312, var_4304, var_4296, var_4288, var_4280)
            var_4344 = 1;
            var_4352 = 8;
            pri = fun_2800(var_4344)
            var_4360 = 0;
            pri = fun_28C0()
            var_4368 = 8;
            var_4376 = 6712433672450853327;
            var_4384 = 16;
            pri = fun_1908(var_4376, var_4368)
            var_4392 = 1;
            var_4400 = -1;
            var_4408 = -1;
            var_4416 = 3;
            var_4424 = 0;
            var_4432 = 1;
            var_4440 = 6712433672450853327;
            var_4448 = 56;
            pri = fun_2E90(var_4440, var_4432, var_4424, var_4416, var_4408, var_4400, var_4392)
            var_4456 = 0;
            var_4464 = 3;
            var_4472 = 0;
            var_4480 = 100;
            var_4488 = -1;
            OP_PUSH2_C 4615590131826984080, 6712433672450853327
            var_4496 = 56;
            pri = fun_2668(var_4488, var_4480, var_4472, var_4464, var_4456, var_4448, var_4440)
            var_4504 = 6712433672450853327;
            var_4512 = 8;
            pri = fun_0BE0(var_4504)
            var_4520 = 1;
            var_4528 = 8;
            pri = fun_2800(var_4520)
            var_4536 = 0;
            pri = fun_28C0()
            var_4544 = 5;
            var_4552 = 5;
            var_4560 = -4273768064731533314;
            var_4568 = 24;
            pri = fun_19F8(var_4560, var_4552, var_4544)
            var_4576 = 1;
            var_4584 = 3;
            var_4592 = 0;
            var_4600 = 11;
            var_4608 = 2610993506854619934;
            var_4616 = 40;
            pri = fun_6DA8(var_4608, var_4600, var_4592, var_4584, var_4576)
            var_4624 = 0;
            var_4632 = 4627758239597566362;
            var_4640 = 0;
            OP_PUSH5_C 4655634905564478177, 4639257547927359324, 4651632419356582871, 4656059580935590380, 4640669144935563264
            var_4648 = 4652461143260670198;
            var_4656 = 1;
            pri = EvCameraMove(var_4656, var_4648, var_4640, var_4632, var_4624, var_4616, var_4608, var_4600, var_4592, var_4584)
            var_4664 = 0;
            pri = fun_2E00()
            var_4672 = 1;
            var_4680 = 1;
            var_4688 = -1;
            var_4696 = -1;
            var_4704 = 0;
            var_4712 = 4;
            var_4720 = -4273768064731533314;
            var_4728 = 56;
            pri = fun_4A70(var_4720, var_4712, var_4704, var_4696, var_4688, var_4680, var_4672)
            var_4736 = 0;
            var_4744 = 3;
            var_4752 = 0;
            var_4760 = 100;
            var_4768 = -1;
            OP_PUSH2_C 6815902255765075417, -4273768064731533314
            var_4776 = 56;
            pri = fun_2668(var_4768, var_4760, var_4752, var_4744, var_4736, var_4728, var_4720)
            var_4784 = 2610993506854619934;
            var_4792 = 8;
            pri = fun_0BE0(var_4784)
            var_4800 = 1;
            var_4808 = 8;
            pri = fun_2800(var_4800)
            var_4816 = 0;
            pri = fun_28C0()
            var_4824 = 5;
            var_4832 = 5;
            var_4840 = -968882842724727458;
            var_4848 = 24;
            pri = fun_19F8(var_4840, var_4832, var_4824)
            var_4856 = 1;
            var_4864 = 1;
            var_4872 = -1;
            var_4880 = -1;
            var_4888 = 0;
            var_4896 = 4;
            var_4904 = -968882842724727458;
            var_4912 = 56;
            pri = fun_4A70(var_4904, var_4896, var_4888, var_4880, var_4872, var_4864, var_4856)
            var_4920 = 0;
            var_4928 = 3;
            var_4936 = 0;
            var_4944 = 100;
            var_4952 = -1;
            OP_PUSH2_C -3791122573836729807, -968882842724727458
            var_4960 = 56;
            pri = fun_2668(var_4952, var_4944, var_4936, var_4928, var_4920, var_4912, var_4904)
            var_4968 = 1;
            var_4976 = 8;
            pri = fun_2800(var_4968)
            var_4984 = 0;
            pri = fun_28C0()
            var_4992 = 1;
            var_5000 = 3;
            var_5008 = 0;
            var_5016 = 4;
            var_5024 = -4273768064731533314;
            var_5032 = 40;
            pri = fun_6DA8(var_5024, var_5016, var_5008, var_5000, var_4992)
            var_5040 = 1;
            var_5048 = 3;
            var_5056 = 0;
            var_5064 = 4;
            var_5072 = -968882842724727458;
            var_5080 = 40;
            pri = fun_6DA8(var_5072, var_5064, var_5056, var_5048, var_5040)
            var_5088 = -4273768064731533314;
            var_5096 = 8;
            pri = fun_0BE0(var_5088)
            var_5104 = -968882842724727458;
            var_5112 = 8;
            pri = fun_0BE0(var_5104)
            var_5120 = -4273768064731533314;
            var_5128 = 8;
            pri = fun_1A60(var_5120)
            var_5136 = -968882842724727458;
            var_5144 = 8;
            pri = fun_1A60(var_5136)
            var_5152 = 1;
            var_5160 = 0;
            var_5168 = 4641240890982006784;
            var_5176 = 0;
            var_5184 = 0;
            OP_PUSH4_C 4657304316059163034, 4652736065148079309, 4611686018427387904, -4273768064731533314
            var_5192 = 72;
            pri = fun_0828(var_5184, var_5176, var_5168, var_5160, var_5152, var_5144, var_5136, var_5128, var_5120)
            var_5200 = 1;
            var_5208 = 0;
            var_5216 = 4641240890982006784;
            var_5224 = 0;
            var_5232 = 0;
            OP_PUSH4_C 4657148185408018842, 4652499010441130803, 4611686018427387904, -968882842724727458
            var_5240 = 72;
            pri = fun_0828(var_5232, var_5224, var_5216, var_5208, var_5200, var_5192, var_5184, var_5176, var_5168)
            var_5248 = 1;
            var_5256 = 0;
            var_5264 = 4641240890982006784;
            var_5272 = 0;
            var_5280 = 0;
            OP_PUSH4_C 4656251423724404736, 4652433919352766464, 4607182418800017408, -1528879600583155539
            var_5288 = 72;
            pri = fun_0828(var_5280, var_5272, var_5264, var_5256, var_5248, var_5240, var_5232, var_5224, var_5216)
            var_5296 = 0;
            var_5304 = 4627758239597566362;
            var_5312 = 0;
            OP_PUSH5_C 4656326806241605059, 4638709375410215322, 4651943889010499256, 4656870404790377513, 4639798683570085560
            var_5320 = 4651956291501660570;
            var_5328 = 1;
            pri = EvCameraMove(var_5328, var_5320, var_5312, var_5304, var_5296, var_5288, var_5280, var_5272, var_5264, var_5256)
            var_5336 = 0;
            pri = fun_2E00()
            var_5344 = 0;
            var_5352 = 4627758239597566362;
            var_5360 = 3;
            OP_PUSH5_C 4657063764905238200, 4641677177195908301, 4652583804777864888, 4657401227014035210, 4643247631644093317
            var_5368 = 4652545233909962506;
            var_5376 = 50;
            pri = EvCameraMove(var_5376, var_5368, var_5360, var_5352, var_5344, var_5336, var_5328, var_5320, var_5312, var_5304)
            var_5384 = 0;
            var_5392 = 3;
            var_5400 = 0;
            var_5408 = 100;
            var_5416 = -1;
            OP_PUSH2_C -5426580631757577907, -4273768064731533314
            var_5424 = 56;
            pri = fun_2668(var_5416, var_5408, var_5400, var_5392, var_5384, var_5376, var_5368)
            var_5432 = -1528879600583155539;
            var_5440 = 8;
            pri = fun_0A08(var_5432)
            var_5448 = 1;
            var_5456 = 8;
            pri = fun_2800(var_5448)
            var_5464 = 0;
            pri = fun_28C0()
            var_5472 = 32960;
            pri = SoundPostEvent(var_5472)
            var_5480 = 33120;
            pri = SoundPostEvent(var_5480)
            var_5488 = 4;
            var_5496 = 4;
            var_5504 = 2556148519277313732;
            var_5512 = 24;
            pri = fun_19F8(var_5504, var_5496, var_5488)
            var_5520 = -1;
            var_5528 = 2610993506854619934;
            var_5536 = 16;
            pri = fun_1788(var_5528, var_5520)
            var_5544 = 0;
            var_5552 = 0;
            var_5560 = 0;
            var_5568 = -21;
            pri = float(var_5568)
            var_5576 = pri;
            var_5584 = 8802641224559852288;
            var_5592 = 40;
            pri = fun_0960(var_5584, var_5576, var_5568, var_5560, var_5552)
            var_5600 = 0;
            var_5608 = 0;
            var_5616 = 0;
            var_5624 = -18;
            pri = float(var_5624)
            var_5632 = pri;
            var_5640 = 2556148519277313732;
            var_5648 = 40;
            pri = fun_0960(var_5640, var_5632, var_5624, var_5616, var_5608)
            var_5656 = 0;
            var_5664 = 0;
            var_5672 = 0;
            var_5680 = -31;
            pri = float(var_5680)
            var_5688 = pri;
            var_5696 = 1656060553018210897;
            var_5704 = 40;
            pri = fun_0960(var_5696, var_5688, var_5680, var_5672, var_5664)
            var_5712 = 0;
            var_5720 = 0;
            var_5728 = 0;
            var_5736 = 21;
            pri = float(var_5736)
            var_5744 = pri;
            var_5752 = 6712433672450853327;
            var_5760 = 40;
            pri = fun_0960(var_5752, var_5744, var_5736, var_5728, var_5720)
            var_5768 = 0;
            var_5776 = 3;
            var_5784 = 0;
            var_5792 = 100;
            var_5800 = -1;
            OP_PUSH2_C 8746644730101973908, 2556148519277313732
            var_5808 = 56;
            pri = fun_2668(var_5800, var_5792, var_5784, var_5776, var_5768, var_5760, var_5752)
            var_5816 = 8802641224559852288;
            var_5824 = 8;
            pri = fun_0A08(var_5816)
            var_5832 = 2556148519277313732;
            var_5840 = 8;
            pri = fun_0A08(var_5832)
            var_5848 = 2610993506854619934;
            var_5856 = 8;
            pri = fun_0A08(var_5848)
            var_5864 = 6712433672450853327;
            var_5872 = 8;
            pri = fun_0A08(var_5864)
            var_5880 = 25;
            var_5888 = 8;
            pri = fun_0090(var_5880)
            var_5896 = 0;
            pri = fun_28C0()
            var_5904 = 7;
            var_5912 = 7;
            var_5920 = 2610993506854619934;
            var_5928 = 24;
            pri = fun_19F8(var_5920, var_5912, var_5904)
            var_5936 = 0;
            var_5944 = -4273768064731533314;
            var_5952 = 16;
            pri = fun_0778(var_5944, var_5936)
            var_5960 = 0;
            var_5968 = -968882842724727458;
            var_5976 = 16;
            pri = fun_0778(var_5968, var_5960)
            var_5984 = 1;
            var_5992 = 0;
            OP_PUSH5_C 4641240890982006784, -1528879600583155539, 4654887149696660275, 4652625674180650598, 4611686018427387904
            var_6000 = 2610993506854619934;
            var_6008 = 64;
            pri = fun_08A0(var_6000, var_5992, var_5984, var_5976, var_5968, var_5960, var_5952, var_5944)
            var_6016 = 0;
            var_6024 = 3;
            var_6032 = 0;
            var_6040 = 100;
            var_6048 = -1;
            OP_PUSH2_C -7254130673029842443, 2610993506854619934
            var_6056 = 56;
            pri = fun_2668(var_6048, var_6040, var_6032, var_6024, var_6016, var_6008, var_6000)
            var_6064 = 2610993506854619934;
            var_6072 = 8;
            pri = fun_0A08(var_6064)
            var_6080 = 1;
            var_6088 = 8;
            pri = fun_2800(var_6080)
            var_6096 = 0;
            pri = fun_28C0()
            var_6104 = 7;
            var_6112 = -1528879600583155539;
            var_6120 = 16;
            pri = fun_1908(var_6112, var_6104)
            var_6128 = 0;
            var_6136 = 0;
            var_6144 = 0;
            var_6152 = 0;
            OP_PUSH2_C 2610993506854619934, -1528879600583155539
            var_6160 = 48;
            pri = fun_09B0(var_6152, var_6144, var_6136, var_6128, var_6120, var_6112)
            var_6168 = 0;
            var_6176 = 3;
            var_6184 = 0;
            var_6192 = 100;
            var_6200 = -1;
            OP_PUSH2_C 8269698696653671327, -1528879600583155539
            var_6208 = 56;
            pri = fun_2668(var_6200, var_6192, var_6184, var_6176, var_6168, var_6160, var_6152)
            var_6216 = -1528879600583155539;
            var_6224 = 8;
            pri = fun_0A08(var_6216)
            var_6232 = 1;
            var_6240 = 8;
            pri = fun_2800(var_6232)
            var_6248 = 0;
            pri = fun_28C0()
            var_6256 = 1;
            var_6264 = 1;
            OP_PUSH4_C 4605380978949069210, 4654887149696660275, 4652625674180650598, 2610993506854619934
            var_6272 = 48;
            pri = fun_0720(var_6264, var_6256, var_6248, var_6240, var_6232, var_6224)
            var_6280 = 0;
            var_6288 = 4628208599560303411;
            var_6296 = 0;
            OP_PUSH5_C 4655038750359898030, 4638745615313466819, 4652591017574143099, 4655739315188651786, 4639321935328281887
            var_6304 = 4652640671519253463;
            var_6312 = 1;
            pri = EvCameraMove(var_6312, var_6304, var_6296, var_6288, var_6280, var_6272, var_6264, var_6256, var_6248, var_6240)
            var_6320 = 0;
            pri = fun_2E00()
            var_6328 = 6712433672450853327;
            var_6336 = 8;
            pri = fun_1948(var_6328)
            var_6344 = 0;
            var_6352 = 4628208599560303411;
            var_6360 = 3;
            OP_PUSH5_C 4654836792064108134, 4638834983618572452, 4652576723922982011, 4655537356892861891, 4639411303633387520
            var_6368 = 4652626377868092375;
            var_6376 = 150;
            pri = EvCameraMove(var_6376, var_6368, var_6360, var_6352, var_6344, var_6336, var_6328, var_6320, var_6312, var_6304)
            var_6384 = 0;
            var_6392 = 3;
            var_6400 = 0;
            var_6408 = 100;
            var_6416 = -1;
            OP_PUSH2_C -7254129573518214232, 2610993506854619934
            var_6424 = 56;
            pri = fun_2668(var_6416, var_6408, var_6400, var_6392, var_6384, var_6376, var_6368)
            var_6432 = 1;
            var_6440 = 8;
            pri = fun_2800(var_6432)
            var_6448 = 0;
            pri = fun_28C0()
            var_6456 = -1528879600583155539;
            var_6464 = 8;
            pri = fun_19C0(var_6456)
            var_6472 = 1;
            var_6480 = 1;
            OP_PUSH4_C -4595304174782827725, 4655238993417548595, 4652907588962012365, 2556148519277313732
            var_6488 = 48;
            pri = fun_0720(var_6480, var_6472, var_6464, var_6456, var_6448, var_6440)
            var_6496 = 1;
            var_6504 = 1;
            OP_PUSH4_C -4600032954391566746, 4654887149696660275, 4652625674180650598, 2610993506854619934
            var_6512 = 48;
            pri = fun_0720(var_6504, var_6496, var_6488, var_6480, var_6472, var_6464)
            var_6520 = 0;
            var_6528 = 4628208599560303411;
            var_6536 = 0;
            OP_PUSH5_C 4656199262892783043, 4636962471336004813, 4652514623506245222, 4656810943201547387, 4637876561322872668
            var_6544 = 4652579758575074673;
            var_6552 = 1;
            pri = EvCameraMove(var_6552, var_6544, var_6536, var_6528, var_6520, var_6512, var_6504, var_6496, var_6488, var_6480)
            var_6560 = 0;
            pri = fun_2E00()
            var_6568 = 0;
            var_6576 = 0;
            var_6584 = 0;
            var_6592 = 0;
            pri = float(var_6592)
            var_6600 = pri;
            var_6608 = -1528879600583155539;
            var_6616 = 40;
            pri = fun_0960(var_6608, var_6600, var_6592, var_6584, var_6576)
            var_6624 = 0;
            var_6632 = 3;
            var_6640 = 0;
            var_6648 = 100;
            var_6656 = -1;
            OP_PUSH2_C 8269699796165299538, -1528879600583155539
            var_6664 = 56;
            pri = fun_2668(var_6656, var_6648, var_6640, var_6632, var_6624, var_6616, var_6608)
            var_6672 = -1528879600583155539;
            var_6680 = 8;
            pri = fun_0A08(var_6672)
            var_6688 = 1;
            var_6696 = 8;
            pri = fun_2800(var_6688)
            var_6704 = 0;
            pri = fun_28C0()
            var_6712 = 5;
            var_6720 = -1528879600583155539;
            var_6728 = 16;
            pri = fun_1908(var_6720, var_6712)
            var_6736 = 0;
            var_6744 = 4628208599560303411;
            var_6752 = 3;
            OP_PUSH5_C 4656192929705807053, 4639076348411101839, 4652514051760198779, 4657623548265171517, 4644150990397474079
            var_6760 = 4652730787492265984;
            var_6768 = 120;
            pri = EvCameraMove(var_6768, var_6760, var_6752, var_6744, var_6736, var_6728, var_6720, var_6712, var_6704, var_6696)
            var_6776 = 1;
            var_6784 = 0;
            var_6792 = 4641240890982006784;
            var_6800 = 0;
            var_6808 = 0;
            OP_PUSH4_C 4657128834003369984, 4652433919352766464, 4607182418800017408, -1528879600583155539
            var_6816 = 72;
            pri = fun_0828(var_6808, var_6800, var_6792, var_6784, var_6776, var_6768, var_6760, var_6752, var_6744)
            var_6824 = 0;
            var_6832 = 3;
            var_6840 = 0;
            var_6848 = 100;
            var_6856 = -1;
            OP_PUSH2_C 8269700895676927749, -1528879600583155539
            var_6864 = 56;
            pri = fun_2668(var_6856, var_6848, var_6840, var_6832, var_6824, var_6816, var_6808)
            var_6872 = 1;
            var_6880 = 8;
            pri = fun_2800(var_6872)
            var_6888 = 0;
            pri = fun_28C0()
            var_6896 = 1;
            var_6904 = -1;
            var_6912 = -1;
            var_6920 = 3;
            var_6928 = 0;
            var_6936 = 1;
            var_6944 = 2610993506854619934;
            var_6952 = 56;
            pri = fun_2E90(var_6944, var_6936, var_6928, var_6920, var_6912, var_6904, var_6896)
            var_6960 = -1528879600583155539;
            var_6968 = 8;
            pri = fun_0A08(var_6960)
            var_6976 = 33368;
            pri = SoundPostEvent(var_6976)
            var_6984 = 2610993506854619934;
            var_6992 = 8;
            pri = fun_0BE0(var_6984)
            var_7000 = 0;
            var_7008 = 4628208599560303411;
            var_7016 = 3;
            OP_PUSH5_C 4655895665742121533, 4640909806040650875, 4652726037602033992, 4657476389628909978, 4645066135915504599
            var_7024 = 4652910051868058583;
            var_7032 = 220;
            pri = EvCameraMove(var_7032, var_7024, var_7016, var_7008, var_7000, var_6992, var_6984, var_6976, var_6968, var_6960)
            var_7040 = 1;
            var_7048 = 0;
            var_7056 = 4641240890982006784;
            var_7064 = 0;
            var_7072 = 0;
            OP_PUSH4_C 4648987610106665370, 4652624794571348378, 4611686018427387904, 2610993506854619934
            var_7080 = 72;
            pri = fun_0828(var_7072, var_7064, var_7056, var_7048, var_7040, var_7032, var_7024, var_7016, var_7008)
            var_7088 = 14;
            var_7096 = 8;
            pri = fun_0090(var_7088)
            var_7104 = 0;
            var_7112 = 0;
            var_7120 = 0;
            var_7128 = 180;
            pri = float(var_7128)
            var_7136 = pri;
            var_7144 = 2556148519277313732;
            var_7152 = 40;
            pri = fun_0960(var_7144, var_7136, var_7128, var_7120, var_7112)
            var_7160 = 2556148519277313732;
            var_7168 = 8;
            pri = fun_0A08(var_7160)
            var_7176 = 1;
            var_7184 = 1;
            var_7192 = 30;
            OP_PUSH2_C 2610993506854619934, 1656060553018210897
            var_7200 = 40;
            pri = fun_1260(var_7192, var_7184, var_7176, var_7168, var_7160)
            var_7208 = 1;
            var_7216 = 1;
            var_7224 = 30;
            OP_PUSH2_C 2610993506854619934, 6712433672450853327
            var_7232 = 40;
            pri = fun_1260(var_7224, var_7216, var_7208, var_7200, var_7192)
            var_7240 = 2610993506854619934;
            var_7248 = 8;
            pri = fun_1948(var_7240)
            var_7256 = 2610993506854619934;
            var_7264 = 8;
            pri = fun_0A08(var_7256)
            var_7272 = 45;
            var_7280 = 8;
            pri = fun_0090(var_7272)
            var_7288 = -1;
            var_7296 = 8802641224559852288;
            var_7304 = 16;
            pri = fun_1788(var_7296, var_7288)
            var_7312 = -1;
            var_7320 = 2556148519277313732;
            var_7328 = 16;
            pri = fun_1788(var_7320, var_7312)
            var_7336 = -1;
            var_7344 = 6712433672450853327;
            var_7352 = 16;
            pri = fun_1788(var_7344, var_7336)
            var_7360 = -1;
            var_7368 = 2610993506854619934;
            var_7376 = 16;
            pri = fun_1788(var_7368, var_7360)
            var_7384 = -1;
            var_7392 = 1656060553018210897;
            var_7400 = 16;
            pri = fun_1788(var_7392, var_7384)
            var_7408 = 0;
            var_7416 = 8802641224559852288;
            var_7424 = 16;
            pri = fun_07B0(var_7416, var_7408)
            var_7432 = 0;
            var_7440 = 2556148519277313732;
            var_7448 = 16;
            pri = fun_07B0(var_7440, var_7432)
            var_7456 = 0;
            var_7464 = 2610993506854619934;
            var_7472 = 16;
            pri = fun_07B0(var_7464, var_7456)
            var_7480 = 0;
            var_7488 = 1656060553018210897;
            var_7496 = 16;
            pri = fun_07B0(var_7488, var_7480)
            var_7504 = 0;
            var_7512 = 6712433672450853327;
            var_7520 = 16;
            pri = fun_07B0(var_7512, var_7504)
            var_7528 = 0;
            var_7536 = -4273768064731533314;
            var_7544 = 16;
            pri = fun_07B0(var_7536, var_7528)
            var_7552 = 0;
            var_7560 = -968882842724727458;
            var_7568 = 16;
            pri = fun_07B0(var_7560, var_7552)
            var_7576 = 1;
            var_7584 = 2;
            var_7592 = 16;
            pri = fun_9AE0(var_7584, var_7576)
            var_7600 = 3;
            var_7608 = 0;
            pri = EvCameraEnd(var_7608, var_7600)
            var_7616 = 2556148519277313732;
            var_7624 = 8;
            pri = fun_0A08(var_7616)
            var_7632 = -4273768064731533314;
            var_7640 = 8;
            pri = fun_0A08(var_7632)
            var_7648 = -968882842724727458;
            var_7656 = 8;
            pri = fun_0A08(var_7648)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_CA70_case_0x0
            OP_JUMP switch_CA70_case_default
        }
        case 0x1:
        {
// switch_CA70_case_0x1
            OP_JUMP switch_CA70_case_default
        }
    }
}
// fun_11820
fun_11820() {
    pri = 0;
    return pri;
}
// fun_11838
fun_11838() {
    var_8 = -4273768064731533314;
    var_16 = 8;
    pri = fun_06C8(var_8)
    var_24 = -968882842724727458;
    var_32 = 8;
    pri = fun_06C8(var_24)
    var_40 = -1528879600583155539;
    var_48 = 8;
    pri = fun_06C8(var_40)
    var_56 = 3098;
    var_64 = 8;
    pri = fun_9CA0(var_56)
    var_72 = -8752830076052889270;
    pri = FlagReset(var_72)
    var_80 = -8752828976541261059;
    pri = FlagSet(var_80)
    pri = 0;
    return pri;
}
// fun_11938
fun_11938() {
    OP_PUSH2_C 2610993506854619934, -2120903613359388155
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 6712433672450853327, -3696492892252753292
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 1656060553018210897, -5243699026004078966
    pri = SetBamiriInfoToChara(var_0, var_-8)
    OP_PUSH2_C 2556148519277313732, -8184648902734018249
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_11A10
fun_11A10() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9F18()
    var_16 = 0;
    pri = fun_9F70()
    var_24 = 0;
    pri = fun_A0A0()
    var_32 = 0;
    pri = fun_A0D0()
    var_40 = 0;
    pri = fun_11820()
    var_48 = 0;
    pri = fun_11838()
    var_56 = 0;
    pri = fun_11938()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_11B00
fun_11B00() {
    var_8 = 0;
    pri = fun_9F70()
    var_16 = 0;
    pri = fun_11838()
    pri = 0;
    return pri;
}
// fun_11B48
fun_11B48() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -7254128474006586021;
    var_88 = 80;
    pri = fun_9290(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11BD0
fun_11BD0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -589398974053852440;
    var_88 = 80;
    pri = fun_9290(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C58
fun_11C58() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 8746646929125230330;
    var_88 = 80;
    pri = fun_9290(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11CE0
fun_11CE0() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 4615591231338612291;
    var_88 = 80;
    pri = fun_9290(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
