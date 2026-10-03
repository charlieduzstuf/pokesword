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
    OP_LOAD_S_BOTH 24, 32
    OP_SUB_ALT 
    var_8 = pri;
    pri = GetPublicRand(var_8)
    OP_LOAD_P_S_ALT 24
    OP_ADD 
    return pri;
}
// fun_01C0
fun_01C0() {
    OP_ZERO_P_S -8
    OP_JUMP lab_01F0
// lab_01F0
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_02F0
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0270
    pri = 0;
    return pri;
// lab_02F0
    pri = 0;
    return pri;
// lab_0270
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
    OP_JUMP lab_01E8
// lab_01E8
    OP_INC_P_S -8
}
// fun_0308
fun_0308() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0368
fun_0368() {
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
// fun_03D8
fun_03D8() {
    OP_JUMP lab_03F0
// lab_03F0
    pri = FadeWait_()
    OP_JZER lab_0428
    pri = 0;
    return pri;
// lab_0428
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03F0
    pri = 0;
    return pri;
}
// fun_0468
fun_0468() {
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
// fun_0508
fun_0508() {
    pri = arg_8;
    OP_JZER lab_0578
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0368(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D8()
// lab_0578
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
    pri = fun_0468(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 1;
    var_96 = arg_4;
    var_104 = 8802641224559852288;
    var_112 = 24;
    pri = fun_0B08(var_104, var_96, var_88)
    pri = arg_8;
    OP_JZER lab_0668
    var_120 = 80;
    var_128 = 8;
    var_136 = 16;
    pri = fun_0308(var_128, var_120)
    var_144 = 0;
    pri = fun_03D8()
// lab_0668
    pri = 0;
    return pri;
}
// fun_0678
fun_0678() {
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
// fun_0738
fun_0738() {
    var_8 = arg_0;
    pri = IncRecord_(var_8)
    return pri;
}
// fun_0768
fun_0768() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_07B0
// lab_07B0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_07F0
    OP_JUMP lab_0860
// lab_07F0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0830
    OP_JUMP lab_0860
// lab_0830
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07B0
// lab_0860
    pri = 0;
    return pri;
}
// fun_0878
fun_0878() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_08B0
// lab_08B0
    var_8 = 0;
    pri = fun_09F8()
    OP_JNZ lab_08E8
    OP_JUMP lab_0918
// lab_08E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08B0
// lab_0918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0948
// lab_0948
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0988
    pri = 0;
    return pri;
// lab_0988
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0948
    pri = 0;
    return pri;
}
// fun_09C8
fun_09C8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0A20
fun_0A20() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = AddFieldNpcObject_(var_24, var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB0
fun_0AB0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B08
fun_0B08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0B48
fun_0B48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0B88
fun_0B88() {
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
// fun_0C00
fun_0C00() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0CA8
fun_0CA8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1540(var_8)
    OP_JZER lab_0D20
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1570(var_24)
    OP_JNZ lab_0D20
    pri = 0;
    return pri;
// lab_0D20
    OP_JUMP lab_0D30
// lab_0D30
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0D90
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0D90
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0D30
    pri = 0;
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0E48
fun_0E48() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E80
fun_0E80() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0EC8
    pri = 0;
    return pri;
// lab_0EC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0F08
// lab_0F08
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1540(var_8)
    OP_JNZ lab_0F90
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F80
    pri = 0;
    return pri;
// lab_0F90
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0FD8
    pri = 0;
    return pri;
// lab_0FD8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1038
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11A8(var_8)
    pri = 0;
    return pri;
// lab_1038
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0F08
    pri = 0;
    return pri;
// lab_0F80
    OP_JUMP lab_0FD8
}
// fun_1080
fun_1080() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_10C8
// lab_10C8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1120
    pri = 0;
    return pri;
// lab_1120
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1160
    pri = 0;
    return pri;
// lab_1160
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_10C8
    pri = 0;
    return pri;
}
// fun_11A8
fun_11A8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1230
    pri = 0;
    return pri;
// lab_1230
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1540(var_8)
    OP_JZER lab_1360
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1288
    OP_ZERO_P_S 64
// lab_1360
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1398
    OP_CONST_S 64, 1
// lab_1398
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13D0
    OP_CONST_S 72, 1
// lab_13D0
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
// lab_1288
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12B0
    OP_ZERO_P_S 72
// lab_12B0
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
    OP_JUMP lab_1470
// lab_1470
    pri = 0;
    return pri;
}
// fun_1480
fun_1480() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14C0
fun_14C0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1540
fun_1540() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1570
fun_1570() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15A0
fun_15A0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_15D0
fun_15D0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1660
fun_1660() {
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
// switch_1C78
        case default:
        {
// switch_1C78_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1CC0
// lab_1CC0
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
            OP_JNZ lab_1D68
            var_88 = 0;
            pri = fun_2100()
// lab_1D68
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1C78_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1860
                case default:
                {
// switch_1860_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18D8
// lab_18D8
                    OP_JUMP lab_1CC0
                }
                case 0x0:
                {
// switch_1860_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_18D8
                }
                case 0x1:
                {
// switch_1860_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_18D8
                }
                case 0x2:
                {
// switch_1860_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_18D8
                }
                case 0x3:
                {
// switch_1860_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_18D8
                }
                case 0x4:
                {
// switch_1860_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_18D8
                }
                case 0x5:
                {
// switch_1860_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_18D8
                }
            }
        }
        case 0x65:
        {
// switch_1C78_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1A18
                case default:
                {
// switch_1A18_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A90
// lab_1A90
                    OP_JUMP lab_1CC0
                }
                case 0x0:
                {
// switch_1A18_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1A90
                }
                case 0x1:
                {
// switch_1A18_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1A90
                }
                case 0x2:
                {
// switch_1A18_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1A90
                }
                case 0x3:
                {
// switch_1A18_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1A90
                }
                case 0x4:
                {
// switch_1A18_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1A90
                }
                case 0x5:
                {
// switch_1A18_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1A90
                }
            }
        }
        case 0x66:
        {
// switch_1C78_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1BD0
                case default:
                {
// switch_1BD0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C48
// lab_1C48
                    OP_JUMP lab_1CC0
                }
                case 0x0:
                {
// switch_1BD0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1C48
                }
                case 0x1:
                {
// switch_1BD0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1C48
                }
                case 0x2:
                {
// switch_1BD0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1C48
                }
                case 0x3:
                {
// switch_1BD0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1C48
                }
                case 0x4:
                {
// switch_1BD0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1C48
                }
                case 0x5:
                {
// switch_1BD0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1C48
                }
            }
        }
    }
}
// fun_1D80
fun_1D80() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1660(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DE8
fun_1DE8() {
    pri = 440;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 520;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0E48(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1E90
    pri = 1;
    return pri;
// lab_1E90
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1ED8
fun_1ED8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1F28
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DE8(var_8)
    arg_2 = pri;
// lab_1F28
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1660(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F88
fun_1F88() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1FD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1DE8(var_8)
    arg_2 = pri;
// lab_1FD8
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
    pri = fun_1ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2050
fun_2050() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1D80(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20A0
fun_20A0() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2050(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2100
fun_2100() {
    OP_JUMP lab_2118
// lab_2118
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2158
    pri = 0;
    return pri;
// lab_2158
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2118
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
    var_8 = 0;
    pri = fun_2100()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2248
    var_32 = 568;
    pri = SoundPostEvent(var_32)
// lab_2248
    pri = 0;
    return pri;
}
// fun_2258
fun_2258() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2288
fun_2288() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_22B8
// lab_22B8
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22F8
    OP_JUMP lab_2328
// lab_22F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_22B8
// lab_2328
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2370
fun_2370() {
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
// fun_23E0
fun_23E0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2458()
    return pri;
}
// fun_2458
fun_2458() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2498
fun_2498() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_24D0
fun_24D0() {
    OP_JUMP lab_24E8
// lab_24E8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2530
    OP_JUMP lab_2560
    OP_JUMP lab_2550
// lab_2530
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2560
    pri = 0;
    return pri;
// lab_2550
    OP_JUMP lab_24E8
}
// fun_2570
fun_2570() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_25A0
fun_25A0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25F0
fun_25F0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2640
fun_2640() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2690
fun_2690() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26E0
fun_26E0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 5;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2730
fun_2730() {
    OP_JUMP lab_2748
// lab_2748
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2780
    pri = 0;
    return pri;
// lab_2780
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2748
    pri = 0;
    return pri;
}
// fun_27C0
fun_27C0() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2838
fun_2838() {
    var_8 = 0;
    pri = fun_27C0()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_28B8
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_28B8
    pri = 1;
    return pri;
// lab_28B8
    var_8 = 0;
    pri = fun_27C0()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_28F8
    pri = 1;
    return pri;
// lab_28F8
    var_8 = 0;
    pri = fun_27C0()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2928
fun_2928() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2978
fun_2978() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = StartLoadTornamentTrainerBattleSeamless_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29B8
fun_29B8() {
    pri = CallTornamentTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_29E8
fun_29E8() {
    OP_JUMP lab_2A00
// lab_2A00
    pri = EvCameraMoveWait_()
    OP_JZER lab_2A38
    pri = 0;
    return pri;
// lab_2A38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A00
    pri = 0;
    return pri;
}
// fun_2A78
fun_2A78() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2AE0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2BB8()
    pri = 0;
    return pri;
}
// fun_2AE0
fun_2AE0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B38
fun_2B38() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2AE0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2BB8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2BB8
fun_2BB8() {
    OP_JUMP lab_2BD0
// lab_2BD0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2C28
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2C38
// lab_2C28
    pri = 0;
    return pri;
// lab_2C38
    OP_JUMP lab_2BD0
    pri = 0;
    return pri;
}
// fun_2C58
fun_2C58() {
    var_8 = arg_0;
    pri = GetNpcLicenseCardFlag(var_8)
    return pri;
}
// fun_2C88
fun_2C88() {
    pri = arg_6;
    OP_JNZ lab_2CC0
    var_8 = 0;
    pri = fun_1480()
// lab_2CC0
    pri = arg_1;
    switch (pri) {
// switch_4228
        case default:
        {
// switch_4228_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4578
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4578
            pri = 1;
            OP_JUMP lab_4580
// lab_4578
            pri = 0;
// lab_4580
            OP_JZER lab_46D8
            var_16 = 8416;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E48(var_24, var_16)
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
            OP_JUMP lab_4738
// lab_46D8
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
            pri = fun_01C0(var_16, var_8, var_0)
// lab_4738
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4798
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_47F8
// lab_4798
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_47F8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_47F8
            pri = arg_2;
            OP_JZER lab_4838
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4838
            var_8 = 0;
            pri = fun_14C0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4228_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x1:
        {
// switch_4228_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x2:
        {
// switch_4228_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x3:
        {
// switch_4228_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x4:
        {
// switch_4228_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x5:
        {
// switch_4228_case_0x5
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0x6:
        {
// switch_4228_case_0x6
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0x7:
        {
// switch_4228_case_0x7
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0x8:
        {
// switch_4228_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x9:
        {
// switch_4228_case_0x9
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0xa:
        {
// switch_4228_case_0xa
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0xb:
        {
// switch_4228_case_0xb
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0xc:
        {
// switch_4228_case_0xc
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0xd:
        {
// switch_4228_case_0xd
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0xe:
        {
// switch_4228_case_0xe
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0xf:
        {
// switch_4228_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x10:
        {
// switch_4228_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x11:
        {
// switch_4228_case_0x11
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0x12:
        {
// switch_4228_case_0x12
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0x13:
        {
// switch_4228_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x14:
        {
// switch_4228_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x15:
        {
// switch_4228_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x16:
        {
// switch_4228_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x17:
        {
// switch_4228_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x18:
        {
// switch_4228_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x19:
        {
// switch_4228_case_0x19
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4228_case_default
        }
        case 0x1a:
        {
// switch_4228_case_0x1a
            var_8 = 1;
            var_16 = 5976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            var_40 = 6112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0DD0(var_48, var_40)
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
            pri = fun_11E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4228_case_default
        }
        case 0x1b:
        {
// switch_4228_case_0x1b
            var_8 = 3;
            var_16 = 6200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            var_40 = 6336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0DD0(var_48, var_40)
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
            pri = fun_11E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4228_case_default
        }
        case 0x1c:
        {
// switch_4228_case_0x1c
            var_8 = 2;
            var_16 = 6424;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            var_40 = 6560;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0DD0(var_48, var_40)
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
            pri = fun_11E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4228_case_default
        }
        case 0x1d:
        {
// switch_4228_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6648;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x1e:
        {
// switch_4228_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6784;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x1f:
        {
// switch_4228_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6920;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x20:
        {
// switch_4228_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7056;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x21:
        {
// switch_4228_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7176;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x22:
        {
// switch_4228_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7296;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x23:
        {
// switch_4228_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7432;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x24:
        {
// switch_4228_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7568;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x25:
        {
// switch_4228_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7704;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x26:
        {
// switch_4228_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7840;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x27:
        {
// switch_4228_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7984;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x28:
        {
// switch_4228_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
        case 0x29:
        {
// switch_4228_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8272;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4228_case_default
        }
    }
}
// fun_4868
fun_4868() {
    pri = arg_5;
    OP_JNZ lab_48A0
    var_8 = 0;
    pri = fun_1480()
// lab_48A0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_48F0
    OP_CONST_S -8, -1
// lab_48F0
    pri = arg_1;
    switch (pri) {
// switch_63A8
        case default:
        {
// switch_63A8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6850
            var_520 = 28280;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0E48(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6850
            pri = 1;
            OP_JUMP lab_6858
// lab_6850
            pri = 0;
// lab_6858
            OP_JZER lab_68A8
            var_8 = 64;
            var_16 = 28376;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_6B00
// lab_68A8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6910
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6910
            pri = 1;
            OP_JUMP lab_6918
// lab_6910
            pri = 0;
// lab_6918
            OP_JZER lab_6AA0
            var_16 = 28552;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E48(var_24, var_16)
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
            var_176 = 28656;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28672;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8536;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6B00
// lab_6AA0
            var_8 = 64;
            alt = 8536;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
// lab_6B00
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6B70
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6B70
            var_8 = 0;
            pri = fun_14C0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_63A8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1:
        {
// switch_63A8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2:
        {
// switch_63A8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x3:
        {
// switch_63A8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x4:
        {
// switch_63A8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x5:
        {
// switch_63A8_case_0x5
            var_8 = 2;
            var_16 = 18536;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11A8(var_40)
            OP_JUMP switch_63A8_case_default
        }
        case 0x6:
        {
// switch_63A8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x7:
        {
// switch_63A8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x8:
        {
// switch_63A8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x9:
        {
// switch_63A8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0xa:
        {
// switch_63A8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0xb:
        {
// switch_63A8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0xc:
        {
// switch_63A8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0xd:
        {
// switch_63A8_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19184;
            var_72 = 19008;
            var_80 = 18824;
            var_88 = 18632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0xe:
        {
// switch_63A8_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19840;
            var_72 = 19632;
            var_80 = 19416;
            var_88 = 19192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0xf:
        {
// switch_63A8_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20232;
            var_72 = 20112;
            var_80 = 19984;
            var_88 = 19848;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x10:
        {
// switch_63A8_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20576;
            var_72 = 20472;
            var_80 = 20360;
            var_88 = 20240;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x11:
        {
// switch_63A8_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20920;
            var_72 = 20816;
            var_80 = 20704;
            var_88 = 20584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x12:
        {
// switch_63A8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x13:
        {
// switch_63A8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x14:
        {
// switch_63A8_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21480;
            var_72 = 21304;
            var_80 = 21120;
            var_88 = 20928;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x15:
        {
// switch_63A8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x16:
        {
// switch_63A8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x17:
        {
// switch_63A8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x18:
        {
// switch_63A8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x19:
        {
// switch_63A8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1a:
        {
// switch_63A8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1b:
        {
// switch_63A8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1c:
        {
// switch_63A8_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21872;
            var_72 = 21752;
            var_80 = 21624;
            var_88 = 21488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1d:
        {
// switch_63A8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1e:
        {
// switch_63A8_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22336;
            var_72 = 22192;
            var_80 = 22040;
            var_88 = 21880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x1f:
        {
// switch_63A8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x20:
        {
// switch_63A8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x21:
        {
// switch_63A8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x22:
        {
// switch_63A8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x23:
        {
// switch_63A8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x24:
        {
// switch_63A8_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22704;
            var_72 = 22592;
            var_80 = 22472;
            var_88 = 22344;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x25:
        {
// switch_63A8_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23072;
            var_72 = 22960;
            var_80 = 22840;
            var_88 = 22712;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x26:
        {
// switch_63A8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x27:
        {
// switch_63A8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x28:
        {
// switch_63A8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x29:
        {
// switch_63A8_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23512;
            var_72 = 23376;
            var_80 = 23232;
            var_88 = 23080;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2a:
        {
// switch_63A8_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23904;
            var_72 = 23784;
            var_80 = 23656;
            var_88 = 23520;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2b:
        {
// switch_63A8_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24320;
            var_72 = 24192;
            var_80 = 24056;
            var_88 = 23912;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2c:
        {
// switch_63A8_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24760;
            var_72 = 24624;
            var_80 = 24480;
            var_88 = 24328;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2d:
        {
// switch_63A8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2e:
        {
// switch_63A8_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25080;
            var_72 = 24984;
            var_80 = 24880;
            var_88 = 24768;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x2f:
        {
// switch_63A8_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25472;
            var_72 = 25352;
            var_80 = 25224;
            var_88 = 25088;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x30:
        {
// switch_63A8_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25864;
            var_72 = 25744;
            var_80 = 25616;
            var_88 = 25480;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x31:
        {
// switch_63A8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x32:
        {
// switch_63A8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x33:
        {
// switch_63A8_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26256;
            var_72 = 26136;
            var_80 = 26008;
            var_88 = 25872;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x34:
        {
// switch_63A8_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26624;
            var_72 = 26512;
            var_80 = 26392;
            var_88 = 26264;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x35:
        {
// switch_63A8_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27112;
            var_72 = 26960;
            var_80 = 26800;
            var_88 = 26632;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x36:
        {
// switch_63A8_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27480;
            var_72 = 27368;
            var_80 = 27248;
            var_88 = 27120;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x37:
        {
// switch_63A8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x38:
        {
// switch_63A8_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27848;
            var_72 = 27736;
            var_80 = 27616;
            var_88 = 27488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_63A8_case_default
        }
        case 0x39:
        {
// switch_63A8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x3a:
        {
// switch_63A8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x3b:
        {
// switch_63A8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x3c:
        {
// switch_63A8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27856;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x3d:
        {
// switch_63A8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 28032;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
        case 0x3e:
        {
// switch_63A8_case_0x3e
            var_8 = 4;
            var_16 = 28176;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            OP_JUMP switch_63A8_case_default
        }
    }
}
// fun_6BA0
fun_6BA0() {
    pri = arg_4;
    OP_JNZ lab_6BD8
    var_8 = 0;
    pri = fun_1480()
// lab_6BD8
    pri = arg_1;
    switch (pri) {
// switch_7FB0
        case default:
        {
// switch_7FB0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29248;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1540(var_264)
            OP_JZER lab_8578
            pri = arg_3;
            switch (pri) {
// switch_8520
                case default:
                {
// switch_8520_case_default
                    OP_JUMP lab_8830
// lab_8830
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_88A0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_88A0
                    var_8 = 0;
                    pri = fun_14C0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8520_case_0x1
                    var_8 = 32;
                    var_16 = 29400;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_8520_case_default
                }
                case 0x2:
                {
// switch_8520_case_0x2
                    var_8 = 32;
                    var_16 = 29504;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_8520_case_default
                }
                case 0x3:
                {
// switch_8520_case_0x3
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_01C0(var_16, var_8, var_0)
                    OP_JUMP switch_8520_case_default
                }
            }
// lab_8578
            pri = arg_1;
            OP_JZER lab_85C8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_85C8
            pri = 0;
            OP_JUMP lab_85D0
// lab_85C8
            pri = 1;
// lab_85D0
            OP_JZER lab_8638
            var_8 = 29600;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0E48(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8638
            pri = 1;
            OP_JUMP lab_8640
// lab_8638
            pri = 0;
// lab_8640
            OP_JZER lab_8690
            var_8 = 32;
            var_16 = 29696;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_8830
// lab_8690
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_86F8
            var_8 = 32;
            var_16 = 29856;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_01C0(var_16, var_8, var_0)
            OP_JUMP lab_8830
// lab_86F8
            var_16 = 29976;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0E48(var_24, var_16)
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
            var_176 = 30080;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 30096;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_7FB0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1:
        {
// switch_7FB0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2:
        {
// switch_7FB0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x3:
        {
// switch_7FB0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x4:
        {
// switch_7FB0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x5:
        {
// switch_7FB0_case_0x5
            var_8 = 1;
            var_16 = 28728;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11A8(var_40)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x6:
        {
// switch_7FB0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x7:
        {
// switch_7FB0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x8:
        {
// switch_7FB0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x9:
        {
// switch_7FB0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0xa:
        {
// switch_7FB0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0xb:
        {
// switch_7FB0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0xc:
        {
// switch_7FB0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0xd:
        {
// switch_7FB0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0xe:
        {
// switch_7FB0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0xf:
        {
// switch_7FB0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x10:
        {
// switch_7FB0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x11:
        {
// switch_7FB0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x12:
        {
// switch_7FB0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x13:
        {
// switch_7FB0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x14:
        {
// switch_7FB0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x15:
        {
// switch_7FB0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x16:
        {
// switch_7FB0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x17:
        {
// switch_7FB0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x18:
        {
// switch_7FB0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x19:
        {
// switch_7FB0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1a:
        {
// switch_7FB0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1b:
        {
// switch_7FB0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1c:
        {
// switch_7FB0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1d:
        {
// switch_7FB0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1e:
        {
// switch_7FB0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x1f:
        {
// switch_7FB0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x20:
        {
// switch_7FB0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x21:
        {
// switch_7FB0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x22:
        {
// switch_7FB0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x23:
        {
// switch_7FB0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x24:
        {
// switch_7FB0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x25:
        {
// switch_7FB0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x26:
        {
// switch_7FB0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x27:
        {
// switch_7FB0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x28:
        {
// switch_7FB0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x29:
        {
// switch_7FB0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2a:
        {
// switch_7FB0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2b:
        {
// switch_7FB0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2c:
        {
// switch_7FB0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2d:
        {
// switch_7FB0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2e:
        {
// switch_7FB0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x2f:
        {
// switch_7FB0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x30:
        {
// switch_7FB0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x31:
        {
// switch_7FB0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x32:
        {
// switch_7FB0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x33:
        {
// switch_7FB0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x34:
        {
// switch_7FB0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x35:
        {
// switch_7FB0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x36:
        {
// switch_7FB0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x37:
        {
// switch_7FB0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x38:
        {
// switch_7FB0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x39:
        {
// switch_7FB0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x3a:
        {
// switch_7FB0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x3b:
        {
// switch_7FB0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x3c:
        {
// switch_7FB0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28824;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x3d:
        {
// switch_7FB0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 29000;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
        case 0x3e:
        {
// switch_7FB0_case_0x3e
            var_8 = 3;
            var_16 = 29144;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0E08(var_24, var_16, var_8)
            OP_JUMP switch_7FB0_case_default
        }
    }
}
// fun_88D0
fun_88D0() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_89D0
        case default:
        {
// switch_89D0_case_default
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
// switch_89D0_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_89D0_case_default
        }
        case 0x1:
        {
// switch_89D0_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_89D0_case_default
        }
        case 0x2:
        {
// switch_89D0_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_89D0_case_default
        }
        case 0x3:
        {
// switch_89D0_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_89D0_case_default
        }
    }
}
// fun_8A90
fun_8A90() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_8AE0
// lab_8AE0
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 30144;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_8B58
    OP_JUMP lab_8B88
// lab_8B58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_8AE0
// lab_8B88
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_8C10
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6BA0(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_15A0(var_56)
// lab_8C10
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_8C78
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1500(var_24, var_16)
// lab_8C78
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1500(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_8D38
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E80(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0C00(var_88, var_80, var_72, var_64, var_56)
// lab_8D38
    pri = IsPlayerRideBicycle()
    OP_JZER lab_8D78
    pri = 0;
    return pri;
// lab_8D78
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8EC0
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 30264;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0DD0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_8E88
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_8EC0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0CA8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0CA8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0E80(var_40)
    pri = 0;
    return pri;
// lab_8E88
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1500(var_16, var_8)
}
// fun_8F48
fun_8F48() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8FE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E80(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2C88(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8FE0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9138
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_90A0
    var_24 = 30400;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_90A0
    pri = 1;
    OP_JUMP lab_90A8
// lab_9138
    pri = 0;
    return pri;
// lab_90A0
    pri = 0;
// lab_90A8
    OP_JZER lab_9138
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E80(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2C88(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9148
fun_9148() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8F48(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_91D0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_91D0
fun_91D0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9368(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9238
fun_9238() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_92A8
    OP_CONST_S -8, 1
// lab_92A8
    pri = arg_0;
    OP_JNZ lab_92C8
    OP_ZERO_P_S -8
// lab_92C8
    pri = var_8;
    OP_JZER lab_9350
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9350
    pri = 0;
    return pri;
}
// fun_9368
fun_9368() {
    var_8 = 30504;
    var_16 = 8;
    pri = fun_2498(var_8)
    var_24 = 0;
    pri = fun_24D0()
    pri = arg_3;
    OP_JNZ lab_9488
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9450
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_94F8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9478
// lab_9488
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9698(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9450
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_95C0(var_16, var_8)
// lab_9478
    OP_JUMP lab_94D0
// lab_94D0
    var_8 = 0;
    pri = fun_2570()
    pri = 0;
    return pri;
}
// fun_94F8
fun_94F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9698(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_95A8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_95A8
    pri = 0;
    return pri;
}
// fun_95C0
fun_95C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_25F0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_20A0(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2198(var_72)
    var_88 = 0;
    pri = fun_2258()
    var_96 = 0;
    var_104 = 8;
    pri = fun_25A0(var_96)
    pri = 0;
    return pri;
}
// fun_9698
fun_9698() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_96E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_99A0(var_8)
// lab_96E0
    pri = arg_4;
    OP_JNZ lab_9748
    var_8 = 0;
    var_16 = 8;
    pri = fun_25A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_25F0(var_40, var_32, var_24)
// lab_9748
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_97E8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2640(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_20A0(var_56, var_48, var_40)
    OP_JUMP lab_98D8
// lab_97E8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_98A0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_98A0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_98A0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_20A0(var_24, var_16, var_8)
// lab_98D8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9918
    var_8 = 0;
    var_16 = 8;
    pri = fun_0768(var_8)
// lab_9918
    var_8 = 1;
    var_16 = 8;
    pri = fun_2198(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9BA8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9238(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_99A0
fun_99A0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9A00
    var_16 = 30664;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9A00
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_9B40
        case default:
        {
// switch_9B40_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_9B30
            var_16 = 31208;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_9B30
            OP_JUMP lab_9B78
// lab_9B78
            var_8 = 31424;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_9B40_case_0x1
            var_8 = 30880;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9B78
        }
        case 0x2:
        {
// switch_9B40_case_0x2
            var_8 = 31008;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_9B78
        }
    }
}
// fun_9BA8
fun_9BA8() {
    pri = arg_2;
    OP_JNZ lab_9C90
    var_8 = 0;
    var_16 = 8;
    pri = fun_25A0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_25F0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2690(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9C90
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_20A0(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2198(var_40)
    var_56 = 0;
    pri = fun_2258()
    pri = 0;
    return pri;
}
// fun_9D08
fun_9D08() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9D40
fun_9D40() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_9EC0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9DD8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0368(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D8()
// lab_9EC0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_9DD8
    pri = arg_0;
    OP_JNZ lab_9E20
    var_8 = 31608;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_9E40
// lab_9E20
    var_8 = 31784;
    pri = SoundPostEvent(var_8)
// lab_9E40
    var_8 = 0;
    var_16 = 8;
    pri = fun_0768(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9EC0
    var_24 = 80;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0308(var_32, var_24)
    var_48 = 0;
    pri = fun_03D8()
}
// fun_9F00
fun_9F00() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_A080(var_16)
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
    pri = fun_0A60(var_80, var_72, var_64, var_56, var_48)
    var_96 = 32104;
    var_104 = 32048;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_15D0(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_A008
fun_A008() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_A080(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1620(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_A080
fun_A080() {
    pri = arg_0;
    OP_JNZ lab_A0C8
    var_8 = 32160;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_A0C8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_A110
    var_8 = 32312;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_A110
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 32464;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_A158
fun_A158() {
    pri = g_mode;
    switch (pri) {
// switch_A290
        case default:
        {
// switch_A290_case_default
            pri = CommandNOP()
            OP_JUMP lab_A308
// lab_A308
            pri = 0;
            return pri;
        }
        case 0x8b4f063a8bfcae8c:
        {
// switch_A290_case_0x8b4f063a8bfcae8c
            var_8 = 0;
            pri = fun_E840()
            OP_JUMP lab_A308
        }
        case 0xec5e6acabb0f4e48:
        {
// switch_A290_case_0xec5e6acabb0f4e48
            var_8 = 0;
            pri = fun_CFA8()
            OP_JUMP lab_A308
        }
        case 0xf378685f9c49063b:
        {
// switch_A290_case_0xf378685f9c49063b
            var_8 = 0;
            pri = fun_C390()
            OP_JUMP lab_A308
        }
        case 0x0:
        {
// switch_A290_case_0x0
            var_8 = 0;
            pri = fun_A318()
            OP_JUMP lab_A308
        }
        case 0x4db1a05335914b8f:
        {
// switch_A290_case_0x4db1a05335914b8f
            var_8 = 0;
            pri = fun_D078()
            OP_JUMP lab_A308
        }
        case 0x783708bdb715ac2c:
        {
// switch_A290_case_0x783708bdb715ac2c
            var_8 = 0;
            pri = fun_E220()
            OP_JUMP lab_A308
        }
    }
}
// fun_A318
fun_A318() {
    pri = 0;
    return pri;
}
// fun_A330
fun_A330() {
    OP_ZERO_P_S -8
    pri = 5;
    OP_LOAD_P_S_ALT 32
    OP_SDIV_ALT 
    var_16 = pri;
    pri = 5;
    OP_LOAD_P_S_ALT 32
    OP_SDIV_ALT 
    OP_MOVE_PRI 
    OP_JZER lab_A3A8
    OP_INC_P_S -16
// lab_A3A8
    OP_CONST_S -24, 1
    OP_CONST_S -32, 30
}
// lab_A3E8
pri = var_24;
OP_JZER lab_A778
pri = arg_1;
alt = 5;
OP_JSLEQ lab_A458
var_8 = 0;
var_16 = -3218321082534370524;
var_24 = 65535;
var_32 = 24;
pri = fun_2288(var_24, var_16, var_8)
// lab_A778
pri = var_32;
return pri;
// lab_A458
OP_ZERO_P_S -40
OP_JUMP lab_A480
// lab_A480
pri = var_40;
alt = 5;
OP_JSGEQ lab_A608
pri = var_40;
var_16 = pri;
pri = var_8;
OP_SMUL_P_C 5
OP_POP_ALT 
OP_ADD 
var_48 = pri;
OP_LOAD_S_BOTH -48, 32
OP_JSLESS lab_A520
OP_JUMP lab_A608
// lab_A608
arg_-3 = 0;
var_8 = -3218322182045998735;
var_16 = 65534;
var_24 = 24;
pri = fun_2288(var_16, var_8, var_0)
var_40 = 0;
var_48 = 1;
var_56 = 0;
var_64 = 1;
var_72 = 32;
pri = fun_2370(var_64, var_56, var_48, var_40)
var_40 = pri;
pri = var_40;
OP_EQ_P_C_PRI 65535
OP_JZER lab_A6F8
OP_INC_P_S -8
OP_LOAD_S_BOTH -8, -16
OP_JSLESS lab_A6E8
OP_ZERO_P_S -8
// lab_A6F8
pri = var_40;
OP_EQ_P_C_PRI 65534
OP_JZER lab_A748
OP_CONST_S -32, 30
OP_ZERO_P_S -24
OP_JUMP lab_A760
// lab_A748
pri = var_40;
var_32 = pri;
OP_ZERO_P_S -24
// lab_A760
OP_JUMP lab_A3E8
// lab_A6E8
OP_JUMP lab_A760
// lab_A520
pri = arg_0;
var_16 = pri;
pri = var_48;
OP_POP_ALT 
OP_IDXADDR_P_B 3
OP_LOAD_I 
var_56 = pri;
var_32 = var_56;
var_40 = 8;
pri = fun_BFE8(var_32)
var_64 = pri;
var_48 = var_64;
var_56 = 0;
var_64 = 16;
pri = fun_26E0(var_56, var_48)
var_72 = 0;
var_80 = -3218323281557626946;
var_88 = var_56;
var_96 = 24;
pri = fun_2288(var_88, var_80, var_72)
OP_JUMP lab_A478
// lab_A478
OP_INC_P_S -40
// fun_A790
fun_A790() {
    OP_ZERO_P_S -8
    OP_ZERO_P_S -16
    OP_JUMP lab_A7D0
// lab_A7D0
    OP_LOAD_S_BOTH -16, 32
    OP_JSGEQ lab_A990
    pri = arg_0;
    var_16 = pri;
    pri = var_16;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_24 = pri;
    pri = var_24;
    OP_EQ_P_C_PRI 30
    OP_JZER lab_A870
    OP_JUMP lab_A7C8
// lab_A990
    pri = var_8;
    OP_ADD_P_C -1
    var_8 = pri;
    var_16 = 0;
    var_24 = 16;
    pri = fun_0160(var_16, var_8)
    var_16 = pri;
    OP_ZERO_P_S -24
    OP_ZERO_P_S -32
    OP_JUMP lab_AA18
// lab_AA18
    OP_LOAD_S_BOTH -32, 32
    OP_JSGEQ lab_AC58
    pri = arg_0;
    var_16 = pri;
    pri = var_32;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_40 = pri;
    pri = var_40;
    OP_EQ_P_C_PRI 30
    OP_JZER lab_AAB8
    OP_JUMP lab_AA10
// lab_AC58
    pri = -1;
    return pri;
// lab_AAB8
    pri = arg_2;
    OP_JZER lab_AB58
    alt = 32472;
    pri = var_40;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 48
    OP_LOAD_I 
    var_48 = pri;
    pri = var_48;
    OP_JNZ lab_AB50
    OP_JUMP lab_AA10
// lab_AB58
    pri = var_24;
    var_8 = pri;
    alt = 32472;
    pri = var_40;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    OP_POP_ALT 
    OP_ADD 
    var_24 = pri;
    OP_LOAD_S_BOTH -24, -16
    OP_JSLEQ lab_AC40
    pri = arg_0;
    var_16 = pri;
    pri = var_32;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    pri = 30;
    OP_STOR_I 
    pri = var_40;
    return pri;
// lab_AC40
    OP_JUMP lab_AA10
// lab_AA10
    OP_INC_P_S -32
// lab_AB50
// lab_A870
    pri = arg_2;
    OP_JZER lab_A910
    alt = 32472;
    pri = var_24;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 48
    OP_LOAD_I 
    var_32 = pri;
    pri = var_32;
    OP_JNZ lab_A908
    OP_JUMP lab_A7C8
// lab_A910
    pri = var_8;
    var_8 = pri;
    alt = 32472;
    pri = var_24;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 16
    OP_LOAD_I 
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    OP_JUMP lab_A7C8
// lab_A7C8
    OP_INC_P_S -16
// lab_A908
}
// fun_AC78
fun_AC78() {
    OP_ZERO_P_S -8
    OP_JUMP lab_ACA8
// lab_ACA8
    pri = var_8;
    alt = 8;
    OP_JSGEQ lab_AD58
    var_8 = 0;
    alt = 39896;
    pri = var_8;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    alt = 39832;
    pri = var_8;
    OP_LIDX_P_B 3
    var_32 = pri;
    pri = WorkSet(var_32, var_24)
    OP_JUMP lab_ACA0
// lab_AD58
    pri = 0;
    OP_ADDR_ALT -240
    OP_FILL 240
    OP_ZERO_P_S -248
    OP_ZERO_P_S -256
    OP_JUMP lab_ADC8
// lab_ADC8
    pri = var_256;
    alt = 30;
    OP_JSGEQ lab_B038
    OP_LOAD_S_BOTH 24, -256
    OP_JNEQ lab_AE20
    OP_JUMP lab_ADC0
// lab_B038
    OP_CONST_S -256, 1
    OP_CONST_S -264, 8
    pri = var_256;
    var_272 = pri;
    OP_JUMP lab_B0B0
// lab_B0B0
    OP_LOAD_S_BOTH -272, -264
    OP_JSGEQ lab_B208
    OP_CONST_S -280, -1
    pri = var_272;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_B150
    var_16 = 1;
    var_24 = var_248;
    OP_PUSH_P_ADR -240
    var_32 = 24;
    pri = fun_A790(var_24, var_16, var_8)
    var_280 = pri;
// lab_B208
    pri = arg_0;
    alt = 30;
    OP_JEQ lab_B2B0
    var_8 = 7;
    var_16 = 1;
    var_24 = 16;
    pri = fun_0160(var_16, var_8)
    var_272 = pri;
    var_32 = arg_0;
    alt = 39832;
    pri = var_272;
    OP_LIDX_P_B 3
    var_40 = pri;
    pri = WorkSet(var_40, var_32)
// lab_B2B0
    var_16 = 0;
    pri = fun_E4B0()
    var_272 = pri;
    var_24 = var_272;
    var_32 = -2455067618129037233;
    pri = WorkSet(var_32, var_24)
    pri = 0;
    return pri;
// lab_B150
    pri = var_280;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_B1A8
    var_8 = 0;
    var_16 = var_248;
    OP_PUSH_P_ADR -240
    var_24 = 24;
    pri = fun_A790(var_16, var_8, var_0)
    var_280 = pri;
// lab_B1A8
    var_8 = var_280;
    alt = 39832;
    pri = var_256;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkSet(var_16, var_8)
    OP_INC_P_S -256
    OP_JUMP lab_B0A8
// lab_B0A8
    OP_INC_P_S -272
// lab_AE20
    alt = 32472;
    pri = var_256;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_264 = pri;
    alt = 32472;
    pri = var_256;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_272 = pri;
    pri = var_272;
    OP_JZER lab_AF20
    pri = RomGetVersion()
    OP_MOVE_ALT 
    pri = var_272;
    OP_JEQ lab_AF20
    pri = 0;
    OP_JUMP lab_AF28
// lab_AF20
    pri = 1;
// lab_AF28
    OP_JZER lab_AFD0
    pri = var_264;
    OP_EQ_P_C_PRI 31
    OP_JNZ lab_AFA0
    var_8 = var_264;
    var_16 = 8;
    pri = fun_2C58(var_8)
    OP_JNZ lab_AFA0
    pri = 0;
    OP_JUMP lab_AFA8
// lab_AFD0
    pri = 0;
// lab_AFA0
    pri = 1;
// lab_AFA8
    OP_JZER lab_AFD0
    pri = 1;
    OP_JUMP lab_AFD8
// lab_AFD8
    OP_JZER lab_B020
    OP_ADDR_P_ALT -240
    pri = var_248;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    pri = var_256;
    OP_STOR_I 
    OP_INC_P_S -248
// lab_B020
    OP_JUMP lab_ADC0
// lab_ADC0
    OP_INC_P_S -256
// lab_ACA0
    OP_INC_P_S -8
}
// fun_B320
fun_B320() {
    var_16 = 0;
    pri = fun_BE10()
    var_8 = pri;
    alt = 32472;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 48
    OP_LOAD_I 
    var_16 = pri;
    var_40 = var_16;
    var_48 = 39960;
    alt = 35112;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_56 = pri;
    var_64 = 24;
    pri = fun_0A20(var_56, var_48, var_40)
    var_24 = pri;
    var_72 = 0;
    pri = fun_0878()
    var_80 = 1;
    var_88 = 1;
    var_96 = 270;
    pri = float(var_96)
    var_104 = pri;
    var_112 = 20050;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 20580;
    pri = float(var_128)
    var_136 = pri;
    var_144 = var_24;
    var_152 = 48;
    pri = fun_0AB0(var_144, var_136, var_128, var_120, var_112, var_104)
    pri = 0;
    return pri;
}
// fun_B4E8
fun_B4E8() {
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_1;
    pri = CalcTypeAffinity(var_32, var_24, var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_B5E0
        case default:
        {
// switch_B5E0_case_default
            pri = arg_0;
            return pri;
        }
        case 0x0:
        {
// switch_B5E0_case_0x0
            pri = 4;
            OP_LOAD_P_S_ALT 24
            OP_SDIV_ALT 
            arg_0 = pri;
            OP_JUMP switch_B5E0_case_default
        }
        case 0x1:
        {
// switch_B5E0_case_0x1
            OP_JUMP switch_B5E0_case_default
        }
        case 0x2:
        {
// switch_B5E0_case_0x2
            pri = arg_0;
            OP_SMUL_P_C 2
            arg_0 = pri;
            OP_JUMP switch_B5E0_case_default
        }
        case 0x3:
        {
// switch_B5E0_case_0x3
            pri = 2;
            OP_LOAD_P_S_ALT 24
            OP_SDIV_ALT 
            arg_0 = pri;
            OP_JUMP switch_B5E0_case_default
        }
    }
}
// fun_B650
fun_B650() {
    alt = 39832;
    pri = arg_0;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkGet(var_16)
    var_8 = pri;
    alt = 39832;
    pri = arg_1;
    OP_LIDX_P_B 3
    var_32 = pri;
    pri = WorkGet(var_32)
    var_16 = pri;
    alt = 32472;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_24 = pri;
    alt = 32472;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 8
    OP_LOAD_I 
    var_32 = pri;
    alt = 32472;
    pri = var_8;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 56
    OP_LOAD_I 
    var_40 = pri;
    alt = 32472;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 56
    OP_LOAD_I 
    var_48 = pri;
    pri = var_40;
    alt = 65535;
    OP_JEQ lab_B880
    pri = var_48;
    alt = 65535;
    OP_JEQ lab_B880
    pri = 1;
    OP_JUMP lab_B888
// lab_B880
    pri = 0;
// lab_B888
    OP_JZER lab_B908
    var_8 = var_48;
    var_16 = var_40;
    var_24 = var_24;
    var_32 = 24;
    pri = fun_B4E8(var_24, var_16, var_8)
    var_24 = pri;
    var_40 = var_40;
    var_48 = var_48;
    var_56 = var_32;
    var_64 = 24;
    pri = fun_B4E8(var_56, var_48, var_40)
    var_32 = pri;
// lab_B908
    OP_LOAD_S_BOTH -24, -32
    OP_JSLEQ lab_B980
    var_8 = 1;
    alt = 39896;
    pri = arg_0;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkAdd(var_16, var_8)
    OP_JUMP lab_BAC0
// lab_B980
    OP_LOAD_S_BOTH -32, -24
    OP_JSLEQ lab_B9F8
    var_8 = 1;
    alt = 39896;
    pri = arg_1;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkAdd(var_16, var_8)
    OP_JUMP lab_BAC0
// lab_B9F8
    var_8 = 1;
    var_16 = 0;
    var_24 = 16;
    pri = fun_0160(var_16, var_8)
    OP_JNZ lab_BA80
    var_32 = 1;
    alt = 39896;
    pri = arg_0;
    OP_LIDX_P_B 3
    var_40 = pri;
    pri = WorkAdd(var_40, var_32)
    OP_JUMP lab_BAC0
// lab_BA80
    var_8 = 1;
    alt = 39896;
    pri = arg_1;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkAdd(var_16, var_8)
// lab_BAC0
    pri = 0;
    return pri;
}
// fun_BAD8
fun_BAD8() {
    alt = 39896;
    pri = arg_0;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkGet(var_16)
    var_8 = pri;
    alt = 39896;
    pri = arg_1;
    OP_LIDX_P_B 3
    var_32 = pri;
    pri = WorkGet(var_32)
    var_16 = pri;
    pri = arg_0;
    var_24 = pri;
    OP_LOAD_S_BOTH -16, -8
    OP_JSLEQ lab_BBC0
    pri = arg_1;
    var_24 = pri;
// lab_BBC0
    pri = var_24;
    return pri;
}
// fun_BBD8
fun_BBD8() {
    pri = 0;
    OP_ADDR_ALT -64
    OP_FILL 64
    pri = 0;
    OP_ADDR_ALT -128
    OP_FILL 64
    OP_ZERO_P_S -136
    OP_JUMP lab_BC68
// lab_BC68
    pri = var_136;
    alt = 8;
    OP_JSGEQ lab_BDB8
    alt = 39832;
    pri = var_136;
    OP_LIDX_P_B 3
    var_16 = pri;
    pri = WorkGet(var_16)
    var_144 = pri;
    var_32 = var_144;
    var_40 = 8;
    pri = fun_BFE8(var_32)
    var_152 = pri;
    OP_ADDR_P_ALT -64
    pri = var_136;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    pri = var_152;
    OP_STOR_I 
    OP_ADDR_P_ALT -128
    pri = var_136;
    OP_IDXADDR_P_B 3
    var_48 = pri;
    alt = 32472;
    pri = var_144;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 24
    OP_LOAD_I 
    OP_POP_ALT 
    OP_STOR_I 
    OP_JUMP lab_BC60
// lab_BDB8
    OP_PUSH_P_ADR -128
    OP_PUSH_P_ADR -64
    arg_-3 = arg_0;
    var_8 = 1;
    pri = CallTournament(var_8, var_0, var_-8, var_-16)
    pri = 0;
    return pri;
// lab_BC60
    OP_INC_P_S -136
}
// fun_BE10
fun_BE10() {
    OP_CONST_S -8, 1
    pri = 39896;
    OP_LOAD_I 
    var_24 = pri;
    pri = WorkGet(var_24)
    var_16 = pri;
    pri = var_16;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_BED8
    var_32 = 3;
    var_40 = 2;
    var_48 = 16;
    pri = fun_BAD8(var_40, var_32)
    var_8 = pri;
    OP_JUMP lab_BFA0
// lab_BED8
    pri = var_16;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_BFA0
    var_16 = 5;
    var_24 = 4;
    var_32 = 16;
    pri = fun_BAD8(var_24, var_16)
    var_24 = pri;
    var_48 = 7;
    var_56 = 6;
    var_64 = 16;
    pri = fun_BAD8(var_56, var_48)
    var_32 = pri;
    var_72 = var_32;
    var_80 = var_24;
    var_88 = 16;
    pri = fun_BAD8(var_80, var_72)
    var_8 = pri;
// lab_BFA0
    alt = 39832;
    pri = var_8;
    OP_LIDX_P_B 3
    var_8 = pri;
    pri = WorkGet(var_8)
    return pri;
}
// fun_BFE8
fun_BFE8() {
    alt = 32472;
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 32
    OP_LOAD_I 
    var_8 = pri;
    pri = var_8;
    OP_EQ_P_C_PRI 249
    OP_JZER lab_C158
    var_16 = 0;
    pri = fun_9D08()
    switch (pri) {
// switch_C100
        case default:
        {
// switch_C100_case_default
            OP_JUMP switch_C330_case_default
// switch_C330_case_default
            pri = var_8;
            return pri;
        }
        case 0x0:
        {
// switch_C100_case_0x0
            pri = 249;
            return pri;
            OP_JUMP switch_C100_case_default
        }
        case 0x1:
        {
// switch_C100_case_0x1
            pri = 250;
            return pri;
            OP_JUMP switch_C100_case_default
        }
        case 0x2:
        {
// switch_C100_case_0x2
            pri = 251;
            return pri;
            OP_JUMP switch_C100_case_default
        }
    }
// lab_C158
    pri = var_8;
    OP_EQ_P_C_PRI 252
    OP_JZER lab_C270
    var_8 = 0;
    pri = fun_9D08()
    switch (pri) {
// switch_C218
        case default:
        {
// switch_C218_case_default
            OP_JUMP switch_C330_case_default
        }
        case 0x0:
        {
// switch_C218_case_0x0
            pri = 252;
            return pri;
            OP_JUMP switch_C218_case_default
        }
        case 0x1:
        {
// switch_C218_case_0x1
            pri = 254;
            return pri;
            OP_JUMP switch_C218_case_default
        }
        case 0x2:
        {
// switch_C218_case_0x2
            pri = 256;
            return pri;
            OP_JUMP switch_C218_case_default
        }
    }
// lab_C270
    pri = var_8;
    OP_EQ_P_C_PRI 253
    OP_JZER switch_C330_case_default
    var_8 = 0;
    pri = fun_9D08()
    switch (pri) {
// switch_C330
        case default:
        {
// switch_C330_case_default
            pri = var_8;
            return pri;
        }
        case 0x0:
        {
// switch_C330_case_0x0
            pri = 253;
            return pri;
            OP_JUMP switch_C330_case_default
        }
        case 0x1:
        {
// switch_C330_case_0x1
            pri = 255;
            return pri;
            OP_JUMP switch_C330_case_default
        }
        case 0x2:
        {
// switch_C330_case_0x2
            pri = 257;
            return pri;
            OP_JUMP switch_C330_case_default
        }
    }
}
// fun_C390
fun_C390() {
    pri = GetTargetFieldObjectID()
    var_8 = pri;
    var_16 = 1;
    var_24 = 1;
    var_32 = 0;
    var_40 = 1;
    var_48 = 1;
    var_56 = var_8;
    var_64 = 48;
    pri = fun_88D0(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 6976814257971350117;
    pri = FlagGet(var_72)
    OP_JNZ lab_C4D0
    var_80 = 0;
    var_88 = 3;
    var_96 = 0;
    var_104 = 100;
    var_112 = -1;
    var_120 = 3177398828135376019;
    var_128 = var_8;
    var_136 = 56;
    pri = fun_1ED8(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 6976814257971350117;
    pri = FlagSet(var_144)
    OP_JUMP lab_C528
// lab_C4D0
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3177399927647004230;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_C528
    var_8 = 1;
    var_16 = 8;
    pri = fun_2198(var_8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 48;
    pri = fun_23E0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_16 = pri;
    var_88 = 0;
    pri = fun_2258()
    pri = var_16;
    OP_JZER lab_CEC8
    OP_ZERO_P_S -24
    OP_CONST_S -32, 30
    pri = 0;
    OP_ADDR_ALT -272
    OP_FILL 240
    OP_ZERO_P_S -280
    OP_ZERO_P_S -288
    OP_ZERO_P_S -296
    OP_JUMP lab_C678
// lab_CEC8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3177401027158632441;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2198(var_72)
    var_88 = 0;
    pri = fun_2258()
    var_96 = 0;
    var_104 = 0;
    var_112 = 0;
    var_120 = var_8;
    var_128 = 32;
    pri = fun_8A90(var_120, var_112, var_104, var_96)
// lab_C678
    pri = var_296;
    alt = 30;
    OP_JSGEQ lab_C898
    alt = 32472;
    pri = var_296;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 40
    OP_LOAD_I 
    var_304 = pri;
    alt = 32472;
    pri = var_296;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_LOAD_I 
    var_312 = pri;
    pri = var_304;
    OP_JZER lab_C798
    pri = RomGetVersion()
    OP_MOVE_ALT 
    pri = var_304;
    OP_JEQ lab_C798
    pri = 0;
    OP_JUMP lab_C7A0
// lab_C898
    pri = var_288;
    OP_JZER lab_CC28
    arg_-3 = 0;
    var_8 = 3;
    var_16 = 0;
    var_24 = 100;
    var_32 = -1;
    var_40 = 3177402126670260652;
    var_48 = var_8;
    var_56 = 56;
    pri = fun_1ED8(var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    var_64 = 1;
    var_72 = 8;
    pri = fun_2198(var_64)
    var_88 = 0;
    var_96 = 0;
    var_104 = 1;
    OP_PUSH2_C -3218319983022742313, -3218318883511114102
    var_112 = 1;
    var_120 = 48;
    pri = fun_23E0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_296 = pri;
    pri = var_296;
    OP_JZER lab_CC20
    OP_CONST_S -304, 1
// lab_CC28
    pri = var_24;
    OP_JZER lab_CCA8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3177406524716773496;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_CD00
// lab_CCA8
    var_8 = 0;
    var_16 = 3;
    var_24 = 0;
    var_32 = 100;
    var_40 = -1;
    var_48 = 3177405425205145285;
    var_56 = var_8;
    var_64 = 56;
    pri = fun_1ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_CD00
    var_8 = 1;
    var_16 = 8;
    pri = fun_2198(var_8)
    var_24 = 0;
    pri = fun_2258()
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = var_8;
    var_64 = 32;
    pri = fun_8A90(var_56, var_48, var_40, var_32)
    var_72 = var_32;
    var_80 = 8;
    pri = fun_AC78(var_72)
    var_88 = 1;
    var_96 = 0;
    var_104 = 32;
    var_112 = 8;
    var_120 = 32;
    pri = fun_0368(var_112, var_104, var_96, var_88)
    var_128 = 0;
    pri = fun_03D8()
    var_136 = 1;
    pri = SetPlayerUniform(var_136)
    var_144 = 0;
    var_152 = 0;
    var_160 = 1;
    var_168 = 0;
    var_176 = 0;
    var_184 = 26381;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 19995;
    pri = float(var_200)
    var_208 = pri;
    OP_PUSH3_C 9116614320094512028, -3307772254259144861, -1414575813993476536
    var_216 = 80;
    pri = fun_0678(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    OP_JUMP lab_CF90
// lab_CF90
    pri = 0;
    return pri;
// lab_CC20
// lab_C798
    pri = 1;
// lab_C7A0
    OP_JZER lab_C7E8
    pri = var_312;
    alt = 31;
    OP_JEQ lab_C7E8
    pri = 1;
    OP_JUMP lab_C7F0
// lab_C7E8
    pri = 0;
// lab_C7F0
    OP_JZER lab_C880
    var_8 = var_312;
    var_16 = 8;
    pri = fun_2C58(var_8)
    OP_JZER lab_C880
    OP_CONST_S -288, 1
    OP_ADDR_P_ALT -272
    pri = var_280;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    pri = var_296;
    OP_STOR_I 
    OP_INC_P_S -280
// lab_C880
    OP_JUMP lab_C670
// lab_C670
    OP_INC_P_S -296
}
// lab_C9C8
pri = var_304;
OP_JZER lab_CC18
OP_ZERO_P_S -304
var_8 = 0;
var_16 = 3;
var_24 = 0;
var_32 = 100;
var_40 = -1;
var_48 = 3177403226181888863;
var_56 = var_8;
var_64 = 56;
pri = fun_1ED8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
var_72 = 1;
var_80 = 8;
pri = fun_2198(var_72)
var_88 = var_280;
OP_PUSH_P_ADR -272
var_96 = 16;
pri = fun_A330(var_88, var_80)
var_32 = pri;
pri = var_32;
alt = 30;
OP_JEQ lab_CC08
var_112 = var_32;
var_120 = 8;
pri = fun_BFE8(var_112)
var_312 = pri;
var_128 = var_312;
var_136 = 0;
var_144 = 16;
pri = fun_26E0(var_136, var_128)
var_152 = 0;
var_160 = 3;
var_168 = 0;
var_176 = 100;
var_184 = -1;
var_192 = 3177404325693517074;
var_200 = var_8;
var_208 = 56;
pri = fun_1ED8(var_200, var_192, var_184, var_176, var_168, var_160, var_152)
var_216 = 1;
var_224 = 8;
pri = fun_2198(var_216)
var_232 = 0;
var_240 = 0;
var_248 = 1;
var_256 = 0;
var_264 = 0;
var_272 = 0;
var_280 = 48;
pri = fun_23E0(var_272, var_264, var_256, var_248, var_240, var_232)
var_24 = pri;
pri = var_24;
OP_JNZ lab_CC00
OP_CONST_S -304, 1
// lab_CC18
// lab_CC08
OP_JUMP lab_C9C8
// lab_CC00
// fun_CFA8
fun_CFA8() {
    var_8 = 1;
    var_16 = 180;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0B08(var_32, var_24, var_16)
    var_48 = 80;
    var_56 = 8;
    var_64 = 16;
    pri = fun_0308(var_56, var_48)
    var_72 = 0;
    pri = fun_03D8()
    var_80 = 0;
    var_88 = 8;
    pri = fun_BBD8(var_80)
    pri = 0;
    return pri;
}
// fun_D078
fun_D078() {
    pri = EvCameraStart()
    var_16 = 844030868786481832;
    pri = GetFieldObjectPositionX_(var_16)
    var_8 = pri;
    var_32 = 844030868786481832;
    pri = GetFieldObjectPositionZ_(var_32)
    var_16 = pri;
    var_48 = 844030868786481832;
    pri = GetFieldObjectAngle_(var_48)
    var_24 = pri;
    var_56 = 1;
    var_64 = 1;
    var_72 = 90;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 4259;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 2500;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 844030868786481832;
    var_128 = 48;
    pri = fun_0AB0(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 1;
    var_152 = 180;
    pri = float(var_152)
    var_160 = pri;
    var_168 = 4350;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 3438;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 8802641224559852288;
    var_208 = 48;
    pri = fun_0AB0(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 80;
    var_224 = 8;
    var_232 = 16;
    pri = fun_0308(var_224, var_216)
    var_240 = 0;
    pri = fun_03D8()
    OP_CONST_S -32, -1983266781276115916
    var_256 = 1;
    var_264 = 1;
    var_272 = 0;
    var_280 = 1;
    var_288 = 1;
    var_296 = var_32;
    var_304 = 48;
    pri = fun_88D0(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 100;
    var_344 = -1;
    var_352 = 3177407624228401707;
    var_360 = var_32;
    var_368 = 56;
    pri = fun_1ED8(var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_376 = 1;
    var_384 = 8;
    pri = fun_2198(var_376)
    var_392 = 0;
    pri = fun_2258()
    var_400 = 0;
    var_408 = 0;
    var_416 = 0;
    var_424 = var_32;
    var_432 = 32;
    pri = fun_8A90(var_424, var_416, var_408, var_400)
    var_440 = 1;
    var_448 = 0;
    var_456 = 4641240890982006784;
    var_464 = 0;
    var_472 = 0;
    var_480 = 4259;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 3230;
    pri = float(var_496)
    var_504 = pri;
    OP_PUSH2_C 4611686018427387904, 844030868786481832
    var_512 = 72;
    pri = fun_0B88(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440)
    var_520 = 844030868786481832;
    var_528 = 8;
    pri = fun_0CA8(var_520)
    var_536 = 410559796897662721;
    pri = FlagGet(var_536)
    OP_JNZ lab_D5B0
    OP_PUSH2_C 4608983858650965606, 4631952216750555136
    var_544 = 3;
    OP_PUSH5_C 4661331728195660022, 4636828770722067251, 4659506417947272806, 4661697480738639708, 4640518203979302175
    var_552 = 4660003924968608891;
    var_560 = 30;
    pri = EvCameraMove(var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    OP_JUMP lab_D630
// lab_D5B0
    OP_PUSH2_C 4608983858650965606, 4631952216750555136
    var_8 = 3;
    OP_PUSH5_C 4661331728195660022, 4636828770722067251, 4659506417947272806, 4662068247054642053, 4643255372205952860
    var_16 = 4660508007069479076;
    var_24 = 15;
    pri = EvCameraMove(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40, var_-48)
// lab_D630
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    OP_PUSH2_C 844030868786481832, 8802641224559852288
    var_40 = 48;
    pri = fun_0C50(var_32, var_24, var_16, var_8, var_0, var_-8)
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    OP_PUSH2_C 8802641224559852288, 844030868786481832
    var_80 = 48;
    pri = fun_0C50(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0CA8(var_88)
    var_104 = 844030868786481832;
    var_112 = 8;
    pri = fun_0CA8(var_104)
    var_120 = 0;
    pri = fun_29E8()
    var_128 = 1;
    var_136 = 1;
    var_144 = -1;
    var_152 = -1;
    var_160 = 0;
    var_168 = 49;
    var_176 = 844030868786481832;
    var_184 = 56;
    pri = fun_4868(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    var_192 = 0;
    var_200 = 3;
    var_208 = 0;
    var_216 = 100;
    var_224 = -1;
    OP_PUSH2_C 4486295413514741608, 844030868786481832
    var_232 = 56;
    pri = fun_1ED8(var_224, var_216, var_208, var_200, var_192, var_184, var_176)
    var_240 = 1;
    var_248 = 8;
    pri = fun_2198(var_240)
    var_256 = 0;
    pri = fun_2258()
    var_264 = 40064;
    var_272 = 844030868786481832;
    var_280 = 16;
    pri = fun_1080(var_272, var_264)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C 4486298712049626241, 844030868786481832
    var_328 = 56;
    pri = fun_1ED8(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_2198(var_336)
    var_352 = 0;
    pri = fun_2258()
    var_360 = 1;
    var_368 = 3;
    var_376 = 0;
    var_384 = 49;
    var_392 = 844030868786481832;
    var_400 = 40;
    pri = fun_6BA0(var_392, var_384, var_376, var_368, var_360)
    var_408 = 844030868786481832;
    var_416 = 8;
    pri = fun_0E80(var_408)
    var_424 = 410559796897662721;
    pri = FlagGet(var_424)
    OP_JZER lab_DE98
    var_440 = -2455067618129037233;
    pri = WorkGet(var_440)
    var_40 = pri;
    pri = 38872;
    var_456 = pri;
    pri = var_40;
    OP_SMUL_P_C 4
    OP_ADD_P_C 1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_48 = pri;
    pri = var_48;
    OP_EQ_P_C_PRI 12
    OP_JZER lab_DA98
    var_464 = 1;
    var_472 = 1;
    var_480 = -1;
    var_488 = -1;
    var_496 = 0;
    var_504 = 10;
    var_512 = 844030868786481832;
    var_520 = 56;
    pri = fun_4868(var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    OP_JUMP lab_DAF0
// lab_DE98
    var_8 = 6;
    var_16 = 4;
    var_24 = 2;
    var_32 = 0;
    var_40 = 9;
    var_48 = 1;
    var_56 = 1252;
    var_64 = 844030868786481832;
    var_72 = 64;
    pri = fun_9148(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_80 = 410559796897662721;
    pri = FlagSet(var_80)
// lab_DA98
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = var_48;
    var_56 = 844030868786481832;
    var_64 = 56;
    pri = fun_4868(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
// lab_DAF0
    var_8 = 10;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = var_48;
    OP_EQ_P_C_PRI 12
    OP_JZER lab_DCA0
    OP_PUSH2_C 4608983858650965606, 4631952216750555136
    var_24 = 3;
    OP_PUSH5_C 4661331728195660022, 4636828770722067251, 4659506417947272806, 4661697480738639708, 4640518203979302175
    var_32 = 4660003924968608891;
    var_40 = 270;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 160;
    var_56 = 8;
    pri = fun_0060(var_48)
    var_64 = 1;
    var_72 = 3;
    var_80 = 0;
    var_88 = 10;
    var_96 = 844030868786481832;
    var_104 = 40;
    pri = fun_6BA0(var_96, var_88, var_80, var_72, var_64)
    var_112 = 50;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 1;
    var_136 = 1;
    var_144 = -1;
    var_152 = -1;
    var_160 = 0;
    var_168 = var_48;
    var_176 = 844030868786481832;
    var_184 = 56;
    pri = fun_4868(var_176, var_168, var_160, var_152, var_144, var_136, var_128)
    OP_JUMP lab_DD20
// lab_DCA0
    OP_PUSH2_C 4608983858650965606, 4631952216750555136
    var_8 = 3;
    OP_PUSH5_C 4661331728195660022, 4636828770722067251, 4659506417947272806, 4661697480738639708, 4640518203979302175
    var_16 = 4660003924968608891;
    var_24 = 240;
    pri = EvCameraMove(var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32, var_-40, var_-48)
// lab_DD20
    var_8 = 0;
    pri = fun_29E8()
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = var_48;
    var_48 = 844030868786481832;
    var_56 = 40;
    pri = fun_6BA0(var_48, var_40, var_32, var_24, var_16)
    pri = 38872;
    var_72 = pri;
    pri = var_40;
    OP_SMUL_P_C 4
    OP_ADD_P_C 2
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_56 = pri;
    pri = 38872;
    var_88 = pri;
    pri = var_40;
    OP_SMUL_P_C 4
    OP_ADD_P_C 3
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_64 = pri;
    var_96 = 6;
    var_104 = 4;
    var_112 = 2;
    var_120 = 0;
    var_128 = 9;
    var_136 = var_64;
    var_144 = var_56;
    var_152 = 844030868786481832;
    var_160 = 64;
    pri = fun_9148(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    OP_JUMP lab_DF20
// lab_DF20
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 4259;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 2250;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4611686018427387904, 844030868786481832
    var_80 = 72;
    pri = fun_0B88(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 844030868786481832;
    var_96 = 8;
    pri = fun_0CA8(var_88)
    var_104 = 1;
    var_112 = 1;
    var_120 = var_24;
    var_128 = var_16;
    var_136 = var_8;
    var_144 = 844030868786481832;
    var_152 = 48;
    pri = fun_0AB0(var_144, var_136, var_128, var_120, var_112, var_104)
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 0;
    var_192 = var_32;
    var_200 = 8802641224559852288;
    var_208 = 48;
    pri = fun_0C50(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 1;
    var_224 = 1;
    var_232 = -1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 1;
    var_264 = var_32;
    var_272 = 56;
    pri = fun_4868(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 0;
    var_288 = 3;
    var_296 = 0;
    var_304 = 100;
    var_312 = -1;
    var_320 = 3178389488112204905;
    var_328 = var_32;
    var_336 = 56;
    pri = fun_1ED8(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 1;
    var_352 = 8;
    pri = fun_2198(var_344)
    var_360 = 0;
    pri = fun_2258()
    var_368 = 1;
    var_376 = 3;
    var_384 = 0;
    var_392 = 1;
    var_400 = var_32;
    var_408 = 40;
    pri = fun_6BA0(var_400, var_392, var_384, var_376, var_368)
    var_416 = 3;
    var_424 = 20;
    pri = EvCameraEnd(var_424, var_416)
    var_432 = 8802641224559852288;
    var_440 = 8;
    pri = fun_0CA8(var_432)
    pri = 0;
    return pri;
}
// fun_E220
fun_E220() {
    OP_CONST_S -8, -1983266781276115916
    var_16 = 1;
    var_24 = 1;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 4180;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 3440;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 8802641224559852288;
    var_88 = 48;
    pri = fun_0AB0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 40;
    var_104 = 8;
    pri = fun_0060(var_96)
    var_112 = 80;
    var_120 = 8;
    var_128 = 16;
    pri = fun_0308(var_120, var_112)
    var_136 = 0;
    pri = fun_03D8()
    var_144 = 1;
    var_152 = 1;
    var_160 = 0;
    var_168 = 1;
    var_176 = 1;
    var_184 = var_8;
    var_192 = 48;
    pri = fun_88D0(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 0;
    var_208 = 3;
    var_216 = 0;
    var_224 = 100;
    var_232 = -1;
    var_240 = 3178388388600576694;
    var_248 = var_8;
    var_256 = 56;
    pri = fun_1ED8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_2198(var_264)
    var_280 = 0;
    pri = fun_2258()
    var_288 = 0;
    var_296 = 0;
    var_304 = 0;
    var_312 = var_8;
    var_320 = 32;
    pri = fun_8A90(var_312, var_304, var_296, var_288)
    pri = 0;
    return pri;
}
// fun_E480
fun_E480() {
    var_8 = 40216;
    pri = GetFnvHash64(var_8)
    return pri;
}
// fun_E4B0
fun_E4B0() {
    var_16 = 99;
    var_24 = 0;
    var_32 = 16;
    pri = fun_0160(var_24, var_16)
    var_8 = pri;
    OP_CONST_S -16, 4
    OP_ZERO_P_S -24
    OP_CONST_S -32, 4
    pri = CommandNOP()
    OP_ZERO_P_S -40
    OP_JUMP lab_E580
// lab_E580
    OP_LOAD_S_BOTH -40, -16
    OP_JSGEQ lab_E640
    pri = var_24;
    var_8 = pri;
    alt = 38840;
    pri = var_40;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_ADD 
    var_24 = pri;
    OP_LOAD_S_BOTH -24, -8
    OP_JSLEQ lab_E630
    pri = var_40;
    var_32 = pri;
    OP_JUMP lab_E640
// lab_E640
    pri = 0;
    OP_ADDR_ALT -272
    OP_FILL 240
    OP_ZERO_P_S -280
    OP_ZERO_P_S -288
    OP_JUMP lab_E6B0
// lab_E6B0
    pri = var_288;
    alt = 30;
    OP_JSGEQ lab_E7B0
    pri = 38872;
    var_16 = pri;
    pri = var_288;
    OP_SMUL_P_C 4
    OP_ZERO_ALT 
    OP_ADD 
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_296 = pri;
    OP_LOAD_S_BOTH -32, -296
    OP_JNEQ lab_E798
    OP_ADDR_P_ALT -272
    pri = var_280;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    pri = var_288;
    OP_STOR_I 
    pri = var_280;
    OP_ADD_P_C 1
    var_280 = pri;
// lab_E7B0
    OP_ADDR_P_PRI -272
    var_8 = pri;
    pri = var_280;
    OP_ADD_P_C -1
    var_16 = pri;
    var_24 = 0;
    var_32 = 16;
    pri = fun_0160(var_24, var_16)
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    var_288 = pri;
    pri = var_288;
    return pri;
// lab_E798
    OP_JUMP lab_E6A8
// lab_E6A8
    OP_INC_P_S -288
// lab_E630
    OP_JUMP lab_E578
// lab_E578
    OP_INC_P_S -40
}
// fun_E840
fun_E840() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0368(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_03D8()
    var_56 = 0;
    pri = fun_B320()
    var_64 = 5;
    var_72 = 8;
    pri = fun_0060(var_64)
    var_88 = 0;
    pri = fun_E480()
    var_8 = pri;
    var_96 = 1;
    var_104 = 3458049540832089695;
    var_112 = 16;
    pri = fun_0B48(var_104, var_96)
    var_120 = 1;
    var_128 = 3458048441320461484;
    var_136 = 16;
    pri = fun_0B48(var_128, var_120)
    var_144 = 0;
    var_152 = 8802641224559852288;
    var_160 = 16;
    pri = fun_9F00(var_152, var_144)
    var_168 = 1;
    var_176 = var_8;
    var_184 = 16;
    pri = fun_9F00(var_176, var_168)
    var_200 = 0;
    pri = fun_BE10()
    var_16 = pri;
    var_216 = var_16;
    var_224 = 8;
    pri = fun_BFE8(var_216)
    var_24 = pri;
    pri = 39896;
    OP_LOAD_I 
    var_240 = pri;
    pri = WorkGet(var_240)
    var_32 = pri;
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_264 = 48;
    pri = fun_0AB0(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    var_288 = 0;
    OP_PUSH2_C 4671158052617977856, 4671268003780755456
    var_296 = var_8;
    var_304 = 48;
    pri = fun_0AB0(var_296, var_288, var_280, var_272, var_264, var_256)
    var_312 = 0;
    var_320 = 4626857519672092262;
    var_328 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_336 = 4671083459000370463;
    var_344 = 1;
    pri = EvCameraMove(var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_352 = 0;
    pri = fun_29E8()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_360 = 16;
    pri = fun_2A78(var_352, var_344)
    var_368 = 0;
    var_376 = 1;
    var_384 = 700;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 4611686018427387904;
    var_408 = 32;
    pri = fun_2AE0(var_400, var_392, var_384, var_376)
    var_416 = 0;
    var_424 = 4626857519672092262;
    var_432 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_440 = 4671072741510778716;
    var_448 = 480;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 1;
    var_464 = 0;
    var_472 = 4641240890982006784;
    var_480 = 0;
    var_488 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_496 = 72;
    pri = fun_0B88(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424)
    var_504 = 1;
    var_512 = 0;
    var_520 = 4641240890982006784;
    var_528 = 0;
    var_536 = 0;
    OP_PUSH3_C 4671226772094713856, 4671268003780755456, 4607182418800017408
    var_544 = var_8;
    var_552 = 72;
    pri = fun_0B88(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 10;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = 80;
    var_584 = 8;
    var_592 = 16;
    pri = fun_0308(var_584, var_576)
    var_600 = 0;
    pri = fun_03D8()
    var_608 = 0;
    var_616 = var_24;
    var_624 = 16;
    pri = fun_2978(var_616, var_608)
    var_632 = 0;
    var_640 = 60;
    pri = float(var_640)
    var_648 = pri;
    var_656 = 40320;
    pri = SoundSetRTPC(var_656, var_648, var_640)
    var_664 = 40456;
    var_672 = 8;
    pri = fun_2498(var_664)
    var_680 = 0;
    pri = fun_24D0()
    var_688 = 8802641224559852288;
    var_696 = 8;
    pri = fun_0CA8(var_688)
    var_704 = var_8;
    var_712 = 8;
    pri = fun_0CA8(var_704)
    var_720 = 15;
    var_728 = 8;
    pri = fun_0060(var_720)
    var_736 = 0;
    var_744 = 30;
    pri = float(var_744)
    var_752 = pri;
    var_760 = 40592;
    pri = SoundSetRTPC(var_760, var_752, var_744)
    var_768 = 0;
    var_776 = 0;
    var_784 = 0;
    var_792 = 90;
    pri = float(var_792)
    var_800 = pri;
    var_808 = 8802641224559852288;
    var_816 = 40;
    pri = fun_0C00(var_808, var_800, var_792, var_784, var_776)
    var_824 = 0;
    var_832 = 0;
    var_840 = 0;
    var_848 = 270;
    pri = float(var_848)
    var_856 = pri;
    var_864 = var_8;
    var_872 = 40;
    pri = fun_0C00(var_864, var_856, var_848, var_840, var_832)
    var_880 = 30;
    var_888 = 8;
    pri = fun_0060(var_880)
    var_896 = 8802641224559852288;
    var_904 = 8;
    pri = fun_0CA8(var_896)
    var_912 = var_8;
    var_920 = 8;
    pri = fun_0CA8(var_912)
    alt = 32472;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 64
    OP_LOAD_I 
    var_40 = pri;
    var_936 = 0;
    var_944 = 3;
    var_952 = 0;
    var_960 = 100;
    var_968 = -1;
    var_976 = var_40;
    var_984 = var_8;
    var_992 = 56;
    pri = fun_1F88(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 8;
    pri = fun_2198(var_1000)
    var_1016 = 0;
    pri = fun_2258()
    var_1024 = 0;
    var_1032 = 1;
    var_1040 = 200;
    pri = float(var_1040)
    var_1048 = pri;
    var_1056 = 4612811918334230528;
    var_1064 = 32;
    pri = fun_2AE0(var_1056, var_1048, var_1040, var_1032)
    var_1072 = 0;
    var_1080 = 4631952216750555136;
    var_1088 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_1096 = 4671031446602818519;
    var_1104 = 1;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_29E8()
    var_1120 = 0;
    var_1128 = 4631952216750555136;
    var_1136 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_1144 = 4671018568572878193;
    var_1152 = 240;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    var_1168 = 60;
    pri = float(var_1168)
    var_1176 = pri;
    var_1184 = 40728;
    pri = SoundSetRTPC(var_1184, var_1176, var_1168)
    var_1192 = 40864;
    pri = SoundPostEvent(var_1192)
    var_1200 = 30;
    var_1208 = 8;
    pri = fun_0060(var_1200)
    var_1216 = 0;
    var_1224 = 120;
    var_1232 = 850;
    pri = float(var_1232)
    var_1240 = pri;
    var_1248 = 4605380978949069210;
    var_1256 = 32;
    pri = fun_2AE0(var_1248, var_1240, var_1232, var_1224)
    var_1264 = 1;
    var_1272 = 0;
    var_1280 = 4641240890982006784;
    var_1288 = 0;
    var_1296 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_1304 = 72;
    pri = fun_0B88(var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1312 = 1;
    var_1320 = 0;
    var_1328 = 4641240890982006784;
    var_1336 = 0;
    var_1344 = 0;
    OP_PUSH3_C 4671240515990061056, 4671386201280741376, 4607182418800017408
    var_1352 = var_8;
    var_1360 = 72;
    pri = fun_0B88(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288)
    var_1368 = 8802641224559852288;
    var_1376 = 8;
    pri = fun_0CA8(var_1368)
    var_1384 = var_8;
    var_1392 = 8;
    pri = fun_0CA8(var_1384)
    var_1400 = 15;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 0;
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 90;
    pri = float(var_1440)
    var_1448 = pri;
    var_1456 = 8802641224559852288;
    var_1464 = 40;
    pri = fun_0C00(var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1472 = 0;
    var_1480 = 0;
    var_1488 = 0;
    var_1496 = 270;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = var_8;
    var_1520 = 40;
    pri = fun_0C00(var_1512, var_1504, var_1496, var_1488, var_1480)
    var_1528 = 30;
    var_1536 = 8;
    pri = fun_0060(var_1528)
    var_1544 = 8802641224559852288;
    var_1552 = 8;
    pri = fun_0CA8(var_1544)
    var_1560 = var_8;
    var_1568 = 8;
    pri = fun_0CA8(var_1560)
    var_1576 = 0;
    pri = fun_2730()
    var_1584 = 0;
    pri = fun_29B8()
    var_1592 = 0;
    pri = fun_2838()
    OP_JZER lab_F6C0
    var_1600 = 0;
    pri = fun_2570()
    var_1608 = 0;
    pri = fun_2928()
// lab_F6C0
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_8 = 3;
    var_16 = 1;
    var_24 = 32;
    pri = fun_2B38(var_16, var_8, var_0, var_-8)
    var_32 = 0;
    var_40 = 4631825553011035341;
    var_48 = 0;
    OP_PUSH5_C 4671231434024015626, 4635879496363110564, 4671339070714816758, 4671252786539827036, 4636985693021583442
    var_56 = 4671282539324474655;
    var_64 = 1;
    pri = EvCameraMove(var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    var_72 = 0;
    pri = fun_29E8()
    var_80 = 80;
    var_88 = 8;
    var_96 = 16;
    pri = fun_0308(var_88, var_80)
    var_104 = 0;
    pri = fun_03D8()
    var_112 = 1;
    var_120 = 1;
    var_128 = -1;
    var_136 = -1;
    var_144 = 0;
    var_152 = 1;
    var_160 = var_8;
    var_168 = 56;
    pri = fun_4868(var_160, var_152, var_144, var_136, var_128, var_120, var_112)
    alt = 32472;
    pri = var_16;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    OP_ADD_P_C 72
    OP_LOAD_I 
    var_48 = pri;
    var_184 = 0;
    var_192 = 3;
    var_200 = 0;
    var_208 = 100;
    var_216 = -1;
    var_224 = var_48;
    var_232 = var_8;
    var_240 = 56;
    pri = fun_1F88(var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_248 = 1;
    var_256 = 8;
    pri = fun_2198(var_248)
    var_264 = 0;
    pri = fun_2258()
    var_272 = 0;
    pri = fun_2570()
    pri = var_32;
    OP_JNZ lab_F9A8
    var_280 = 3;
    var_288 = 2;
    var_296 = 16;
    pri = fun_B650(var_288, var_280)
    var_304 = 5;
    var_312 = 4;
    var_320 = 16;
    pri = fun_B650(var_312, var_304)
    var_328 = 7;
    var_336 = 6;
    var_344 = 16;
    pri = fun_B650(var_336, var_328)
// lab_F9A8
    pri = var_32;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_FA68
    var_16 = 5;
    var_24 = 4;
    var_32 = 16;
    pri = fun_BAD8(var_24, var_16)
    var_56 = pri;
    var_48 = 7;
    var_56 = 6;
    var_64 = 16;
    pri = fun_BAD8(var_56, var_48)
    var_64 = pri;
    var_72 = var_64;
    var_80 = var_56;
    var_88 = 16;
    pri = fun_B650(var_80, var_72)
// lab_FA68
    var_8 = 1;
    pri = 39896;
    OP_LOAD_I 
    var_16 = pri;
    pri = WorkAdd(var_16, var_8)
    var_24 = 1;
    var_32 = 0;
    var_40 = 32;
    var_48 = 8;
    var_56 = 32;
    pri = fun_0368(var_48, var_40, var_32, var_24)
    var_64 = 0;
    pri = fun_03D8()
    var_72 = 0;
    var_80 = 3458049540832089695;
    var_88 = 16;
    pri = fun_0B48(var_80, var_72)
    var_96 = 0;
    var_104 = 3458048441320461484;
    var_112 = 16;
    pri = fun_0B48(var_104, var_96)
    var_120 = 0;
    var_128 = 8802641224559852288;
    var_136 = 16;
    pri = fun_A008(var_128, var_120)
    var_144 = 1;
    var_152 = var_8;
    var_160 = 16;
    pri = fun_A008(var_152, var_144)
    var_168 = 3;
    var_176 = 0;
    pri = EvCameraEnd(var_176, var_168)
    var_184 = var_8;
    var_192 = 8;
    pri = fun_09C8(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_0060(var_200)
    var_216 = 0;
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 180;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 26381;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 19995;
    pri = float(var_288)
    var_296 = pri;
    OP_PUSH2_C 9116614320094512028, -3307772254259144861
    var_304 = 80;
    pri = fun_0508(var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_312 = 1;
    var_320 = 2;
    var_328 = 16;
    pri = fun_9D40(var_320, var_312)
    var_336 = 30;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_352 = 80;
    var_360 = 8;
    var_368 = 16;
    pri = fun_0308(var_360, var_352)
    var_376 = 0;
    pri = fun_03D8()
    pri = var_32;
    switch (pri) {
// switch_FF68
        case default:
        {
// switch_FF68_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_FF68_case_0x0
            var_8 = 1;
            var_16 = 8;
            pri = fun_BBD8(var_8)
            OP_JUMP switch_FF68_case_default
        }
        case 0x1:
        {
// switch_FF68_case_0x1
            var_8 = 2;
            var_16 = 8;
            pri = fun_BBD8(var_8)
            OP_JUMP switch_FF68_case_default
        }
        case 0x2:
        {
// switch_FF68_case_0x2
            var_8 = 3;
            var_16 = 8;
            pri = fun_BBD8(var_8)
            var_24 = 1;
            var_32 = 0;
            var_40 = 32;
            var_48 = 8;
            var_56 = 32;
            pri = fun_0368(var_48, var_40, var_32, var_24)
            var_64 = 0;
            pri = fun_03D8()
            var_72 = 0;
            pri = SetPlayerUniform(var_72)
            pri = SaveClearParty()
            var_80 = 14;
            var_88 = 8;
            pri = fun_0738(var_80)
            var_96 = 0;
            var_104 = 0;
            var_112 = 1;
            var_120 = 0;
            var_128 = 0;
            var_136 = 4180;
            pri = float(var_136)
            var_144 = pri;
            var_152 = 3440;
            pri = float(var_152)
            var_160 = pri;
            OP_PUSH3_C 9117464242582929906, -3308727729863870995, 5598432091039681423
            var_168 = 80;
            pri = fun_0678(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88)
            OP_JUMP switch_FF68_case_default
        }
    }
}
