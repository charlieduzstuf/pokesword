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
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0450
// lab_0450
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0490
    OP_JUMP lab_0500
// lab_0490
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_04D0
    OP_JUMP lab_0500
// lab_04D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0450
// lab_0500
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0548
fun_0548() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0580
// lab_0580
    var_8 = 0;
    pri = fun_06C8()
    OP_JNZ lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0580
// lab_05E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0618
// lab_0618
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0658
    pri = 0;
    return pri;
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0618
    pri = 0;
    return pri;
}
// fun_0698
fun_0698() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_06C8
fun_06C8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_06F0
fun_06F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0748
fun_0748() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectActiveDynamicCollision_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_07F8
fun_07F8() {
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
// fun_0870
fun_0870() {
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
// fun_0930
fun_0930() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0980
fun_0980() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1238(var_8)
    OP_JZER lab_0A50
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1268(var_24)
    OP_JNZ lab_0A50
    pri = 0;
    return pri;
// lab_0A50
    OP_JUMP lab_0A60
// lab_0A60
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AC0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A60
    pri = 0;
    return pri;
}
// fun_0B00
fun_0B00() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B40
fun_0B40() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0B78
fun_0B78() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0BC0
    pri = 0;
    return pri;
// lab_0BC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C00
// lab_0C00
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1238(var_8)
    OP_JNZ lab_0C88
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0C78
    pri = 0;
    return pri;
// lab_0C88
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0CD0
    pri = 0;
    return pri;
// lab_0CD0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D30
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0EA0(var_8)
    pri = 0;
    return pri;
// lab_0D30
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C00
    pri = 0;
    return pri;
// lab_0C78
    OP_JUMP lab_0CD0
}
// fun_0D78
fun_0D78() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0DC0
// lab_0DC0
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E18
    pri = 0;
    return pri;
// lab_0E18
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E58
    pri = 0;
    return pri;
// lab_0E58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0DC0
    pri = 0;
    return pri;
}
// fun_0EA0
fun_0EA0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0ED8
fun_0ED8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F28
    pri = 0;
    return pri;
// lab_0F28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1238(var_8)
    OP_JZER lab_1058
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F80
    OP_ZERO_P_S 64
// lab_1058
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1090
    OP_CONST_S 64, 1
// lab_1090
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10C8
    OP_CONST_S 72, 1
// lab_10C8
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
// lab_0F80
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FA8
    OP_ZERO_P_S 72
// lab_0FA8
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
    OP_JUMP lab_1168
// lab_1168
    pri = 0;
    return pri;
}
// fun_1178
fun_1178() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11B8
fun_11B8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11F8
fun_11F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1238
fun_1238() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1298
fun_1298() {
    OP_JUMP lab_12B0
// lab_12B0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1340
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1330
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_1340
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_13D0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_13C0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    pri = 0;
    return pri;
// lab_13D0
    pri = 0;
    return pri;
// lab_13C0
    OP_JUMP lab_13E0
// lab_13E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_12B0
    pri = 0;
    return pri;
// lab_1330
    OP_JUMP lab_13E0
}
// fun_1420
fun_1420() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0B78(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1298(var_40)
    pri = 0;
    return pri;
}
// fun_14A8
fun_14A8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_14E0
fun_14E0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1508
fun_1508() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
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
// switch_1B58
        case default:
        {
// switch_1B58_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1BA0
// lab_1BA0
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
            OP_JNZ lab_1C48
            var_88 = 0;
            pri = fun_1E00()
// lab_1C48
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1B58_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1740
                case default:
                {
// switch_1740_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17B8
// lab_17B8
                    OP_JUMP lab_1BA0
                }
                case 0x0:
                {
// switch_1740_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_17B8
                }
                case 0x1:
                {
// switch_1740_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_17B8
                }
                case 0x2:
                {
// switch_1740_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_17B8
                }
                case 0x3:
                {
// switch_1740_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_17B8
                }
                case 0x4:
                {
// switch_1740_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_17B8
                }
                case 0x5:
                {
// switch_1740_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_17B8
                }
            }
        }
        case 0x65:
        {
// switch_1B58_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_18F8
                case default:
                {
// switch_18F8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1970
// lab_1970
                    OP_JUMP lab_1BA0
                }
                case 0x0:
                {
// switch_18F8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1970
                }
                case 0x1:
                {
// switch_18F8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1970
                }
                case 0x2:
                {
// switch_18F8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1970
                }
                case 0x3:
                {
// switch_18F8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1970
                }
                case 0x4:
                {
// switch_18F8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1970
                }
                case 0x5:
                {
// switch_18F8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1970
                }
            }
        }
        case 0x66:
        {
// switch_1B58_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1AB0
                case default:
                {
// switch_1AB0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B28
// lab_1B28
                    OP_JUMP lab_1BA0
                }
                case 0x0:
                {
// switch_1AB0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1B28
                }
                case 0x1:
                {
// switch_1AB0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1B28
                }
                case 0x2:
                {
// switch_1AB0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1B28
                }
                case 0x3:
                {
// switch_1AB0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1B28
                }
                case 0x4:
                {
// switch_1AB0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1B28
                }
                case 0x5:
                {
// switch_1AB0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1B28
                }
            }
        }
    }
}
// fun_1C60
fun_1C60() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B40(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1D08
    pri = 1;
    return pri;
// lab_1D08
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1D50
fun_1D50() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1DA0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1C60(var_8)
    arg_2 = pri;
// lab_1DA0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1540(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E00
fun_1E00() {
    OP_JUMP lab_1E18
// lab_1E18
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1E58
    pri = 0;
    return pri;
// lab_1E58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E18
    pri = 0;
    return pri;
}
// fun_1E98
fun_1E98() {
    var_8 = 0;
    pri = fun_1E00()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F48
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F48
    pri = 0;
    return pri;
}
// fun_1F58
fun_1F58() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2000()
    return pri;
}
// fun_2000
fun_2000() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2040
fun_2040() {
    pri = arg_3;
    OP_JNZ lab_2088
    var_8 = 648;
    pri = GetFnvHash64(var_8)
    arg_3 = pri;
// lab_2088
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
// fun_20F0
fun_20F0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2168
fun_2168() {
    var_8 = 0;
    pri = fun_20F0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_21E8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_21E8
    pri = 1;
    return pri;
// lab_21E8
    var_8 = 0;
    pri = fun_20F0()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2228
    pri = 1;
    return pri;
// lab_2228
    var_8 = 0;
    pri = fun_20F0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2258
fun_2258() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    OP_JUMP lab_22C0
// lab_22C0
    pri = EvCameraMoveWait_()
    OP_JZER lab_22F8
    pri = 0;
    return pri;
// lab_22F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22C0
    pri = 0;
    return pri;
}
// fun_2338
fun_2338() {
    pri = arg_5;
    OP_JNZ lab_2370
    var_8 = 0;
    pri = fun_1178()
// lab_2370
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_23C0
    OP_CONST_S -8, -1
// lab_23C0
    pri = arg_1;
    switch (pri) {
// switch_3E78
        case default:
        {
// switch_3E78_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_4320
            var_520 = 20400;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B40(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_4320
            pri = 1;
            OP_JUMP lab_4328
// lab_4320
            pri = 0;
// lab_4328
            OP_JZER lab_4378
            var_8 = 64;
            var_16 = 20496;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_45D0
// lab_4378
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_43E0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_43E0
            pri = 1;
            OP_JUMP lab_43E8
// lab_43E0
            pri = 0;
// lab_43E8
            OP_JZER lab_4570
            var_16 = 20672;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B40(var_24, var_16)
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
            var_176 = 20776;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 20792;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_45D0
// lab_4570
            var_8 = 64;
            alt = 656;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_45D0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_4640
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_4640
            var_8 = 0;
            pri = fun_11B8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3E78_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1:
        {
// switch_3E78_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2:
        {
// switch_3E78_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x3:
        {
// switch_3E78_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x4:
        {
// switch_3E78_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x5:
        {
// switch_3E78_case_0x5
            var_8 = 2;
            var_16 = 10656;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EA0(var_40)
            OP_JUMP switch_3E78_case_default
        }
        case 0x6:
        {
// switch_3E78_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x7:
        {
// switch_3E78_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x8:
        {
// switch_3E78_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x9:
        {
// switch_3E78_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0xa:
        {
// switch_3E78_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0xb:
        {
// switch_3E78_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0xc:
        {
// switch_3E78_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0xd:
        {
// switch_3E78_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11304;
            var_72 = 11128;
            var_80 = 10944;
            var_88 = 10752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0xe:
        {
// switch_3E78_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 11960;
            var_72 = 11752;
            var_80 = 11536;
            var_88 = 11312;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0xf:
        {
// switch_3E78_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12352;
            var_72 = 12232;
            var_80 = 12104;
            var_88 = 11968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x10:
        {
// switch_3E78_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 12696;
            var_72 = 12592;
            var_80 = 12480;
            var_88 = 12360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x11:
        {
// switch_3E78_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13040;
            var_72 = 12936;
            var_80 = 12824;
            var_88 = 12704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x12:
        {
// switch_3E78_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x13:
        {
// switch_3E78_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x14:
        {
// switch_3E78_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 13600;
            var_72 = 13424;
            var_80 = 13240;
            var_88 = 13048;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x15:
        {
// switch_3E78_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x16:
        {
// switch_3E78_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x17:
        {
// switch_3E78_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x18:
        {
// switch_3E78_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x19:
        {
// switch_3E78_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1a:
        {
// switch_3E78_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1b:
        {
// switch_3E78_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1c:
        {
// switch_3E78_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 13992;
            var_72 = 13872;
            var_80 = 13744;
            var_88 = 13608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1d:
        {
// switch_3E78_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1e:
        {
// switch_3E78_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 14456;
            var_72 = 14312;
            var_80 = 14160;
            var_88 = 14000;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x1f:
        {
// switch_3E78_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x20:
        {
// switch_3E78_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x21:
        {
// switch_3E78_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x22:
        {
// switch_3E78_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x23:
        {
// switch_3E78_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x24:
        {
// switch_3E78_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 14824;
            var_72 = 14712;
            var_80 = 14592;
            var_88 = 14464;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x25:
        {
// switch_3E78_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15192;
            var_72 = 15080;
            var_80 = 14960;
            var_88 = 14832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x26:
        {
// switch_3E78_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x27:
        {
// switch_3E78_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x28:
        {
// switch_3E78_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x29:
        {
// switch_3E78_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 15632;
            var_72 = 15496;
            var_80 = 15352;
            var_88 = 15200;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2a:
        {
// switch_3E78_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16024;
            var_72 = 15904;
            var_80 = 15776;
            var_88 = 15640;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2b:
        {
// switch_3E78_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16440;
            var_72 = 16312;
            var_80 = 16176;
            var_88 = 16032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2c:
        {
// switch_3E78_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 16880;
            var_72 = 16744;
            var_80 = 16600;
            var_88 = 16448;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2d:
        {
// switch_3E78_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2e:
        {
// switch_3E78_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17200;
            var_72 = 17104;
            var_80 = 17000;
            var_88 = 16888;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x2f:
        {
// switch_3E78_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17592;
            var_72 = 17472;
            var_80 = 17344;
            var_88 = 17208;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x30:
        {
// switch_3E78_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 17984;
            var_72 = 17864;
            var_80 = 17736;
            var_88 = 17600;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x31:
        {
// switch_3E78_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x32:
        {
// switch_3E78_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x33:
        {
// switch_3E78_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18376;
            var_72 = 18256;
            var_80 = 18128;
            var_88 = 17992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x34:
        {
// switch_3E78_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 18744;
            var_72 = 18632;
            var_80 = 18512;
            var_88 = 18384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x35:
        {
// switch_3E78_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19232;
            var_72 = 19080;
            var_80 = 18920;
            var_88 = 18752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x36:
        {
// switch_3E78_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19600;
            var_72 = 19488;
            var_80 = 19368;
            var_88 = 19240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x37:
        {
// switch_3E78_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x38:
        {
// switch_3E78_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19968;
            var_72 = 19856;
            var_80 = 19736;
            var_88 = 19608;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0ED8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3E78_case_default
        }
        case 0x39:
        {
// switch_3E78_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x3a:
        {
// switch_3E78_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x3b:
        {
// switch_3E78_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x3c:
        {
// switch_3E78_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 19976;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x3d:
        {
// switch_3E78_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 20152;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
        case 0x3e:
        {
// switch_3E78_case_0x3e
            var_8 = 4;
            var_16 = 20296;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            OP_JUMP switch_3E78_case_default
        }
    }
}
// fun_4670
fun_4670() {
    pri = arg_4;
    OP_JNZ lab_46A8
    var_8 = 0;
    pri = fun_1178()
// lab_46A8
    pri = arg_1;
    switch (pri) {
// switch_5A80
        case default:
        {
// switch_5A80_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 21368;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1238(var_264)
            OP_JZER lab_6048
            pri = arg_3;
            switch (pri) {
// switch_5FF0
                case default:
                {
// switch_5FF0_case_default
                    OP_JUMP lab_6300
// lab_6300
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_6370
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_6370
                    var_8 = 0;
                    pri = fun_11B8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_5FF0_case_0x1
                    var_8 = 32;
                    var_16 = 21520;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5FF0_case_default
                }
                case 0x2:
                {
// switch_5FF0_case_0x2
                    var_8 = 32;
                    var_16 = 21624;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5FF0_case_default
                }
                case 0x3:
                {
// switch_5FF0_case_0x3
                    var_8 = 32;
                    var_16 = 21424;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_5FF0_case_default
                }
            }
// lab_6048
            pri = arg_1;
            OP_JZER lab_6098
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_6098
            pri = 0;
            OP_JUMP lab_60A0
// lab_6098
            pri = 1;
// lab_60A0
            OP_JZER lab_6108
            var_8 = 21720;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B40(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6108
            pri = 1;
            OP_JUMP lab_6110
// lab_6108
            pri = 0;
// lab_6110
            OP_JZER lab_6160
            var_8 = 32;
            var_16 = 21816;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6300
// lab_6160
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_61C8
            var_8 = 32;
            var_16 = 21976;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_6300
// lab_61C8
            var_16 = 22096;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B40(var_24, var_16)
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
            var_176 = 22200;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 22216;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_5A80_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1:
        {
// switch_5A80_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2:
        {
// switch_5A80_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x3:
        {
// switch_5A80_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x4:
        {
// switch_5A80_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x5:
        {
// switch_5A80_case_0x5
            var_8 = 1;
            var_16 = 20848;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0EA0(var_40)
            OP_JUMP switch_5A80_case_default
        }
        case 0x6:
        {
// switch_5A80_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x7:
        {
// switch_5A80_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x8:
        {
// switch_5A80_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x9:
        {
// switch_5A80_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0xa:
        {
// switch_5A80_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0xb:
        {
// switch_5A80_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0xc:
        {
// switch_5A80_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0xd:
        {
// switch_5A80_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0xe:
        {
// switch_5A80_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0xf:
        {
// switch_5A80_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x10:
        {
// switch_5A80_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x11:
        {
// switch_5A80_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x12:
        {
// switch_5A80_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x13:
        {
// switch_5A80_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x14:
        {
// switch_5A80_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x15:
        {
// switch_5A80_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x16:
        {
// switch_5A80_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x17:
        {
// switch_5A80_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x18:
        {
// switch_5A80_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x19:
        {
// switch_5A80_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1a:
        {
// switch_5A80_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1b:
        {
// switch_5A80_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1c:
        {
// switch_5A80_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1d:
        {
// switch_5A80_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1e:
        {
// switch_5A80_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x1f:
        {
// switch_5A80_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x20:
        {
// switch_5A80_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x21:
        {
// switch_5A80_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x22:
        {
// switch_5A80_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x23:
        {
// switch_5A80_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x24:
        {
// switch_5A80_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x25:
        {
// switch_5A80_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x26:
        {
// switch_5A80_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x27:
        {
// switch_5A80_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x28:
        {
// switch_5A80_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x29:
        {
// switch_5A80_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2a:
        {
// switch_5A80_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2b:
        {
// switch_5A80_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2c:
        {
// switch_5A80_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2d:
        {
// switch_5A80_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2e:
        {
// switch_5A80_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x2f:
        {
// switch_5A80_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x30:
        {
// switch_5A80_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x31:
        {
// switch_5A80_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x32:
        {
// switch_5A80_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x33:
        {
// switch_5A80_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x34:
        {
// switch_5A80_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x35:
        {
// switch_5A80_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x36:
        {
// switch_5A80_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x37:
        {
// switch_5A80_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x38:
        {
// switch_5A80_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x39:
        {
// switch_5A80_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x3a:
        {
// switch_5A80_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x3b:
        {
// switch_5A80_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x3c:
        {
// switch_5A80_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 20944;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x3d:
        {
// switch_5A80_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 21120;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
        case 0x3e:
        {
// switch_5A80_case_0x3e
            var_8 = 3;
            var_16 = 21264;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B00(var_24, var_16, var_8)
            OP_JUMP switch_5A80_case_default
        }
    }
}
// fun_63A0
fun_63A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_65B0(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 22264;
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
    var_424 = 22320;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 22336;
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
    OP_JZER lab_6598
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6598
    pri = 0;
    return pri;
}
// fun_65B0
fun_65B0() {
    var_8 = arg_1;
    var_16 = 22384;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B00(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_65F8
fun_65F8() {
    pri = 22488;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_6680
// lab_6680
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_6800
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_67F0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_6740
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_6740
    pri = 0;
    OP_JUMP lab_6748
// lab_6800
    pri = 0;
    return pri;
// lab_67F0
    OP_JUMP lab_6678
// lab_6678
    OP_INC_P_S -936
// lab_6740
    pri = 1;
// lab_6748
    OP_JZER lab_67C0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_67B8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_67C0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_67B8
}
// fun_6820
fun_6820() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_6858
fun_6858() {
    var_8 = 0;
    pri = fun_6820()
    switch (pri) {
// switch_6908
        case default:
        {
// switch_6908_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_6950
// lab_6950
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_6908_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_6950
        }
        case 0x1:
        {
// switch_6908_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_6950
        }
        case 0x2:
        {
// switch_6908_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_6950
        }
    }
}
// fun_6960
fun_6960() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_69F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 23408;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_14E0()
// lab_69F8
    pri = arg_4;
    OP_JZER lab_6A30
    var_8 = 1;
    var_16 = 8;
    pri = fun_1508(var_8)
// lab_6A30
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_6A88
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_6A88
    pri = 0;
    OP_JUMP lab_6A90
// lab_6A88
    pri = 1;
// lab_6A90
    OP_JZER lab_6B58
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_6B58
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_6B30
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1420(var_32, var_24)
    OP_JUMP lab_6B58
// lab_6B58
    pri = arg_2;
    OP_JZER lab_6C30
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_6C00
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11F8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_07C0(var_40)
    OP_JUMP lab_6C30
// lab_6C30
    pri = arg_3;
    OP_JZER lab_6C68
    var_8 = 1;
    var_16 = 8;
    pri = fun_14A8(var_8)
// lab_6C68
    pri = 0;
    return pri;
// lab_6C00
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11F8(var_16, var_8)
// lab_6B30
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1420(var_16, var_8)
}
// fun_6C78
fun_6C78() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_6DF8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6D10
    var_8 = 1;
    var_16 = 0;
    var_24 = 23408;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_6DF8
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_6D10
    pri = arg_0;
    OP_JNZ lab_6D58
    var_8 = 23456;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_6D78
// lab_6D58
    var_8 = 23632;
    pri = SoundPostEvent(var_8)
// lab_6D78
    var_8 = 0;
    var_16 = 8;
    pri = fun_0408(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6DF8
    var_24 = 23896;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_6E38
fun_6E38() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_65F8(var_24)
    pri = 0;
    return pri;
}
// fun_6EA0
fun_6EA0() {
    pri = g_mode;
    switch (pri) {
// switch_6F60
        case default:
        {
// switch_6F60_case_default
            pri = CommandNOP()
            OP_JUMP lab_6FA8
// lab_6FA8
            pri = 0;
            return pri;
        }
        case 0xaf4560221595301d:
        {
// switch_6F60_case_0xaf4560221595301d
            var_8 = 0;
            pri = fun_9B48()
            OP_JUMP lab_6FA8
        }
        case 0x0:
        {
// switch_6F60_case_0x0
            var_8 = 0;
            pri = fun_6FB8()
            OP_JUMP lab_6FA8
        }
        case 0x4b539e1e634ac619:
        {
// switch_6F60_case_0x4b539e1e634ac619
            var_8 = 0;
            pri = fun_9D18()
            OP_JUMP lab_6FA8
        }
    }
}
// fun_6FB8
fun_6FB8() {
    pri = 0;
    return pri;
}
// fun_6FD0
fun_6FD0() {
    var_8 = 0;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_6960(var_40, var_32, var_24, var_16, var_8)
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_0780(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_7058
fun_7058() {
    pri = 0;
    return pri;
}
// fun_7070
fun_7070() {
    pri = 0;
    return pri;
}
// fun_7088
fun_7088() {
    pri = EvCameraStart()
    pri = arg_0;
    OP_JZER lab_70C0
// lab_70C0
    var_8 = 23944;
    pri = SoundPostEvent(var_8)
    pri = arg_0;
    OP_JZER lab_7F18
    var_16 = 0;
    var_24 = 4631952216750555136;
    var_32 = 3;
    OP_PUSH5_C 4664377804214134374, 4631606002529201029, 4664474990046913495, 4664874651528493793, 4644380216581632819
    var_40 = 4664474990046913495;
    var_48 = 30;
    pri = EvCameraMove(var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24)
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    OP_PUSH2_C 8802641224559852288, 3307058085393826287
    var_88 = 48;
    pri = fun_0980(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    OP_PUSH2_C 8802641224559852288, 3307059184905454498
    var_128 = 48;
    pri = fun_0980(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 0;
    var_144 = 0;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH2_C 3307058085393826287, 8802641224559852288
    var_168 = 48;
    pri = fun_0980(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 8802641224559852288;
    var_184 = 8;
    pri = fun_09D8(var_176)
    var_192 = 3307058085393826287;
    var_200 = 8;
    pri = fun_09D8(var_192)
    var_208 = 3307059184905454498;
    var_216 = 8;
    pri = fun_09D8(var_208)
    var_224 = 0;
    pri = fun_22A8()
    var_232 = 30;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = -8600099808306903038;
    var_256 = 8;
    pri = fun_0518(var_248)
    var_264 = 1;
    var_272 = 8;
    pri = fun_1508(var_264)
    var_280 = 0;
    var_288 = 4631952216750555136;
    var_296 = 0;
    OP_PUSH5_C 4664411746138083820, 4634724041583713321, 4664443214160870769, 4664510273375048827, 4639463728347799880
    var_304 = 4664739466573858734;
    var_312 = 1;
    pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 0;
    pri = fun_22A8()
    var_328 = 0;
    pri = fun_0548()
    var_336 = 1;
    var_344 = 1;
    OP_PUSH4_C -4589730970243956736, 4664345808425766093, 4664711176139676058, 8802641224559852288
    var_352 = 48;
    pri = fun_06F0(var_344, var_336, var_328, var_320, var_312, var_304)
    var_360 = 1;
    var_368 = 0;
    var_376 = 4641240890982006784;
    var_384 = 0;
    var_392 = 0;
    OP_PUSH4_C 4664345808425766093, 4664524259162954138, 4607182418800017408, 8802641224559852288
    var_400 = 72;
    pri = fun_07F8(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 8802641224559852288;
    var_416 = 8;
    pri = fun_09D8(var_408)
    var_424 = 0;
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH2_C 8802641224559852288, 3307058085393826287
    var_456 = 48;
    pri = fun_0980(var_448, var_440, var_432, var_424, var_416, var_408)
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 0;
    OP_PUSH2_C 8802641224559852288, 3307059184905454498
    var_496 = 48;
    pri = fun_0980(var_488, var_480, var_472, var_464, var_456, var_448)
    var_504 = 3307058085393826287;
    var_512 = 8;
    pri = fun_09D8(var_504)
    var_520 = 3307059184905454498;
    var_528 = 8;
    pri = fun_09D8(var_520)
    var_536 = 1;
    var_544 = 1;
    var_552 = -1;
    var_560 = -1;
    var_568 = 0;
    var_576 = 8;
    var_584 = 3307058085393826287;
    var_592 = 56;
    pri = fun_2338(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 0;
    var_608 = 3;
    var_616 = 0;
    var_624 = 100;
    var_632 = -1;
    OP_PUSH2_C 2825124533206930078, 3307058085393826287
    var_640 = 56;
    pri = fun_1D50(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 1;
    var_656 = 8;
    pri = fun_1E98(var_648)
    var_664 = 0;
    pri = fun_1F58()
    var_672 = 1;
    var_680 = 3;
    var_688 = 0;
    var_696 = 8;
    var_704 = 3307058085393826287;
    var_712 = 40;
    pri = fun_4670(var_704, var_696, var_688, var_680, var_672)
    var_720 = 3307058085393826287;
    var_728 = 8;
    pri = fun_0B78(var_720)
    var_736 = 1;
    var_744 = 1;
    var_752 = -1;
    var_760 = -1;
    var_768 = 0;
    var_776 = 2;
    var_784 = 3307059184905454498;
    var_792 = 56;
    pri = fun_2338(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    OP_PUSH2_C -9193645757534865135, 3307059184905454498
    var_840 = 56;
    pri = fun_1D50(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 8;
    pri = fun_1E98(var_848)
    var_864 = 0;
    pri = fun_1F58()
    var_872 = 1;
    var_880 = 3;
    var_888 = 0;
    var_896 = 2;
    var_904 = 3307059184905454498;
    var_912 = 40;
    pri = fun_4670(var_904, var_896, var_888, var_880, var_872)
    var_920 = 3307059184905454498;
    var_928 = 8;
    pri = fun_0B78(var_920)
    var_936 = 1;
    var_944 = -8600099808306903038;
    var_952 = 16;
    pri = fun_0748(var_944, var_936)
    var_960 = 1;
    var_968 = 1;
    OP_PUSH4_C -4590448731434568909, 4664204191328108544, 4664691274979213312, -8600099808306903038
    var_976 = 48;
    pri = fun_06F0(var_968, var_960, var_952, var_944, var_936, var_928)
    var_984 = 1;
    var_992 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4664204191328108544, 4664480168746680320, 4611686018427387904
    var_1000 = -8600099808306903038;
    var_1008 = 64;
    pri = fun_0870(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944)
    var_1016 = 10;
    var_1024 = 8;
    pri = fun_0060(var_1016)
    var_1032 = 0;
    var_1040 = 4631952216750555136;
    var_1048 = 3;
    OP_PUSH5_C 4664366017449484616, 4634724041583713321, 4664458398416450355, 4664464027915984568, 4639455284098498560
    var_1056 = 4664754925707345265;
    var_1064 = 30;
    pri = EvCameraMove(var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1072 = 0;
    var_1080 = 3;
    var_1088 = 0;
    var_1096 = 100;
    var_1104 = -1;
    OP_PUSH2_C -3352526998211733306, -8600099808306903038
    var_1112 = 56;
    pri = fun_1D50(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1120 = 1;
    var_1128 = 8;
    pri = fun_1E98(var_1120)
    var_1136 = 0;
    pri = fun_1F58()
    var_1144 = -8600099808306903038;
    var_1152 = 8;
    pri = fun_09D8(var_1144)
    var_1160 = 0;
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 0;
    OP_PUSH2_C -8600099808306903038, 8802641224559852288
    var_1192 = 48;
    pri = fun_0980(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1200 = 0;
    var_1208 = 0;
    var_1216 = 0;
    var_1224 = 0;
    OP_PUSH2_C -8600099808306903038, 3307058085393826287
    var_1232 = 48;
    pri = fun_0980(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1240 = 0;
    var_1248 = 0;
    var_1256 = 0;
    var_1264 = 0;
    OP_PUSH2_C -8600099808306903038, 3307059184905454498
    var_1272 = 48;
    pri = fun_0980(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224)
    var_1280 = 0;
    pri = fun_22A8()
    var_1288 = 1;
    var_1296 = 1;
    var_1304 = -1;
    var_1312 = -1;
    var_1320 = 0;
    var_1328 = 22;
    var_1336 = -8600099808306903038;
    var_1344 = 56;
    pri = fun_2338(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1352 = 8802641224559852288;
    var_1360 = 8;
    pri = fun_09D8(var_1352)
    var_1368 = 3307058085393826287;
    var_1376 = 8;
    pri = fun_09D8(var_1368)
    var_1384 = 3307059184905454498;
    var_1392 = 8;
    pri = fun_09D8(var_1384)
    var_1400 = 0;
    var_1408 = 3;
    var_1416 = 0;
    var_1424 = 100;
    var_1432 = -1;
    OP_PUSH2_C -3352528097723361517, -8600099808306903038
    var_1440 = 56;
    pri = fun_1D50(var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1448 = 1;
    var_1456 = 8;
    pri = fun_1E98(var_1448)
    var_1464 = 0;
    pri = fun_1F58()
    var_1472 = 1;
    var_1480 = 1;
    var_1488 = -1;
    var_1496 = -1;
    var_1504 = 0;
    var_1512 = 11;
    var_1520 = 3307058085393826287;
    var_1528 = 56;
    pri = fun_2338(var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1536 = 0;
    var_1544 = 3;
    var_1552 = 0;
    var_1560 = 100;
    var_1568 = -1;
    OP_PUSH2_C 2825123433695301867, 3307058085393826287
    var_1576 = 56;
    pri = fun_1D50(var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1584 = 1;
    var_1592 = 8;
    pri = fun_1E98(var_1584)
    var_1600 = 0;
    pri = fun_1F58()
    var_1608 = 1;
    var_1616 = 3;
    var_1624 = 0;
    var_1632 = 11;
    var_1640 = 3307058085393826287;
    var_1648 = 40;
    pri = fun_4670(var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1656 = 3307058085393826287;
    var_1664 = 8;
    pri = fun_0B78(var_1656)
    var_1672 = 1;
    var_1680 = 3;
    var_1688 = 0;
    var_1696 = 22;
    var_1704 = -8600099808306903038;
    var_1712 = 40;
    pri = fun_4670(var_1704, var_1696, var_1688, var_1680, var_1672)
    var_1720 = -8600099808306903038;
    var_1728 = 8;
    pri = fun_0B78(var_1720)
    OP_JUMP lab_8128
// lab_7F18
    var_8 = 1;
    var_16 = 8;
    pri = fun_1508(var_8)
    var_24 = 1;
    var_32 = 1;
    OP_PUSH4_C -4589730970243956736, 4664345808425766093, 4664711176139676058, 8802641224559852288
    var_40 = 48;
    pri = fun_06F0(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = -50;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 4664204191328108544, 4664480168746680320, -8600099808306903038
    var_80 = 48;
    pri = fun_06F0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 0;
    var_96 = 4631952216750555136;
    var_104 = 3;
    OP_PUSH5_C 4664366017449484616, 4634724041583713321, 4664458398416450355, 4664464027915984568, 4639455284098498560
    var_112 = 4664754925707345265;
    var_120 = 1;
    pri = EvCameraMove(var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_128 = 0;
    pri = fun_22A8()
    var_136 = 1;
    var_144 = 0;
    var_152 = 4641240890982006784;
    var_160 = 0;
    var_168 = 0;
    OP_PUSH4_C 4664345808425766093, 4664524259162954138, 4607182418800017408, 8802641224559852288
    var_176 = 72;
    pri = fun_07F8(var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_184 = 8802641224559852288;
    var_192 = 8;
    pri = fun_09D8(var_184)
// lab_8128
    var_8 = 1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0780(var_16, var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    OP_PUSH2_C 3307058085393826287, -8600099808306903038
    var_64 = 48;
    pri = fun_0980(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH2_C 3307059184905454498, 8802641224559852288
    var_104 = 48;
    pri = fun_0980(var_96, var_88, var_80, var_72, var_64, var_56)
    var_112 = -8600099808306903038;
    var_120 = 8;
    pri = fun_09D8(var_112)
    var_128 = 1;
    var_136 = 1;
    var_144 = -1;
    var_152 = -1;
    var_160 = 0;
    var_168 = 23;
    var_176 = -8600099808306903038;
    var_184 = 56;
    pri = fun_2338(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 8802641224559852288;
    var_200 = 8;
    pri = fun_09D8(var_192)
    var_208 = 0;
    var_216 = 3;
    var_224 = 0;
    var_232 = 100;
    var_240 = -1;
    OP_PUSH2_C -3352529197234989728, -8600099808306903038
    var_248 = 56;
    pri = fun_1D50(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 1;
    var_264 = 8;
    pri = fun_1E98(var_256)
    var_272 = 0;
    pri = fun_1F58()
    var_280 = 1;
    var_288 = 1;
    var_296 = -1;
    var_304 = -1;
    var_312 = 0;
    var_320 = 12;
    var_328 = 3307059184905454498;
    var_336 = 56;
    pri = fun_2338(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C -9193649056069749768, 3307059184905454498
    var_384 = 56;
    pri = fun_1D50(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_1E98(var_392)
    var_408 = 0;
    pri = fun_1F58()
    var_416 = 24104;
    var_424 = -8600099808306903038;
    var_432 = 16;
    pri = fun_0D78(var_424, var_416)
    var_440 = 1;
    var_448 = 3;
    var_456 = 0;
    var_464 = 23;
    var_472 = -8600099808306903038;
    var_480 = 40;
    pri = fun_4670(var_472, var_464, var_456, var_448, var_440)
    var_488 = -8600099808306903038;
    var_496 = 8;
    pri = fun_0B78(var_488)
    var_504 = 0;
    var_512 = 2;
    var_520 = -8600099808306903038;
    var_528 = 24;
    pri = fun_63A0(var_520, var_512, var_504)
    var_536 = 1;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = -8600099808306903038;
    var_560 = 8;
    pri = fun_0B78(var_552)
    var_568 = 0;
    var_576 = 3;
    var_584 = 0;
    var_592 = 100;
    var_600 = -1;
    OP_PUSH2_C -3352521500653592251, -8600099808306903038
    var_608 = 56;
    pri = fun_1D50(var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_616 = 1;
    var_624 = 8;
    pri = fun_1E98(var_616)
    var_632 = 0;
    pri = fun_1F58()
    var_640 = 0;
    var_648 = 0;
    var_656 = -8600099808306903038;
    var_664 = 24;
    pri = fun_63A0(var_656, var_648, var_640)
    var_672 = 1;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = -8600099808306903038;
    var_696 = 8;
    pri = fun_0B78(var_688)
    var_704 = 0;
    var_712 = 0;
    var_720 = 0;
    var_728 = 0;
    OP_PUSH2_C -8600099808306903038, 8802641224559852288
    var_736 = 48;
    pri = fun_0980(var_728, var_720, var_712, var_704, var_696, var_688)
    var_744 = 0;
    var_752 = 0;
    var_760 = 0;
    var_768 = 0;
    OP_PUSH2_C 8802641224559852288, -8600099808306903038
    var_776 = 48;
    pri = fun_0980(var_768, var_760, var_752, var_744, var_736, var_728)
    var_784 = 8802641224559852288;
    var_792 = 8;
    pri = fun_09D8(var_784)
    var_800 = -8600099808306903038;
    var_808 = 8;
    pri = fun_09D8(var_800)
    var_816 = 0;
    var_824 = 1;
    var_832 = -8600099808306903038;
    var_840 = 24;
    pri = fun_63A0(var_832, var_824, var_816)
    var_848 = 1;
    var_856 = 8;
    pri = fun_0060(var_848)
    var_864 = -8600099808306903038;
    var_872 = 8;
    pri = fun_0B78(var_864)
    var_880 = 0;
    var_888 = 3;
    var_896 = 0;
    var_904 = 100;
    var_912 = -1;
    OP_PUSH2_C -3352518202118707618, -8600099808306903038
    var_920 = 56;
    pri = fun_1D50(var_912, var_904, var_896, var_888, var_880, var_872, var_864)
    var_928 = 1;
    var_936 = 8;
    pri = fun_1E98(var_928)
    var_952 = 0;
    var_960 = 0;
    var_968 = 1;
    var_976 = 0;
    var_984 = 0;
    var_992 = 0;
    var_1000 = 48;
    pri = fun_1F88(var_992, var_984, var_976, var_968, var_960, var_952)
    var_8 = pri;
    var_1008 = 0;
    pri = fun_1F58()
    pri = var_8;
    OP_JZER lab_9670
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = -8600099808306903038;
    var_1040 = 24;
    pri = fun_63A0(var_1032, var_1024, var_1016)
    var_1048 = 1;
    var_1056 = 8;
    pri = fun_0060(var_1048)
    var_1064 = -8600099808306903038;
    var_1072 = 8;
    pri = fun_0B78(var_1064)
    var_1080 = 0;
    var_1088 = 0;
    var_1096 = 0;
    var_1104 = 0;
    OP_PUSH2_C 3307058085393826287, -8600099808306903038
    var_1112 = 48;
    pri = fun_0980(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1120 = 0;
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 0;
    OP_PUSH2_C 3307059184905454498, 8802641224559852288
    var_1152 = 48;
    pri = fun_0980(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104)
    var_1160 = -8600099808306903038;
    var_1168 = 8;
    pri = fun_09D8(var_1160)
    var_1176 = 8802641224559852288;
    var_1184 = 8;
    pri = fun_09D8(var_1176)
    var_1192 = 1;
    var_1200 = 1;
    var_1208 = -1;
    var_1216 = -1;
    var_1224 = 0;
    var_1232 = 22;
    var_1240 = -8600099808306903038;
    var_1248 = 56;
    pri = fun_2338(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192)
    var_1256 = 0;
    var_1264 = 3;
    var_1272 = 0;
    var_1280 = 100;
    var_1288 = -1;
    OP_PUSH2_C -3352522600165220462, -8600099808306903038
    var_1296 = 56;
    pri = fun_1D50(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1304 = 1;
    var_1312 = 8;
    pri = fun_1E98(var_1304)
    var_1320 = 0;
    pri = fun_1F58()
    var_1328 = 1;
    var_1336 = 3;
    var_1344 = 0;
    var_1352 = 11;
    var_1360 = 3307058085393826287;
    var_1368 = 40;
    pri = fun_4670(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 3307058085393826287;
    var_1384 = 8;
    pri = fun_0B78(var_1376)
    var_1392 = 1;
    var_1400 = 1;
    var_1408 = -1;
    var_1416 = -1;
    var_1424 = 0;
    var_1432 = 6;
    var_1440 = 3307058085393826287;
    var_1448 = 56;
    pri = fun_2338(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1456 = 0;
    var_1464 = 3;
    var_1472 = 0;
    var_1480 = 100;
    var_1488 = -1;
    OP_PUSH2_C 2825122334183673656, 3307058085393826287
    var_1496 = 56;
    pri = fun_1D50(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 1;
    var_1512 = 8;
    pri = fun_1E98(var_1504)
    var_1520 = 0;
    pri = fun_1F58()
    var_1528 = 1;
    var_1536 = 3;
    var_1544 = 0;
    var_1552 = 12;
    var_1560 = 3307059184905454498;
    var_1568 = 40;
    pri = fun_4670(var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1576 = 3307059184905454498;
    var_1584 = 8;
    pri = fun_0B78(var_1576)
    var_1592 = 1;
    var_1600 = 1;
    var_1608 = -1;
    var_1616 = -1;
    var_1624 = 0;
    var_1632 = 9;
    var_1640 = 3307059184905454498;
    var_1648 = 56;
    pri = fun_2338(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1656 = 0;
    var_1664 = 3;
    var_1672 = 0;
    var_1680 = 100;
    var_1688 = -1;
    OP_PUSH2_C -9193647956558121557, 3307059184905454498
    var_1696 = 56;
    pri = fun_1D50(var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1704 = 1;
    var_1712 = 8;
    pri = fun_1E98(var_1704)
    var_1720 = 0;
    pri = fun_1F58()
    var_1736 = 158;
    var_1744 = 157;
    var_1752 = 156;
    var_1760 = 24;
    pri = fun_6858(var_1752, var_1744, var_1736)
    var_16 = pri;
    var_1768 = -1;
    var_1776 = 0;
    var_1784 = 0;
    var_1792 = 0;
    var_1800 = 160;
    var_1808 = 159;
    var_1816 = var_16;
    var_1824 = 56;
    pri = fun_2040(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1832 = 0;
    pri = fun_2168()
    OP_JZER lab_8EA8
    var_1840 = 0;
    pri = fun_99E8()
    var_1848 = 0;
    pri = fun_2258()
// lab_9670
    var_8 = 0;
    var_16 = 0;
    var_24 = -8600099808306903038;
    var_32 = 24;
    pri = fun_63A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_0060(var_40)
    var_56 = -8600099808306903038;
    var_64 = 8;
    pri = fun_0B78(var_56)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C -3352523699676848673, -8600099808306903038
    var_112 = 56;
    pri = fun_1D50(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_1E98(var_120)
    var_136 = 0;
    pri = fun_1F58()
    var_144 = 24424;
    pri = SoundPostEvent(var_144)
    var_152 = 1;
    var_160 = 0;
    var_168 = 23408;
    var_176 = 8;
    var_184 = 32;
    pri = fun_02E0(var_176, var_168, var_160, var_152)
    var_192 = 0;
    pri = fun_0350()
    var_200 = 3;
    var_208 = 1;
    pri = EvCameraEnd(var_208, var_200)
    var_216 = 1;
    var_224 = 3;
    var_232 = 0;
    var_240 = 12;
    var_248 = 3307059184905454498;
    var_256 = 40;
    pri = fun_4670(var_248, var_240, var_232, var_224, var_216)
    var_264 = 3307059184905454498;
    var_272 = 8;
    pri = fun_0B78(var_264)
    pri = 0;
    return pri;
// lab_8EA8
    pri = EvCameraStart()
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 0;
    OP_PUSH5_C 4664470152195751281, 4635308102160387932, 4664434956828546171, 4664900138208025641, 4644325504883034685
    var_32 = 4664434956828546171;
    var_40 = 1;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 0;
    pri = fun_22A8()
    var_56 = 23896;
    var_64 = 8;
    var_72 = 16;
    pri = fun_0280(var_64, var_56)
    var_80 = 0;
    pri = fun_0350()
    var_88 = 0;
    var_96 = 3;
    var_104 = 0;
    var_112 = 100;
    var_120 = -1;
    OP_PUSH2_C 2825130030765071133, 3307058085393826287
    var_128 = 56;
    pri = fun_1D50(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
    var_136 = 1;
    var_144 = 8;
    pri = fun_1E98(var_136)
    var_152 = 0;
    pri = fun_1F58()
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 100;
    var_192 = -1;
    OP_PUSH2_C -9193642458999980502, 3307059184905454498
    var_200 = 56;
    pri = fun_1D50(var_192, var_184, var_176, var_168, var_160, var_152, var_144)
    var_208 = 1;
    var_216 = 8;
    pri = fun_1E98(var_208)
    var_224 = 0;
    pri = fun_1F58()
    var_232 = 1;
    var_240 = 0;
    var_248 = 4641240890982006784;
    var_256 = 0;
    var_264 = 0;
    OP_PUSH4_C 4664936466072207360, 4664205290839736320, 4611686018427387904, 3307058085393826287
    var_272 = 72;
    pri = fun_07F8(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_280 = 1;
    var_288 = 0;
    var_296 = 4641240890982006784;
    var_304 = 0;
    var_312 = 0;
    OP_PUSH4_C 4664824315886174208, 4664133822583930880, 4611686018427387904, 3307059184905454498
    var_320 = 72;
    pri = fun_07F8(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248)
    var_328 = 3307058085393826287;
    var_336 = 8;
    pri = fun_09D8(var_328)
    var_344 = 3307059184905454498;
    var_352 = 8;
    pri = fun_09D8(var_344)
    var_360 = 0;
    var_368 = 4631952216750555136;
    var_376 = 3;
    OP_PUSH5_C 4664434011248546284, 4638895148894844355, 4664519289370396590, 4664864008255936922, 4645269149742457160
    var_384 = 4664519289370396590;
    var_392 = 30;
    pri = EvCameraMove(var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320)
    var_400 = 24264;
    pri = SoundPostEvent(var_400)
    var_408 = 0;
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    OP_PUSH2_C -8600099808306903038, 8802641224559852288
    var_440 = 48;
    pri = fun_0980(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    OP_PUSH2_C 8802641224559852288, -8600099808306903038
    var_480 = 48;
    pri = fun_0980(var_472, var_464, var_456, var_448, var_440, var_432)
    var_488 = 8802641224559852288;
    var_496 = 8;
    pri = fun_09D8(var_488)
    var_504 = -8600099808306903038;
    var_512 = 8;
    pri = fun_09D8(var_504)
    var_520 = 0;
    pri = fun_22A8()
    var_528 = 0;
    var_536 = 3;
    var_544 = 0;
    var_552 = 100;
    var_560 = -1;
    OP_PUSH2_C -3352524799188476884, -8600099808306903038
    var_568 = 56;
    pri = fun_1D50(var_560, var_552, var_544, var_536, var_528, var_520, var_512)
    var_576 = 1;
    var_584 = 8;
    pri = fun_1E98(var_576)
    var_592 = 0;
    pri = fun_1F58()
    var_600 = 0;
    var_608 = 3;
    var_616 = 0;
    var_624 = 100;
    var_632 = -1;
    OP_PUSH2_C -3352517102607079407, -8600099808306903038
    var_640 = 56;
    pri = fun_1D50(var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_648 = 1;
    var_656 = 8;
    pri = fun_1E98(var_648)
    var_664 = 0;
    pri = fun_1F58()
    var_672 = 1;
    var_680 = 0;
    var_688 = 4641240890982006784;
    var_696 = 0;
    var_704 = 0;
    OP_PUSH4_C 4664784733467574272, 4664012876304875520, 4611686018427387904, -8600099808306903038
    var_712 = 72;
    pri = fun_07F8(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640)
    var_720 = 40;
    var_728 = 8;
    pri = fun_0060(var_720)
    var_736 = 0;
    var_744 = 0;
    var_752 = 0;
    OP_PUSH2_C -4592855342485445018, 8802641224559852288
    var_760 = 40;
    pri = fun_0930(var_752, var_744, var_736, var_728, var_720)
    var_768 = 8802641224559852288;
    var_776 = 8;
    pri = fun_09D8(var_768)
    var_784 = -8600099808306903038;
    var_792 = 8;
    pri = fun_09D8(var_784)
    OP_PUSH2_C -8600099808306903038, -1810814453692166083
    pri = SetBamiriInfoToChara(var_792, var_784)
    var_800 = 1;
    var_808 = 2;
    var_816 = 16;
    pri = fun_6C78(var_808, var_800)
    var_824 = 3;
    var_832 = 20;
    pri = EvCameraEnd(var_832, var_824)
    pri = 1;
    return pri;
}
// fun_98A0
fun_98A0() {
    pri = 0;
    return pri;
}
// fun_98B8
fun_98B8() {
    var_8 = 3307058085393826287;
    var_16 = 8;
    pri = fun_0698(var_8)
    var_24 = 3307059184905454498;
    var_32 = 8;
    pri = fun_0698(var_24)
    var_40 = 730;
    var_48 = 8;
    pri = fun_6E38(var_40)
    var_56 = 3307060284417082709;
    var_64 = 8;
    pri = fun_0518(var_56)
    var_72 = 3307052587835685232;
    var_80 = 8;
    pri = fun_0518(var_72)
    var_88 = -7618857127012231868;
    var_96 = 8;
    pri = fun_0518(var_88)
    pri = 0;
    return pri;
}
// fun_99B8
fun_99B8() {
    var_8 = 0;
    pri = fun_0548()
    pri = 0;
    return pri;
}
// fun_99E8
fun_99E8() {
    var_8 = 721;
    var_16 = 8;
    pri = fun_6E38(var_8)
    pri = 0;
    return pri;
}
// fun_9A20
fun_9A20() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 6742;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 7353;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_06F0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 15;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 23896;
    var_112 = 8;
    var_120 = 16;
    pri = fun_0280(var_112, var_104)
    var_128 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_9B48
fun_9B48() {
    OP_ZERO_P_S -8
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    OP_EQ_P_C_PRI 720
    OP_JZER lab_9BB8
    OP_CONST_S -8, 1
// lab_9BB8
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_6FD0()
    pri = var_8;
    OP_JZER lab_9C30
    var_16 = 0;
    pri = fun_7058()
    var_24 = 0;
    pri = fun_7070()
// lab_9C30
    var_8 = var_8;
    var_16 = 8;
    pri = fun_7088(var_8)
    OP_JZER lab_9CB8
    var_24 = 0;
    pri = fun_98A0()
    var_32 = 0;
    pri = fun_98B8()
    var_40 = 0;
    pri = fun_99B8()
    OP_JUMP lab_9CE8
// lab_9CB8
    var_8 = 0;
    pri = fun_99E8()
    var_16 = 0;
    pri = fun_9A20()
// lab_9CE8
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_9D18
fun_9D18() {
    var_8 = 0;
    pri = fun_7058()
    var_16 = 0;
    pri = fun_98B8()
    var_24 = -8600099808306903038;
    pri = FlagReset(var_24)
    pri = 0;
    return pri;
}
