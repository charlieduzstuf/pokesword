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
// fun_02F0
fun_02F0() {
    OP_JUMP lab_0308
// lab_0308
    pri = FadeWait_()
    OP_JZER lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0308
    pri = 0;
    return pri;
}
// fun_0380
fun_0380() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_03A8
fun_03A8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_03D8
fun_03D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = CreateAttachModel_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0430
fun_0430() {
    var_8 = arg_0;
    pri = DeleteAttachModel_(var_8)
    return pri;
}
// fun_0460
fun_0460() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0498
fun_0498() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAttachModelPosAndRotationByFieldObject_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_04D8
fun_04D8() {
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
// fun_0550
fun_0550() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_05F8
fun_05F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11D8(var_8)
    OP_JZER lab_0670
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1208(var_24)
    OP_JNZ lab_0670
    pri = 0;
    return pri;
// lab_0670
    OP_JUMP lab_0680
// lab_0680
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_06E0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_06E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0680
    pri = 0;
    return pri;
}
// fun_0720
fun_0720() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0760
fun_0760() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0820
// lab_0820
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11D8(var_8)
    OP_JNZ lab_08A8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0898
    pri = 0;
    return pri;
// lab_08A8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_08F0
    pri = 0;
    return pri;
// lab_08F0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0950
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0998(var_8)
    pri = 0;
    return pri;
// lab_0950
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0820
    pri = 0;
    return pri;
// lab_0898
    OP_JUMP lab_08F0
}
// fun_0998
fun_0998() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_09D0
fun_09D0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A20
    pri = 0;
    return pri;
// lab_0A20
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11D8(var_8)
    OP_JZER lab_0B50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0A78
    OP_ZERO_P_S 64
// lab_0B50
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0B88
    OP_CONST_S 64, 1
// lab_0B88
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0BC0
    OP_CONST_S 72, 1
// lab_0BC0
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
// lab_0A78
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0AA0
    OP_ZERO_P_S 72
// lab_0AA0
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
    OP_JUMP lab_0C60
// lab_0C60
    pri = 0;
    return pri;
}
// fun_0C70
fun_0C70() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0CF0
fun_0CF0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D38
// lab_0D38
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = IsAttachModelAnimationStateName_(var_24, var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0D98
    pri = 0;
    return pri;
// lab_0D98
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0DD8
    pri = 0;
    return pri;
// lab_0DD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D38
    pri = 0;
    return pri;
}
// fun_0E20
fun_0E20() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0E78
fun_0E78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EB8
fun_0EB8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_0F30
fun_0F30() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_11D8(var_8)
    OP_JZER lab_0FD0
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
// lab_0FD0
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
// fun_1038
fun_1038() {
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
    pri = fun_0F30(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_11D8
fun_11D8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1238
fun_1238() {
    OP_JUMP lab_1250
// lab_1250
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_12E0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_12D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    pri = 0;
    return pri;
// lab_12E0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1370
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1360
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    pri = 0;
    return pri;
// lab_1370
    pri = 0;
    return pri;
// lab_1360
    OP_JUMP lab_1380
// lab_1380
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1250
    pri = 0;
    return pri;
// lab_12D0
    OP_JUMP lab_1380
}
// fun_13C0
fun_13C0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0798(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1238(var_40)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1480
fun_1480() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_14A8
fun_14A8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_14E0
fun_14E0() {
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
// switch_1AF8
        case default:
        {
// switch_1AF8_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1B40
// lab_1B40
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
            OP_JNZ lab_1BE8
            var_88 = 0;
            pri = fun_1E58()
// lab_1BE8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1AF8_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_16E0
                case default:
                {
// switch_16E0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1758
// lab_1758
                    OP_JUMP lab_1B40
                }
                case 0x0:
                {
// switch_16E0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1758
                }
                case 0x1:
                {
// switch_16E0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1758
                }
                case 0x2:
                {
// switch_16E0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1758
                }
                case 0x3:
                {
// switch_16E0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1758
                }
                case 0x4:
                {
// switch_16E0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1758
                }
                case 0x5:
                {
// switch_16E0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1758
                }
            }
        }
        case 0x65:
        {
// switch_1AF8_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1898
                case default:
                {
// switch_1898_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1910
// lab_1910
                    OP_JUMP lab_1B40
                }
                case 0x0:
                {
// switch_1898_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1910
                }
                case 0x1:
                {
// switch_1898_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1910
                }
                case 0x2:
                {
// switch_1898_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1910
                }
                case 0x3:
                {
// switch_1898_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1910
                }
                case 0x4:
                {
// switch_1898_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1910
                }
                case 0x5:
                {
// switch_1898_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1910
                }
            }
        }
        case 0x66:
        {
// switch_1AF8_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1A50
                case default:
                {
// switch_1A50_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1AC8
// lab_1AC8
                    OP_JUMP lab_1B40
                }
                case 0x0:
                {
// switch_1A50_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1AC8
                }
                case 0x1:
                {
// switch_1A50_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1AC8
                }
                case 0x2:
                {
// switch_1A50_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1AC8
                }
                case 0x3:
                {
// switch_1A50_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1AC8
                }
                case 0x4:
                {
// switch_1A50_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1AC8
                }
                case 0x5:
                {
// switch_1A50_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1AC8
                }
            }
        }
    }
}
// fun_1C00
fun_1C00() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_14E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C68
fun_1C68() {
    pri = 3104;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3184;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0760(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D10
    pri = 1;
    return pri;
// lab_1D10
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D58
fun_1D58() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DA8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C68(var_8)
    arg_2 = pri;
// lab_1DA8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_14E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E08
fun_1E08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1C00(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E58
fun_1E58() {
    OP_JUMP lab_1E70
// lab_1E70
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EB0
    pri = 0;
    return pri;
// lab_1EB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E70
    pri = 0;
    return pri;
}
// fun_1EF0
fun_1EF0() {
    var_8 = 0;
    pri = fun_1E58()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1FA0
    var_32 = 3232;
    pri = SoundPostEvent(var_32)
// lab_1FA0
    pri = 0;
    return pri;
}
// fun_1FB0
fun_1FB0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FE0
fun_1FE0() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_2040(var_8)
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    pri = fun_20E0(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_2040
fun_2040() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2090
fun_2090() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20E0
fun_20E0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 25;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    OP_JUMP lab_2148
// lab_2148
    pri = EvCameraMoveWait_()
    OP_JZER lab_2180
    pri = 0;
    return pri;
// lab_2180
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2148
    pri = 0;
    return pri;
}
// fun_21C0
fun_21C0() {
    pri = arg_5;
    OP_JNZ lab_21F8
    var_8 = 0;
    pri = fun_0C70()
// lab_21F8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_2248
    OP_CONST_S -8, -1
// lab_2248
    pri = arg_1;
    switch (pri) {
// switch_3D00
        case default:
        {
// switch_3D00_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_41A8
            var_520 = 23152;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0760(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_41A8
            pri = 1;
            OP_JUMP lab_41B0
// lab_41A8
            pri = 0;
// lab_41B0
            OP_JZER lab_4200
            var_8 = 64;
            var_16 = 23248;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4458
// lab_4200
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4268
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4268
            pri = 1;
            OP_JUMP lab_4270
// lab_4268
            pri = 0;
// lab_4270
            OP_JZER lab_43F8
            var_16 = 23424;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0760(var_24, var_16)
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
            var_176 = 23528;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 23544;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_4458
// lab_43F8
            var_8 = 64;
            alt = 3408;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4458
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_44C8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_44C8
            var_8 = 0;
            pri = fun_0CB0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3D00_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1:
        {
// switch_3D00_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2:
        {
// switch_3D00_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x3:
        {
// switch_3D00_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x4:
        {
// switch_3D00_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x5:
        {
// switch_3D00_case_0x5
            var_8 = 2;
            var_16 = 13408;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0998(var_40)
            OP_JUMP switch_3D00_case_default
        }
        case 0x6:
        {
// switch_3D00_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x7:
        {
// switch_3D00_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x8:
        {
// switch_3D00_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x9:
        {
// switch_3D00_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0xa:
        {
// switch_3D00_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0xb:
        {
// switch_3D00_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0xc:
        {
// switch_3D00_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0xd:
        {
// switch_3D00_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14056;
            var_72 = 13880;
            var_80 = 13696;
            var_88 = 13504;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0xe:
        {
// switch_3D00_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14712;
            var_72 = 14504;
            var_80 = 14288;
            var_88 = 14064;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0xf:
        {
// switch_3D00_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15104;
            var_72 = 14984;
            var_80 = 14856;
            var_88 = 14720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x10:
        {
// switch_3D00_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15448;
            var_72 = 15344;
            var_80 = 15232;
            var_88 = 15112;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x11:
        {
// switch_3D00_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15792;
            var_72 = 15688;
            var_80 = 15576;
            var_88 = 15456;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x12:
        {
// switch_3D00_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x13:
        {
// switch_3D00_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x14:
        {
// switch_3D00_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16352;
            var_72 = 16176;
            var_80 = 15992;
            var_88 = 15800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x15:
        {
// switch_3D00_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x16:
        {
// switch_3D00_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x17:
        {
// switch_3D00_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x18:
        {
// switch_3D00_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x19:
        {
// switch_3D00_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1a:
        {
// switch_3D00_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1b:
        {
// switch_3D00_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1c:
        {
// switch_3D00_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 16744;
            var_72 = 16624;
            var_80 = 16496;
            var_88 = 16360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1d:
        {
// switch_3D00_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1e:
        {
// switch_3D00_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 17208;
            var_72 = 17064;
            var_80 = 16912;
            var_88 = 16752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x1f:
        {
// switch_3D00_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x20:
        {
// switch_3D00_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x21:
        {
// switch_3D00_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x22:
        {
// switch_3D00_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x23:
        {
// switch_3D00_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x24:
        {
// switch_3D00_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17576;
            var_72 = 17464;
            var_80 = 17344;
            var_88 = 17216;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x25:
        {
// switch_3D00_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17944;
            var_72 = 17832;
            var_80 = 17712;
            var_88 = 17584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x26:
        {
// switch_3D00_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x27:
        {
// switch_3D00_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x28:
        {
// switch_3D00_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x29:
        {
// switch_3D00_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18384;
            var_72 = 18248;
            var_80 = 18104;
            var_88 = 17952;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2a:
        {
// switch_3D00_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18776;
            var_72 = 18656;
            var_80 = 18528;
            var_88 = 18392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2b:
        {
// switch_3D00_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19192;
            var_72 = 19064;
            var_80 = 18928;
            var_88 = 18784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2c:
        {
// switch_3D00_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19632;
            var_72 = 19496;
            var_80 = 19352;
            var_88 = 19200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2d:
        {
// switch_3D00_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2e:
        {
// switch_3D00_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19952;
            var_72 = 19856;
            var_80 = 19752;
            var_88 = 19640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x2f:
        {
// switch_3D00_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20344;
            var_72 = 20224;
            var_80 = 20096;
            var_88 = 19960;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x30:
        {
// switch_3D00_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20736;
            var_72 = 20616;
            var_80 = 20488;
            var_88 = 20352;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x31:
        {
// switch_3D00_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x32:
        {
// switch_3D00_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x33:
        {
// switch_3D00_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21128;
            var_72 = 21008;
            var_80 = 20880;
            var_88 = 20744;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x34:
        {
// switch_3D00_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21496;
            var_72 = 21384;
            var_80 = 21264;
            var_88 = 21136;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x35:
        {
// switch_3D00_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21984;
            var_72 = 21832;
            var_80 = 21672;
            var_88 = 21504;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x36:
        {
// switch_3D00_case_0x36
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
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x37:
        {
// switch_3D00_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x38:
        {
// switch_3D00_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
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
            pri = fun_09D0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3D00_case_default
        }
        case 0x39:
        {
// switch_3D00_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x3a:
        {
// switch_3D00_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x3b:
        {
// switch_3D00_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x3c:
        {
// switch_3D00_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 22728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x3d:
        {
// switch_3D00_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 22904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
        case 0x3e:
        {
// switch_3D00_case_0x3e
            var_8 = 4;
            var_16 = 23048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            OP_JUMP switch_3D00_case_default
        }
    }
}
// fun_44F8
fun_44F8() {
    pri = arg_4;
    OP_JNZ lab_4530
    var_8 = 0;
    pri = fun_0C70()
// lab_4530
    pri = arg_1;
    switch (pri) {
// switch_5908
        case default:
        {
// switch_5908_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 24120;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_11D8(var_264)
            OP_JZER lab_5ED0
            pri = arg_3;
            switch (pri) {
// switch_5E78
                case default:
                {
// switch_5E78_case_default
                    OP_JUMP lab_6188
// lab_6188
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_61F8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_61F8
                    var_8 = 0;
                    pri = fun_0CB0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5E78_case_0x1
                    var_8 = 32;
                    var_16 = 24272;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5E78_case_default
                }
                case 0x2:
                {
// switch_5E78_case_0x2
                    var_8 = 32;
                    var_16 = 24376;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5E78_case_default
                }
                case 0x3:
                {
// switch_5E78_case_0x3
                    var_8 = 32;
                    var_16 = 24176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5E78_case_default
                }
            }
// lab_5ED0
            pri = arg_1;
            OP_JZER lab_5F20
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5F20
            pri = 0;
            OP_JUMP lab_5F28
// lab_5F20
            pri = 1;
// lab_5F28
            OP_JZER lab_5F90
            var_8 = 24472;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0760(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5F90
            pri = 1;
            OP_JUMP lab_5F98
// lab_5F90
            pri = 0;
// lab_5F98
            OP_JZER lab_5FE8
            var_8 = 32;
            var_16 = 24568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6188
// lab_5FE8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_6050
            var_8 = 32;
            var_16 = 24728;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6188
// lab_6050
            var_16 = 24848;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0760(var_24, var_16)
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
            var_176 = 24952;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 24968;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5908_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1:
        {
// switch_5908_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2:
        {
// switch_5908_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x3:
        {
// switch_5908_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x4:
        {
// switch_5908_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x5:
        {
// switch_5908_case_0x5
            var_8 = 1;
            var_16 = 23600;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0998(var_40)
            OP_JUMP switch_5908_case_default
        }
        case 0x6:
        {
// switch_5908_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x7:
        {
// switch_5908_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x8:
        {
// switch_5908_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x9:
        {
// switch_5908_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0xa:
        {
// switch_5908_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0xb:
        {
// switch_5908_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0xc:
        {
// switch_5908_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0xd:
        {
// switch_5908_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0xe:
        {
// switch_5908_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0xf:
        {
// switch_5908_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x10:
        {
// switch_5908_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x11:
        {
// switch_5908_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x12:
        {
// switch_5908_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x13:
        {
// switch_5908_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x14:
        {
// switch_5908_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x15:
        {
// switch_5908_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x16:
        {
// switch_5908_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x17:
        {
// switch_5908_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x18:
        {
// switch_5908_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x19:
        {
// switch_5908_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1a:
        {
// switch_5908_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1b:
        {
// switch_5908_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1c:
        {
// switch_5908_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1d:
        {
// switch_5908_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1e:
        {
// switch_5908_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x1f:
        {
// switch_5908_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x20:
        {
// switch_5908_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x21:
        {
// switch_5908_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x22:
        {
// switch_5908_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x23:
        {
// switch_5908_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x24:
        {
// switch_5908_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x25:
        {
// switch_5908_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x26:
        {
// switch_5908_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x27:
        {
// switch_5908_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x28:
        {
// switch_5908_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x29:
        {
// switch_5908_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2a:
        {
// switch_5908_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2b:
        {
// switch_5908_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2c:
        {
// switch_5908_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2d:
        {
// switch_5908_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2e:
        {
// switch_5908_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x2f:
        {
// switch_5908_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x30:
        {
// switch_5908_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x31:
        {
// switch_5908_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x32:
        {
// switch_5908_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x33:
        {
// switch_5908_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x34:
        {
// switch_5908_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x35:
        {
// switch_5908_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x36:
        {
// switch_5908_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x37:
        {
// switch_5908_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x38:
        {
// switch_5908_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x39:
        {
// switch_5908_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x3a:
        {
// switch_5908_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x3b:
        {
// switch_5908_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x3c:
        {
// switch_5908_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 23696;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x3d:
        {
// switch_5908_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 23872;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
        case 0x3e:
        {
// switch_5908_case_0x3e
            var_8 = 3;
            var_16 = 24016;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0720(var_24, var_16, var_8)
            OP_JUMP switch_5908_case_default
        }
    }
}
// fun_6228
fun_6228() {
    pri = 25016;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_62B0
// lab_62B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6430
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_6420
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6370
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6370
    pri = 0;
    OP_JUMP lab_6378
// lab_6430
    pri = 0;
    return pri;
// lab_6420
    OP_JUMP lab_62A8
// lab_62A8
    OP_INC_P_S -936
// lab_6370
    pri = 1;
// lab_6378
    OP_JZER lab_63F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_63E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_63F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_63E8
}
// fun_6450
fun_6450() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_6498
    pri = arg_0;
    return pri;
// lab_6498
    pri = arg_1;
    return pri;
}
// fun_64A8
fun_64A8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_6540
    var_8 = 1;
    var_16 = 0;
    var_24 = 25936;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0280(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_02F0()
    var_56 = 0;
    pri = fun_1480()
// lab_6540
    pri = arg_4;
    OP_JZER lab_6578
    var_8 = 1;
    var_16 = 8;
    pri = fun_14A8(var_8)
// lab_6578
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_65D0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_65D0
    pri = 0;
    OP_JUMP lab_65D8
// lab_65D0
    pri = 1;
// lab_65D8
    OP_JZER lab_66A0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_66A0
    var_16 = 0;
    pri = fun_0380()
    OP_JZER lab_6678
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_13C0(var_32, var_24)
    OP_JUMP lab_66A0
// lab_66A0
    pri = arg_2;
    OP_JZER lab_6778
    var_8 = 0;
    pri = fun_0380()
    OP_JZER lab_6748
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0E78(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0460(var_40)
    OP_JUMP lab_6778
// lab_6778
    pri = arg_3;
    OP_JZER lab_67B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1448(var_8)
// lab_67B0
    pri = 0;
    return pri;
// lab_6748
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0E78(var_16, var_8)
// lab_6678
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_13C0(var_16, var_8)
}
// fun_67C0
fun_67C0() {
    var_8 = 26192;
    var_16 = 26184;
    var_24 = 8802641224559852288;
    var_32 = 26136;
    var_40 = 26032;
    var_48 = 25984;
    var_56 = 48;
    pri = fun_03D8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 26200;
    var_80 = 16;
    pri = fun_0498(var_72, var_64)
    pri = arg_0;
    OP_JZER lab_6878
    var_88 = 0;
    pri = fun_6888()
// lab_6878
    pri = 0;
    return pri;
}
// fun_6888
fun_6888() {
    var_8 = 1;
    var_16 = 26296;
    var_24 = 26248;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 26424;
    var_48 = 26376;
    pri = SetAttachModelAnimationStateIntParameter_(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_6900
fun_6900() {
    var_8 = 0;
    var_16 = 26600;
    var_24 = 26552;
    pri = SetAttachModelAnimationStateIntParameter_(var_24, var_16, var_8)
    var_32 = 0;
    var_40 = 26776;
    var_48 = 26728;
    var_56 = 24;
    pri = fun_0CF0(var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_6978
fun_6978() {
    pri = arg_0;
    OP_JZER lab_69B0
    var_8 = 0;
    pri = fun_6900()
// lab_69B0
    var_8 = 26896;
    var_16 = 8;
    pri = fun_0430(var_8)
    pri = 0;
    return pri;
}
// fun_69E0
fun_69E0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_6228(var_24)
    pri = 0;
    return pri;
}
// fun_6A48
fun_6A48() {
    pri = g_mode;
    switch (pri) {
// switch_6B08
        case default:
        {
// switch_6B08_case_default
            pri = CommandNOP()
            OP_JUMP lab_6B50
// lab_6B50
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6B08_case_0x0
            var_8 = 0;
            pri = fun_6B60()
            OP_JUMP lab_6B50
        }
        case 0x168b7117fce4b566:
        {
// switch_6B08_case_0x168b7117fce4b566
            var_8 = 0;
            pri = fun_8610()
            OP_JUMP lab_6B50
        }
        case 0x34215b1b8707f6e2:
        {
// switch_6B08_case_0x34215b1b8707f6e2
            var_8 = 0;
            pri = fun_8520()
            OP_JUMP lab_6B50
        }
    }
}
// fun_6B60
fun_6B60() {
    pri = 0;
    return pri;
}
// fun_6B78
fun_6B78() {
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = var_8;
    OP_EQ_C_PRI 3133527603482252227
    OP_JZER lab_6BF0
    pri = 8838721707033461072;
    return pri;
// lab_6BF0
    pri = -2664763386676178833;
    return pri;
}
// fun_6C10
fun_6C10() {
    pri = PlayerGetZoneID()
    var_8 = pri;
    pri = var_8;
    OP_EQ_C_PRI 3133527603482252227
    OP_JZER lab_6C88
    pri = -4060473859728235179;
    return pri;
// lab_6C88
    pri = 8264757426734906200;
    return pri;
}
// fun_6CA8
fun_6CA8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_64A8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6D00
fun_6D00() {
    pri = 0;
    return pri;
}
// fun_6D18
fun_6D18() {
    pri = 0;
    return pri;
}
// fun_6D30
fun_6D30() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    pri = fun_1FE0()
    var_32 = 1;
    var_40 = 1103;
    var_48 = 1104;
    var_56 = 16;
    pri = fun_6450(var_48, var_40)
    var_64 = pri;
    var_72 = 1;
    var_80 = 24;
    pri = fun_2090(var_72, var_64, var_56)
    var_88 = 26944;
    pri = SoundPostEvent(var_88)
    var_96 = 0;
    var_104 = 4631727036769186611;
    var_112 = 3;
    OP_PUSH5_C 4655890256144912876, -4589356608524931564, 4657484613975885742, 4657410704804266639, 4638742800563699712
    var_120 = 4657564130656806502;
    var_128 = 20;
    pri = EvCameraMove(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 0;
    pri = fun_2130()
    var_144 = 3;
    var_152 = 0;
    var_160 = -6414050585072490134;
    var_168 = 24;
    pri = fun_1E08(var_160, var_152, var_144)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1EF0(var_176)
    var_192 = 0;
    pri = fun_1FB0()
    var_200 = 0;
    var_208 = 4631727036769186611;
    var_216 = 0;
    OP_PUSH5_C 4655933400981186806, -4587533354363288289, 4657471419836352430, 4657999229398150021, 4641339407223855514
    var_224 = 4657591750388896236;
    var_232 = 1;
    pri = EvCameraMove(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_240 = 0;
    pri = fun_2130()
    var_248 = 0;
    var_256 = 4631727036769186611;
    var_264 = 3;
    OP_PUSH5_C 4655933400981186806, -4587533354363288289, 4657471419836352430, 4658079207873954447, 4641827414464727613
    var_272 = 4657597511829825782;
    var_280 = 120;
    pri = EvCameraMove(var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 1;
    var_296 = 1;
    var_304 = -1;
    var_312 = -1;
    var_320 = 0;
    var_328 = 3;
    var_336 = 0;
    pri = fun_6B78()
    var_344 = pri;
    var_352 = 56;
    pri = fun_21C0(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 1;
    var_368 = 1;
    var_376 = -1;
    var_384 = -1;
    var_392 = 0;
    var_400 = 3;
    var_408 = 0;
    pri = fun_6C10()
    var_416 = pri;
    var_424 = 56;
    pri = fun_21C0(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_456 = 1;
    var_464 = 48;
    pri = fun_1038(var_456, var_448, var_440, var_432, var_424, var_416)
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    var_496 = 0;
    pri = float(var_496)
    var_504 = pri;
    var_512 = 8802641224559852288;
    var_520 = 40;
    pri = fun_0550(var_512, var_504, var_496, var_488, var_480)
    var_528 = 8802641224559852288;
    var_536 = 8;
    pri = fun_05F8(var_528)
    var_544 = 25;
    var_552 = 8;
    pri = fun_0060(var_544)
    var_560 = 1;
    var_568 = 3;
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    pri = fun_6B78()
    var_600 = pri;
    var_608 = 40;
    pri = fun_44F8(var_600, var_592, var_584, var_576, var_568)
    var_616 = 1;
    var_624 = 3;
    var_632 = 0;
    var_640 = 3;
    var_648 = 0;
    pri = fun_6C10()
    var_656 = pri;
    var_664 = 40;
    pri = fun_44F8(var_656, var_648, var_640, var_632, var_624)
    var_672 = 1;
    var_680 = 0;
    var_688 = 0;
    var_696 = 4607182418800017408;
    var_704 = 0;
    pri = fun_6B78()
    var_712 = pri;
    var_720 = 0;
    var_728 = 48;
    pri = fun_1038(var_720, var_712, var_704, var_696, var_688, var_680)
    var_736 = 0;
    pri = fun_6B78()
    var_744 = pri;
    var_752 = 8;
    pri = fun_0798(var_744)
    var_760 = 0;
    pri = fun_6C10()
    var_768 = pri;
    var_776 = 8;
    pri = fun_0798(var_768)
    var_784 = 15;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    var_824 = 0;
    var_832 = 8802641224559852288;
    var_840 = 0;
    pri = fun_6B78()
    var_848 = pri;
    var_856 = 48;
    pri = fun_05A0(var_848, var_840, var_832, var_824, var_816, var_808)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 0;
    var_896 = 8802641224559852288;
    var_904 = 0;
    pri = fun_6C10()
    var_912 = pri;
    var_920 = 48;
    pri = fun_05A0(var_912, var_904, var_896, var_888, var_880, var_872)
    var_928 = 0;
    var_936 = 3;
    var_944 = 0;
    var_952 = 100;
    var_960 = -1;
    var_968 = -5217172506580506245;
    var_976 = 0;
    pri = fun_6B78()
    var_984 = pri;
    var_992 = 56;
    pri = fun_1D58(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 0;
    pri = fun_6B78()
    var_1008 = pri;
    var_1016 = 8;
    pri = fun_05F8(var_1008)
    var_1024 = 0;
    pri = fun_6C10()
    var_1032 = pri;
    var_1040 = 8;
    pri = fun_05F8(var_1032)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_1EF0(var_1048)
    var_1064 = 0;
    pri = fun_1FB0()
    var_1072 = 27120;
    pri = SoundPostEvent(var_1072)
    var_1080 = 1;
    var_1088 = 8;
    pri = fun_67C0(var_1080)
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 100;
    var_1120 = 582712976546147872;
    var_1128 = 32;
    pri = fun_1C00(var_1120, var_1112, var_1104, var_1096)
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_1EF0(var_1136)
    var_1152 = 0;
    pri = fun_1FB0()
    var_1160 = 1;
    var_1168 = 1;
    var_1176 = -1;
    var_1184 = -1;
    var_1192 = 0;
    var_1200 = 12;
    var_1208 = 0;
    pri = fun_6B78()
    var_1216 = pri;
    var_1224 = 56;
    pri = fun_21C0(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 100;
    var_1264 = -1;
    var_1272 = -5217171407068878034;
    var_1280 = 0;
    pri = fun_6B78()
    var_1288 = pri;
    var_1296 = 56;
    pri = fun_1D58(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_1EF0(var_1304)
    var_1320 = 0;
    pri = fun_1FB0()
    var_1328 = 1;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 12;
    var_1360 = 0;
    pri = fun_6B78()
    var_1368 = pri;
    var_1376 = 40;
    pri = fun_44F8(var_1368, var_1360, var_1352, var_1344, var_1336)
    var_1384 = 3;
    var_1392 = 0;
    var_1400 = 100;
    var_1408 = 582716275081032505;
    var_1416 = 32;
    pri = fun_1C00(var_1408, var_1400, var_1392, var_1384)
    var_1424 = 0;
    pri = fun_6B78()
    var_1432 = pri;
    var_1440 = 8;
    pri = fun_0798(var_1432)
    var_1448 = 1;
    var_1456 = 8;
    pri = fun_1EF0(var_1448)
    var_1464 = 0;
    pri = fun_1FB0()
    var_1472 = 27320;
    pri = SoundPostEvent(var_1472)
    var_1480 = 3;
    var_1488 = 0;
    var_1496 = -6414051684584118345;
    var_1504 = 24;
    pri = fun_1E08(var_1496, var_1488, var_1480)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_1EF0(var_1512)
    var_1528 = 0;
    pri = fun_1FB0()
    var_1536 = 1;
    var_1544 = 8;
    pri = fun_6978(var_1536)
    var_1552 = 1;
    var_1560 = 1;
    var_1568 = -1;
    var_1576 = -1;
    var_1584 = 0;
    var_1592 = 6;
    var_1600 = 0;
    pri = fun_6C10()
    var_1608 = pri;
    var_1616 = 56;
    pri = fun_21C0(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1624 = 0;
    var_1632 = 3;
    var_1640 = 0;
    var_1648 = 100;
    var_1656 = -1;
    var_1664 = -4358340958768954970;
    var_1672 = 0;
    pri = fun_6C10()
    var_1680 = pri;
    var_1688 = 56;
    pri = fun_1D58(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 1;
    var_1704 = 8;
    pri = fun_1EF0(var_1696)
    var_1712 = 0;
    pri = fun_1FB0()
    var_1720 = 1;
    var_1728 = 1;
    var_1736 = -1;
    var_1744 = 0;
    pri = fun_6B78()
    var_1752 = pri;
    var_1760 = 8802641224559852288;
    var_1768 = 40;
    pri = fun_0E20(var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1776 = 1;
    var_1784 = 3;
    var_1792 = 0;
    var_1800 = 6;
    var_1808 = 0;
    pri = fun_6C10()
    var_1816 = pri;
    var_1824 = 40;
    pri = fun_44F8(var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1832 = 1;
    var_1840 = 1;
    var_1848 = -1;
    var_1856 = -1;
    var_1864 = 0;
    var_1872 = 8;
    var_1880 = 0;
    pri = fun_6B78()
    var_1888 = pri;
    var_1896 = 56;
    pri = fun_21C0(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    var_1904 = 0;
    var_1912 = 3;
    var_1920 = 0;
    var_1928 = 100;
    var_1936 = -1;
    var_1944 = -5217170307557249823;
    var_1952 = 0;
    pri = fun_6B78()
    var_1960 = pri;
    var_1968 = 56;
    pri = fun_1D58(var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1976 = 0;
    pri = fun_6C10()
    var_1984 = pri;
    var_1992 = 8;
    pri = fun_0798(var_1984)
    var_2000 = 1;
    var_2008 = 8;
    pri = fun_1EF0(var_2000)
    var_2016 = 0;
    pri = fun_1FB0()
    var_2024 = 1;
    var_2032 = 3;
    var_2040 = 0;
    var_2048 = 8;
    var_2056 = 0;
    pri = fun_6B78()
    var_2064 = pri;
    var_2072 = 40;
    pri = fun_44F8(var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2080 = 0;
    pri = fun_6B78()
    var_2088 = pri;
    var_2096 = 8;
    pri = fun_0798(var_2088)
    var_2104 = 1;
    var_2112 = 0;
    var_2120 = 4641240890982006784;
    var_2128 = 0;
    var_2136 = 0;
    var_2144 = 3012;
    pri = float(var_2144)
    var_2152 = pri;
    OP_PUSH2_C 4657740162468413440, 4611686018427387904
    var_2160 = 0;
    pri = fun_6B78()
    var_2168 = pri;
    var_2176 = 72;
    pri = fun_04D8(var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104)
    var_2184 = 0;
    var_2192 = 0;
    var_2200 = 0;
    var_2208 = 10;
    pri = float(var_2208)
    var_2216 = pri;
    var_2224 = 0;
    pri = fun_6C10()
    var_2232 = pri;
    var_2240 = 40;
    pri = fun_0550(var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2248 = 0;
    var_2256 = 3;
    var_2264 = 0;
    var_2272 = 100;
    var_2280 = -1;
    var_2288 = -5217169208045621612;
    var_2296 = 0;
    pri = fun_6B78()
    var_2304 = pri;
    var_2312 = 56;
    pri = fun_1D58(var_2304, var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2320 = 0;
    pri = fun_6B78()
    var_2328 = pri;
    var_2336 = 8;
    pri = fun_05F8(var_2328)
    var_2344 = 0;
    pri = fun_6C10()
    var_2352 = pri;
    var_2360 = 8;
    pri = fun_05F8(var_2352)
    var_2368 = 1;
    var_2376 = 8;
    pri = fun_1EF0(var_2368)
    var_2384 = 0;
    pri = fun_1FB0()
    var_2392 = 1;
    var_2400 = 1;
    var_2408 = -1;
    var_2416 = 0;
    pri = fun_6C10()
    var_2424 = pri;
    var_2432 = 8802641224559852288;
    var_2440 = 40;
    pri = fun_0E20(var_2432, var_2424, var_2416, var_2408, var_2400)
    var_2448 = 5;
    var_2456 = 0;
    pri = fun_6C10()
    var_2464 = pri;
    var_2472 = 16;
    pri = fun_0EB8(var_2464, var_2456)
    var_2480 = 1;
    var_2488 = 1;
    var_2496 = -1;
    var_2504 = -1;
    var_2512 = 0;
    var_2520 = 1;
    var_2528 = 0;
    pri = fun_6C10()
    var_2536 = pri;
    var_2544 = 56;
    pri = fun_21C0(var_2536, var_2528, var_2520, var_2512, var_2504, var_2496, var_2488)
    var_2552 = 27504;
    pri = SoundPostEvent(var_2552)
    var_2560 = 0;
    var_2568 = 3;
    var_2576 = 0;
    var_2584 = 100;
    var_2592 = -1;
    var_2600 = -4358342058280583181;
    var_2608 = 0;
    pri = fun_6C10()
    var_2616 = pri;
    var_2624 = 56;
    pri = fun_1D58(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568)
    var_2632 = 1;
    var_2640 = 8;
    pri = fun_1EF0(var_2632)
    var_2648 = 0;
    pri = fun_1FB0()
    var_2656 = 1;
    var_2664 = 3;
    var_2672 = 0;
    var_2680 = 1;
    var_2688 = 0;
    pri = fun_6C10()
    var_2696 = pri;
    var_2704 = 40;
    pri = fun_44F8(var_2696, var_2688, var_2680, var_2672, var_2664)
    var_2712 = 0;
    pri = fun_6C10()
    var_2720 = pri;
    var_2728 = 8;
    pri = fun_0798(var_2720)
    var_2736 = 0;
    pri = fun_6C10()
    var_2744 = pri;
    var_2752 = 8;
    pri = fun_0EF8(var_2744)
    var_2760 = 60;
    var_2768 = 8802641224559852288;
    var_2776 = 16;
    pri = fun_0E78(var_2768, var_2760)
    var_2784 = 1;
    var_2792 = 0;
    var_2800 = 4641240890982006784;
    var_2808 = 0;
    var_2816 = 0;
    var_2824 = 2804;
    pri = float(var_2824)
    var_2832 = pri;
    OP_PUSH2_C 4657350935352180736, 4607182418800017408
    var_2840 = 0;
    pri = fun_6C10()
    var_2848 = pri;
    var_2856 = 72;
    pri = fun_04D8(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784)
    var_2864 = 0;
    var_2872 = 3;
    var_2880 = 0;
    var_2888 = 100;
    var_2896 = -1;
    var_2904 = -4358343157792211392;
    var_2912 = 0;
    pri = fun_6C10()
    var_2920 = pri;
    var_2928 = 56;
    pri = fun_1D58(var_2920, var_2912, var_2904, var_2896, var_2888, var_2880, var_2872)
    var_2936 = 0;
    pri = fun_6C10()
    var_2944 = pri;
    var_2952 = 8;
    pri = fun_05F8(var_2944)
    var_2960 = 27752;
    pri = SoundPostEvent(var_2960)
    var_2968 = 1;
    var_2976 = 8;
    pri = fun_1EF0(var_2968)
    var_2984 = 0;
    pri = fun_1FB0()
    var_2992 = 3;
    var_3000 = 30;
    pri = EvCameraEnd(var_3000, var_2992)
    pri = 0;
    return pri;
}
// fun_8380
fun_8380() {
    pri = 0;
    return pri;
}
// fun_8398
fun_8398() {
    var_8 = 0;
    pri = fun_6B78()
    var_16 = pri;
    var_24 = 8;
    pri = fun_03A8(var_16)
    var_32 = 0;
    pri = fun_6C10()
    var_40 = pri;
    var_48 = 8;
    pri = fun_03A8(var_40)
    var_56 = 3095;
    var_64 = 8;
    pri = fun_69E0(var_56)
    var_72 = 8389417158930239541;
    pri = VanishFlagSet(var_72)
    var_80 = -2664763386676178833;
    pri = VanishFlagSet(var_80)
    var_88 = 6086521948512369532;
    pri = VanishFlagSet(var_88)
    var_96 = -8752830076052889270;
    pri = FlagSet(var_96)
    var_104 = -8752828976541261059;
    pri = FlagReset(var_104)
    pri = 0;
    return pri;
}
// fun_8508
fun_8508() {
    pri = 0;
    return pri;
}
// fun_8520
fun_8520() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6CA8()
    var_16 = 0;
    pri = fun_6D00()
    var_24 = 0;
    pri = fun_6D18()
    var_32 = 0;
    pri = fun_6D30()
    var_40 = 0;
    pri = fun_8380()
    var_48 = 0;
    pri = fun_8398()
    var_56 = 0;
    pri = fun_8508()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_8610
fun_8610() {
    var_8 = 0;
    pri = fun_6D00()
    var_16 = 0;
    pri = fun_8398()
    pri = 0;
    return pri;
}
