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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = floatcmp(var_16, var_8)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SGEQ 
    return pri;
}
// fun_00B8
fun_00B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = floatcmp(var_16, var_8)
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_SLEQ 
    return pri;
}
// fun_0110
fun_0110() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_0150
    pri = 0;
    return pri;
// lab_0150
    OP_ZERO_P_S -8
    OP_JUMP lab_0178
// lab_0178
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_01D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0170
// lab_01D0
    pri = 0;
    return pri;
// lab_0170
    OP_INC_P_S -8
}
// fun_01E8
fun_01E8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0248
fun_0248() {
    OP_JUMP lab_0260
// lab_0260
    pri = FadeWait_()
    OP_JZER lab_0298
    pri = 0;
    return pri;
// lab_0298
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0260
    pri = 0;
    return pri;
}
// fun_02D8
fun_02D8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_03C8
fun_03C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0420
fun_0420() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0990(var_8)
    OP_JZER lab_0498
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_09C0(var_24)
    OP_JNZ lab_0498
    pri = 0;
    return pri;
// lab_0498
    OP_JUMP lab_04A8
// lab_04A8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0508
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0508
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A8
    pri = 0;
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0580
fun_0580() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_05C0
fun_05C0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0608
    pri = 0;
    return pri;
// lab_0608
    var_8 = 1;
    var_16 = 8;
    pri = fun_0110(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0648
// lab_0648
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0990(var_8)
    OP_JNZ lab_06D0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_06C0
    pri = 0;
    return pri;
// lab_06D0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0718
    pri = 0;
    return pri;
// lab_0718
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0778
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08E8(var_8)
    pri = 0;
    return pri;
// lab_0778
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0648
    pri = 0;
    return pri;
// lab_06C0
    OP_JUMP lab_0718
}
// fun_07C0
fun_07C0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0110(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0808
// lab_0808
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0860
    pri = 0;
    return pri;
// lab_0860
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_08A0
    pri = 0;
    return pri;
// lab_08A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0808
    pri = 0;
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_8;
    var_16 = arg_6;
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = arg_2;
    var_56 = arg_7;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_09C0
fun_09C0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A38
fun_0A38() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = 0;
    pri = fun_0A38()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0B30
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_0B30
    pri = 1;
    return pri;
// lab_0B30
    var_8 = 0;
    pri = fun_0A38()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_0B60
fun_0B60() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0110(var_8)
    pri = 0;
    return pri;
}
// fun_0BB0
fun_0BB0() {
    pri = g_mode;
    switch (pri) {
// switch_0D10
        case default:
        {
// switch_0D10_case_default
            pri = CommandNOP()
            OP_JUMP lab_0D98
// lab_0D98
            pri = 0;
            return pri;
        }
        case 0xb388034b863c7c48:
        {
// switch_0D10_case_0xb388034b863c7c48
            var_8 = 0;
            pri = fun_0DC0()
            OP_JUMP lab_0D98
        }
        case 0xee7e370b5aba47b4:
        {
// switch_0D10_case_0xee7e370b5aba47b4
            var_8 = 0;
            pri = fun_1AD0()
            OP_JUMP lab_0D98
        }
        case 0x0:
        {
// switch_0D10_case_0x0
            var_8 = 0;
            pri = fun_0DA8()
            OP_JUMP lab_0D98
        }
        case 0x11fc1eff5a1ef436:
        {
// switch_0D10_case_0x11fc1eff5a1ef436
            var_8 = 0;
            pri = fun_0DD8()
            OP_JUMP lab_0D98
        }
        case 0x12507957836ee530:
        {
// switch_0D10_case_0x12507957836ee530
            var_8 = 0;
            pri = fun_1D40()
            OP_JUMP lab_0D98
        }
        case 0x7b98c813a85bc46f:
        {
// switch_0D10_case_0x7b98c813a85bc46f
            var_8 = 0;
            pri = fun_1DD8()
            OP_JUMP lab_0D98
        }
        case 0x7d603ac5854c5d09:
        {
// switch_0D10_case_0x7d603ac5854c5d09
            var_8 = 0;
            pri = fun_1CA8()
            OP_JUMP lab_0D98
        }
    }
}
// fun_0DA8
fun_0DA8() {
    pri = 0;
    return pri;
}
// fun_0DC0
fun_0DC0() {
    pri = 0;
    return pri;
}
// fun_0DD8
fun_0DD8() {
    pri = 32;
    OP_ADDR_ALT -184
    OP_MOVS 184
    pri = 216;
    OP_ADDR_ALT -368
    OP_MOVS 184
    pri = 400;
    OP_ADDR_ALT -552
    OP_MOVS 184
    pri = 584;
    OP_ADDR_ALT -736
    OP_MOVS 184
    pri = 768;
    OP_ADDR_ALT -920
    OP_MOVS 184
    pri = 952;
    OP_ADDR_ALT -1104
    OP_MOVS 184
    pri = 1136;
    OP_ADDR_ALT -1288
    OP_MOVS 184
    pri = GetTargetFieldObjectID()
    var_1296 = pri;
    var_1312 = var_1296;
    pri = GetKinokoIndex_(var_1312)
    var_1304 = pri;
    pri = CommandNOP()
    var_1320 = 8802641224559852288;
    var_1328 = 8;
    pri = fun_05C0(var_1320)
    OP_CONST_S -1312, 4
    var_1344 = var_1296;
    pri = GetFieldObjectPositionY_(var_1344)
    var_1352 = pri;
    var_1360 = 8802641224559852288;
    pri = GetFieldObjectPositionY_(var_1360)
    OP_POP_ALT 
    var_1368 = pri;
    var_1376 = alt;
    pri = floatsub(var_1376, var_1368)
    OP_MOVE_ALT 
    pri = 4634978072750194688;
    var_1384 = pri;
    var_1392 = pri;
    var_1400 = alt;
    var_1408 = 16;
    pri = fun_0060(var_1400, var_1392)
    OP_POP_ALT 
    OP_JZER lab_1118
    OP_CONST_S -1312, 5
// lab_1118
    var_8 = var_1312;
    var_16 = 1320;
    var_24 = 8802641224559852288;
    var_32 = 24;
    pri = fun_0580(var_24, var_16, var_8)
    var_40 = 1448;
    var_48 = 8802641224559852288;
    var_56 = 16;
    pri = fun_0548(var_48, var_40)
    pri = var_1312;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_11D0
    var_64 = 7;
    var_72 = 8;
    pri = fun_0110(var_64)
    OP_JUMP lab_11F0
// lab_11D0
    var_8 = 13;
    var_16 = 8;
    pri = fun_0110(var_8)
// lab_11F0
    var_8 = 1584;
    var_16 = var_1296;
    var_24 = 16;
    pri = fun_0548(var_16, var_8)
    var_32 = 1696;
    pri = SoundPostEvent(var_32)
    OP_ADDR_P_ALT -368
    pri = var_1304;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    var_40 = pri;
    var_48 = pri;
    var_56 = alt;
    var_64 = 16;
    pri = fun_00B8(var_56, var_48)
    OP_POP_ALT 
    OP_JZER lab_1380
    var_72 = 0;
    var_80 = 2280;
    var_88 = 0;
    var_96 = 4607182418800017408;
    var_104 = 0;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 0;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 0;
    pri = float(var_136)
    var_144 = pri;
    var_152 = var_1296;
    var_160 = 1960;
    var_168 = 72;
    pri = fun_0920(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    OP_JUMP lab_1448
// lab_1380
    var_8 = 0;
    var_16 = 2656;
    var_24 = 0;
    var_32 = 4607182418800017408;
    var_40 = 0;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 0;
    pri = float(var_72)
    var_80 = pri;
    var_88 = var_1296;
    var_96 = 2336;
    var_104 = 72;
    pri = fun_0920(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
// lab_1448
    var_8 = 6;
    var_16 = 8;
    pri = fun_0110(var_8)
    OP_PUSH3_C 4610560118520545280, 4620130267728707584, 4602678819172646912
    OP_ADDR_P_ALT -1288
    pri = var_1304;
    OP_LIDX_P_B 3
    var_24 = pri;
    OP_ADDR_P_ALT -1104
    pri = var_1304;
    OP_LIDX_P_B 3
    var_32 = pri;
    OP_ADDR_P_ALT -920
    pri = var_1304;
    OP_LIDX_P_B 3
    var_40 = pri;
    OP_ADDR_P_ALT -736
    pri = var_1304;
    OP_LIDX_P_B 3
    var_48 = pri;
    OP_ADDR_P_ALT -552
    pri = var_1304;
    OP_LIDX_P_B 3
    var_56 = pri;
    OP_ADDR_P_ALT -368
    pri = var_1304;
    OP_LIDX_P_B 3
    var_64 = pri;
    OP_ADDR_P_ALT -184
    pri = var_1304;
    OP_LIDX_P_B 3
    var_72 = pri;
    var_80 = var_1296;
    pri = SetKinokoLightParam_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_88 = 2712;
    pri = SoundPostEvent(var_88)
    OP_ZERO_P_S -1320
    pri = var_1304;
    switch (pri) {
// switch_1840
        case default:
        {
// switch_1840_case_default
            OP_JUMP lab_1878
// lab_1878
            pri = var_1320;
            OP_JZER lab_1A90
            var_8 = 0;
            var_16 = -1;
            var_24 = 4216857457724198482;
            var_32 = 24;
            pri = fun_09F0(var_24, var_16, var_8)
            var_40 = 0;
            pri = fun_0AB0()
            OP_JZER lab_1920
            var_48 = 0;
            pri = fun_0B60()
            pri = 0;
            return pri;
// lab_1A90
            var_8 = 3032;
            var_16 = var_1296;
            var_24 = 16;
            pri = fun_07C0(var_16, var_8)
// lab_1920
            pri = var_1304;
            switch (pri) {
// switch_1A08
                case default:
                {
// switch_1A08_case_default
                    OP_JUMP lab_1A40
// lab_1A40
                    var_8 = 2984;
                    var_16 = 8;
                    var_24 = 16;
                    pri = fun_01E8(var_16, var_8)
                    var_32 = 0;
                    pri = fun_0248()
                    OP_JUMP lab_1AB8
// lab_1AB8
                    pri = 0;
                    return pri;
                }
                case 0xb:
                {
// switch_1A08_case_0xb
                    var_8 = -423800443829955505;
                    pri = VanishFlagSet(var_8)
                    var_16 = -423800443829955505;
                    var_24 = 8;
                    pri = fun_02D8(var_16)
                    OP_JUMP lab_1A40
                }
                case 0xf:
                {
// switch_1A08_case_0xf
                    var_8 = -423804841876468349;
                    pri = VanishFlagSet(var_8)
                    var_16 = -423804841876468349;
                    var_24 = 8;
                    pri = fun_02D8(var_16)
                    OP_JUMP lab_1A40
                }
            }
        }
        case 0xb:
        {
// switch_1840_case_0xb
            var_8 = -423800443829955505;
            pri = VanishFlagGet(var_8)
            OP_JNZ lab_16F0
            var_16 = 1;
            var_24 = 0;
            OP_PUSH2_C 4641240890982006784, 8802641224559852288
            var_32 = 7200;
            pri = float(var_32)
            var_40 = pri;
            var_48 = 6390;
            pri = float(var_48)
            var_56 = pri;
            OP_PUSH2_C 4607182418800017408, -423800443829955505
            var_64 = 64;
            pri = fun_0308(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
            var_72 = -423800443829955505;
            var_80 = 8;
            pri = fun_0420(var_72)
            OP_CONST_S -1320, 1
// lab_16F0
            OP_JUMP lab_1878
        }
        case 0xf:
        {
// switch_1840_case_0xf
            var_8 = -423804841876468349;
            pri = VanishFlagGet(var_8)
            OP_JNZ lab_1820
            var_16 = 1;
            var_24 = 0;
            OP_PUSH2_C 4641240890982006784, 8802641224559852288
            var_32 = 9020;
            pri = float(var_32)
            var_40 = pri;
            var_48 = 7440;
            pri = float(var_48)
            var_56 = pri;
            OP_PUSH2_C 4607182418800017408, -423804841876468349
            var_64 = 64;
            pri = fun_0308(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
            var_72 = -423804841876468349;
            var_80 = 8;
            pri = fun_0420(var_72)
            OP_CONST_S -1320, 1
// lab_1820
            OP_JUMP lab_1878
        }
    }
}
// fun_1AD0
fun_1AD0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 8802641224559852288, -2552396852955143759
    var_40 = 48;
    pri = fun_03C8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = -2552396852955143759;
    var_56 = 8;
    pri = fun_0420(var_48)
    var_64 = 0;
    var_72 = -1;
    var_80 = -2867761463420776576;
    var_88 = 24;
    pri = fun_09F0(var_80, var_72, var_64)
    var_96 = 0;
    pri = fun_0AB0()
    OP_JZER lab_1BD8
    var_104 = 0;
    pri = fun_0B60()
    pri = 0;
    return pri;
// lab_1BD8
    var_8 = -2552396852955143759;
    pri = VanishFlagSet(var_8)
    var_16 = -2552396852955143759;
    var_24 = 8;
    pri = fun_02D8(var_16)
    var_32 = 1;
    var_40 = 6253387570979289862;
    pri = WorkAdd(var_40, var_32)
    var_48 = 2984;
    var_56 = 8;
    var_64 = 16;
    pri = fun_01E8(var_56, var_48)
    var_72 = 0;
    pri = fun_0248()
    pri = 0;
    return pri;
}
// fun_1CA8
fun_1CA8() {
    var_8 = 1;
    var_16 = 2047671651235024251;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 60;
    OP_PUSH3_C 4581421828931458171, 4673975551164153856, 4650248090236747776
    var_40 = 2;
    pri = FogStart(var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_1D40
fun_1D40() {
    var_8 = 0;
    var_16 = 2047671651235024251;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 60;
    OP_PUSH3_C 4591149604126578442, 4673975551164153856, 4650248090236747776
    var_40 = 2;
    pri = FogStart(var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_1DD8
fun_1DD8() {
    var_8 = 1;
    var_16 = 2047671651235024251;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 0;
    OP_PUSH3_C 4581421828931458171, 4673975551164153856, 4650248090236747776
    var_40 = 2;
    pri = FogStart(var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
