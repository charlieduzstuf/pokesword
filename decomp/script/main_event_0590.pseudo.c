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
    pri = arg_0;
    OP_JZER lab_02F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_02F0
    var_8 = arg_1;
    pri = SetPlayerUniform(var_8)
    pri = CallReloadPlayer()
    pri = arg_0;
    OP_JZER lab_0380
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0390(var_24, var_16)
    var_40 = 0;
    pri = fun_0460()
// lab_0380
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_03F0
fun_03F0() {
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
// fun_0460
fun_0460() {
    OP_JUMP lab_0478
// lab_0478
    pri = FadeWait_()
    OP_JZER lab_04B0
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
    pri = FadeCheckOut_()
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0550
fun_0550() {
    OP_JUMP lab_0568
// lab_0568
    pri = IsLoadedLogoFade_()
    OP_JZER lab_05A0
    pri = 0;
    return pri;
// lab_05A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0568
    pri = 0;
    return pri;
}
// fun_05E0
fun_05E0() {
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
// fun_0680
fun_0680() {
    var_8 = arg_0;
    pri = ReserveScript(var_8)
    var_16 = arg_9;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_8;
    var_48 = arg_7;
    var_56 = arg_4;
    var_64 = 0;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_3;
    var_88 = arg_2;
    var_96 = arg_1;
    pri = MapChangeCore_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0788
// lab_0788
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_07C8
    OP_JUMP lab_0838
// lab_07C8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0808
    OP_JUMP lab_0838
// lab_0808
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0788
// lab_0838
    pri = 0;
    return pri;
}
// fun_0850
fun_0850() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08A0
fun_08A0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0918
fun_0918() {
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
// fun_0990
fun_0990() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A38
fun_0A38() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11A8(var_8)
    OP_JZER lab_0AB0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_11D8(var_24)
    OP_JNZ lab_0AB0
    pri = 0;
    return pri;
// lab_0AB0
    OP_JUMP lab_0AC0
// lab_0AC0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0B20
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0B20
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AC0
    pri = 0;
    return pri;
}
// fun_0B60
fun_0B60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B98
fun_0B98() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C10
fun_0C10() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C58
    pri = 0;
    return pri;
// lab_0C58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C98
// lab_0C98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11A8(var_8)
    OP_JNZ lab_0D20
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D10
    pri = 0;
    return pri;
// lab_0D20
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D68
    pri = 0;
    return pri;
// lab_0D68
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DC8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E10(var_8)
    pri = 0;
    return pri;
// lab_0DC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C98
    pri = 0;
    return pri;
// lab_0D10
    OP_JUMP lab_0D68
}
// fun_0E10
fun_0E10() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E98
    pri = 0;
    return pri;
// lab_0E98
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11A8(var_8)
    OP_JZER lab_0FC8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EF0
    OP_ZERO_P_S 64
// lab_0FC8
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1000
    OP_CONST_S 64, 1
// lab_1000
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1038
    OP_CONST_S 72, 1
// lab_1038
    var_8 = 1;
    var_16 = 0;
    var_24 = 352;
    var_32 = -1;
    var_40 = -1;
    var_48 = 344;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 296;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 256;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_0EF0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F18
    OP_ZERO_P_S 72
// lab_0F18
    var_8 = 0;
    var_16 = 0;
    var_24 = 248;
    var_32 = -1;
    var_40 = -1;
    var_48 = 240;
    var_56 = arg_6;
    var_64 = 0;
    var_72 = 176;
    var_80 = arg_5;
    var_88 = 0;
    var_96 = 128;
    var_104 = arg_4;
    var_112 = arg_3;
    var_120 = arg_2;
    var_128 = arg_1;
    var_136 = arg_0;
    pri = AddParallelCommandControlFacial_(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_10D8
// lab_10D8
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1208
fun_1208() {
    OP_JUMP lab_1220
// lab_1220
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_12B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_12A0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C10(var_8)
    pri = 0;
    return pri;
// lab_12B0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1340
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1330
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C10(var_8)
    pri = 0;
    return pri;
// lab_1340
    pri = 0;
    return pri;
// lab_1330
    OP_JUMP lab_1350
// lab_1350
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1220
    pri = 0;
    return pri;
// lab_12A0
    OP_JUMP lab_1350
}
// fun_1390
fun_1390() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C10(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1208(var_40)
    pri = 0;
    return pri;
}
// fun_1418
fun_1418() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1450
fun_1450() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_14A8
fun_14A8() {
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
// fun_1578
fun_1578() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_15B0
fun_15B0() {
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
// switch_1BC8
        case default:
        {
// switch_1BC8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1C10
// lab_1C10
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
            OP_JNZ lab_1CB8
            var_88 = 0;
            pri = fun_1E70()
// lab_1CB8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1BC8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_17B0
                case default:
                {
// switch_17B0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1828
// lab_1828
                    OP_JUMP lab_1C10
                }
                case 0x0:
                {
// switch_17B0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1828
                }
                case 0x1:
                {
// switch_17B0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1828
                }
                case 0x2:
                {
// switch_17B0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1828
                }
                case 0x3:
                {
// switch_17B0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1828
                }
                case 0x4:
                {
// switch_17B0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1828
                }
                case 0x5:
                {
// switch_17B0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1828
                }
            }
        }
        case 0x65:
        {
// switch_1BC8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1968
                case default:
                {
// switch_1968_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19E0
// lab_19E0
                    OP_JUMP lab_1C10
                }
                case 0x0:
                {
// switch_1968_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_19E0
                }
                case 0x1:
                {
// switch_1968_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_19E0
                }
                case 0x2:
                {
// switch_1968_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_19E0
                }
                case 0x3:
                {
// switch_1968_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_19E0
                }
                case 0x4:
                {
// switch_1968_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_19E0
                }
                case 0x5:
                {
// switch_1968_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_19E0
                }
            }
        }
        case 0x66:
        {
// switch_1BC8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1B20
                case default:
                {
// switch_1B20_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B98
// lab_1B98
                    OP_JUMP lab_1C10
                }
                case 0x0:
                {
// switch_1B20_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B98
                }
                case 0x1:
                {
// switch_1B20_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B98
                }
                case 0x2:
                {
// switch_1B20_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B98
                }
                case 0x3:
                {
// switch_1B20_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B98
                }
                case 0x4:
                {
// switch_1B20_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B98
                }
                case 0x5:
                {
// switch_1B20_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B98
                }
            }
        }
    }
}
// fun_1CD0
fun_1CD0() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0BD8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D78
    pri = 1;
    return pri;
// lab_1D78
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1DC0
fun_1DC0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1E10
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1CD0(var_8)
    arg_2 = pri;
// lab_1E10
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_15B0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E70
fun_1E70() {
    OP_JUMP lab_1E88
// lab_1E88
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EC8
    pri = 0;
    return pri;
// lab_1EC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E88
    pri = 0;
    return pri;
}
// fun_1F08
fun_1F08() {
    var_8 = 0;
    pri = fun_1E70()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FB8
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_1FB8
    pri = 0;
    return pri;
}
// fun_1FC8
fun_1FC8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FF8
fun_1FF8() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2028
// lab_2028
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2068
    OP_JUMP lab_2098
// lab_2068
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2028
// lab_2098
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20E0
fun_20E0() {
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
// fun_2150
fun_2150() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_21C8()
    return pri;
}
// fun_21C8
fun_21C8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2208
fun_2208() {
    pri = arg_6;
    OP_JNZ lab_2240
    var_8 = 0;
    pri = fun_10E8()
// lab_2240
    pri = arg_1;
    switch (pri) {
// switch_37A8
        case default:
        {
// switch_37A8_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3AF8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3AF8
            pri = 1;
            OP_JUMP lab_3B00
// lab_3AF8
            pri = 0;
// lab_3B00
            OP_JZER lab_3C58
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BD8(var_24, var_16)
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
            var_64 = 8520;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3CB8
// lab_3C58
            var_8 = 64;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3CB8
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3D18
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3D78
// lab_3D18
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3D78
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3D78
            pri = arg_2;
            OP_JZER lab_3DB8
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_3DB8
            var_8 = 0;
            pri = fun_1128()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_37A8_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1:
        {
// switch_37A8_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x2:
        {
// switch_37A8_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x3:
        {
// switch_37A8_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x4:
        {
// switch_37A8_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x5:
        {
// switch_37A8_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x6:
        {
// switch_37A8_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x7:
        {
// switch_37A8_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x8:
        {
// switch_37A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x9:
        {
// switch_37A8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xa:
        {
// switch_37A8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xb:
        {
// switch_37A8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xc:
        {
// switch_37A8_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xd:
        {
// switch_37A8_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xe:
        {
// switch_37A8_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0xf:
        {
// switch_37A8_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x10:
        {
// switch_37A8_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x11:
        {
// switch_37A8_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x12:
        {
// switch_37A8_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5944;
            var_72 = 5936;
            var_80 = 5928;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x13:
        {
// switch_37A8_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x14:
        {
// switch_37A8_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x15:
        {
// switch_37A8_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x16:
        {
// switch_37A8_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x17:
        {
// switch_37A8_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x18:
        {
// switch_37A8_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x19:
        {
// switch_37A8_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5968;
            var_72 = 5960;
            var_80 = 5952;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E48(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1a:
        {
// switch_37A8_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B98(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B60(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6192;
            var_88 = 6184;
            var_96 = 6176;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E48(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1b:
        {
// switch_37A8_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B98(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B60(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6416;
            var_88 = 6408;
            var_96 = 6400;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E48(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1c:
        {
// switch_37A8_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B98(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B60(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6640;
            var_88 = 6632;
            var_96 = 6624;
            alt = 744;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E48(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1d:
        {
// switch_37A8_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1e:
        {
// switch_37A8_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x1f:
        {
// switch_37A8_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x20:
        {
// switch_37A8_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x21:
        {
// switch_37A8_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x22:
        {
// switch_37A8_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x23:
        {
// switch_37A8_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x24:
        {
// switch_37A8_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x25:
        {
// switch_37A8_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x26:
        {
// switch_37A8_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x27:
        {
// switch_37A8_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x28:
        {
// switch_37A8_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
        case 0x29:
        {
// switch_37A8_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_37A8_case_default
        }
    }
}
// fun_3DE8
fun_3DE8() {
    pri = arg_4;
    OP_JNZ lab_3E20
    var_8 = 0;
    pri = fun_10E8()
// lab_3E20
    pri = arg_1;
    switch (pri) {
// switch_51F8
        case default:
        {
// switch_51F8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 9056;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_11A8(var_264)
            OP_JZER lab_57C0
            pri = arg_3;
            switch (pri) {
// switch_5768
                case default:
                {
// switch_5768_case_default
                    OP_JUMP lab_5A78
// lab_5A78
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5AE8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5AE8
                    var_8 = 0;
                    pri = fun_1128()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5768_case_0x1
                    var_8 = 32;
                    var_16 = 9208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5768_case_default
                }
                case 0x2:
                {
// switch_5768_case_0x2
                    var_8 = 32;
                    var_16 = 9312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5768_case_default
                }
                case 0x3:
                {
// switch_5768_case_0x3
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5768_case_default
                }
            }
// lab_57C0
            pri = arg_1;
            OP_JZER lab_5810
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5810
            pri = 0;
            OP_JUMP lab_5818
// lab_5810
            pri = 1;
// lab_5818
            OP_JZER lab_5880
            var_8 = 9408;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0BD8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5880
            pri = 1;
            OP_JUMP lab_5888
// lab_5880
            pri = 0;
// lab_5888
            OP_JZER lab_58D8
            var_8 = 32;
            var_16 = 9504;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A78
// lab_58D8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5940
            var_8 = 32;
            var_16 = 9664;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_5A78
// lab_5940
            var_16 = 9784;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0BD8(var_24, var_16)
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
            var_176 = 9888;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 9904;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_51F8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1:
        {
// switch_51F8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2:
        {
// switch_51F8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x3:
        {
// switch_51F8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x4:
        {
// switch_51F8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x5:
        {
// switch_51F8_case_0x5
            var_8 = 1;
            var_16 = 8536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B98(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E10(var_40)
            OP_JUMP switch_51F8_case_default
        }
        case 0x6:
        {
// switch_51F8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x7:
        {
// switch_51F8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x8:
        {
// switch_51F8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x9:
        {
// switch_51F8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0xa:
        {
// switch_51F8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0xb:
        {
// switch_51F8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0xc:
        {
// switch_51F8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0xd:
        {
// switch_51F8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0xe:
        {
// switch_51F8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0xf:
        {
// switch_51F8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x10:
        {
// switch_51F8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x11:
        {
// switch_51F8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x12:
        {
// switch_51F8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x13:
        {
// switch_51F8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x14:
        {
// switch_51F8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x15:
        {
// switch_51F8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x16:
        {
// switch_51F8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x17:
        {
// switch_51F8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x18:
        {
// switch_51F8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x19:
        {
// switch_51F8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1a:
        {
// switch_51F8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1b:
        {
// switch_51F8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1c:
        {
// switch_51F8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1d:
        {
// switch_51F8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1e:
        {
// switch_51F8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x1f:
        {
// switch_51F8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x20:
        {
// switch_51F8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x21:
        {
// switch_51F8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x22:
        {
// switch_51F8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x23:
        {
// switch_51F8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x24:
        {
// switch_51F8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x25:
        {
// switch_51F8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x26:
        {
// switch_51F8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x27:
        {
// switch_51F8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x28:
        {
// switch_51F8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x29:
        {
// switch_51F8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2a:
        {
// switch_51F8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2b:
        {
// switch_51F8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2c:
        {
// switch_51F8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2d:
        {
// switch_51F8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2e:
        {
// switch_51F8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x2f:
        {
// switch_51F8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x30:
        {
// switch_51F8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x31:
        {
// switch_51F8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x32:
        {
// switch_51F8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x33:
        {
// switch_51F8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x34:
        {
// switch_51F8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x35:
        {
// switch_51F8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x36:
        {
// switch_51F8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x37:
        {
// switch_51F8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x38:
        {
// switch_51F8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x39:
        {
// switch_51F8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x3a:
        {
// switch_51F8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x3b:
        {
// switch_51F8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x3c:
        {
// switch_51F8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8632;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x3d:
        {
// switch_51F8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8808;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
        case 0x3e:
        {
// switch_51F8_case_0x3e
            var_8 = 3;
            var_16 = 8952;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B98(var_24, var_16, var_8)
            OP_JUMP switch_51F8_case_default
        }
    }
}
// fun_5B18
fun_5B18() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_5C18
        case default:
        {
// switch_5C18_case_default
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
// switch_5C18_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_5C18_case_default
        }
        case 0x1:
        {
// switch_5C18_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_5C18_case_default
        }
        case 0x2:
        {
// switch_5C18_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_5C18_case_default
        }
        case 0x3:
        {
// switch_5C18_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_5C18_case_default
        }
    }
}
// fun_5CD8
fun_5CD8() {
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
    pri = fun_1DC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1E70()
    pri = 0;
    return pri;
}
// fun_5D70
fun_5D70() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5B18(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_5CD8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_5E18
fun_5E18() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_5E68
// lab_5E68
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9952;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_5EE0
    OP_JUMP lab_5F10
// lab_5EE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_5E68
// lab_5F10
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_5F98
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_3DE8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1478(var_56)
// lab_5F98
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6000
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1168(var_24, var_16)
// lab_6000
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1168(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_60C0
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0C10(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_09E8(var_88, var_80, var_72, var_64, var_56)
// lab_60C0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6100
    pri = 0;
    return pri;
// lab_6100
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6248
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 10072;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0B60(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6210
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6248
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0A38(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0C10(var_40)
    pri = 0;
    return pri;
// lab_6210
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1168(var_16, var_8)
}
// fun_62D0
fun_62D0() {
    pri = 10208;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6358
// lab_6358
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_64D8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_64C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6418
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6418
    pri = 0;
    OP_JUMP lab_6420
// lab_64D8
    pri = 0;
    return pri;
// lab_64C8
    OP_JUMP lab_6350
// lab_6350
    OP_INC_P_S -936
// lab_6418
    pri = 1;
// lab_6420
    OP_JZER lab_6498
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_6490
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_6498
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_6490
}
// fun_64F8
fun_64F8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6590
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
    var_56 = 0;
    pri = fun_1450()
// lab_6590
    pri = arg_4;
    OP_JZER lab_65C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1578(var_8)
// lab_65C8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6620
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6620
    pri = 0;
    OP_JUMP lab_6628
// lab_6620
    pri = 1;
// lab_6628
    OP_JZER lab_66F0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_66F0
    var_16 = 0;
    pri = fun_04F0()
    OP_JZER lab_66C8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1390(var_32, var_24)
    OP_JUMP lab_66F0
// lab_66F0
    pri = arg_2;
    OP_JZER lab_67C8
    var_8 = 0;
    pri = fun_04F0()
    OP_JZER lab_6798
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1168(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_08E0(var_40)
    OP_JUMP lab_67C8
// lab_67C8
    pri = arg_3;
    OP_JZER lab_6800
    var_8 = 1;
    var_16 = 8;
    pri = fun_1418(var_8)
// lab_6800
    pri = 0;
    return pri;
// lab_6798
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1168(var_16, var_8)
// lab_66C8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1390(var_16, var_8)
}
// fun_6810
fun_6810() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_6990
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_68A8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_03F0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0460()
// lab_6990
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_68A8
    pri = arg_0;
    OP_JNZ lab_68F0
    var_8 = 11128;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6910
// lab_68F0
    var_8 = 11304;
    pri = SoundPostEvent(var_8)
// lab_6910
    var_8 = 0;
    var_16 = 8;
    pri = fun_0740(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6990
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0390(var_32, var_24)
    var_48 = 0;
    pri = fun_0460()
}
// fun_69D0
fun_69D0() {
    pri = arg_5;
    OP_JZER lab_6A38
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_5B18(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_6A38
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_3;
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1DC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1F08(var_72)
    var_96 = 0;
    var_104 = 0;
    var_112 = 1;
    pri = arg_3;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_120 = pri;
    pri = arg_3;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_128 = pri;
    var_136 = 1;
    var_144 = 48;
    pri = fun_2150(var_136, var_128, var_120, var_112, var_104, var_96)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_80B0
    OP_CONST_S -16, 2425
    OP_CONST_S -24, 2000
    OP_CONST_S -32, 3082
    OP_CONST_S -40, 2215
    pri = var_32;
    var_48 = pri;
    pri = var_40;
    var_56 = pri;
    pri = arg_2;
    OP_EQ_C_PRI -2074260347958720186
    OP_JZER lab_6CC0
    OP_CONST_S -16, 1480
    OP_CONST_S -24, 1450
    pri = var_16;
    var_32 = pri;
    pri = var_24;
    OP_ADD_P_C 500
    var_40 = pri;
    pri = var_32;
    var_48 = pri;
    pri = var_40;
    var_56 = pri;
    OP_JUMP lab_6D70
// lab_80B0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_3;
    OP_ADD_P_C 48
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1DC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1F08(var_72)
    var_88 = 0;
    pri = fun_1FC8()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_5E18(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
// lab_6CC0
    pri = arg_2;
    OP_EQ_C_PRI -6053895580475888860
    OP_JZER lab_6D70
    OP_CONST_S -16, 2415
    OP_CONST_S -24, 1700
    OP_CONST_S -32, 3300
    OP_CONST_S -40, 1700
    OP_CONST_S -48, 1900
    pri = var_40;
    var_56 = pri;
// lab_6D70
    pri = IsPlayerUniform()
    var_64 = pri;
    pri = var_64;
    OP_JNZ lab_6E28
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    pri = arg_3;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_56 = pri;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1DC0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_6F38
// lab_6E28
    var_8 = arg_2;
    pri = FlagGet(var_8)
    OP_JNZ lab_6ED0
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    pri = arg_3;
    OP_ADD_P_C 56
    OP_LOAD_I 
    var_56 = pri;
    var_64 = arg_0;
    var_72 = 56;
    pri = fun_1DC0(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_6F38
// lab_6ED0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_3;
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1DC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_6F38
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F08(var_8)
    pri = arg_3;
    OP_ADD_P_C 64
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_6FE0
    var_24 = 0;
    var_32 = 1;
    pri = PokePartyGetCount(var_32, var_24)
    alt = 2;
    OP_JSGEQ lab_6FE0
    pri = 1;
    OP_JUMP lab_6FE8
// lab_6FE0
    pri = 0;
// lab_6FE8
    OP_JZER lab_70E8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_3;
    OP_ADD_P_C 64
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1DC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1F08(var_72)
    var_88 = 0;
    pri = fun_1FC8()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_5E18(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
// lab_70E8
    var_8 = 0;
    pri = fun_1FC8()
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 32;
    pri = fun_5E18(var_40, var_32, var_24, var_16)
    pri = var_64;
    OP_JNZ lab_7668
    var_56 = 1;
    var_64 = 0;
    var_72 = 4641240890982006784;
    var_80 = 0;
    var_88 = 0;
    var_96 = var_40;
    pri = float(var_96)
    var_104 = pri;
    var_112 = var_32;
    pri = float(var_112)
    var_120 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_128 = 72;
    pri = fun_0918(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 50;
    var_144 = 8;
    pri = fun_0060(var_136)
    var_152 = 1;
    var_160 = 0;
    var_168 = 32;
    var_176 = 8;
    var_184 = 32;
    pri = fun_03F0(var_176, var_168, var_160, var_152)
    var_192 = 0;
    pri = fun_0460()
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0A38(var_200)
    var_216 = 11568;
    pri = SoundPostEvent(var_216)
    var_224 = 1;
    var_232 = 0;
    var_240 = 16;
    pri = fun_0280(var_232, var_224)
    var_248 = 1;
    var_256 = 0;
    var_264 = 4641240890982006784;
    var_272 = 180;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 1;
    var_296 = var_24;
    pri = float(var_296)
    var_304 = pri;
    var_312 = var_16;
    pri = float(var_312)
    var_320 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_328 = 72;
    pri = fun_0918(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 40;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 80;
    var_360 = 8;
    var_368 = 16;
    pri = fun_0390(var_360, var_352)
    var_376 = 0;
    pri = fun_0460()
    var_384 = 8802641224559852288;
    var_392 = 8;
    pri = fun_0A38(var_384)
    var_400 = 1;
    var_408 = -1;
    var_416 = -1;
    var_424 = 3;
    var_432 = 0;
    var_440 = 18;
    var_448 = 8802641224559852288;
    var_456 = 56;
    pri = fun_2208(var_448, var_440, var_432, var_424, var_416, var_408, var_400)
    var_464 = 1;
    var_472 = 1;
    var_480 = 0;
    var_488 = 1;
    var_496 = 1;
    var_504 = arg_0;
    var_512 = 48;
    pri = fun_5B18(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = arg_2;
    pri = FlagGet(var_520)
    OP_JNZ lab_7580
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    pri = arg_3;
    OP_ADD_P_C 32
    OP_LOAD_I 
    var_568 = pri;
    var_576 = arg_0;
    var_584 = 56;
    pri = fun_1DC0(var_576, var_568, var_560, var_552, var_544, var_536, var_528)
    OP_JUMP lab_75E8
// lab_7668
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = var_24;
    pri = float(var_56)
    var_64 = pri;
    var_72 = var_16;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_0918(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_7580
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    pri = arg_3;
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_48 = pri;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1DC0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_75E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1F08(var_8)
    var_24 = 0;
    pri = fun_1FC8()
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = arg_0;
    var_64 = 32;
    pri = fun_5E18(var_56, var_48, var_40, var_32)
    OP_JUMP lab_7738
// lab_7738
    pri = arg_2;
    OP_EQ_C_PRI -2074260347958720186
    OP_JZER lab_77A8
    var_8 = arg_2;
    pri = FlagGet(var_8)
    OP_JZER lab_77A8
    pri = 1;
    OP_JUMP lab_77B0
// lab_77A8
    pri = 0;
// lab_77B0
    OP_JZER lab_7B60
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C10(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 4640303579309560300;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_09E8(var_56, var_48, var_40, var_32, var_24)
    var_72 = arg_0;
    var_80 = 8;
    pri = fun_0A38(var_72)
    var_96 = 11800;
    var_104 = 1;
    var_112 = 0;
    var_120 = 1;
    var_128 = -1;
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    OP_PUSH5_C 4652474821185319731, 4611686018427387904, 4654990943594322330, 4652495052199270810, 4611686018427387904
    var_184 = 4654626345538551808;
    var_192 = arg_0;
    pri = GetFieldObjectPositionZ_(var_192)
    var_200 = pri;
    var_208 = 4611686018427387904;
    var_216 = arg_0;
    pri = GetFieldObjectPositionX_(var_216)
    var_224 = pri;
    var_232 = 3;
    var_240 = 168;
    pri = fun_14A8(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_72 = pri;
    var_248 = 1;
    var_256 = 4596373779694328218;
    var_264 = -1;
    var_272 = 4607182418800017408;
    var_280 = var_72;
    var_288 = arg_0;
    var_296 = 48;
    pri = fun_0990(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = arg_0;
    var_312 = 8;
    pri = fun_0A38(var_304)
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = -90;
    pri = float(var_344)
    var_352 = pri;
    var_360 = arg_0;
    var_368 = 40;
    pri = fun_09E8(var_360, var_352, var_344, var_336, var_328)
    var_376 = arg_0;
    var_384 = 8;
    pri = fun_0A38(var_376)
    var_392 = 8802641224559852288;
    var_400 = 8;
    pri = fun_0C10(var_392)
    var_408 = 8802641224559852288;
    var_416 = 8;
    pri = fun_0A38(var_408)
    var_424 = 1;
    var_432 = 0;
    var_440 = 4641240890982006784;
    var_448 = 0;
    var_456 = 0;
    OP_PUSH4_C 4648594424748572672, 4654223924282785792, 4607182418800017408, 8802641224559852288
    var_464 = 72;
    pri = fun_0918(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_472 = 60;
    var_480 = 8;
    pri = fun_0060(var_472)
    OP_JUMP lab_8078
// lab_7B60
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_7F68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C10(var_8)
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 4640303579309560300;
    var_56 = arg_0;
    var_64 = 40;
    pri = fun_09E8(var_56, var_48, var_40, var_32, var_24)
    var_72 = arg_0;
    var_80 = 8;
    pri = fun_0A38(var_72)
    var_96 = 11848;
    var_104 = 1;
    var_112 = 0;
    var_120 = 1;
    var_128 = -1;
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 4655191494515228672;
    var_192 = 0;
    OP_PUSH2_C 4657781943910268928, 4655279455445450752
    var_200 = 0;
    var_208 = 4657603823026569216;
    var_216 = arg_0;
    pri = GetFieldObjectPositionZ_(var_216)
    var_224 = pri;
    var_232 = 0;
    var_240 = arg_0;
    pri = GetFieldObjectPositionX_(var_240)
    var_248 = pri;
    var_256 = 3;
    var_264 = 168;
    pri = fun_14A8(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_72 = pri;
    var_272 = 1;
    var_280 = 4596373779694328218;
    var_288 = -1;
    var_296 = 4607182418800017408;
    var_304 = var_72;
    var_312 = arg_0;
    var_320 = 48;
    pri = fun_0990(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = arg_0;
    var_336 = 8;
    pri = fun_0A38(var_328)
    var_344 = 0;
    var_352 = 0;
    var_360 = 0;
    var_368 = -90;
    pri = float(var_368)
    var_376 = pri;
    var_384 = arg_0;
    var_392 = 40;
    pri = fun_09E8(var_384, var_376, var_368, var_360, var_352)
    var_400 = arg_0;
    var_408 = 8;
    pri = fun_0A38(var_400)
    var_416 = 8802641224559852288;
    var_424 = 8;
    pri = fun_0C10(var_416)
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_0A38(var_432)
    var_448 = 1;
    var_456 = 0;
    var_464 = 4641240890982006784;
    var_472 = 0;
    var_480 = 0;
    OP_PUSH4_C 4652992471259676672, 4657551046468435968, 4607182418800017408, 8802641224559852288
    var_488 = 72;
    pri = fun_0918(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 60;
    var_504 = 8;
    pri = fun_0060(var_496)
    var_512 = 11896;
    pri = SoundPostEvent(var_512)
    var_520 = arg_4;
    var_528 = arg_1;
    var_536 = 16;
    pri = fun_0B60(var_528, var_520)
    OP_JUMP lab_8078
// lab_7F68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C10(var_8)
    var_24 = 1;
    var_32 = 0;
    var_40 = 30;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 0;
    var_80 = var_56;
    pri = float(var_80)
    var_88 = pri;
    var_96 = var_48;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_112 = 72;
    pri = fun_0918(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
// lab_8078
    var_8 = 45;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 1;
    return pri;
}
// fun_81A0
fun_81A0() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_6810(var_16, var_8)
    var_32 = arg_1;
    pri = FlagGet(var_32)
    OP_JZER lab_8270
    var_40 = 0;
    var_48 = -1;
    var_56 = 1;
    var_64 = 180;
    var_72 = arg_10;
    var_80 = arg_9;
    var_88 = arg_8;
    var_96 = arg_7;
    var_104 = arg_0;
    var_112 = 72;
    pri = fun_8510(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    OP_JUMP lab_8408
// lab_8270
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = 0;
    pri = fun_0550()
    var_32 = 12128;
    pri = SoundPostEvent(var_32)
    var_40 = 1;
    var_48 = 0;
    var_56 = 12392;
    var_64 = 8;
    var_72 = 32;
    pri = fun_03F0(var_64, var_56, var_48, var_40)
    var_80 = 0;
    pri = fun_0460()
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0A38(var_88)
    var_104 = 1;
    pri = SetPlayerUniform(var_104)
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 0;
    var_144 = 0;
    var_152 = arg_5;
    pri = float(var_152)
    var_160 = pri;
    var_168 = arg_4;
    pri = float(var_168)
    var_176 = pri;
    var_184 = arg_3;
    var_192 = arg_2;
    var_200 = arg_6;
    var_208 = 80;
    pri = fun_0680(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
// lab_8408
    pri = 0;
    return pri;
}
// fun_8418
fun_8418() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0518(var_8)
    var_24 = 0;
    pri = fun_0550()
    pri = arg_1;
    OP_JZER lab_8490
    var_32 = 12408;
    pri = SoundPostEvent(var_32)
// lab_8490
    var_8 = 12608;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 12872;
    var_40 = 8;
    var_48 = 32;
    pri = fun_03F0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0460()
    pri = 0;
    return pri;
}
// fun_8510
fun_8510() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_8560
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8418(var_16, var_8)
// lab_8560
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0A38(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_8600
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_8600
    pri = 1;
    OP_JUMP lab_8608
// lab_8600
    pri = 0;
// lab_8608
    OP_JZER lab_87A0
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_86E8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = 72;
    pri = fun_05E0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_8790
// lab_87A0
    var_8 = 1;
    var_16 = 1;
    var_24 = arg_4;
    pri = float(var_24)
    var_32 = pri;
    var_40 = arg_3;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 8802641224559852288;
    var_64 = 40;
    pri = fun_0850(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_86E8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = arg_4;
    pri = float(var_48)
    var_56 = pri;
    var_64 = arg_3;
    pri = float(var_64)
    var_72 = pri;
    var_80 = arg_2;
    var_88 = arg_1;
    var_96 = arg_7;
    var_104 = 80;
    pri = fun_0680(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8790
    OP_JUMP lab_8860
// lab_8860
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_88D8
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_08A0(var_32, var_24, var_16)
// lab_88D8
    var_8 = 12888;
    pri = SoundPostEvent(var_8)
    var_16 = 13160;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0390(var_24, var_16)
    var_40 = 0;
    pri = fun_0460()
    pri = 0;
    return pri;
}
// fun_8948
fun_8948() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 88;
    pri = fun_5D70(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1F08(var_104)
    var_120 = 0;
    pri = fun_1FC8()
    var_128 = 0;
    var_136 = 0;
    var_144 = 0;
    var_152 = arg_0;
    var_160 = 32;
    pri = fun_5E18(var_152, var_144, var_136, var_128)
    pri = 0;
    return pri;
}
// fun_8A40
fun_8A40() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_62D0(var_24)
    pri = 0;
    return pri;
}
// fun_8AA8
fun_8AA8() {
    pri = g_mode;
    switch (pri) {
// switch_8B90
        case default:
        {
// switch_8B90_case_default
            pri = CommandNOP()
            OP_JUMP lab_8BE8
// lab_8BE8
            pri = 0;
            return pri;
        }
        case 0x844ab7b1e54765da:
        {
// switch_8B90_case_0x844ab7b1e54765da
            var_8 = 0;
            pri = fun_9330()
            OP_JUMP lab_8BE8
        }
        case 0xbfa72c221e986374:
        {
// switch_8B90_case_0xbfa72c221e986374
            var_8 = 0;
            pri = fun_9200()
            OP_JUMP lab_8BE8
        }
        case 0x0:
        {
// switch_8B90_case_0x0
            var_8 = 0;
            pri = fun_8BF8()
            OP_JUMP lab_8BE8
        }
        case 0x5d686a1e6dbf8df0:
        {
// switch_8B90_case_0x5d686a1e6dbf8df0
            var_8 = 0;
            pri = fun_9378()
            OP_JUMP lab_8BE8
        }
    }
}
// fun_8BF8
fun_8BF8() {
    pri = 0;
    return pri;
}
// fun_8C10
fun_8C10() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_64F8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8C68
fun_8C68() {
    pri = 0;
    return pri;
}
// fun_8C80
fun_8C80() {
    pri = 0;
    return pri;
}
// fun_8C98
fun_8C98() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -853404815738154776;
    var_56 = 48;
    pri = fun_5B18(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C -6228373739427812738, -853404815738154776
    var_104 = 56;
    pri = fun_1DC0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1F08(var_112)
    var_128 = 1269576369396563225;
    pri = FlagGet(var_128)
    alt = 1;
    OP_JEQ lab_8FD0
    var_136 = 0;
    var_144 = 3;
    var_152 = 0;
    var_160 = 100;
    var_168 = -1;
    OP_PUSH2_C -6228374838939440949, -853404815738154776
    var_176 = 56;
    pri = fun_1DC0(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
    var_184 = 1;
    var_192 = 8;
    pri = fun_1F08(var_184)
    var_200 = 0;
    var_208 = -2717005071980375511;
    var_216 = 0;
    var_224 = 24;
    pri = fun_1FF8(var_216, var_208, var_200)
    var_232 = 0;
    var_240 = -2717008370515260144;
    var_248 = 1;
    var_256 = 24;
    pri = fun_1FF8(var_248, var_240, var_232)
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 1;
    var_304 = 32;
    pri = fun_20E0(var_296, var_288, var_280, var_272)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8F78
        case default:
        {
// switch_8F78_case_default
            var_8 = 1269576369396563225;
            pri = FlagSet(var_8)
        }
        case 0x1:
        {
// switch_8F78_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            OP_PUSH2_C -6228368241869671683, -853404815738154776
            var_48 = 56;
            pri = fun_1DC0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
            var_56 = 1;
            var_64 = 8;
            pri = fun_1F08(var_56)
            OP_JUMP switch_8F78_case_default
        }
    }
// lab_8FD0
    pri = 13176;
    OP_ADDR_ALT -72
    OP_MOVS 72
    var_80 = 0;
    var_88 = 13248;
    OP_PUSH_P_ADR -72
    OP_PUSH3_C -5753047856625536358, 271041327595042187, -853404815738154776
    var_96 = 48;
    pri = fun_69D0(var_88, var_80, var_72, var_64, var_56, var_48)
    return pri;
}
// fun_9068
fun_9068() {
    pri = 0;
    return pri;
}
// fun_9080
fun_9080() {
    var_8 = -5753047856625536358;
    pri = FlagGet(var_8)
    OP_JZER lab_90F0
    var_16 = 610;
    var_24 = 8;
    pri = fun_8A40(var_16)
    OP_JUMP lab_9140
// lab_90F0
    var_8 = 600;
    var_16 = 8;
    pri = fun_8A40(var_8)
    var_24 = 0;
    var_32 = 7474429120239519668;
    pri = WorkSet(var_32, var_24)
// lab_9140
    pri = 0;
    return pri;
}
// fun_9150
fun_9150() {
    var_8 = 26500;
    var_16 = 20000;
    OP_PUSH3_C 5282464471093915032, 3972592990337737001, -6470070529786763804
    var_24 = 26500;
    var_32 = 3450;
    OP_PUSH3_C 5283454031559115707, 3971603429872536326, -5753047856625536358
    var_40 = 5;
    var_48 = 88;
    pri = fun_81A0(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40)
    pri = 0;
    return pri;
}
// fun_91E8
fun_91E8() {
    pri = 0;
    return pri;
}
// fun_9200
fun_9200() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_8C10()
    var_16 = 0;
    pri = fun_8C68()
    var_24 = 0;
    pri = fun_8C80()
    var_32 = 0;
    pri = fun_8C98()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_92F0
    var_40 = 0;
    pri = fun_9068()
    var_48 = 0;
    pri = fun_9080()
    var_56 = 0;
    pri = fun_9150()
    OP_JUMP lab_9308
// lab_92F0
    var_8 = 0;
    pri = fun_91E8()
// lab_9308
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9330
fun_9330() {
    OP_PUSH2_C -6228382535520838426, -853404815738154776
    var_8 = 16;
    pri = fun_8948(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_9378
fun_9378() {
    var_8 = 0;
    pri = fun_8C68()
    var_16 = 0;
    pri = fun_9080()
    pri = 0;
    return pri;
}
