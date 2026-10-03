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
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0438
fun_0438() {
    pri = IsFieldObjectNotSetupAny_()
    return pri;
}
// fun_0460
fun_0460() {
    OP_JUMP lab_0478
// lab_0478
    var_8 = 0;
    pri = fun_0438()
    OP_JNZ lab_04B0
    pri = 0;
    return pri;
// lab_04B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0478
    pri = 0;
    return pri;
}
// fun_04F0
fun_04F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_05C0
fun_05C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0638
fun_0638() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetPlacementSelectParam_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 0;
    pri = fun_0460()
    pri = 0;
    return pri;
}
// fun_06B8
fun_06B8() {
    pri = ResetPlacementSelectParam_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    pri = fun_0460()
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
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
// fun_0798
fun_0798() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    OP_JZER lab_0810
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0F00(var_24)
    OP_JNZ lab_0810
    pri = 0;
    return pri;
// lab_0810
    OP_JUMP lab_0820
// lab_0820
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0880
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0820
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0980
    pri = 0;
    return pri;
// lab_0980
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_09C0
// lab_09C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    OP_JNZ lab_0A48
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0A38
    pri = 0;
    return pri;
// lab_0A48
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0A90
    pri = 0;
    return pri;
// lab_0A90
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0AF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0B38(var_8)
    pri = 0;
    return pri;
// lab_0AF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_09C0
    pri = 0;
    return pri;
// lab_0A38
    OP_JUMP lab_0A90
}
// fun_0B38
fun_0B38() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0B70
fun_0B70() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0ED0(var_8)
    OP_JZER lab_0CF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C18
    OP_ZERO_P_S 64
// lab_0CF0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D28
    OP_CONST_S 64, 1
// lab_0D28
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0D60
    OP_CONST_S 72, 1
// lab_0D60
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
// lab_0C18
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0C40
    OP_ZERO_P_S 72
// lab_0C40
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
    OP_JUMP lab_0E00
// lab_0E00
    pri = 0;
    return pri;
}
// fun_0E10
fun_0E10() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E50
fun_0E50() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E90
fun_0E90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0ED0
fun_0ED0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0F00
fun_0F00() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_0F30
fun_0F30() {
    OP_JUMP lab_0F48
// lab_0F48
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0FD8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0FC8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0938(var_8)
    pri = 0;
    return pri;
// lab_0FD8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1068
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1058
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0938(var_8)
    pri = 0;
    return pri;
// lab_1068
    pri = 0;
    return pri;
// lab_1058
    OP_JUMP lab_1078
// lab_1078
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F48
    pri = 0;
    return pri;
// lab_0FC8
    OP_JUMP lab_1078
}
// fun_10B8
fun_10B8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0938(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0F30(var_40)
    pri = 0;
    return pri;
}
// fun_1140
fun_1140() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_11A0
fun_11A0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_11D8
fun_11D8() {
    OP_JUMP lab_11F0
// lab_11F0
    pri = EvCameraMoveWait_()
    OP_JZER lab_1228
    pri = 0;
    return pri;
// lab_1228
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11F0
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    pri = arg_5;
    OP_JNZ lab_12A0
    var_8 = 0;
    pri = fun_0E10()
// lab_12A0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_12F0
    OP_CONST_S -8, -1
// lab_12F0
    pri = arg_1;
    switch (pri) {
// switch_2DA8
        case default:
        {
// switch_2DA8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_3250
            var_520 = 20088;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0900(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_3250
            pri = 1;
            OP_JUMP lab_3258
// lab_3250
            pri = 0;
// lab_3258
            OP_JZER lab_32A8
            var_8 = 64;
            var_16 = 20184;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_3500
// lab_32A8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3310
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3310
            pri = 1;
            OP_JUMP lab_3318
// lab_3310
            pri = 0;
// lab_3318
            OP_JZER lab_34A0
            var_16 = 20360;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0900(var_24, var_16)
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
            var_176 = 20464;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20480;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 344;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_3500
// lab_34A0
            var_8 = 64;
            alt = 344;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3500
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_3570
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_3570
            var_8 = 0;
            pri = fun_0E50()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2DA8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1:
        {
// switch_2DA8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2:
        {
// switch_2DA8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x3:
        {
// switch_2DA8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x4:
        {
// switch_2DA8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x5:
        {
// switch_2DA8_case_0x5
            var_8 = 2;
            var_16 = 10344;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B38(var_40)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x6:
        {
// switch_2DA8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x7:
        {
// switch_2DA8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x8:
        {
// switch_2DA8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x9:
        {
// switch_2DA8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0xa:
        {
// switch_2DA8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0xb:
        {
// switch_2DA8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0xc:
        {
// switch_2DA8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0xd:
        {
// switch_2DA8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 10992;
            var_72 = 10816;
            var_80 = 10632;
            var_88 = 10440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0xe:
        {
// switch_2DA8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11648;
            var_72 = 11440;
            var_80 = 11224;
            var_88 = 11000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0xf:
        {
// switch_2DA8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12040;
            var_72 = 11920;
            var_80 = 11792;
            var_88 = 11656;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x10:
        {
// switch_2DA8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12384;
            var_72 = 12280;
            var_80 = 12168;
            var_88 = 12048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x11:
        {
// switch_2DA8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12728;
            var_72 = 12624;
            var_80 = 12512;
            var_88 = 12392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x12:
        {
// switch_2DA8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x13:
        {
// switch_2DA8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x14:
        {
// switch_2DA8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13288;
            var_72 = 13112;
            var_80 = 12928;
            var_88 = 12736;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x15:
        {
// switch_2DA8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x16:
        {
// switch_2DA8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x17:
        {
// switch_2DA8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x18:
        {
// switch_2DA8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x19:
        {
// switch_2DA8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1a:
        {
// switch_2DA8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1b:
        {
// switch_2DA8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1c:
        {
// switch_2DA8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13680;
            var_72 = 13560;
            var_80 = 13432;
            var_88 = 13296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1d:
        {
// switch_2DA8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1e:
        {
// switch_2DA8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14144;
            var_72 = 14000;
            var_80 = 13848;
            var_88 = 13688;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x1f:
        {
// switch_2DA8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x20:
        {
// switch_2DA8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x21:
        {
// switch_2DA8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x22:
        {
// switch_2DA8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x23:
        {
// switch_2DA8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x24:
        {
// switch_2DA8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14512;
            var_72 = 14400;
            var_80 = 14280;
            var_88 = 14152;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x25:
        {
// switch_2DA8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14880;
            var_72 = 14768;
            var_80 = 14648;
            var_88 = 14520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x26:
        {
// switch_2DA8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x27:
        {
// switch_2DA8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x28:
        {
// switch_2DA8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x29:
        {
// switch_2DA8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15320;
            var_72 = 15184;
            var_80 = 15040;
            var_88 = 14888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2a:
        {
// switch_2DA8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15712;
            var_72 = 15592;
            var_80 = 15464;
            var_88 = 15328;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2b:
        {
// switch_2DA8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16128;
            var_72 = 16000;
            var_80 = 15864;
            var_88 = 15720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2c:
        {
// switch_2DA8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16568;
            var_72 = 16432;
            var_80 = 16288;
            var_88 = 16136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2d:
        {
// switch_2DA8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2e:
        {
// switch_2DA8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16888;
            var_72 = 16792;
            var_80 = 16688;
            var_88 = 16576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x2f:
        {
// switch_2DA8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17280;
            var_72 = 17160;
            var_80 = 17032;
            var_88 = 16896;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x30:
        {
// switch_2DA8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17672;
            var_72 = 17552;
            var_80 = 17424;
            var_88 = 17288;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x31:
        {
// switch_2DA8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x32:
        {
// switch_2DA8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x33:
        {
// switch_2DA8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18064;
            var_72 = 17944;
            var_80 = 17816;
            var_88 = 17680;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x34:
        {
// switch_2DA8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18432;
            var_72 = 18320;
            var_80 = 18200;
            var_88 = 18072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x35:
        {
// switch_2DA8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18920;
            var_72 = 18768;
            var_80 = 18608;
            var_88 = 18440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x36:
        {
// switch_2DA8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19288;
            var_72 = 19176;
            var_80 = 19056;
            var_88 = 18928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x37:
        {
// switch_2DA8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x38:
        {
// switch_2DA8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19656;
            var_72 = 19544;
            var_80 = 19424;
            var_88 = 19296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0B70(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x39:
        {
// switch_2DA8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x3a:
        {
// switch_2DA8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x3b:
        {
// switch_2DA8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x3c:
        {
// switch_2DA8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19664;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x3d:
        {
// switch_2DA8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 19840;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
        case 0x3e:
        {
// switch_2DA8_case_0x3e
            var_8 = 4;
            var_16 = 19984;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            OP_JUMP switch_2DA8_case_default
        }
    }
}
// fun_35A0
fun_35A0() {
    pri = arg_4;
    OP_JNZ lab_35D8
    var_8 = 0;
    pri = fun_0E10()
// lab_35D8
    pri = arg_1;
    switch (pri) {
// switch_49B0
        case default:
        {
// switch_49B0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21056;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0ED0(var_264)
            OP_JZER lab_4F78
            pri = arg_3;
            switch (pri) {
// switch_4F20
                case default:
                {
// switch_4F20_case_default
                    OP_JUMP lab_5230
// lab_5230
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_52A0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_52A0
                    var_8 = 0;
                    pri = fun_0E50()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_4F20_case_0x1
                    var_8 = 32;
                    var_16 = 21208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4F20_case_default
                }
                case 0x2:
                {
// switch_4F20_case_0x2
                    var_8 = 32;
                    var_16 = 21312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4F20_case_default
                }
                case 0x3:
                {
// switch_4F20_case_0x3
                    var_8 = 32;
                    var_16 = 21112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_4F20_case_default
                }
            }
// lab_4F78
            pri = arg_1;
            OP_JZER lab_4FC8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_4FC8
            pri = 0;
            OP_JUMP lab_4FD0
// lab_4FC8
            pri = 1;
// lab_4FD0
            OP_JZER lab_5038
            var_8 = 21408;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0900(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5038
            pri = 1;
            OP_JUMP lab_5040
// lab_5038
            pri = 0;
// lab_5040
            OP_JZER lab_5090
            var_8 = 32;
            var_16 = 21504;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5230
// lab_5090
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_50F8
            var_8 = 32;
            var_16 = 21664;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5230
// lab_50F8
            var_16 = 21784;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0900(var_24, var_16)
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
            var_176 = 21888;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 21904;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_49B0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1:
        {
// switch_49B0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2:
        {
// switch_49B0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x3:
        {
// switch_49B0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x4:
        {
// switch_49B0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x5:
        {
// switch_49B0_case_0x5
            var_8 = 1;
            var_16 = 20536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0B38(var_40)
            OP_JUMP switch_49B0_case_default
        }
        case 0x6:
        {
// switch_49B0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x7:
        {
// switch_49B0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x8:
        {
// switch_49B0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x9:
        {
// switch_49B0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0xa:
        {
// switch_49B0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0xb:
        {
// switch_49B0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0xc:
        {
// switch_49B0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0xd:
        {
// switch_49B0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0xe:
        {
// switch_49B0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0xf:
        {
// switch_49B0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x10:
        {
// switch_49B0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x11:
        {
// switch_49B0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x12:
        {
// switch_49B0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x13:
        {
// switch_49B0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x14:
        {
// switch_49B0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x15:
        {
// switch_49B0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x16:
        {
// switch_49B0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x17:
        {
// switch_49B0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x18:
        {
// switch_49B0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x19:
        {
// switch_49B0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1a:
        {
// switch_49B0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1b:
        {
// switch_49B0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1c:
        {
// switch_49B0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1d:
        {
// switch_49B0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1e:
        {
// switch_49B0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x1f:
        {
// switch_49B0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x20:
        {
// switch_49B0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x21:
        {
// switch_49B0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x22:
        {
// switch_49B0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x23:
        {
// switch_49B0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x24:
        {
// switch_49B0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x25:
        {
// switch_49B0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x26:
        {
// switch_49B0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x27:
        {
// switch_49B0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x28:
        {
// switch_49B0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x29:
        {
// switch_49B0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2a:
        {
// switch_49B0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2b:
        {
// switch_49B0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2c:
        {
// switch_49B0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2d:
        {
// switch_49B0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2e:
        {
// switch_49B0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x2f:
        {
// switch_49B0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x30:
        {
// switch_49B0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x31:
        {
// switch_49B0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x32:
        {
// switch_49B0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x33:
        {
// switch_49B0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x34:
        {
// switch_49B0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x35:
        {
// switch_49B0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x36:
        {
// switch_49B0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x37:
        {
// switch_49B0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x38:
        {
// switch_49B0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x39:
        {
// switch_49B0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x3a:
        {
// switch_49B0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x3b:
        {
// switch_49B0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x3c:
        {
// switch_49B0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20632;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x3d:
        {
// switch_49B0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20808;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
        case 0x3e:
        {
// switch_49B0_case_0x3e
            var_8 = 3;
            var_16 = 20952;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            OP_JUMP switch_49B0_case_default
        }
    }
}
// fun_52D0
fun_52D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_54E0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 21952;
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
    var_424 = 22008;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22024;
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
    OP_JZER lab_54C8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_54C8
    pri = 0;
    return pri;
}
// fun_54E0
fun_54E0() {
    var_8 = arg_1;
    var_16 = 22072;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_08C0(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5528
fun_5528() {
    pri = 22176;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_55B0
// lab_55B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_5730
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_5720
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_5670
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_5670
    pri = 0;
    OP_JUMP lab_5678
// lab_5730
    pri = 0;
    return pri;
// lab_5720
    OP_JUMP lab_55A8
// lab_55A8
    OP_INC_P_S -936
// lab_5670
    pri = 1;
// lab_5678
    OP_JZER lab_56F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_56E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_56F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_56E8
}
// fun_5750
fun_5750() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_57E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23096;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1178()
// lab_57E8
    pri = arg_4;
    OP_JZER lab_5820
    var_8 = 1;
    var_16 = 8;
    pri = fun_11A0(var_8)
// lab_5820
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5878
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5878
    pri = 0;
    OP_JUMP lab_5880
// lab_5878
    pri = 1;
// lab_5880
    OP_JZER lab_5948
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5948
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_5920
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_10B8(var_32, var_24)
    OP_JUMP lab_5948
// lab_5948
    pri = arg_2;
    OP_JZER lab_5A20
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_59F0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E90(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0600(var_40)
    OP_JUMP lab_5A20
// lab_5A20
    pri = arg_3;
    OP_JZER lab_5A58
    var_8 = 1;
    var_16 = 8;
    pri = fun_1140(var_8)
// lab_5A58
    pri = 0;
    return pri;
// lab_59F0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E90(var_16, var_8)
// lab_5920
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_10B8(var_16, var_8)
}
// fun_5A68
fun_5A68() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_5528(var_24)
    pri = 0;
    return pri;
}
// fun_5AD0
fun_5AD0() {
    pri = g_mode;
    switch (pri) {
// switch_5B90
        case default:
        {
// switch_5B90_case_default
            pri = CommandNOP()
            OP_JUMP lab_5BD8
// lab_5BD8
            pri = 0;
            return pri;
        }
        case 0x8cf42a22023cf7b2:
        {
// switch_5B90_case_0x8cf42a22023cf7b2
            var_8 = 0;
            pri = fun_7770()
            OP_JUMP lab_5BD8
        }
        case 0x0:
        {
// switch_5B90_case_0x0
            var_8 = 0;
            pri = fun_5BE8()
            OP_JUMP lab_5BD8
        }
        case 0x6de1c01e76d68aa6:
        {
// switch_5B90_case_0x6de1c01e76d68aa6
            var_8 = 0;
            pri = fun_7860()
            OP_JUMP lab_5BD8
        }
    }
}
// fun_5BE8
fun_5BE8() {
    pri = 0;
    return pri;
}
// fun_5C00
fun_5C00() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5750(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_5C58
fun_5C58() {
    pri = 0;
    return pri;
}
// fun_5C70
fun_5C70() {
    pri = 0;
    return pri;
}
// fun_5C88
fun_5C88() {
    pri = IsMovieSkipEnable()
    OP_JZER lab_5CC8
    OP_JUMP lab_75B0
// lab_5CC8
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4582834833314545664, 4671554756413279437, 4674330665932134810, 8802641224559852288
    var_24 = 48;
    pri = fun_04F0(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    var_48 = 1;
    var_56 = 509402632798869653;
    var_64 = 16;
    pri = fun_05C0(var_56, var_48)
    var_72 = 1;
    var_80 = 8301569152955858816;
    var_88 = 16;
    pri = fun_05C0(var_80, var_72)
    var_96 = 1;
    var_104 = -9030117701849786528;
    var_112 = 16;
    pri = fun_05C0(var_104, var_96)
    var_120 = 1;
    var_128 = 1341674397637612368;
    var_136 = 16;
    pri = fun_05C0(var_128, var_120)
    var_144 = 1;
    var_152 = -9030105607221876207;
    var_160 = 16;
    pri = fun_05C0(var_152, var_144)
    var_168 = 1;
    var_176 = 469215005308970487;
    var_184 = 16;
    pri = fun_05C0(var_176, var_168)
    var_192 = 1;
    var_200 = 7241286342063578680;
    var_208 = 16;
    pri = fun_05C0(var_200, var_192)
    var_216 = 1;
    var_224 = 5057866535303297770;
    var_232 = 16;
    pri = fun_05C0(var_224, var_216)
    var_240 = 1;
    var_248 = -3276545986338818688;
    var_256 = 16;
    pri = fun_05C0(var_248, var_240)
    var_264 = 1;
    var_272 = 9135368449772758881;
    var_280 = 16;
    pri = fun_05C0(var_272, var_264)
    var_288 = 1;
    var_296 = -8270053740350855466;
    var_304 = 16;
    pri = fun_05C0(var_296, var_288)
    var_312 = 1;
    var_320 = 8;
    pri = fun_0060(var_312)
    var_328 = 0;
    var_336 = 0;
    var_344 = -3276545986338818688;
    var_352 = 24;
    pri = fun_52D0(var_344, var_336, var_328)
    var_360 = -3276545986338818688;
    var_368 = 8;
    pri = fun_0938(var_360)
    var_376 = 1;
    var_384 = 1;
    var_392 = -1;
    var_400 = -1;
    var_408 = 0;
    var_416 = 54;
    var_424 = -3276545986338818688;
    var_432 = 56;
    pri = fun_1268(var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_440 = 1;
    var_448 = 1;
    var_456 = -1;
    var_464 = -1;
    var_472 = 0;
    var_480 = 37;
    var_488 = 509402632798869653;
    var_496 = 56;
    pri = fun_1268(var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_504 = 1;
    var_512 = 1;
    var_520 = -1;
    var_528 = -1;
    var_536 = 0;
    var_544 = 37;
    var_552 = 8934093125911233738;
    var_560 = 56;
    pri = fun_1268(var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_568 = 1;
    var_576 = 0;
    var_584 = 4641240890982006784;
    var_592 = 0;
    var_600 = 0;
    OP_PUSH4_C 4671444805250501837, 4674330665932134810, 4607182418800017408, 8802641224559852288
    var_608 = 72;
    pri = fun_0720(var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_616 = 0;
    var_624 = 4631952216750555136;
    var_632 = 0;
    OP_PUSH5_C 4671334012961328988, 4648488079983934177, 4674330847351553393, 4671630422054723912, 4648690038279724073
    var_640 = 4674330847351553393;
    var_648 = 1;
    pri = EvCameraMove(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_656 = 0;
    pri = fun_11D8()
    var_664 = 23144;
    var_672 = 8;
    var_680 = 16;
    pri = fun_0280(var_672, var_664)
    var_688 = 0;
    pri = fun_0350()
    var_696 = 0;
    var_704 = 4631431488043640422;
    var_712 = 6;
    OP_PUSH5_C 4670708863635124388, 4655709540413771612, 4674330905075913851, 4670956176785560044, 4654953472238047724
    var_720 = 4674331234929402184;
    var_728 = 180;
    pri = EvCameraMove(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656)
    var_736 = 60;
    var_744 = 8;
    pri = fun_0060(var_736)
    var_752 = 0;
    pri = fun_0408()
    var_760 = 0;
    pri = fun_11D8()
    var_768 = 14000;
    pri = float(var_768)
    var_776 = pri;
    var_784 = 500;
    pri = float(var_784)
    var_792 = pri;
    var_800 = 31300;
    pri = float(var_800)
    var_808 = pri;
    var_816 = 24;
    pri = fun_0638(var_808, var_800, var_792)
    var_824 = 15;
    var_832 = 8;
    pri = fun_0060(var_824)
    var_840 = 1;
    var_848 = 0;
    var_856 = 23192;
    var_864 = 1;
    var_872 = 32;
    pri = fun_02E0(var_864, var_856, var_848, var_840)
    var_880 = 0;
    pri = fun_0350()
    var_888 = 0;
    var_896 = 8802641224559852288;
    var_904 = 16;
    pri = fun_0588(var_896, var_888)
    var_912 = 1;
    var_920 = 1;
    var_928 = -4582834833314545664;
    var_936 = 14500;
    pri = float(var_936)
    var_944 = pri;
    OP_PUSH2_C 4674330665932134810, 8802641224559852288
    var_952 = 48;
    pri = fun_04F0(var_944, var_936, var_928, var_920, var_912, var_904)
    var_960 = 0;
    var_968 = 4630713726853028250;
    var_976 = 0;
    OP_PUSH5_C 4670473180568931533, 4650524111635784663, 4674167627599189115, 4670559360290316616, 4651094978072925962
    var_984 = 4674065711117631488;
    var_992 = 1;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 0;
    pri = fun_11D8()
    var_1008 = 1;
    var_1016 = 3;
    var_1024 = 0;
    var_1032 = 37;
    var_1040 = 8934093125911233738;
    var_1048 = 40;
    pri = fun_35A0(var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1056 = 1;
    var_1064 = 3;
    var_1072 = 0;
    var_1080 = 54;
    var_1088 = -3276545986338818688;
    var_1096 = 40;
    pri = fun_35A0(var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1104 = 0;
    var_1112 = 5057866535303297770;
    var_1120 = 16;
    pri = fun_05C0(var_1112, var_1104)
    var_1128 = 0;
    var_1136 = -3276545986338818688;
    var_1144 = 16;
    pri = fun_05C0(var_1136, var_1128)
    var_1152 = 0;
    var_1160 = 1341674397637612368;
    var_1168 = 16;
    pri = fun_05C0(var_1160, var_1152)
    var_1176 = 0;
    var_1184 = -8270053740350855466;
    var_1192 = 16;
    pri = fun_05C0(var_1184, var_1176)
    var_1200 = 0;
    var_1208 = 4631952216750555136;
    var_1216 = 3;
    OP_PUSH5_C 4667722815453968466, 4649819104780054692, 4674400067106080031, 4668002135387888681, 4649437354342890865
    var_1224 = 4674468871794967183;
    var_1232 = 240;
    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 23240;
    var_1248 = 15;
    var_1256 = 16;
    pri = fun_0280(var_1248, var_1240)
    var_1264 = 60;
    var_1272 = 8;
    pri = fun_0060(var_1264)
    var_1280 = 1;
    var_1288 = 3;
    var_1296 = 0;
    var_1304 = 37;
    var_1312 = 509402632798869653;
    var_1320 = 40;
    pri = fun_35A0(var_1312, var_1304, var_1296, var_1288, var_1280)
    var_1328 = 0;
    var_1336 = 509402632798869653;
    var_1344 = 16;
    pri = fun_05C0(var_1336, var_1328)
    var_1352 = 0;
    var_1360 = 8301569152955858816;
    var_1368 = 16;
    pri = fun_05C0(var_1360, var_1352)
    var_1376 = 1;
    var_1384 = 1341675497149240579;
    var_1392 = 16;
    pri = fun_05C0(var_1384, var_1376)
    var_1400 = 1;
    var_1408 = 469211706774085854;
    var_1416 = 16;
    pri = fun_05C0(var_1408, var_1400)
    var_1424 = 60;
    var_1432 = 8;
    pri = fun_0060(var_1424)
    var_1440 = 1;
    var_1448 = 8661208289236800955;
    var_1456 = 16;
    pri = fun_05C0(var_1448, var_1440)
    var_1464 = 1;
    var_1472 = 8661208289236800955;
    var_1480 = 16;
    pri = fun_05C0(var_1472, var_1464)
    var_1488 = 1;
    var_1496 = 8934094225422861949;
    var_1504 = 16;
    pri = fun_05C0(var_1496, var_1488)
    var_1512 = 1;
    var_1520 = 7241289640598463313;
    var_1528 = 16;
    pri = fun_05C0(var_1520, var_1512)
    var_1536 = 0;
    var_1544 = -9030117701849786528;
    var_1552 = 16;
    pri = fun_05C0(var_1544, var_1536)
    var_1560 = 0;
    var_1568 = -9030105607221876207;
    var_1576 = 16;
    pri = fun_05C0(var_1568, var_1560)
    var_1584 = 0;
    var_1592 = -9030117701849786528;
    var_1600 = 16;
    pri = fun_05C0(var_1592, var_1584)
    var_1608 = 120;
    var_1616 = 8;
    pri = fun_0060(var_1608)
    var_1624 = 0;
    var_1632 = 469215005308970487;
    var_1640 = 16;
    pri = fun_05C0(var_1632, var_1624)
    var_1648 = 0;
    var_1656 = 7241286342063578680;
    var_1664 = 16;
    pri = fun_05C0(var_1656, var_1648)
    var_1672 = 0;
    var_1680 = 9135368449772758881;
    var_1688 = 16;
    pri = fun_05C0(var_1680, var_1672)
    var_1696 = 1;
    var_1704 = 0;
    var_1712 = 23288;
    var_1720 = 1;
    var_1728 = 32;
    pri = fun_02E0(var_1720, var_1712, var_1704, var_1696)
    var_1736 = 0;
    pri = fun_0350()
    var_1744 = 0;
    var_1752 = 1341675497149240579;
    var_1760 = 16;
    pri = fun_05C0(var_1752, var_1744)
    var_1768 = 0;
    var_1776 = 469211706774085854;
    var_1784 = 16;
    pri = fun_05C0(var_1776, var_1768)
    var_1792 = 0;
    var_1800 = 8661208289236800955;
    var_1808 = 16;
    pri = fun_05C0(var_1800, var_1792)
    var_1816 = 0;
    var_1824 = 8661208289236800955;
    var_1832 = 16;
    pri = fun_05C0(var_1824, var_1816)
    var_1840 = 0;
    var_1848 = 8934094225422861949;
    var_1856 = 16;
    pri = fun_05C0(var_1848, var_1840)
    var_1864 = 0;
    var_1872 = 7241289640598463313;
    var_1880 = 16;
    pri = fun_05C0(var_1872, var_1864)
    var_1888 = 1;
    var_1896 = 1;
    var_1904 = -4582834833314545664;
    var_1912 = 16870;
    pri = float(var_1912)
    var_1920 = pri;
    OP_PUSH2_C 4672670128496286106, 8802641224559852288
    var_1928 = 48;
    pri = fun_04F0(var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1936 = 16870;
    pri = float(var_1936)
    var_1944 = pri;
    var_1952 = 500;
    pri = float(var_1952)
    var_1960 = pri;
    var_1968 = 4672670128496286106;
    var_1976 = 24;
    pri = fun_0638(var_1968, var_1960, var_1952)
    var_1984 = 0;
    var_1992 = 4633401812880615014;
    var_2000 = 0;
    OP_PUSH5_C 4670858779296792576, 4652256150312787640, 4672841182268998287, 4670987606325440020, 4652856219778762670
    var_2008 = 4672842908502253896;
    var_2016 = 1;
    pri = EvCameraMove(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2024 = 0;
    pri = fun_11D8()
    var_2032 = 10;
    var_2040 = 8;
    pri = fun_0060(var_2032)
    var_2048 = 1;
    var_2056 = 8661212687283313799;
    var_2064 = 16;
    pri = fun_05C0(var_2056, var_2048)
    var_2072 = 1;
    var_2080 = 1341679895195753423;
    var_2088 = 16;
    pri = fun_05C0(var_2080, var_2072)
    var_2096 = 1;
    var_2104 = 469217204332226909;
    var_2112 = 16;
    pri = fun_05C0(var_2104, var_2096)
    var_2120 = 1;
    var_2128 = 5292892026299798527;
    var_2136 = 16;
    pri = fun_05C0(var_2128, var_2120)
    var_2144 = 1;
    var_2152 = -6389910381153712602;
    var_2160 = 16;
    pri = fun_05C0(var_2152, var_2144)
    var_2168 = 1;
    var_2176 = 6933932569682378403;
    var_2184 = 16;
    pri = fun_05C0(var_2176, var_2168)
    var_2192 = 1;
    var_2200 = 6876895208539993562;
    var_2208 = 16;
    pri = fun_05C0(var_2200, var_2192)
    var_2216 = 5;
    var_2224 = 8;
    pri = fun_0060(var_2216)
    var_2232 = 0;
    var_2240 = 4633401812880615014;
    var_2248 = 3;
    OP_PUSH5_C 4670861060783420211, 4652256150312787640, 4672671120805530173, 4670989887812067656, 4652855604052251116
    var_2256 = 4672672844290006712;
    var_2264 = 180;
    pri = EvCameraMove(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192)
    var_2272 = 23336;
    var_2280 = 15;
    var_2288 = 16;
    pri = fun_0280(var_2280, var_2272)
    var_2296 = 150;
    var_2304 = 8;
    pri = fun_0060(var_2296)
    var_2312 = 1;
    var_2320 = 0;
    var_2328 = 23384;
    var_2336 = 1;
    var_2344 = 32;
    pri = fun_02E0(var_2336, var_2328, var_2320, var_2312)
    var_2352 = 0;
    pri = fun_0350()
    var_2360 = 0;
    var_2368 = 8661212687283313799;
    var_2376 = 16;
    pri = fun_05C0(var_2368, var_2360)
    var_2384 = 0;
    var_2392 = 1341679895195753423;
    var_2400 = 16;
    pri = fun_05C0(var_2392, var_2384)
    var_2408 = 0;
    var_2416 = 469217204332226909;
    var_2424 = 16;
    pri = fun_05C0(var_2416, var_2408)
    var_2432 = 0;
    var_2440 = 5292892026299798527;
    var_2448 = 16;
    pri = fun_05C0(var_2440, var_2432)
    var_2456 = 0;
    var_2464 = -6389910381153712602;
    var_2472 = 16;
    pri = fun_05C0(var_2464, var_2456)
    var_2480 = 0;
    var_2488 = 6933932569682378403;
    var_2496 = 16;
    pri = fun_05C0(var_2488, var_2480)
    var_2504 = 0;
    var_2512 = 6876895208539993562;
    var_2520 = 16;
    pri = fun_05C0(var_2512, var_2504)
    var_2528 = 1;
    var_2536 = 1;
    OP_PUSH4_C -4582834833314545664, 4665103811741954867, 4674330665932134810, 8802641224559852288
    var_2544 = 48;
    pri = fun_04F0(var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2552 = 7623;
    pri = float(var_2552)
    var_2560 = pri;
    var_2568 = 500;
    pri = float(var_2568)
    var_2576 = pri;
    var_2584 = 4674330665932134810;
    var_2592 = 24;
    pri = fun_0638(var_2584, var_2576, var_2568)
    var_2600 = 0;
    var_2608 = 4632289986722607923;
    var_2616 = 0;
    OP_PUSH5_C 4666604810040613274, 4659631586350978826, 4673915688253579592, 4666858176002559836, 4659480843306810737
    var_2624 = 4673875171250096046;
    var_2632 = 1;
    pri = EvCameraMove(var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2640 = 0;
    pri = fun_11D8()
    var_2648 = 0;
    var_2656 = 4633922541587529728;
    var_2664 = 2;
    OP_PUSH5_C 4666506678627834266, 4658145398473946563, 4674317290373182915, 4666761215569664410, 4657801141383289897
    var_2672 = 4674319621337833800;
    var_2680 = 120;
    pri = EvCameraMove(var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608)
    var_2688 = 23432;
    var_2696 = 15;
    var_2704 = 16;
    pri = fun_0280(var_2696, var_2688)
    var_2712 = 60;
    var_2720 = 8;
    pri = fun_0060(var_2712)
    var_2728 = 1;
    var_2736 = 1;
    var_2744 = -1;
    var_2752 = -1;
    var_2760 = 0;
    var_2768 = 7;
    var_2776 = 1708867724278780627;
    var_2784 = 56;
    pri = fun_1268(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2792 = 90;
    var_2800 = 8;
    pri = fun_0060(var_2792)
    var_2808 = 1;
    var_2816 = 0;
    var_2824 = 23096;
    var_2832 = 8;
    var_2840 = 32;
    pri = fun_02E0(var_2832, var_2824, var_2816, var_2808)
    var_2848 = 0;
    pri = fun_0350()
    var_2856 = 1;
    var_2864 = 3;
    var_2872 = 0;
    var_2880 = 7;
    var_2888 = 1708867724278780627;
    var_2896 = 40;
    pri = fun_35A0(var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2904 = 1;
    var_2912 = 8802641224559852288;
    var_2920 = 16;
    pri = fun_0588(var_2912, var_2904)
    var_2928 = 0;
    pri = fun_06B8()
    var_2936 = 1;
    var_2944 = 1;
    OP_PUSH4_C -4582834833314545664, 4671444805250501837, 4674330665932134810, 8802641224559852288
    var_2952 = 48;
    pri = fun_04F0(var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2960 = 8802641224559852288;
    var_2968 = 8;
    pri = fun_0798(var_2960)
    var_2976 = 3;
    var_2984 = 1;
    pri = EvCameraEnd(var_2984, var_2976)
    var_2992 = 30;
    var_3000 = 8;
    pri = fun_0060(var_2992)
// lab_75B0
    OP_LCTRL 5
    OP_SCTRL 4
    pri = IsMovieSkipEnable()
    OP_JZER lab_7650
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0548(var_32, var_24, var_16)
// lab_7650
    pri = 0;
    return pri;
}
// fun_7660
fun_7660() {
    pri = 0;
    return pri;
}
// fun_7678
fun_7678() {
    var_8 = 400;
    var_16 = 8;
    pri = fun_5A68(var_8)
    var_24 = -7643235762281396180;
    pri = VanishFlagSet(var_24)
    var_32 = 3216989005259082369;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_7700
fun_7700() {
    pri = FieldCameraClearDelay()
    var_8 = 23144;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7770
fun_7770() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_5C00()
    var_16 = 0;
    pri = fun_5C58()
    var_24 = 0;
    pri = fun_5C70()
    var_32 = 0;
    pri = fun_5C88()
    var_40 = 0;
    pri = fun_7660()
    var_48 = 0;
    pri = fun_7678()
    var_56 = 0;
    pri = fun_7700()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7860
fun_7860() {
    var_8 = 0;
    pri = fun_5C58()
    var_16 = 0;
    pri = fun_7678()
    pri = 0;
    return pri;
}
