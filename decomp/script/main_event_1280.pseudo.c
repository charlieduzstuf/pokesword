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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07B0
fun_07B0() {
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
// fun_0828
fun_0828() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08D0
fun_08D0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1840(var_8)
    OP_JZER lab_0948
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1870(var_24)
    OP_JNZ lab_0948
    pri = 0;
    return pri;
// lab_0948
    OP_JUMP lab_0958
// lab_0958
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_09B8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_09B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0958
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0A30
fun_0A30() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0A70
fun_0A70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0AA8
fun_0AA8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0AF0
    pri = 0;
    return pri;
// lab_0AF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0B30
// lab_0B30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1840(var_8)
    OP_JNZ lab_0BB8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0BA8
    pri = 0;
    return pri;
// lab_0BB8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0C00
    pri = 0;
    return pri;
// lab_0C00
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0C60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DD0(var_8)
    pri = 0;
    return pri;
// lab_0C60
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B30
    pri = 0;
    return pri;
// lab_0BA8
    OP_JUMP lab_0C00
}
// fun_0CA8
fun_0CA8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0CF0
// lab_0CF0
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D48
    pri = 0;
    return pri;
// lab_0D48
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D88
    pri = 0;
    return pri;
// lab_0D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CF0
    pri = 0;
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E58
    pri = 0;
    return pri;
// lab_0E58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1840(var_8)
    OP_JZER lab_0F88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB0
    OP_ZERO_P_S 64
// lab_0F88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FC0
    OP_CONST_S 64, 1
// lab_0FC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF8
    OP_CONST_S 72, 1
// lab_0FF8
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
// lab_0EB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED8
    OP_ZERO_P_S 72
// lab_0ED8
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
    OP_JUMP lab_1098
// lab_1098
    pri = 0;
    return pri;
}
// fun_10A8
fun_10A8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
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
// fun_11E0
fun_11E0() {
    OP_CONST_S -8, 4631530004285489152
    pri = arg_1;
    switch (pri) {
// switch_15A0
        case default:
        {
// switch_15A0_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_15A0_case_0x0
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
            pri = fun_1180(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15A0_case_default
        }
        case 0x1:
        {
// switch_15A0_case_0x1
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = 0;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1180(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15A0_case_default
        }
        case 0x2:
        {
// switch_15A0_case_0x2
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
            pri = fun_1180(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15A0_case_default
        }
        case 0x3:
        {
// switch_15A0_case_0x3
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = 0;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1180(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15A0_case_default
        }
        case 0x4:
        {
// switch_15A0_case_0x4
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
            pri = fun_1180(var_80, var_72, var_64, var_56, var_48, var_40)
            OP_JUMP switch_15A0_case_default
        }
        case 0x5:
        {
// switch_15A0_case_0x5
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
            pri = fun_1180(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15A0_case_default
        }
        case 0x6:
        {
// switch_15A0_case_0x6
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
            pri = fun_1180(var_64, var_56, var_48, var_40, var_32, var_24)
            OP_JUMP switch_15A0_case_default
        }
        case 0x7:
        {
// switch_15A0_case_0x7
            var_8 = arg_4;
            var_16 = arg_3;
            var_24 = arg_2;
            var_32 = var_8;
            var_40 = var_8;
            var_48 = arg_0;
            var_56 = 48;
            pri = fun_1180(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_15A0_case_default
        }
    }
}
// fun_1650
fun_1650() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1690
fun_1690() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1708
fun_1708() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1748
fun_1748() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1780
fun_1780() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1690(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1708(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_17E8
fun_17E8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1748(var_24)
    pri = 0;
    return pri;
}
// fun_1840
fun_1840() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1870
fun_1870() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_18A0
fun_18A0() {
    OP_JUMP lab_18B8
// lab_18B8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1948
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1938
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA8(var_8)
    pri = 0;
    return pri;
// lab_1948
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_19C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA8(var_8)
    pri = 0;
    return pri;
// lab_19D8
    pri = 0;
    return pri;
// lab_19C8
    OP_JUMP lab_19E8
// lab_19E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18B8
    pri = 0;
    return pri;
// lab_1938
    OP_JUMP lab_19E8
}
// fun_1A28
fun_1A28() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0AA8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_18A0(var_40)
    pri = 0;
    return pri;
}
// fun_1AB0
fun_1AB0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1AE8
fun_1AE8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B10
fun_1B10() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1B40
fun_1B40() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1B78
fun_1B78() {
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
// switch_2190
        case default:
        {
// switch_2190_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_21D8
// lab_21D8
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
            OP_JNZ lab_2280
            var_88 = 0;
            pri = fun_2438()
// lab_2280
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2190_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1D78
                case default:
                {
// switch_1D78_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1DF0
// lab_1DF0
                    OP_JUMP lab_21D8
                }
                case 0x0:
                {
// switch_1D78_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1DF0
                }
                case 0x1:
                {
// switch_1D78_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1DF0
                }
                case 0x2:
                {
// switch_1D78_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1DF0
                }
                case 0x3:
                {
// switch_1D78_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1DF0
                }
                case 0x4:
                {
// switch_1D78_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1DF0
                }
                case 0x5:
                {
// switch_1D78_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1DF0
                }
            }
        }
        case 0x65:
        {
// switch_2190_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1F30
                case default:
                {
// switch_1F30_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FA8
// lab_1FA8
                    OP_JUMP lab_21D8
                }
                case 0x0:
                {
// switch_1F30_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1FA8
                }
                case 0x1:
                {
// switch_1F30_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1FA8
                }
                case 0x2:
                {
// switch_1F30_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1FA8
                }
                case 0x3:
                {
// switch_1F30_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1FA8
                }
                case 0x4:
                {
// switch_1F30_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1FA8
                }
                case 0x5:
                {
// switch_1F30_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1FA8
                }
            }
        }
        case 0x66:
        {
// switch_2190_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_20E8
                case default:
                {
// switch_20E8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2160
// lab_2160
                    OP_JUMP lab_21D8
                }
                case 0x0:
                {
// switch_20E8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2160
                }
                case 0x1:
                {
// switch_20E8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2160
                }
                case 0x2:
                {
// switch_20E8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2160
                }
                case 0x3:
                {
// switch_20E8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2160
                }
                case 0x4:
                {
// switch_20E8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2160
                }
                case 0x5:
                {
// switch_20E8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2160
                }
            }
        }
    }
}
// fun_2298
fun_2298() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0A70(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2340
    pri = 1;
    return pri;
// lab_2340
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2388
fun_2388() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_23D8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2298(var_8)
    arg_2 = pri;
// lab_23D8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1B78(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2438
fun_2438() {
    OP_JUMP lab_2450
// lab_2450
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2490
    pri = 0;
    return pri;
// lab_2490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2450
    pri = 0;
    return pri;
}
// fun_24D0
fun_24D0() {
    var_8 = 0;
    pri = fun_2438()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2580
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2580
    pri = 0;
    return pri;
}
// fun_2590
fun_2590() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_25C0
fun_25C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2638()
    return pri;
}
// fun_2638
fun_2638() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2678
fun_2678() {
    pri = arg_1;
    OP_JNZ lab_26C0
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_26C0
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
// fun_2718
fun_2718() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2790
fun_2790() {
    var_8 = 0;
    pri = fun_2718()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2810
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2810
    pri = 1;
    return pri;
// lab_2810
    var_8 = 0;
    pri = fun_2718()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2850
    pri = 1;
    return pri;
// lab_2850
    var_8 = 0;
    pri = fun_2718()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2880
fun_2880() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    pri = 0;
    return pri;
}
// fun_28D0
fun_28D0() {
    OP_JUMP lab_28E8
// lab_28E8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2920
    pri = 0;
    return pri;
// lab_2920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_28E8
    pri = 0;
    return pri;
}
// fun_2960
fun_2960() {
    var_8 = arg_3;
    var_16 = 1;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2AC8()
    var_72 = arg_3;
    var_80 = arg_2;
    var_88 = -1;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = arg_5;
    var_120 = arg_4;
    pri = StartBlur_(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    pri = 0;
    return pri;
}
// fun_2A30
fun_2A30() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = -1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    pri = StartBlur_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2AC8()
    pri = EndBlur_()
    pri = 0;
    return pri;
}
// fun_2AC8
fun_2AC8() {
    OP_JUMP lab_2AE0
// lab_2AE0
    pri = IsEasingRunningBlur_()
    OP_JZER lab_2B38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B48
// lab_2B38
    pri = 0;
    return pri;
// lab_2B48
    OP_JUMP lab_2AE0
    pri = 0;
    return pri;
}
// fun_2B68
fun_2B68() {
    pri = arg_6;
    OP_JNZ lab_2BA0
    var_8 = 0;
    pri = fun_10A8()
// lab_2BA0
    pri = arg_1;
    switch (pri) {
// switch_4108
        case default:
        {
// switch_4108_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4458
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4458
            pri = 1;
            OP_JUMP lab_4460
// lab_4458
            pri = 0;
// lab_4460
            OP_JZER lab_45B8
            var_16 = 8328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A70(var_24, var_16)
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
            OP_JUMP lab_4618
// lab_45B8
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
// lab_4618
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4678
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_46D8
// lab_4678
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_46D8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_46D8
            pri = arg_2;
            OP_JZER lab_4718
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4718
            var_8 = 0;
            pri = fun_10E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4108_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x1:
        {
// switch_4108_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x2:
        {
// switch_4108_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x3:
        {
// switch_4108_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x4:
        {
// switch_4108_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x5:
        {
// switch_4108_case_0x5
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0x6:
        {
// switch_4108_case_0x6
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0x7:
        {
// switch_4108_case_0x7
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0x8:
        {
// switch_4108_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x9:
        {
// switch_4108_case_0x9
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0xa:
        {
// switch_4108_case_0xa
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0xb:
        {
// switch_4108_case_0xb
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0xc:
        {
// switch_4108_case_0xc
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0xd:
        {
// switch_4108_case_0xd
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0xe:
        {
// switch_4108_case_0xe
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0xf:
        {
// switch_4108_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x10:
        {
// switch_4108_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x11:
        {
// switch_4108_case_0x11
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0x12:
        {
// switch_4108_case_0x12
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0x13:
        {
// switch_4108_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x14:
        {
// switch_4108_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x15:
        {
// switch_4108_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x16:
        {
// switch_4108_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x17:
        {
// switch_4108_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x18:
        {
// switch_4108_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x19:
        {
// switch_4108_case_0x19
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4108_case_default
        }
        case 0x1a:
        {
// switch_4108_case_0x1a
            var_8 = 1;
            var_16 = 5888;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            var_40 = 6024;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F8(var_48, var_40)
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
            pri = fun_0E08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4108_case_default
        }
        case 0x1b:
        {
// switch_4108_case_0x1b
            var_8 = 3;
            var_16 = 6112;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            var_40 = 6248;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F8(var_48, var_40)
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
            pri = fun_0E08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4108_case_default
        }
        case 0x1c:
        {
// switch_4108_case_0x1c
            var_8 = 2;
            var_16 = 6336;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            var_40 = 6472;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_09F8(var_48, var_40)
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
            pri = fun_0E08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4108_case_default
        }
        case 0x1d:
        {
// switch_4108_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x1e:
        {
// switch_4108_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x1f:
        {
// switch_4108_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x20:
        {
// switch_4108_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6968;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x21:
        {
// switch_4108_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7088;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x22:
        {
// switch_4108_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x23:
        {
// switch_4108_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x24:
        {
// switch_4108_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x25:
        {
// switch_4108_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x26:
        {
// switch_4108_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7752;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x27:
        {
// switch_4108_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7896;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x28:
        {
// switch_4108_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8040;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
        case 0x29:
        {
// switch_4108_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8184;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4108_case_default
        }
    }
}
// fun_4748
fun_4748() {
    pri = arg_5;
    OP_JNZ lab_4780
    var_8 = 0;
    pri = fun_10A8()
// lab_4780
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_47D0
    OP_CONST_S -8, -1
// lab_47D0
    pri = arg_1;
    switch (pri) {
// switch_6288
        case default:
        {
// switch_6288_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6730
            var_520 = 28192;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0A70(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6730
            pri = 1;
            OP_JUMP lab_6738
// lab_6730
            pri = 0;
// lab_6738
            OP_JZER lab_6788
            var_8 = 64;
            var_16 = 28288;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_69E0
// lab_6788
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_67F0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_67F0
            pri = 1;
            OP_JUMP lab_67F8
// lab_67F0
            pri = 0;
// lab_67F8
            OP_JZER lab_6980
            var_16 = 28464;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A70(var_24, var_16)
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
            OP_JUMP lab_69E0
// lab_6980
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
// lab_69E0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6A50
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6A50
            var_8 = 0;
            pri = fun_10E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6288_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x1:
        {
// switch_6288_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x2:
        {
// switch_6288_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x3:
        {
// switch_6288_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x4:
        {
// switch_6288_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x5:
        {
// switch_6288_case_0x5
            var_8 = 2;
            var_16 = 18448;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DD0(var_40)
            OP_JUMP switch_6288_case_default
        }
        case 0x6:
        {
// switch_6288_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x7:
        {
// switch_6288_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x8:
        {
// switch_6288_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x9:
        {
// switch_6288_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0xa:
        {
// switch_6288_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0xb:
        {
// switch_6288_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0xc:
        {
// switch_6288_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0xd:
        {
// switch_6288_case_0xd
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0xe:
        {
// switch_6288_case_0xe
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0xf:
        {
// switch_6288_case_0xf
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x10:
        {
// switch_6288_case_0x10
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x11:
        {
// switch_6288_case_0x11
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x12:
        {
// switch_6288_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x13:
        {
// switch_6288_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x14:
        {
// switch_6288_case_0x14
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x15:
        {
// switch_6288_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x16:
        {
// switch_6288_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x17:
        {
// switch_6288_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x18:
        {
// switch_6288_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x19:
        {
// switch_6288_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x1a:
        {
// switch_6288_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x1b:
        {
// switch_6288_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x1c:
        {
// switch_6288_case_0x1c
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x1d:
        {
// switch_6288_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x1e:
        {
// switch_6288_case_0x1e
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x1f:
        {
// switch_6288_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x20:
        {
// switch_6288_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x21:
        {
// switch_6288_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x22:
        {
// switch_6288_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x23:
        {
// switch_6288_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x24:
        {
// switch_6288_case_0x24
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x25:
        {
// switch_6288_case_0x25
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x26:
        {
// switch_6288_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x27:
        {
// switch_6288_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x28:
        {
// switch_6288_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x29:
        {
// switch_6288_case_0x29
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x2a:
        {
// switch_6288_case_0x2a
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x2b:
        {
// switch_6288_case_0x2b
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x2c:
        {
// switch_6288_case_0x2c
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x2d:
        {
// switch_6288_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x2e:
        {
// switch_6288_case_0x2e
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x2f:
        {
// switch_6288_case_0x2f
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x30:
        {
// switch_6288_case_0x30
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x31:
        {
// switch_6288_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x32:
        {
// switch_6288_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x33:
        {
// switch_6288_case_0x33
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x34:
        {
// switch_6288_case_0x34
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x35:
        {
// switch_6288_case_0x35
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x36:
        {
// switch_6288_case_0x36
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x37:
        {
// switch_6288_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x38:
        {
// switch_6288_case_0x38
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6288_case_default
        }
        case 0x39:
        {
// switch_6288_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x3a:
        {
// switch_6288_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x3b:
        {
// switch_6288_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x3c:
        {
// switch_6288_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27768;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x3d:
        {
// switch_6288_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27944;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
        case 0x3e:
        {
// switch_6288_case_0x3e
            var_8 = 4;
            var_16 = 28088;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            OP_JUMP switch_6288_case_default
        }
    }
}
// fun_6A80
fun_6A80() {
    pri = arg_4;
    OP_JNZ lab_6AB8
    var_8 = 0;
    pri = fun_10A8()
// lab_6AB8
    pri = arg_1;
    switch (pri) {
// switch_7E90
        case default:
        {
// switch_7E90_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29160;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1840(var_264)
            OP_JZER lab_8458
            pri = arg_3;
            switch (pri) {
// switch_8400
                case default:
                {
// switch_8400_case_default
                    OP_JUMP lab_8710
// lab_8710
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8780
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8780
                    var_8 = 0;
                    pri = fun_10E8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8400_case_0x1
                    var_8 = 32;
                    var_16 = 29312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8400_case_default
                }
                case 0x2:
                {
// switch_8400_case_0x2
                    var_8 = 32;
                    var_16 = 29416;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8400_case_default
                }
                case 0x3:
                {
// switch_8400_case_0x3
                    var_8 = 32;
                    var_16 = 29216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0168(var_16, var_8, var_0)
                    OP_JUMP switch_8400_case_default
                }
            }
// lab_8458
            pri = arg_1;
            OP_JZER lab_84A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_84A8
            pri = 0;
            OP_JUMP lab_84B0
// lab_84A8
            pri = 1;
// lab_84B0
            OP_JZER lab_8518
            var_8 = 29512;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0A70(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8518
            pri = 1;
            OP_JUMP lab_8520
// lab_8518
            pri = 0;
// lab_8520
            OP_JZER lab_8570
            var_8 = 32;
            var_16 = 29608;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8710
// lab_8570
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_85D8
            var_8 = 32;
            var_16 = 29768;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0168(var_16, var_8, var_0)
            OP_JUMP lab_8710
// lab_85D8
            var_16 = 29888;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0A70(var_24, var_16)
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
// switch_7E90_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1:
        {
// switch_7E90_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2:
        {
// switch_7E90_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x3:
        {
// switch_7E90_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x4:
        {
// switch_7E90_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x5:
        {
// switch_7E90_case_0x5
            var_8 = 1;
            var_16 = 28640;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DD0(var_40)
            OP_JUMP switch_7E90_case_default
        }
        case 0x6:
        {
// switch_7E90_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x7:
        {
// switch_7E90_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x8:
        {
// switch_7E90_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x9:
        {
// switch_7E90_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0xa:
        {
// switch_7E90_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0xb:
        {
// switch_7E90_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0xc:
        {
// switch_7E90_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0xd:
        {
// switch_7E90_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0xe:
        {
// switch_7E90_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0xf:
        {
// switch_7E90_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x10:
        {
// switch_7E90_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x11:
        {
// switch_7E90_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x12:
        {
// switch_7E90_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x13:
        {
// switch_7E90_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x14:
        {
// switch_7E90_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x15:
        {
// switch_7E90_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x16:
        {
// switch_7E90_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x17:
        {
// switch_7E90_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x18:
        {
// switch_7E90_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x19:
        {
// switch_7E90_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1a:
        {
// switch_7E90_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1b:
        {
// switch_7E90_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1c:
        {
// switch_7E90_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1d:
        {
// switch_7E90_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1e:
        {
// switch_7E90_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x1f:
        {
// switch_7E90_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x20:
        {
// switch_7E90_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x21:
        {
// switch_7E90_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x22:
        {
// switch_7E90_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x23:
        {
// switch_7E90_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x24:
        {
// switch_7E90_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x25:
        {
// switch_7E90_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x26:
        {
// switch_7E90_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x27:
        {
// switch_7E90_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x28:
        {
// switch_7E90_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x29:
        {
// switch_7E90_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2a:
        {
// switch_7E90_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2b:
        {
// switch_7E90_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2c:
        {
// switch_7E90_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2d:
        {
// switch_7E90_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2e:
        {
// switch_7E90_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x2f:
        {
// switch_7E90_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x30:
        {
// switch_7E90_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x31:
        {
// switch_7E90_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x32:
        {
// switch_7E90_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x33:
        {
// switch_7E90_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x34:
        {
// switch_7E90_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x35:
        {
// switch_7E90_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x36:
        {
// switch_7E90_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x37:
        {
// switch_7E90_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x38:
        {
// switch_7E90_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x39:
        {
// switch_7E90_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x3a:
        {
// switch_7E90_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x3b:
        {
// switch_7E90_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x3c:
        {
// switch_7E90_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28736;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x3d:
        {
// switch_7E90_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28912;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
        case 0x3e:
        {
// switch_7E90_case_0x3e
            var_8 = 3;
            var_16 = 29056;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0A30(var_24, var_16, var_8)
            OP_JUMP switch_7E90_case_default
        }
    }
}
// fun_87B0
fun_87B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_89C0(var_16, var_8)
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
    OP_JZER lab_89A8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_89A8
    pri = 0;
    return pri;
}
// fun_89C0
fun_89C0() {
    var_8 = arg_1;
    var_16 = 30176;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0A30(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8A08
fun_8A08() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8B08
        case default:
        {
// switch_8B08_case_default
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
// switch_8B08_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8B08_case_default
        }
        case 0x1:
        {
// switch_8B08_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8B08_case_default
        }
        case 0x2:
        {
// switch_8B08_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8B08_case_default
        }
        case 0x3:
        {
// switch_8B08_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8B08_case_default
        }
    }
}
// fun_8BC8
fun_8BC8() {
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
    pri = fun_2388(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2438()
    pri = 0;
    return pri;
}
// fun_8C60
fun_8C60() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8A08(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_8BC8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_8D08
fun_8D08() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8D58
// lab_8D58
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30280;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8DD0
    OP_JUMP lab_8E00
// lab_8DD0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0090(var_8)
    OP_JUMP lab_8D58
// lab_8E00
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8E88
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6A80(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1B10(var_56)
// lab_8E88
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8EF0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1650(var_24, var_16)
// lab_8EF0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1650(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8FB0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0AA8(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0828(var_88, var_80, var_72, var_64, var_56)
// lab_8FB0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8FF0
    pri = 0;
    return pri;
// lab_8FF0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9138
    var_16 = 1;
    var_24 = 8;
    pri = fun_0090(var_16)
    var_32 = 30400;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_09F8(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9100
    var_72 = 12;
    var_80 = 8;
    pri = fun_0090(var_72)
// lab_9138
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_08D0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08D0(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AA8(var_40)
    pri = 0;
    return pri;
// lab_9100
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1650(var_16, var_8)
}
// fun_91C0
fun_91C0() {
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
    pri = fun_8C60(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_24D0(var_112)
    var_128 = 0;
    pri = fun_2590()
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
    pri = fun_8D08(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9338
fun_9338() {
    pri = 30536;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_93C0
// lab_93C0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9540
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9530
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9480
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9480
    pri = 0;
    OP_JUMP lab_9488
// lab_9540
    pri = 0;
    return pri;
// lab_9530
    OP_JUMP lab_93B8
// lab_93B8
    OP_INC_P_S -936
// lab_9480
    pri = 1;
// lab_9488
    OP_JZER lab_9500
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_94F8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9500
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_94F8
}
// fun_9560
fun_9560() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9598
fun_9598() {
    var_8 = 0;
    pri = fun_9560()
    switch (pri) {
// switch_9648
        case default:
        {
// switch_9648_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_9690
// lab_9690
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_9648_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_9690
        }
        case 0x1:
        {
// switch_9648_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_9690
        }
        case 0x2:
        {
// switch_9648_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_9690
        }
    }
}
// fun_96A0
fun_96A0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9738
    var_8 = 1;
    var_16 = 0;
    var_24 = 31456;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 0;
    pri = fun_1AE8()
// lab_9738
    pri = arg_4;
    OP_JZER lab_9770
    var_8 = 1;
    var_16 = 8;
    pri = fun_1B40(var_8)
// lab_9770
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_97C8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_97C8
    pri = 0;
    OP_JUMP lab_97D0
// lab_97C8
    pri = 1;
// lab_97D0
    OP_JZER lab_9898
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9898
    var_16 = 0;
    pri = fun_0410()
    OP_JZER lab_9870
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1A28(var_32, var_24)
    OP_JUMP lab_9898
// lab_9898
    pri = arg_2;
    OP_JZER lab_9970
    var_8 = 0;
    pri = fun_0410()
    OP_JZER lab_9940
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1650(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0778(var_40)
    OP_JUMP lab_9970
// lab_9970
    pri = arg_3;
    OP_JZER lab_99A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1AB0(var_8)
// lab_99A8
    pri = 0;
    return pri;
// lab_9940
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1650(var_16, var_8)
// lab_9870
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1A28(var_16, var_8)
}
// fun_99B8
fun_99B8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9B38
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9A50
    var_8 = 1;
    var_16 = 0;
    var_24 = 31456;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
// lab_9B38
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9A50
    pri = arg_0;
    OP_JNZ lab_9A98
    var_8 = 31504;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_9AB8
// lab_9A98
    var_8 = 31680;
    pri = SoundPostEvent(var_8)
// lab_9AB8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0438(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9B38
    var_24 = 31944;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02B0(var_32, var_24)
    var_48 = 0;
    pri = fun_0380()
}
// fun_9B78
fun_9B78() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_9C00
    pri = arg_0;
    var_8 = pri;
    pri = arg_2;
    var_16 = pri;
    OP_JUMP lab_9C20
// lab_9C00
    pri = arg_1;
    var_8 = pri;
    pri = arg_3;
    var_16 = pri;
// lab_9C20
    var_8 = 0;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = var_16;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_2388(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9C88
fun_9C88() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9338(var_24)
    pri = 0;
    return pri;
}
// fun_9CF0
fun_9CF0() {
    pri = g_mode;
    switch (pri) {
// switch_9DD8
        case default:
        {
// switch_9DD8_case_default
            pri = CommandNOP()
            OP_JUMP lab_9E30
// lab_9E30
            pri = 0;
            return pri;
        }
        case 0xf5a04ffc9f130fc2:
        {
// switch_9DD8_case_0xf5a04ffc9f130fc2
            var_8 = 0;
            pri = fun_D348()
            OP_JUMP lab_9E30
        }
        case 0x0:
        {
// switch_9DD8_case_0x0
            var_8 = 0;
            pri = fun_9E40()
            OP_JUMP lab_9E30
        }
        case 0x3daec32779519371:
        {
// switch_9DD8_case_0x3daec32779519371
            var_8 = 0;
            pri = fun_D300()
            OP_JUMP lab_9E30
        }
        case 0x5b44ad2b0374d4ed:
        {
// switch_9DD8_case_0x5b44ad2b0374d4ed
            var_8 = 0;
            pri = fun_D1A8()
            OP_JUMP lab_9E30
        }
    }
}
// fun_9E40
fun_9E40() {
    pri = 0;
    return pri;
}
// fun_9E58
fun_9E58() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_96A0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9EB0
fun_9EB0() {
    pri = 0;
    return pri;
}
// fun_9EC8
fun_9EC8() {
    pri = 0;
    return pri;
}
// fun_9EE0
fun_9EE0() {
    pri = EvCameraStart()
    OP_ZERO_P_S -8
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    OP_EQ_P_C_PRI 1280
    OP_JZER lab_9F68
    OP_CONST_S -8, 1
// lab_9F68
    pri = var_8;
    OP_JZER lab_B4F0
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4666670490467210101, 4659806584621655654, 8802641224559852288
    var_40 = 48;
    pri = fun_0720(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    OP_PUSH4_C 4636033603912859648, 4666688262973161472, 4660387126761121382, -957350763623574401
    var_64 = 48;
    pri = fun_0720(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    OP_PUSH4_C 4636033603912859648, 4666630978417354342, 4660294327979737088, 2162984971204676483
    var_88 = 48;
    pri = fun_0720(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 8;
    pri = fun_0090(var_96)
    var_112 = 31992;
    pri = SoundPostEvent(var_112)
    var_120 = 0;
    var_128 = 4632008511745897267;
    var_136 = 0;
    OP_PUSH5_C 4666440773900865372, 4646156323684677059, 4661116124960569426, 4666968698911383880, 4649408063353126912
    var_144 = 4659263843691952865;
    var_152 = 1;
    pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 0;
    pri = fun_28D0()
    var_168 = 1;
    var_176 = 0;
    var_184 = 4641240890982006784;
    var_192 = 0;
    var_200 = 0;
    OP_PUSH4_C 4666688262973161472, 4663040358270107648, 4611686018427387904, -957350763623574401
    var_208 = 72;
    pri = fun_07B0(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 1;
    var_224 = 0;
    var_232 = 4641240890982006784;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH4_C 4666630978417354342, 4662219792742298419, 4607182418800017408, 2162984971204676483
    var_256 = 72;
    pri = fun_07B0(var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = 0;
    var_296 = 0;
    OP_PUSH4_C 4666670505860372890, 4662066740723712000, 4607182418800017408, 8802641224559852288
    var_304 = 72;
    pri = fun_07B0(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232)
    var_312 = 15;
    var_320 = 8;
    pri = fun_0090(var_312)
    var_328 = 0;
    var_336 = 4632008511745897267;
    var_344 = 3;
    OP_PUSH5_C 4666580466853174313, 4646156323684677059, 4661489640055641211, 4667108628258692792, 4649405336564290028
    var_352 = 4659902242133272166;
    var_360 = 200;
    pri = EvCameraMove(var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 31944;
    var_376 = 8;
    var_384 = 16;
    pri = fun_02B0(var_376, var_368)
    var_392 = 0;
    pri = fun_0380()
    var_400 = -957350763623574401;
    var_408 = 8;
    pri = fun_08D0(var_400)
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    var_440 = -90;
    pri = float(var_440)
    var_448 = pri;
    var_456 = -957350763623574401;
    var_464 = 40;
    pri = fun_0828(var_456, var_448, var_440, var_432, var_424)
    var_472 = -957350763623574401;
    var_480 = 8;
    pri = fun_08D0(var_472)
    var_488 = 1;
    var_496 = 1;
    var_504 = -1;
    var_512 = -1;
    var_520 = 0;
    var_528 = 7;
    var_536 = -957350763623574401;
    var_544 = 56;
    pri = fun_4748(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 50;
    var_560 = 8;
    pri = fun_0090(var_552)
    var_568 = 1;
    var_576 = 0;
    var_584 = 31456;
    var_592 = 30;
    var_600 = 32;
    pri = fun_0310(var_592, var_584, var_576, var_568)
    var_608 = 0;
    pri = fun_0380()
    var_616 = 8802641224559852288;
    var_624 = 8;
    pri = fun_08D0(var_616)
    var_632 = 2162984971204676483;
    var_640 = 8;
    pri = fun_08D0(var_632)
    var_648 = 1;
    var_656 = 3;
    var_664 = 0;
    var_672 = 7;
    var_680 = -957350763623574401;
    var_688 = 40;
    pri = fun_6A80(var_680, var_672, var_664, var_656, var_648)
    var_696 = -957350763623574401;
    var_704 = 8;
    pri = fun_0AA8(var_696)
    var_712 = 0;
    pri = fun_28D0()
    var_720 = 0;
    var_728 = 4628884139504408986;
    var_736 = 0;
    OP_PUSH5_C 4666301597719021486, 4645571735342421115, 4663242613434037043, 4667020150558005658, 4649216660368963666
    var_744 = 4662648052521317171;
    var_752 = 1;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 0;
    pri = fun_28D0()
    var_768 = 0;
    var_776 = 4628884139504408986;
    var_784 = 3;
    OP_PUSH5_C 4666301597719021486, 4645571735342421115, 4663242613434037043, 4666854283731397509, 4648622572246243738
    var_792 = 4662785326548045005;
    var_800 = 300;
    pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 1;
    var_816 = 1;
    var_824 = 180;
    pri = float(var_824)
    var_832 = pri;
    var_840 = 9500;
    pri = float(var_840)
    var_848 = pri;
    OP_PUSH2_C 4663320953637516083, 8802641224559852288
    var_856 = 48;
    pri = fun_0720(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 1;
    var_872 = 1;
    var_880 = -170;
    pri = float(var_880)
    var_888 = pri;
    OP_PUSH3_C 4666232790281355264, 4663485110723543040, -957350763623574401
    var_896 = 48;
    pri = fun_0720(var_888, var_880, var_872, var_864, var_856, var_848)
    var_904 = 1;
    var_912 = 1;
    var_920 = 170;
    pri = float(var_920)
    var_928 = pri;
    OP_PUSH3_C 4666212449316241408, 4663183844537532416, 2162984971204676483
    var_936 = 48;
    pri = fun_0720(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 1;
    var_952 = 0;
    var_960 = 30;
    pri = float(var_960)
    var_968 = pri;
    var_976 = 0;
    pri = float(var_976)
    var_984 = pri;
    var_992 = 0;
    OP_PUSH4_C 4666289635032511283, 4663320953637516083, 4607182418800017408, 8802641224559852288
    var_1000 = 72;
    pri = fun_07B0(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 20;
    var_1016 = 8;
    pri = fun_0090(var_1008)
    var_1024 = 31944;
    var_1032 = 8;
    var_1040 = 16;
    pri = fun_02B0(var_1032, var_1024)
    var_1048 = 0;
    pri = fun_0380()
    var_1056 = 8802641224559852288;
    var_1064 = 8;
    pri = fun_08D0(var_1056)
    var_1072 = 30;
    var_1080 = 8;
    pri = fun_0090(var_1072)
    var_1088 = 0;
    var_1096 = 4630587063113508454;
    var_1104 = 0;
    OP_PUSH5_C 4666327749603088138, 4648420350067663176, 4663393004634484244, 4666338667753551954, 4648423956465802281
    var_1112 = 4663395500525879296;
    var_1120 = 1;
    pri = EvCameraMove(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1128 = 0;
    pri = fun_28D0()
    var_1136 = 0;
    var_1144 = 4630587063113508454;
    var_1152 = 3;
    OP_PUSH5_C 4666329987109250662, 4646292135360939950, 4663263086340546232, 4666340833791458673, 4646348430356282081
    var_1160 = 4663262525589616067;
    var_1168 = 300;
    pri = EvCameraMove(var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096)
    var_1176 = 1;
    var_1184 = 1;
    OP_PUSH4_C -4584618680979449446, 4666289635032511283, 4663382526288671539, 8802641224559852288
    var_1192 = 48;
    pri = fun_0720(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1200 = 1;
    var_1208 = 1;
    OP_PUSH4_C -4586796593611748147, 4666232790281355264, 4663485110723543040, -957350763623574401
    var_1216 = 48;
    pri = fun_0720(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1224 = 30;
    var_1232 = 8;
    pri = fun_0090(var_1224)
    var_1240 = 0;
    var_1248 = 3;
    var_1256 = 0;
    var_1264 = 100;
    var_1272 = -1;
    OP_PUSH2_C 9221330502349741814, 2162984971204676483
    var_1280 = 56;
    pri = fun_2388(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1288 = 1;
    var_1296 = 8;
    pri = fun_24D0(var_1288)
    var_1304 = 0;
    pri = fun_2590()
    var_1312 = 1;
    var_1320 = 1;
    var_1328 = -1;
    var_1336 = -1;
    var_1344 = 0;
    var_1352 = 6;
    var_1360 = 2162984971204676483;
    var_1368 = 56;
    pri = fun_4748(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1376 = 0;
    var_1384 = 3;
    var_1392 = 0;
    var_1400 = 100;
    var_1408 = -1;
    OP_PUSH2_C 9221340397954395713, 2162984971204676483
    var_1416 = 56;
    pri = fun_2388(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = 1;
    var_1432 = 8;
    pri = fun_24D0(var_1424)
    var_1440 = 0;
    pri = fun_2590()
    var_1448 = 1;
    var_1456 = 3;
    var_1464 = 0;
    var_1472 = 6;
    var_1480 = 2162984971204676483;
    var_1488 = 40;
    pri = fun_6A80(var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1496 = 2162984971204676483;
    var_1504 = 8;
    pri = fun_0AA8(var_1496)
    var_1512 = 8802641224559852288;
    var_1520 = 8;
    pri = fun_08D0(var_1512)
    var_1528 = -957350763623574401;
    var_1536 = 8;
    pri = fun_08D0(var_1528)
    var_1544 = 15;
    var_1552 = 8;
    pri = fun_0090(var_1544)
    var_1560 = 0;
    var_1568 = 4629447089457830298;
    var_1576 = 0;
    OP_PUSH5_C 4666255869030422282, 4645037460652252201, 4663341195646583439, 4666456881746212291, 4645926041969355653
    var_1584 = 4663389354255880028;
    var_1592 = 1;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 0;
    pri = fun_28D0()
    var_1608 = 0;
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 0;
    OP_PUSH2_C 8802641224559852288, 2162984971204676483
    var_1640 = 48;
    pri = fun_0878(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 0;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C 9221329402838113603, 2162984971204676483
    var_1688 = 56;
    pri = fun_2388(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 2162984971204676483;
    var_1704 = 8;
    pri = fun_08D0(var_1696)
    var_1712 = 1;
    var_1720 = 8;
    pri = fun_24D0(var_1712)
    var_1728 = 0;
    pri = fun_2590()
    var_1736 = 0;
    var_1744 = 2;
    var_1752 = -957350763623574401;
    var_1760 = 24;
    pri = fun_87B0(var_1752, var_1744, var_1736)
    var_1768 = 1;
    var_1776 = 8;
    pri = fun_0090(var_1768)
    var_1784 = -957350763623574401;
    var_1792 = 8;
    pri = fun_0AA8(var_1784)
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 100;
    var_1824 = -1;
    OP_PUSH4_C 2995041175565460429, 2995031279960806530, -957350763623574401, -957350763623574401
    var_1832 = 64;
    pri = fun_9B78(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1840 = 1;
    var_1848 = 8;
    pri = fun_24D0(var_1840)
    var_1856 = 0;
    pri = fun_2590()
    var_1864 = 1;
    var_1872 = 1;
    var_1880 = -1;
    OP_PUSH2_C -957350763623574401, 2162984971204676483
    var_1888 = 40;
    pri = fun_1128(var_1880, var_1872, var_1864, var_1856, var_1848)
    var_1896 = 0;
    var_1904 = 1;
    var_1912 = 2162984971204676483;
    var_1920 = 24;
    pri = fun_87B0(var_1912, var_1904, var_1896)
    var_1928 = 1;
    var_1936 = 8;
    pri = fun_0090(var_1928)
    var_1944 = 2162984971204676483;
    var_1952 = 8;
    pri = fun_0AA8(var_1944)
    var_1960 = 0;
    var_1968 = 3;
    var_1976 = 0;
    var_1984 = 100;
    var_1992 = -1;
    OP_PUSH2_C 9221328303326485392, 2162984971204676483
    var_2000 = 56;
    pri = fun_2388(var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2008 = 1;
    var_2016 = 8;
    pri = fun_24D0(var_2008)
    var_2024 = 0;
    pri = fun_2590()
    var_2032 = 0;
    var_2040 = 0;
    var_2048 = -957350763623574401;
    var_2056 = 24;
    pri = fun_87B0(var_2048, var_2040, var_2032)
    var_2064 = 1;
    var_2072 = 8;
    pri = fun_0090(var_2064)
    var_2080 = -957350763623574401;
    var_2088 = 8;
    pri = fun_0AA8(var_2080)
    var_2096 = 0;
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = 0;
    OP_PUSH2_C 8802641224559852288, -957350763623574401
    var_2128 = 48;
    pri = fun_0878(var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2136 = 15;
    var_2144 = 8;
    pri = fun_0090(var_2136)
    var_2152 = 0;
    var_2160 = 0;
    var_2168 = 0;
    var_2176 = 0;
    OP_PUSH2_C -957350763623574401, 8802641224559852288
    var_2184 = 48;
    pri = fun_0878(var_2176, var_2168, var_2160, var_2152, var_2144, var_2136)
    var_2192 = 32176;
    pri = SoundPostEvent(var_2192)
    var_2200 = 32360;
    pri = SoundPostEvent(var_2200)
    var_2208 = 5;
    var_2216 = 6;
    var_2224 = -957350763623574401;
    var_2232 = 24;
    pri = fun_1780(var_2224, var_2216, var_2208)
    var_2240 = 1;
    var_2248 = 1;
    var_2256 = -1;
    var_2264 = -1;
    var_2272 = 0;
    var_2280 = 8;
    var_2288 = -957350763623574401;
    var_2296 = 56;
    pri = fun_4748(var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240)
    var_2304 = 0;
    var_2312 = 3;
    var_2320 = 0;
    var_2328 = 100;
    var_2336 = -1;
    OP_PUSH2_C 2995029080937550108, -957350763623574401
    var_2344 = 56;
    pri = fun_2388(var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2352 = 1;
    var_2360 = 8;
    pri = fun_24D0(var_2352)
    var_2368 = 8802641224559852288;
    var_2376 = 8;
    pri = fun_08D0(var_2368)
    var_2384 = -957350763623574401;
    var_2392 = 8;
    pri = fun_08D0(var_2384)
    OP_JUMP lab_B830
// lab_B4F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 31456;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0310(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0380()
    var_56 = 1;
    var_64 = 1;
    OP_PUSH4_C 4639055941475290317, 4666289635032511283, 4663382526288671539, 8802641224559852288
    var_72 = 48;
    pri = fun_0720(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 1;
    var_88 = 1;
    OP_PUSH4_C -4591715368829766861, 4666232790281355264, 4663485110723543040, -957350763623574401
    var_96 = 48;
    pri = fun_0720(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4632543314201647514, 4666212449316241408, 4663183844537532416, 2162984971204676483
    var_120 = 48;
    pri = fun_0720(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 0;
    var_136 = 4629447089457830298;
    var_144 = 0;
    OP_PUSH5_C 4666255869030422282, 4645037460652252201, 4663341195646583439, 4666456881746212291, 4645926041969355653
    var_152 = 4663389354255880028;
    var_160 = 1;
    pri = EvCameraMove(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_168 = 0;
    pri = fun_28D0()
    var_176 = 32520;
    pri = SoundPostEvent(var_176)
    var_184 = 31944;
    var_192 = 8;
    var_200 = 16;
    pri = fun_02B0(var_192, var_184)
    var_208 = 0;
    pri = fun_0380()
    var_216 = 5;
    var_224 = 6;
    var_232 = -957350763623574401;
    var_240 = 24;
    pri = fun_1780(var_232, var_224, var_216)
    var_248 = 1;
    var_256 = 1;
    var_264 = -1;
    var_272 = -1;
    var_280 = 0;
    var_288 = 8;
    var_296 = -957350763623574401;
    var_304 = 56;
    pri = fun_4748(var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 100;
    var_344 = -1;
    OP_PUSH2_C 2995029080937550108, -957350763623574401
    var_352 = 56;
    pri = fun_2388(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 1;
    var_368 = 8;
    pri = fun_24D0(var_360)
// lab_B830
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    OP_PUSH2_C -3704087540780721125, -3704086441269092914
    var_40 = 1;
    var_48 = 48;
    pri = fun_25C0(var_40, var_32, var_24, var_16, var_8, var_0)
    var_16 = pri;
    var_56 = 0;
    pri = fun_2590()
    pri = var_16;
    OP_JNZ lab_BAF0
    var_64 = -957350763623574401;
    var_72 = 8;
    pri = fun_17E8(var_64)
    var_80 = 1;
    var_88 = 3;
    var_96 = 0;
    var_104 = 8;
    var_112 = -957350763623574401;
    var_120 = 40;
    pri = fun_6A80(var_112, var_104, var_96, var_88, var_80)
    var_128 = -957350763623574401;
    var_136 = 8;
    pri = fun_0AA8(var_128)
    var_144 = 0;
    var_152 = 3;
    var_160 = 0;
    var_168 = 100;
    var_176 = -1;
    OP_PUSH2_C 2995024682891037264, -957350763623574401
    var_184 = 56;
    pri = fun_2388(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 1;
    var_200 = 8;
    pri = fun_24D0(var_192)
    var_208 = 0;
    pri = fun_2590()
    var_216 = 0;
    var_224 = 0;
    var_232 = 2162984971204676483;
    var_240 = 24;
    pri = fun_87B0(var_232, var_224, var_216)
    var_248 = 1;
    var_256 = 8;
    pri = fun_0090(var_248)
    var_264 = 2162984971204676483;
    var_272 = 8;
    pri = fun_0AA8(var_264)
    var_280 = -957350763623574401;
    var_288 = 8;
    pri = fun_0AA8(var_280)
    var_296 = 32680;
    pri = SoundPostEvent(var_296)
    var_304 = 3;
    var_312 = 30;
    pri = EvCameraEnd(var_312, var_304)
    pri = 0;
    return pri;
// lab_BAF0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C 2995027981425921897, -957350763623574401
    var_48 = 56;
    pri = fun_2388(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_24D0(var_56)
    var_72 = 0;
    pri = fun_2590()
    var_80 = 1;
    var_88 = 3;
    var_96 = 0;
    var_104 = 8;
    var_112 = -957350763623574401;
    var_120 = 40;
    pri = fun_6A80(var_112, var_104, var_96, var_88, var_80)
    var_128 = -957350763623574401;
    var_136 = 8;
    pri = fun_0AA8(var_128)
    var_144 = -1;
    var_152 = 2162984971204676483;
    var_160 = 16;
    pri = fun_1650(var_152, var_144)
    var_168 = 0;
    var_176 = 1;
    var_184 = 2162984971204676483;
    var_192 = 24;
    pri = fun_87B0(var_184, var_176, var_168)
    var_200 = 1;
    var_208 = 8;
    pri = fun_0090(var_200)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    OP_PUSH2_C 9221333800884626447, 2162984971204676483
    var_256 = 56;
    pri = fun_2388(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 2162984971204676483;
    var_272 = 8;
    pri = fun_0AA8(var_264)
    var_280 = 1;
    var_288 = 8;
    pri = fun_24D0(var_280)
    var_296 = 0;
    pri = fun_2590()
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 3;
    var_336 = 0;
    var_344 = 2;
    var_352 = 2162984971204676483;
    var_360 = 56;
    pri = fun_2B68(var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    var_368 = 1;
    var_376 = 1;
    var_384 = 50;
    OP_PUSH2_C 2162984971204676483, 8802641224559852288
    var_392 = 40;
    pri = fun_1128(var_384, var_376, var_368, var_360, var_352)
    var_400 = 15;
    var_408 = 8;
    pri = fun_0090(var_400)
    var_416 = 1;
    var_424 = 1;
    var_432 = 16;
    pri = fun_99B8(var_424, var_416)
    var_440 = 2162984971204676483;
    var_448 = 8;
    pri = fun_0AA8(var_440)
    var_456 = 50;
    var_464 = 8802641224559852288;
    var_472 = 16;
    pri = fun_1650(var_464, var_456)
    var_480 = 20;
    var_488 = 8;
    pri = fun_0090(var_480)
    var_496 = 32840;
    pri = SoundPostEvent(var_496)
    var_504 = 0;
    var_512 = 4628039714574277018;
    var_520 = 3;
    OP_PUSH5_C 4666192465692406579, 4645244344760134533, 4663407826051226665, 4666394775831917363, 4646129231718168658
    var_528 = 4663422570502155141;
    var_536 = 15;
    pri = EvCameraMove(var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 0;
    var_552 = 0;
    var_560 = 3;
    var_568 = 8;
    OP_PUSH2_C 4600877379321698714, 4599075939470750516
    var_576 = 48;
    pri = fun_2960(var_568, var_560, var_552, var_544, var_536, var_528)
    var_584 = 0;
    pri = fun_2AC8()
    var_592 = 3;
    var_600 = 7;
    var_608 = 16;
    pri = fun_2A30(var_600, var_592)
    var_616 = 1;
    var_624 = 1;
    var_632 = -1;
    var_640 = -1;
    var_648 = 0;
    var_656 = 23;
    var_664 = -957350763623574401;
    var_672 = 56;
    pri = fun_4748(var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_680 = 0;
    var_688 = 3;
    var_696 = 0;
    var_704 = 100;
    var_712 = -1;
    OP_PUSH2_C 2995026881914293686, -957350763623574401
    var_720 = 56;
    pri = fun_2388(var_712, var_704, var_696, var_688, var_680, var_672, var_664)
    var_728 = 1;
    var_736 = 8;
    pri = fun_24D0(var_728)
    var_744 = 0;
    pri = fun_2590()
    var_760 = 204;
    var_768 = 203;
    var_776 = 202;
    var_784 = 24;
    pri = fun_9598(var_776, var_768, var_760)
    var_24 = pri;
    var_792 = 40;
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    var_824 = var_24;
    var_832 = 40;
    pri = fun_2678(var_824, var_816, var_808, var_800, var_792)
    var_840 = 0;
    pri = fun_2790()
    OP_JZER lab_C180
    var_848 = 0;
    pri = fun_D158()
    var_856 = 0;
    pri = fun_2880()
// lab_C180
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4639055941475290317, 4666289635032511283, 4663382526288671539, 8802641224559852288
    var_24 = 48;
    pri = fun_0720(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C -4592250171285517107, 4666232790281355264, 4663485110723543040, -957350763623574401
    var_48 = 48;
    pri = fun_0720(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 0;
    var_64 = 4629447089457830298;
    var_72 = 0;
    OP_PUSH5_C 4666361240727270195, 4647116505198981284, 4663355104468674806, 4666565183641548227, 4646914898746912276
    var_80 = 4663377193657276826;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_28D0()
    var_104 = 0;
    var_112 = 4629447089457830298;
    var_120 = 3;
    OP_PUSH5_C 4666255869030422282, 4645037460652252201, 4663341195646583439, 4666456881746212291, 4645926041969355653
    var_128 = 4663389354255880028;
    var_136 = 150;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_144 = 31944;
    var_152 = 8;
    var_160 = 16;
    pri = fun_02B0(var_152, var_144)
    var_168 = 0;
    pri = fun_0380()
    var_176 = 35;
    var_184 = 8;
    pri = fun_0090(var_176)
    var_192 = 0;
    var_200 = 1;
    var_208 = 2162984971204676483;
    var_216 = 24;
    pri = fun_87B0(var_208, var_200, var_192)
    var_224 = 1;
    var_232 = 8;
    pri = fun_0090(var_224)
    var_240 = 2162984971204676483;
    var_248 = 8;
    pri = fun_0AA8(var_240)
    var_256 = 5;
    var_264 = 5;
    var_272 = 2162984971204676483;
    var_280 = 24;
    pri = fun_1780(var_272, var_264, var_256)
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    OP_PUSH2_C 2162984971204676483, 8802641224559852288
    var_320 = 48;
    pri = fun_0878(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 0;
    var_336 = 0;
    var_344 = 0;
    var_352 = 0;
    OP_PUSH2_C 2162984971204676483, -957350763623574401
    var_360 = 48;
    pri = fun_0878(var_352, var_344, var_336, var_328, var_320, var_312)
    var_368 = 0;
    var_376 = 3;
    var_384 = 0;
    var_392 = 100;
    var_400 = -1;
    OP_PUSH2_C 9221332701372998236, 2162984971204676483
    var_408 = 56;
    pri = fun_2388(var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_416 = 8802641224559852288;
    var_424 = 8;
    pri = fun_08D0(var_416)
    var_432 = -957350763623574401;
    var_440 = 8;
    pri = fun_08D0(var_432)
    var_448 = 1;
    var_456 = 8;
    pri = fun_24D0(var_448)
    var_464 = 1;
    var_472 = 1;
    var_480 = -1;
    OP_PUSH2_C -957350763623574401, 2162984971204676483
    var_488 = 40;
    pri = fun_1128(var_480, var_472, var_464, var_456, var_448)
    var_496 = 5;
    var_504 = 8;
    pri = fun_0090(var_496)
    var_512 = 2162984971204676483;
    var_520 = 8;
    pri = fun_17E8(var_512)
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C 9221335999907882869, 2162984971204676483
    var_568 = 56;
    pri = fun_2388(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_24D0(var_576)
    var_592 = 0;
    pri = fun_2590()
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH2_C 8802641224559852288, -957350763623574401
    var_632 = 48;
    pri = fun_0878(var_624, var_616, var_608, var_600, var_592, var_584)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH2_C -957350763623574401, 8802641224559852288
    var_672 = 48;
    pri = fun_0878(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 8802641224559852288;
    var_688 = 8;
    pri = fun_08D0(var_680)
    var_696 = -957350763623574401;
    var_704 = 8;
    pri = fun_08D0(var_696)
    var_712 = 5;
    var_720 = 6;
    var_728 = -957350763623574401;
    var_736 = 24;
    pri = fun_1780(var_728, var_720, var_712)
    var_744 = 1;
    var_752 = 1;
    var_760 = -1;
    var_768 = -1;
    var_776 = 0;
    var_784 = 8;
    var_792 = -957350763623574401;
    var_800 = 56;
    pri = fun_4748(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 0;
    var_816 = 3;
    var_824 = 0;
    var_832 = 100;
    var_840 = -1;
    OP_PUSH2_C 2995030180449178319, -957350763623574401
    var_848 = 56;
    pri = fun_2388(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 1;
    var_864 = 8;
    pri = fun_24D0(var_856)
    var_872 = 0;
    pri = fun_2590()
    var_880 = 1;
    var_888 = 3;
    var_896 = 0;
    var_904 = 8;
    var_912 = -957350763623574401;
    var_920 = 40;
    pri = fun_6A80(var_912, var_904, var_896, var_888, var_880)
    var_928 = -957350763623574401;
    var_936 = 8;
    pri = fun_0AA8(var_928)
    var_944 = -957350763623574401;
    var_952 = 8;
    pri = fun_17E8(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 30;
    pri = float(var_976)
    var_984 = pri;
    var_992 = 0;
    pri = float(var_992)
    var_1000 = pri;
    var_1008 = 0;
    OP_PUSH4_C 4666577487176663040, 4663509299979354112, 4611686018427387904, -957350763623574401
    var_1016 = 72;
    pri = fun_07B0(var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1024 = 1;
    var_1032 = 1;
    var_1040 = 50;
    var_1048 = 0;
    var_1056 = 8802641224559852288;
    var_1064 = 40;
    pri = fun_11E0(var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1072 = 45;
    var_1080 = 8;
    pri = fun_0090(var_1072)
    var_1088 = 32984;
    pri = SoundPostEvent(var_1088)
    var_1096 = -957350763623574401;
    var_1104 = 8;
    pri = fun_08D0(var_1096)
    var_1112 = -1;
    var_1120 = 2162984971204676483;
    var_1128 = 16;
    pri = fun_1650(var_1120, var_1112)
    var_1136 = -1;
    var_1144 = 8802641224559852288;
    var_1152 = 16;
    pri = fun_1650(var_1144, var_1136)
    var_1160 = 0;
    var_1168 = 4628208599560303411;
    var_1176 = 3;
    OP_PUSH5_C 4666216764899380429, 4645340574017797489, 4663284460846590198, 4666409646726683034, 4646225109132110725
    var_1184 = 4663407265300296499;
    var_1192 = 120;
    pri = EvCameraMove(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120)
    var_1200 = 1;
    var_1208 = 1;
    var_1216 = -1;
    var_1224 = -1;
    var_1232 = 0;
    var_1240 = 6;
    var_1248 = 2162984971204676483;
    var_1256 = 56;
    pri = fun_4748(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1264 = 0;
    var_1272 = 0;
    var_1280 = 0;
    var_1288 = 0;
    OP_PUSH2_C 2162984971204676483, 8802641224559852288
    var_1296 = 48;
    pri = fun_0878(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248)
    var_1304 = 8;
    var_1312 = 2162984971204676483;
    var_1320 = 16;
    pri = fun_1690(var_1312, var_1304)
    var_1328 = 0;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 100;
    var_1360 = -1;
    OP_PUSH2_C 9221334900396254658, 2162984971204676483
    var_1368 = 56;
    pri = fun_2388(var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1376 = 1;
    var_1384 = 8;
    pri = fun_24D0(var_1376)
    var_1392 = 0;
    pri = fun_2590()
    var_1400 = 8802641224559852288;
    var_1408 = 8;
    pri = fun_08D0(var_1400)
    var_1416 = 33144;
    var_1424 = 2162984971204676483;
    var_1432 = 16;
    pri = fun_0CA8(var_1424, var_1416)
    var_1440 = 1;
    var_1448 = 3;
    var_1456 = 0;
    var_1464 = 6;
    var_1472 = 2162984971204676483;
    var_1480 = 40;
    pri = fun_6A80(var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1488 = 2162984971204676483;
    var_1496 = 8;
    pri = fun_0AA8(var_1488)
    var_1504 = 2162984971204676483;
    var_1512 = 8;
    pri = fun_17E8(var_1504)
    var_1520 = 0;
    var_1528 = 4628208599560303411;
    var_1536 = 3;
    OP_PUSH5_C 4666335385711343043, 4645912144142380564, 4663366330482394399, 4666524897535506514, 4647434923766385213
    var_1544 = 4663485473562380206;
    var_1552 = 120;
    pri = EvCameraMove(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1560 = 1;
    var_1568 = 0;
    var_1576 = 30;
    pri = float(var_1576)
    var_1584 = pri;
    var_1592 = 0;
    pri = float(var_1592)
    var_1600 = pri;
    var_1608 = 0;
    OP_PUSH4_C 4666620368130146304, 4663183844537532416, 4607182418800017408, 2162984971204676483
    var_1616 = 72;
    pri = fun_07B0(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1624 = 1;
    var_1632 = 1;
    var_1640 = 50;
    var_1648 = 1;
    var_1656 = 8802641224559852288;
    var_1664 = 40;
    pri = fun_11E0(var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1672 = 50;
    var_1680 = 8;
    pri = fun_0090(var_1672)
    var_1688 = 2162984971204676483;
    var_1696 = 8;
    pri = fun_08D0(var_1688)
    var_1704 = 3;
    var_1712 = 1;
    pri = EvCameraEnd(var_1712, var_1704)
    var_1720 = -1;
    var_1728 = 8802641224559852288;
    var_1736 = 16;
    pri = fun_1650(var_1728, var_1720)
    pri = 1;
    return pri;
}
// fun_D038
fun_D038() {
    pri = 0;
    return pri;
}
// fun_D050
fun_D050() {
    var_8 = 2162984971204676483;
    var_16 = 8;
    pri = fun_06C8(var_8)
    var_24 = -957350763623574401;
    var_32 = 8;
    pri = fun_06C8(var_24)
    var_40 = 4156158420330092502;
    var_48 = 8;
    pri = fun_0548(var_40)
    var_56 = 4322625172868200955;
    var_64 = 8;
    pri = fun_0548(var_56)
    var_72 = 1300;
    var_80 = 8;
    pri = fun_9C88(var_72)
    pri = 0;
    return pri;
}
// fun_D128
fun_D128() {
    var_8 = 0;
    pri = fun_0578()
    pri = 0;
    return pri;
}
// fun_D158
fun_D158() {
    var_8 = 1281;
    var_16 = 8;
    pri = fun_9C88(var_8)
    pri = 0;
    return pri;
}
// fun_D190
fun_D190() {
    pri = 0;
    return pri;
}
// fun_D1A8
fun_D1A8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9E58()
    var_16 = 0;
    pri = fun_9EB0()
    var_24 = 0;
    pri = fun_9EC8()
    var_32 = 0;
    pri = fun_9EE0()
    OP_JZER lab_D290
    var_40 = 0;
    pri = fun_D038()
    var_48 = 0;
    pri = fun_D050()
    var_56 = 0;
    pri = fun_D128()
    OP_JUMP lab_D2D8
// lab_D290
    var_8 = 0;
    pri = fun_D038()
    var_16 = 0;
    pri = fun_D158()
    var_24 = 0;
    pri = fun_D190()
// lab_D2D8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_D300
fun_D300() {
    var_8 = 0;
    pri = fun_9EB0()
    var_16 = 0;
    pri = fun_D050()
    pri = 0;
    return pri;
}
// fun_D348
fun_D348() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = 9221328303326485392;
    var_88 = 80;
    pri = fun_91C0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
