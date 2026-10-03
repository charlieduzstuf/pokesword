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
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0440
fun_0440() {
    OP_JUMP lab_0458
// lab_0458
    pri = IsLoadedLogoFade_()
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0458
    pri = 0;
    return pri;
}
// fun_04D0
fun_04D0() {
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
// fun_0570
fun_0570() {
    pri = arg_8;
    OP_JZER lab_05E0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_05E0
    var_8 = arg_9;
    var_16 = 0;
    var_24 = arg_7;
    var_32 = arg_6;
    var_40 = arg_5;
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = arg_1;
    var_72 = arg_0;
    var_80 = 72;
    pri = fun_04D0(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0988(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_06D0
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0280(var_128, var_120)
    var_144 = 0;
    pri = fun_0350()
// lab_06D0
    pri = 0;
    return pri;
}
// fun_06E0
fun_06E0() {
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
// fun_07A0
fun_07A0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_07E8
// lab_07E8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0828
    OP_JUMP lab_0898
// lab_0828
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0868
    OP_JUMP lab_0898
// lab_0868
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07E8
// lab_0898
    pri = 0;
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_08E0
fun_08E0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0930
fun_0930() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0988
fun_0988() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0A00
fun_0A00() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0A38
fun_0A38() {
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
// fun_0AB0
fun_0AB0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1080(var_8)
    OP_JZER lab_0BD0
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_10B0(var_24)
    OP_JNZ lab_0BD0
    pri = 0;
    return pri;
// lab_0BD0
    OP_JUMP lab_0BE0
// lab_0BE0
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0C40
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0C40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0BE0
    pri = 0;
    return pri;
}
// fun_0C80
fun_0C80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0CF8
fun_0CF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0D30
fun_0D30() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0D78
    pri = 0;
    return pri;
// lab_0D78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DB8
// lab_0DB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1080(var_8)
    OP_JNZ lab_0E40
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0E30
    pri = 0;
    return pri;
// lab_0E40
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0E88
    pri = 0;
    return pri;
// lab_0E88
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0EE8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F30(var_8)
    pri = 0;
    return pri;
// lab_0EE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DB8
    pri = 0;
    return pri;
// lab_0E30
    OP_JUMP lab_0E88
}
// fun_0F30
fun_0F30() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
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
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1080
fun_1080() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_10B0
fun_10B0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_10E0
fun_10E0() {
    OP_JUMP lab_10F8
// lab_10F8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1188
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1178
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D30(var_8)
    pri = 0;
    return pri;
// lab_1188
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1218
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1208
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D30(var_8)
    pri = 0;
    return pri;
// lab_1218
    pri = 0;
    return pri;
// lab_1208
    OP_JUMP lab_1228
// lab_1228
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10F8
    pri = 0;
    return pri;
// lab_1178
    OP_JUMP lab_1228
}
// fun_1268
fun_1268() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0D30(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_10E0(var_40)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1328
fun_1328() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1380
fun_1380() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_13B8
fun_13B8() {
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
// switch_19D0
        case default:
        {
// switch_19D0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A18
// lab_1A18
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
            OP_JNZ lab_1AC0
            var_88 = 0;
            pri = fun_1EC0()
// lab_1AC0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19D0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15B8
                case default:
                {
// switch_15B8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1630
// lab_1630
                    OP_JUMP lab_1A18
                }
                case 0x0:
                {
// switch_15B8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1630
                }
                case 0x1:
                {
// switch_15B8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1630
                }
                case 0x2:
                {
// switch_15B8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1630
                }
                case 0x3:
                {
// switch_15B8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1630
                }
                case 0x4:
                {
// switch_15B8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1630
                }
                case 0x5:
                {
// switch_15B8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1630
                }
            }
        }
        case 0x65:
        {
// switch_19D0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1770
                case default:
                {
// switch_1770_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17E8
// lab_17E8
                    OP_JUMP lab_1A18
                }
                case 0x0:
                {
// switch_1770_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_17E8
                }
                case 0x1:
                {
// switch_1770_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_17E8
                }
                case 0x2:
                {
// switch_1770_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_17E8
                }
                case 0x3:
                {
// switch_1770_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_17E8
                }
                case 0x4:
                {
// switch_1770_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_17E8
                }
                case 0x5:
                {
// switch_1770_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_17E8
                }
            }
        }
        case 0x66:
        {
// switch_19D0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1928
                case default:
                {
// switch_1928_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19A0
// lab_19A0
                    OP_JUMP lab_1A18
                }
                case 0x0:
                {
// switch_1928_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19A0
                }
                case 0x1:
                {
// switch_1928_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19A0
                }
                case 0x2:
                {
// switch_1928_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19A0
                }
                case 0x3:
                {
// switch_1928_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19A0
                }
                case 0x4:
                {
// switch_1928_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19A0
                }
                case 0x5:
                {
// switch_1928_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19A0
                }
            }
        }
    }
}
// fun_1AD8
fun_1AD8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_13B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B40
fun_1B40() {
    pri = 128;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 208;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0CF8(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1BE8
    pri = 1;
    return pri;
// lab_1BE8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C30
fun_1C30() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1C80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B40(var_8)
    arg_2 = pri;
// lab_1C80
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13B8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CE0
fun_1CE0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B40(var_8)
    arg_2 = pri;
// lab_1D30
    var_8 = arg_6;
    var_16 = arg_5;
    pri = arg_4;
    alt = 1;
    pri |= alt;
    var_24 = pri;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DA8
fun_1DA8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1AD8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DF8
fun_1DF8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1DA8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E58
fun_1E58() {
    var_8 = 3;
    pri = arg_1;
    alt = 4;
    pri |= alt;
    var_16 = pri;
    var_24 = 47;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1AD8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1EC0
fun_1EC0() {
    OP_JUMP lab_1ED8
// lab_1ED8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1F18
    pri = 0;
    return pri;
// lab_1F18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1ED8
    pri = 0;
    return pri;
}
// fun_1F58
fun_1F58() {
    var_8 = 0;
    pri = fun_1EC0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2008
    var_32 = 256;
    pri = SoundPostEvent(var_32)
// lab_2008
    pri = 0;
    return pri;
}
// fun_2018
fun_2018() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2048
fun_2048() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2078
// lab_2078
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_20B8
    OP_JUMP lab_20E8
// lab_20B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2078
// lab_20E8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
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
// fun_21A0
fun_21A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2218()
    return pri;
}
// fun_2218
fun_2218() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2258
fun_2258() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2290
fun_2290() {
    OP_JUMP lab_22A8
// lab_22A8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_22F0
    OP_JUMP lab_2320
    OP_JUMP lab_2310
// lab_22F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2320
    pri = 0;
    return pri;
// lab_2310
    OP_JUMP lab_22A8
}
// fun_2330
fun_2330() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2360
fun_2360() {
    pri = arg_1;
    OP_JNZ lab_23A8
    var_8 = 432;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_23A8
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
// fun_2400
fun_2400() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2478
fun_2478() {
    var_8 = 0;
    pri = fun_2400()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_24F8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_24F8
    pri = 1;
    return pri;
// lab_24F8
    var_8 = 0;
    pri = fun_2400()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2538
    pri = 1;
    return pri;
// lab_2538
    var_8 = 0;
    pri = fun_2400()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2568
fun_2568() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_25B8
fun_25B8() {
    pri = arg_4;
    OP_JNZ lab_25F0
    var_8 = 0;
    pri = fun_0F68()
// lab_25F0
    pri = arg_1;
    switch (pri) {
// switch_39C8
        case default:
        {
// switch_39C8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 960;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1080(var_264)
            OP_JZER lab_3F90
            pri = arg_3;
            switch (pri) {
// switch_3F38
                case default:
                {
// switch_3F38_case_default
                    OP_JUMP lab_4248
// lab_4248
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_42B8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_42B8
                    var_8 = 0;
                    pri = fun_0FA8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_3F38_case_0x1
                    var_8 = 32;
                    var_16 = 1112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3F38_case_default
                }
                case 0x2:
                {
// switch_3F38_case_0x2
                    var_8 = 32;
                    var_16 = 1216;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3F38_case_default
                }
                case 0x3:
                {
// switch_3F38_case_0x3
                    var_8 = 32;
                    var_16 = 1016;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_3F38_case_default
                }
            }
// lab_3F90
            pri = arg_1;
            OP_JZER lab_3FE0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_3FE0
            pri = 0;
            OP_JUMP lab_3FE8
// lab_3FE0
            pri = 1;
// lab_3FE8
            OP_JZER lab_4050
            var_8 = 1312;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0CF8(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4050
            pri = 1;
            OP_JUMP lab_4058
// lab_4050
            pri = 0;
// lab_4058
            OP_JZER lab_40A8
            var_8 = 32;
            var_16 = 1408;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4248
// lab_40A8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_4110
            var_8 = 32;
            var_16 = 1568;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_4248
// lab_4110
            var_16 = 1688;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0CF8(var_24, var_16)
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
            var_176 = 1792;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 1808;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_39C8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1:
        {
// switch_39C8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2:
        {
// switch_39C8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x3:
        {
// switch_39C8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x4:
        {
// switch_39C8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x5:
        {
// switch_39C8_case_0x5
            var_8 = 1;
            var_16 = 440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CB8(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0F30(var_40)
            OP_JUMP switch_39C8_case_default
        }
        case 0x6:
        {
// switch_39C8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x7:
        {
// switch_39C8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x8:
        {
// switch_39C8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x9:
        {
// switch_39C8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0xa:
        {
// switch_39C8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0xb:
        {
// switch_39C8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0xc:
        {
// switch_39C8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0xd:
        {
// switch_39C8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0xe:
        {
// switch_39C8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0xf:
        {
// switch_39C8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x10:
        {
// switch_39C8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x11:
        {
// switch_39C8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x12:
        {
// switch_39C8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x13:
        {
// switch_39C8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x14:
        {
// switch_39C8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x15:
        {
// switch_39C8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x16:
        {
// switch_39C8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x17:
        {
// switch_39C8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x18:
        {
// switch_39C8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x19:
        {
// switch_39C8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1a:
        {
// switch_39C8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1b:
        {
// switch_39C8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1c:
        {
// switch_39C8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1d:
        {
// switch_39C8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1e:
        {
// switch_39C8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x1f:
        {
// switch_39C8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x20:
        {
// switch_39C8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x21:
        {
// switch_39C8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x22:
        {
// switch_39C8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x23:
        {
// switch_39C8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x24:
        {
// switch_39C8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x25:
        {
// switch_39C8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x26:
        {
// switch_39C8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x27:
        {
// switch_39C8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x28:
        {
// switch_39C8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x29:
        {
// switch_39C8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2a:
        {
// switch_39C8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2b:
        {
// switch_39C8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2c:
        {
// switch_39C8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2d:
        {
// switch_39C8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2e:
        {
// switch_39C8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x2f:
        {
// switch_39C8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x30:
        {
// switch_39C8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x31:
        {
// switch_39C8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x32:
        {
// switch_39C8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x33:
        {
// switch_39C8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x34:
        {
// switch_39C8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x35:
        {
// switch_39C8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x36:
        {
// switch_39C8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x37:
        {
// switch_39C8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x38:
        {
// switch_39C8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x39:
        {
// switch_39C8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x3a:
        {
// switch_39C8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x3b:
        {
// switch_39C8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x3c:
        {
// switch_39C8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 536;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x3d:
        {
// switch_39C8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 712;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
        case 0x3e:
        {
// switch_39C8_case_0x3e
            var_8 = 3;
            var_16 = 856;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0CB8(var_24, var_16, var_8)
            OP_JUMP switch_39C8_case_default
        }
    }
}
// fun_42E8
fun_42E8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_43E8
        case default:
        {
// switch_43E8_case_default
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
// switch_43E8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_43E8_case_default
        }
        case 0x1:
        {
// switch_43E8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_43E8_case_default
        }
        case 0x2:
        {
// switch_43E8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_43E8_case_default
        }
        case 0x3:
        {
// switch_43E8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_43E8_case_default
        }
    }
}
// fun_44A8
fun_44A8() {
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
    pri = fun_1C30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_1EC0()
    pri = 0;
    return pri;
}
// fun_4540
fun_4540() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_42E8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_44A8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_45E8
fun_45E8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_4638
// lab_4638
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 1856;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_46B0
    OP_JUMP lab_46E0
// lab_46B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_4638
// lab_46E0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_4768
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_25B8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1350(var_56)
// lab_4768
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_47D0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1040(var_24, var_16)
// lab_47D0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_4890
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0D30(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0AB0(var_88, var_80, var_72, var_64, var_56)
// lab_4890
    pri = IsPlayerRideBicycle()
    OP_JZER lab_48D0
    pri = 0;
    return pri;
// lab_48D0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4A18
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 1976;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0C80(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_49E0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_4A18
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B58(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0B58(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0D30(var_40)
    pri = 0;
    return pri;
// lab_49E0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
}
// fun_4AA0
fun_4AA0() {
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
    pri = fun_4540(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1F58(var_112)
    var_128 = 0;
    pri = fun_2018()
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
    pri = fun_45E8(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_4C18
fun_4C18() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2258(var_8)
    var_24 = 0;
    pri = fun_2290()
    pri = arg_8;
    alt = 1;
    pri |= alt;
    arg_8 = pri;
    var_32 = arg_10;
    var_40 = arg_9;
    var_48 = arg_8;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = arg_4;
    var_88 = arg_3;
    var_96 = arg_2;
    var_104 = arg_1;
    var_112 = 80;
    pri = fun_4AA0(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_2330()
    pri = 0;
    return pri;
}
// fun_4D08
fun_4D08() {
    pri = 2112;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4D90
// lab_4D90
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4F10
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4F00
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_4E50
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_4E50
    pri = 0;
    OP_JUMP lab_4E58
// lab_4F10
    pri = 0;
    return pri;
// lab_4F00
    OP_JUMP lab_4D88
// lab_4D88
    OP_INC_P_S -936
// lab_4E50
    pri = 1;
// lab_4E58
    OP_JZER lab_4ED0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4EC8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4ED0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4EC8
}
// fun_4F30
fun_4F30() {
    var_8 = arg_8;
    var_16 = arg_7;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = 8802641224559852288;
    pri = GetFieldObjectPositionZ_(var_48)
    OP_MOVE_ALT 
    pri = arg_3;
    var_56 = pri;
    var_64 = alt;
    pri = floatadd(var_64, var_56)
    var_72 = pri;
    var_80 = 8802641224559852288;
    pri = GetFieldObjectPositionX_(var_80)
    OP_MOVE_ALT 
    pri = arg_2;
    var_88 = pri;
    var_96 = alt;
    pri = floatadd(var_96, var_88)
    var_104 = pri;
    var_112 = arg_1;
    var_120 = arg_0;
    var_128 = 72;
    pri = fun_0A38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    pri = 0;
    return pri;
}
// fun_5068
fun_5068() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_5100
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1328()
// lab_5100
    pri = arg_4;
    OP_JZER lab_5138
    var_8 = 1;
    var_16 = 8;
    pri = fun_1380(var_8)
// lab_5138
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_5190
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_5190
    pri = 0;
    OP_JUMP lab_5198
// lab_5190
    pri = 1;
// lab_5198
    OP_JZER lab_5260
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_5260
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_5238
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1268(var_32, var_24)
    OP_JUMP lab_5260
// lab_5260
    pri = arg_2;
    OP_JZER lab_5338
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_5308
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1040(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0A00(var_40)
    OP_JUMP lab_5338
// lab_5338
    pri = arg_3;
    OP_JZER lab_5370
    var_8 = 1;
    var_16 = 8;
    pri = fun_12F0(var_8)
// lab_5370
    pri = 0;
    return pri;
// lab_5308
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1040(var_16, var_8)
// lab_5238
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1268(var_16, var_8)
}
// fun_5380
fun_5380() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 8802641224559852288;
    var_24 = 8;
    pri = fun_0B58(var_16)
    var_32 = 1;
    var_40 = 1;
    var_48 = 0;
    var_56 = 1;
    var_64 = 1;
    var_72 = arg_0;
    var_80 = 48;
    pri = fun_42E8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    pri = arg_1;
    OP_LOAD_I 
    var_128 = pri;
    var_136 = arg_0;
    var_144 = 56;
    pri = fun_1C30(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1F58(var_152)
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    alt = -1;
    OP_JEQ lab_5518
    var_168 = 0;
    pri = arg_1;
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_176 = pri;
    var_184 = 0;
    var_192 = 24;
    pri = fun_2048(var_184, var_176, var_168)
// lab_5518
    var_8 = 0;
    pri = arg_1;
    OP_ADD_P_C 16
    OP_LOAD_I 
    var_16 = pri;
    var_24 = 1;
    var_32 = 24;
    pri = fun_2048(var_24, var_16, var_8)
    var_40 = 0;
    pri = arg_1;
    OP_ADD_P_C 24
    OP_LOAD_I 
    var_48 = pri;
    var_56 = 2;
    var_64 = 24;
    pri = fun_2048(var_56, var_48, var_40)
    var_80 = 0;
    var_88 = 1;
    var_96 = 0;
    var_104 = 1;
    var_112 = 32;
    pri = fun_2130(var_104, var_96, var_88, var_80)
    var_16 = pri;
    pri = var_16;
    switch (pri) {
// switch_5D80
        case default:
        {
// switch_5D80_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5D80_case_0x0
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 32
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1C30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1F58(var_72)
            var_88 = 0;
            pri = fun_2018()
            var_96 = 0;
            var_104 = 0;
            var_112 = 0;
            var_120 = arg_0;
            var_128 = 32;
            pri = fun_45E8(var_120, var_112, var_104, var_96)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_57E0
            var_136 = 1;
            var_144 = 0;
            var_152 = 4641240890982006784;
            var_160 = 0;
            var_168 = 0;
            var_176 = arg_3;
            pri = float(var_176)
            var_184 = pri;
            var_192 = arg_2;
            pri = float(var_192)
            var_200 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_208 = 72;
            pri = fun_0A38(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
            var_216 = 8802641224559852288;
            var_224 = 8;
            pri = fun_0B58(var_216)
// lab_57E0
            OP_JUMP switch_5D80_case_default
        }
        case 0x1:
        {
// switch_5D80_case_0x1
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 40
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1C30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1F58(var_72)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 0;
            var_144 = 48;
            pri = fun_21A0(var_136, var_128, var_120, var_112, var_104, var_96)
            var_24 = pri;
            pri = var_24;
            OP_EQ_P_C_PRI 1
            OP_JZER lab_5A00
            var_152 = 0;
            var_160 = 3;
            var_168 = 0;
            var_176 = 100;
            var_184 = -1;
            pri = arg_1;
            OP_ADD_P_C 48
            OP_LOAD_I 
            var_192 = pri;
            var_200 = arg_0;
            var_208 = 56;
            pri = fun_1C30(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
            var_216 = 1;
            var_224 = 8;
            pri = fun_1F58(var_216)
            var_232 = 0;
            pri = fun_2018()
            var_240 = 0;
            var_248 = 0;
            var_256 = 0;
            var_264 = arg_0;
            var_272 = 32;
            pri = fun_45E8(var_264, var_256, var_248, var_240)
            var_280 = 3032;
            pri = SoundPostEvent(var_280)
            pri = 1;
            return pri;
// lab_5A00
            var_8 = 0;
            pri = fun_2018()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_45E8(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_5B50
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0A38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0B58(var_136)
// lab_5B50
            OP_JUMP switch_5D80_case_default
        }
        case 0x2:
        {
// switch_5D80_case_0x2
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            alt = -1;
            OP_JEQ lab_5C20
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            pri = arg_1;
            OP_ADD_P_C 56
            OP_LOAD_I 
            var_48 = pri;
            var_56 = arg_0;
            var_64 = 56;
            pri = fun_1C30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1F58(var_72)
// lab_5C20
            var_8 = 0;
            pri = fun_2018()
            var_16 = 0;
            var_24 = 0;
            var_32 = 0;
            var_40 = arg_0;
            var_48 = 32;
            pri = fun_45E8(var_40, var_32, var_24, var_16)
            OP_LOAD_S_BOTH 24, -8
            OP_JEQ lab_5D70
            var_56 = 1;
            var_64 = 0;
            var_72 = 4641240890982006784;
            var_80 = 0;
            var_88 = 0;
            var_96 = arg_3;
            pri = float(var_96)
            var_104 = pri;
            var_112 = arg_2;
            pri = float(var_112)
            var_120 = pri;
            OP_PUSH2_C 4607182418800017408, 8802641224559852288
            var_128 = 72;
            pri = fun_0A38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
            var_136 = 8802641224559852288;
            var_144 = 8;
            pri = fun_0B58(var_136)
// lab_5D70
            OP_JUMP switch_5D80_case_default
        }
    }
}
// fun_5DE0
fun_5DE0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = fun_0440()
    pri = arg_1;
    OP_JZER lab_5E58
    var_32 = 3144;
    pri = SoundPostEvent(var_32)
// lab_5E58
    var_8 = 3344;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 3608;
    var_40 = 8;
    var_48 = 32;
    pri = fun_02E0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_5ED8
fun_5ED8() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_5F28
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_5DE0(var_16, var_8)
// lab_5F28
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B58(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_5FC8
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_5FC8
    pri = 1;
    OP_JUMP lab_5FD0
// lab_5FC8
    pri = 0;
// lab_5FD0
    OP_JZER lab_6168
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_60B0
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
    pri = fun_04D0(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_6158
// lab_6168
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
    pri = fun_08E0(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_60B0
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
    pri = fun_06E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_6158
    OP_JUMP lab_6228
// lab_6228
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_62A0
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0988(var_32, var_24, var_16)
// lab_62A0
    var_8 = 3624;
    pri = SoundPostEvent(var_8)
    var_16 = 3896;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_6310
fun_6310() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 0;
    var_24 = arg_5;
    var_32 = 0;
    var_40 = arg_6;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_5ED8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_63B0
fun_63B0() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1;
    var_24 = -1;
    var_32 = 1;
    var_40 = 180;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = arg_0;
    var_88 = 72;
    pri = fun_5ED8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_6450
fun_6450() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4D08(var_24)
    pri = 0;
    return pri;
}
// fun_64B8
fun_64B8() {
    pri = g_mode;
    switch (pri) {
// switch_6668
        case default:
        {
// switch_6668_case_default
            pri = CommandNOP()
            OP_JUMP lab_6710
// lab_6710
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6668_case_0x0
            var_8 = 0;
            pri = fun_6720()
            OP_JUMP lab_6710
        }
        case 0x247b34276b449503:
        {
// switch_6668_case_0x247b34276b449503
            var_8 = 0;
            pri = fun_78E0()
            OP_JUMP lab_6710
        }
        case 0x25a52c4b9e202d38:
        {
// switch_6668_case_0x25a52c4b9e202d38
            var_8 = 0;
            pri = fun_8F40()
            OP_JUMP lab_6710
        }
        case 0x3ab00293e2d5444d:
        {
// switch_6668_case_0x3ab00293e2d5444d
            var_8 = 0;
            pri = fun_8FD0()
            OP_JUMP lab_6710
        }
        case 0x41da9e2af5396d8f:
        {
// switch_6668_case_0x41da9e2af5396d8f
            var_8 = 0;
            pri = fun_77F0()
            OP_JUMP lab_6710
        }
        case 0x4ec34b6a6ef5717d:
        {
// switch_6668_case_0x4ec34b6a6ef5717d
            var_8 = 0;
            pri = fun_8788()
            OP_JUMP lab_6710
        }
        case 0x614e3db1239c5489:
        {
// switch_6668_case_0x614e3db1239c5489
            var_8 = 0;
            pri = fun_7968()
            OP_JUMP lab_6710
        }
        case 0x723c7df605679b5a:
        {
// switch_6668_case_0x723c7df605679b5a
            var_8 = 0;
            pri = fun_8CF0()
            OP_JUMP lab_6710
        }
        case 0x7486c5b2ce3cc21f:
        {
// switch_6668_case_0x7486c5b2ce3cc21f
            var_8 = 0;
            pri = fun_86B0()
            OP_JUMP lab_6710
        }
    }
}
// fun_6720
fun_6720() {
    pri = 0;
    return pri;
}
// fun_6738
fun_6738() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_5068(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6790
fun_6790() {
    pri = 0;
    return pri;
}
// fun_67A8
fun_67A8() {
    pri = 0;
    return pri;
}
// fun_67C0
fun_67C0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 180;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4656265057668589158, 4647865228637031629, 8802641224559852288
    var_40 = 48;
    pri = fun_0930(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = -140;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 1300;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 1006;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 1388184477031301254;
    var_120 = 48;
    pri = fun_0930(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = 20;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 4652561462701588480;
    var_168 = 1046;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 1754806087330337077;
    var_192 = 48;
    pri = fun_0930(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 1;
    var_208 = 0;
    var_216 = 4641240890982006784;
    var_224 = 0;
    var_232 = 0;
    OP_PUSH4_C 4653872080561897472, 4647847636450987213, 4607182418800017408, 8802641224559852288
    var_240 = 72;
    pri = fun_0A38(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    OP_PUSH2_C 1754806087330337077, 1388184477031301254
    var_280 = 48;
    pri = fun_0B00(var_272, var_264, var_256, var_248, var_240, var_232)
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    OP_PUSH2_C 1388184477031301254, 1754806087330337077
    var_320 = 48;
    pri = fun_0B00(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 3;
    var_336 = 8;
    pri = fun_0060(var_328)
    var_344 = 3912;
    pri = SoundPostEvent(var_344)
    var_352 = 4184;
    var_360 = 8;
    var_368 = 16;
    pri = fun_0280(var_360, var_352)
    var_376 = 0;
    pri = fun_0350()
    var_384 = 60;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 1388184477031301254;
    var_408 = 8;
    pri = fun_0B58(var_400)
    var_416 = 1754806087330337077;
    var_424 = 8;
    pri = fun_0B58(var_416)
    pri = EvCameraStart()
    var_432 = 0;
    var_440 = 4631952216750555136;
    var_448 = 0;
    OP_PUSH5_C 4653078013264317645, 4631993030622178181, 4650436854393004360, 4654212269459531366, 4637155985382493389
    var_456 = 4648404165256502313;
    var_464 = 1;
    pri = EvCameraMove(var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392)
    var_472 = 8802641224559852288;
    var_480 = 8;
    pri = fun_0B58(var_472)
    var_488 = 1;
    var_496 = 1;
    var_504 = 90;
    pri = float(var_504)
    var_512 = pri;
    var_520 = 1300;
    pri = float(var_520)
    var_528 = pri;
    OP_PUSH2_C 4647838840357965005, 8802641224559852288
    var_536 = 48;
    pri = fun_0930(var_528, var_520, var_512, var_504, var_496, var_488)
    var_544 = 1;
    var_552 = 0;
    var_560 = 4641240890982006784;
    var_568 = 0;
    var_576 = 0;
    OP_PUSH4_C 4653432275910787072, 4648973536357829837, 4607182418800017408, 8802641224559852288
    var_584 = 72;
    pri = fun_0A38(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_592 = 8802641224559852288;
    var_600 = 8;
    pri = fun_0B58(var_592)
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    var_632 = 0;
    OP_PUSH2_C 1388184477031301254, 8802641224559852288
    var_640 = 48;
    pri = fun_0B00(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    var_672 = 0;
    OP_PUSH2_C 8802641224559852288, 1388184477031301254
    var_680 = 48;
    pri = fun_0B00(var_672, var_664, var_656, var_648, var_640, var_632)
    var_688 = 5;
    var_696 = 8;
    pri = fun_0060(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C 8802641224559852288, 1754806087330337077
    var_736 = 48;
    pri = fun_0B00(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 8802641224559852288;
    var_752 = 8;
    pri = fun_0B58(var_744)
    var_760 = 1388184477031301254;
    var_768 = 8;
    pri = fun_0B58(var_760)
    var_776 = 1754806087330337077;
    var_784 = 8;
    pri = fun_0B58(var_776)
    var_792 = 1;
    var_800 = 0;
    var_808 = 4641240890982006784;
    var_816 = 0;
    var_824 = 0;
    OP_PUSH4_C 4653432275910787072, 4651577179892403405, 4607182418800017408, 1388184477031301254
    var_832 = 72;
    pri = fun_0A38(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_840 = 1388184477031301254;
    var_848 = 8;
    pri = fun_0B58(var_840)
    var_856 = 8802641224559852288;
    var_864 = 8;
    pri = fun_0B58(var_856)
    var_872 = 0;
    var_880 = 3;
    var_888 = 0;
    var_896 = 100;
    var_904 = -1;
    OP_PUSH2_C 8490866941407287535, 1388184477031301254
    var_912 = 56;
    pri = fun_1C30(var_904, var_896, var_888, var_880, var_872, var_864, var_856)
    var_920 = 1;
    var_928 = 8;
    pri = fun_1F58(var_920)
    var_936 = 0;
    var_944 = 3;
    var_952 = 0;
    var_960 = 100;
    var_968 = -1;
    OP_PUSH2_C 8490868040918915746, 1388184477031301254
    var_976 = 56;
    pri = fun_1C30(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 1;
    var_992 = 8;
    pri = fun_1F58(var_984)
    var_1000 = 0;
    var_1008 = 3;
    var_1016 = 0;
    var_1024 = 100;
    var_1032 = -1;
    OP_PUSH2_C 8490869140430543957, 1388184477031301254
    var_1040 = 56;
    pri = fun_1C30(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_1F58(var_1048)
    var_1064 = 0;
    var_1072 = 3;
    var_1080 = 0;
    var_1088 = 100;
    var_1096 = -1;
    OP_PUSH2_C 8490861443849146480, 1388184477031301254
    var_1104 = 56;
    pri = fun_1C30(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1112 = 1;
    var_1120 = 8;
    pri = fun_1F58(var_1112)
    var_1128 = 0;
    var_1136 = 3;
    var_1144 = 0;
    var_1152 = 100;
    var_1160 = -1;
    OP_PUSH2_C 8490862543360774691, 1388184477031301254
    var_1168 = 56;
    pri = fun_1C30(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1176 = 1;
    var_1184 = 8;
    pri = fun_1F58(var_1176)
    var_1192 = 0;
    pri = fun_2018()
    var_1200 = 1;
    var_1208 = 0;
    var_1216 = 4641240890982006784;
    var_1224 = 0;
    var_1232 = 0;
    var_1240 = 1300;
    pri = float(var_1240)
    var_1248 = pri;
    var_1256 = 1200;
    pri = float(var_1256)
    var_1264 = pri;
    OP_PUSH2_C 4611686018427387904, 1388184477031301254
    var_1272 = 72;
    pri = fun_0A38(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200)
    var_1280 = 90;
    var_1288 = 8;
    pri = fun_0060(var_1280)
    var_1296 = 1;
    var_1304 = 0;
    var_1312 = 32;
    var_1320 = 8;
    var_1328 = 32;
    pri = fun_02E0(var_1320, var_1312, var_1304, var_1296)
    var_1336 = 0;
    pri = fun_0350()
    var_1344 = 3;
    var_1352 = 1;
    pri = EvCameraEnd(var_1352, var_1344)
    var_1360 = 30;
    var_1368 = 8;
    pri = fun_0060(var_1360)
    var_1376 = 0;
    var_1384 = 1388184477031301254;
    var_1392 = 16;
    pri = fun_09C8(var_1384, var_1376)
    var_1400 = 1388184477031301254;
    var_1408 = 8;
    pri = fun_0B58(var_1400)
    var_1416 = 80;
    var_1424 = 8;
    var_1432 = 16;
    pri = fun_0280(var_1424, var_1416)
    var_1440 = 0;
    pri = fun_0350()
    var_1448 = 1;
    var_1456 = 1;
    var_1464 = 0;
    var_1472 = 1;
    var_1480 = 1;
    var_1488 = 1754806087330337077;
    var_1496 = 48;
    pri = fun_42E8(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C 160113084708714513, 1754806087330337077
    var_1544 = 56;
    pri = fun_1C30(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_1F58(var_1552)
    var_1568 = 0;
    pri = fun_2018()
    var_1576 = 0;
    var_1584 = 0;
    var_1592 = 0;
    var_1600 = 1754806087330337077;
    var_1608 = 32;
    pri = fun_45E8(var_1600, var_1592, var_1584, var_1576)
    var_1616 = 4200;
    pri = SoundPostEvent(var_1616)
    var_1624 = 4424;
    pri = SoundPostEvent(var_1624)
    pri = 0;
    return pri;
}
// fun_7590
fun_7590() {
    pri = 0;
    return pri;
}
// fun_75A8
fun_75A8() {
    var_8 = -3293621181990616472;
    pri = FlagSet(var_8)
    var_16 = 1388184477031301254;
    var_24 = 8;
    pri = fun_08B0(var_16)
    pri = 0;
    return pri;
}
// fun_7610
fun_7610() {
    var_8 = 1140;
    var_16 = 8;
    pri = fun_6450(var_8)
    var_24 = -351125813381875025;
    pri = VanishFlagReset(var_24)
    var_32 = -2343341783023065213;
    pri = FlagSet(var_32)
    pri = 0;
    return pri;
}
// fun_7698
fun_7698() {
    var_8 = 1120;
    var_16 = 8;
    pri = fun_6450(var_8)
    var_24 = 0;
    var_32 = -1068280264362630289;
    pri = WorkSet(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_7700
fun_7700() {
    pri = 0;
    return pri;
}
// fun_7718
fun_7718() {
    var_8 = 180;
    var_16 = 2131071359479068524;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C 6748990845828786157, 1600324353207277444
    var_40 = 9;
    var_48 = 56;
    pri = fun_6310(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_7790
fun_7790() {
    var_8 = 26500;
    var_16 = 20000;
    OP_PUSH2_C 6749946321433512291, 1599333693230448558
    var_24 = 9;
    var_32 = 40;
    pri = fun_63B0(var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_77F0
fun_77F0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6738()
    var_16 = 0;
    pri = fun_6790()
    var_24 = 0;
    pri = fun_67A8()
    var_32 = 0;
    pri = fun_67C0()
    var_40 = 0;
    pri = fun_7590()
    var_48 = 0;
    pri = fun_75A8()
    var_56 = 0;
    pri = fun_7700()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_78E0
fun_78E0() {
    var_8 = 0;
    pri = fun_6790()
    var_16 = 0;
    pri = fun_75A8()
    var_24 = 0;
    pri = fun_7610()
    var_32 = -3293621181990616472;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_7968
fun_7968() {
    OP_CONST_S -8, 3
    pri = 4688;
    OP_ADDR_ALT -104
    OP_MOVS 96
    OP_ZERO_P_S -112
    OP_ZERO_P_S -120
    OP_ZERO_P_S -128
    OP_ZERO_P_S -136
    var_152 = 225158136249444903;
    pri = WorkGet(var_152)
    var_144 = pri;
    OP_ZERO_P_S -152
    OP_JUMP lab_7A68
// lab_7A68
    OP_LOAD_S_BOTH -152, -8
    OP_JSGEQ lab_7D28
    pri = var_144;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_7AC0
    OP_JUMP lab_7D28
// lab_7D28
    arg_-3 = 1;
    var_8 = 1;
    OP_PUSH3_C 4653212373585231872, 4658815484840378368, 7525985270059008956
    var_16 = 40;
    pri = fun_08E0(var_8, var_0, var_-8, var_-16, var_-24)
    var_24 = 1;
    var_32 = 0;
    var_40 = 4641240890982006784;
    var_48 = 0;
    var_56 = 0;
    OP_PUSH4_C 4653212373585231872, 4658265729026490368, 4607182418800017408, 8802641224559852288
    var_64 = 72;
    pri = fun_0A38(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_0B58(var_72)
    var_88 = 0;
    var_96 = 8;
    pri = fun_07A0(var_88)
    var_104 = 0;
    var_112 = 1;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    OP_PUSH5_C 4636033603912859648, 4653212373585231872, 4658705533677600768, 6748985348270645102, 1600321054672392811
    var_144 = 80;
    pri = fun_0570(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
// lab_7AC0
    OP_ADDR_P_PRI -104
    var_8 = pri;
    pri = var_144;
    OP_SMUL_P_C 4
    OP_ZERO_ALT 
    OP_ADD 
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_112 = pri;
    OP_ADDR_P_PRI -104
    var_16 = pri;
    pri = var_144;
    OP_SMUL_P_C 4
    OP_ADD_P_C 1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_120 = pri;
    OP_ADDR_P_PRI -104
    var_24 = pri;
    pri = var_144;
    OP_SMUL_P_C 4
    OP_ADD_P_C 2
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_128 = pri;
    OP_ADDR_P_PRI -104
    var_32 = pri;
    pri = var_144;
    OP_SMUL_P_C 4
    OP_ADD_P_C 3
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_136 = pri;
    pri = var_152;
    OP_JNZ lab_7C30
    var_40 = 1;
    var_48 = 8;
    pri = fun_7EB8(var_40)
    OP_JUMP lab_7C50
// lab_7C30
    var_8 = 0;
    var_16 = 8;
    pri = fun_7EB8(var_8)
// lab_7C50
    var_8 = var_128;
    var_16 = 8;
    pri = fun_80A0(var_8)
    var_24 = var_144;
    var_32 = var_120;
    var_40 = var_112;
    var_48 = 24;
    pri = fun_8208(var_40, var_32, var_24)
    var_56 = var_136;
    var_64 = 8;
    pri = fun_8488(var_56)
    var_72 = var_144;
    var_80 = 8;
    pri = fun_8608(var_72)
    var_144 = pri;
    var_88 = var_144;
    var_96 = 225158136249444903;
    pri = WorkSet(var_96, var_88)
    OP_JUMP lab_7A60
// lab_7A60
    OP_INC_P_S -152
}
// fun_7EB8
fun_7EB8() {
    var_8 = 1;
    var_16 = 1;
    OP_PUSH4_C -4587338432941916160, 4653212373585231872, 4658351490933456896, 7525985270059008956
    var_24 = 48;
    pri = fun_0930(var_16, var_8, var_0, var_-8, var_-16, var_-24)
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8090
    var_32 = 1;
    var_40 = 1;
    OP_PUSH4_C 4636033603912859648, 4653212373585231872, 4652640627538788352, 8802641224559852288
    var_48 = 48;
    pri = fun_0930(var_40, var_32, var_24, var_16, var_8, var_0)
    var_56 = 1;
    var_64 = 0;
    var_72 = 4641240890982006784;
    var_80 = 0;
    var_88 = 0;
    var_96 = 1250;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 1720;
    pri = float(var_112)
    var_120 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_128 = 72;
    pri = fun_0A38(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_136 = 80;
    var_144 = 8;
    var_152 = 16;
    pri = fun_0280(var_144, var_136)
    var_160 = 0;
    pri = fun_0350()
    var_168 = 30;
    var_176 = 8;
    pri = fun_0060(var_168)
// lab_8090
    pri = 0;
    return pri;
}
// fun_80A0
fun_80A0() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH4_C 4653212373585231872, 4657056266235936768, 4607182418800017408, 7525985270059008956
    var_48 = 72;
    pri = fun_0A38(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 7525985270059008956;
    var_64 = 8;
    pri = fun_0B58(var_56)
    var_72 = 8802641224559852288;
    var_80 = 8;
    pri = fun_0B58(var_72)
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    var_128 = arg_0;
    var_136 = 7525985270059008956;
    var_144 = 56;
    pri = fun_1C30(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_1F58(var_152)
    var_168 = 0;
    pri = fun_2018()
    pri = 0;
    return pri;
}
// fun_8208
fun_8208() {
    var_8 = arg_1;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_2360(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    pri = fun_2478()
    OP_JZER lab_8290
    var_64 = 0;
    pri = fun_2568()
// lab_8290
    pri = 0;
    OP_ADDR_ALT -48
    OP_FILL 48
    pri = 4784;
    OP_ADDR_ALT -48
    OP_MOVS 40
    pri = GetLastFairyGymResult()
    var_56 = pri;
    OP_ADDR_P_PRI -48
    var_72 = pri;
    pri = arg_2;
    OP_SMUL_P_C 2
    OP_LOAD_P_S_ALT -56
    OP_ADD 
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_64 = pri;
    pri = CommandNOP()
    pri = var_64;
    OP_JZER lab_83C8
    pri = CommandNOP()
    OP_JUMP lab_83E0
// lab_83C8
    pri = CommandNOP()
// lab_83E0
    OP_ADDR_P_PRI -48
    var_8 = pri;
    pri = arg_2;
    OP_SMUL_P_C 2
    OP_LOAD_P_S_ALT -56
    OP_ADD 
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8470
    var_16 = 1;
    var_24 = -1068280264362630289;
    pri = WorkAdd(var_24, var_16)
// lab_8470
    pri = 0;
    return pri;
}
// fun_8488
fun_8488() {
    var_8 = 80;
    var_16 = 8;
    var_24 = 16;
    pri = fun_0280(var_16, var_8)
    var_32 = 0;
    pri = fun_0350()
    var_40 = 0;
    var_48 = 3;
    var_56 = 0;
    var_64 = 100;
    var_72 = -1;
    var_80 = arg_0;
    var_88 = 7525985270059008956;
    var_96 = 56;
    pri = fun_1C30(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 1;
    var_112 = 8;
    pri = fun_1F58(var_104)
    var_120 = 0;
    pri = fun_2018()
    var_128 = 1;
    var_136 = 0;
    var_144 = 4641240890982006784;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH4_C 4653212373585231872, 4658351490933456896, 4607182418800017408, 7525985270059008956
    var_168 = 72;
    pri = fun_0A38(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 7525985270059008956;
    var_184 = 8;
    pri = fun_0B58(var_176)
    pri = 0;
    return pri;
}
// fun_8608
fun_8608() {
    pri = arg_0;
    switch (pri) {
// switch_8668
        case default:
        {
// switch_8668_case_default
            pri = 3;
            return pri;
        }
        case 0x0:
        {
// switch_8668_case_0x0
            pri = 1;
            return pri;
            OP_JUMP switch_8668_case_default
        }
        case 0x1:
        {
// switch_8668_case_0x1
            pri = 2;
            return pri;
            OP_JUMP switch_8668_case_default
        }
    }
}
// fun_86B0
fun_86B0() {
    pri = 4824;
    OP_ADDR_ALT -64
    OP_MOVS 64
    var_72 = 1320;
    var_80 = 527;
    OP_PUSH_P_ADR -64
    var_88 = 1754806087330337077;
    var_96 = 32;
    pri = fun_5380(var_88, var_80, var_72, var_64)
    OP_JZER lab_8770
    var_104 = 0;
    pri = fun_7698()
    var_112 = 0;
    pri = fun_7718()
// lab_8770
    pri = 0;
    return pri;
}
// fun_8788
fun_8788() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -3615403560434922641;
    var_56 = 48;
    pri = fun_42E8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C -1541462902471096404, -3615403560434922641
    var_104 = 56;
    pri = fun_1C30(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_1F58(var_112)
    var_136 = 0;
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 48;
    pri = fun_21A0(var_176, var_168, var_160, var_152, var_144, var_136)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8A58
    var_200 = 4888;
    pri = SoundPostEvent(var_200)
    var_16 = pri;
    var_208 = 5128;
    pri = SoundPostEvent(var_208)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    OP_PUSH2_C -1541461802959468193, -3615403560434922641
    var_256 = 56;
    pri = fun_1C30(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = var_16;
    var_272 = 8;
    pri = fun_07A0(var_264)
    var_280 = 1;
    var_288 = 8;
    pri = fun_1F58(var_280)
    var_296 = 0;
    pri = fun_2018()
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = -3615403560434922641;
    var_336 = 32;
    pri = fun_45E8(var_328, var_320, var_312, var_304)
    var_344 = 0;
    pri = fun_7610()
    var_352 = 0;
    pri = fun_7790()
    OP_JUMP lab_8CD8
// lab_8A58
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -1541465101494352826, -3615403560434922641
    var_48 = 56;
    pri = fun_1C30(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_1F58(var_56)
    var_72 = 0;
    pri = fun_2018()
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = -3615403560434922641;
    var_112 = 32;
    pri = fun_45E8(var_104, var_96, var_88, var_80)
    pri = GetTargetFieldObjectID()
    var_16 = pri;
    pri = var_16;
    alt = -3615403560434922641;
    OP_JEQ lab_8CD0
    var_128 = 1;
    var_136 = 0;
    var_144 = 32;
    var_152 = 8;
    var_160 = 32;
    pri = fun_02E0(var_152, var_144, var_136, var_128)
    var_168 = 0;
    pri = fun_0350()
    var_176 = 1;
    var_184 = 0;
    pri = float(var_184)
    var_192 = pri;
    var_200 = -3615403560434922641;
    var_208 = 24;
    pri = fun_0988(var_200, var_192, var_184)
    var_216 = 1;
    var_224 = 1;
    var_232 = 0;
    pri = float(var_232)
    var_240 = pri;
    OP_PUSH3_C 4652473501771366400, 4659805045305376768, 8802641224559852288
    var_248 = 48;
    pri = fun_0930(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 80;
    var_264 = 8;
    var_272 = 16;
    pri = fun_0280(var_264, var_256)
    var_280 = 0;
    pri = fun_0350()
// lab_8CD0
// lab_8CD8
    pri = 0;
    return pri;
}
// fun_8CF0
fun_8CF0() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = -1;
    var_40 = var_8;
    var_48 = 8802641224559852288;
    var_56 = 40;
    pri = fun_0FE8(var_48, var_40, var_32, var_24, var_16)
    var_64 = 5352;
    var_72 = 8;
    pri = fun_2258(var_64)
    var_80 = 0;
    pri = fun_2290()
    var_88 = 3;
    var_96 = 0;
    var_104 = 6762098922236309151;
    var_112 = 24;
    pri = fun_1DF8(var_104, var_96, var_88)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1F58(var_120)
    var_136 = 0;
    pri = fun_2018()
    var_144 = 1;
    var_152 = 6762096723213052729;
    var_160 = 16;
    pri = fun_1E58(var_152, var_144)
    var_168 = 1;
    var_176 = 8;
    pri = fun_1F58(var_168)
    var_184 = 0;
    pri = fun_2018()
    var_192 = 1;
    var_200 = 6762106618817706628;
    var_208 = 16;
    pri = fun_1E58(var_200, var_192)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1F58(var_216)
    var_232 = 0;
    pri = fun_2018()
    var_240 = 0;
    pri = fun_2330()
    var_248 = -1;
    var_256 = 8802641224559852288;
    var_264 = 16;
    pri = fun_1040(var_256, var_248)
    pri = 0;
    return pri;
}
// fun_8F40
fun_8F40() {
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 0;
    var_56 = 0;
    var_64 = 1;
    var_72 = 1;
    var_80 = -4328223708877734795;
    var_88 = 5552;
    var_96 = 88;
    pri = fun_4C18(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8FD0
fun_8FD0() {
    var_8 = 5752;
    var_16 = 8;
    pri = fun_2258(var_8)
    var_24 = 0;
    pri = fun_2290()
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    OP_PUSH2_C 8802641224559852288, -3615403560434922641
    var_64 = 48;
    pri = fun_0B00(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = -3615403560434922641;
    var_80 = 8;
    pri = fun_0B58(var_72)
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    OP_PUSH2_C -3615403560434922641, 8802641224559852288
    var_120 = 48;
    pri = fun_0B00(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 0;
    var_136 = 3;
    var_144 = 0;
    var_152 = 100;
    var_160 = -1;
    OP_PUSH2_C 1417434701146702317, -3615403560434922641
    var_168 = 56;
    pri = fun_1CE0(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    var_176 = 1;
    var_184 = 8;
    pri = fun_1F58(var_176)
    var_192 = 0;
    pri = fun_2018()
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_0B58(var_200)
    var_216 = 0;
    pri = fun_2330()
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    pri = float(var_248)
    var_256 = pri;
    var_264 = -3615403560434922641;
    var_272 = 40;
    pri = fun_0AB0(var_264, var_256, var_248, var_240, var_232)
    var_280 = 1;
    var_288 = 0;
    var_296 = 4641240890982006784;
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    pri = float(var_320)
    var_328 = pri;
    var_336 = 100;
    pri = float(var_336)
    var_344 = pri;
    OP_PUSH2_C 4611686018427387904, 8802641224559852288
    var_352 = 72;
    pri = fun_4F30(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_360 = 8802641224559852288;
    var_368 = 8;
    pri = fun_0B58(var_360)
    var_376 = -3615403560434922641;
    var_384 = 8;
    pri = fun_0B58(var_376)
    pri = 0;
    return pri;
}
