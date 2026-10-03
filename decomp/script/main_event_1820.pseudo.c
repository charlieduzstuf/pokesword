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
    pri = fun_0780()
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
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_07A8
fun_07A8() {
    OP_JUMP lab_07C0
// lab_07C0
    pri = IsAnyLoadingFieldTerrainChip_()
    OP_JNZ lab_07F8
    pri = 0;
    return pri;
// lab_07F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07C0
    pri = 0;
    return pri;
}
// fun_0838
fun_0838() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0908
fun_0908() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0940
fun_0940() {
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
// fun_09B8
fun_09B8() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A10
fun_0A10() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AB8
fun_0AB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1430(var_8)
    OP_JZER lab_0B30
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1460(var_24)
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
    pri = fun_1430(var_8)
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
    pri = fun_1430(var_8)
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1240
fun_1240() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1280
fun_1280() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12C0
fun_12C0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1338
fun_1338() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1370
fun_1370() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1280(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_12F8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12C0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1338(var_24)
    pri = 0;
    return pri;
}
// fun_1430
fun_1430() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1460
fun_1460() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1490
fun_1490() {
    OP_JUMP lab_14A8
// lab_14A8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1538
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1528
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_1538
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_15C8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_15B8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    pri = 0;
    return pri;
// lab_15C8
    pri = 0;
    return pri;
// lab_15B8
    OP_JUMP lab_15D8
// lab_15D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_14A8
    pri = 0;
    return pri;
// lab_1528
    OP_JUMP lab_15D8
}
// fun_1618
fun_1618() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1490(var_40)
    pri = 0;
    return pri;
}
// fun_16A0
fun_16A0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_16D8
fun_16D8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1700
fun_1700() {
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
// fun_17D0
fun_17D0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
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
// switch_1E20
        case default:
        {
// switch_1E20_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1E68
// lab_1E68
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
            OP_JNZ lab_1F10
            var_88 = 0;
            pri = fun_21E0()
// lab_1F10
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1E20_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1A08
                case default:
                {
// switch_1A08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A80
// lab_1A80
                    OP_JUMP lab_1E68
                }
                case 0x0:
                {
// switch_1A08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1A80
                }
                case 0x1:
                {
// switch_1A08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1A80
                }
                case 0x2:
                {
// switch_1A08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1A80
                }
                case 0x3:
                {
// switch_1A08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1A80
                }
                case 0x4:
                {
// switch_1A08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1A80
                }
                case 0x5:
                {
// switch_1A08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1A80
                }
            }
        }
        case 0x65:
        {
// switch_1E20_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1BC0
                case default:
                {
// switch_1BC0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C38
// lab_1C38
                    OP_JUMP lab_1E68
                }
                case 0x0:
                {
// switch_1BC0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1C38
                }
                case 0x1:
                {
// switch_1BC0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1C38
                }
                case 0x2:
                {
// switch_1BC0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1C38
                }
                case 0x3:
                {
// switch_1BC0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1C38
                }
                case 0x4:
                {
// switch_1BC0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1C38
                }
                case 0x5:
                {
// switch_1BC0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1C38
                }
            }
        }
        case 0x66:
        {
// switch_1E20_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1D78
                case default:
                {
// switch_1D78_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DF0
// lab_1DF0
                    OP_JUMP lab_1E68
                }
                case 0x0:
                {
// switch_1D78_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1DF0
                }
                case 0x1:
                {
// switch_1D78_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1DF0
                }
                case 0x2:
                {
// switch_1D78_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1DF0
                }
                case 0x3:
                {
// switch_1D78_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1DF0
                }
                case 0x4:
                {
// switch_1D78_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1DF0
                }
                case 0x5:
                {
// switch_1D78_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1DF0
                }
            }
        }
    }
}
// fun_1F28
fun_1F28() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1808(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1F90
fun_1F90() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0C58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2038
    pri = 1;
    return pri;
// lab_2038
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2080
fun_2080() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_20D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1F90(var_8)
    arg_2 = pri;
// lab_20D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1808(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2130
fun_2130() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1F28(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2180
fun_2180() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2130(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_21E0
fun_21E0() {
    OP_JUMP lab_21F8
// lab_21F8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2238
    pri = 0;
    return pri;
// lab_2238
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_21F8
    pri = 0;
    return pri;
}
// fun_2278
fun_2278() {
    var_8 = 0;
    pri = fun_21E0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2328
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2328
    pri = 0;
    return pri;
}
// fun_2338
fun_2338() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2368
fun_2368() {
    pri = MsgWinEmpty_()
    OP_JUMP lab_2398
// lab_2398
    pri = MsgWinLoadWait_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_23D8
    OP_JUMP lab_2408
// lab_23D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2398
// lab_2408
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 0;
    pri = ListMenuAdd_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2450
fun_2450() {
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
// fun_24C0
fun_24C0() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_24F8
fun_24F8() {
    OP_JUMP lab_2510
// lab_2510
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2558
    OP_JUMP lab_2588
    OP_JUMP lab_2578
// lab_2558
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2588
    pri = 0;
    return pri;
// lab_2578
    OP_JUMP lab_2510
}
// fun_2598
fun_2598() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_25C8
fun_25C8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2618
fun_2618() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26B8
fun_26B8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2708
fun_2708() {
    OP_JUMP lab_2720
// lab_2720
    pri = EvCameraMoveWait_()
    OP_JZER lab_2758
    pri = 0;
    return pri;
// lab_2758
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2720
    pri = 0;
    return pri;
}
// fun_2798
fun_2798() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2800(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_28D8()
    pri = 0;
    return pri;
}
// fun_2800
fun_2800() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2858
fun_2858() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2800(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_28D8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_28D8
fun_28D8() {
    OP_JUMP lab_28F0
// lab_28F0
    pri = IsEasingRunningDof_()
    OP_JZER lab_2948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2958
// lab_2948
    pri = 0;
    return pri;
// lab_2958
    OP_JUMP lab_28F0
    pri = 0;
    return pri;
}
// fun_2978
fun_2978() {
    pri = arg_6;
    OP_JNZ lab_29B0
    var_8 = 0;
    pri = fun_1168()
// lab_29B0
    pri = arg_1;
    switch (pri) {
// switch_3F18
        case default:
        {
// switch_3F18_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
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
            OP_JZER lab_43C8
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
            OP_JUMP lab_4428
// lab_43C8
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
// lab_4428
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4488
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_44E8
// lab_4488
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_44E8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_44E8
            pri = arg_2;
            OP_JZER lab_4528
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4528
            var_8 = 0;
            pri = fun_11A8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3F18_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x1:
        {
// switch_3F18_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x2:
        {
// switch_3F18_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x3:
        {
// switch_3F18_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x4:
        {
// switch_3F18_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x5:
        {
// switch_3F18_case_0x5
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x6:
        {
// switch_3F18_case_0x6
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x7:
        {
// switch_3F18_case_0x7
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x8:
        {
// switch_3F18_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x9:
        {
// switch_3F18_case_0x9
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
            OP_JUMP switch_3F18_case_default
        }
        case 0xa:
        {
// switch_3F18_case_0xa
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
            OP_JUMP switch_3F18_case_default
        }
        case 0xb:
        {
// switch_3F18_case_0xb
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
            OP_JUMP switch_3F18_case_default
        }
        case 0xc:
        {
// switch_3F18_case_0xc
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
            OP_JUMP switch_3F18_case_default
        }
        case 0xd:
        {
// switch_3F18_case_0xd
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
            OP_JUMP switch_3F18_case_default
        }
        case 0xe:
        {
// switch_3F18_case_0xe
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
            OP_JUMP switch_3F18_case_default
        }
        case 0xf:
        {
// switch_3F18_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x10:
        {
// switch_3F18_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x11:
        {
// switch_3F18_case_0x11
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x12:
        {
// switch_3F18_case_0x12
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x13:
        {
// switch_3F18_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x14:
        {
// switch_3F18_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x15:
        {
// switch_3F18_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x16:
        {
// switch_3F18_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x17:
        {
// switch_3F18_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x18:
        {
// switch_3F18_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x19:
        {
// switch_3F18_case_0x19
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x1a:
        {
// switch_3F18_case_0x1a
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x1b:
        {
// switch_3F18_case_0x1b
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x1c:
        {
// switch_3F18_case_0x1c
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
            OP_JUMP switch_3F18_case_default
        }
        case 0x1d:
        {
// switch_3F18_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x1e:
        {
// switch_3F18_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x1f:
        {
// switch_3F18_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x20:
        {
// switch_3F18_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x21:
        {
// switch_3F18_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x22:
        {
// switch_3F18_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x23:
        {
// switch_3F18_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x24:
        {
// switch_3F18_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x25:
        {
// switch_3F18_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x26:
        {
// switch_3F18_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x27:
        {
// switch_3F18_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x28:
        {
// switch_3F18_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
        case 0x29:
        {
// switch_3F18_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3F18_case_default
        }
    }
}
// fun_4558
fun_4558() {
    pri = arg_5;
    OP_JNZ lab_4590
    var_8 = 0;
    pri = fun_1168()
// lab_4590
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_45E0
    OP_CONST_S -8, -1
// lab_45E0
    pri = arg_1;
    switch (pri) {
// switch_6098
        case default:
        {
// switch_6098_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6540
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0C58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6540
            pri = 1;
            OP_JUMP lab_6548
// lab_6540
            pri = 0;
// lab_6548
            OP_JZER lab_6598
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_67F0
// lab_6598
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6600
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6600
            pri = 1;
            OP_JUMP lab_6608
// lab_6600
            pri = 0;
// lab_6608
            OP_JZER lab_6790
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
            OP_JUMP lab_67F0
// lab_6790
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
// lab_67F0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6860
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6860
            var_8 = 0;
            pri = fun_11A8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6098_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x1:
        {
// switch_6098_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x2:
        {
// switch_6098_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x3:
        {
// switch_6098_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x4:
        {
// switch_6098_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x5:
        {
// switch_6098_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E90(var_40)
            OP_JUMP switch_6098_case_default
        }
        case 0x6:
        {
// switch_6098_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x7:
        {
// switch_6098_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x8:
        {
// switch_6098_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x9:
        {
// switch_6098_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0xa:
        {
// switch_6098_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0xb:
        {
// switch_6098_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0xc:
        {
// switch_6098_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0xd:
        {
// switch_6098_case_0xd
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
            OP_JUMP switch_6098_case_default
        }
        case 0xe:
        {
// switch_6098_case_0xe
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
            OP_JUMP switch_6098_case_default
        }
        case 0xf:
        {
// switch_6098_case_0xf
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
            OP_JUMP switch_6098_case_default
        }
        case 0x10:
        {
// switch_6098_case_0x10
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
            OP_JUMP switch_6098_case_default
        }
        case 0x11:
        {
// switch_6098_case_0x11
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
            OP_JUMP switch_6098_case_default
        }
        case 0x12:
        {
// switch_6098_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x13:
        {
// switch_6098_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x14:
        {
// switch_6098_case_0x14
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
            OP_JUMP switch_6098_case_default
        }
        case 0x15:
        {
// switch_6098_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x16:
        {
// switch_6098_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x17:
        {
// switch_6098_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x18:
        {
// switch_6098_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x19:
        {
// switch_6098_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x1a:
        {
// switch_6098_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x1b:
        {
// switch_6098_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x1c:
        {
// switch_6098_case_0x1c
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
            OP_JUMP switch_6098_case_default
        }
        case 0x1d:
        {
// switch_6098_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x1e:
        {
// switch_6098_case_0x1e
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
            OP_JUMP switch_6098_case_default
        }
        case 0x1f:
        {
// switch_6098_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x20:
        {
// switch_6098_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x21:
        {
// switch_6098_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x22:
        {
// switch_6098_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x23:
        {
// switch_6098_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x24:
        {
// switch_6098_case_0x24
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
            OP_JUMP switch_6098_case_default
        }
        case 0x25:
        {
// switch_6098_case_0x25
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
            OP_JUMP switch_6098_case_default
        }
        case 0x26:
        {
// switch_6098_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x27:
        {
// switch_6098_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x28:
        {
// switch_6098_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x29:
        {
// switch_6098_case_0x29
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
            OP_JUMP switch_6098_case_default
        }
        case 0x2a:
        {
// switch_6098_case_0x2a
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
            OP_JUMP switch_6098_case_default
        }
        case 0x2b:
        {
// switch_6098_case_0x2b
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
            OP_JUMP switch_6098_case_default
        }
        case 0x2c:
        {
// switch_6098_case_0x2c
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
            OP_JUMP switch_6098_case_default
        }
        case 0x2d:
        {
// switch_6098_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x2e:
        {
// switch_6098_case_0x2e
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
            OP_JUMP switch_6098_case_default
        }
        case 0x2f:
        {
// switch_6098_case_0x2f
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
            OP_JUMP switch_6098_case_default
        }
        case 0x30:
        {
// switch_6098_case_0x30
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
            OP_JUMP switch_6098_case_default
        }
        case 0x31:
        {
// switch_6098_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x32:
        {
// switch_6098_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x33:
        {
// switch_6098_case_0x33
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
            OP_JUMP switch_6098_case_default
        }
        case 0x34:
        {
// switch_6098_case_0x34
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
            OP_JUMP switch_6098_case_default
        }
        case 0x35:
        {
// switch_6098_case_0x35
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
            OP_JUMP switch_6098_case_default
        }
        case 0x36:
        {
// switch_6098_case_0x36
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
            OP_JUMP switch_6098_case_default
        }
        case 0x37:
        {
// switch_6098_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x38:
        {
// switch_6098_case_0x38
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
            OP_JUMP switch_6098_case_default
        }
        case 0x39:
        {
// switch_6098_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x3a:
        {
// switch_6098_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x3b:
        {
// switch_6098_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x3c:
        {
// switch_6098_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x3d:
        {
// switch_6098_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
        case 0x3e:
        {
// switch_6098_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            OP_JUMP switch_6098_case_default
        }
    }
}
// fun_6890
fun_6890() {
    pri = arg_4;
    OP_JNZ lab_68C8
    var_8 = 0;
    pri = fun_1168()
// lab_68C8
    pri = arg_1;
    switch (pri) {
// switch_7CA0
        case default:
        {
// switch_7CA0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1430(var_264)
            OP_JZER lab_8268
            pri = arg_3;
            switch (pri) {
// switch_8210
                case default:
                {
// switch_8210_case_default
                    OP_JUMP lab_8520
// lab_8520
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8590
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8590
                    var_8 = 0;
                    pri = fun_11A8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8210_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8210_case_default
                }
                case 0x2:
                {
// switch_8210_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8210_case_default
                }
                case 0x3:
                {
// switch_8210_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8210_case_default
                }
            }
// lab_8268
            pri = arg_1;
            OP_JZER lab_82B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_82B8
            pri = 0;
            OP_JUMP lab_82C0
// lab_82B8
            pri = 1;
// lab_82C0
            OP_JZER lab_8328
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0C58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8328
            pri = 1;
            OP_JUMP lab_8330
// lab_8328
            pri = 0;
// lab_8330
            OP_JZER lab_8380
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8520
// lab_8380
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_83E8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8520
// lab_83E8
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
// switch_7CA0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1:
        {
// switch_7CA0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2:
        {
// switch_7CA0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x3:
        {
// switch_7CA0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x4:
        {
// switch_7CA0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x5:
        {
// switch_7CA0_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0E90(var_40)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x6:
        {
// switch_7CA0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x7:
        {
// switch_7CA0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x8:
        {
// switch_7CA0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x9:
        {
// switch_7CA0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0xa:
        {
// switch_7CA0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0xb:
        {
// switch_7CA0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0xc:
        {
// switch_7CA0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0xd:
        {
// switch_7CA0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0xe:
        {
// switch_7CA0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0xf:
        {
// switch_7CA0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x10:
        {
// switch_7CA0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x11:
        {
// switch_7CA0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x12:
        {
// switch_7CA0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x13:
        {
// switch_7CA0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x14:
        {
// switch_7CA0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x15:
        {
// switch_7CA0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x16:
        {
// switch_7CA0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x17:
        {
// switch_7CA0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x18:
        {
// switch_7CA0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x19:
        {
// switch_7CA0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1a:
        {
// switch_7CA0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1b:
        {
// switch_7CA0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1c:
        {
// switch_7CA0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1d:
        {
// switch_7CA0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1e:
        {
// switch_7CA0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x1f:
        {
// switch_7CA0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x20:
        {
// switch_7CA0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x21:
        {
// switch_7CA0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x22:
        {
// switch_7CA0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x23:
        {
// switch_7CA0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x24:
        {
// switch_7CA0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x25:
        {
// switch_7CA0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x26:
        {
// switch_7CA0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x27:
        {
// switch_7CA0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x28:
        {
// switch_7CA0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x29:
        {
// switch_7CA0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2a:
        {
// switch_7CA0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2b:
        {
// switch_7CA0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2c:
        {
// switch_7CA0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2d:
        {
// switch_7CA0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2e:
        {
// switch_7CA0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x2f:
        {
// switch_7CA0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x30:
        {
// switch_7CA0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x31:
        {
// switch_7CA0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x32:
        {
// switch_7CA0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x33:
        {
// switch_7CA0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x34:
        {
// switch_7CA0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x35:
        {
// switch_7CA0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x36:
        {
// switch_7CA0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x37:
        {
// switch_7CA0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x38:
        {
// switch_7CA0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x39:
        {
// switch_7CA0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x3a:
        {
// switch_7CA0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x3b:
        {
// switch_7CA0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x3c:
        {
// switch_7CA0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x3d:
        {
// switch_7CA0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
        case 0x3e:
        {
// switch_7CA0_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0C18(var_24, var_16, var_8)
            OP_JUMP switch_7CA0_case_default
        }
    }
}
// fun_85C0
fun_85C0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8658
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0C90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2978(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_8658
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_87B0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_8718
    var_24 = 30048;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_8718
    pri = 1;
    OP_JUMP lab_8720
// lab_87B0
    pri = 0;
    return pri;
// lab_8718
    pri = 0;
// lab_8720
    OP_JZER lab_87B0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2978(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_87C0
fun_87C0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_85C0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_8848(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_8848
fun_8848() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_89E0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_88B0
fun_88B0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_8920
    OP_CONST_S -8, 1
// lab_8920
    pri = arg_0;
    OP_JNZ lab_8940
    OP_ZERO_P_S -8
// lab_8940
    pri = var_8;
    OP_JZER lab_89C8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_89C8
    pri = 0;
    return pri;
}
// fun_89E0
fun_89E0() {
    var_8 = 30152;
    var_16 = 8;
    pri = fun_24C0(var_8)
    var_24 = 0;
    pri = fun_24F8()
    pri = arg_3;
    OP_JNZ lab_8B00
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_8AC8
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_8B70(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_8AF0
// lab_8B00
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8D10(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_8AC8
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8C38(var_16, var_8)
// lab_8AF0
    OP_JUMP lab_8B48
// lab_8B48
    var_8 = 0;
    pri = fun_2598()
    pri = 0;
    return pri;
}
// fun_8B70
fun_8B70() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8D10(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_8C20
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_8C20
    pri = 0;
    return pri;
}
// fun_8C38
fun_8C38() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2618(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2180(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2278(var_72)
    var_88 = 0;
    pri = fun_2338()
    var_96 = 0;
    var_104 = 8;
    pri = fun_25C8(var_96)
    pri = 0;
    return pri;
}
// fun_8D10
fun_8D10() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8D58
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_9018(var_8)
// lab_8D58
    pri = arg_4;
    OP_JNZ lab_8DC0
    var_8 = 0;
    var_16 = 8;
    pri = fun_25C8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2618(var_40, var_32, var_24)
// lab_8DC0
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_8E60
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2668(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2180(var_56, var_48, var_40)
    OP_JUMP lab_8F50
// lab_8E60
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_8F18
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_8F18
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_8F18
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2180(var_24, var_16, var_8)
// lab_8F50
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8F90
    var_8 = 0;
    var_16 = 8;
    pri = fun_04F0(var_8)
// lab_8F90
    var_8 = 1;
    var_16 = 8;
    pri = fun_2278(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_9220(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_88B0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_9018
fun_9018() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_9078
    var_16 = 30312;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_9078
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_91B8
        case default:
        {
// switch_91B8_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_91A8
            var_16 = 30856;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_91A8
            OP_JUMP lab_91F0
// lab_91F0
            var_8 = 31072;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_91B8_case_0x1
            var_8 = 30528;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_91F0
        }
        case 0x2:
        {
// switch_91B8_case_0x2
            var_8 = 30656;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_91F0
        }
    }
}
// fun_9220
fun_9220() {
    pri = arg_2;
    OP_JNZ lab_9308
    var_8 = 0;
    var_16 = 8;
    pri = fun_25C8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2618(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_26B8(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_9308
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2180(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2278(var_40)
    var_56 = 0;
    pri = fun_2338()
    pri = 0;
    return pri;
}
// fun_9380
fun_9380() {
    pri = 31256;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_9408
// lab_9408
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_9588
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_9578
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_94C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_94C8
    pri = 0;
    OP_JUMP lab_94D0
// lab_9588
    pri = 0;
    return pri;
// lab_9578
    OP_JUMP lab_9400
// lab_9400
    OP_INC_P_S -936
// lab_94C8
    pri = 1;
// lab_94D0
    OP_JZER lab_9548
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_9540
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_9548
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_9540
}
// fun_95A8
fun_95A8() {
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_95F0
    pri = arg_0;
    return pri;
// lab_95F0
    pri = arg_1;
    return pri;
}
// fun_9600
fun_9600() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_9698
    var_8 = 1;
    var_16 = 0;
    var_24 = 32176;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_16D8()
// lab_9698
    pri = arg_4;
    OP_JZER lab_96D0
    var_8 = 1;
    var_16 = 8;
    pri = fun_17D0(var_8)
// lab_96D0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_9728
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_9728
    pri = 0;
    OP_JUMP lab_9730
// lab_9728
    pri = 1;
// lab_9730
    OP_JZER lab_97F8
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_97F8
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_97D0
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1618(var_32, var_24)
    OP_JUMP lab_97F8
// lab_97F8
    pri = arg_2;
    OP_JZER lab_98D0
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_98A0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1240(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0908(var_40)
    OP_JUMP lab_98D0
// lab_98D0
    pri = arg_3;
    OP_JZER lab_9908
    var_8 = 1;
    var_16 = 8;
    pri = fun_16A0(var_8)
// lab_9908
    pri = 0;
    return pri;
// lab_98A0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1240(var_16, var_8)
// lab_97D0
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1618(var_16, var_8)
}
// fun_9918
fun_9918() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_9380(var_24)
    pri = 0;
    return pri;
}
// fun_9980
fun_9980() {
    pri = g_mode;
    switch (pri) {
// switch_9A40
        case default:
        {
// switch_9A40_case_default
            pri = CommandNOP()
            OP_JUMP lab_9A88
// lab_9A88
            pri = 0;
            return pri;
        }
        case 0xe6ee19274824f789:
        {
// switch_9A40_case_0xe6ee19274824f789
            var_8 = 0;
            pri = fun_CB68()
            OP_JUMP lab_9A88
        }
        case 0x0:
        {
// switch_9A40_case_0x0
            var_8 = 0;
            pri = fun_9A98()
            OP_JUMP lab_9A88
        }
        case 0x4ba832ad276a1f5:
        {
// switch_9A40_case_0x4ba832ad276a1f5
            var_8 = 0;
            pri = fun_CA78()
            OP_JUMP lab_9A88
        }
    }
}
// fun_9A98
fun_9A98() {
    pri = 0;
    return pri;
}
// fun_9AB0
fun_9AB0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_9600(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9B08
fun_9B08() {
    pri = 0;
    return pri;
}
// fun_9B20
fun_9B20() {
    var_8 = -8551397936661211544;
    var_16 = 8;
    pri = fun_0600(var_8)
    var_24 = -2226754383299060518;
    var_32 = 8;
    pri = fun_0600(var_24)
    var_40 = 0;
    pri = fun_0630()
    pri = 0;
    return pri;
}
// fun_9BA0
fun_9BA0() {
    pri = EvCameraStart()
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    OP_PUSH3_C 4677722549352660992, 4671485899497589965, -2226754383299060518
    var_32 = 48;
    pri = fun_0838(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 1;
    var_48 = 1;
    var_56 = 0;
    OP_PUSH3_C 4677692340270687846, 4671504673658634240, 8802641224559852288
    var_64 = 48;
    pri = fun_0838(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 0;
    var_80 = -8551397936661211544;
    var_88 = 16;
    pri = fun_0890(var_80, var_72)
    var_96 = 1;
    var_104 = 8;
    pri = fun_0060(var_96)
    var_112 = 1;
    pri = SetCascadeShadowMapLevel(var_112)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_120 = 16;
    pri = fun_2798(var_112, var_104)
    var_128 = 0;
    var_136 = 1;
    var_144 = 880;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 4602678819172646912;
    var_168 = 32;
    pri = fun_2800(var_160, var_152, var_144, var_136)
    var_176 = 0;
    var_184 = 4631952216750555136;
    var_192 = 0;
    OP_PUSH5_C 4677685409224264253, 4656345981724393472, 4671101534971531100, 4677763683457045627, 4656778177755039662
    var_200 = 4671144943690595697;
    var_208 = 1;
    pri = EvCameraMove(var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136)
    var_216 = 0;
    pri = fun_2708()
    var_224 = 32224;
    var_232 = 8;
    var_240 = 16;
    pri = fun_02A8(var_232, var_224)
    var_248 = 0;
    pri = fun_0378()
    var_256 = 0;
    var_264 = 90;
    var_272 = 380;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 4605380978949069210;
    var_296 = 32;
    pri = fun_2800(var_288, var_280, var_272, var_264)
    var_304 = 0;
    var_312 = 4631952216750555136;
    var_320 = 3;
    OP_PUSH5_C 4677696558272169902, 4654373193981372662, 4671107722473216410, 4677774832504951276, 4654861465105035428
    var_328 = 4671151073467920548;
    var_336 = 90;
    pri = EvCameraMove(var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 80;
    var_352 = 8;
    pri = fun_0060(var_344)
    var_360 = 1;
    var_368 = -8551397936661211544;
    var_376 = 16;
    pri = fun_0890(var_368, var_360)
    var_392 = 32272;
    var_400 = 1;
    var_408 = 0;
    var_416 = 1;
    var_424 = -1;
    var_432 = 0;
    var_440 = 0;
    var_448 = 0;
    OP_PUSH5_C 4677708145750337126, 4654209410729299149, 4671149943719723008, 4677698016499466240, 4654132005110703718
    OP_PUSH5_C 4671194199062740992, 4677700050595977626, 4654018095706066125, 4671348707934234214, 4677692340270687846
    OP_PUSH2_C 4653584008515420160, 4671504673658634240
    var_456 = 4;
    var_464 = 168;
    pri = fun_1700(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_8 = pri;
    var_472 = 1;
    var_480 = 4596373779694328218;
    var_488 = -1;
    var_496 = 4611686018427387904;
    var_504 = var_8;
    var_512 = 8802641224559852288;
    var_520 = 48;
    pri = fun_09B8(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = 15;
    var_536 = 8;
    pri = fun_0060(var_528)
    var_552 = 32320;
    var_560 = 1;
    var_568 = 0;
    var_576 = 1;
    var_584 = -1;
    var_592 = 0;
    var_600 = 0;
    var_608 = 0;
    OP_PUSH5_C 4677716364599754752, 4654157953585119232, 4671170944391813530, 4677716900611673293, 4654040085938621645
    OP_PUSH5_C 4671254589738896589, 4677721010036382106, 4654024252971181670, 4671365832827836826, 4677722549352660992
    OP_PUSH2_C 4653677686906106675, 4671485899497589965
    var_616 = 4;
    var_624 = 168;
    pri = fun_1700(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_16 = pri;
    var_632 = 1;
    var_640 = 4596373779694328218;
    var_648 = -1;
    var_656 = 4611686018427387904;
    var_664 = var_16;
    var_672 = -2226754383299060518;
    var_680 = 48;
    pri = fun_09B8(var_672, var_664, var_656, var_648, var_640, var_632)
    var_688 = 0;
    pri = fun_2708()
    var_696 = 0;
    var_704 = 1;
    var_712 = 200;
    pri = float(var_712)
    var_720 = pri;
    var_728 = 4610334938539176756;
    var_736 = 32;
    pri = fun_2800(var_728, var_720, var_712, var_704)
    var_744 = 0;
    var_752 = 4631952216750555136;
    var_760 = 0;
    OP_PUSH5_C 4677699477475541647, 4654278328118128148, 4671183322143963218, 4677748170722367242, 4655099443401751265
    var_768 = 4671103508594902958;
    var_776 = 1;
    pri = EvCameraMove(var_776, var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 20;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 1;
    var_808 = 3;
    var_816 = 0;
    var_824 = 6;
    var_832 = 3235464708911765657;
    var_840 = 40;
    pri = fun_6890(var_832, var_824, var_816, var_808, var_800)
    var_848 = 3235464708911765657;
    var_856 = 8;
    pri = fun_0C90(var_848)
    var_864 = 0;
    var_872 = 0;
    var_880 = 0;
    var_888 = 130;
    pri = float(var_888)
    var_896 = pri;
    var_904 = 3235464708911765657;
    var_912 = 40;
    pri = fun_0A10(var_904, var_896, var_888, var_880, var_872)
    var_920 = 3235464708911765657;
    var_928 = 8;
    pri = fun_0AB8(var_920)
    var_936 = 8802641224559852288;
    var_944 = 8;
    pri = fun_0AB8(var_936)
    var_952 = -2226754383299060518;
    var_960 = 8;
    pri = fun_0AB8(var_952)
    var_968 = 0;
    var_976 = 4631952216750555136;
    var_984 = 0;
    OP_PUSH5_C 4677719436360364851, 4654461506755315630, 4671136139351236280, 4677710111127371776, 4655060124865941996
    var_992 = 4671222769872388751;
    var_1000 = 1;
    pri = EvCameraMove(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 0;
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 0;
    OP_PUSH2_C 3235464708911765657, 8802641224559852288
    var_1040 = 48;
    pri = fun_0A60(var_1032, var_1024, var_1016, var_1008, var_1000, var_992)
    var_1048 = 4;
    var_1056 = 8;
    pri = fun_0060(var_1048)
    var_1064 = 0;
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 0;
    OP_PUSH2_C 3235464708911765657, -2226754383299060518
    var_1096 = 48;
    pri = fun_0A60(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1104 = 8802641224559852288;
    var_1112 = 8;
    pri = fun_0AB8(var_1104)
    var_1120 = -2226754383299060518;
    var_1128 = 8;
    pri = fun_0AB8(var_1120)
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 3;
    var_1168 = 0;
    var_1176 = 1;
    var_1184 = 3235464708911765657;
    var_1192 = 56;
    pri = fun_2978(var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136)
    var_1200 = 0;
    var_1208 = 3;
    var_1216 = 0;
    var_1224 = 100;
    var_1232 = -1;
    OP_PUSH2_C 2149099125472570686, 3235464708911765657
    var_1240 = 56;
    pri = fun_2080(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1248 = 1;
    var_1256 = 8;
    pri = fun_2278(var_1248)
    var_1264 = 0;
    pri = fun_2338()
    var_1272 = 3235464708911765657;
    var_1280 = 8;
    pri = fun_0AB8(var_1272)
    var_1288 = 0;
    var_1296 = 30;
    var_1304 = 200;
    pri = float(var_1304)
    var_1312 = pri;
    var_1320 = 4611235658464650854;
    var_1328 = 32;
    pri = fun_2800(var_1320, var_1312, var_1304, var_1296)
    var_1336 = 0;
    var_1344 = 4631952216750555136;
    var_1352 = 3;
    OP_PUSH5_C 4677712741708941230, 4654795582368299090, 4671130630797981123, 4677748525314867200, 4655070724158033756
    var_1360 = 4671135828739201434;
    var_1368 = 70;
    pri = EvCameraMove(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1384 = 32368;
    var_1392 = 1;
    var_1400 = 0;
    var_1408 = 1;
    var_1416 = -1;
    var_1424 = 0;
    var_1432 = 0;
    var_1440 = 0;
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = 0;
    OP_PUSH5_C 4677699830693652070, 4654498362385078682, 4671090460140660326, 4677690416125339238, 4654820739194342605
    OP_PUSH4_C 4671044583017991373, 4677670831074469478, 4655286492319868518, 4670991284191834931
    var_1472 = 3;
    var_1480 = 168;
    pri = fun_1700(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_24 = pri;
    var_1488 = 1;
    var_1496 = 4596373779694328218;
    var_1504 = -1;
    var_1512 = 4611686018427387904;
    var_1520 = var_24;
    var_1528 = -8551397936661211544;
    var_1536 = 48;
    pri = fun_09B8(var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1544 = 15;
    var_1552 = 8;
    pri = fun_0060(var_1544)
    var_1560 = 0;
    var_1568 = 0;
    var_1576 = 0;
    var_1584 = 0;
    OP_PUSH2_C -8551397936661211544, 8802641224559852288
    var_1592 = 48;
    pri = fun_0A60(var_1584, var_1576, var_1568, var_1560, var_1552, var_1544)
    var_1600 = 4;
    var_1608 = 8;
    pri = fun_0060(var_1600)
    var_1616 = 0;
    var_1624 = 0;
    var_1632 = 0;
    var_1640 = 0;
    OP_PUSH2_C -8551397936661211544, -2226754383299060518
    var_1648 = 48;
    pri = fun_0A60(var_1640, var_1632, var_1624, var_1616, var_1608, var_1600)
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 0;
    var_1680 = 0;
    OP_PUSH2_C -8551397936661211544, 3235464708911765657
    var_1688 = 48;
    pri = fun_0A60(var_1680, var_1672, var_1664, var_1656, var_1648, var_1640)
    var_1696 = -8551397936661211544;
    var_1704 = 8;
    pri = fun_0AB8(var_1696)
    var_1712 = 0;
    var_1720 = 0;
    var_1728 = 0;
    var_1736 = 0;
    OP_PUSH2_C 3235464708911765657, -8551397936661211544
    var_1744 = 48;
    pri = fun_0A60(var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1752 = 8802641224559852288;
    var_1760 = 8;
    pri = fun_0AB8(var_1752)
    var_1768 = -2226754383299060518;
    var_1776 = 8;
    pri = fun_0AB8(var_1768)
    var_1784 = 0;
    var_1792 = 3;
    var_1800 = 0;
    var_1808 = 100;
    var_1816 = -1;
    OP_PUSH2_C -2306160521185220078, -8551397936661211544
    var_1824 = 56;
    pri = fun_2080(var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1832 = 1;
    var_1840 = 8;
    pri = fun_2278(var_1832)
    var_1848 = 0;
    pri = fun_2338()
    var_1856 = 0;
    pri = fun_2708()
    var_1864 = -8551397936661211544;
    var_1872 = 8;
    pri = fun_0AB8(var_1864)
    var_1880 = 1;
    var_1888 = 1;
    var_1896 = -1;
    var_1904 = -1;
    var_1912 = 0;
    var_1920 = 12;
    var_1928 = 3235464708911765657;
    var_1936 = 56;
    pri = fun_4558(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1944 = 0;
    var_1952 = 3;
    var_1960 = 0;
    var_1968 = 101;
    var_1976 = -1;
    OP_PUSH2_C 2149098025960942475, 3235464708911765657
    var_1984 = 56;
    pri = fun_2080(var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928)
    var_1992 = 1;
    var_2000 = 8;
    pri = fun_2278(var_1992)
    var_2008 = 0;
    pri = fun_2338()
    var_2016 = 7;
    var_2024 = -8551397936661211544;
    var_2032 = 16;
    pri = fun_1280(var_2024, var_2016)
    var_2040 = 1;
    var_2048 = -1;
    var_2056 = -1;
    var_2064 = 3;
    var_2072 = 0;
    var_2080 = 0;
    var_2088 = -8551397936661211544;
    var_2096 = 56;
    pri = fun_2978(var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040)
    var_2104 = 0;
    var_2112 = 3;
    var_2120 = 0;
    var_2128 = 100;
    var_2136 = -1;
    OP_PUSH2_C -2306161620696848289, -8551397936661211544
    var_2144 = 56;
    pri = fun_2080(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088)
    var_2152 = 1;
    var_2160 = 8;
    pri = fun_2278(var_2152)
    var_2168 = 0;
    pri = fun_2338()
    var_2176 = 1;
    var_2184 = 3;
    var_2192 = 0;
    var_2200 = 12;
    var_2208 = 3235464708911765657;
    var_2216 = 40;
    pri = fun_6890(var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2224 = 3235464708911765657;
    var_2232 = 8;
    pri = fun_0AB8(var_2224)
    var_2240 = -8551397936661211544;
    var_2248 = 8;
    pri = fun_0AB8(var_2240)
    var_2256 = -8551397936661211544;
    var_2264 = 8;
    pri = fun_13D8(var_2256)
    var_2272 = 0;
    var_2280 = 0;
    var_2288 = 0;
    var_2296 = 0;
    OP_PUSH2_C 8802641224559852288, -8551397936661211544
    var_2304 = 48;
    pri = fun_0A60(var_2296, var_2288, var_2280, var_2272, var_2264, var_2256)
    var_2312 = 0;
    var_2320 = 3;
    var_2328 = 0;
    var_2336 = 100;
    var_2344 = -1;
    OP_PUSH2_C -2306162720208476500, -8551397936661211544
    var_2352 = 56;
    pri = fun_2080(var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296)
    var_2360 = 1;
    var_2368 = 8;
    pri = fun_2278(var_2360)
    var_2376 = 0;
    pri = fun_2338()
    var_2384 = 1;
    var_2392 = 0;
    var_2400 = 4641240890982006784;
    var_2408 = 0;
    var_2416 = 0;
    OP_PUSH4_C 4677714990210220032, 4671105550937751552, 4607182418800017408, 3235464708911765657
    var_2424 = 72;
    pri = fun_0940(var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360, var_2352)
    var_2432 = 10;
    var_2440 = 8;
    pri = fun_0060(var_2432)
    var_2448 = 0;
    var_2456 = 1;
    var_2464 = 150;
    pri = float(var_2464)
    var_2472 = pri;
    var_2480 = 4609434218613702656;
    var_2488 = 32;
    pri = fun_2800(var_2480, var_2472, var_2464, var_2456)
    var_2496 = 0;
    var_2504 = 4631952216750555136;
    var_2512 = 0;
    OP_PUSH5_C 4677714094108243395, 4654983203032462787, 4671134655010538783, 4677712143849493627, 4654698913305985024
    var_2520 = 4671073164822755410;
    var_2528 = 1;
    pri = EvCameraMove(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456)
    var_2536 = 0;
    pri = fun_2708()
    var_2544 = 0;
    var_2552 = 4631952216750555136;
    var_2560 = 2;
    OP_PUSH5_C 4677712716969929605, 4654983203032462787, 4671134828183620157, 4677710766711179837, 4654698913305985024
    var_2568 = 4671073337995836785;
    var_2576 = 20;
    pri = EvCameraMove(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2584 = 1;
    var_2592 = 1;
    var_2600 = -1;
    OP_PUSH2_C 3235464708911765657, 8802641224559852288
    var_2608 = 40;
    pri = fun_11E8(var_2600, var_2592, var_2584, var_2576, var_2568)
    var_2616 = 0;
    var_2624 = 3;
    var_2632 = 0;
    var_2640 = 100;
    var_2648 = -1;
    OP_PUSH2_C 2149096926449314264, 3235464708911765657
    var_2656 = 56;
    pri = fun_2080(var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600)
    var_2664 = 1;
    var_2672 = 8;
    pri = fun_2278(var_2664)
    var_2680 = 0;
    pri = fun_2338()
    var_2688 = 3235464708911765657;
    var_2696 = 8;
    pri = fun_0AB8(var_2688)
    var_2704 = 8;
    var_2712 = 3235464708911765657;
    var_2720 = 16;
    pri = fun_1280(var_2712, var_2704)
    var_2728 = 30;
    var_2736 = 8;
    pri = fun_0060(var_2728)
    var_2744 = 0;
    var_2752 = 3;
    var_2760 = 0;
    var_2768 = 100;
    var_2776 = -1;
    OP_PUSH2_C 2149090329379544998, 3235464708911765657
    var_2784 = 56;
    pri = fun_2080(var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728)
    var_2792 = 1;
    var_2800 = 8;
    pri = fun_2278(var_2792)
    var_2808 = 0;
    pri = fun_2338()
    var_2816 = 3235464708911765657;
    var_2824 = 8;
    pri = fun_13D8(var_2816)
    var_2832 = 30;
    var_2840 = 8;
    pri = fun_0060(var_2832)
    var_2848 = -1;
    var_2856 = 8802641224559852288;
    var_2864 = 16;
    pri = fun_1240(var_2856, var_2848)
    var_2872 = 1;
    var_2880 = 1;
    var_2888 = -1;
    OP_PUSH2_C 3235464708911765657, -8551397936661211544
    var_2896 = 40;
    pri = fun_11E8(var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2904 = 0;
    var_2912 = 1;
    var_2920 = 255;
    pri = float(var_2920)
    var_2928 = pri;
    var_2936 = 4607182418800017408;
    var_2944 = 32;
    pri = fun_2800(var_2936, var_2928, var_2920, var_2912)
    var_2952 = 0;
    var_2960 = 4631952216750555136;
    var_2968 = 0;
    OP_PUSH5_C 4677714136714318971, 4654700848446449910, 4671127912255481446, 4677733024949694628, 4654981267891997901
    var_2976 = 4671171532630534390;
    var_2984 = 1;
    pri = EvCameraMove(var_2984, var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2992 = 0;
    var_3000 = 0;
    var_3008 = 0;
    var_3016 = 0;
    OP_PUSH2_C 3235464708911765657, 8802641224559852288
    var_3024 = 48;
    pri = fun_0A60(var_3016, var_3008, var_3000, var_2992, var_2984, var_2976)
    var_3032 = 0;
    var_3040 = 0;
    var_3048 = 0;
    var_3056 = 0;
    OP_PUSH2_C 8802641224559852288, 3235464708911765657
    var_3064 = 48;
    pri = fun_0A60(var_3056, var_3048, var_3040, var_3032, var_3024, var_3016)
    var_3072 = 2;
    var_3080 = 8;
    pri = fun_0060(var_3072)
    var_3088 = 8802641224559852288;
    var_3096 = 8;
    pri = fun_0AB8(var_3088)
    var_3104 = 0;
    var_3112 = 3;
    var_3120 = 0;
    var_3128 = 100;
    var_3136 = -1;
    OP_PUSH2_C 2149091428891173209, 3235464708911765657
    var_3144 = 56;
    pri = fun_2080(var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088)
    var_3152 = 1;
    var_3160 = 8;
    pri = fun_2278(var_3152)
    OP_PUSH2_C 4027756257730612400, 4027757357242240611
    var_3176 = 16;
    pri = fun_95A8(var_3168, var_3160)
    var_32 = pri;
    var_3184 = 0;
    var_3192 = 4027758456753868822;
    var_3200 = 0;
    var_3208 = 24;
    pri = fun_2368(var_3200, var_3192, var_3184)
    var_3216 = 0;
    var_3224 = var_32;
    var_3232 = 1;
    var_3240 = 24;
    pri = fun_2368(var_3232, var_3224, var_3216)
    var_3256 = 0;
    var_3264 = 0;
    var_3272 = 0;
    var_3280 = 1;
    var_3288 = 32;
    pri = fun_2450(var_3280, var_3272, var_3264, var_3256)
    var_40 = pri;
    var_3296 = 1;
    var_3304 = -1;
    var_3312 = -1;
    var_3320 = 3;
    var_3328 = 0;
    var_3336 = 19;
    var_3344 = 8802641224559852288;
    var_3352 = 56;
    pri = fun_2978(var_3344, var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3360 = 10;
    var_3368 = 8;
    pri = fun_0060(var_3360)
    pri = var_40;
    switch (pri) {
// switch_BAE0
        case default:
        {
// switch_BAE0_case_default
            var_8 = 3235464708911765657;
            var_16 = 8;
            pri = fun_0AB8(var_8)
            var_24 = 0;
            var_32 = 3;
            var_40 = 0;
            var_48 = 100;
            var_56 = -1;
            OP_PUSH2_C 2149102424007455319, 3235464708911765657
            var_64 = 56;
            pri = fun_2080(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            var_72 = 1;
            var_80 = 8;
            pri = fun_2278(var_72)
            var_88 = 0;
            pri = fun_2338()
            var_96 = 6;
            var_104 = 4;
            var_112 = 2;
            var_120 = 1;
            var_128 = 9;
            var_136 = 3;
            var_144 = 29;
            var_152 = 3235464708911765657;
            var_160 = 64;
            pri = fun_87C0(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
            var_168 = 0;
            var_176 = 4631952216750555136;
            var_184 = 0;
            OP_PUSH5_C 4677766121624080220, 4654846863590618563, 4671093854882811085, 4677766359393469727, 4655123148872446116
            var_192 = 4671147420340537262;
            var_200 = 1;
            pri = EvCameraMove(var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128)
            var_208 = -1;
            var_216 = -8551397936661211544;
            var_224 = 16;
            pri = fun_1240(var_216, var_208)
            var_232 = 1;
            var_240 = 1;
            OP_PUSH4_C -4592545720011063296, 4677741103611379712, 4671127816048214016, 8802641224559852288
            var_248 = 48;
            pri = fun_0838(var_240, var_232, var_224, var_216, var_208, var_200)
            var_256 = 1;
            var_264 = 1;
            OP_PUSH4_C -4591842032569286656, 4677733956785799168, 4671101152891240448, -2226754383299060518
            var_272 = 48;
            pri = fun_0838(var_264, var_256, var_248, var_240, var_232, var_224)
            var_288 = 32416;
            var_296 = 1;
            var_304 = 0;
            var_312 = 1;
            var_320 = -1;
            var_328 = 0;
            var_336 = 0;
            var_344 = 0;
            OP_PUSH5_C 4677850285116017869, 4655760601733765530, 4670856621505223066, 4677790897744222618, 4654988304766415667
            OP_PUSH5_C 4670964016303466086, 4677773154375329382, 4654511116719960883, 4671053131720897331, 4677741103611379712
            OP_PUSH2_C 4654250312561852416, 4671127816048214016
            var_352 = 4;
            var_360 = 168;
            pri = fun_1700(var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
            var_48 = pri;
            var_368 = 1;
            var_376 = 4596373779694328218;
            var_384 = -1;
            var_392 = 4611686018427387904;
            var_400 = var_48;
            var_408 = -2226754383299060518;
            var_416 = 48;
            pri = fun_09B8(var_408, var_400, var_392, var_384, var_376, var_368)
            var_424 = 10;
            var_432 = 8;
            pri = fun_0060(var_424)
            var_448 = 32464;
            var_456 = 1;
            var_464 = 0;
            var_472 = 1;
            var_480 = -1;
            var_488 = 0;
            var_496 = 0;
            var_504 = 0;
            OP_PUSH5_C 4677839922218926080, 4655772036654694400, 4670827401983714918, 4677778377055561318, 4654841849817595904
            OP_PUSH5_C 4670976303345906483, 4677767052085795226, 4654521672031587533, 4671037436192410829, 4677733956785799168
            OP_PUSH2_C 4654289894980452352, 4671101152891240448
            var_512 = 4;
            var_520 = 168;
            pri = fun_1700(var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
            var_56 = pri;
            var_528 = 1;
            var_536 = 4596373779694328218;
            var_544 = -1;
            var_552 = 4611686018427387904;
            var_560 = var_56;
            var_568 = 8802641224559852288;
            var_576 = 48;
            pri = fun_09B8(var_568, var_560, var_552, var_544, var_536, var_528)
            var_584 = 45;
            var_592 = 8;
            pri = fun_0060(var_584)
            var_600 = 5;
            var_608 = 5;
            var_616 = -8551397936661211544;
            var_624 = 24;
            pri = fun_1370(var_616, var_608, var_600)
            var_632 = 1;
            var_640 = 1;
            OP_PUSH4_C -4593390144941195264, 4677714990210220032, 4671114896786587648, -8551397936661211544
            var_648 = 48;
            pri = fun_0838(var_640, var_632, var_624, var_616, var_608, var_600)
            var_656 = 1;
            var_664 = 1;
            OP_PUSH4_C -4590856870150799360, 4677721037524172800, 4671145683112165376, 3235464708911765657
            var_672 = 48;
            pri = fun_0838(var_664, var_656, var_648, var_640, var_632, var_624)
            var_680 = 1;
            var_688 = 1;
            var_696 = -1;
            var_704 = -1;
            var_712 = 0;
            var_720 = 7;
            var_728 = -8551397936661211544;
            var_736 = 56;
            pri = fun_4558(var_728, var_720, var_712, var_704, var_696, var_688, var_680)
            var_744 = -2226754383299060518;
            var_752 = 8;
            pri = fun_0AB8(var_744)
            var_760 = 8802641224559852288;
            var_768 = 8;
            pri = fun_0AB8(var_760)
            var_776 = 1;
            var_784 = 0;
            var_792 = 32512;
            var_800 = 1;
            var_808 = 32;
            pri = fun_0308(var_800, var_792, var_784, var_776)
            var_816 = 0;
            pri = fun_0378()
            var_824 = 0;
            var_832 = 8802641224559852288;
            var_840 = 16;
            pri = fun_0890(var_832, var_824)
            var_848 = 1;
            var_856 = 1;
            OP_PUSH4_C -4591082050132167885, 4677708077030860390, 4671297415716798464, 8802641224559852288
            var_864 = 48;
            pri = fun_0838(var_856, var_848, var_840, var_832, var_824, var_816)
            var_872 = 5;
            var_880 = 8;
            pri = fun_0060(var_872)
            var_888 = 0;
            var_896 = 1;
            var_904 = 500;
            pri = float(var_904)
            var_912 = pri;
            var_920 = 4605380978949069210;
            var_928 = 32;
            pri = fun_2800(var_920, var_912, var_904, var_896)
            var_936 = 0;
            var_944 = 4629995965662416077;
            var_952 = 0;
            OP_PUSH5_C 4677718031734260367, 4654643365978549780, 4671118379489668628, 4677796659185152164, 4655328977449165783
            var_960 = 4671009283197181624;
            var_968 = 1;
            pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
            var_976 = 0;
            pri = fun_2708()
            var_984 = 1;
            var_992 = -8551397936661211544;
            var_1000 = 16;
            pri = fun_08C8(var_992, var_984)
            var_1008 = 0;
            pri = fun_07A8()
            var_1016 = 32560;
            var_1024 = 1;
            var_1032 = 16;
            pri = fun_02A8(var_1024, var_1016)
            var_1040 = 0;
            var_1048 = 4629165614481119642;
            var_1056 = 3;
            OP_PUSH5_C 4677718031734260367, 4654643365978549780, 4671118379489668628, 4677776037844573225, 4655148833464070963
            var_1064 = 4671037917228747981;
            var_1072 = 90;
            pri = EvCameraMove(var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
            var_1080 = 3;
            var_1088 = 90;
            var_1096 = 380;
            pri = float(var_1096)
            var_1104 = pri;
            var_1112 = 4605380978949069210;
            var_1120 = 32;
            pri = fun_2800(var_1112, var_1104, var_1096, var_1088)
            var_1128 = 1;
            var_1136 = -1;
            var_1144 = -1;
            var_1152 = 3;
            var_1160 = 0;
            var_1168 = 0;
            var_1176 = 3235464708911765657;
            var_1184 = 56;
            pri = fun_2978(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
            var_1192 = 60;
            var_1200 = 8;
            pri = fun_0060(var_1192)
            var_1208 = 1;
            var_1216 = 3;
            var_1224 = 0;
            var_1232 = 7;
            var_1240 = -8551397936661211544;
            var_1248 = 40;
            pri = fun_6890(var_1240, var_1232, var_1224, var_1216, var_1208)
            var_1256 = 3235464708911765657;
            var_1264 = 8;
            pri = fun_0C90(var_1256)
            var_1272 = -8551397936661211544;
            var_1280 = 8;
            pri = fun_13D8(var_1272)
            var_1288 = 9;
            var_1296 = -8551397936661211544;
            var_1304 = 16;
            pri = fun_1280(var_1296, var_1288)
            var_1312 = 0;
            var_1320 = 1;
            var_1328 = 100;
            pri = float(var_1328)
            var_1336 = pri;
            var_1344 = 4612811918334230528;
            var_1352 = 32;
            pri = fun_2800(var_1344, var_1336, var_1328, var_1320)
            var_1360 = 0;
            var_1368 = 4631952216750555136;
            var_1376 = 3;
            OP_PUSH5_C 4677726610673736090, 4654926116388748657, 4671115790139785216, 4677729417177165988, 4654950393605489951
            var_1384 = 4671117571348622213;
            var_1392 = 1;
            pri = EvCameraMove(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
            var_1400 = 30;
            var_1408 = 8;
            pri = fun_0060(var_1400)
            var_1416 = 0;
            var_1424 = 3;
            var_1432 = 0;
            var_1440 = 100;
            var_1448 = -1;
            OP_PUSH2_C -2306163819720104711, -8551397936661211544
            var_1456 = 56;
            pri = fun_2080(var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400)
            var_1464 = 1;
            var_1472 = 8;
            pri = fun_2278(var_1464)
            var_1480 = 0;
            pri = fun_2338()
            var_1488 = 1;
            var_1496 = 0;
            var_1504 = 32176;
            var_1512 = 8;
            var_1520 = 32;
            pri = fun_0308(var_1512, var_1504, var_1496, var_1488)
            var_1528 = 0;
            pri = fun_0378()
            var_1536 = 0;
            var_1544 = -8551397936661211544;
            var_1552 = 16;
            pri = fun_08C8(var_1544, var_1536)
            var_1560 = 1;
            var_1568 = 8802641224559852288;
            var_1576 = 16;
            pri = fun_0890(var_1568, var_1560)
            var_1584 = 3;
            var_1592 = 0;
            pri = EvCameraEnd(var_1592, var_1584)
            OP_PUSH2_C 4652007308841189376, 4620693217682128896
            var_1600 = 3;
            var_1608 = 1;
            var_1616 = 32;
            pri = fun_2858(var_1608, var_1600, var_1592, var_1584)
            var_1624 = 2;
            pri = SetCascadeShadowMapLevel(var_1624)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_BAE0_case_0x0
            var_8 = 3235464708911765657;
            var_16 = 8;
            pri = fun_0AB8(var_8)
            var_24 = 1;
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 0;
            var_64 = 6;
            var_72 = 3235464708911765657;
            var_80 = 56;
            pri = fun_4558(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 0;
            var_96 = 3;
            var_104 = 0;
            var_112 = 100;
            var_120 = -1;
            OP_PUSH2_C 2149104623030711741, 3235464708911765657
            var_128 = 56;
            pri = fun_2080(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
            var_136 = 1;
            var_144 = 8;
            pri = fun_2278(var_136)
            var_152 = 0;
            pri = fun_2338()
            var_160 = 1;
            var_168 = 3;
            var_176 = 0;
            var_184 = 6;
            var_192 = 3235464708911765657;
            var_200 = 40;
            pri = fun_6890(var_192, var_184, var_176, var_168, var_160)
            OP_JUMP switch_BAE0_case_default
        }
        case 0x1:
        {
// switch_BAE0_case_0x1
            var_8 = 3235464708911765657;
            var_16 = 8;
            pri = fun_0AB8(var_8)
            var_24 = 1;
            var_32 = 1;
            var_40 = -1;
            var_48 = -1;
            var_56 = 0;
            var_64 = 6;
            var_72 = 3235464708911765657;
            var_80 = 56;
            pri = fun_4558(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
            var_88 = 0;
            var_96 = 3;
            var_104 = 0;
            var_112 = 100;
            var_120 = -1;
            OP_PUSH2_C 2149103523519083530, 3235464708911765657
            var_128 = 56;
            pri = fun_2080(var_120, var_112, var_104, var_96, var_88, var_80, var_72)
            var_136 = 1;
            var_144 = 8;
            pri = fun_2278(var_136)
            var_152 = 0;
            pri = fun_2338()
            var_160 = 1;
            var_168 = 3;
            var_176 = 0;
            var_184 = 6;
            var_192 = 3235464708911765657;
            var_200 = 40;
            pri = fun_6890(var_192, var_184, var_176, var_168, var_160)
            OP_JUMP switch_BAE0_case_default
        }
    }
}
// fun_C928
fun_C928() {
    pri = 0;
    return pri;
}
// fun_C940
fun_C940() {
    var_8 = 1830;
    var_16 = 8;
    pri = fun_9918(var_8)
    var_24 = -8551397936661211544;
    pri = VanishFlagSet(var_24)
    var_32 = -6784874504492061910;
    pri = VanishFlagReset(var_32)
    var_40 = 3;
    var_48 = 29;
    pri = ItemAdd(var_48, var_40)
    pri = 0;
    return pri;
}
// fun_C9F0
fun_C9F0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    OP_PUSH5_C 4671948601478348800, 4668661611467112448, -8113290503354198418, -2340100625610442929, 339737182274291820
    var_48 = 80;
    pri = fun_0430(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    pri = 0;
    return pri;
}
// fun_CA78
fun_CA78() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_9AB0()
    var_16 = 0;
    pri = fun_9B08()
    var_24 = 0;
    pri = fun_9B20()
    var_32 = 0;
    pri = fun_9BA0()
    var_40 = 0;
    pri = fun_C928()
    var_48 = 0;
    pri = fun_C940()
    var_56 = 0;
    pri = fun_C9F0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CB68
fun_CB68() {
    var_8 = 0;
    pri = fun_9B08()
    var_16 = 0;
    pri = fun_C940()
    pri = 0;
    return pri;
}
