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
    OP_ZERO_P_S -8
    OP_JUMP lab_0190
// lab_0190
    OP_LOAD_S_BOTH -8, 40
    OP_JSGEQ lab_0290
    pri = arg_1;
    var_8 = pri;
    pri = var_8;
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    OP_JNZ lab_0210
    pri = 0;
    return pri;
// lab_0290
    pri = 0;
    return pri;
// lab_0210
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
    OP_JUMP lab_0188
// lab_0188
    OP_INC_P_S -8
}
// fun_02A8
fun_02A8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
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
// fun_0378
fun_0378() {
    OP_JUMP lab_0390
// lab_0390
    pri = FadeWait_()
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0390
    pri = 0;
    return pri;
}
// fun_0408
fun_0408() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0430
fun_0430() {
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
// fun_04F0
fun_04F0() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0538
// lab_0538
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0578
    OP_JUMP lab_05E8
// lab_0578
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_05B8
    OP_JUMP lab_05E8
// lab_05B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0538
// lab_05E8
    pri = 0;
    return pri;
}
// fun_0600
fun_0600() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0630
fun_0630() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0668
// lab_0668
    var_8 = 0;
    pri = fun_07B0()
    OP_JNZ lab_06A0
    OP_JUMP lab_06D0
// lab_06A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0668
// lab_06D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0700
// lab_0700
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0740
    pri = 0;
    return pri;
// lab_0740
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0700
    pri = 0;
    return pri;
}
// fun_0780
fun_0780() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_07B0
fun_07B0() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_07D8
fun_07D8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0830
fun_0830() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0868
fun_0868() {
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
// fun_08E0
fun_08E0() {
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
// fun_09A0
fun_09A0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1168(var_8)
    OP_JZER lab_0A70
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1198(var_24)
    OP_JNZ lab_0A70
    pri = 0;
    return pri;
// lab_0A70
    OP_JUMP lab_0A80
// lab_0A80
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AE0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A80
    pri = 0;
    return pri;
}
// fun_0B20
fun_0B20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B58
fun_0B58() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B98
fun_0B98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C18
    pri = 0;
    return pri;
// lab_0C18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C58
// lab_0C58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1168(var_8)
    OP_JNZ lab_0CE0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CD0
    pri = 0;
    return pri;
// lab_0CE0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D28
    pri = 0;
    return pri;
// lab_0D28
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D88
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DD0(var_8)
    pri = 0;
    return pri;
// lab_0D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C58
    pri = 0;
    return pri;
// lab_0CD0
    OP_JUMP lab_0D28
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E08
fun_0E08() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E58
    pri = 0;
    return pri;
// lab_0E58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1168(var_8)
    OP_JZER lab_0F88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EB0
    OP_ZERO_P_S 64
// lab_0F88
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FC0
    OP_CONST_S 64, 1
// lab_0FC0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF8
    OP_CONST_S 72, 1
// lab_0FF8
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
// lab_0EB0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED8
    OP_ZERO_P_S 72
// lab_0ED8
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
    OP_JUMP lab_1098
// lab_1098
    pri = 0;
    return pri;
}
// fun_10A8
fun_10A8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1128
fun_1128() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1198
fun_1198() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_11C8
fun_11C8() {
    OP_JUMP lab_11E0
// lab_11E0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1270
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1260
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD0(var_8)
    pri = 0;
    return pri;
// lab_1270
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1300
    pri = IsPlayerRideBicycle()
    OP_JZER lab_12F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD0(var_8)
    pri = 0;
    return pri;
// lab_1300
    pri = 0;
    return pri;
// lab_12F0
    OP_JUMP lab_1310
// lab_1310
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11E0
    pri = 0;
    return pri;
// lab_1260
    OP_JUMP lab_1310
}
// fun_1350
fun_1350() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_11C8(var_40)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1410
fun_1410() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1438
fun_1438() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
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
// switch_1A88
        case default:
        {
// switch_1A88_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1AD0
// lab_1AD0
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
            OP_JNZ lab_1B78
            var_88 = 0;
            pri = fun_1E48()
// lab_1B78
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1A88_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1670
                case default:
                {
// switch_1670_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16E8
// lab_16E8
                    OP_JUMP lab_1AD0
                }
                case 0x0:
                {
// switch_1670_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_16E8
                }
                case 0x1:
                {
// switch_1670_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_16E8
                }
                case 0x2:
                {
// switch_1670_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_16E8
                }
                case 0x3:
                {
// switch_1670_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_16E8
                }
                case 0x4:
                {
// switch_1670_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_16E8
                }
                case 0x5:
                {
// switch_1670_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_16E8
                }
            }
        }
        case 0x65:
        {
// switch_1A88_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1828
                case default:
                {
// switch_1828_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18A0
// lab_18A0
                    OP_JUMP lab_1AD0
                }
                case 0x0:
                {
// switch_1828_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_18A0
                }
                case 0x1:
                {
// switch_1828_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_18A0
                }
                case 0x2:
                {
// switch_1828_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_18A0
                }
                case 0x3:
                {
// switch_1828_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_18A0
                }
                case 0x4:
                {
// switch_1828_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_18A0
                }
                case 0x5:
                {
// switch_1828_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_18A0
                }
            }
        }
        case 0x66:
        {
// switch_1A88_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_19E0
                case default:
                {
// switch_19E0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A58
// lab_1A58
                    OP_JUMP lab_1AD0
                }
                case 0x0:
                {
// switch_19E0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1A58
                }
                case 0x1:
                {
// switch_19E0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1A58
                }
                case 0x2:
                {
// switch_19E0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1A58
                }
                case 0x3:
                {
// switch_19E0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1A58
                }
                case 0x4:
                {
// switch_19E0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1A58
                }
                case 0x5:
                {
// switch_19E0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1A58
                }
            }
        }
    }
}
// fun_1B90
fun_1B90() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1470(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B98(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1CA0
    pri = 1;
    return pri;
// lab_1CA0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1CE8
fun_1CE8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1D38
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1BF8(var_8)
    arg_2 = pri;
// lab_1D38
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1470(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1D98
fun_1D98() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1B90(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1DE8
fun_1DE8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_1D98(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1E48
fun_1E48() {
    OP_JUMP lab_1E60
// lab_1E60
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1EA0
    pri = 0;
    return pri;
// lab_1EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1E60
    pri = 0;
    return pri;
}
// fun_1EE0
fun_1EE0() {
    var_8 = 0;
    pri = fun_1E48()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1F90
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_1F90
    pri = 0;
    return pri;
}
// fun_1FA0
fun_1FA0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1FD0
fun_1FD0() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2000
// lab_2000
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2040
    OP_JUMP lab_2070
// lab_2040
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2000
// lab_2070
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_20B8
fun_20B8() {
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
// fun_2128
fun_2128() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2160
fun_2160() {
    OP_JUMP lab_2178
// lab_2178
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_21C0
    OP_JUMP lab_21F0
    OP_JUMP lab_21E0
// lab_21C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_21F0
    pri = 0;
    return pri;
// lab_21E0
    OP_JUMP lab_2178
}
// fun_2200
fun_2200() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2230
fun_2230() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2280
fun_2280() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 3;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22D0
fun_22D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2320
fun_2320() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2370
fun_2370() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = PlayDemoScene_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2428
fun_2428() {
    OP_JUMP lab_2440
// lab_2440
    pri = EvCameraMoveWait_()
    OP_JZER lab_2478
    pri = 0;
    return pri;
// lab_2478
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2440
    pri = 0;
    return pri;
}
// fun_24B8
fun_24B8() {
    pri = arg_6;
    OP_JNZ lab_24F0
    var_8 = 0;
    pri = fun_10A8()
// lab_24F0
    pri = arg_1;
    switch (pri) {
// switch_3A58
        case default:
        {
// switch_3A58_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3DA8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3DA8
            pri = 1;
            OP_JUMP lab_3DB0
// lab_3DA8
            pri = 0;
// lab_3DB0
            OP_JZER lab_3F08
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B98(var_24, var_16)
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
            OP_JUMP lab_3F68
// lab_3F08
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_3F68
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3FC8
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4028
// lab_3FC8
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4028
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4028
            pri = arg_2;
            OP_JZER lab_4068
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4068
            var_8 = 0;
            pri = fun_10E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3A58_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1:
        {
// switch_3A58_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x2:
        {
// switch_3A58_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x3:
        {
// switch_3A58_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x4:
        {
// switch_3A58_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x5:
        {
// switch_3A58_case_0x5
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x6:
        {
// switch_3A58_case_0x6
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x7:
        {
// switch_3A58_case_0x7
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x8:
        {
// switch_3A58_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x9:
        {
// switch_3A58_case_0x9
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xa:
        {
// switch_3A58_case_0xa
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xb:
        {
// switch_3A58_case_0xb
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xc:
        {
// switch_3A58_case_0xc
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xd:
        {
// switch_3A58_case_0xd
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xe:
        {
// switch_3A58_case_0xe
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0xf:
        {
// switch_3A58_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x10:
        {
// switch_3A58_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x11:
        {
// switch_3A58_case_0x11
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x12:
        {
// switch_3A58_case_0x12
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x13:
        {
// switch_3A58_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x14:
        {
// switch_3A58_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x15:
        {
// switch_3A58_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x16:
        {
// switch_3A58_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x17:
        {
// switch_3A58_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x18:
        {
// switch_3A58_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x19:
        {
// switch_3A58_case_0x19
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1a:
        {
// switch_3A58_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B20(var_48, var_40)
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
            pri = fun_0E08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1b:
        {
// switch_3A58_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B20(var_48, var_40)
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
            pri = fun_0E08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1c:
        {
// switch_3A58_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B20(var_48, var_40)
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
            pri = fun_0E08(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1d:
        {
// switch_3A58_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1e:
        {
// switch_3A58_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x1f:
        {
// switch_3A58_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x20:
        {
// switch_3A58_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x21:
        {
// switch_3A58_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x22:
        {
// switch_3A58_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x23:
        {
// switch_3A58_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x24:
        {
// switch_3A58_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x25:
        {
// switch_3A58_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x26:
        {
// switch_3A58_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x27:
        {
// switch_3A58_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x28:
        {
// switch_3A58_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
        case 0x29:
        {
// switch_3A58_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3A58_case_default
        }
    }
}
// fun_4098
fun_4098() {
    pri = arg_5;
    OP_JNZ lab_40D0
    var_8 = 0;
    pri = fun_10A8()
// lab_40D0
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4120
    OP_CONST_S -8, -1
// lab_4120
    pri = arg_1;
    switch (pri) {
// switch_5BD8
        case default:
        {
// switch_5BD8_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6080
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B98(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6080
            pri = 1;
            OP_JUMP lab_6088
// lab_6080
            pri = 0;
// lab_6088
            OP_JZER lab_60D8
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6330
// lab_60D8
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6140
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6140
            pri = 1;
            OP_JUMP lab_6148
// lab_6140
            pri = 0;
// lab_6148
            OP_JZER lab_62D0
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B98(var_24, var_16)
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
            OP_JUMP lab_6330
// lab_62D0
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
            pri = fun_0160(var_16, var_8, var_0)
// lab_6330
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_63A0
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_63A0
            var_8 = 0;
            pri = fun_10E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_5BD8_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1:
        {
// switch_5BD8_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2:
        {
// switch_5BD8_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x3:
        {
// switch_5BD8_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x4:
        {
// switch_5BD8_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x5:
        {
// switch_5BD8_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DD0(var_40)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x6:
        {
// switch_5BD8_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x7:
        {
// switch_5BD8_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x8:
        {
// switch_5BD8_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x9:
        {
// switch_5BD8_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0xa:
        {
// switch_5BD8_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0xb:
        {
// switch_5BD8_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0xc:
        {
// switch_5BD8_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0xd:
        {
// switch_5BD8_case_0xd
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0xe:
        {
// switch_5BD8_case_0xe
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0xf:
        {
// switch_5BD8_case_0xf
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x10:
        {
// switch_5BD8_case_0x10
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x11:
        {
// switch_5BD8_case_0x11
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x12:
        {
// switch_5BD8_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x13:
        {
// switch_5BD8_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x14:
        {
// switch_5BD8_case_0x14
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x15:
        {
// switch_5BD8_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x16:
        {
// switch_5BD8_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x17:
        {
// switch_5BD8_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x18:
        {
// switch_5BD8_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x19:
        {
// switch_5BD8_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1a:
        {
// switch_5BD8_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1b:
        {
// switch_5BD8_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1c:
        {
// switch_5BD8_case_0x1c
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1d:
        {
// switch_5BD8_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1e:
        {
// switch_5BD8_case_0x1e
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x1f:
        {
// switch_5BD8_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x20:
        {
// switch_5BD8_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x21:
        {
// switch_5BD8_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x22:
        {
// switch_5BD8_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x23:
        {
// switch_5BD8_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x24:
        {
// switch_5BD8_case_0x24
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x25:
        {
// switch_5BD8_case_0x25
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x26:
        {
// switch_5BD8_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x27:
        {
// switch_5BD8_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x28:
        {
// switch_5BD8_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x29:
        {
// switch_5BD8_case_0x29
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2a:
        {
// switch_5BD8_case_0x2a
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2b:
        {
// switch_5BD8_case_0x2b
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2c:
        {
// switch_5BD8_case_0x2c
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2d:
        {
// switch_5BD8_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2e:
        {
// switch_5BD8_case_0x2e
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x2f:
        {
// switch_5BD8_case_0x2f
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x30:
        {
// switch_5BD8_case_0x30
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x31:
        {
// switch_5BD8_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x32:
        {
// switch_5BD8_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x33:
        {
// switch_5BD8_case_0x33
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x34:
        {
// switch_5BD8_case_0x34
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x35:
        {
// switch_5BD8_case_0x35
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x36:
        {
// switch_5BD8_case_0x36
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x37:
        {
// switch_5BD8_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x38:
        {
// switch_5BD8_case_0x38
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
            pri = fun_0E08(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x39:
        {
// switch_5BD8_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x3a:
        {
// switch_5BD8_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x3b:
        {
// switch_5BD8_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x3c:
        {
// switch_5BD8_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x3d:
        {
// switch_5BD8_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
        case 0x3e:
        {
// switch_5BD8_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            OP_JUMP switch_5BD8_case_default
        }
    }
}
// fun_63D0
fun_63D0() {
    pri = arg_4;
    OP_JNZ lab_6408
    var_8 = 0;
    pri = fun_10A8()
// lab_6408
    pri = arg_1;
    switch (pri) {
// switch_77E0
        case default:
        {
// switch_77E0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1168(var_264)
            OP_JZER lab_7DA8
            pri = arg_3;
            switch (pri) {
// switch_7D50
                case default:
                {
// switch_7D50_case_default
                    OP_JUMP lab_8060
// lab_8060
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_80D0
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_80D0
                    var_8 = 0;
                    pri = fun_10E8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_7D50_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D50_case_default
                }
                case 0x2:
                {
// switch_7D50_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D50_case_default
                }
                case 0x3:
                {
// switch_7D50_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_7D50_case_default
                }
            }
// lab_7DA8
            pri = arg_1;
            OP_JZER lab_7DF8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_7DF8
            pri = 0;
            OP_JUMP lab_7E00
// lab_7DF8
            pri = 1;
// lab_7E00
            OP_JZER lab_7E68
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0B98(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_7E68
            pri = 1;
            OP_JUMP lab_7E70
// lab_7E68
            pri = 0;
// lab_7E70
            OP_JZER lab_7EC0
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8060
// lab_7EC0
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_7F28
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8060
// lab_7F28
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B98(var_24, var_16)
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
// switch_77E0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1:
        {
// switch_77E0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2:
        {
// switch_77E0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x3:
        {
// switch_77E0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x4:
        {
// switch_77E0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x5:
        {
// switch_77E0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DD0(var_40)
            OP_JUMP switch_77E0_case_default
        }
        case 0x6:
        {
// switch_77E0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x7:
        {
// switch_77E0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x8:
        {
// switch_77E0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x9:
        {
// switch_77E0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0xa:
        {
// switch_77E0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0xb:
        {
// switch_77E0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0xc:
        {
// switch_77E0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0xd:
        {
// switch_77E0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0xe:
        {
// switch_77E0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0xf:
        {
// switch_77E0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x10:
        {
// switch_77E0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x11:
        {
// switch_77E0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x12:
        {
// switch_77E0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x13:
        {
// switch_77E0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x14:
        {
// switch_77E0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x15:
        {
// switch_77E0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x16:
        {
// switch_77E0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x17:
        {
// switch_77E0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x18:
        {
// switch_77E0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x19:
        {
// switch_77E0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1a:
        {
// switch_77E0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1b:
        {
// switch_77E0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1c:
        {
// switch_77E0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1d:
        {
// switch_77E0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1e:
        {
// switch_77E0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x1f:
        {
// switch_77E0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x20:
        {
// switch_77E0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x21:
        {
// switch_77E0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x22:
        {
// switch_77E0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x23:
        {
// switch_77E0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x24:
        {
// switch_77E0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x25:
        {
// switch_77E0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x26:
        {
// switch_77E0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x27:
        {
// switch_77E0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x28:
        {
// switch_77E0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x29:
        {
// switch_77E0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2a:
        {
// switch_77E0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2b:
        {
// switch_77E0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2c:
        {
// switch_77E0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2d:
        {
// switch_77E0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2e:
        {
// switch_77E0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x2f:
        {
// switch_77E0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x30:
        {
// switch_77E0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x31:
        {
// switch_77E0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x32:
        {
// switch_77E0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x33:
        {
// switch_77E0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x34:
        {
// switch_77E0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x35:
        {
// switch_77E0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x36:
        {
// switch_77E0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x37:
        {
// switch_77E0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x38:
        {
// switch_77E0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x39:
        {
// switch_77E0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x3a:
        {
// switch_77E0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x3b:
        {
// switch_77E0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x3c:
        {
// switch_77E0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x3d:
        {
// switch_77E0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
        case 0x3e:
        {
// switch_77E0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B58(var_24, var_16, var_8)
            OP_JUMP switch_77E0_case_default
        }
    }
}
// fun_8100
fun_8100() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8310(var_16, var_8)
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
    OP_JZER lab_82F8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_82F8
    pri = 0;
    return pri;
}
// fun_8310
fun_8310() {
    var_8 = arg_1;
    var_16 = 30168;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B58(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8358
fun_8358() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_83F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0BD0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_24B8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_83F0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_8548
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_84B0
    var_24 = 30272;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_84B0
    pri = 1;
    OP_JUMP lab_84B8
// lab_8548
    pri = 0;
    return pri;
// lab_84B0
    pri = 0;
// lab_84B8
    OP_JZER lab_8548
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BD0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_24B8(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_8558
fun_8558() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_8358(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_85E0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_85E0
fun_85E0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_8778(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8648
fun_8648() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_86B8
    OP_CONST_S -8, 1
// lab_86B8
    pri = arg_0;
    OP_JNZ lab_86D8
    OP_ZERO_P_S -8
// lab_86D8
    pri = var_8;
    OP_JZER lab_8760
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_8760
    pri = 0;
    return pri;
}
// fun_8778
fun_8778() {
    var_8 = 30376;
    var_16 = 8;
    pri = fun_2128(var_8)
    var_24 = 0;
    pri = fun_2160()
    pri = arg_3;
    OP_JNZ lab_8898
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8860
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8908(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8888
// lab_8898
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8AA8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8860
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_89D0(var_16, var_8)
// lab_8888
    OP_JUMP lab_88E0
// lab_88E0
    var_8 = 0;
    pri = fun_2200()
    pri = 0;
    return pri;
}
// fun_8908
fun_8908() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8AA8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_89B8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_89B8
    pri = 0;
    return pri;
}
// fun_89D0
fun_89D0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_22D0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_1DE8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_1EE0(var_72)
    var_88 = 0;
    pri = fun_1FA0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2230(var_96)
    pri = 0;
    return pri;
}
// fun_8AA8
fun_8AA8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8AF0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8DB0(var_8)
// lab_8AF0
    pri = arg_4;
    OP_JNZ lab_8B58
    var_8 = 0;
    var_16 = 8;
    pri = fun_2230(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_22D0(var_40, var_32, var_24)
// lab_8B58
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8BF8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2320(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_1DE8(var_56, var_48, var_40)
    OP_JUMP lab_8CE8
// lab_8BF8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8CB0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8CB0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8CB0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_1DE8(var_24, var_16, var_8)
// lab_8CE8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8D28
    var_8 = 0;
    var_16 = 8;
    pri = fun_04F0(var_8)
// lab_8D28
    var_8 = 1;
    var_16 = 8;
    pri = fun_1EE0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_8FB8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_8648(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_8DB0
fun_8DB0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_8E10
    var_16 = 30536;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_8E10
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_8F50
        case default:
        {
// switch_8F50_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_8F40
            var_16 = 31080;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_8F40
            OP_JUMP lab_8F88
// lab_8F88
            var_8 = 31296;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_8F50_case_0x1
            var_8 = 30752;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8F88
        }
        case 0x2:
        {
// switch_8F50_case_0x2
            var_8 = 30880;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_8F88
        }
    }
}
// fun_8FB8
fun_8FB8() {
    pri = arg_2;
    OP_JNZ lab_90A0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2230(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_22D0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2370(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_90A0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_1DE8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_1EE0(var_40)
    var_56 = 0;
    pri = fun_1FA0()
    pri = 0;
    return pri;
}
// fun_9118
fun_9118() {
    pri = 31480;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_91A0
// lab_91A0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9320
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9310
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_9260
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_9260
    pri = 0;
    OP_JUMP lab_9268
// lab_9320
    pri = 0;
    return pri;
// lab_9310
    OP_JUMP lab_9198
// lab_9198
    OP_INC_P_S -936
// lab_9260
    pri = 1;
// lab_9268
    OP_JZER lab_92E0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_92D8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_92E0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_92D8
}
// fun_9340
fun_9340() {
    var_8 = -4562270413023387603;
    pri = WorkGet(var_8)
    return pri;
}
// fun_9378
fun_9378() {
    var_8 = 0;
    pri = fun_9340()
    switch (pri) {
// switch_9428
        case default:
        {
// switch_9428_case_default
            pri = arg_1;
            return pri;
            OP_JUMP lab_9470
// lab_9470
            pri = arg_1;
            return pri;
        }
        case 0x0:
        {
// switch_9428_case_0x0
            pri = arg_0;
            return pri;
            OP_JUMP lab_9470
        }
        case 0x1:
        {
// switch_9428_case_0x1
            pri = arg_1;
            return pri;
            OP_JUMP lab_9470
        }
        case 0x2:
        {
// switch_9428_case_0x2
            pri = arg_2;
            return pri;
            OP_JUMP lab_9470
        }
    }
}
// fun_9480
fun_9480() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9518
    var_8 = 1;
    var_16 = 0;
    var_24 = 32400;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1410()
// lab_9518
    pri = arg_4;
    OP_JZER lab_9550
    var_8 = 1;
    var_16 = 8;
    pri = fun_1438(var_8)
// lab_9550
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_95A8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_95A8
    pri = 0;
    OP_JUMP lab_95B0
// lab_95A8
    pri = 1;
// lab_95B0
    OP_JZER lab_9678
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_9678
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_9650
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1350(var_32, var_24)
    OP_JUMP lab_9678
// lab_9678
    pri = arg_2;
    OP_JZER lab_9750
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_9720
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1128(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0830(var_40)
    OP_JUMP lab_9750
// lab_9750
    pri = arg_3;
    OP_JZER lab_9788
    var_8 = 1;
    var_16 = 8;
    pri = fun_13D8(var_8)
// lab_9788
    pri = 0;
    return pri;
// lab_9720
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1128(var_16, var_8)
// lab_9650
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1350(var_16, var_8)
}
// fun_9798
fun_9798() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9118(var_24)
    pri = 0;
    return pri;
}
// fun_9800
fun_9800() {
    pri = g_mode;
    switch (pri) {
// switch_98C0
        case default:
        {
// switch_98C0_case_default
            pri = CommandNOP()
            OP_JUMP lab_9908
// lab_9908
            pri = 0;
            return pri;
        }
        case 0x8d1d322202600a5e:
        {
// switch_98C0_case_0x8d1d322202600a5e
            var_8 = 0;
            pri = fun_B660()
            OP_JUMP lab_9908
        }
        case 0x0:
        {
// switch_98C0_case_0x0
            var_8 = 0;
            pri = fun_9918()
            OP_JUMP lab_9908
        }
        case 0x6def581e76e2174a:
        {
// switch_98C0_case_0x6def581e76e2174a
            var_8 = 0;
            pri = fun_B768()
            OP_JUMP lab_9908
        }
    }
}
// fun_9918
fun_9918() {
    pri = 0;
    return pri;
}
// fun_9930
fun_9930() {
    pri = 0;
    return pri;
}
// fun_9948
fun_9948() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9480(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_99A0
fun_99A0() {
    var_8 = 7874170534708825062;
    var_16 = 8;
    pri = fun_0600(var_8)
    var_24 = -8177398779958974095;
    var_32 = 8;
    pri = fun_0600(var_24)
    var_40 = 8311746388232223697;
    var_48 = 8;
    pri = fun_0600(var_40)
    pri = 0;
    return pri;
}
// fun_9A30
fun_9A30() {
    var_8 = 0;
    pri = fun_0630()
    pri = 0;
    return pri;
}
// fun_9A60
fun_9A60() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = -127;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 838;
    pri = float(var_40)
    var_48 = pri;
    var_56 = 874;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 8802641224559852288;
    var_80 = 48;
    pri = fun_07D8(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = -129;
    pri = float(var_104)
    var_112 = pri;
    var_120 = 743;
    pri = float(var_120)
    var_128 = pri;
    var_136 = 955;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 7874170534708825062;
    var_160 = 48;
    pri = fun_07D8(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 1;
    var_176 = 1;
    var_184 = -90;
    pri = float(var_184)
    var_192 = pri;
    var_200 = 984;
    pri = float(var_200)
    var_208 = pri;
    var_216 = 1167;
    pri = float(var_216)
    var_224 = pri;
    var_232 = 8311746388232223697;
    var_240 = 48;
    pri = fun_07D8(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 1;
    var_256 = 1;
    var_264 = -90;
    pri = float(var_264)
    var_272 = pri;
    var_280 = 845;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 1191;
    pri = float(var_296)
    var_304 = pri;
    var_312 = -8177398779958974095;
    var_320 = 48;
    pri = fun_07D8(var_312, var_304, var_296, var_288, var_280, var_272)
    var_328 = 1;
    var_336 = 8;
    pri = fun_0060(var_328)
    var_352 = 813;
    var_360 = 810;
    var_368 = 816;
    var_376 = 24;
    pri = fun_9378(var_368, var_360, var_352)
    var_8 = pri;
    var_384 = 0;
    var_392 = 4631952216750555136;
    var_400 = 0;
    OP_PUSH5_C 4648363263423949046, 4630843205342315151, 4649876455306559488, 4651017132649679421, 4639646687082661806
    var_408 = 4647517782962654413;
    var_416 = 1;
    pri = EvCameraMove(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    pri = fun_2428()
    var_432 = 1;
    var_440 = 0;
    var_448 = 30;
    pri = float(var_448)
    var_456 = pri;
    var_464 = 0;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 0;
    OP_PUSH4_C 4649291075315931546, 4649197836729896141, 4607182418800017408, 8802641224559852288
    var_488 = 72;
    pri = fun_0868(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 1;
    var_504 = 0;
    var_512 = 30;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 0;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 0;
    OP_PUSH4_C 4648779142702039040, 4650415216004169728, 4607182418800017408, 7874170534708825062
    var_552 = 72;
    pri = fun_0868(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 15;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = 32448;
    var_584 = 8;
    var_592 = 16;
    pri = fun_02A8(var_584, var_576)
    var_600 = 0;
    pri = fun_0378()
    var_608 = 20;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C 3001737074066101432, -8177398779958974095
    var_664 = 56;
    pri = fun_1CE8(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 1;
    var_680 = 8;
    pri = fun_1EE0(var_672)
    var_688 = 0;
    pri = fun_1FA0()
    var_696 = 8802641224559852288;
    var_704 = 8;
    pri = fun_09F8(var_696)
    var_712 = 7874170534708825062;
    var_720 = 8;
    pri = fun_09F8(var_712)
    var_728 = 0;
    var_736 = 0;
    var_744 = 0;
    var_752 = 0;
    OP_PUSH2_C 8311746388232223697, 8802641224559852288
    var_760 = 48;
    pri = fun_09A0(var_752, var_744, var_736, var_728, var_720, var_712)
    var_768 = 5;
    var_776 = 8;
    pri = fun_0060(var_768)
    var_784 = 0;
    var_792 = 0;
    var_800 = 0;
    var_808 = 0;
    OP_PUSH2_C -8177398779958974095, 7874170534708825062
    var_816 = 48;
    pri = fun_09A0(var_808, var_800, var_792, var_784, var_776, var_768)
    var_824 = 1;
    var_832 = 0;
    OP_PUSH5_C 4641240890982006784, 8802641224559852288, 4650327255073947648, 4650511973027414016, 4607182418800017408
    var_840 = 8311746388232223697;
    var_848 = 64;
    pri = fun_08E0(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_856 = 1;
    var_864 = 0;
    OP_PUSH5_C 4641240890982006784, 7874170534708825062, 4649368480934526976, 4651145291725012992, 4607182418800017408
    var_872 = -8177398779958974095;
    var_880 = 64;
    pri = fun_08E0(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816)
    var_888 = 0;
    pri = fun_2428()
    var_896 = 8802641224559852288;
    var_904 = 8;
    pri = fun_09F8(var_896)
    var_912 = 7874170534708825062;
    var_920 = 8;
    pri = fun_09F8(var_912)
    var_928 = 0;
    var_936 = 4629925596918238413;
    var_944 = 3;
    OP_PUSH5_C 4649447733732657070, 4635610687760351887, 4650333676221853860, 4650755712765059400, 4637863191261478912
    var_952 = 4647782809245413540;
    var_960 = 75;
    pri = EvCameraMove(var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896, var_888)
    var_968 = 0;
    pri = fun_2428()
    var_976 = 0;
    var_984 = 1;
    var_992 = 7874170534708825062;
    var_1000 = 24;
    pri = fun_8100(var_992, var_984, var_976)
    var_1008 = 1;
    var_1016 = 8;
    pri = fun_0060(var_1008)
    var_1024 = 7874170534708825062;
    var_1032 = 8;
    pri = fun_0BD0(var_1024)
    var_1040 = 0;
    var_1048 = 3;
    var_1056 = 0;
    var_1064 = 100;
    var_1072 = -1;
    OP_PUSH2_C 719074442745202811, 7874170534708825062
    var_1080 = 56;
    pri = fun_1CE8(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1088 = 1;
    var_1096 = 8;
    pri = fun_1EE0(var_1088)
    var_1104 = 0;
    pri = fun_1FA0()
    var_1112 = 8311746388232223697;
    var_1120 = 8;
    pri = fun_09F8(var_1112)
    var_1128 = -8177398779958974095;
    var_1136 = 8;
    pri = fun_09F8(var_1128)
    var_1144 = 0;
    var_1152 = 2;
    var_1160 = -8177398779958974095;
    var_1168 = 24;
    pri = fun_8100(var_1160, var_1152, var_1144)
    var_1176 = 1;
    var_1184 = 8;
    pri = fun_0060(var_1176)
    var_1192 = -8177398779958974095;
    var_1200 = 8;
    pri = fun_0BD0(var_1192)
    var_1208 = var_8;
    var_1216 = 1;
    var_1224 = 16;
    pri = fun_2280(var_1216, var_1208)
    var_1232 = 0;
    var_1240 = 3;
    var_1248 = 0;
    var_1256 = 100;
    var_1264 = -1;
    OP_PUSH2_C 3001742571624242487, -8177398779958974095
    var_1272 = 56;
    pri = fun_1CE8(var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1280 = 1;
    var_1288 = 8;
    pri = fun_1EE0(var_1280)
    var_1296 = 0;
    pri = fun_1FA0()
    var_1304 = 0;
    var_1312 = 2;
    var_1320 = 8311746388232223697;
    var_1328 = 24;
    pri = fun_8100(var_1320, var_1312, var_1304)
    var_1336 = 1;
    var_1344 = 8;
    pri = fun_0060(var_1336)
    var_1352 = 8311746388232223697;
    var_1360 = 8;
    pri = fun_0BD0(var_1352)
    var_1368 = 0;
    var_1376 = 3;
    var_1384 = 0;
    var_1392 = 100;
    var_1400 = -1;
    OP_PUSH2_C -132321203742209687, 8311746388232223697
    var_1408 = 56;
    pri = fun_1CE8(var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1416 = 1;
    var_1424 = 8;
    pri = fun_1EE0(var_1416)
    var_1432 = 0;
    pri = fun_1FA0()
    var_1440 = 1;
    var_1448 = -1;
    var_1456 = -1;
    var_1464 = 3;
    var_1472 = 0;
    var_1480 = 2;
    var_1488 = -8177398779958974095;
    var_1496 = 56;
    pri = fun_24B8(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440)
    var_1504 = 1;
    var_1512 = -1;
    var_1520 = -1;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 3;
    var_1552 = 7874170534708825062;
    var_1560 = 56;
    pri = fun_24B8(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1568 = 5;
    var_1576 = 8;
    pri = fun_0060(var_1568)
    var_1584 = 6;
    var_1592 = 4;
    var_1600 = 2;
    var_1608 = 1;
    var_1616 = 9;
    var_1624 = 1;
    var_1632 = 1100;
    var_1640 = 8311746388232223697;
    var_1648 = 64;
    pri = fun_8558(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584)
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 8311746388232223697;
    var_1680 = 24;
    pri = fun_8100(var_1672, var_1664, var_1656)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_0060(var_1688)
    var_1704 = 8311746388232223697;
    var_1712 = 8;
    pri = fun_0BD0(var_1704)
    var_1720 = 7874170534708825062;
    var_1728 = 8;
    pri = fun_0BD0(var_1720)
    var_1736 = 0;
    var_1744 = 3;
    var_1752 = 0;
    var_1760 = 100;
    var_1768 = -1;
    OP_PUSH2_C -132324502277094320, 8311746388232223697
    var_1776 = 56;
    pri = fun_1CE8(var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720)
    var_1784 = 1;
    var_1792 = 8;
    pri = fun_1EE0(var_1784)
    var_1800 = 0;
    pri = fun_1FA0()
    var_1808 = 1;
    var_1816 = 1;
    var_1824 = -1;
    var_1832 = -1;
    var_1840 = 0;
    var_1848 = 23;
    var_1856 = 7874170534708825062;
    var_1864 = 56;
    pri = fun_4098(var_1856, var_1848, var_1840, var_1832, var_1824, var_1816, var_1808)
    var_1872 = 0;
    var_1880 = 3;
    var_1888 = 0;
    var_1896 = 100;
    var_1904 = -1;
    OP_PUSH2_C 719075542256831022, 7874170534708825062
    var_1912 = 56;
    pri = fun_1CE8(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1920 = 1;
    var_1928 = 8;
    pri = fun_1EE0(var_1920)
    var_1936 = 0;
    pri = fun_1FA0()
    var_1944 = 0;
    var_1952 = 0;
    var_1960 = -8177398779958974095;
    var_1968 = 24;
    pri = fun_8100(var_1960, var_1952, var_1944)
    var_1976 = 1;
    var_1984 = 8;
    pri = fun_0060(var_1976)
    var_1992 = -8177398779958974095;
    var_2000 = 8;
    pri = fun_0BD0(var_1992)
    var_2008 = 0;
    var_2016 = 3;
    var_2024 = 0;
    var_2032 = 100;
    var_2040 = -1;
    OP_PUSH2_C 3001743671135870698, -8177398779958974095
    var_2048 = 56;
    pri = fun_1CE8(var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2056 = 1;
    var_2064 = 8;
    pri = fun_1EE0(var_2056)
    var_2072 = 0;
    var_2080 = 130021181801362317;
    var_2088 = 0;
    var_2096 = 24;
    pri = fun_1FD0(var_2088, var_2080, var_2072)
    var_2104 = 0;
    var_2112 = 130017883266477684;
    var_2120 = 1;
    var_2128 = 24;
    pri = fun_1FD0(var_2120, var_2112, var_2104)
    var_2136 = 0;
    var_2144 = 0;
    var_2152 = 0;
    var_2160 = 1;
    var_2168 = 32;
    pri = fun_20B8(var_2160, var_2152, var_2144, var_2136)
    var_2176 = 0;
    pri = fun_1FA0()
    var_2184 = 1;
    var_2192 = -1;
    var_2200 = -1;
    var_2208 = 3;
    var_2216 = 0;
    var_2224 = 0;
    var_2232 = 8311746388232223697;
    var_2240 = 56;
    pri = fun_24B8(var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184)
    var_2248 = 5;
    var_2256 = 8;
    pri = fun_0060(var_2248)
    var_2264 = 1;
    var_2272 = -1;
    var_2280 = -1;
    var_2288 = 3;
    var_2296 = 0;
    var_2304 = 0;
    var_2312 = -8177398779958974095;
    var_2320 = 56;
    pri = fun_24B8(var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2328 = 15;
    var_2336 = 8;
    pri = fun_0060(var_2328)
    var_2344 = 1;
    var_2352 = 3;
    var_2360 = 0;
    var_2368 = 23;
    var_2376 = 7874170534708825062;
    var_2384 = 40;
    pri = fun_63D0(var_2376, var_2368, var_2360, var_2352, var_2344)
    var_2392 = 7874170534708825062;
    var_2400 = 8;
    pri = fun_0BD0(var_2392)
    var_2408 = 0;
    var_2416 = 3;
    var_2424 = 0;
    var_2432 = 100;
    var_2440 = -1;
    OP_PUSH2_C 719078840791715655, 7874170534708825062
    var_2448 = 56;
    pri = fun_1CE8(var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2456 = 1;
    var_2464 = 8;
    pri = fun_1EE0(var_2456)
    var_2472 = 0;
    pri = fun_1FA0()
    var_2480 = 0;
    var_2488 = 0;
    var_2496 = 0;
    var_2504 = 0;
    OP_PUSH2_C 7874170534708825062, 8802641224559852288
    var_2512 = 48;
    pri = fun_09A0(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2520 = 0;
    var_2528 = 0;
    var_2536 = 0;
    var_2544 = 0;
    OP_PUSH2_C 8802641224559852288, 7874170534708825062
    var_2552 = 48;
    pri = fun_09A0(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2560 = 7874170534708825062;
    var_2568 = 8;
    pri = fun_09F8(var_2560)
    var_2576 = 8802641224559852288;
    var_2584 = 8;
    pri = fun_09F8(var_2576)
    var_2592 = 1;
    var_2600 = 1;
    var_2608 = -1;
    var_2616 = -1;
    var_2624 = 0;
    var_2632 = 22;
    var_2640 = 7874170534708825062;
    var_2648 = 56;
    pri = fun_4098(var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592)
    var_2656 = 0;
    var_2664 = 3;
    var_2672 = 0;
    var_2680 = 100;
    var_2688 = -1;
    OP_PUSH2_C 719076641768459233, 7874170534708825062
    var_2696 = 56;
    pri = fun_1CE8(var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640)
    var_2704 = 1;
    var_2712 = 8;
    pri = fun_1EE0(var_2704)
    var_2720 = 0;
    pri = fun_1FA0()
    var_2728 = 0;
    var_2736 = 3;
    var_2744 = 0;
    var_2752 = 100;
    var_2760 = -1;
    OP_PUSH2_C 719077741280087444, 7874170534708825062
    var_2768 = 56;
    pri = fun_1CE8(var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712)
    var_2776 = 1;
    var_2784 = 8;
    pri = fun_1EE0(var_2776)
    var_2792 = 0;
    pri = fun_1FA0()
    var_2800 = 32496;
    pri = SoundPostEvent(var_2800)
    var_2808 = 1;
    var_2816 = 3;
    var_2824 = 0;
    var_2832 = 22;
    var_2840 = 7874170534708825062;
    var_2848 = 40;
    pri = fun_63D0(var_2840, var_2832, var_2824, var_2816, var_2808)
    var_2856 = 7874170534708825062;
    var_2864 = 8;
    pri = fun_0BD0(var_2856)
    var_2872 = 1;
    var_2880 = 0;
    var_2888 = 4641240890982006784;
    var_2896 = 0;
    var_2904 = 0;
    OP_PUSH4_C 4648506463818350592, 4648098325102120141, 4607182418800017408, 8802641224559852288
    var_2912 = 72;
    pri = fun_0868(var_2904, var_2896, var_2888, var_2880, var_2872, var_2864, var_2856, var_2848, var_2840)
    var_2920 = 1;
    var_2928 = 0;
    var_2936 = 4641240890982006784;
    var_2944 = 0;
    var_2952 = 0;
    OP_PUSH4_C 4648101843539329024, 4649975411353059328, 4607182418800017408, 7874170534708825062
    var_2960 = 72;
    pri = fun_0868(var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904, var_2896, var_2888)
    var_2968 = 10;
    var_2976 = 8;
    pri = fun_0060(var_2968)
    var_2984 = 1;
    var_2992 = 0;
    var_3000 = 32400;
    var_3008 = 8;
    var_3016 = 32;
    pri = fun_0308(var_3008, var_3000, var_2992, var_2984)
    var_3024 = 0;
    pri = fun_0378()
    var_3032 = 150;
    var_3040 = 8;
    pri = fun_0060(var_3032)
    var_3048 = 8802641224559852288;
    var_3056 = 8;
    pri = fun_09F8(var_3048)
    var_3064 = 7874170534708825062;
    var_3072 = 8;
    pri = fun_09F8(var_3064)
    var_3080 = 0;
    var_3088 = 1;
    var_3096 = 1;
    var_3104 = 0;
    var_3112 = 0;
    var_3120 = 0;
    var_3128 = 32688;
    var_3136 = 56;
    pri = fun_23C0(var_3128, var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
    pri = 0;
    return pri;
}
// fun_B338
fun_B338() {
    pri = 0;
    return pri;
}
// fun_B350
fun_B350() {
    var_8 = -8177398779958974095;
    var_16 = 8;
    pri = fun_0780(var_8)
    var_24 = 8311746388232223697;
    var_32 = 8;
    pri = fun_0780(var_24)
    var_40 = 7874170534708825062;
    var_48 = 8;
    pri = fun_0780(var_40)
    var_56 = 360;
    var_64 = 8;
    pri = fun_9798(var_56)
    var_72 = 10;
    var_80 = 1209431212022142778;
    pri = WorkSet(var_80, var_72)
    var_88 = 10;
    var_96 = 8451806550567554440;
    pri = WorkSet(var_96, var_88)
    var_112 = 10;
    var_120 = 9;
    var_128 = 11;
    var_136 = 24;
    pri = fun_9378(var_128, var_120, var_112)
    var_8 = pri;
    var_144 = var_8;
    var_152 = -1589517285228991663;
    pri = WorkSet(var_152, var_144)
    var_160 = var_8;
    pri = SetPlayerTentColor(var_160)
    var_168 = 1;
    var_176 = 1100;
    pri = ItemAdd(var_176, var_168)
    var_184 = 1;
    var_192 = 149;
    pri = ItemAdd(var_192, var_184)
    var_200 = 1;
    var_208 = 155;
    pri = ItemAdd(var_208, var_200)
    var_216 = 6156808637371898465;
    pri = FlagSet(var_216)
    pri = 0;
    return pri;
}
// fun_B598
fun_B598() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 684;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 697;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 5263936590946220341, -1682806564921577822, -8279397177875435307
    var_80 = 80;
    pri = fun_0430(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_B660
fun_B660() {
    var_8 = 0;
    pri = fun_9930()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_9948()
    var_24 = 0;
    pri = fun_99A0()
    var_32 = 0;
    pri = fun_9A30()
    var_40 = 0;
    pri = fun_9A60()
    var_48 = 0;
    pri = fun_B338()
    var_56 = 0;
    pri = fun_B350()
    var_64 = 0;
    pri = fun_B598()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_B768
fun_B768() {
    var_8 = 0;
    pri = fun_99A0()
    var_16 = 0;
    pri = fun_B350()
    pri = 0;
    return pri;
}
