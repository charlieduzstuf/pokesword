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
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_04A0
fun_04A0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_04D8
fun_04D8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0510
fun_0510() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0550
fun_0550() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0588
fun_0588() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_05D0
    pri = 0;
    return pri;
// lab_05D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0610
// lab_0610
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D10(var_8)
    OP_JNZ lab_0698
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0688
    pri = 0;
    return pri;
// lab_0698
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_06E0
    pri = 0;
    return pri;
// lab_06E0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0740
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0788(var_8)
    pri = 0;
    return pri;
// lab_0740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0610
    pri = 0;
    return pri;
// lab_0688
    OP_JUMP lab_06E0
}
// fun_0788
fun_0788() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0810
    pri = 0;
    return pri;
// lab_0810
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0D10(var_8)
    OP_JZER lab_0940
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0868
    OP_ZERO_P_S 64
// lab_0940
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0978
    OP_CONST_S 64, 1
// lab_0978
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_09B0
    OP_CONST_S 72, 1
// lab_09B0
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
// lab_0868
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0890
    OP_ZERO_P_S 72
// lab_0890
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
    OP_JUMP lab_0A50
// lab_0A50
    pri = 0;
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AE0
fun_0AE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B20
fun_0B20() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0B60(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_0BD8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BA0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C18(var_24)
    pri = 0;
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0D40
fun_0D40() {
    OP_JUMP lab_0D58
// lab_0D58
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0DE8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0DD8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0588(var_8)
    pri = 0;
    return pri;
// lab_0DE8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E78
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0E68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0588(var_8)
    pri = 0;
    return pri;
// lab_0E78
    pri = 0;
    return pri;
// lab_0E68
    OP_JUMP lab_0E88
// lab_0E88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D58
    pri = 0;
    return pri;
// lab_0DD8
    OP_JUMP lab_0E88
}
// fun_0EC8
fun_0EC8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0588(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D40(var_40)
    pri = 0;
    return pri;
}
// fun_0F50
fun_0F50() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0F88
fun_0F88() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0FB0
fun_0FB0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    OP_JUMP lab_1000
// lab_1000
    pri = EvCameraMoveWait_()
    OP_JZER lab_1038
    pri = 0;
    return pri;
// lab_1038
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1000
    pri = 0;
    return pri;
}
// fun_1078
fun_1078() {
    pri = arg_6;
    OP_JNZ lab_10B0
    var_8 = 0;
    pri = fun_0A60()
// lab_10B0
    pri = arg_1;
    switch (pri) {
// switch_2618
        case default:
        {
// switch_2618_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_2968
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_2968
            pri = 1;
            OP_JUMP lab_2970
// lab_2968
            pri = 0;
// lab_2970
            OP_JZER lab_2AC8
            var_16 = 8064;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0550(var_24, var_16)
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
            var_64 = 8168;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_2B28
// lab_2AC8
            var_8 = 64;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_2B28
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_2B88
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_2BE8
// lab_2B88
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_2BE8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_2BE8
            pri = arg_2;
            OP_JZER lab_2C28
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_2C28
            var_8 = 0;
            pri = fun_0AA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_2618_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x1:
        {
// switch_2618_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x2:
        {
// switch_2618_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x3:
        {
// switch_2618_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x4:
        {
// switch_2618_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x5:
        {
// switch_2618_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5352;
            var_72 = 5344;
            var_80 = 5336;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0x6:
        {
// switch_2618_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5376;
            var_72 = 5368;
            var_80 = 5360;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0x7:
        {
// switch_2618_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5400;
            var_72 = 5392;
            var_80 = 5384;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0x8:
        {
// switch_2618_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x9:
        {
// switch_2618_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5424;
            var_72 = 5416;
            var_80 = 5408;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0xa:
        {
// switch_2618_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5448;
            var_72 = 5440;
            var_80 = 5432;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0xb:
        {
// switch_2618_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5472;
            var_72 = 5464;
            var_80 = 5456;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0xc:
        {
// switch_2618_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5496;
            var_72 = 5488;
            var_80 = 5480;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0xd:
        {
// switch_2618_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5520;
            var_72 = 5512;
            var_80 = 5504;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0xe:
        {
// switch_2618_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5544;
            var_72 = 5536;
            var_80 = 5528;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0xf:
        {
// switch_2618_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x10:
        {
// switch_2618_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x11:
        {
// switch_2618_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5568;
            var_72 = 5560;
            var_80 = 5552;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0x12:
        {
// switch_2618_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5592;
            var_72 = 5584;
            var_80 = 5576;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0x13:
        {
// switch_2618_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x14:
        {
// switch_2618_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x15:
        {
// switch_2618_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x16:
        {
// switch_2618_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x17:
        {
// switch_2618_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x18:
        {
// switch_2618_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x19:
        {
// switch_2618_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5616;
            var_72 = 5608;
            var_80 = 5600;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_2618_case_default
        }
        case 0x1a:
        {
// switch_2618_case_0x1a
            var_8 = 1;
            var_16 = 5624;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            var_40 = 5760;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_04D8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 5840;
            var_88 = 5832;
            var_96 = 5824;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_07C0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2618_case_default
        }
        case 0x1b:
        {
// switch_2618_case_0x1b
            var_8 = 3;
            var_16 = 5848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            var_40 = 5984;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_04D8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6064;
            var_88 = 6056;
            var_96 = 6048;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_07C0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2618_case_default
        }
        case 0x1c:
        {
// switch_2618_case_0x1c
            var_8 = 2;
            var_16 = 6072;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            var_40 = 6208;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_04D8(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6288;
            var_88 = 6280;
            var_96 = 6272;
            alt = 392;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_07C0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_2618_case_default
        }
        case 0x1d:
        {
// switch_2618_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6296;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x1e:
        {
// switch_2618_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6432;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x1f:
        {
// switch_2618_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6568;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x20:
        {
// switch_2618_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6704;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x21:
        {
// switch_2618_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x22:
        {
// switch_2618_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6944;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x23:
        {
// switch_2618_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x24:
        {
// switch_2618_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7216;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x25:
        {
// switch_2618_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7352;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x26:
        {
// switch_2618_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7488;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x27:
        {
// switch_2618_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7632;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x28:
        {
// switch_2618_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7776;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
        case 0x29:
        {
// switch_2618_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_2618_case_default
        }
    }
}
// fun_2C58
fun_2C58() {
    pri = arg_5;
    OP_JNZ lab_2C90
    var_8 = 0;
    pri = fun_0A60()
// lab_2C90
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2CE0
    OP_CONST_S -8, -1
// lab_2CE0
    pri = arg_1;
    switch (pri) {
// switch_4798
        case default:
        {
// switch_4798_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4C40
            var_520 = 27928;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0550(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4C40
            pri = 1;
            OP_JUMP lab_4C48
// lab_4C40
            pri = 0;
// lab_4C48
            OP_JZER lab_4C98
            var_8 = 64;
            var_16 = 28024;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4EF0
// lab_4C98
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4D00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4D00
            pri = 1;
            OP_JUMP lab_4D08
// lab_4D00
            pri = 0;
// lab_4D08
            OP_JZER lab_4E90
            var_16 = 28200;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0550(var_24, var_16)
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
            var_176 = 28304;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28320;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8184;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4EF0
// lab_4E90
            var_8 = 64;
            alt = 8184;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4EF0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4F60
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4F60
            var_8 = 0;
            pri = fun_0AA0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4798_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x1:
        {
// switch_4798_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x2:
        {
// switch_4798_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x3:
        {
// switch_4798_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x4:
        {
// switch_4798_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x5:
        {
// switch_4798_case_0x5
            var_8 = 2;
            var_16 = 18184;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0788(var_40)
            OP_JUMP switch_4798_case_default
        }
        case 0x6:
        {
// switch_4798_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x7:
        {
// switch_4798_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x8:
        {
// switch_4798_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x9:
        {
// switch_4798_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0xa:
        {
// switch_4798_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0xb:
        {
// switch_4798_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0xc:
        {
// switch_4798_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0xd:
        {
// switch_4798_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18832;
            var_72 = 18656;
            var_80 = 18472;
            var_88 = 18280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0xe:
        {
// switch_4798_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19488;
            var_72 = 19280;
            var_80 = 19064;
            var_88 = 18840;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0xf:
        {
// switch_4798_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19880;
            var_72 = 19760;
            var_80 = 19632;
            var_88 = 19496;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x10:
        {
// switch_4798_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20224;
            var_72 = 20120;
            var_80 = 20008;
            var_88 = 19888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x11:
        {
// switch_4798_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20568;
            var_72 = 20464;
            var_80 = 20352;
            var_88 = 20232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x12:
        {
// switch_4798_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x13:
        {
// switch_4798_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x14:
        {
// switch_4798_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21128;
            var_72 = 20952;
            var_80 = 20768;
            var_88 = 20576;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x15:
        {
// switch_4798_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x16:
        {
// switch_4798_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x17:
        {
// switch_4798_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x18:
        {
// switch_4798_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x19:
        {
// switch_4798_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x1a:
        {
// switch_4798_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x1b:
        {
// switch_4798_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x1c:
        {
// switch_4798_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21520;
            var_72 = 21400;
            var_80 = 21272;
            var_88 = 21136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x1d:
        {
// switch_4798_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x1e:
        {
// switch_4798_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21984;
            var_72 = 21840;
            var_80 = 21688;
            var_88 = 21528;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x1f:
        {
// switch_4798_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x20:
        {
// switch_4798_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x21:
        {
// switch_4798_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x22:
        {
// switch_4798_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x23:
        {
// switch_4798_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x24:
        {
// switch_4798_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22352;
            var_72 = 22240;
            var_80 = 22120;
            var_88 = 21992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x25:
        {
// switch_4798_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22720;
            var_72 = 22608;
            var_80 = 22488;
            var_88 = 22360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x26:
        {
// switch_4798_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x27:
        {
// switch_4798_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x28:
        {
// switch_4798_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x29:
        {
// switch_4798_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23160;
            var_72 = 23024;
            var_80 = 22880;
            var_88 = 22728;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x2a:
        {
// switch_4798_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23552;
            var_72 = 23432;
            var_80 = 23304;
            var_88 = 23168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x2b:
        {
// switch_4798_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23968;
            var_72 = 23840;
            var_80 = 23704;
            var_88 = 23560;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x2c:
        {
// switch_4798_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24408;
            var_72 = 24272;
            var_80 = 24128;
            var_88 = 23976;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x2d:
        {
// switch_4798_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x2e:
        {
// switch_4798_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24728;
            var_72 = 24632;
            var_80 = 24528;
            var_88 = 24416;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x2f:
        {
// switch_4798_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25120;
            var_72 = 25000;
            var_80 = 24872;
            var_88 = 24736;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x30:
        {
// switch_4798_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25512;
            var_72 = 25392;
            var_80 = 25264;
            var_88 = 25128;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x31:
        {
// switch_4798_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x32:
        {
// switch_4798_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x33:
        {
// switch_4798_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25904;
            var_72 = 25784;
            var_80 = 25656;
            var_88 = 25520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x34:
        {
// switch_4798_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26272;
            var_72 = 26160;
            var_80 = 26040;
            var_88 = 25912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x35:
        {
// switch_4798_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26760;
            var_72 = 26608;
            var_80 = 26448;
            var_88 = 26280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x36:
        {
// switch_4798_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27128;
            var_72 = 27016;
            var_80 = 26896;
            var_88 = 26768;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x37:
        {
// switch_4798_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x38:
        {
// switch_4798_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27496;
            var_72 = 27384;
            var_80 = 27264;
            var_88 = 27136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_07C0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4798_case_default
        }
        case 0x39:
        {
// switch_4798_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x3a:
        {
// switch_4798_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x3b:
        {
// switch_4798_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x3c:
        {
// switch_4798_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27504;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x3d:
        {
// switch_4798_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27680;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
        case 0x3e:
        {
// switch_4798_case_0x3e
            var_8 = 4;
            var_16 = 27824;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            OP_JUMP switch_4798_case_default
        }
    }
}
// fun_4F90
fun_4F90() {
    pri = arg_4;
    OP_JNZ lab_4FC8
    var_8 = 0;
    pri = fun_0A60()
// lab_4FC8
    pri = arg_1;
    switch (pri) {
// switch_63A0
        case default:
        {
// switch_63A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 28896;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_0D10(var_264)
            OP_JZER lab_6968
            pri = arg_3;
            switch (pri) {
// switch_6910
                case default:
                {
// switch_6910_case_default
                    OP_JUMP lab_6C20
// lab_6C20
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6C90
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6C90
                    var_8 = 0;
                    pri = fun_0AA0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_6910_case_0x1
                    var_8 = 32;
                    var_16 = 29048;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6910_case_default
                }
                case 0x2:
                {
// switch_6910_case_0x2
                    var_8 = 32;
                    var_16 = 29152;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6910_case_default
                }
                case 0x3:
                {
// switch_6910_case_0x3
                    var_8 = 32;
                    var_16 = 28952;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_6910_case_default
                }
            }
// lab_6968
            pri = arg_1;
            OP_JZER lab_69B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_69B8
            pri = 0;
            OP_JUMP lab_69C0
// lab_69B8
            pri = 1;
// lab_69C0
            OP_JZER lab_6A28
            var_8 = 29248;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0550(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6A28
            pri = 1;
            OP_JUMP lab_6A30
// lab_6A28
            pri = 0;
// lab_6A30
            OP_JZER lab_6A80
            var_8 = 32;
            var_16 = 29344;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6C20
// lab_6A80
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6AE8
            var_8 = 32;
            var_16 = 29504;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6C20
// lab_6AE8
            var_16 = 29624;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0550(var_24, var_16)
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
            var_176 = 29728;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 29744;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_63A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1:
        {
// switch_63A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2:
        {
// switch_63A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x3:
        {
// switch_63A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x4:
        {
// switch_63A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x5:
        {
// switch_63A0_case_0x5
            var_8 = 1;
            var_16 = 28376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0788(var_40)
            OP_JUMP switch_63A0_case_default
        }
        case 0x6:
        {
// switch_63A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x7:
        {
// switch_63A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x8:
        {
// switch_63A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x9:
        {
// switch_63A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0xa:
        {
// switch_63A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0xb:
        {
// switch_63A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0xc:
        {
// switch_63A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0xd:
        {
// switch_63A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0xe:
        {
// switch_63A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0xf:
        {
// switch_63A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x10:
        {
// switch_63A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x11:
        {
// switch_63A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x12:
        {
// switch_63A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x13:
        {
// switch_63A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x14:
        {
// switch_63A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x15:
        {
// switch_63A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x16:
        {
// switch_63A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x17:
        {
// switch_63A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x18:
        {
// switch_63A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x19:
        {
// switch_63A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1a:
        {
// switch_63A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1b:
        {
// switch_63A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1c:
        {
// switch_63A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1d:
        {
// switch_63A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1e:
        {
// switch_63A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x1f:
        {
// switch_63A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x20:
        {
// switch_63A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x21:
        {
// switch_63A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x22:
        {
// switch_63A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x23:
        {
// switch_63A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x24:
        {
// switch_63A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x25:
        {
// switch_63A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x26:
        {
// switch_63A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x27:
        {
// switch_63A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x28:
        {
// switch_63A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x29:
        {
// switch_63A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2a:
        {
// switch_63A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2b:
        {
// switch_63A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2c:
        {
// switch_63A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2d:
        {
// switch_63A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2e:
        {
// switch_63A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x2f:
        {
// switch_63A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x30:
        {
// switch_63A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x31:
        {
// switch_63A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x32:
        {
// switch_63A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x33:
        {
// switch_63A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x34:
        {
// switch_63A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x35:
        {
// switch_63A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x36:
        {
// switch_63A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x37:
        {
// switch_63A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x38:
        {
// switch_63A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x39:
        {
// switch_63A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x3a:
        {
// switch_63A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x3b:
        {
// switch_63A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x3c:
        {
// switch_63A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28472;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x3d:
        {
// switch_63A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28648;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
        case 0x3e:
        {
// switch_63A0_case_0x3e
            var_8 = 3;
            var_16 = 28792;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0510(var_24, var_16, var_8)
            OP_JUMP switch_63A0_case_default
        }
    }
}
// fun_6CC0
fun_6CC0() {
    pri = 29792;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6D48
// lab_6D48
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6EC8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6EB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6E08
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6E08
    pri = 0;
    OP_JUMP lab_6E10
// lab_6EC8
    pri = 0;
    return pri;
// lab_6EB8
    OP_JUMP lab_6D40
// lab_6D40
    OP_INC_P_S -936
// lab_6E08
    pri = 1;
// lab_6E10
    OP_JZER lab_6E88
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6E80
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6E88
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6E80
}
// fun_6EE8
fun_6EE8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6F80
    var_8 = 1;
    var_16 = 0;
    var_24 = 30712;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_0F88()
// lab_6F80
    pri = arg_4;
    OP_JZER lab_6FB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0FB0(var_8)
// lab_6FB8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7010
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7010
    pri = 0;
    OP_JUMP lab_7018
// lab_7010
    pri = 1;
// lab_7018
    OP_JZER lab_70E0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_70E0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_70B8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0EC8(var_32, var_24)
    OP_JUMP lab_70E0
// lab_70E0
    pri = arg_2;
    OP_JZER lab_71B8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7188
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0AE0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_04A0(var_40)
    OP_JUMP lab_71B8
// lab_71B8
    pri = arg_3;
    OP_JZER lab_71F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0F50(var_8)
// lab_71F0
    pri = 0;
    return pri;
// lab_7188
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0AE0(var_16, var_8)
// lab_70B8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0EC8(var_16, var_8)
}
// fun_7200
fun_7200() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6CC0(var_24)
    pri = 0;
    return pri;
}
// fun_7268
fun_7268() {
    pri = g_mode;
    switch (pri) {
// switch_7328
        case default:
        {
// switch_7328_case_default
            pri = CommandNOP()
            OP_JUMP lab_7370
// lab_7370
            pri = 0;
            return pri;
        }
        case 0x946f4c2206242e63:
        {
// switch_7328_case_0x946f4c2206242e63
            var_8 = 0;
            pri = fun_7AC0()
            OP_JUMP lab_7370
        }
        case 0x0:
        {
// switch_7328_case_0x0
            var_8 = 0;
            pri = fun_7380()
            OP_JUMP lab_7370
        }
        case 0x76a36a1e7bd36b0f:
        {
// switch_7328_case_0x76a36a1e7bd36b0f
            var_8 = 0;
            pri = fun_7BB0()
            OP_JUMP lab_7370
        }
    }
}
// fun_7380
fun_7380() {
    pri = 0;
    return pri;
}
// fun_7398
fun_7398() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6EE8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_73F0
fun_73F0() {
    pri = 0;
    return pri;
}
// fun_7408
fun_7408() {
    pri = 0;
    return pri;
}
// fun_7420
fun_7420() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C 4626604192193052672, 4677617683431161856, 4670940349315678208, 8802641224559852288
    var_24 = 48;
    pri = fun_0408(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_32 = 1;
    var_40 = -140;
    pri = float(var_40)
    var_48 = pri;
    var_56 = -1655053127185566619;
    var_64 = 24;
    pri = fun_0460(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_0060(var_72)
    var_88 = 0;
    var_96 = 4631952216750555136;
    var_104 = 0;
    OP_PUSH5_C 4677560334279046595, 4655745032649116221, 4670897721249869332, 4677631115340084675, 4655806165495620567
    var_112 = 4670949835352246845;
    var_120 = 1;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    pri = fun_0FE8()
    var_136 = 0;
    var_144 = 4631952216750555136;
    var_152 = 2;
    OP_PUSH5_C 4677578965503579259, 4655642030399826166, 4670911440406204908, 4677649745190227804, 4655703207226795622
    var_160 = 4670963557257361490;
    var_168 = 150;
    pri = EvCameraMove(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 30760;
    var_184 = 8;
    var_192 = 16;
    pri = fun_0280(var_184, var_176)
    var_200 = 0;
    pri = fun_0350()
    var_208 = 30;
    var_216 = 8;
    pri = fun_0060(var_208)
    var_224 = 0;
    var_232 = 0;
    var_240 = 8802641224559852288;
    var_248 = 24;
    pri = fun_0C50(var_240, var_232, var_224)
    var_256 = 1;
    var_264 = 8;
    pri = fun_0060(var_256)
    var_272 = 1;
    var_280 = -1;
    var_288 = -1;
    var_296 = 3;
    var_304 = 0;
    var_312 = 17;
    var_320 = 8802641224559852288;
    var_328 = 56;
    pri = fun_1078(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 45;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 8802641224559852288;
    var_360 = 8;
    pri = fun_0B20(var_352)
    var_368 = 45;
    var_376 = 8;
    pri = fun_0060(var_368)
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0B20(var_384)
    var_400 = 50;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 0;
    var_424 = 4630699653104192717;
    var_432 = 0;
    OP_PUSH5_C 4677721438845916938, 4655794730574691697, 4671038714374678118, 4677767699423266079, 4655939690187697684
    var_440 = 4671082329252172923;
    var_448 = 1;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    pri = fun_0FE8()
    var_464 = 0;
    var_472 = 4630699653104192717;
    var_480 = 3;
    OP_PUSH5_C 4677711147417080955, 4654761321585977590, 4671093791660892488, 4677776796507596390, 4654747247837142057
    var_488 = 4671166722267162870;
    var_496 = 150;
    pri = EvCameraMove(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 90;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 1;
    var_528 = 1;
    var_536 = -1;
    var_544 = -1;
    var_552 = 0;
    var_560 = 7;
    var_568 = -1655053127185566619;
    var_576 = 56;
    pri = fun_2C58(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 90;
    var_592 = 8;
    pri = fun_0060(var_584)
    var_600 = 8802641224559852288;
    var_608 = 8;
    pri = fun_0CB8(var_600)
    var_616 = 3;
    var_624 = 45;
    pri = EvCameraEnd(var_624, var_616)
    var_632 = 30;
    var_640 = 8;
    pri = fun_0060(var_632)
    var_648 = 1;
    var_656 = 3;
    var_664 = 0;
    var_672 = 7;
    var_680 = -1655053127185566619;
    var_688 = 40;
    pri = fun_4F90(var_680, var_672, var_664, var_656, var_648)
    pri = 0;
    return pri;
}
// fun_7A58
fun_7A58() {
    pri = 0;
    return pri;
}
// fun_7A70
fun_7A70() {
    var_8 = 30;
    var_16 = 8;
    pri = fun_7200(var_8)
    pri = 0;
    return pri;
}
// fun_7AA8
fun_7AA8() {
    pri = 0;
    return pri;
}
// fun_7AC0
fun_7AC0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_7398()
    var_16 = 0;
    pri = fun_73F0()
    var_24 = 0;
    pri = fun_7408()
    var_32 = 0;
    pri = fun_7420()
    var_40 = 0;
    pri = fun_7A58()
    var_48 = 0;
    pri = fun_7A70()
    var_56 = 0;
    pri = fun_7AA8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7BB0
fun_7BB0() {
    var_8 = 0;
    pri = fun_73F0()
    var_16 = 0;
    pri = fun_7A70()
    pri = 0;
    return pri;
}
