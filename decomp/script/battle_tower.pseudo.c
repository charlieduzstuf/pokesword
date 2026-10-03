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
    pri = ABKeyWait_()
    return pri;
}
// fun_0160
fun_0160() {
    pri = arg_1;
    OP_JZER lab_01A8
    var_8 = arg_0;
    pri = GetPublicRand(var_8)
    return pri;
// lab_01A8
    pri = arg_0;
    OP_ADD_P_C -1
    var_8 = pri;
    pri = GetPublicRand(var_8)
    return pri;
}
// fun_01E0
fun_01E0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_0210
// lab_0210
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0310
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0290
    pri = 0;
    return pri;
// lab_0310
    pri = 0;
    return pri;
// lab_0290
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
    OP_JUMP lab_0208
// lab_0208
    OP_INC_P_S -8
}
// fun_0328
fun_0328() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0388
fun_0388() {
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
// fun_03F8
fun_03F8() {
    OP_JUMP lab_0410
// lab_0410
    pri = FadeWait_()
    OP_JZER lab_0448
    pri = 0;
    return pri;
// lab_0448
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0410
    pri = 0;
    return pri;
}
// fun_0488
fun_0488() {
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
// fun_0528
fun_0528() {
    pri = arg_8;
    OP_JZER lab_0598
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0388(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03F8()
// lab_0598
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
    pri = fun_0488(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0A98(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_0688
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0328(var_128, var_120)
    var_144 = 0;
    pri = fun_03F8()
// lab_0688
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0710
// lab_0710
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0750
    OP_JUMP lab_07C0
// lab_0750
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0790
    OP_JUMP lab_07C0
// lab_0790
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0710
// lab_07C0
    pri = 0;
    return pri;
}
// fun_07D8
fun_07D8() {
    pri = StartBattleTower()
    OP_ZERO_P_S -8
    OP_JUMP lab_0820
// lab_0820
    pri = var_8;
    alt = 300;
    OP_JSGEQ lab_08B0
    pri = IsFinishedBattleTowerSetup()
    OP_JZER lab_0880
    pri = 1;
    return pri;
// lab_08B0
    pri = 0;
    return pri;
// lab_0880
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0818
// lab_0818
    OP_INC_P_S -8
}
// fun_08C8
fun_08C8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0900
// lab_0900
    var_8 = 0;
    pri = fun_0A18()
    OP_JNZ lab_0938
    OP_JUMP lab_0968
// lab_0938
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0900
// lab_0968
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0998
// lab_0998
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09D8
    pri = 0;
    return pri;
// lab_09D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0998
    pri = 0;
    return pri;
}
// fun_0A18
fun_0A18() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0A40
fun_0A40() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A98
fun_0A98() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0AD8
fun_0AD8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0B10
fun_0B10() {
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
// fun_0B88
fun_0B88() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BD8
fun_0BD8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1348(var_8)
    OP_JZER lab_0C50
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1378(var_24)
    OP_JNZ lab_0C50
    pri = 0;
    return pri;
// lab_0C50
    OP_JUMP lab_0C60
// lab_0C60
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0CC0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0CC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C60
    pri = 0;
    return pri;
}
// fun_0D00
fun_0D00() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0D38
fun_0D38() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0DF8
    pri = 0;
    return pri;
// lab_0DF8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0E38
// lab_0E38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1348(var_8)
    OP_JNZ lab_0EC0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0EB0
    pri = 0;
    return pri;
// lab_0EC0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0F08
    pri = 0;
    return pri;
// lab_0F08
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0F68
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FB0(var_8)
    pri = 0;
    return pri;
// lab_0F68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E38
    pri = 0;
    return pri;
// lab_0EB0
    OP_JUMP lab_0F08
}
// fun_0FB0
fun_0FB0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0FE8
fun_0FE8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1038
    pri = 0;
    return pri;
// lab_1038
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1348(var_8)
    OP_JZER lab_1168
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1090
    OP_ZERO_P_S 64
// lab_1168
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_11A0
    OP_CONST_S 64, 1
// lab_11A0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_11D8
    OP_CONST_S 72, 1
// lab_11D8
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
// lab_1090
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10B8
    OP_ZERO_P_S 72
// lab_10B8
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
    OP_JUMP lab_1278
// lab_1278
    pri = 0;
    return pri;
}
// fun_1288
fun_1288() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12C8
fun_12C8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1308
fun_1308() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1348
fun_1348() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1378
fun_1378() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_13D8
fun_13D8() {
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
// switch_19F0
        case default:
        {
// switch_19F0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1A38
// lab_1A38
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
            OP_JNZ lab_1AE0
            var_88 = 0;
            pri = fun_1DB0()
// lab_1AE0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_19F0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_15D8
                case default:
                {
// switch_15D8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1650
// lab_1650
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_15D8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1650
                }
                case 0x1:
                {
// switch_15D8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1650
                }
                case 0x2:
                {
// switch_15D8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1650
                }
                case 0x3:
                {
// switch_15D8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1650
                }
                case 0x4:
                {
// switch_15D8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1650
                }
                case 0x5:
                {
// switch_15D8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1650
                }
            }
        }
        case 0x65:
        {
// switch_19F0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1790
                case default:
                {
// switch_1790_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1808
// lab_1808
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_1790_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1808
                }
                case 0x1:
                {
// switch_1790_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1808
                }
                case 0x2:
                {
// switch_1790_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1808
                }
                case 0x3:
                {
// switch_1790_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1808
                }
                case 0x4:
                {
// switch_1790_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1808
                }
                case 0x5:
                {
// switch_1790_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1808
                }
            }
        }
        case 0x66:
        {
// switch_19F0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1948
                case default:
                {
// switch_1948_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19C0
// lab_19C0
                    OP_JUMP lab_1A38
                }
                case 0x0:
                {
// switch_1948_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_19C0
                }
                case 0x1:
                {
// switch_1948_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_19C0
                }
                case 0x2:
                {
// switch_1948_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_19C0
                }
                case 0x3:
                {
// switch_1948_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_19C0
                }
                case 0x4:
                {
// switch_1948_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_19C0
                }
                case 0x5:
                {
// switch_1948_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_19C0
                }
            }
        }
    }
}
// fun_1AF8
fun_1AF8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_13D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B60
fun_1B60() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0D78(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1C08
    pri = 1;
    return pri;
// lab_1C08
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1C50
fun_1C50() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1CA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1B60(var_8)
    arg_2 = pri;
// lab_1CA0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_13D8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D00
fun_1D00() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1AF8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D50
fun_1D50() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1D00(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DB0
fun_1DB0() {
    OP_JUMP lab_1DC8
// lab_1DC8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E08
    pri = 0;
    return pri;
// lab_1E08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1DC8
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    var_8 = 0;
    pri = fun_1DB0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1EF8
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_1EF8
    pri = 0;
    return pri;
}
// fun_1F08
fun_1F08() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F38
fun_1F38() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_1F68
// lab_1F68
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1FA8
    OP_JUMP lab_1FD8
// lab_1FA8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1F68
// lab_1FD8
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2020
fun_2020() {
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
// fun_2090
fun_2090() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_20C8
fun_20C8() {
    OP_JUMP lab_20E0
// lab_20E0
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2128
    OP_JUMP lab_2158
    OP_JUMP lab_2148
// lab_2128
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2158
    pri = 0;
    return pri;
// lab_2148
    OP_JUMP lab_20E0
}
// fun_2168
fun_2168() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21E8
fun_21E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2238
fun_2238() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2288
fun_2288() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22D8
fun_22D8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2328
fun_2328() {
    OP_JUMP lab_2340
// lab_2340
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2378
    pri = 0;
    return pri;
// lab_2378
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2340
    pri = 0;
    return pri;
}
// fun_23B8
fun_23B8() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2430
fun_2430() {
    var_8 = 0;
    pri = fun_23B8()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_24B0
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_24B0
    pri = 1;
    return pri;
// lab_24B0
    var_8 = 0;
    pri = fun_23B8()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_24F0
    pri = 1;
    return pri;
// lab_24F0
    var_8 = 0;
    pri = fun_23B8()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2520
fun_2520() {
    OP_JUMP lab_2538
// lab_2538
    pri = EvCameraMoveWait_()
    OP_JZER lab_2570
    pri = 0;
    return pri;
// lab_2570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2538
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    var_8 = arg_0;
    pri = AddBP_(var_8)
    return pri;
}
// fun_25E0
fun_25E0() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_2618
fun_2618() {
    var_8 = arg_0;
    pri = PlayerIsGetDressupItemByPreset(var_8)
    return pri;
}
// fun_2648
fun_2648() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2680
fun_2680() {
    pri = arg_6;
    OP_JNZ lab_26B8
    var_8 = 0;
    pri = fun_1288()
// lab_26B8
    pri = arg_1;
    switch (pri) {
// switch_3C20
        case default:
        {
// switch_3C20_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3F70
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3F70
            pri = 1;
            OP_JUMP lab_3F78
// lab_3F70
            pri = 0;
// lab_3F78
            OP_JZER lab_40D0
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D78(var_24, var_16)
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
            OP_JUMP lab_4130
// lab_40D0
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
            pri = fun_01E0(var_16, var_8, var_0)
// lab_4130
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4190
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_41F0
// lab_4190
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_41F0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_41F0
            pri = arg_2;
            OP_JZER lab_4230
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4230
            var_8 = 0;
            pri = fun_12C8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3C20_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1:
        {
// switch_3C20_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x2:
        {
// switch_3C20_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x3:
        {
// switch_3C20_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x4:
        {
// switch_3C20_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x5:
        {
// switch_3C20_case_0x5
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0x6:
        {
// switch_3C20_case_0x6
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0x7:
        {
// switch_3C20_case_0x7
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0x8:
        {
// switch_3C20_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x9:
        {
// switch_3C20_case_0x9
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0xa:
        {
// switch_3C20_case_0xa
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0xb:
        {
// switch_3C20_case_0xb
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0xc:
        {
// switch_3C20_case_0xc
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0xd:
        {
// switch_3C20_case_0xd
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0xe:
        {
// switch_3C20_case_0xe
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0xf:
        {
// switch_3C20_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x10:
        {
// switch_3C20_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x11:
        {
// switch_3C20_case_0x11
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0x12:
        {
// switch_3C20_case_0x12
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0x13:
        {
// switch_3C20_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x14:
        {
// switch_3C20_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x15:
        {
// switch_3C20_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x16:
        {
// switch_3C20_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x17:
        {
// switch_3C20_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x18:
        {
// switch_3C20_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x19:
        {
// switch_3C20_case_0x19
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
            pri = fun_0FE8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1a:
        {
// switch_3C20_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D38(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D00(var_48, var_40)
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
            pri = fun_0FE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1b:
        {
// switch_3C20_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D38(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D00(var_48, var_40)
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
            pri = fun_0FE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1c:
        {
// switch_3C20_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D38(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D00(var_48, var_40)
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
            pri = fun_0FE8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1d:
        {
// switch_3C20_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1e:
        {
// switch_3C20_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x1f:
        {
// switch_3C20_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x20:
        {
// switch_3C20_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x21:
        {
// switch_3C20_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x22:
        {
// switch_3C20_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x23:
        {
// switch_3C20_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x24:
        {
// switch_3C20_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x25:
        {
// switch_3C20_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x26:
        {
// switch_3C20_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x27:
        {
// switch_3C20_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x28:
        {
// switch_3C20_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
        case 0x29:
        {
// switch_3C20_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3C20_case_default
        }
    }
}
// fun_4260
fun_4260() {
    pri = arg_4;
    OP_JNZ lab_4298
    var_8 = 0;
    pri = fun_1288()
// lab_4298
    pri = arg_1;
    switch (pri) {
// switch_5670
        case default:
        {
// switch_5670_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 9056;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1348(var_264)
            OP_JZER lab_5C38
            pri = arg_3;
            switch (pri) {
// switch_5BE0
                case default:
                {
// switch_5BE0_case_default
                    OP_JUMP lab_5EF0
// lab_5EF0
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_5F60
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_5F60
                    var_8 = 0;
                    pri = fun_12C8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5BE0_case_0x1
                    var_8 = 32;
                    var_16 = 9208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_5BE0_case_default
                }
                case 0x2:
                {
// switch_5BE0_case_0x2
                    var_8 = 32;
                    var_16 = 9312;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_5BE0_case_default
                }
                case 0x3:
                {
// switch_5BE0_case_0x3
                    var_8 = 32;
                    var_16 = 9112;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01E0(var_16, var_8, var_0)
                    OP_JUMP switch_5BE0_case_default
                }
            }
// lab_5C38
            pri = arg_1;
            OP_JZER lab_5C88
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_5C88
            pri = 0;
            OP_JUMP lab_5C90
// lab_5C88
            pri = 1;
// lab_5C90
            OP_JZER lab_5CF8
            var_8 = 9408;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0D78(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_5CF8
            pri = 1;
            OP_JUMP lab_5D00
// lab_5CF8
            pri = 0;
// lab_5D00
            OP_JZER lab_5D50
            var_8 = 32;
            var_16 = 9504;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_5EF0
// lab_5D50
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_5DB8
            var_8 = 32;
            var_16 = 9664;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01E0(var_16, var_8, var_0)
            OP_JUMP lab_5EF0
// lab_5DB8
            var_16 = 9784;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0D78(var_24, var_16)
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
// switch_5670_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1:
        {
// switch_5670_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2:
        {
// switch_5670_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x3:
        {
// switch_5670_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x4:
        {
// switch_5670_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x5:
        {
// switch_5670_case_0x5
            var_8 = 1;
            var_16 = 8536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D38(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0FB0(var_40)
            OP_JUMP switch_5670_case_default
        }
        case 0x6:
        {
// switch_5670_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x7:
        {
// switch_5670_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x8:
        {
// switch_5670_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x9:
        {
// switch_5670_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0xa:
        {
// switch_5670_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0xb:
        {
// switch_5670_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0xc:
        {
// switch_5670_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0xd:
        {
// switch_5670_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0xe:
        {
// switch_5670_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0xf:
        {
// switch_5670_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x10:
        {
// switch_5670_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x11:
        {
// switch_5670_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x12:
        {
// switch_5670_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x13:
        {
// switch_5670_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x14:
        {
// switch_5670_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x15:
        {
// switch_5670_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x16:
        {
// switch_5670_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x17:
        {
// switch_5670_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x18:
        {
// switch_5670_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x19:
        {
// switch_5670_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1a:
        {
// switch_5670_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1b:
        {
// switch_5670_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1c:
        {
// switch_5670_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1d:
        {
// switch_5670_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1e:
        {
// switch_5670_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x1f:
        {
// switch_5670_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x20:
        {
// switch_5670_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x21:
        {
// switch_5670_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x22:
        {
// switch_5670_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x23:
        {
// switch_5670_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x24:
        {
// switch_5670_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x25:
        {
// switch_5670_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x26:
        {
// switch_5670_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x27:
        {
// switch_5670_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x28:
        {
// switch_5670_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x29:
        {
// switch_5670_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2a:
        {
// switch_5670_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2b:
        {
// switch_5670_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2c:
        {
// switch_5670_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2d:
        {
// switch_5670_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2e:
        {
// switch_5670_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x2f:
        {
// switch_5670_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x30:
        {
// switch_5670_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x31:
        {
// switch_5670_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x32:
        {
// switch_5670_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x33:
        {
// switch_5670_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x34:
        {
// switch_5670_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x35:
        {
// switch_5670_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x36:
        {
// switch_5670_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x37:
        {
// switch_5670_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x38:
        {
// switch_5670_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x39:
        {
// switch_5670_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x3a:
        {
// switch_5670_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x3b:
        {
// switch_5670_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x3c:
        {
// switch_5670_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8632;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x3d:
        {
// switch_5670_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8808;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
        case 0x3e:
        {
// switch_5670_case_0x3e
            var_8 = 3;
            var_16 = 8952;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0D38(var_24, var_16, var_8)
            OP_JUMP switch_5670_case_default
        }
    }
}
// fun_5F90
fun_5F90() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_6090
        case default:
        {
// switch_6090_case_default
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
// switch_6090_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_6090_case_default
        }
        case 0x1:
        {
// switch_6090_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_6090_case_default
        }
        case 0x2:
        {
// switch_6090_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_6090_case_default
        }
        case 0x3:
        {
// switch_6090_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_6090_case_default
        }
    }
}
// fun_6150
fun_6150() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_61A0
// lab_61A0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 9952;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_6218
    OP_JUMP lab_6248
// lab_6218
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_61A0
// lab_6248
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_62D0
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_4260(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_13A8(var_56)
// lab_62D0
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_6338
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1308(var_24, var_16)
// lab_6338
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1308(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_63F8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0DB0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0B88(var_88, var_80, var_72, var_64, var_56)
// lab_63F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_6438
    pri = 0;
    return pri;
// lab_6438
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6580
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 10072;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0D00(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_6548
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_6580
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0BD8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0DB0(var_40)
    pri = 0;
    return pri;
// lab_6548
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1308(var_16, var_8)
}
// fun_6608
fun_6608() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_66A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DB0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2680(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_66A0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_67F8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_6760
    var_24 = 10208;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_6760
    pri = 1;
    OP_JUMP lab_6768
// lab_67F8
    pri = 0;
    return pri;
// lab_6760
    pri = 0;
// lab_6768
    OP_JZER lab_67F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0DB0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2680(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_6808
fun_6808() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_6F30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_6870
fun_6870() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_6F30(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_68D8
fun_68D8() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_6948
    OP_CONST_S -8, 1
// lab_6948
    pri = arg_0;
    OP_JNZ lab_6968
    OP_ZERO_P_S -8
// lab_6968
    pri = var_8;
    OP_JZER lab_69F0
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_69F0
    pri = 0;
    return pri;
}
// fun_6A08
fun_6A08() {
    var_8 = 10312;
    pri = SoundPostEvent(var_8)
    var_16 = 0;
    var_24 = 8;
    pri = fun_2198(var_16)
    var_32 = 0;
    var_40 = 2;
    var_48 = arg_0;
    var_56 = 3;
    pri = WordSetNumber(var_56, var_48, var_40, var_32)
    var_64 = 3;
    var_72 = 0;
    var_80 = arg_2;
    var_88 = 24;
    pri = fun_1D00(var_80, var_72, var_64)
    var_96 = 1;
    var_104 = 8;
    pri = fun_1E48(var_96)
    var_112 = 0;
    pri = fun_1F08()
    var_120 = arg_0;
    var_128 = 8;
    pri = fun_25B0(var_120)
    var_136 = 0;
    var_144 = 8;
    pri = fun_06C8(var_136)
    pri = 0;
    return pri;
}
// fun_6B40
fun_6B40() {
    var_8 = 10480;
    var_16 = 8;
    pri = fun_2090(var_8)
    var_24 = 0;
    pri = fun_20C8()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2198(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_22D8(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_6C58
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_6C58
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_6608(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_6870(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2168()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2648(var_112)
    pri = 0;
    return pri;
}
// fun_6D28
fun_6D28() {
    var_8 = 10640;
    var_16 = 8;
    pri = fun_2090(var_8)
    var_24 = 0;
    pri = fun_20C8()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2198(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_22D8(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_2168()
    var_88 = 10872;
    var_96 = 8;
    pri = fun_2090(var_88)
    var_104 = 0;
    pri = fun_20C8()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_6608(var_128, var_120, var_112)
    var_144 = 11032;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_1D50(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_06C8(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_1E48(var_200)
    var_216 = 0;
    pri = fun_1F08()
    var_224 = 0;
    pri = fun_2168()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_25E0(var_232)
    pri = 0;
    return pri;
}
// fun_6F30
fun_6F30() {
    var_8 = 11216;
    var_16 = 8;
    pri = fun_2090(var_8)
    var_24 = 0;
    pri = fun_20C8()
    pri = arg_3;
    OP_JNZ lab_7050
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_7018
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_70C0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_7040
// lab_7050
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7260(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_7018
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7188(var_16, var_8)
// lab_7040
    OP_JUMP lab_7098
// lab_7098
    var_8 = 0;
    pri = fun_2168()
    pri = 0;
    return pri;
}
// fun_70C0
fun_70C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_7260(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_7170
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_7170
    pri = 0;
    return pri;
}
// fun_7188
fun_7188() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_21E8(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1D50(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1E48(var_72)
    var_88 = 0;
    pri = fun_1F08()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2198(var_96)
    pri = 0;
    return pri;
}
// fun_7260
fun_7260() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_72A8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_7568(var_8)
// lab_72A8
    pri = arg_4;
    OP_JNZ lab_7310
    var_8 = 0;
    var_16 = 8;
    pri = fun_2198(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_21E8(var_40, var_32, var_24)
// lab_7310
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_73B0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2238(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1D50(var_56, var_48, var_40)
    OP_JUMP lab_74A0
// lab_73B0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_7468
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_7468
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_7468
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1D50(var_24, var_16, var_8)
// lab_74A0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_74E0
    var_8 = 0;
    var_16 = 8;
    pri = fun_06C8(var_8)
// lab_74E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_1E48(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_7770(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_68D8(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_7568
fun_7568() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_75C8
    var_16 = 11376;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_75C8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_7708
        case default:
        {
// switch_7708_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_76F8
            var_16 = 11920;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_76F8
            OP_JUMP lab_7740
// lab_7740
            var_8 = 12136;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_7708_case_0x1
            var_8 = 11592;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_7740
        }
        case 0x2:
        {
// switch_7708_case_0x2
            var_8 = 11720;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_7740
        }
    }
}
// fun_7770
fun_7770() {
    pri = arg_2;
    OP_JNZ lab_7858
    var_8 = 0;
    var_16 = 8;
    pri = fun_2198(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_21E8(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2288(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_7858
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1D50(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1E48(var_40)
    var_56 = 0;
    pri = fun_1F08()
    pri = 0;
    return pri;
}
// fun_78D0
fun_78D0() {
    pri = g_mode;
    switch (pri) {
// switch_7968
        case default:
        {
// switch_7968_case_default
            pri = CommandNOP()
            OP_JUMP lab_79A0
// lab_79A0
            pri = 0;
            return pri;
        }
        case 0xdce1924f16bfdf8f:
        {
// switch_7968_case_0xdce1924f16bfdf8f
            var_8 = 0;
            pri = fun_79C8()
            OP_JUMP lab_79A0
        }
        case 0x0:
        {
// switch_7968_case_0x0
            var_8 = 0;
            pri = fun_79B0()
            OP_JUMP lab_79A0
        }
    }
}
// fun_79B0
fun_79B0() {
    pri = 0;
    return pri;
}
// fun_79C8
fun_79C8() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_5F90(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    var_112 = 5350148738379256139;
    var_120 = var_8;
    var_128 = 56;
    pri = fun_1C50(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1E48(var_136)
    OP_CONST_S -16, 1
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
}
// lab_7AF8
pri = var_16;
OP_JZER lab_7D30
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5350147638867627928;
var_56 = var_8;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
var_88 = 0;
var_96 = 4052765333079970223;
var_104 = 0;
var_112 = 24;
pri = fun_1F38(var_104, var_96, var_88)
var_120 = 0;
var_128 = 4052764233568342012;
var_136 = 1;
var_144 = 24;
pri = fun_1F38(var_136, var_128, var_120)
var_152 = 0;
var_160 = 4052767532103226645;
var_168 = 2;
var_176 = 24;
pri = fun_1F38(var_168, var_160, var_152)
var_184 = 0;
var_192 = 1;
var_200 = 0;
var_208 = 1;
var_216 = 32;
pri = fun_2020(var_208, var_200, var_192, var_184)
var_24 = pri;
pri = var_24;
OP_EQ_P_C_PRI 1
OP_JZER lab_7D18
var_224 = 0;
var_232 = 3;
var_240 = 0;
var_248 = 100;
var_256 = -1;
var_264 = 5540616453837043630;
var_272 = var_8;
var_280 = 56;
pri = fun_1C50(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
var_288 = 1;
var_296 = 8;
pri = fun_1E48(var_288)
OP_JUMP lab_7D20
// lab_7D30
pri = var_24;
OP_JNZ lab_7F98
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5349293318332697206;
var_56 = var_8;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
var_96 = 0;
pri = fun_07D8()
var_40 = pri;
pri = var_40;
OP_JZER lab_7F78
var_104 = 0;
pri = fun_1F08()
pri = PokePartyRecoverAll()
pri = CallRegisterBattleTowerPokeParty()
pri = IsCancelTowerPokePartyDecide()
OP_JZER lab_7F78
var_112 = -6559217701492432777;
pri = FlagSet(var_112)
var_120 = -4644091915989805719;
pri = FlagSet(var_120)
var_128 = 0;
var_136 = 3;
var_144 = 0;
var_152 = 100;
var_160 = -1;
var_168 = 5349294417844325417;
var_176 = var_8;
var_184 = 56;
pri = fun_1C50(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
var_192 = 1;
var_200 = 8;
pri = fun_1E48(var_192)
var_208 = 0;
pri = fun_1F08()
var_216 = var_8;
var_224 = 8;
pri = fun_8090(var_216)
var_32 = pri;
// lab_7F98
pri = var_32;
OP_JZER lab_8028
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5350149837890884350;
var_56 = var_8;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
// lab_8028
var_8 = 0;
pri = fun_1F08()
var_16 = 0;
var_24 = 0;
var_32 = 0;
var_40 = var_8;
var_48 = 32;
pri = fun_6150(var_40, var_32, var_24, var_16)
pri = 0;
return pri;
// lab_7F78
pri = EndBattleTower()
// lab_7D18
OP_ZERO_P_S -16
// lab_7D20
OP_JUMP lab_7AF8
// fun_8090
fun_8090() {
    var_8 = 0;
    OP_PUSH5_C 4630504525502400147, 4625446406519373288, 4638222556556694894, -4598266477673375685, -4587999238867259583
    OP_PUSH2_C 4638714585863877957, -4592673538783150023
    var_16 = 12320;
    pri = EvCameraRegisterPreset(var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40, var_-48)
    var_24 = 0;
    OP_PUSH5_C 4632388115654888699, 4629763089592234329, 4637715117972280551, -4615222037689216358, 4636875417529263927
    OP_PUSH2_C 4638710040711507149, -4591854125578711076
    var_32 = 12488;
    pri = EvCameraRegisterPreset(var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_40 = 0;
    OP_PUSH5_C 4630504525502400147, 4644651577669849052, 4642711994579852752, -4573358795431972335, 4644725863947568203
    OP_PUSH2_C 4643390860344322209, -4572502224328829721
    var_48 = 12656;
    pri = EvCameraRegisterPreset(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    OP_PUSH5_C 4595407847646249795, 4630650300548413666, 4644117144139832343, 4650698227508797782, -4576115819756701214
    OP_PUSH3_C 4644840484815393805, 4653282971036624206, -4573212439052170979
    var_56 = 12824;
    pri = EvCameraRegisterPreset(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_64 = 0;
    OP_PUSH5_C 4630504525502400147, 4648686165254413279, 4635745730517347150, -4599296686784185801, 4644974042193752593
    OP_PUSH2_C 4642590656382076694, -4581776826086879325
    var_72 = 12992;
    pri = EvCameraRegisterPreset(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_80 = 0;
    OP_PUSH5_C 4630504525502400147, 4648671596725345247, 4639184505733852862, -4604765657761481113, 4647746066161660707
    OP_PUSH2_C 4639311183652674609, -4587921581047085019
    var_88 = 13152;
    pri = EvCameraRegisterPreset(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    pri = GetTowerBattleMode()
    var_8 = pri;
    var_104 = 1;
    var_112 = 0;
    var_120 = 32;
    var_128 = 8;
    var_136 = 32;
    pri = fun_0388(var_128, var_120, var_112, var_104)
    var_144 = 0;
    pri = fun_03F8()
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = 90;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 20320;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 19680;
    pri = float(var_224)
    var_232 = pri;
    OP_PUSH2_C -6748584044222257478, -8444339788000014419
    var_240 = 80;
    pri = fun_0528(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    pri = EvCameraStart()
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = 0;
    var_320 = 1;
    var_328 = 8802641224559852288;
    var_336 = 13320;
    pri = EvCameraPresetSingle(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_344 = 0;
    pri = fun_2520()
    var_352 = 0;
    var_360 = 0;
    var_368 = 0;
    var_376 = 0;
    var_384 = 0;
    var_392 = 0;
    var_400 = 0;
    var_408 = 0;
    var_416 = 2;
    var_424 = 120;
    var_432 = 8802641224559852288;
    var_440 = 13488;
    pri = EvCameraPresetSingle(var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_448 = 80;
    var_456 = 8;
    var_464 = 16;
    pri = fun_0328(var_456, var_448)
    var_472 = 0;
    pri = fun_03F8()
    var_480 = 90;
    var_488 = 8;
    pri = fun_0060(var_480)
    var_504 = 0;
    pri = GetNowTowerRank(var_504)
    var_16 = pri;
    var_520 = 1;
    pri = GetNowTowerRank(var_520)
    var_24 = pri;
    var_536 = var_8;
    pri = GetNowTowerRank(var_536)
    var_32 = pri;
    OP_ZERO_P_S -40
    OP_ZERO_P_S -48
    OP_ZERO_P_S -56
    OP_ZERO_P_S -64
    OP_ZERO_P_S -72
    OP_ZERO_P_S -80
    OP_ZERO_P_S -88
    OP_CONST_S -96, 1
}
// lab_8730
pri = var_72;
OP_JNZ lab_98A0
pri = RecoverBattleTowerPokeParty()
pri = IsNextTowerBossBattle()
var_88 = pri;
pri = IsNextRankUpBattle()
var_104 = pri;
pri = SetTowerTrainer()
var_16 = 20320;
pri = float(var_16)
var_24 = pri;
var_32 = 20620;
pri = float(var_32)
var_40 = pri;
pri = RegisterBattleTowerTrainer(var_40, var_32)
var_48 = pri;
var_48 = 0;
pri = fun_08C8()
pri = StartLoadTowerTrainerBattle()
pri = var_96;
OP_JNZ lab_8910
pri = EvCameraStart()
var_56 = 0;
var_64 = 0;
var_72 = 0;
var_80 = 0;
var_88 = 0;
var_96 = 0;
var_104 = 0;
var_112 = 0;
var_120 = 2;
var_128 = 120;
var_136 = 8802641224559852288;
var_144 = 13656;
pri = EvCameraPresetSingle(var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56)
// lab_98A0
var_8 = 3;
var_16 = 900;
pri = EvCameraEnd(var_16, var_8)
pri = EvCameraPresetClear()
var_24 = 0;
var_32 = 1;
var_40 = 0;
var_48 = 0;
var_56 = 0;
var_64 = 180;
pri = float(var_64)
var_72 = pri;
var_80 = 3900;
pri = float(var_80)
var_88 = pri;
var_96 = 1950;
pri = float(var_96)
var_104 = pri;
OP_PUSH2_C -6747628568617531344, -8445330447976843305
var_112 = 80;
pri = fun_0528(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
var_120 = 1;
var_128 = 1;
var_136 = 0;
var_144 = 1;
var_152 = 1;
var_160 = arg_0;
var_168 = 48;
pri = fun_5F90(var_160, var_152, var_144, var_136, var_128, var_120)
pri = var_80;
OP_JZER lab_9B38
OP_LOAD_S_BOTH -40, -32
OP_JSGEQ lab_9AB0
var_176 = 0;
var_184 = 3;
var_192 = 0;
var_200 = 100;
var_208 = -1;
var_216 = 5349295517355953628;
var_224 = arg_0;
var_232 = 56;
pri = fun_1C50(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
var_240 = 1;
var_248 = 8;
pri = fun_1E48(var_240)
// lab_9B38
pri = var_32;
OP_EQ_P_C_PRI 10
OP_JZER lab_9B88
pri = var_88;
OP_JZER lab_9B88
pri = 1;
OP_JUMP lab_9B90
// lab_9B88
pri = 0;
// lab_9B90
OP_JZER lab_9C58
pri = IsRentalBattleTowerPokeParty()
OP_JNZ lab_9C58
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5350138842774602240;
var_56 = arg_0;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
pri = SetBattleTowerRibbon()
// lab_9C58
OP_LOAD_S_BOTH -32, -40
OP_JSGEQ lab_9EA8
var_8 = 15240;
var_16 = 8;
pri = fun_2090(var_8)
var_24 = 0;
pri = fun_20C8()
var_40 = var_40;
var_48 = 8;
pri = fun_B1D0(var_40)
var_104 = pri;
var_56 = 1;
var_64 = var_104;
var_72 = 0;
var_80 = 24;
pri = fun_22D8(var_72, var_64, var_56)
var_88 = 0;
var_96 = 3;
var_104 = 0;
var_112 = 100;
var_120 = -1;
var_128 = 5350152036914140772;
var_136 = arg_0;
var_144 = 56;
pri = fun_1C50(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
var_152 = 1;
var_160 = 8;
pri = fun_1E48(var_152)
pri = var_88;
OP_JZER lab_9E88
var_176 = var_40;
var_184 = 8;
pri = fun_B488(var_176)
var_112 = pri;
var_192 = 1;
var_200 = var_112;
var_208 = 1;
var_216 = 24;
pri = fun_22D8(var_208, var_200, var_192)
var_224 = 0;
var_232 = 3;
var_240 = 0;
var_248 = 100;
var_256 = -1;
var_264 = 5349297716379210050;
var_272 = arg_0;
var_280 = 56;
pri = fun_1C50(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
var_288 = 1;
var_296 = 8;
pri = fun_1E48(var_288)
// lab_9EA8
OP_LOAD_S_BOTH -56, -64
OP_JSGEQ lab_A160
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5350155335449025405;
var_56 = arg_0;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
var_88 = 0;
pri = fun_1F08()
var_96 = var_64;
var_104 = 8;
pri = fun_A670(var_96)
pri = var_64;
OP_EQ_P_C_PRI 3
OP_JZER lab_A160
var_112 = -3019383630743836693;
pri = FlagGet(var_112)
OP_JNZ lab_A078
var_120 = 0;
var_128 = 3;
var_136 = 0;
var_144 = 100;
var_152 = -1;
var_160 = 5350154235937397194;
var_168 = arg_0;
var_176 = 56;
pri = fun_1C50(var_168, var_160, var_152, var_144, var_136, var_128, var_120)
var_184 = 1;
var_192 = 8;
pri = fun_1E48(var_184)
var_200 = -3019383630743836693;
pri = FlagSet(var_200)
// lab_A160
pri = var_80;
OP_NOT 
return pri;
// lab_A078
pri = var_16;
alt = 3;
OP_JSGEQ lab_A0D0
pri = var_24;
alt = 3;
OP_JSGEQ lab_A0D0
pri = 1;
OP_JUMP lab_A0D8
// lab_A0D0
pri = 0;
// lab_A0D8
OP_JZER lab_A160
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5350139942286230451;
var_56 = arg_0;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
// lab_9E88
var_8 = 0;
pri = fun_2168()
// lab_9AB0
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 5350153136425768983;
var_56 = arg_0;
var_64 = 56;
pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_1E48(var_72)
OP_JUMP lab_A160
// lab_8910
var_8 = 1;
var_16 = 0;
var_24 = 4641240890982006784;
var_32 = 0;
var_40 = 0;
var_48 = 20320;
pri = float(var_48)
var_56 = pri;
var_64 = 20320;
pri = float(var_64)
var_72 = pri;
var_80 = 4607182418800017408;
var_88 = var_48;
var_96 = 72;
pri = fun_0B10(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
var_104 = var_48;
var_112 = 8;
pri = fun_0BD8(var_104)
pri = var_96;
OP_JNZ lab_8A10
var_120 = 0;
pri = fun_2520()
// lab_8A10
var_16 = 1;
var_24 = 1;
var_32 = 16;
pri = fun_0160(var_24, var_16)
var_112 = pri;
pri = var_112;
OP_EQ_P_C_PRI 1
OP_JZER lab_8BD8
var_40 = 0;
var_48 = 0;
var_56 = 0;
var_64 = 0;
var_72 = 0;
var_80 = 0;
var_88 = 0;
var_96 = 0;
var_104 = 0;
var_112 = 1;
var_120 = 8802641224559852288;
var_128 = 13824;
pri = EvCameraPresetSingle(var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40)
var_136 = 0;
pri = fun_2520()
var_144 = 0;
var_152 = 0;
var_160 = -10;
pri = float(var_160)
var_168 = pri;
var_176 = 0;
OP_PUSH2_C -4601552919265804288, -4601552919265804288
var_184 = 0;
var_192 = -10;
pri = float(var_192)
var_200 = pri;
var_208 = 2;
var_216 = 120;
var_224 = 8802641224559852288;
var_232 = 13984;
pri = EvCameraPresetSingle(var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144)
OP_JUMP lab_8D10
// lab_8BD8
var_8 = 0;
var_16 = 0;
var_24 = 0;
var_32 = 0;
var_40 = 0;
var_48 = 0;
var_56 = 0;
var_64 = 0;
var_72 = 0;
var_80 = 1;
var_88 = 8802641224559852288;
var_96 = 14144;
pri = EvCameraPresetSingle(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_104 = 0;
pri = fun_2520()
var_112 = 0;
var_120 = 0;
var_128 = 0;
var_136 = 0;
var_144 = -100;
pri = float(var_144)
var_152 = pri;
var_160 = 0;
var_168 = 0;
var_176 = 0;
var_184 = 2;
var_192 = 120;
var_200 = 8802641224559852288;
var_208 = 14312;
pri = EvCameraPresetSingle(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120)
// lab_8D10
pri = GetTowerTrainerMessageHash()
var_120 = pri;
var_16 = 0;
var_24 = 3;
var_32 = 0;
var_40 = 100;
var_48 = -1;
var_56 = var_120;
var_64 = var_48;
var_72 = 56;
pri = fun_1C50(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
var_80 = 1;
var_88 = 8;
pri = fun_1E48(var_80)
var_96 = 0;
pri = fun_1F08()
var_104 = 0;
pri = fun_2328()
pri = CallTowerBattle()
pri = var_88;
OP_JZER lab_8EF8
var_112 = 1;
var_120 = 1;
var_128 = 90;
pri = float(var_128)
var_136 = pri;
var_144 = 20320;
pri = float(var_144)
var_152 = pri;
var_160 = 19680;
pri = float(var_160)
var_168 = pri;
var_176 = 8802641224559852288;
var_184 = 48;
pri = fun_0A40(var_176, var_168, var_160, var_152, var_144, var_136)
var_192 = 1;
var_200 = 8802641224559852288;
var_208 = 16;
pri = fun_0AD8(var_200, var_192)
OP_JUMP lab_8FC8
// lab_8EF8
var_8 = 1;
var_16 = 0;
var_24 = 0;
var_32 = 0;
var_40 = 0;
var_48 = 90;
pri = float(var_48)
var_56 = pri;
var_64 = 20320;
pri = float(var_64)
var_72 = pri;
var_80 = 19680;
pri = float(var_80)
var_88 = pri;
OP_PUSH2_C -6748584044222257478, -8444339788000014419
var_96 = 80;
pri = fun_0528(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
// lab_8FC8
var_8 = 0;
pri = fun_2430()
var_80 = pri;
pri = var_80;
OP_JZER lab_9020
var_16 = 14480;
pri = SoundPostEvent(var_16)
// lab_9020
pri = EvCameraStart()
pri = var_80;
OP_JNZ lab_9080
pri = var_88;
OP_JZER lab_9080
pri = 1;
OP_JUMP lab_9088
// lab_9080
pri = 0;
// lab_9088
OP_JZER lab_9208
var_8 = 0;
var_16 = 0;
var_24 = 0;
var_32 = 0;
var_40 = 0;
var_48 = 0;
var_56 = 0;
var_64 = 0;
var_72 = 0;
var_80 = 1;
var_88 = 8802641224559852288;
var_96 = 14568;
pri = EvCameraPresetSingle(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_104 = 0;
pri = fun_2520()
var_112 = 0;
var_120 = 0;
var_128 = -10;
pri = float(var_128)
var_136 = pri;
var_144 = 0;
OP_PUSH3_C 4621819117588971520, -4594234569871327232, -4601552919265804288
var_152 = 10;
pri = float(var_152)
var_160 = pri;
var_168 = 2;
var_176 = 120;
var_184 = 8802641224559852288;
var_192 = 14736;
pri = EvCameraPresetSingle(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
OP_JUMP lab_9368
// lab_9208
var_8 = 0;
var_16 = 0;
var_24 = 0;
var_32 = 0;
var_40 = 0;
var_48 = 0;
var_56 = 0;
var_64 = 0;
var_72 = 0;
var_80 = 1;
var_88 = 8802641224559852288;
var_96 = 14904;
pri = EvCameraPresetSingle(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_104 = 0;
pri = fun_2520()
var_112 = 0;
var_120 = 0;
var_128 = -10;
pri = float(var_128)
var_136 = pri;
var_144 = 0;
OP_PUSH3_C -4601552919265804288, -4594234569871327232, -4601552919265804288
var_152 = -10;
pri = float(var_152)
var_160 = pri;
var_168 = 2;
var_176 = 120;
var_184 = 8802641224559852288;
var_192 = 15072;
pri = EvCameraPresetSingle(var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
// lab_9368
var_8 = 80;
var_16 = 8;
var_24 = 16;
pri = fun_0328(var_16, var_8)
var_32 = 0;
pri = fun_03F8()
pri = var_88;
OP_JZER lab_93E0
var_40 = var_8;
pri = ResetMaxRankTowerWinCount(var_40)
// lab_93E0
pri = var_80;
OP_JZER lab_9488
var_8 = var_8;
pri = SubTowerPoint(var_8)
var_16 = var_8;
pri = GetNowTowerRank(var_16)
var_40 = pri;
OP_CONST_S -72, 1
var_24 = 20;
var_32 = 8;
pri = fun_0060(var_24)
OP_JUMP lab_9888
// lab_9488
OP_CONST_S -128, 47
pri = var_8;
OP_EQ_P_C_PRI 1
OP_JZER lab_94E0
OP_CONST_S -128, 48
// lab_94E0
var_8 = var_128;
var_16 = 8;
pri = fun_0698(var_8)
var_16 = var_8;
pri = GetMaxTowerRank(var_16)
var_56 = pri;
var_24 = var_8;
pri = AddTowerWinCount(var_24)
var_32 = var_8;
pri = AddTowerPoint(var_32)
var_40 = var_8;
pri = GetNowTowerRank(var_40)
var_40 = pri;
var_48 = var_8;
pri = GetMaxTowerRank(var_48)
var_64 = pri;
pri = var_88;
OP_JZER lab_9600
var_56 = var_48;
var_64 = var_56;
var_72 = 16;
pri = fun_AB50(var_64, var_56)
// lab_9600
OP_CONST_S -128, 2
OP_PUSH2_C -4892133555225562043, 8802641224559852288
var_16 = var_128;
var_24 = 24;
pri = fun_6A08(var_16, var_8, var_0)
var_32 = var_8;
var_40 = 8;
pri = fun_A180(var_32)
pri = var_88;
OP_JNZ lab_96C0
pri = var_104;
OP_JNZ lab_96C0
pri = 0;
OP_JUMP lab_96C8
// lab_96C0
pri = 1;
// lab_96C8
OP_JZER lab_9700
OP_CONST_S -72, 1
OP_JUMP lab_9878
// lab_9700
OP_ZERO_P_S -136
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = 5350150937402512561;
var_48 = 32;
pri = fun_1AF8(var_40, var_32, var_24, var_16)
var_56 = 1;
var_64 = 8;
pri = fun_1E48(var_56)
var_72 = 0;
var_80 = 4052766432591598434;
var_88 = 0;
var_96 = 24;
pri = fun_1F38(var_88, var_80, var_72)
var_104 = 0;
var_112 = 4052767532103226645;
var_120 = 1;
var_128 = 24;
pri = fun_1F38(var_120, var_112, var_104)
var_136 = 0;
var_144 = 1;
var_152 = 0;
var_160 = 1;
var_168 = 32;
pri = fun_2020(var_160, var_152, var_144, var_136)
var_136 = pri;
pri = var_136;
OP_EQ_P_C_PRI 1
OP_JZER lab_9858
OP_CONST_S -72, 1
// lab_9858
var_8 = 0;
pri = fun_1F08()
// lab_9878
OP_ZERO_P_S -96
// lab_9888
OP_JUMP lab_8730
// fun_A180
fun_A180() {
    OP_CONST_S -8, 51
    var_24 = arg_0;
    pri = GetTowerWinCountForItem(var_24)
    var_16 = pri;
    OP_CONST_S -24, 1
    pri = var_16;
    switch (pri) {
// switch_A468
        case default:
        {
// switch_A468_case_default
            OP_ZERO_P_S -24
            OP_JUMP lab_A560
// lab_A560
            pri = var_24;
            OP_JZER lab_A5B8
            var_8 = 2;
            var_16 = 0;
            var_24 = 9;
            var_32 = 1;
            var_40 = var_8;
            var_48 = 40;
            pri = fun_6808(var_40, var_32, var_24, var_16, var_8)
// lab_A5B8
            pri = 0;
            return pri;
        }
        case 0xa:
        {
// switch_A468_case_0xa
            OP_CONST_S -8, 51
            OP_JUMP lab_A560
        }
        case 0x14:
        {
// switch_A468_case_0x14
            var_8 = 0;
            pri = fun_A5D0()
            var_8 = pri;
            OP_JUMP lab_A560
        }
        case 0x1e:
        {
// switch_A468_case_0x1e
            OP_CONST_S -8, 795
            OP_JUMP lab_A560
        }
        case 0x28:
        {
// switch_A468_case_0x28
            OP_CONST_S -8, 53
            OP_JUMP lab_A560
        }
        case 0x32:
        {
// switch_A468_case_0x32
            OP_CONST_S -8, 796
            OP_JUMP lab_A560
        }
        case 0x64:
        {
// switch_A468_case_0x64
            OP_CONST_S -8, 206
            OP_JUMP lab_A560
        }
        case 0xc8:
        {
// switch_A468_case_0xc8
            OP_CONST_S -8, 207
            OP_JUMP lab_A560
        }
        case 0xd2:
        {
// switch_A468_case_0xd2
            var_8 = 0;
            pri = fun_A5D0()
            var_8 = pri;
            OP_JUMP lab_A560
        }
        case 0xdc:
        {
// switch_A468_case_0xdc
            OP_CONST_S -8, 53
            OP_JUMP lab_A560
        }
        case 0xe6:
        {
// switch_A468_case_0xe6
            OP_CONST_S -8, 795
            OP_JUMP lab_A560
        }
        case 0xf0:
        {
// switch_A468_case_0xf0
            OP_CONST_S -8, 645
            OP_JUMP lab_A560
        }
        case 0xfa:
        {
// switch_A468_case_0xfa
            OP_CONST_S -8, 206
            OP_JUMP lab_A560
        }
        case 0x113:
        {
// switch_A468_case_0x113
            OP_CONST_S -8, 796
            OP_JUMP lab_A560
        }
        case 0x12c:
        {
// switch_A468_case_0x12c
            OP_CONST_S -8, 207
            OP_JUMP lab_A560
        }
    }
}
// fun_A5D0
fun_A5D0() {
    pri = 15400;
    OP_ADDR_ALT -168
    OP_MOVS 168
    var_184 = 0;
    var_192 = 21;
    var_200 = 16;
    pri = fun_0160(var_192, var_184)
    var_176 = pri;
    OP_ADDR_P_ALT -168
    pri = var_176;
    OP_LIDX_P_B 3
    return pri;
}
// fun_A670
fun_A670() {
    pri = 15568;
    OP_ADDR_ALT -88
    OP_MOVS 88
    pri = 15656;
    OP_ADDR_ALT -176
    OP_MOVS 88
    pri = 15744;
    OP_ADDR_ALT -264
    OP_MOVS 88
    pri = 15832;
    OP_ADDR_ALT -352
    OP_MOVS 88
    pri = 15920;
    OP_ADDR_ALT -440
    OP_MOVS 88
    pri = 16008;
    OP_ADDR_ALT -528
    OP_MOVS 88
    OP_ADDR_P_ALT -88
    pri = arg_0;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A858
    var_536 = 2;
    var_544 = 0;
    var_552 = 9;
    OP_ADDR_P_ALT -88
    pri = arg_0;
    OP_LIDX_P_B 3
    var_560 = pri;
    var_568 = 50;
    var_576 = 40;
    pri = fun_6808(var_568, var_560, var_552, var_544, var_536)
// lab_A858
    OP_ADDR_P_ALT -352
    pri = arg_0;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A8E8
    var_8 = 2;
    var_16 = 0;
    var_24 = 9;
    OP_ADDR_P_ALT -352
    pri = arg_0;
    OP_LIDX_P_B 3
    var_32 = pri;
    var_40 = 795;
    var_48 = 40;
    pri = fun_6808(var_40, var_32, var_24, var_16, var_8)
// lab_A8E8
    OP_ADDR_P_ALT -440
    pri = arg_0;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A978
    var_8 = 2;
    var_16 = 0;
    var_24 = 9;
    OP_ADDR_P_ALT -440
    pri = arg_0;
    OP_LIDX_P_B 3
    var_32 = pri;
    var_40 = 645;
    var_48 = 40;
    pri = fun_6808(var_40, var_32, var_24, var_16, var_8)
// lab_A978
    OP_ADDR_P_ALT -528
    pri = arg_0;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_AA08
    var_8 = 2;
    var_16 = 0;
    var_24 = 9;
    OP_ADDR_P_ALT -528
    pri = arg_0;
    OP_LIDX_P_B 3
    var_32 = pri;
    var_40 = 796;
    var_48 = 40;
    pri = fun_6808(var_40, var_32, var_24, var_16, var_8)
// lab_AA08
    OP_ADDR_P_ALT -264
    pri = arg_0;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_AAB0
    var_8 = 2;
    var_16 = 0;
    var_24 = 9;
    OP_ADDR_P_ALT -264
    pri = arg_0;
    OP_LIDX_P_B 3
    var_32 = pri;
    var_40 = 0;
    pri = fun_A5D0()
    var_48 = pri;
    var_56 = 40;
    pri = fun_6808(var_48, var_40, var_32, var_24, var_16)
// lab_AAB0
    OP_ADDR_P_ALT -176
    pri = arg_0;
    OP_LIDX_P_B 3
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_AB38
    OP_PUSH2_C -4892133555225562043, 8802641224559852288
    OP_ADDR_P_ALT -176
    pri = arg_0;
    OP_LIDX_P_B 3
    var_8 = pri;
    var_16 = 24;
    pri = fun_6A08(var_8, var_0, var_-8)
// lab_AB38
    pri = 0;
    return pri;
}
// fun_AB50
fun_AB50() {
    pri = arg_0;
    switch (pri) {
// switch_B158
        case default:
        {
// switch_B158_case_default
            pri = 0;
            return pri;
            OP_JUMP lab_B1C0
// lab_B1C0
            pri = 0;
            return pri;
        }
        case 0x2:
        {
// switch_B158_case_0x2
            OP_CONST_S -8, 1
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 7847607940689691541;
            var_64 = arg_1;
            var_72 = 56;
            pri = fun_1C50(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1E48(var_80)
            var_96 = 25;
            pri = GetNpcLicenseCardFlag(var_96)
            OP_JNZ lab_AD30
            var_104 = 25;
            pri = SetNpcLicenseCardFlag(var_104)
            var_112 = 0;
            var_120 = 3;
            var_128 = 0;
            var_136 = 100;
            var_144 = -1;
            var_152 = 7847606841178063330;
            var_160 = arg_1;
            var_168 = 56;
            pri = fun_1C50(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_176 = 1;
            var_184 = 8;
            pri = fun_1E48(var_176)
            var_192 = 0;
            pri = fun_1F08()
            var_200 = 1;
            var_208 = 25;
            var_216 = 7352798426930273587;
            var_224 = arg_1;
            var_232 = 32;
            pri = fun_6B40(var_224, var_216, var_208, var_200)
            OP_ZERO_P_S -8
// lab_AD30
            pri = var_8;
            OP_JZER lab_AD60
            var_8 = 0;
            pri = fun_1F08()
// lab_AD60
            OP_JUMP lab_B1C0
        }
        case 0x5:
        {
// switch_B158_case_0x5
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -4373531939089300476;
            var_56 = arg_1;
            var_64 = 56;
            pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1E48(var_72)
            var_88 = 0;
            pri = fun_1F08()
            OP_JUMP lab_B1C0
        }
        case 0x8:
        {
// switch_B158_case_0x8
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = 7645240550675751159;
            var_56 = arg_1;
            var_64 = 56;
            pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1E48(var_72)
            var_88 = 0;
            pri = fun_1F08()
            OP_JUMP lab_B1C0
        }
        case 0x9:
        {
// switch_B158_case_0x9
            OP_CONST_S -8, 1
            var_16 = 0;
            var_24 = 3;
            var_32 = 0;
            var_40 = 100;
            var_48 = -1;
            var_56 = 4705799616410085518;
            var_64 = arg_1;
            var_72 = 56;
            pri = fun_1C50(var_64, var_56, var_48, var_40, var_32, var_24, var_16)
            var_80 = 1;
            var_88 = 8;
            pri = fun_1E48(var_80)
            var_96 = 16096;
            var_104 = 8;
            pri = fun_2618(var_96)
            OP_JNZ lab_B050
            var_112 = 0;
            var_120 = 3;
            var_128 = 0;
            var_136 = 100;
            var_144 = -1;
            var_152 = 4705800715921713729;
            var_160 = arg_1;
            var_168 = 56;
            pri = fun_1C50(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
            var_176 = 1;
            var_184 = 8;
            pri = fun_1E48(var_176)
            var_192 = 0;
            pri = fun_1F08()
            var_200 = 8901974495669667349;
            var_208 = 16168;
            var_216 = arg_1;
            var_224 = 24;
            pri = fun_6D28(var_216, var_208, var_200)
            OP_ZERO_P_S -8
// lab_B050
            pri = var_8;
            OP_JZER lab_B080
            var_8 = 0;
            pri = fun_1F08()
// lab_B080
            OP_JUMP lab_B1C0
        }
        case 0xa:
        {
// switch_B158_case_0xa
            var_8 = 0;
            var_16 = 3;
            var_24 = 0;
            var_32 = 100;
            var_40 = -1;
            var_48 = -7828349385343078399;
            var_56 = arg_1;
            var_64 = 56;
            pri = fun_1C50(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_1E48(var_72)
            var_88 = 0;
            pri = fun_1F08()
            OP_JUMP lab_B1C0
        }
    }
}
// fun_B1D0
fun_B1D0() {
    pri = arg_0;
    switch (pri) {
// switch_B3A8
        case default:
        {
// switch_B3A8_case_default
            pri = 2464608289114832652;
            return pri;
        }
        case 0x0:
        {
// switch_B3A8_case_0x0
            pri = 2464608289114832652;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x1:
        {
// switch_B3A8_case_0x1
            pri = 2465607745184687226;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x2:
        {
// switch_B3A8_case_0x2
            pri = 2465608844696315437;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x3:
        {
// switch_B3A8_case_0x3
            pri = 2465592352021892272;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x4:
        {
// switch_B3A8_case_0x4
            pri = 2465593451533520483;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x5:
        {
// switch_B3A8_case_0x5
            pri = 2465594551045148694;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x6:
        {
// switch_B3A8_case_0x6
            pri = 2465595650556776905;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x7:
        {
// switch_B3A8_case_0x7
            pri = 2465596750068405116;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x8:
        {
// switch_B3A8_case_0x8
            pri = 2465597849580033327;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0x9:
        {
// switch_B3A8_case_0x9
            pri = 2465598949091661538;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
        case 0xa:
        {
// switch_B3A8_case_0xa
            pri = 2465600048603289749;
            return pri;
            OP_JUMP switch_B3A8_case_default
        }
    }
}
// fun_B488
fun_B488() {
    pri = arg_0;
    switch (pri) {
// switch_B660
        case default:
        {
// switch_B660_case_default
            pri = -8673428791839308494;
            return pri;
        }
        case 0x0:
        {
// switch_B660_case_0x0
            pri = -8673428791839308494;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x1:
        {
// switch_B660_case_0x1
            pri = -8673428791839308494;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x2:
        {
// switch_B660_case_0x2
            pri = -8673428791839308494;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x3:
        {
// switch_B660_case_0x3
            pri = -8673434289397449549;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x4:
        {
// switch_B660_case_0x4
            pri = -8673434289397449549;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x5:
        {
// switch_B660_case_0x5
            pri = -8673434289397449549;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x6:
        {
// switch_B660_case_0x6
            pri = -8673435388909077760;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x7:
        {
// switch_B660_case_0x7
            pri = -8673435388909077760;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x8:
        {
// switch_B660_case_0x8
            pri = -8673435388909077760;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0x9:
        {
// switch_B660_case_0x9
            pri = -8673432090374193127;
            return pri;
            OP_JUMP switch_B660_case_default
        }
        case 0xa:
        {
// switch_B660_case_0xa
            pri = -8673433189885821338;
            return pri;
            OP_JUMP switch_B660_case_default
        }
    }
}
