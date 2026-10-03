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
// fun_0590
fun_0590() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_05D8
// lab_05D8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0618
    OP_JUMP lab_0688
// lab_0618
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0658
    OP_JUMP lab_0688
// lab_0658
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05D8
// lab_0688
    pri = 0;
    return pri;
}
// fun_06A0
fun_06A0() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_06D0
fun_06D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0708
// lab_0708
    var_8 = 0;
    pri = fun_0850()
    OP_JNZ lab_0740
    OP_JUMP lab_0770
// lab_0740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0708
// lab_0770
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07A0
// lab_07A0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_07E0
    pri = 0;
    return pri;
// lab_07E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07A0
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0850
fun_0850() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0920
fun_0920() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0960
fun_0960() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0998
fun_0998() {
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
// fun_0A10
fun_0A10() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A68
fun_0A68() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D8(var_8)
    OP_JZER lab_0B30
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1408(var_24)
    OP_JNZ lab_0B30
    pri = 0;
    return pri;
// lab_0B30
    OP_JUMP lab_0B40
// lab_0B40
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0BA0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0BA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0B40
    pri = 0;
    return pri;
}
// fun_0BE0
fun_0BE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0C18
fun_0C18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0C58
fun_0C58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0C90
fun_0C90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0CD8
    pri = 0;
    return pri;
// lab_0CD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0D18
// lab_0D18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D8(var_8)
    OP_JNZ lab_0DA0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0D90
    pri = 0;
    return pri;
// lab_0DA0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0DE8
    pri = 0;
    return pri;
// lab_0DE8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0E48
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E90(var_8)
    pri = 0;
    return pri;
// lab_0E48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D18
    pri = 0;
    return pri;
// lab_0D90
    OP_JUMP lab_0DE8
}
// fun_0E90
fun_0E90() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0EC8
fun_0EC8() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0F18
    pri = 0;
    return pri;
// lab_0F18
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13D8(var_8)
    OP_JZER lab_1048
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F70
    OP_ZERO_P_S 64
// lab_1048
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1080
    OP_CONST_S 64, 1
// lab_1080
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_10B8
    OP_CONST_S 72, 1
// lab_10B8
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
// lab_0F70
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0F98
    OP_ZERO_P_S 72
// lab_0F98
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
    OP_JUMP lab_1158
// lab_1158
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E8
fun_11E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1228
fun_1228() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1268
fun_1268() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_12A0
fun_12A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12E0
fun_12E0() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1318
fun_1318() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1228(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_12A0(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1380
fun_1380() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1268(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_12E0(var_24)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1408
fun_1408() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1438
fun_1438() {
    OP_JUMP lab_1450
// lab_1450
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_14E0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_14D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_14E0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1570
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1560
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_1570
    pri = 0;
    return pri;
// lab_1560
    OP_JUMP lab_1580
// lab_1580
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1450
    pri = 0;
    return pri;
// lab_14D0
    OP_JUMP lab_1580
}
// fun_15C0
fun_15C0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1438(var_40)
    pri = 0;
    return pri;
}
// fun_1648
fun_1648() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1680
fun_1680() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_16A8
fun_16A8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F8
fun_16F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1738
fun_1738() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
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
// switch_1D88
        case default:
        {
// switch_1D88_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DD0
// lab_1DD0
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
            OP_JNZ lab_1E78
            var_88 = 0;
            pri = fun_2030()
// lab_1E78
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D88_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1970
                case default:
                {
// switch_1970_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19E8
// lab_19E8
                    OP_JUMP lab_1DD0
                }
                case 0x0:
                {
// switch_1970_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19E8
                }
                case 0x1:
                {
// switch_1970_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19E8
                }
                case 0x2:
                {
// switch_1970_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19E8
                }
                case 0x3:
                {
// switch_1970_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19E8
                }
                case 0x4:
                {
// switch_1970_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19E8
                }
                case 0x5:
                {
// switch_1970_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19E8
                }
            }
        }
        case 0x65:
        {
// switch_1D88_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B28
                case default:
                {
// switch_1B28_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA0
// lab_1BA0
                    OP_JUMP lab_1DD0
                }
                case 0x0:
                {
// switch_1B28_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1BA0
                }
                case 0x1:
                {
// switch_1B28_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1BA0
                }
                case 0x2:
                {
// switch_1B28_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1BA0
                }
                case 0x3:
                {
// switch_1B28_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1BA0
                }
                case 0x4:
                {
// switch_1B28_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1BA0
                }
                case 0x5:
                {
// switch_1B28_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1BA0
                }
            }
        }
        case 0x66:
        {
// switch_1D88_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CE0
                case default:
                {
// switch_1CE0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D58
// lab_1D58
                    OP_JUMP lab_1DD0
                }
                case 0x0:
                {
// switch_1CE0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D58
                }
                case 0x1:
                {
// switch_1CE0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D58
                }
                case 0x2:
                {
// switch_1CE0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D58
                }
                case 0x3:
                {
// switch_1CE0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D58
                }
                case 0x4:
                {
// switch_1CE0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D58
                }
                case 0x5:
                {
// switch_1CE0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D58
                }
            }
        }
    }
}
// fun_1E90
fun_1E90() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F38
    pri = 1;
    return pri;
// lab_1F38
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1F80
fun_1F80() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1FD0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E90(var_8)
    arg_2 = pri;
// lab_1FD0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1770(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2030
fun_2030() {
    OP_JUMP lab_2048
// lab_2048
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2088
    pri = 0;
    return pri;
// lab_2088
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2048
    pri = 0;
    return pri;
}
// fun_20C8
fun_20C8() {
    var_8 = 0;
    pri = fun_2030()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2178
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2178
    pri = 0;
    return pri;
}
// fun_2188
fun_2188() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_21B8
fun_21B8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2208
fun_2208() {
    OP_CONST_S -8, -1
    var_24 = 0;
    var_32 = 0;
    pri = PokePartyGetCount(var_32, var_24)
    var_16 = pri;
}
// lab_2268
OP_LOAD_S_BOTH 32, -16
OP_JSGEQ lab_2460
pri = arg_0;
switch (pri) {
// switch_2400
    case default:
    {
// switch_2400_case_default
        pri = arg_1;
        OP_ADD_P_C 1
        arg_1 = pri;
        OP_JUMP lab_2268
    }
    case 0x0:
    {
// switch_2400_case_0x0
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_23F0
        pri = arg_1;
        return pri;
// lab_23F0
        OP_JUMP switch_2400_case_default
    }
    case 0x1:
    {
// switch_2400_case_0x1
        var_8 = 0;
        var_16 = 8;
        var_24 = arg_1;
        pri = PokePartyGetParam(var_24, var_16, var_8)
        OP_JNZ lab_2358
        var_32 = 0;
        var_40 = 2;
        var_48 = arg_1;
        pri = PokePartyGetParam(var_48, var_40, var_32)
        OP_MOVE_ALT 
        pri = 0;
        OP_XCHG 
        OP_JSLEQ lab_2358
        pri = 1;
        OP_JUMP lab_2360
// lab_2358
        pri = 0;
// lab_2360
        OP_JZER lab_2388
        pri = arg_1;
        return pri;
// lab_2388
        OP_JUMP switch_2400_case_default
    }
}
// lab_2460
pri = var_8;
return pri;
// fun_2478
fun_2478() {
    var_16 = 0;
    var_24 = 1;
    var_32 = 16;
    pri = fun_2208(var_24, var_16)
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2510
    pri = CommandNOP()
    pri = arg_0;
    OP_JZER lab_2510
    OP_ZERO_P_S -8
// lab_2510
    pri = var_8;
    return pri;
}
// fun_2528
fun_2528() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = 0;
    var_40 = arg_0;
    var_48 = 0;
    pri = StartLoadTrainerBattleSeamless_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2588
fun_2588() {
    OP_JUMP lab_25A0
// lab_25A0
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_25D8
    pri = 0;
    return pri;
// lab_25D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25A0
    pri = 0;
    return pri;
}
// fun_2618
fun_2618() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2648
fun_2648() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_26C0
fun_26C0() {
    var_8 = 0;
    pri = fun_2648()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2740
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2740
    pri = 1;
    return pri;
// lab_2740
    var_8 = 0;
    pri = fun_2648()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2780
    pri = 1;
    return pri;
// lab_2780
    var_8 = 0;
    pri = fun_2648()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_27B0
fun_27B0() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2800
fun_2800() {
    OP_JUMP lab_2818
// lab_2818
    pri = EvCameraMoveWait_()
    OP_JZER lab_2850
    pri = 0;
    return pri;
// lab_2850
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2818
    pri = 0;
    return pri;
}
// fun_2890
fun_2890() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_28F8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_29D0()
    pri = 0;
    return pri;
}
// fun_28F8
fun_28F8() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2950
fun_2950() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_28F8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_29D0()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_29D0
fun_29D0() {
    OP_JUMP lab_29E8
// lab_29E8
    pri = IsEasingRunningDof_()
    OP_JZER lab_2A40
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A50
// lab_2A40
    pri = 0;
    return pri;
// lab_2A50
    OP_JUMP lab_29E8
    pri = 0;
    return pri;
}
// fun_2A70
fun_2A70() {
    pri = arg_6;
    OP_JNZ lab_2AA8
    var_8 = 0;
    pri = fun_1168()
// lab_2AA8
    pri = arg_1;
    switch (pri) {
// switch_4010
        case default:
        {
// switch_4010_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4360
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4360
            pri = 1;
            OP_JUMP lab_4368
// lab_4360
            pri = 0;
// lab_4368
            OP_JZER lab_44C0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C58(var_24, var_16)
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
            var_64 = 8424;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4520
// lab_44C0
            var_8 = 64;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_4520
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4580
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_45E0
// lab_4580
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_45E0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_45E0
            pri = arg_2;
            OP_JZER lab_4620
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4620
            var_8 = 0;
            pri = fun_11A8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4010_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x1:
        {
// switch_4010_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x2:
        {
// switch_4010_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x3:
        {
// switch_4010_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x4:
        {
// switch_4010_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x5:
        {
// switch_4010_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5608;
            var_72 = 5600;
            var_80 = 5592;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0x6:
        {
// switch_4010_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5632;
            var_72 = 5624;
            var_80 = 5616;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0x7:
        {
// switch_4010_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0x8:
        {
// switch_4010_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x9:
        {
// switch_4010_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0xa:
        {
// switch_4010_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0xb:
        {
// switch_4010_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0xc:
        {
// switch_4010_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0xd:
        {
// switch_4010_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0xe:
        {
// switch_4010_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0xf:
        {
// switch_4010_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x10:
        {
// switch_4010_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x11:
        {
// switch_4010_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0x12:
        {
// switch_4010_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0x13:
        {
// switch_4010_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x14:
        {
// switch_4010_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x15:
        {
// switch_4010_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x16:
        {
// switch_4010_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x17:
        {
// switch_4010_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x18:
        {
// switch_4010_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x19:
        {
// switch_4010_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4010_case_default
        }
        case 0x1a:
        {
// switch_4010_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BE0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6096;
            var_88 = 6088;
            var_96 = 6080;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0EC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4010_case_default
        }
        case 0x1b:
        {
// switch_4010_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BE0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6320;
            var_88 = 6312;
            var_96 = 6304;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0EC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4010_case_default
        }
        case 0x1c:
        {
// switch_4010_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0BE0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6544;
            var_88 = 6536;
            var_96 = 6528;
            alt = 648;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0EC8(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4010_case_default
        }
        case 0x1d:
        {
// switch_4010_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x1e:
        {
// switch_4010_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x1f:
        {
// switch_4010_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x20:
        {
// switch_4010_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x21:
        {
// switch_4010_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x22:
        {
// switch_4010_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x23:
        {
// switch_4010_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x24:
        {
// switch_4010_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x25:
        {
// switch_4010_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x26:
        {
// switch_4010_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x27:
        {
// switch_4010_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x28:
        {
// switch_4010_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
        case 0x29:
        {
// switch_4010_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4010_case_default
        }
    }
}
// fun_4650
fun_4650() {
    pri = arg_5;
    OP_JNZ lab_4688
    var_8 = 0;
    pri = fun_1168()
// lab_4688
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_46D8
    OP_CONST_S -8, -1
// lab_46D8
    pri = arg_1;
    switch (pri) {
// switch_6190
        case default:
        {
// switch_6190_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6638
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6638
            pri = 1;
            OP_JUMP lab_6640
// lab_6638
            pri = 0;
// lab_6640
            OP_JZER lab_6690
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_68E8
// lab_6690
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_66F8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_66F8
            pri = 1;
            OP_JUMP lab_6700
// lab_66F8
            pri = 0;
// lab_6700
            OP_JZER lab_6888
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C58(var_24, var_16)
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
            var_176 = 28560;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28576;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_68E8
// lab_6888
            var_8 = 64;
            alt = 8440;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_68E8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6958
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6958
            var_8 = 0;
            pri = fun_11A8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6190_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x1:
        {
// switch_6190_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x2:
        {
// switch_6190_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x3:
        {
// switch_6190_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x4:
        {
// switch_6190_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x5:
        {
// switch_6190_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E90(var_40)
            OP_JUMP switch_6190_case_default
        }
        case 0x6:
        {
// switch_6190_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x7:
        {
// switch_6190_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x8:
        {
// switch_6190_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x9:
        {
// switch_6190_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0xa:
        {
// switch_6190_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0xb:
        {
// switch_6190_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0xc:
        {
// switch_6190_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0xd:
        {
// switch_6190_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19088;
            var_72 = 18912;
            var_80 = 18728;
            var_88 = 18536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0xe:
        {
// switch_6190_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19744;
            var_72 = 19536;
            var_80 = 19320;
            var_88 = 19096;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0xf:
        {
// switch_6190_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20136;
            var_72 = 20016;
            var_80 = 19888;
            var_88 = 19752;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x10:
        {
// switch_6190_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20480;
            var_72 = 20376;
            var_80 = 20264;
            var_88 = 20144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x11:
        {
// switch_6190_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20824;
            var_72 = 20720;
            var_80 = 20608;
            var_88 = 20488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x12:
        {
// switch_6190_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x13:
        {
// switch_6190_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x14:
        {
// switch_6190_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21384;
            var_72 = 21208;
            var_80 = 21024;
            var_88 = 20832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x15:
        {
// switch_6190_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x16:
        {
// switch_6190_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x17:
        {
// switch_6190_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x18:
        {
// switch_6190_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x19:
        {
// switch_6190_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x1a:
        {
// switch_6190_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x1b:
        {
// switch_6190_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x1c:
        {
// switch_6190_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21776;
            var_72 = 21656;
            var_80 = 21528;
            var_88 = 21392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x1d:
        {
// switch_6190_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x1e:
        {
// switch_6190_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22240;
            var_72 = 22096;
            var_80 = 21944;
            var_88 = 21784;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x1f:
        {
// switch_6190_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x20:
        {
// switch_6190_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x21:
        {
// switch_6190_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x22:
        {
// switch_6190_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x23:
        {
// switch_6190_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x24:
        {
// switch_6190_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22608;
            var_72 = 22496;
            var_80 = 22376;
            var_88 = 22248;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x25:
        {
// switch_6190_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22976;
            var_72 = 22864;
            var_80 = 22744;
            var_88 = 22616;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x26:
        {
// switch_6190_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x27:
        {
// switch_6190_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x28:
        {
// switch_6190_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x29:
        {
// switch_6190_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23416;
            var_72 = 23280;
            var_80 = 23136;
            var_88 = 22984;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x2a:
        {
// switch_6190_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23808;
            var_72 = 23688;
            var_80 = 23560;
            var_88 = 23424;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x2b:
        {
// switch_6190_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24224;
            var_72 = 24096;
            var_80 = 23960;
            var_88 = 23816;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x2c:
        {
// switch_6190_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24664;
            var_72 = 24528;
            var_80 = 24384;
            var_88 = 24232;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x2d:
        {
// switch_6190_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x2e:
        {
// switch_6190_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24984;
            var_72 = 24888;
            var_80 = 24784;
            var_88 = 24672;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x2f:
        {
// switch_6190_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25376;
            var_72 = 25256;
            var_80 = 25128;
            var_88 = 24992;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x30:
        {
// switch_6190_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25768;
            var_72 = 25648;
            var_80 = 25520;
            var_88 = 25384;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x31:
        {
// switch_6190_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x32:
        {
// switch_6190_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x33:
        {
// switch_6190_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26160;
            var_72 = 26040;
            var_80 = 25912;
            var_88 = 25776;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x34:
        {
// switch_6190_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26528;
            var_72 = 26416;
            var_80 = 26296;
            var_88 = 26168;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x35:
        {
// switch_6190_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27016;
            var_72 = 26864;
            var_80 = 26704;
            var_88 = 26536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x36:
        {
// switch_6190_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27384;
            var_72 = 27272;
            var_80 = 27152;
            var_88 = 27024;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x37:
        {
// switch_6190_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x38:
        {
// switch_6190_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27752;
            var_72 = 27640;
            var_80 = 27520;
            var_88 = 27392;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0EC8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6190_case_default
        }
        case 0x39:
        {
// switch_6190_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x3a:
        {
// switch_6190_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x3b:
        {
// switch_6190_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x3c:
        {
// switch_6190_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x3d:
        {
// switch_6190_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
        case 0x3e:
        {
// switch_6190_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            OP_JUMP switch_6190_case_default
        }
    }
}
// fun_6988
fun_6988() {
    pri = arg_4;
    OP_JNZ lab_69C0
    var_8 = 0;
    pri = fun_1168()
// lab_69C0
    pri = arg_1;
    switch (pri) {
// switch_7D98
        case default:
        {
// switch_7D98_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_13D8(var_264)
            OP_JZER lab_8360
            pri = arg_3;
            switch (pri) {
// switch_8308
                case default:
                {
// switch_8308_case_default
                    OP_JUMP lab_8618
// lab_8618
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8688
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8688
                    var_8 = 0;
                    pri = fun_11A8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8308_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8308_case_default
                }
                case 0x2:
                {
// switch_8308_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8308_case_default
                }
                case 0x3:
                {
// switch_8308_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0138(var_16, var_8, var_0)
                    OP_JUMP switch_8308_case_default
                }
            }
// lab_8360
            pri = arg_1;
            OP_JZER lab_83B0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_83B0
            pri = 0;
            OP_JUMP lab_83B8
// lab_83B0
            pri = 1;
// lab_83B8
            OP_JZER lab_8420
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8420
            pri = 1;
            OP_JUMP lab_8428
// lab_8420
            pri = 0;
// lab_8428
            OP_JZER lab_8478
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8618
// lab_8478
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_84E0
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_8618
// lab_84E0
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0C58(var_24, var_16)
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
            var_176 = 29984;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30000;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7D98_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1:
        {
// switch_7D98_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2:
        {
// switch_7D98_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x3:
        {
// switch_7D98_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x4:
        {
// switch_7D98_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x5:
        {
// switch_7D98_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E90(var_40)
            OP_JUMP switch_7D98_case_default
        }
        case 0x6:
        {
// switch_7D98_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x7:
        {
// switch_7D98_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x8:
        {
// switch_7D98_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x9:
        {
// switch_7D98_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0xa:
        {
// switch_7D98_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0xb:
        {
// switch_7D98_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0xc:
        {
// switch_7D98_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0xd:
        {
// switch_7D98_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0xe:
        {
// switch_7D98_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0xf:
        {
// switch_7D98_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x10:
        {
// switch_7D98_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x11:
        {
// switch_7D98_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x12:
        {
// switch_7D98_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x13:
        {
// switch_7D98_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x14:
        {
// switch_7D98_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x15:
        {
// switch_7D98_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x16:
        {
// switch_7D98_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x17:
        {
// switch_7D98_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x18:
        {
// switch_7D98_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x19:
        {
// switch_7D98_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1a:
        {
// switch_7D98_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1b:
        {
// switch_7D98_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1c:
        {
// switch_7D98_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1d:
        {
// switch_7D98_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1e:
        {
// switch_7D98_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x1f:
        {
// switch_7D98_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x20:
        {
// switch_7D98_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x21:
        {
// switch_7D98_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x22:
        {
// switch_7D98_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x23:
        {
// switch_7D98_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x24:
        {
// switch_7D98_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x25:
        {
// switch_7D98_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x26:
        {
// switch_7D98_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x27:
        {
// switch_7D98_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x28:
        {
// switch_7D98_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x29:
        {
// switch_7D98_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2a:
        {
// switch_7D98_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2b:
        {
// switch_7D98_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2c:
        {
// switch_7D98_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2d:
        {
// switch_7D98_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2e:
        {
// switch_7D98_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x2f:
        {
// switch_7D98_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x30:
        {
// switch_7D98_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x31:
        {
// switch_7D98_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x32:
        {
// switch_7D98_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x33:
        {
// switch_7D98_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x34:
        {
// switch_7D98_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x35:
        {
// switch_7D98_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x36:
        {
// switch_7D98_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x37:
        {
// switch_7D98_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x38:
        {
// switch_7D98_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x39:
        {
// switch_7D98_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x3a:
        {
// switch_7D98_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x3b:
        {
// switch_7D98_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x3c:
        {
// switch_7D98_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x3d:
        {
// switch_7D98_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
        case 0x3e:
        {
// switch_7D98_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            OP_JUMP switch_7D98_case_default
        }
    }
}
// fun_86B8
fun_86B8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_88C8(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 30048;
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
    var_424 = 30104;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 30120;
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
    OP_JZER lab_88B0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_88B0
    pri = 0;
    return pri;
}
// fun_88C8
fun_88C8() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0C18(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8910
fun_8910() {
    pri = 30272;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_8998
// lab_8998
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_8B18
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_8B08
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_8A58
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_8A58
    pri = 0;
    OP_JUMP lab_8A60
// lab_8B18
    pri = 0;
    return pri;
// lab_8B08
    OP_JUMP lab_8990
// lab_8990
    OP_INC_P_S -936
// lab_8A58
    pri = 1;
// lab_8A60
    OP_JZER lab_8AD8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_8AD0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_8AD8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_8AD0
}
// fun_8B38
fun_8B38() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_8B70
fun_8B70() {
    var_8 = 0;
    pri = fun_8B38()
    switch (pri) {
// switch_8C20
        case default:
        {
// switch_8C20_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_8C68
// lab_8C68
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_8C20_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_8C68
        }
        case 0x1:
        {
// switch_8C20_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_8C68
        }
        case 0x2:
        {
// switch_8C20_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_8C68
        }
    }
}
// fun_8C78
fun_8C78() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_8D10
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1680()
// lab_8D10
    pri = arg_4;
    OP_JZER lab_8D48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1738(var_8)
// lab_8D48
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_8DA0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_8DA0
    pri = 0;
    OP_JUMP lab_8DA8
// lab_8DA0
    pri = 1;
// lab_8DA8
    OP_JZER lab_8E70
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_8E70
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_8E48
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_15C0(var_32, var_24)
    OP_JUMP lab_8E70
// lab_8E70
    pri = arg_2;
    OP_JZER lab_8F48
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_8F18
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_11E8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0960(var_40)
    OP_JUMP lab_8F48
// lab_8F48
    pri = arg_3;
    OP_JZER lab_8F80
    var_8 = 1;
    var_16 = 8;
    pri = fun_1648(var_8)
// lab_8F80
    pri = 0;
    return pri;
// lab_8F18
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_11E8(var_16, var_8)
// lab_8E48
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_15C0(var_16, var_8)
}
// fun_8F90
fun_8F90() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9110
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9028
    var_8 = 1;
    var_16 = 0;
    var_24 = 31192;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_9110
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9028
    pri = arg_0;
    OP_JNZ lab_9070
    var_8 = 31240;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_9090
// lab_9070
    var_8 = 31416;
    pri = SoundPostEvent(var_8)
// lab_9090
    var_8 = 0;
    var_16 = 8;
    pri = fun_0590(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9110
    var_24 = 31680;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_9150
fun_9150() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_8910(var_24)
    pri = 0;
    return pri;
}
// fun_91B8
fun_91B8() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_9338(var_16)
    var_8 = pri;
    var_32 = 1;
    var_40 = 1;
    var_48 = arg_0;
    pri = GetFieldObjectPositionZ_(var_48)
    var_56 = pri;
    var_64 = arg_0;
    pri = GetFieldObjectPositionX_(var_64)
    var_72 = pri;
    var_80 = var_8;
    var_88 = 40;
    pri = fun_0878(var_80, var_72, var_64, var_56, var_48)
    var_96 = 31784;
    var_104 = 31728;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_16A8(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_92C0
fun_92C0() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_9338(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_16F8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_9338
fun_9338() {
    pri = arg_0;
    OP_JNZ lab_9380
    var_8 = 31840;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_9380
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_93C8
    var_8 = 31992;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_93C8
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 32144;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_9410
fun_9410() {
    pri = g_mode;
    switch (pri) {
// switch_94D0
        case default:
        {
// switch_94D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9518
// lab_9518
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_94D0_case_0x0
            var_8 = 0;
            pri = fun_9528()
            OP_JUMP lab_9518
        }
        case 0x1fa4782ae1f8180c:
        {
// switch_94D0_case_0x1fa4782ae1f8180c
            var_8 = 0;
            pri = fun_BAD0()
            OP_JUMP lab_9518
        }
        case 0x469c56277e7387b0:
        {
// switch_94D0_case_0x469c56277e7387b0
            var_8 = 0;
            pri = fun_BBC0()
            OP_JUMP lab_9518
        }
    }
}
// fun_9528
fun_9528() {
    pri = 0;
    return pri;
}
// fun_9540
fun_9540() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_8C78(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9598
fun_9598() {
    pri = 0;
    return pri;
}
// fun_95B0
fun_95B0() {
    pri = 0;
    return pri;
}
// fun_95C8
fun_95C8() {
    OP_CONST_S -8, 258
    var_16 = 21;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 132;
    var_48 = 131;
    var_56 = 130;
    var_64 = 24;
    pri = fun_8B70(var_56, var_48, var_40)
    var_72 = pri;
    var_80 = 32;
    pri = fun_2528(var_72, var_64, var_56, var_48)
    var_88 = 1;
    var_96 = 0;
    var_104 = 31192;
    var_112 = 8;
    var_120 = 32;
    pri = fun_02E0(var_112, var_104, var_96, var_88)
    var_128 = 0;
    pri = fun_0350()
    pri = EvCameraStart()
    var_136 = 0;
    var_144 = 8802641224559852288;
    var_152 = 16;
    pri = fun_91B8(var_144, var_136)
    var_160 = 1;
    var_168 = -5663627750221996031;
    var_176 = 16;
    pri = fun_91B8(var_168, var_160)
    var_184 = 1;
    var_192 = 8802641224559852288;
    var_200 = 16;
    pri = fun_0920(var_192, var_184)
    var_208 = 1;
    var_216 = -5663627750221996031;
    var_224 = 16;
    pri = fun_0920(var_216, var_208)
    var_232 = 1;
    var_240 = 3458049540832089695;
    var_248 = 16;
    pri = fun_0920(var_240, var_232)
    var_256 = 1;
    var_264 = 3458048441320461484;
    var_272 = 16;
    pri = fun_0920(var_264, var_256)
    var_280 = 1;
    var_288 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_296 = 48;
    pri = fun_08C8(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 1;
    var_312 = 1;
    var_320 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, -5663627750221996031
    var_328 = 48;
    pri = fun_08C8(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 2;
    var_344 = 2;
    var_352 = 8802641224559852288;
    var_360 = 24;
    pri = fun_1318(var_352, var_344, var_336)
    var_368 = 1;
    var_376 = 1;
    var_384 = -5663627750221996031;
    var_392 = 24;
    pri = fun_1318(var_384, var_376, var_368)
    var_400 = 0;
    var_408 = 60;
    pri = float(var_408)
    var_416 = pri;
    var_424 = 32152;
    pri = SoundSetRTPC(var_424, var_416, var_408)
    var_432 = 15;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 1;
    var_456 = 0;
    var_464 = 0;
    var_472 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_480 = 48;
    pri = fun_0A10(var_472, var_464, var_456, var_448, var_440, var_432)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_488 = 16;
    pri = fun_2890(var_480, var_472)
    var_496 = 0;
    var_504 = 1;
    var_512 = 220;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 4609434218613702656;
    var_536 = 32;
    pri = fun_28F8(var_528, var_520, var_512, var_504)
    var_544 = 0;
    var_552 = 4630798169346041446;
    var_560 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_568 = 4671166637055011717;
    var_576 = 1;
    pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 0;
    pri = fun_2800()
    var_592 = 0;
    var_600 = 4630798169346041446;
    var_608 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_616 = 4671174919126347940;
    var_624 = 90;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    var_640 = 60;
    var_648 = 100;
    pri = float(var_648)
    var_656 = pri;
    var_664 = 4609434218613702656;
    var_672 = 32;
    pri = fun_28F8(var_664, var_656, var_648, var_640)
    var_680 = 31680;
    var_688 = 8;
    var_696 = 16;
    pri = fun_0280(var_688, var_680)
    var_704 = 0;
    pri = fun_0350()
    var_712 = 8802641224559852288;
    var_720 = 8;
    pri = fun_0AB8(var_712)
    var_728 = 1;
    var_736 = 0;
    var_744 = 0;
    var_752 = 75;
    OP_PUSH2_C 4607182418800017408, -5663627750221996031
    var_760 = 48;
    pri = fun_0A10(var_752, var_744, var_736, var_728, var_720, var_712)
    var_768 = 0;
    var_776 = 1;
    var_784 = 220;
    pri = float(var_784)
    var_792 = pri;
    var_800 = 4609434218613702656;
    var_808 = 32;
    pri = fun_28F8(var_800, var_792, var_784, var_776)
    var_816 = 0;
    var_824 = 4630798169346041446;
    var_832 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_840 = 4671252805781280522;
    var_848 = 1;
    pri = EvCameraMove(var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776)
    var_856 = 0;
    pri = fun_2800()
    var_864 = 0;
    var_872 = 4630798169346041446;
    var_880 = 3;
    OP_PUSH5_C 4670052427705551421, 4641170522237829120, 4671391718080333742, 4670402297803067884, 4632852936676029235
    var_888 = 4671208891286867149;
    var_896 = 180;
    pri = EvCameraMove(var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_904 = -5663627750221996031;
    var_912 = 8;
    pri = fun_0AB8(var_904)
    var_920 = 1;
    var_928 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_936 = 48;
    pri = fun_08C8(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 1;
    var_952 = 1;
    var_960 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, -5663627750221996031
    var_968 = 48;
    pri = fun_08C8(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 1;
    var_984 = 8;
    pri = fun_0060(var_976)
    var_992 = 1;
    var_1000 = 0;
    var_1008 = 4641240890982006784;
    var_1016 = 0;
    var_1024 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1032 = 72;
    pri = fun_0998(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1040 = 1;
    var_1048 = 0;
    var_1056 = 4641240890982006784;
    var_1064 = 0;
    var_1072 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, -5663627750221996031
    var_1080 = 72;
    pri = fun_0998(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1088 = 15;
    var_1096 = 8;
    pri = fun_0060(var_1088)
    var_1104 = 0;
    var_1112 = 1;
    var_1120 = 700;
    pri = float(var_1120)
    var_1128 = pri;
    var_1136 = 4611686018427387904;
    var_1144 = 32;
    pri = fun_28F8(var_1136, var_1128, var_1120, var_1112)
    var_1152 = 0;
    var_1160 = 4626857519672092262;
    var_1168 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1176 = 4671083459000370463;
    var_1184 = 1;
    pri = EvCameraMove(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1192 = 0;
    pri = fun_2800()
    var_1200 = 0;
    var_1208 = 4626857519672092262;
    var_1216 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1224 = 4671072741510778716;
    var_1232 = 480;
    pri = EvCameraMove(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160)
    var_1240 = 8802641224559852288;
    var_1248 = 8;
    pri = fun_0AB8(var_1240)
    var_1256 = -5663627750221996031;
    var_1264 = 8;
    pri = fun_0AB8(var_1256)
    var_1272 = 15;
    var_1280 = 8;
    pri = fun_0060(var_1272)
    var_1288 = 0;
    var_1296 = 30;
    pri = float(var_1296)
    var_1304 = pri;
    var_1312 = 32288;
    pri = SoundSetRTPC(var_1312, var_1304, var_1296)
    var_1320 = 0;
    var_1328 = 0;
    var_1336 = 0;
    var_1344 = 90;
    pri = float(var_1344)
    var_1352 = pri;
    var_1360 = 8802641224559852288;
    var_1368 = 40;
    pri = fun_0A68(var_1360, var_1352, var_1344, var_1336, var_1328)
    var_1376 = 0;
    var_1384 = 0;
    var_1392 = 0;
    var_1400 = 270;
    pri = float(var_1400)
    var_1408 = pri;
    var_1416 = -5663627750221996031;
    var_1424 = 40;
    pri = fun_0A68(var_1416, var_1408, var_1400, var_1392, var_1384)
    var_1432 = 30;
    var_1440 = 8;
    pri = fun_0060(var_1432)
    var_1448 = 8802641224559852288;
    var_1456 = 8;
    pri = fun_0AB8(var_1448)
    var_1464 = -5663627750221996031;
    var_1472 = 8;
    pri = fun_0AB8(var_1464)
    var_1480 = 8;
    var_1488 = -5663627750221996031;
    var_1496 = 16;
    pri = fun_1228(var_1488, var_1480)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C -4384521439606727767, -5663627750221996031
    var_1544 = 56;
    pri = fun_1F80(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_20C8(var_1552)
    var_1568 = -5663627750221996031;
    var_1576 = 8;
    pri = fun_1268(var_1568)
    var_1584 = 1;
    var_1592 = 1;
    var_1600 = -1;
    var_1608 = -1;
    var_1616 = 0;
    var_1624 = 3;
    var_1632 = -5663627750221996031;
    var_1640 = 56;
    pri = fun_4650(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1648 = 0;
    var_1656 = 3;
    var_1664 = 0;
    var_1672 = 100;
    var_1680 = -1;
    OP_PUSH2_C -4384524738141612400, -5663627750221996031
    var_1688 = 56;
    pri = fun_1F80(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1696 = 1;
    var_1704 = 8;
    pri = fun_20C8(var_1696)
    var_1712 = 1;
    var_1720 = 3;
    var_1728 = 0;
    var_1736 = 3;
    var_1744 = -5663627750221996031;
    var_1752 = 40;
    pri = fun_6988(var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1760 = -5663627750221996031;
    var_1768 = 8;
    pri = fun_0C90(var_1760)
    var_1776 = 1;
    var_1784 = -1;
    var_1792 = -1;
    var_1800 = 3;
    var_1808 = 0;
    var_1816 = 0;
    var_1824 = -5663627750221996031;
    var_1832 = 56;
    pri = fun_2A70(var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1840 = 2;
    var_1848 = 2;
    var_1856 = -5663627750221996031;
    var_1864 = 24;
    pri = fun_1318(var_1856, var_1848, var_1840)
    var_1872 = 0;
    var_1880 = 3;
    var_1888 = 0;
    var_1896 = 100;
    var_1904 = -1;
    OP_PUSH2_C -4384523638629984189, -5663627750221996031
    var_1912 = 56;
    pri = fun_1F80(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1920 = -5663627750221996031;
    var_1928 = 8;
    pri = fun_0C90(var_1920)
    var_1936 = 1;
    var_1944 = 8;
    pri = fun_20C8(var_1936)
    var_1952 = 0;
    pri = fun_2188()
    var_1960 = 0;
    var_1968 = 1;
    var_1976 = 200;
    pri = float(var_1976)
    var_1984 = pri;
    var_1992 = 4612811918334230528;
    var_2000 = 32;
    pri = fun_28F8(var_1992, var_1984, var_1976, var_1968)
    var_2008 = 0;
    var_2016 = 4631952216750555136;
    var_2024 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_2032 = 4671031446602818519;
    var_2040 = 1;
    pri = EvCameraMove(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968)
    var_2048 = 0;
    pri = fun_2800()
    var_2056 = 0;
    var_2064 = 4631952216750555136;
    var_2072 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_2080 = 4671018568572878193;
    var_2088 = 240;
    pri = EvCameraMove(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016)
    var_2096 = 0;
    var_2104 = 60;
    pri = float(var_2104)
    var_2112 = pri;
    var_2120 = 32424;
    pri = SoundSetRTPC(var_2120, var_2112, var_2104)
    var_2128 = 32560;
    pri = SoundPostEvent(var_2128)
    var_2136 = 30;
    var_2144 = 8;
    pri = fun_0060(var_2136)
    var_2152 = 0;
    var_2160 = 120;
    var_2168 = 850;
    pri = float(var_2168)
    var_2176 = pri;
    var_2184 = 4605380978949069210;
    var_2192 = 32;
    pri = fun_28F8(var_2184, var_2176, var_2168, var_2160)
    var_2200 = -5663627750221996031;
    var_2208 = 8;
    pri = fun_1380(var_2200)
    var_2216 = 1;
    var_2224 = 0;
    var_2232 = 4641240890982006784;
    var_2240 = 0;
    var_2248 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2256 = 72;
    pri = fun_0998(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2264 = 1;
    var_2272 = 0;
    var_2280 = 4641240890982006784;
    var_2288 = 0;
    var_2296 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, -5663627750221996031
    var_2304 = 72;
    pri = fun_0998(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256, var_2248, var_2240, var_2232)
    var_2312 = 8802641224559852288;
    var_2320 = 8;
    pri = fun_0AB8(var_2312)
    var_2328 = -5663627750221996031;
    var_2336 = 8;
    pri = fun_0AB8(var_2328)
    var_2344 = 15;
    var_2352 = 8;
    pri = fun_0060(var_2344)
    var_2360 = 0;
    var_2368 = 0;
    var_2376 = 0;
    var_2384 = 90;
    pri = float(var_2384)
    var_2392 = pri;
    var_2400 = 8802641224559852288;
    var_2408 = 40;
    pri = fun_0A68(var_2400, var_2392, var_2384, var_2376, var_2368)
    var_2416 = 0;
    var_2424 = 0;
    var_2432 = 0;
    var_2440 = 270;
    pri = float(var_2440)
    var_2448 = pri;
    var_2456 = -5663627750221996031;
    var_2464 = 40;
    pri = fun_0A68(var_2456, var_2448, var_2440, var_2432, var_2424)
    var_2472 = 30;
    var_2480 = 8;
    pri = fun_0060(var_2472)
    var_2488 = 8802641224559852288;
    var_2496 = 8;
    pri = fun_0AB8(var_2488)
    var_2504 = -5663627750221996031;
    var_2512 = 8;
    pri = fun_0AB8(var_2504)
    var_2520 = 0;
    pri = fun_2588()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2528 = 3;
    var_2536 = 1;
    var_2544 = 32;
    pri = fun_2950(var_2536, var_2528, var_2520, var_2512)
    var_2552 = 0;
    pri = fun_2618()
    var_2560 = 0;
    pri = fun_26C0()
    OP_JZER lab_AC70
    var_2568 = 0;
    pri = fun_27B0()
// lab_AC70
    var_8 = 1;
    var_16 = 1;
    var_24 = 90;
    pri = float(var_24)
    var_32 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_40 = 48;
    pri = fun_08C8(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 1;
    var_56 = 1;
    var_64 = 270;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 4671226772094713856;
    var_88 = 20580;
    pri = float(var_88)
    var_96 = pri;
    var_104 = -5663627750221996031;
    var_112 = 48;
    pri = fun_08C8(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = 8802641224559852288;
    var_128 = 8;
    pri = fun_1380(var_120)
    var_136 = 15;
    var_144 = 8;
    pri = fun_0060(var_136)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_152 = 16;
    pri = fun_2890(var_144, var_136)
    var_160 = 0;
    var_168 = 1;
    var_176 = 250;
    pri = float(var_176)
    var_184 = pri;
    var_192 = 4609434218613702656;
    var_200 = 32;
    pri = fun_28F8(var_192, var_184, var_176, var_168)
    var_208 = 1;
    var_216 = 0;
    var_224 = 4641240890982006784;
    var_232 = 0;
    var_240 = 0;
    var_248 = 20000;
    pri = float(var_248)
    var_256 = pri;
    var_264 = 19850;
    pri = float(var_264)
    var_272 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_280 = 72;
    pri = fun_0998(var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208)
    var_288 = 1;
    var_296 = 0;
    var_304 = 4641240890982006784;
    var_312 = 0;
    var_320 = 0;
    var_328 = 20000;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 20150;
    pri = float(var_344)
    var_352 = pri;
    OP_PUSH2_C 4607182418800017408, -5663627750221996031
    var_360 = 72;
    pri = fun_0998(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288)
    var_368 = 0;
    var_376 = 4631952216750555136;
    var_384 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_392 = 4671115501517982925;
    var_400 = 1;
    pri = EvCameraMove(var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_408 = 0;
    pri = fun_2800()
    var_416 = 0;
    var_424 = 4631952216750555136;
    var_432 = 2;
    OP_PUSH5_C 4671260076301919191, 4633083746156931973, 4671169237400011407, 4671333688605398794, 4633439812002470953
    var_440 = 4671093984075427348;
    var_448 = 240;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 0;
    var_464 = 30;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 32808;
    pri = SoundSetRTPC(var_480, var_472, var_464)
    var_488 = 31680;
    var_496 = 8;
    var_504 = 16;
    pri = fun_0280(var_496, var_488)
    var_512 = 0;
    pri = fun_0350()
    var_520 = 0;
    var_528 = 3;
    var_536 = 0;
    var_544 = 101;
    var_552 = 0;
    var_560 = 3026973261516844661;
    var_568 = -1;
    var_576 = 56;
    pri = fun_1F80(var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_584 = 8802641224559852288;
    var_592 = 8;
    pri = fun_0AB8(var_584)
    var_600 = -5663627750221996031;
    var_608 = 8;
    pri = fun_0AB8(var_600)
    var_616 = 15;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 1;
    var_640 = 8;
    pri = fun_20C8(var_632)
    var_648 = 0;
    pri = fun_2188()
    var_656 = 30;
    var_664 = 8;
    pri = fun_0060(var_656)
    var_672 = 0;
    var_680 = 1;
    var_688 = 320;
    pri = float(var_688)
    var_696 = pri;
    var_704 = 4611686018427387904;
    var_712 = 32;
    pri = fun_28F8(var_704, var_696, var_688, var_680)
    var_720 = 0;
    var_728 = 4629587826946185626;
    var_736 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_744 = 4671148720513037107;
    var_752 = 1;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 0;
    pri = fun_2800()
    var_768 = 0;
    var_776 = 4629587826946185626;
    var_784 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_792 = 4671146447272746680;
    var_800 = 240;
    pri = EvCameraMove(var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736, var_728)
    var_808 = 0;
    var_816 = 3;
    var_824 = -5663627750221996031;
    var_832 = 24;
    pri = fun_86B8(var_824, var_816, var_808)
    var_840 = 0;
    var_848 = 3;
    var_856 = 0;
    var_864 = 100;
    var_872 = -1;
    OP_PUSH2_C -4384518141071843134, -5663627750221996031
    var_880 = 56;
    pri = fun_1F80(var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_888 = 1;
    var_896 = 8;
    pri = fun_20C8(var_888)
    var_904 = 5;
    var_912 = 5;
    var_920 = -5663627750221996031;
    var_928 = 24;
    pri = fun_1318(var_920, var_912, var_904)
    var_936 = 0;
    var_944 = 3;
    var_952 = 0;
    var_960 = 100;
    var_968 = -1;
    OP_PUSH2_C -4384517041560214923, -5663627750221996031
    var_976 = 56;
    pri = fun_1F80(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 1;
    var_992 = 8;
    pri = fun_20C8(var_984)
    var_1000 = -5663627750221996031;
    var_1008 = 8;
    pri = fun_1380(var_1000)
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    var_1048 = 8;
    pri = fun_2478(var_1040)
    var_1056 = pri;
    pri = PokePartyGetParam(var_1056, var_1048, var_1040)
    var_16 = pri;
    var_1064 = var_16;
    var_1072 = 1;
    var_1080 = 16;
    pri = fun_21B8(var_1072, var_1064)
    var_1088 = 0;
    var_1096 = 0;
    pri = PokePartyGetCount(var_1096, var_1088)
    alt = 2;
    OP_JSGEQ lab_B6E0
    var_1104 = 0;
    var_1112 = 3;
    var_1120 = 0;
    var_1128 = 100;
    var_1136 = -1;
    OP_PUSH2_C -4384520340095099556, -5663627750221996031
    var_1144 = 56;
    pri = fun_1F80(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1152 = 1;
    var_1160 = 8;
    pri = fun_20C8(var_1152)
    var_1168 = 0;
    pri = fun_2188()
    OP_JUMP lab_B770
// lab_B6E0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    OP_PUSH2_C -4384519240583471345, -5663627750221996031
    var_48 = 56;
    pri = fun_1F80(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_56 = 1;
    var_64 = 8;
    pri = fun_20C8(var_56)
    var_72 = 0;
    pri = fun_2188()
// lab_B770
    var_8 = 12;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = fun_0440()
    var_32 = 32944;
    pri = SoundPostEvent(var_32)
    var_40 = 1;
    var_48 = 0;
    var_56 = 33208;
    var_64 = 8;
    var_72 = 32;
    pri = fun_02E0(var_64, var_56, var_48, var_40)
    var_80 = 0;
    pri = fun_0350()
    var_88 = 0;
    var_96 = 8802641224559852288;
    var_104 = 16;
    pri = fun_92C0(var_96, var_88)
    var_112 = 1;
    var_120 = -5663627750221996031;
    var_128 = 16;
    pri = fun_92C0(var_120, var_112)
    var_136 = 0;
    pri = SetPlayerUniform(var_136)
    pri = 0;
    return pri;
}
// fun_B8B0
fun_B8B0() {
    pri = 0;
    return pri;
}
// fun_B8C8
fun_B8C8() {
    var_8 = -5663627750221996031;
    var_16 = 8;
    pri = fun_0820(var_8)
    var_24 = -4889189955526537819;
    var_32 = 8;
    pri = fun_0820(var_24)
    var_40 = 3641199730571183281;
    var_48 = 8;
    pri = fun_06A0(var_40)
    var_56 = -7228191161882330812;
    var_64 = 8;
    pri = fun_06A0(var_56)
    var_72 = 1550;
    var_80 = 8;
    pri = fun_9150(var_72)
    var_88 = -6559216601980804566;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_B9C8
fun_B9C8() {
    var_8 = 0;
    pri = fun_06D0()
    var_16 = 0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_8F90(var_24, var_16)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 4155;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 3509;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH3_C 9117464242582929906, -3308727729863870995, 2281071196419862933
    var_112 = 80;
    pri = fun_04D0(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_BAD0
fun_BAD0() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9540()
    var_16 = 0;
    pri = fun_9598()
    var_24 = 0;
    pri = fun_95B0()
    var_32 = 0;
    pri = fun_95C8()
    var_40 = 0;
    pri = fun_B8B0()
    var_48 = 0;
    pri = fun_B8C8()
    var_56 = 0;
    pri = fun_B9C8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_BBC0
fun_BBC0() {
    var_8 = 0;
    pri = fun_9598()
    var_16 = 0;
    pri = fun_B8C8()
    pri = 0;
    return pri;
}
