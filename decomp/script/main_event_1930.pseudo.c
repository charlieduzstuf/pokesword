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
// fun_04C8
fun_04C8() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0510
// lab_0510
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0550
    OP_JUMP lab_05C0
// lab_0550
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0590
    OP_JUMP lab_05C0
// lab_0590
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0510
// lab_05C0
    pri = 0;
    return pri;
}
// fun_05D8
fun_05D8() {
    pri = arg_0;
    switch (pri) {
// switch_0780
        case default:
        {
// switch_0780_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0780_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
        case 0x1:
        {
// switch_0780_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
        case 0x2:
        {
// switch_0780_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
        case 0x3:
        {
// switch_0780_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
        case 0x4:
        {
// switch_0780_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
        case 0x5:
        {
// switch_0780_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
        case 0x6:
        {
// switch_0780_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0780_case_default
        }
    }
}
// fun_0818
fun_0818() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0870
fun_0870() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_0;
    pri = SetSkydomeVisible(var_8)
    pri = 0;
    return pri;
}
// fun_0920
fun_0920() {
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
// fun_0998
fun_0998() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1448(var_8)
    OP_JZER lab_0A68
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1478(var_24)
    OP_JNZ lab_0A68
    pri = 0;
    return pri;
// lab_0A68
    OP_JUMP lab_0A78
// lab_0A78
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0AD8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0AD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A78
    pri = 0;
    return pri;
}
// fun_0B18
fun_0B18() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0B90
fun_0B90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0C10
    pri = 0;
    return pri;
// lab_0C10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0C50
// lab_0C50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1448(var_8)
    OP_JNZ lab_0CD8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0CC8
    pri = 0;
    return pri;
// lab_0CD8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0D20
    pri = 0;
    return pri;
// lab_0D20
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0D80
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0DC8(var_8)
    pri = 0;
    return pri;
// lab_0D80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0C50
    pri = 0;
    return pri;
// lab_0CC8
    OP_JUMP lab_0D20
}
// fun_0DC8
fun_0DC8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0E00
fun_0E00() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0E50
    pri = 0;
    return pri;
// lab_0E50
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1448(var_8)
    OP_JZER lab_0F80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0EA8
    OP_ZERO_P_S 64
// lab_0F80
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FB8
    OP_CONST_S 64, 1
// lab_0FB8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0FF0
    OP_CONST_S 72, 1
// lab_0FF0
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
// lab_0EA8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_0ED0
    OP_ZERO_P_S 72
// lab_0ED0
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
    OP_JUMP lab_1090
// lab_1090
    pri = 0;
    return pri;
}
// fun_10A0
fun_10A0() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_10E0
fun_10E0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = EnableFieldObjectLookAtAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11C0
fun_11C0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1218
fun_1218() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1258
fun_1258() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1298
fun_1298() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1310
fun_1310() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1350
fun_1350() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1298(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1310(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_13F0
fun_13F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12D8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1350(var_24)
    pri = 0;
    return pri;
}
// fun_1448
fun_1448() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1478
fun_1478() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_14A8
fun_14A8() {
    OP_JUMP lab_14C0
// lab_14C0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1550
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1540
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    pri = 0;
    return pri;
// lab_1550
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15E0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_15D0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    pri = 0;
    return pri;
// lab_15E0
    pri = 0;
    return pri;
// lab_15D0
    OP_JUMP lab_15F0
// lab_15F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14C0
    pri = 0;
    return pri;
// lab_1540
    OP_JUMP lab_15F0
}
// fun_1630
fun_1630() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_14A8(var_40)
    pri = 0;
    return pri;
}
// fun_16B8
fun_16B8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1718
fun_1718() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1750
fun_1750() {
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
// switch_1D68
        case default:
        {
// switch_1D68_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1DB0
// lab_1DB0
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
            OP_JNZ lab_1E58
            var_88 = 0;
            pri = fun_2010()
// lab_1E58
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1D68_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1950
                case default:
                {
// switch_1950_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19C8
// lab_19C8
                    OP_JUMP lab_1DB0
                }
                case 0x0:
                {
// switch_1950_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_19C8
                }
                case 0x1:
                {
// switch_1950_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_19C8
                }
                case 0x2:
                {
// switch_1950_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_19C8
                }
                case 0x3:
                {
// switch_1950_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_19C8
                }
                case 0x4:
                {
// switch_1950_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_19C8
                }
                case 0x5:
                {
// switch_1950_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_19C8
                }
            }
        }
        case 0x65:
        {
// switch_1D68_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1B08
                case default:
                {
// switch_1B08_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B80
// lab_1B80
                    OP_JUMP lab_1DB0
                }
                case 0x0:
                {
// switch_1B08_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1B80
                }
                case 0x1:
                {
// switch_1B08_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1B80
                }
                case 0x2:
                {
// switch_1B08_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1B80
                }
                case 0x3:
                {
// switch_1B08_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1B80
                }
                case 0x4:
                {
// switch_1B08_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1B80
                }
                case 0x5:
                {
// switch_1B08_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1B80
                }
            }
        }
        case 0x66:
        {
// switch_1D68_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1CC0
                case default:
                {
// switch_1CC0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D38
// lab_1D38
                    OP_JUMP lab_1DB0
                }
                case 0x0:
                {
// switch_1CC0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1D38
                }
                case 0x1:
                {
// switch_1CC0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1D38
                }
                case 0x2:
                {
// switch_1CC0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1D38
                }
                case 0x3:
                {
// switch_1CC0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1D38
                }
                case 0x4:
                {
// switch_1CC0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1D38
                }
                case 0x5:
                {
// switch_1CC0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1D38
                }
            }
        }
    }
}
// fun_1E70
fun_1E70() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B90(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_1F18
    pri = 1;
    return pri;
// lab_1F18
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_1F60
fun_1F60() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1FB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1E70(var_8)
    arg_2 = pri;
// lab_1FB0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1750(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2010
fun_2010() {
    OP_JUMP lab_2028
// lab_2028
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2068
    pri = 0;
    return pri;
// lab_2068
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2028
    pri = 0;
    return pri;
}
// fun_20A8
fun_20A8() {
    var_8 = 0;
    pri = fun_2010()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2158
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_2158
    pri = 0;
    return pri;
}
// fun_2168
fun_2168() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2198
fun_2198() {
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
// fun_2200
fun_2200() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = CallWildBattle(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2248
fun_2248() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_22C0
fun_22C0() {
    var_8 = 0;
    pri = fun_2248()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2340
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2340
    pri = 1;
    return pri;
// lab_2340
    var_8 = 0;
    pri = fun_2248()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2370
fun_2370() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    OP_JUMP lab_23D8
// lab_23D8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2410
    pri = 0;
    return pri;
// lab_2410
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_23D8
    pri = 0;
    return pri;
}
// fun_2450
fun_2450() {
    pri = arg_6;
    OP_JNZ lab_2488
    var_8 = 0;
    pri = fun_10A0()
// lab_2488
    pri = arg_1;
    switch (pri) {
// switch_39F0
        case default:
        {
// switch_39F0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_3D40
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_3D40
            pri = 1;
            OP_JUMP lab_3D48
// lab_3D40
            pri = 0;
// lab_3D48
            OP_JZER lab_3EA0
            var_16 = 8368;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B90(var_24, var_16)
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
            var_64 = 8472;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_3F00
// lab_3EA0
            var_8 = 64;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_3F00
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_3F60
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_3FC0
// lab_3F60
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_3FC0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_3FC0
            pri = arg_2;
            OP_JZER lab_4000
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4000
            var_8 = 0;
            pri = fun_10E0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_39F0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1:
        {
// switch_39F0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x2:
        {
// switch_39F0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x3:
        {
// switch_39F0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x4:
        {
// switch_39F0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x5:
        {
// switch_39F0_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5656;
            var_72 = 5648;
            var_80 = 5640;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0x6:
        {
// switch_39F0_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5680;
            var_72 = 5672;
            var_80 = 5664;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0x7:
        {
// switch_39F0_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5704;
            var_72 = 5696;
            var_80 = 5688;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0x8:
        {
// switch_39F0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x9:
        {
// switch_39F0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5728;
            var_72 = 5720;
            var_80 = 5712;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0xa:
        {
// switch_39F0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5752;
            var_72 = 5744;
            var_80 = 5736;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0xb:
        {
// switch_39F0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5776;
            var_72 = 5768;
            var_80 = 5760;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0xc:
        {
// switch_39F0_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5800;
            var_72 = 5792;
            var_80 = 5784;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0xd:
        {
// switch_39F0_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5824;
            var_72 = 5816;
            var_80 = 5808;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0xe:
        {
// switch_39F0_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5848;
            var_72 = 5840;
            var_80 = 5832;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0xf:
        {
// switch_39F0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x10:
        {
// switch_39F0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x11:
        {
// switch_39F0_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5872;
            var_72 = 5864;
            var_80 = 5856;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0x12:
        {
// switch_39F0_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5896;
            var_72 = 5888;
            var_80 = 5880;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0x13:
        {
// switch_39F0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x14:
        {
// switch_39F0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x15:
        {
// switch_39F0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x16:
        {
// switch_39F0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x17:
        {
// switch_39F0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x18:
        {
// switch_39F0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x19:
        {
// switch_39F0_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 5920;
            var_72 = 5912;
            var_80 = 5904;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1a:
        {
// switch_39F0_case_0x1a
            var_8 = 1;
            var_16 = 5928;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B50(var_24, var_16, var_8)
            var_40 = 6064;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B18(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6144;
            var_88 = 6136;
            var_96 = 6128;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1b:
        {
// switch_39F0_case_0x1b
            var_8 = 3;
            var_16 = 6152;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B50(var_24, var_16, var_8)
            var_40 = 6288;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B18(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6368;
            var_88 = 6360;
            var_96 = 6352;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1c:
        {
// switch_39F0_case_0x1c
            var_8 = 2;
            var_16 = 6376;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B50(var_24, var_16, var_8)
            var_40 = 6512;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0B18(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 6592;
            var_88 = 6584;
            var_96 = 6576;
            alt = 696;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_0E00(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1d:
        {
// switch_39F0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1e:
        {
// switch_39F0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x1f:
        {
// switch_39F0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x20:
        {
// switch_39F0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x21:
        {
// switch_39F0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x22:
        {
// switch_39F0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x23:
        {
// switch_39F0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x24:
        {
// switch_39F0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x25:
        {
// switch_39F0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x26:
        {
// switch_39F0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x27:
        {
// switch_39F0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x28:
        {
// switch_39F0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
        case 0x29:
        {
// switch_39F0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_39F0_case_default
        }
    }
}
// fun_4030
fun_4030() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_4240(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 8488;
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
    var_424 = 8544;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 8560;
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
    OP_JZER lab_4228
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_4228
    pri = 0;
    return pri;
}
// fun_4240
fun_4240() {
    var_8 = arg_1;
    var_16 = 8608;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B50(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4288
fun_4288() {
    pri = 8712;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_4310
// lab_4310
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_4490
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_4480
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_43D0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_43D0
    pri = 0;
    OP_JUMP lab_43D8
// lab_4490
    pri = 0;
    return pri;
// lab_4480
    OP_JUMP lab_4308
// lab_4308
    OP_INC_P_S -936
// lab_43D0
    pri = 1;
// lab_43D8
    OP_JZER lab_4450
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_4448
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_4450
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_4448
}
// fun_44B0
fun_44B0() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_4548
    var_8 = 1;
    var_16 = 0;
    var_24 = 9632;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_16F0()
// lab_4548
    pri = arg_4;
    OP_JZER lab_4580
    var_8 = 1;
    var_16 = 8;
    pri = fun_1718(var_8)
// lab_4580
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_45D8
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_45D8
    pri = 0;
    OP_JUMP lab_45E0
// lab_45D8
    pri = 1;
// lab_45E0
    OP_JZER lab_46A8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_46A8
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_4680
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1630(var_32, var_24)
    OP_JUMP lab_46A8
// lab_46A8
    pri = arg_2;
    OP_JZER lab_4780
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_4750
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1180(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_08B0(var_40)
    OP_JUMP lab_4780
// lab_4780
    pri = arg_3;
    OP_JZER lab_47B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_16B8(var_8)
// lab_47B8
    pri = 0;
    return pri;
// lab_4750
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1180(var_16, var_8)
// lab_4680
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1630(var_16, var_8)
}
// fun_47C8
fun_47C8() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_4948
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4860
    var_8 = 1;
    var_16 = 0;
    var_24 = 9632;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_4948
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_4860
    pri = arg_0;
    OP_JNZ lab_48A8
    var_8 = 9680;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_48C8
// lab_48A8
    var_8 = 9856;
    pri = SoundPostEvent(var_8)
// lab_48C8
    var_8 = 0;
    var_16 = 8;
    pri = fun_04C8(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_4948
    var_24 = 10120;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_4988
fun_4988() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_4288(var_24)
    pri = 0;
    return pri;
}
// fun_49F0
fun_49F0() {
    pri = g_mode;
    switch (pri) {
// switch_4AB0
        case default:
        {
// switch_4AB0_case_default
            pri = CommandNOP()
            OP_JUMP lab_4AF8
// lab_4AF8
            pri = 0;
            return pri;
        }
        case 0xdde8fc2742ef39eb:
        {
// switch_4AB0_case_0xdde8fc2742ef39eb
            var_8 = 0;
            pri = fun_7380()
            OP_JUMP lab_4AF8
        }
        case 0xfbb4e62acd400ad7:
        {
// switch_4AB0_case_0xfbb4e62acd400ad7
            var_8 = 0;
            pri = fun_7290()
            OP_JUMP lab_4AF8
        }
        case 0x0:
        {
// switch_4AB0_case_0x0
            var_8 = 0;
            pri = fun_4B08()
            OP_JUMP lab_4AF8
        }
    }
}
// fun_4B08
fun_4B08() {
    pri = 0;
    return pri;
}
// fun_4B20
fun_4B20() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_44B0(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_4B78
fun_4B78() {
    pri = 0;
    return pri;
}
// fun_4B90
fun_4B90() {
    pri = 0;
    return pri;
}
// fun_4BA8
fun_4BA8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    var_32 = 6910712898869243;
    pri = WorkGet(var_32)
    OP_EQ_P_C_PRI 1990
    OP_JZER lab_4D38
    var_40 = -6864103932047271032;
    pri = FlagSet(var_40)
    var_48 = -7278861448092522080;
    pri = FlagReset(var_48)
    var_56 = -8722475237237873584;
    pri = FlagReset(var_56)
    var_64 = 6337321403593889913;
    pri = FlagReset(var_64)
    OP_CONST_S -8, 1
    var_72 = 1;
    var_80 = 0;
    var_88 = 9632;
    var_96 = 8;
    var_104 = 32;
    pri = fun_02E0(var_96, var_88, var_80, var_72)
    var_112 = 0;
    pri = fun_0350()
    OP_JUMP lab_6930
// lab_4D38
    var_8 = 1;
    var_16 = 0;
    var_24 = 9632;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 4631248529308778496;
    var_72 = 0;
    OP_PUSH5_C 4666228716590774354, 4640274376280726569, 4665812117132568166, 4666677927563860378, 4638979239544136663
    var_80 = 4666074713494629908;
    var_88 = 1;
    pri = EvCameraMove(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 0;
    pri = fun_23C0()
    var_104 = 1;
    var_112 = 1;
    OP_PUSH4_C 4640537203540230144, 4666955004494059930, 4665733612002344960, 8802641224559852288
    var_120 = 48;
    pri = fun_0818(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    OP_PUSH4_C 4640537203540230144, 4666897115206857523, 4665615524453521818, -4893233655299320911
    var_144 = 48;
    pri = fun_0818(var_136, var_128, var_120, var_112, var_104, var_96)
    var_152 = 1;
    var_160 = 1;
    var_168 = 0;
    OP_PUSH3_C 4664858400746635264, 4665666541793050624, -5689261488698659897
    var_176 = 48;
    pri = fun_0818(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 1;
    var_192 = 8802641224559852288;
    var_200 = 16;
    pri = fun_0870(var_192, var_184)
    var_208 = 1;
    var_216 = -4893233655299320911;
    var_224 = 16;
    pri = fun_0870(var_216, var_208)
    var_232 = 1;
    var_240 = -4984428124630057404;
    var_248 = 16;
    pri = fun_0870(var_240, var_232)
    var_256 = 1;
    var_264 = -785782855654695402;
    var_272 = 16;
    pri = fun_0870(var_264, var_256)
    var_280 = 1;
    var_288 = -5689261488698659897;
    var_296 = 16;
    pri = fun_0870(var_288, var_280)
    var_304 = 6;
    var_312 = 6;
    var_320 = -4984428124630057404;
    var_328 = 24;
    pri = fun_1388(var_320, var_312, var_304)
    var_336 = 0;
    var_344 = 1;
    var_352 = -4984428124630057404;
    var_360 = 24;
    pri = fun_4030(var_352, var_344, var_336)
    var_368 = 1;
    var_376 = 1;
    var_384 = -1;
    var_392 = -40;
    pri = float(var_392)
    var_400 = pri;
    var_408 = 0;
    pri = float(var_408)
    var_416 = pri;
    var_424 = -4984428124630057404;
    var_432 = 48;
    pri = fun_1120(var_424, var_416, var_408, var_400, var_392, var_384)
    var_440 = 15;
    var_448 = 8;
    pri = fun_0060(var_440)
    var_456 = 0;
    var_464 = 4631248529308778496;
    var_472 = 2;
    OP_PUSH5_C 4666247237864144241, 4640274376280726569, 4665780434705013801, 4666696564285951181, 4638979943231578440
    var_480 = 4666042838652540682;
    var_488 = 240;
    pri = EvCameraMove(var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416)
    var_496 = 10120;
    var_504 = 8;
    var_512 = 16;
    pri = fun_0280(var_504, var_496)
    var_520 = 0;
    pri = fun_0350()
    var_528 = 75;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_544 = 1;
    var_552 = 0;
    var_560 = 10168;
    var_568 = 1;
    var_576 = 32;
    pri = fun_02E0(var_568, var_560, var_552, var_544)
    var_584 = 0;
    pri = fun_0350()
    var_592 = 0;
    var_600 = 4628687107020711526;
    var_608 = 0;
    OP_PUSH5_C 4665643353092820828, 4648712204434140037, 4665854860647097958, 4665882051569652859, 4649465062035910820
    var_616 = 4666416056879472968;
    var_624 = 1;
    pri = EvCameraMove(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552)
    var_632 = 0;
    pri = fun_23C0()
    var_640 = 0;
    var_648 = 4628855992006737920;
    var_656 = 0;
    OP_PUSH5_C 4665252905518681293, 4648241877340242575, 4665943734171971092, 4665860539624655421, 4649112602588510945
    var_664 = 4666526288417715651;
    var_672 = 240;
    pri = EvCameraMove(var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_680 = 10216;
    var_688 = 15;
    var_696 = 16;
    pri = fun_0280(var_688, var_680)
    var_704 = 0;
    pri = fun_0350()
    var_712 = 120;
    var_720 = 8;
    pri = fun_0060(var_712)
    var_728 = 1;
    var_736 = 0;
    var_744 = 10264;
    var_752 = 1;
    var_760 = 32;
    pri = fun_02E0(var_752, var_744, var_736, var_728)
    var_768 = 0;
    pri = fun_0350()
    var_776 = 0;
    var_784 = 4630910759336725709;
    var_792 = 0;
    OP_PUSH5_C 4665846130524773417, 4648568564235087380, 4665804211643964457, 4666247611698097684, 4649547041622877798
    var_800 = 4665958511608248402;
    var_808 = 1;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 0;
    pri = fun_23C0()
    OP_PUSH2_C -4605380978949069210, 4630010039411251610
    var_824 = 2;
    OP_PUSH5_C 4665841430112564675, 4648960957944808079, 4665806691042685092, 4666291421738906419, 4650059589963281859
    var_832 = 4665979869621617951;
    var_840 = 120;
    pri = EvCameraMove(var_840, var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768)
    var_848 = 10312;
    var_856 = 15;
    var_864 = 16;
    pri = fun_0280(var_856, var_848)
    var_872 = 0;
    pri = fun_0350()
    var_880 = 0;
    var_888 = 3;
    var_896 = 0;
    var_904 = 890;
    pri = SoundPlayPokeVoice(var_904, var_896, var_888, var_880)
    var_912 = 1;
    var_920 = -1;
    var_928 = -1;
    var_936 = 3;
    var_944 = 0;
    var_952 = 38;
    var_960 = -5689261488698659897;
    var_968 = 56;
    pri = fun_2450(var_960, var_952, var_944, var_936, var_928, var_920, var_912)
    var_976 = 0;
    pri = fun_23C0()
    var_984 = 1;
    var_992 = 0;
    var_1000 = 50;
    pri = float(var_1000)
    var_1008 = pri;
    var_1016 = 0;
    pri = float(var_1016)
    var_1024 = pri;
    var_1032 = 0;
    OP_PUSH4_C 4666647141238282650, 4665733612002344960, 4611686018427387904, 8802641224559852288
    var_1040 = 72;
    pri = fun_0920(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 1;
    var_1056 = 0;
    var_1064 = 50;
    pri = float(var_1064)
    var_1072 = pri;
    var_1080 = 0;
    pri = float(var_1080)
    var_1088 = pri;
    var_1096 = 0;
    OP_PUSH4_C 4666605744625496883, 4665615524453521818, 4611686018427387904, -4893233655299320911
    var_1104 = 72;
    pri = fun_0920(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 10;
    var_1120 = 8;
    pri = fun_0060(var_1112)
    var_1128 = 0;
    var_1136 = 4630263366890291200;
    var_1144 = 0;
    OP_PUSH5_C 4666666223262582702, 4621436311620645028, 4665586904165850808, 4666166770105665454, 4639583003369181020
    var_1152 = 4665553731900040806;
    var_1160 = 1;
    pri = EvCameraMove(var_1160, var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088)
    var_1168 = 0;
    pri = fun_23C0()
    var_1176 = 0;
    var_1184 = 4630263366890291200;
    var_1192 = 2;
    OP_PUSH5_C 4666665849428629258, 4621436311620645028, 4665609675051662049, 4666166396271712010, 4639583003369181020
    var_1200 = 4665576502785852047;
    var_1208 = 240;
    pri = EvCameraMove(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1216 = 30;
    var_1224 = 8;
    pri = fun_0060(var_1216)
    var_1232 = -4984428124630057404;
    var_1240 = 8;
    pri = fun_1258(var_1232)
    var_1248 = 0;
    var_1256 = 5;
    var_1264 = 0;
    pri = float(var_1264)
    var_1272 = pri;
    OP_PUSH2_C 4607182418800017408, -4984428124630057404
    var_1280 = 40;
    pri = fun_11C0(var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1288 = 10;
    var_1296 = 8;
    pri = fun_0060(var_1288)
    var_1304 = 1;
    var_1312 = 0;
    var_1320 = 15;
    var_1328 = 0;
    var_1336 = -40;
    pri = float(var_1336)
    var_1344 = pri;
    var_1352 = -4984428124630057404;
    var_1360 = 48;
    pri = fun_1120(var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1368 = 15;
    var_1376 = 8;
    pri = fun_0060(var_1368)
    var_1384 = -4893233655299320911;
    var_1392 = 8;
    pri = fun_09F0(var_1384)
    var_1400 = 8802641224559852288;
    var_1408 = 8;
    pri = fun_09F0(var_1400)
    var_1416 = 0;
    var_1424 = 4629221909476461773;
    var_1432 = 0;
    OP_PUSH5_C 4666238298834610422, 4621053505652318536, 4665523209457253745, 4666731479277691208, 4638841668649269330
    var_1440 = 4665703309461883453;
    var_1448 = 1;
    pri = EvCameraMove(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1456 = 0;
    pri = fun_23C0()
    var_1464 = 0;
    var_1472 = 4629221909476461773;
    var_1480 = 2;
    OP_PUSH5_C 4666236578098912952, 4621053505652318536, 4665542022101204992, 4666729786029784433, 4638838853899502223
    var_1488 = 4665722012154671923;
    var_1496 = 240;
    pri = EvCameraMove(var_1496, var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1504 = 20;
    var_1512 = 8;
    pri = fun_0060(var_1504)
    var_1520 = 0;
    var_1528 = 3;
    var_1536 = 0;
    var_1544 = 100;
    var_1552 = -1;
    OP_PUSH2_C 3312491763174151389, -4984428124630057404
    var_1560 = 56;
    pri = fun_1F60(var_1552, var_1544, var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1568 = -4984428124630057404;
    var_1576 = 8;
    pri = fun_09F0(var_1568)
    var_1584 = 1;
    var_1592 = 8;
    pri = fun_20A8(var_1584)
    var_1600 = 0;
    var_1608 = 4626716782183736934;
    var_1616 = 0;
    OP_PUSH5_C 4666279057730652078, 4638926462986003415, 4665720318906765148, 4666254703548096840, 4639214974837131837
    var_1624 = 4665208353307523809;
    var_1632 = 1;
    pri = EvCameraMove(var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576, var_1568, var_1560)
    var_1640 = 0;
    pri = fun_23C0()
    var_1648 = 0;
    var_1656 = 4626716782183736934;
    var_1664 = 2;
    OP_PUSH5_C 4666270591491118203, 4638926462986003415, 4665721935188857979, 4666246237308562964, 4639214974837131837
    var_1672 = 4665209969589616640;
    var_1680 = 240;
    pri = EvCameraMove(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1688 = 1;
    var_1696 = 1;
    var_1704 = 20;
    var_1712 = -40;
    pri = float(var_1712)
    var_1720 = pri;
    var_1728 = 0;
    pri = float(var_1728)
    var_1736 = pri;
    var_1744 = -4984428124630057404;
    var_1752 = 48;
    pri = fun_1120(var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1760 = 10;
    var_1768 = -4984428124630057404;
    var_1776 = 16;
    pri = fun_1218(var_1768, var_1760)
    var_1784 = 10;
    var_1792 = 8;
    pri = fun_0060(var_1784)
    var_1800 = 0;
    var_1808 = 3;
    var_1816 = 0;
    var_1824 = 100;
    var_1832 = -1;
    OP_PUSH2_C 3312488464639266756, -4984428124630057404
    var_1840 = 56;
    pri = fun_1F60(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1848 = 1;
    var_1856 = 8;
    pri = fun_20A8(var_1848)
    var_1864 = 0;
    var_1872 = 4630812243094876979;
    var_1880 = 0;
    OP_PUSH5_C 4666278452999256801, 4638850112898570650, 4665679658966769992, 4666555595900154020, 4633282186015512986
    var_1888 = 4665747586795133993;
    var_1896 = 1;
    pri = EvCameraMove(var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824)
    var_1904 = 0;
    pri = fun_23C0()
    var_1912 = 0;
    var_1920 = 4630812243094876979;
    var_1928 = 2;
    OP_PUSH5_C 4666274505752513085, 4638850112898570650, 4665729785701880300, 4666551648653410304, 4633294852389464965
    var_1936 = 4665772936035712369;
    var_1944 = 240;
    pri = EvCameraMove(var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1952 = 0;
    var_1960 = 3;
    var_1968 = 0;
    var_1976 = 100;
    var_1984 = -1;
    OP_PUSH2_C 3312489564150894967, -4984428124630057404
    var_1992 = 56;
    pri = fun_1F60(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936)
    var_2000 = 1;
    var_2008 = 8;
    pri = fun_20A8(var_2000)
    var_2016 = 0;
    var_2024 = 4630812243094876979;
    var_2032 = 0;
    OP_PUSH5_C 4666122740162531164, 4643026849709235896, 4665522329847951524, 4665053882918937559, 4650994262807821681
    var_2040 = 4665966147716503306;
    var_2048 = 1;
    pri = EvCameraMove(var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2056 = 0;
    pri = fun_23C0()
    var_2064 = 0;
    var_2072 = 4630812243094876979;
    var_2080 = 2;
    OP_PUSH5_C 4666127297638228296, 4643491107498948035, 4665518085733068308, 4664929143324766372, 4651690737453320110
    var_2088 = 4665995180321034732;
    var_2096 = 30;
    pri = EvCameraMove(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032, var_2024)
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = 0;
    var_2128 = 0;
    OP_PUSH2_C -5689261488698659897, -4984428124630057404
    var_2136 = 48;
    pri = fun_0998(var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2144 = 8;
    var_2152 = 5;
    var_2160 = 0;
    pri = float(var_2160)
    var_2168 = pri;
    var_2176 = 0;
    pri = float(var_2176)
    var_2184 = pri;
    var_2192 = -4984428124630057404;
    var_2200 = 40;
    pri = fun_11C0(var_2192, var_2184, var_2176, var_2168, var_2160)
    var_2208 = -1;
    var_2216 = -4984428124630057404;
    var_2224 = 16;
    pri = fun_1180(var_2216, var_2208)
    var_2232 = 0;
    var_2240 = 3;
    var_2248 = 0;
    var_2256 = 100;
    var_2264 = -1;
    OP_PUSH2_C 3312486265616010334, -4984428124630057404
    var_2272 = 56;
    pri = fun_1F60(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2280 = -4984428124630057404;
    var_2288 = 8;
    pri = fun_09F0(var_2280)
    var_2296 = 1;
    var_2304 = 8;
    pri = fun_20A8(var_2296)
    var_2312 = 0;
    pri = fun_2168()
    var_2320 = 1;
    var_2328 = 0;
    var_2336 = 9632;
    var_2344 = 8;
    var_2352 = 32;
    pri = fun_02E0(var_2344, var_2336, var_2328, var_2320)
    var_2360 = 0;
    pri = fun_0350()
    var_2368 = 0;
    var_2376 = 8802641224559852288;
    var_2384 = 16;
    pri = fun_0870(var_2376, var_2368)
    var_2392 = 0;
    var_2400 = -4893233655299320911;
    var_2408 = 16;
    pri = fun_0870(var_2400, var_2392)
    var_2416 = 0;
    var_2424 = -4984428124630057404;
    var_2432 = 16;
    pri = fun_0870(var_2424, var_2416)
    var_2440 = 0;
    var_2448 = -785782855654695402;
    var_2456 = 16;
    pri = fun_0870(var_2448, var_2440)
    var_2464 = 0;
    var_2472 = -5689261488698659897;
    var_2480 = 16;
    pri = fun_0870(var_2472, var_2464)
    var_2488 = -4984428124630057404;
    var_2496 = 8;
    pri = fun_13F0(var_2488)
    var_2504 = 481;
    var_2512 = 286202645854649903;
    pri = WorkSet(var_2512, var_2504)
    var_2520 = 0;
    var_2528 = 0;
    var_2536 = 1;
    var_2544 = 0;
    var_2552 = 0;
    var_2560 = 0;
    var_2568 = 10360;
    var_2576 = 56;
    pri = fun_2198(var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2584 = -6558255628817937377;
    pri = FlagSet(var_2584)
    var_2592 = 4;
    var_2600 = -1;
    var_2608 = 1675509251517724901;
    var_2616 = 24;
    pri = fun_2200(var_2608, var_2600, var_2592)
    var_2624 = 890;
    var_2632 = 4;
    var_2640 = 10400;
    pri = PokeMemoryCheckParty(var_2640, var_2632, var_2624)
    var_2648 = 0;
    pri = fun_22C0()
    OP_JZER lab_65D0
    var_2656 = 0;
    pri = fun_2370()
// lab_65D0
    pri = PokePartyRecoverAll()
    var_8 = -6864103932047271032;
    pri = FlagSet(var_8)
    var_16 = 581;
    var_24 = 286202645854649903;
    pri = WorkSet(var_24, var_16)
    var_32 = -7278861448092522080;
    pri = FlagReset(var_32)
    var_40 = -8722475237237873584;
    pri = FlagReset(var_40)
    var_48 = 6337321403593889913;
    pri = FlagReset(var_48)
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 10560;
    var_112 = 56;
    pri = fun_2198(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = -6558250131259796322;
    pri = FlagSet(var_120)
    var_128 = 4;
    var_136 = 48;
    var_144 = 1675505952982840268;
    var_152 = 24;
    pri = fun_2200(var_144, var_136, var_128)
    var_160 = 0;
    pri = fun_22C0()
    OP_JZER lab_6898
    var_168 = 1;
    var_176 = 8;
    pri = fun_08E8(var_168)
    var_184 = -6864103932047271032;
    pri = FlagReset(var_184)
    var_192 = 481;
    var_200 = 286202645854649903;
    pri = WorkSet(var_200, var_192)
    var_208 = -7278861448092522080;
    pri = FlagSet(var_208)
    var_216 = -8722475237237873584;
    pri = FlagSet(var_216)
    var_224 = 6337321403593889913;
    pri = FlagSet(var_224)
    var_232 = 0;
    pri = fun_2370()
// lab_6898
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 10600;
    var_64 = 56;
    pri = fun_2198(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1990;
    var_80 = 8;
    pri = fun_4988(var_72)
    var_88 = 7294458182468210252;
    pri = FlagSet(var_88)
// lab_6930
    OP_LCTRL 5
    OP_ADD_C -8
    OP_SCTRL 4
    var_8 = 581;
    var_16 = 286202645854649903;
    pri = WorkSet(var_16, var_8)
    var_24 = -7548067192627840535;
    pri = FlagSet(var_24)
    var_32 = -6558249031748168111;
    pri = FlagSet(var_32)
    OP_CONST_S -16, 4
    pri = var_8;
    OP_JNZ lab_6A18
// lab_6A18
    var_8 = var_16;
    var_16 = 32;
    var_24 = 1675507052494468479;
    var_32 = 24;
    pri = fun_2200(var_24, var_16, var_8)
    var_40 = 0;
    pri = fun_22C0()
    OP_JZER lab_6B00
    var_48 = 1;
    var_56 = 8;
    pri = fun_08E8(var_48)
    var_64 = 1;
    var_72 = 2;
    var_80 = 16;
    pri = fun_47C8(var_72, var_64)
    var_88 = -7548067192627840535;
    pri = FlagReset(var_88)
    var_96 = 0;
    pri = fun_2370()
// lab_6B00
    pri = 0;
    return pri;
}
// fun_6B18
fun_6B18() {
    pri = 0;
    return pri;
}
// fun_6B30
fun_6B30() {
    var_8 = 2020;
    var_16 = 8;
    pri = fun_4988(var_8)
    var_24 = 7294458182468210252;
    pri = FlagSet(var_24)
    var_32 = -2039142712897586641;
    pri = VanishFlagSet(var_32)
    var_40 = 1514373463937579588;
    pri = VanishFlagSet(var_40)
    var_48 = -4984428124630057404;
    pri = VanishFlagSet(var_48)
    var_56 = -4893233655299320911;
    pri = VanishFlagSet(var_56)
    var_64 = -785782855654695402;
    pri = VanishFlagSet(var_64)
    var_72 = -5689261488698659897;
    pri = VanishFlagSet(var_72)
    var_80 = 3896444167467819354;
    pri = VanishFlagSet(var_80)
    var_88 = -2424754999503323182;
    pri = VanishFlagSet(var_88)
    var_96 = -4661849163373684695;
    pri = VanishFlagReset(var_96)
    var_104 = -122628567419652549;
    pri = VanishFlagReset(var_104)
    var_112 = -1748623951613131052;
    pri = VanishFlagReset(var_112)
    var_120 = 7356533311563781232;
    pri = VanishFlagReset(var_120)
    var_128 = 1483708011585131345;
    pri = VanishFlagReset(var_128)
    var_136 = -122636264001050026;
    pri = VanishFlagReset(var_136)
    var_144 = 2375970181849788458;
    pri = VanishFlagReset(var_144)
    var_152 = -8764591052235238938;
    pri = VanishFlagReset(var_152)
    var_160 = 7154490619122646225;
    pri = VanishFlagReset(var_160)
    var_168 = -4318590674611970841;
    pri = VanishFlagReset(var_168)
    var_176 = 2783038146703910472;
    pri = VanishFlagReset(var_176)
    var_184 = -4302906878504062438;
    pri = VanishFlagReset(var_184)
    var_192 = -4689337920581802424;
    pri = VanishFlagReset(var_192)
    var_200 = 3902381536102020823;
    pri = VanishFlagReset(var_200)
    var_208 = 7432978969316161588;
    pri = VanishFlagReset(var_208)
    var_216 = -7103632191647310716;
    pri = VanishFlagReset(var_216)
    var_224 = -4302913475573831704;
    pri = VanishFlagReset(var_224)
    var_232 = 3902383735125277245;
    pri = VanishFlagReset(var_232)
    var_240 = 3728213071223358512;
    pri = VanishFlagReset(var_240)
    var_248 = 7116314638901664256;
    pri = VanishFlagReset(var_248)
    var_256 = 279354136510782265;
    pri = VanishFlagReset(var_256)
    var_264 = 577590369271743373;
    pri = VanishFlagReset(var_264)
    var_272 = 7469020547458231139;
    pri = VanishFlagReset(var_272)
    var_280 = -2125369913008984214;
    pri = VanishFlagReset(var_280)
    var_288 = 6172501094173624636;
    pri = VanishFlagReset(var_288)
    var_296 = 3007037875693876706;
    pri = VanishFlagReset(var_296)
    var_304 = -6999552590956808638;
    pri = FlagSet(var_304)
    var_312 = -6558255628817937377;
    pri = FlagSet(var_312)
    var_320 = -6558250131259796322;
    pri = FlagSet(var_320)
    var_328 = -6558249031748168111;
    pri = FlagSet(var_328)
    var_336 = 2;
    var_344 = 8;
    pri = fun_05D8(var_336)
    var_352 = 6976410510322452451;
    pri = FlagReset(var_352)
    pri = 0;
    return pri;
}
// fun_71C8
fun_71C8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 0;
    var_48 = 4900;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 6100;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C -935838431704349219, 5475743609293200544, 9174658253980704894
    var_80 = 80;
    pri = fun_0408(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_7290
fun_7290() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_4B20()
    var_16 = 0;
    pri = fun_4B78()
    var_24 = 0;
    pri = fun_4B90()
    var_32 = 0;
    pri = fun_4BA8()
    var_40 = 0;
    pri = fun_6B18()
    var_48 = 0;
    pri = fun_6B30()
    var_56 = 0;
    pri = fun_71C8()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_7380
fun_7380() {
    var_8 = 0;
    pri = fun_4B78()
    var_16 = 0;
    pri = fun_6B30()
    var_24 = -7548067192627840535;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
