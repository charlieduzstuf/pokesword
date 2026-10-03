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
// fun_0630
fun_0630() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_0678
// lab_0678
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06B8
    OP_JUMP lab_0728
// lab_06B8
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_06F8
    OP_JUMP lab_0728
// lab_06F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0678
// lab_0728
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0770
fun_0770() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_07C0
fun_07C0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0818
fun_0818() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0898
fun_0898() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_08D0
fun_08D0() {
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
// fun_0948
fun_0948() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09A0
fun_09A0() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09F0
fun_09F0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1558(var_8)
    OP_JZER lab_0A68
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1588(var_24)
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
    pri = fun_1558(var_8)
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
    pri = fun_1558(var_8)
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
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    pri = EnableFieldObjectLookAtPos_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1188
fun_1188() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
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
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartFieldObjectEyeLookAt_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_12D8
fun_12D8() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = StartFieldObjectEyeLookAtFieldObject_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1328
fun_1328() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = ResetFieldObjectEyeLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1368
fun_1368() {
    var_8 = 344;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13A8
fun_13A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13E8
fun_13E8() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1420
fun_1420() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1460
fun_1460() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1498
fun_1498() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_13A8(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1420(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1500
fun_1500() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_13E8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1460(var_24)
    pri = 0;
    return pri;
}
// fun_1558
fun_1558() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1588
fun_1588() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_15B8
fun_15B8() {
    OP_JUMP lab_15D0
// lab_15D0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1660
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1650
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    pri = 0;
    return pri;
// lab_1660
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_16F0
    pri = IsPlayerRideBicycle()
    OP_JZER lab_16E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    pri = 0;
    return pri;
// lab_16F0
    pri = 0;
    return pri;
// lab_16E0
    OP_JUMP lab_1700
// lab_1700
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15D0
    pri = 0;
    return pri;
// lab_1650
    OP_JUMP lab_1700
}
// fun_1740
fun_1740() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0BC8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_15B8(var_40)
    pri = 0;
    return pri;
}
// fun_17C8
fun_17C8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1828
fun_1828() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_18B8
fun_18B8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_18F0
fun_18F0() {
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
// switch_1F08
        case default:
        {
// switch_1F08_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1F50
// lab_1F50
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
            OP_JNZ lab_1FF8
            var_88 = 0;
            pri = fun_2268()
// lab_1FF8
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1F08_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1AF0
                case default:
                {
// switch_1AF0_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B68
// lab_1B68
                    OP_JUMP lab_1F50
                }
                case 0x0:
                {
// switch_1AF0_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1B68
                }
                case 0x1:
                {
// switch_1AF0_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1B68
                }
                case 0x2:
                {
// switch_1AF0_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1B68
                }
                case 0x3:
                {
// switch_1AF0_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1B68
                }
                case 0x4:
                {
// switch_1AF0_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1B68
                }
                case 0x5:
                {
// switch_1AF0_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1B68
                }
            }
        }
        case 0x65:
        {
// switch_1F08_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1CA8
                case default:
                {
// switch_1CA8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D20
// lab_1D20
                    OP_JUMP lab_1F50
                }
                case 0x0:
                {
// switch_1CA8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1D20
                }
                case 0x1:
                {
// switch_1CA8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1D20
                }
                case 0x2:
                {
// switch_1CA8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1D20
                }
                case 0x3:
                {
// switch_1CA8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1D20
                }
                case 0x4:
                {
// switch_1CA8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1D20
                }
                case 0x5:
                {
// switch_1CA8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1D20
                }
            }
        }
        case 0x66:
        {
// switch_1F08_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1E60
                case default:
                {
// switch_1E60_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1ED8
// lab_1ED8
                    OP_JUMP lab_1F50
                }
                case 0x0:
                {
// switch_1E60_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_1ED8
                }
                case 0x1:
                {
// switch_1E60_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_1ED8
                }
                case 0x2:
                {
// switch_1E60_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_1ED8
                }
                case 0x3:
                {
// switch_1E60_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_1ED8
                }
                case 0x4:
                {
// switch_1E60_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_1ED8
                }
                case 0x5:
                {
// switch_1E60_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_1ED8
                }
            }
        }
    }
}
// fun_2010
fun_2010() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_18F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2078
fun_2078() {
    pri = 392;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 472;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0B90(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2120
    pri = 1;
    return pri;
// lab_2120
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2168
fun_2168() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_21B8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2078(var_8)
    arg_2 = pri;
// lab_21B8
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_18F0(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2218
fun_2218() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2010(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2268
fun_2268() {
    OP_JUMP lab_2280
// lab_2280
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_22C0
    pri = 0;
    return pri;
// lab_22C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2280
    pri = 0;
    return pri;
}
// fun_2300
fun_2300() {
    var_8 = 0;
    pri = fun_2268()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_23B0
    var_32 = 520;
    pri = SoundPostEvent(var_32)
// lab_23B0
    pri = 0;
    return pri;
}
// fun_23C0
fun_23C0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_23F0
fun_23F0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2468()
    return pri;
}
// fun_2468
fun_2468() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_24A8
fun_24A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24E8
fun_24E8() {
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
// fun_2548
fun_2548() {
    OP_JUMP lab_2560
// lab_2560
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2598
    pri = 0;
    return pri;
// lab_2598
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2560
    pri = 0;
    return pri;
}
// fun_25D8
fun_25D8() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2608
fun_2608() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2680
fun_2680() {
    var_8 = 0;
    pri = fun_2608()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2700
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2700
    pri = 1;
    return pri;
// lab_2700
    var_8 = 0;
    pri = fun_2608()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2740
    pri = 1;
    return pri;
// lab_2740
    var_8 = 0;
    pri = fun_2608()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2770
fun_2770() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_27C0
fun_27C0() {
    OP_JUMP lab_27D8
// lab_27D8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2810
    pri = 0;
    return pri;
// lab_2810
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27D8
    pri = 0;
    return pri;
}
// fun_2850
fun_2850() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_28B8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2990()
    pri = 0;
    return pri;
}
// fun_28B8
fun_28B8() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2910
fun_2910() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_28B8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2990()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2990
fun_2990() {
    OP_JUMP lab_29A8
// lab_29A8
    pri = IsEasingRunningDof_()
    OP_JZER lab_2A00
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2A10
// lab_2A00
    pri = 0;
    return pri;
// lab_2A10
    OP_JUMP lab_29A8
    pri = 0;
    return pri;
}
// fun_2A30
fun_2A30() {
    pri = arg_6;
    OP_JNZ lab_2A68
    var_8 = 0;
    pri = fun_10A0()
// lab_2A68
    pri = arg_1;
    switch (pri) {
// switch_3FD0
        case default:
        {
// switch_3FD0_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4320
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4320
            pri = 1;
            OP_JUMP lab_4328
// lab_4320
            pri = 0;
// lab_4328
            OP_JZER lab_4480
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
            OP_JUMP lab_44E0
// lab_4480
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
// lab_44E0
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4540
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_45A0
// lab_4540
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_45A0
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_45A0
            pri = arg_2;
            OP_JZER lab_45E0
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_45E0
            var_8 = 0;
            pri = fun_10E0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_3FD0_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1:
        {
// switch_3FD0_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x2:
        {
// switch_3FD0_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x3:
        {
// switch_3FD0_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x4:
        {
// switch_3FD0_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x5:
        {
// switch_3FD0_case_0x5
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x6:
        {
// switch_3FD0_case_0x6
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x7:
        {
// switch_3FD0_case_0x7
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x8:
        {
// switch_3FD0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x9:
        {
// switch_3FD0_case_0x9
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0xa:
        {
// switch_3FD0_case_0xa
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0xb:
        {
// switch_3FD0_case_0xb
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0xc:
        {
// switch_3FD0_case_0xc
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0xd:
        {
// switch_3FD0_case_0xd
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0xe:
        {
// switch_3FD0_case_0xe
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0xf:
        {
// switch_3FD0_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x10:
        {
// switch_3FD0_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x11:
        {
// switch_3FD0_case_0x11
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x12:
        {
// switch_3FD0_case_0x12
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x13:
        {
// switch_3FD0_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x14:
        {
// switch_3FD0_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x15:
        {
// switch_3FD0_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x16:
        {
// switch_3FD0_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x17:
        {
// switch_3FD0_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x18:
        {
// switch_3FD0_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x19:
        {
// switch_3FD0_case_0x19
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1a:
        {
// switch_3FD0_case_0x1a
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1b:
        {
// switch_3FD0_case_0x1b
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1c:
        {
// switch_3FD0_case_0x1c
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
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1d:
        {
// switch_3FD0_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6600;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1e:
        {
// switch_3FD0_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6736;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x1f:
        {
// switch_3FD0_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6872;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x20:
        {
// switch_3FD0_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7008;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x21:
        {
// switch_3FD0_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7128;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x22:
        {
// switch_3FD0_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7248;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x23:
        {
// switch_3FD0_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7384;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x24:
        {
// switch_3FD0_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7520;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x25:
        {
// switch_3FD0_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7656;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x26:
        {
// switch_3FD0_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7792;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x27:
        {
// switch_3FD0_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7936;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x28:
        {
// switch_3FD0_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
        case 0x29:
        {
// switch_3FD0_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8224;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_3FD0_case_default
        }
    }
}
// fun_4610
fun_4610() {
    pri = arg_5;
    OP_JNZ lab_4648
    var_8 = 0;
    pri = fun_10A0()
// lab_4648
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4698
    OP_CONST_S -8, -1
// lab_4698
    pri = arg_1;
    switch (pri) {
// switch_6150
        case default:
        {
// switch_6150_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_65F8
            var_520 = 28232;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0B90(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_65F8
            pri = 1;
            OP_JUMP lab_6600
// lab_65F8
            pri = 0;
// lab_6600
            OP_JZER lab_6650
            var_8 = 64;
            var_16 = 28328;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
            OP_JUMP lab_68A8
// lab_6650
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_66B8
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_66B8
            pri = 1;
            OP_JUMP lab_66C0
// lab_66B8
            pri = 0;
// lab_66C0
            OP_JZER lab_6848
            var_16 = 28504;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0B90(var_24, var_16)
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
            var_176 = 28608;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 28624;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_68A8
// lab_6848
            var_8 = 64;
            alt = 8488;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0138(var_16, var_8, var_0)
// lab_68A8
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6918
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6918
            var_8 = 0;
            pri = fun_10E0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6150_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x1:
        {
// switch_6150_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x2:
        {
// switch_6150_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x3:
        {
// switch_6150_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x4:
        {
// switch_6150_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x5:
        {
// switch_6150_case_0x5
            var_8 = 2;
            var_16 = 18488;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B50(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_0DC8(var_40)
            OP_JUMP switch_6150_case_default
        }
        case 0x6:
        {
// switch_6150_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x7:
        {
// switch_6150_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x8:
        {
// switch_6150_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x9:
        {
// switch_6150_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0xa:
        {
// switch_6150_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0xb:
        {
// switch_6150_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0xc:
        {
// switch_6150_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0xd:
        {
// switch_6150_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19136;
            var_72 = 18960;
            var_80 = 18776;
            var_88 = 18584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0xe:
        {
// switch_6150_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 19792;
            var_72 = 19584;
            var_80 = 19368;
            var_88 = 19144;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0xf:
        {
// switch_6150_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20184;
            var_72 = 20064;
            var_80 = 19936;
            var_88 = 19800;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x10:
        {
// switch_6150_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20528;
            var_72 = 20424;
            var_80 = 20312;
            var_88 = 20192;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x11:
        {
// switch_6150_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 20872;
            var_72 = 20768;
            var_80 = 20656;
            var_88 = 20536;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x12:
        {
// switch_6150_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x13:
        {
// switch_6150_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x14:
        {
// switch_6150_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21432;
            var_72 = 21256;
            var_80 = 21072;
            var_88 = 20880;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x15:
        {
// switch_6150_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x16:
        {
// switch_6150_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x17:
        {
// switch_6150_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x18:
        {
// switch_6150_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x19:
        {
// switch_6150_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x1a:
        {
// switch_6150_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x1b:
        {
// switch_6150_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x1c:
        {
// switch_6150_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 21824;
            var_72 = 21704;
            var_80 = 21576;
            var_88 = 21440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x1d:
        {
// switch_6150_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x1e:
        {
// switch_6150_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 22288;
            var_72 = 22144;
            var_80 = 21992;
            var_88 = 21832;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x1f:
        {
// switch_6150_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x20:
        {
// switch_6150_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x21:
        {
// switch_6150_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x22:
        {
// switch_6150_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x23:
        {
// switch_6150_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x24:
        {
// switch_6150_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22656;
            var_72 = 22544;
            var_80 = 22424;
            var_88 = 22296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x25:
        {
// switch_6150_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23024;
            var_72 = 22912;
            var_80 = 22792;
            var_88 = 22664;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x26:
        {
// switch_6150_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x27:
        {
// switch_6150_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x28:
        {
// switch_6150_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x29:
        {
// switch_6150_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23464;
            var_72 = 23328;
            var_80 = 23184;
            var_88 = 23032;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x2a:
        {
// switch_6150_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23856;
            var_72 = 23736;
            var_80 = 23608;
            var_88 = 23472;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x2b:
        {
// switch_6150_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24272;
            var_72 = 24144;
            var_80 = 24008;
            var_88 = 23864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x2c:
        {
// switch_6150_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24712;
            var_72 = 24576;
            var_80 = 24432;
            var_88 = 24280;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x2d:
        {
// switch_6150_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x2e:
        {
// switch_6150_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25032;
            var_72 = 24936;
            var_80 = 24832;
            var_88 = 24720;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x2f:
        {
// switch_6150_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25424;
            var_72 = 25304;
            var_80 = 25176;
            var_88 = 25040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x30:
        {
// switch_6150_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25816;
            var_72 = 25696;
            var_80 = 25568;
            var_88 = 25432;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x31:
        {
// switch_6150_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x32:
        {
// switch_6150_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x33:
        {
// switch_6150_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26208;
            var_72 = 26088;
            var_80 = 25960;
            var_88 = 25824;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x34:
        {
// switch_6150_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26576;
            var_72 = 26464;
            var_80 = 26344;
            var_88 = 26216;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x35:
        {
// switch_6150_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27064;
            var_72 = 26912;
            var_80 = 26752;
            var_88 = 26584;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x36:
        {
// switch_6150_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27432;
            var_72 = 27320;
            var_80 = 27200;
            var_88 = 27072;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x37:
        {
// switch_6150_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x38:
        {
// switch_6150_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27800;
            var_72 = 27688;
            var_80 = 27568;
            var_88 = 27440;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6150_case_default
        }
        case 0x39:
        {
// switch_6150_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x3a:
        {
// switch_6150_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x3b:
        {
// switch_6150_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x3c:
        {
// switch_6150_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27808;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x3d:
        {
// switch_6150_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27984;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
        case 0x3e:
        {
// switch_6150_case_0x3e
            var_8 = 4;
            var_16 = 28128;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0B50(var_24, var_16, var_8)
            OP_JUMP switch_6150_case_default
        }
    }
}
// fun_6948
fun_6948() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7040(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 28680;
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
    var_424 = 28736;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 28752;
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
    OP_JZER lab_6B40
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_6B40
    pri = 0;
    return pri;
}
// fun_6B58
fun_6B58() {
    pri = arg_4;
    OP_JNZ lab_6B90
    var_8 = 0;
    pri = fun_10A0()
// lab_6B90
    pri = arg_1;
    OP_JNZ lab_6C38
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 29104;
    var_72 = 29096;
    var_80 = 28952;
    var_88 = 28800;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6C38
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_6C98
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6C98
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_6D48
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 29560;
    var_72 = 29416;
    var_80 = 29264;
    var_88 = 29112;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6D48
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_6DF8
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30192;
    var_72 = 30040;
    var_80 = 29872;
    var_88 = 29696;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6DF8
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_6EA8
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30392;
    var_72 = 30384;
    var_80 = 30376;
    var_88 = 30200;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6EA8
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_6F58
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30808;
    var_72 = 30680;
    var_80 = 30544;
    var_88 = 30400;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_0E00(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_6F58
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_6FB8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_6FB8
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_7018
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_7018
    var_8 = 0;
    pri = fun_10E0()
    pri = 0;
    return pri;
}
// fun_7040
fun_7040() {
    var_8 = arg_1;
    var_16 = 30976;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0B50(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_7088
fun_7088() {
    pri = 31080;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_7110
// lab_7110
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_7290
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_7280
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_71D0
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_71D0
    pri = 0;
    OP_JUMP lab_71D8
// lab_7290
    pri = 0;
    return pri;
// lab_7280
    OP_JUMP lab_7108
// lab_7108
    OP_INC_P_S -936
// lab_71D0
    pri = 1;
// lab_71D8
    OP_JZER lab_7250
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_7248
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_7250
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_7248
}
// fun_72B0
fun_72B0() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_7338()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_7338
fun_7338() {
    OP_ZERO_P_S -8
    pri = var_8;
    var_16 = pri;
    var_24 = 2491457344527812609;
    pri = FlagGet(var_24)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_32 = pri;
    var_40 = -6338460143570643299;
    pri = FlagGet(var_40)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_48 = pri;
    var_56 = -9019446742694110882;
    pri = FlagGet(var_56)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_64 = pri;
    var_72 = -2229912894659633455;
    pri = FlagGet(var_72)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_80 = pri;
    var_88 = -3467343721533817634;
    pri = FlagGet(var_88)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_96 = pri;
    var_104 = -2282713863028048545;
    pri = FlagGet(var_104)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_112 = pri;
    var_120 = -3446232929749219646;
    pri = FlagGet(var_120)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    var_128 = pri;
    var_136 = 2483696471998715560;
    pri = FlagGet(var_136)
    OP_POP_ALT 
    OP_ADD 
    var_8 = pri;
    pri = var_8;
    return pri;
}
// fun_75E8
fun_75E8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_7680
    var_8 = 1;
    var_16 = 0;
    var_24 = 32000;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    var_56 = 0;
    pri = fun_1800()
// lab_7680
    pri = arg_4;
    OP_JZER lab_76B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_18B8(var_8)
// lab_76B8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_7710
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_7710
    pri = 0;
    OP_JUMP lab_7718
// lab_7710
    pri = 1;
// lab_7718
    OP_JZER lab_77E0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_77E0
    var_16 = 0;
    pri = fun_03E0()
    OP_JZER lab_77B8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1740(var_32, var_24)
    OP_JUMP lab_77E0
// lab_77E0
    pri = arg_2;
    OP_JZER lab_78B8
    var_8 = 0;
    pri = fun_03E0()
    OP_JZER lab_7888
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1240(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0898(var_40)
    OP_JUMP lab_78B8
// lab_78B8
    pri = arg_3;
    OP_JZER lab_78F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_17C8(var_8)
// lab_78F0
    pri = 0;
    return pri;
// lab_7888
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1240(var_16, var_8)
// lab_77B8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1740(var_16, var_8)
}
// fun_7900
fun_7900() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_7A80
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7998
    var_8 = 1;
    var_16 = 0;
    var_24 = 32000;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
// lab_7A80
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_7998
    pri = arg_0;
    OP_JNZ lab_79E0
    var_8 = 32048;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_7A00
// lab_79E0
    var_8 = 32224;
    pri = SoundPostEvent(var_8)
// lab_7A00
    var_8 = 0;
    var_16 = 8;
    pri = fun_0630(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_7A80
    var_24 = 32488;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0280(var_32, var_24)
    var_48 = 0;
    pri = fun_0350()
}
// fun_7AC0
fun_7AC0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0408(var_8)
    var_24 = 0;
    pri = fun_0440()
    pri = arg_1;
    OP_JZER lab_7B38
    var_32 = 32536;
    pri = SoundPostEvent(var_32)
// lab_7B38
    var_8 = 32736;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 33000;
    var_40 = 8;
    var_48 = 32;
    pri = fun_02E0(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7BB8
fun_7BB8() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_7C08
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_7AC0(var_16, var_8)
// lab_7C08
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_09F0(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_7CA8
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_7CA8
    pri = 1;
    OP_JUMP lab_7CB0
// lab_7CA8
    pri = 0;
// lab_7CB0
    OP_JZER lab_7E48
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_7D90
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
    OP_JUMP lab_7E38
// lab_7E48
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
    pri = fun_0770(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_7D90
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
    pri = fun_0570(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_7E38
    OP_JUMP lab_7F08
// lab_7F08
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_7F80
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0818(var_32, var_24, var_16)
// lab_7F80
    var_8 = 33016;
    pri = SoundPostEvent(var_8)
    var_16 = 33288;
    var_24 = 8;
    var_32 = 16;
    pri = fun_0280(var_24, var_16)
    var_40 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_7FF0
fun_7FF0() {
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2218(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2300(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_23F0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_80F0
    pri = 1;
    return pri;
// lab_80F0
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = 26750;
    pri = float(var_56)
    var_64 = pri;
    var_72 = 20000;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_88 = 72;
    pri = fun_08D0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_09F0(var_96)
    pri = 0;
    return pri;
}
// fun_8200
fun_8200() {
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
    pri = fun_7BB8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_82A0
fun_82A0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_7088(var_24)
    pri = 0;
    return pri;
}
// fun_8308
fun_8308() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_8488(var_16)
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
    pri = fun_0770(var_80, var_72, var_64, var_56, var_48)
    var_96 = 33360;
    var_104 = 33304;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1828(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_8410
fun_8410() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_8488(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1878(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_8488
fun_8488() {
    pri = arg_0;
    OP_JNZ lab_84D0
    var_8 = 33416;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_84D0
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8518
    var_8 = 33568;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_8518
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 33720;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_8560
fun_8560() {
    pri = g_mode;
    switch (pri) {
// switch_8648
        case default:
        {
// switch_8648_case_default
            pri = CommandNOP()
            OP_JUMP lab_86A0
// lab_86A0
            pri = 0;
            return pri;
        }
        case 0xaf63d62215aef62e:
        {
// switch_8648_case_0xaf63d62215aef62e
            var_8 = 0;
            pri = fun_C040()
            OP_JUMP lab_86A0
        }
        case 0x0:
        {
// switch_8648_case_0x0
            var_8 = 0;
            pri = fun_86B0()
            OP_JUMP lab_86A0
        }
        case 0x4b72341e6364c28a:
        {
// switch_8648_case_0x4b72341e6364c28a
            var_8 = 0;
            pri = fun_C130()
            OP_JUMP lab_86A0
        }
        case 0x5f876f360d8c9aa4:
        {
// switch_8648_case_0x5f876f360d8c9aa4
            var_8 = 0;
            pri = fun_C178()
            OP_JUMP lab_86A0
        }
    }
}
// fun_86B0
fun_86B0() {
    pri = 0;
    return pri;
}
// fun_86C8
fun_86C8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 32000;
    var_32 = 8;
    var_40 = 32;
    pri = fun_02E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0350()
    pri = 0;
    return pri;
}
// fun_8730
fun_8730() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_75E8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8788
fun_8788() {
    pri = 0;
    return pri;
}
// fun_87A0
fun_87A0() {
    pri = 0;
    return pri;
}
// fun_87B8
fun_87B8() {
    pri = EvCameraStart()
    OP_CONST_S -8, 274
    var_16 = 7;
    var_24 = 0;
    var_32 = var_8;
    var_40 = 37;
    var_48 = 32;
    pri = fun_24E8(var_40, var_32, var_24, var_16)
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_8308(var_64, var_56)
    var_80 = 1;
    var_88 = 6023732433702693609;
    var_96 = 16;
    pri = fun_8308(var_88, var_80)
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0858(var_112, var_104)
    var_128 = 1;
    var_136 = 6023732433702693609;
    var_144 = 16;
    pri = fun_0858(var_136, var_128)
    var_152 = 1;
    var_160 = -5006633346223993155;
    var_168 = 16;
    pri = fun_0858(var_160, var_152)
    var_176 = 1;
    var_184 = -5006634445735621366;
    var_192 = 16;
    pri = fun_0858(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4672403249536434176, 4671199284304019456, 8802641224559852288
    var_216 = 48;
    pri = fun_07C0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    OP_PUSH4_C 4640537203540230144, 4672403249536434176, 4671254259885408256, 6023732433702693609
    var_240 = 48;
    pri = fun_07C0(var_232, var_224, var_216, var_208, var_200, var_192)
    var_248 = 0;
    var_256 = 30;
    pri = float(var_256)
    var_264 = pri;
    var_272 = 33728;
    pri = SoundSetRTPC(var_272, var_264, var_256)
    var_280 = 15;
    var_288 = 8;
    pri = fun_0060(var_280)
    var_296 = 8;
    var_304 = 6023732433702693609;
    var_312 = 16;
    pri = fun_13A8(var_304, var_296)
    var_320 = 0;
    var_328 = 1;
    var_336 = 6023732433702693609;
    var_344 = 24;
    pri = fun_6948(var_336, var_328, var_320)
    var_352 = 0;
    var_360 = 4630967054332067840;
    var_368 = 0;
    OP_PUSH5_C 4672469448382763500, 4636515629810476646, 4671201252429833175, 4672363474703299379, 4637740749646609777
    var_376 = 4671199320038147359;
    var_384 = 1;
    pri = EvCameraMove(var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312)
    var_392 = 0;
    pri = fun_27C0()
    var_400 = 0;
    var_408 = 4630967054332067840;
    var_416 = 3;
    OP_PUSH5_C 4672457381242648658, 4636654959923948421, 4671201038025065759, 4672351410311963607, 4637880079760081551
    var_424 = 4671199105633379942;
    var_432 = 90;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 32488;
    var_448 = 8;
    var_456 = 16;
    pri = fun_0280(var_448, var_440)
    var_464 = 0;
    pri = fun_0350()
    var_472 = 1;
    var_480 = -1;
    var_488 = -1;
    var_496 = 3;
    var_504 = 0;
    var_512 = 18;
    var_520 = 8802641224559852288;
    var_528 = 56;
    pri = fun_2A30(var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_536 = 8802641224559852288;
    var_544 = 8;
    pri = fun_0BC8(var_536)
    var_552 = 0;
    pri = fun_27C0()
    var_560 = 15;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = 1;
    var_584 = 1;
    var_592 = 1;
    var_600 = 20;
    pri = float(var_600)
    var_608 = pri;
    var_616 = 0;
    pri = float(var_616)
    var_624 = pri;
    var_632 = 6023732433702693609;
    var_640 = 48;
    pri = fun_11E0(var_632, var_624, var_616, var_608, var_600, var_592)
    var_648 = 0;
    var_656 = 7;
    var_664 = 0;
    OP_PUSH2_C 4604480259023595111, 8802641224559852288
    var_672 = 40;
    pri = fun_1280(var_664, var_656, var_648, var_640, var_632)
    var_680 = 0;
    var_688 = 0;
    var_696 = 10;
    var_704 = 2;
    pri = float(var_704)
    var_712 = pri;
    var_720 = -30;
    pri = float(var_720)
    var_728 = pri;
    var_736 = 8802641224559852288;
    var_744 = 48;
    pri = fun_11E0(var_736, var_728, var_720, var_712, var_704, var_696)
    var_752 = 15;
    var_760 = 8;
    pri = fun_0060(var_752)
    var_768 = 8802641224559852288;
    var_776 = 8;
    pri = fun_1368(var_768)
    var_784 = 15;
    var_792 = 8;
    pri = fun_0060(var_784)
    var_800 = 0;
    var_808 = 4630967054332067840;
    var_816 = 3;
    OP_PUSH5_C 4672456391682183660, 4636654959923948421, 4671255147741047685, 4672350418002719539, 4637880079760081551
    var_824 = 4671253215349361869;
    var_832 = 30;
    pri = EvCameraMove(var_832, var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_840 = 75;
    var_848 = 8;
    pri = fun_0060(var_840)
    var_856 = 6023732433702693609;
    var_864 = 8;
    pri = fun_1500(var_856)
    var_872 = 10;
    var_880 = 6023732433702693609;
    var_888 = 16;
    pri = fun_1240(var_880, var_872)
    var_896 = 15;
    var_904 = 8;
    pri = fun_0060(var_896)
    var_912 = 0;
    var_920 = 0;
    var_928 = 6023732433702693609;
    var_936 = 24;
    pri = fun_6948(var_928, var_920, var_912)
    var_944 = 30;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 0;
    var_968 = 4629278204471803904;
    var_976 = 0;
    OP_PUSH5_C 4672403397970503926, 4636193340962142945, 4671273649772964086, 4672390709606319391, 4638305810662356419
    var_984 = 4671168662905185894;
    var_992 = 1;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 0;
    pri = fun_27C0()
    var_1008 = 0;
    var_1016 = 4629278204471803904;
    var_1024 = 3;
    OP_PUSH5_C 4672401350130097193, 4636193340962142945, 4671273897163080335, 4672388661765912658, 4638305810662356419
    var_1032 = 4671168910295302144;
    var_1040 = 120;
    pri = EvCameraMove(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 30;
    var_1056 = 8;
    pri = fun_0060(var_1048)
    var_1064 = 1;
    var_1072 = 0;
    var_1080 = 0;
    var_1088 = 355;
    OP_PUSH2_C 4607182418800017408, 6023732433702693609
    var_1096 = 48;
    pri = fun_0948(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048)
    var_1104 = 0;
    var_1112 = 60;
    pri = float(var_1112)
    var_1120 = pri;
    var_1128 = 33864;
    pri = SoundSetRTPC(var_1128, var_1120, var_1112)
    var_1136 = 10;
    var_1144 = 8;
    pri = fun_0060(var_1136)
    var_1152 = 2;
    var_1160 = 2;
    var_1168 = 8802641224559852288;
    var_1176 = 24;
    pri = fun_1498(var_1168, var_1160, var_1152)
    var_1184 = 10;
    var_1192 = 8802641224559852288;
    var_1200 = 16;
    pri = fun_1240(var_1192, var_1184)
    var_1208 = 5;
    var_1216 = 8802641224559852288;
    var_1224 = 16;
    pri = fun_1328(var_1216, var_1208)
    var_1232 = 10;
    var_1240 = 8;
    pri = fun_0060(var_1232)
    var_1248 = 1;
    var_1256 = 0;
    var_1264 = 0;
    var_1272 = 425;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1280 = 48;
    pri = fun_0948(var_1272, var_1264, var_1256, var_1248, var_1240, var_1232)
    var_1288 = 30;
    var_1296 = 8;
    pri = fun_0060(var_1288)
    var_1304 = 0;
    var_1312 = 4631473709290147021;
    var_1320 = 0;
    OP_PUSH5_C 4671755865336336876, 4649795179407034286, 4671225246522330317, 4671655774044081357, 4650903311205972050
    var_1328 = 4671224328430121124;
    var_1336 = 1;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 0;
    pri = fun_27C0()
    var_1352 = 0;
    var_1360 = 4631473709290147021;
    var_1368 = 0;
    OP_PUSH5_C 4671738248411280835, 4648167286471414252, 4671225095339481498, 4671638157119025316, 4649275330309421793
    var_1376 = 4671224177247272305;
    var_1384 = 240;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = 90;
    var_1400 = 8;
    pri = fun_0060(var_1392)
    var_1408 = 0;
    var_1416 = 4632726272936509440;
    var_1424 = 0;
    OP_PUSH5_C 4672089979432227308, 4631159864691114639, 4671228498327969464, 4672028497490781143, 4626601377443285565
    var_1432 = 4671226640153318523;
    var_1440 = 1;
    pri = EvCameraMove(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 0;
    pri = fun_27C0()
    var_1456 = 0;
    var_1464 = 4632726272936509440;
    var_1472 = 2;
    OP_PUSH5_C 4672090749090366751, 4631159864691114639, 4671220188768842547, 4672030025811943752, 4626609821692586885
    var_1480 = 4671230001910120448;
    var_1488 = 240;
    pri = EvCameraMove(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1496 = 120;
    var_1504 = 8;
    pri = fun_0060(var_1496)
    var_1512 = 0;
    var_1520 = 4630699653104192717;
    var_1528 = 0;
    OP_PUSH5_C 4671972537846485484, 4637706972649404498, 4671239182832212378, 4671920470473352151, 4639010553635295724
    var_1536 = 4671271634917906186;
    var_1544 = 1;
    pri = EvCameraMove(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1552 = 0;
    pri = fun_27C0()
    var_1560 = 0;
    var_1568 = 4630699653104192717;
    var_1576 = 0;
    OP_PUSH5_C 4671813988269760184, 4637682343588942316, 4671266434227906806, 4671763600400638280, 4638989794855763313
    var_1584 = 4671231414782562140;
    var_1592 = 90;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 90;
    var_1608 = 8;
    pri = fun_0060(var_1600)
    var_1616 = 0;
    var_1624 = 4630699653104192717;
    var_1632 = 0;
    OP_PUSH5_C 4671885321835391222, 4636018826476582339, 4671184952169951396, 4671832908116095140, 4639204771369226076
    var_1640 = 4671214086479308390;
    var_1648 = 1;
    pri = EvCameraMove(var_1648, var_1640, var_1632, var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1656 = 0;
    pri = fun_27C0()
    var_1664 = 0;
    var_1672 = 4630699653104192717;
    var_1680 = 0;
    OP_PUSH5_C 4671733869606223217, 4638879315927404380, 4671188247956055654, 4671681282713845760, 4635600132448725238
    var_1688 = 4671217467477563802;
    var_1696 = 90;
    pri = EvCameraMove(var_1696, var_1688, var_1680, var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1704 = 15;
    var_1712 = 8;
    pri = fun_0060(var_1704)
    var_1720 = 1;
    var_1728 = 1;
    OP_PUSH4_C 4640537203540230144, 4671435679303991296, 4671254259885408256, 6023732433702693609
    var_1736 = 48;
    pri = fun_07C0(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1744 = 60;
    var_1752 = 8;
    pri = fun_0060(var_1744)
    var_1760 = 6023732433702693609;
    var_1768 = 8;
    pri = fun_09F0(var_1760)
    var_1776 = 1;
    var_1784 = 0;
    var_1792 = 4641240890982006784;
    var_1800 = 0;
    var_1808 = 0;
    var_1816 = 20000;
    pri = float(var_1816)
    var_1824 = pri;
    var_1832 = 20100;
    pri = float(var_1832)
    var_1840 = pri;
    OP_PUSH2_C 4607182418800017408, 6023732433702693609
    var_1848 = 72;
    pri = fun_08D0(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776)
    var_1856 = 15;
    var_1864 = 8;
    pri = fun_0060(var_1856)
    var_1872 = 0;
    var_1880 = 4630657431857686118;
    var_1888 = 0;
    OP_PUSH5_C 4671264122504709407, 4623372859460414341, 4671336418143014748, 4671088607463567524, 4639184012589693665
    var_1896 = 4670975159853813596;
    var_1904 = 1;
    pri = EvCameraMove(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832)
    var_1912 = 0;
    pri = fun_27C0()
    var_1920 = 0;
    var_1928 = 4630657431857686118;
    var_1936 = 3;
    OP_PUSH5_C 4671173324834487665, 4630211294019599729, 4671290433817962086, 4671423395010329969, 4639971790680762614
    var_1944 = 4670976124675266970;
    var_1952 = 240;
    pri = EvCameraMove(var_1952, var_1944, var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1960 = 15;
    var_1968 = 8;
    pri = fun_0060(var_1960)
    var_1976 = 1;
    var_1984 = 1;
    OP_PUSH4_C -4582834833314545664, 4671468664652824576, 4671199284304019456, 8802641224559852288
    var_1992 = 48;
    pri = fun_07C0(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2000 = 5;
    var_2008 = 8;
    pri = fun_0060(var_2000)
    var_2016 = 8802641224559852288;
    var_2024 = 8;
    pri = fun_09F0(var_2016)
    var_2032 = 1;
    var_2040 = 0;
    var_2048 = 4641240890982006784;
    var_2056 = 0;
    var_2064 = 0;
    var_2072 = 20000;
    pri = float(var_2072)
    var_2080 = pri;
    var_2088 = 19900;
    pri = float(var_2088)
    var_2096 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_2104 = 72;
    pri = fun_08D0(var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2112 = 6023732433702693609;
    var_2120 = 8;
    pri = fun_09F0(var_2112)
    var_2128 = 0;
    var_2136 = 30;
    pri = float(var_2136)
    var_2144 = pri;
    var_2152 = 34000;
    pri = SoundSetRTPC(var_2152, var_2144, var_2136)
    var_2160 = 0;
    var_2168 = 0;
    var_2176 = 0;
    var_2184 = -90;
    pri = float(var_2184)
    var_2192 = pri;
    var_2200 = 6023732433702693609;
    var_2208 = 40;
    pri = fun_09A0(var_2200, var_2192, var_2184, var_2176, var_2168)
    var_2216 = 6023732433702693609;
    var_2224 = 8;
    pri = fun_09F0(var_2216)
    var_2232 = 0;
    var_2240 = 2;
    var_2248 = 6023732433702693609;
    var_2256 = 24;
    pri = fun_6948(var_2248, var_2240, var_2232)
    var_2264 = 8802641224559852288;
    var_2272 = 8;
    pri = fun_09F0(var_2264)
    var_2280 = 0;
    var_2288 = 0;
    var_2296 = 0;
    var_2304 = 90;
    pri = float(var_2304)
    var_2312 = pri;
    var_2320 = 8802641224559852288;
    var_2328 = 40;
    pri = fun_09A0(var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2336 = 8802641224559852288;
    var_2344 = 8;
    pri = fun_09F0(var_2336)
    var_2352 = 0;
    pri = fun_27C0()
    var_2360 = 0;
    pri = fun_2548()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2368 = 16;
    pri = fun_2850(var_2360, var_2352)
    var_2376 = 0;
    var_2384 = 1;
    var_2392 = 155;
    pri = float(var_2392)
    var_2400 = pri;
    var_2408 = 4615063718147915776;
    var_2416 = 32;
    pri = fun_28B8(var_2408, var_2400, var_2392, var_2384)
    var_2424 = 0;
    var_2432 = 4630010039411251610;
    var_2440 = 0;
    OP_PUSH5_C 4671119393789145252, -4591052495259613266, 4671552101092698358, 4671241571521223721, 4638799799246483620
    var_2448 = 4671171158796580946;
    var_2456 = 1;
    pri = EvCameraMove(var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384)
    var_2464 = 0;
    pri = fun_27C0()
    var_2472 = 0;
    var_2480 = 4630010039411251610;
    var_2488 = 3;
    OP_PUSH5_C 4671118055133738435, -4590772427657786163, 4671556284734442045, 4671240230117037834, 4638729782346026844
    var_2496 = 4671175339689545564;
    var_2504 = 120;
    pri = EvCameraMove(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440, var_2432)
    var_2512 = 0;
    var_2520 = 3;
    var_2528 = 0;
    var_2536 = 100;
    var_2544 = -1;
    OP_PUSH2_C 8225250878440674813, 6023732433702693609
    var_2552 = 56;
    pri = fun_2168(var_2544, var_2536, var_2528, var_2520, var_2512, var_2504, var_2496)
    var_2560 = 1;
    var_2568 = 8;
    pri = fun_2300(var_2560)
    var_2576 = 0;
    var_2584 = 1;
    var_2592 = 200;
    pri = float(var_2592)
    var_2600 = pri;
    var_2608 = 4613262278296967578;
    var_2616 = 32;
    pri = fun_28B8(var_2608, var_2600, var_2592, var_2584)
    var_2624 = 0;
    var_2632 = 4630981128080903373;
    var_2640 = 0;
    OP_PUSH5_C 4671184820228556063, 4638770596217649889, 4671321511514121175, 4671235337290294231, 4637557087224306074
    var_2648 = 4671214009513494446;
    var_2656 = 1;
    pri = EvCameraMove(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2664 = 0;
    pri = fun_27C0()
    var_2672 = 0;
    var_2680 = 4630981128080903373;
    var_2688 = 3;
    OP_PUSH5_C 4671189319979892736, 4638770596217649889, 4671323628074004644, 4671239837041630904, 4637557087224306074
    var_2696 = 4671216126073377915;
    var_2704 = 120;
    pri = EvCameraMove(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2712 = 0;
    var_2720 = 3;
    var_2728 = 0;
    var_2736 = 100;
    var_2744 = -1;
    OP_PUSH2_C 8225247579905790180, 6023732433702693609
    var_2752 = 56;
    pri = fun_2168(var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2760 = 1;
    var_2768 = 8;
    pri = fun_2300(var_2760)
    var_2776 = 0;
    pri = fun_23C0()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2784 = 3;
    var_2792 = 1;
    var_2800 = 32;
    pri = fun_2910(var_2792, var_2784, var_2776, var_2768)
    var_2808 = 0;
    var_2816 = 4631558151783160218;
    var_2824 = 0;
    OP_PUSH5_C 4671693696200123351, 4651650803190999286, 4670597972389905039, 4671728465506572698, 4652142240908150047
    var_2832 = 4670549714824561951;
    var_2840 = 1;
    pri = EvCameraMove(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768)
    var_2848 = 0;
    pri = fun_27C0()
    var_2856 = 0;
    var_2864 = 4631558151783160218;
    var_2872 = 3;
    OP_PUSH5_C 4671704144309366292, 4649433308140100649, 4670583464333976535, 4671738913615815639, 4649924657896321188
    var_2880 = 4670535204019854377;
    var_2888 = 210;
    pri = EvCameraMove(var_2888, var_2880, var_2872, var_2864, var_2856, var_2848, var_2840, var_2832, var_2824, var_2816)
    var_2896 = 0;
    var_2904 = 0;
    var_2912 = 6023732433702693609;
    var_2920 = 24;
    pri = fun_6948(var_2912, var_2904, var_2896)
    var_2928 = 30;
    var_2936 = 8;
    pri = fun_0060(var_2928)
    var_2944 = 0;
    var_2952 = 60;
    pri = float(var_2952)
    var_2960 = pri;
    var_2968 = 34136;
    pri = SoundSetRTPC(var_2968, var_2960, var_2952)
    var_2976 = 34272;
    pri = SoundPostEvent(var_2976)
    var_2984 = 1;
    var_2992 = 0;
    var_3000 = 4641240890982006784;
    var_3008 = 0;
    var_3016 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_3024 = 72;
    pri = fun_08D0(var_3016, var_3008, var_3000, var_2992, var_2984, var_2976, var_2968, var_2960, var_2952)
    var_3032 = 1;
    var_3040 = 0;
    var_3048 = 4641240890982006784;
    var_3056 = 0;
    var_3064 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 6023732433702693609
    var_3072 = 72;
    pri = fun_08D0(var_3064, var_3056, var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000)
    var_3080 = 8802641224559852288;
    var_3088 = 8;
    pri = fun_09F0(var_3080)
    var_3096 = 6023732433702693609;
    var_3104 = 8;
    pri = fun_09F0(var_3096)
    var_3112 = 30;
    var_3120 = 8;
    pri = fun_0060(var_3112)
    var_3128 = 0;
    var_3136 = 0;
    var_3144 = 0;
    var_3152 = 90;
    pri = float(var_3152)
    var_3160 = pri;
    var_3168 = 8802641224559852288;
    var_3176 = 40;
    pri = fun_09A0(var_3168, var_3160, var_3152, var_3144, var_3136)
    var_3184 = 0;
    var_3192 = 0;
    var_3200 = 0;
    var_3208 = 270;
    pri = float(var_3208)
    var_3216 = pri;
    var_3224 = 6023732433702693609;
    var_3232 = 40;
    pri = fun_09A0(var_3224, var_3216, var_3208, var_3200, var_3192)
    var_3240 = 60;
    var_3248 = 8;
    pri = fun_0060(var_3240)
    var_3256 = 8802641224559852288;
    var_3264 = 8;
    pri = fun_09F0(var_3256)
    var_3272 = 6023732433702693609;
    var_3280 = 8;
    pri = fun_09F0(var_3272)
    var_3288 = 0;
    pri = fun_25D8()
    var_3296 = 0;
    pri = fun_2680()
    OP_JZER lab_A758
    var_3304 = 0;
    pri = fun_2770()
// lab_A758
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_8 = 16;
    pri = fun_2850(var_0, var_-8)
    var_16 = 0;
    var_24 = 1;
    var_32 = 100;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 4612136378390124954;
    var_56 = 32;
    pri = fun_28B8(var_48, var_40, var_32, var_24)
    var_64 = 0;
    var_72 = 0;
    var_80 = 34520;
    pri = PokeMemoryCheckParty(var_80, var_72, var_64)
    var_88 = 1;
    var_96 = 1;
    var_104 = 90;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_120 = 48;
    pri = fun_07C0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = 270;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 4671226772094713856;
    var_168 = 20580;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 6023732433702693609;
    var_192 = 48;
    pri = fun_07C0(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_1500(var_200)
    var_216 = 15;
    var_224 = 8;
    pri = fun_0060(var_216)
    var_232 = 0;
    var_240 = 4632487019206305382;
    var_248 = 0;
    OP_PUSH5_C 4671223723698725847, 4637806896266136781, 4671415791887423898, 4671228064020876493, 4638395882654903828
    var_256 = 4671354560084873052;
    var_264 = 1;
    pri = EvCameraMove(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 0;
    pri = fun_27C0()
    var_280 = 0;
    var_288 = 4632487019206305382;
    var_296 = 3;
    OP_PUSH5_C 4671223984832737444, 4637615493281973535, 4671412119518587126, 4671228325154888090, 4638205183358182359
    var_304 = 4671350890464815350;
    var_312 = 240;
    pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 0;
    var_328 = 30;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 34672;
    pri = SoundSetRTPC(var_344, var_336, var_328)
    var_352 = 32488;
    var_360 = 8;
    var_368 = 16;
    pri = fun_0280(var_360, var_352)
    var_376 = 0;
    pri = fun_0350()
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C 8225248679417418391, 6023732433702693609
    var_424 = 56;
    pri = fun_2168(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_2300(var_432)
    var_448 = 0;
    var_456 = 1;
    var_464 = 750;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 4611686018427387904;
    var_488 = 32;
    pri = fun_28B8(var_480, var_472, var_464, var_456)
    var_496 = 0;
    var_504 = 4626547897197710541;
    var_512 = 0;
    OP_PUSH5_C 4671251186750408622, 4635172994171566817, 4671104058350716846, 4671298210113949532, 4636229932709115331
    var_520 = 4670984283051545068;
    var_528 = 1;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 0;
    pri = fun_27C0()
    var_544 = 0;
    var_552 = 4626547897197710541;
    var_560 = 2;
    OP_PUSH5_C 4671254815138780283, 4635172994171566817, 4671104157306763346, 4671288031385055396, 4636299597765851218
    var_568 = 4670979775053871186;
    var_576 = 300;
    pri = EvCameraMove(var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520, var_512, var_504)
    var_584 = 1;
    var_592 = 0;
    var_600 = 4641240890982006784;
    var_608 = 90;
    pri = float(var_608)
    var_616 = pri;
    var_624 = 0;
    var_632 = 20000;
    pri = float(var_632)
    var_640 = pri;
    var_648 = 19880;
    pri = float(var_648)
    var_656 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_664 = 72;
    pri = fun_08D0(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592)
    var_672 = 1;
    var_680 = 0;
    var_688 = 4641240890982006784;
    var_696 = -90;
    pri = float(var_696)
    var_704 = pri;
    var_712 = 0;
    var_720 = 20000;
    pri = float(var_720)
    var_728 = pri;
    var_736 = 20120;
    pri = float(var_736)
    var_744 = pri;
    OP_PUSH2_C 4607182418800017408, 6023732433702693609
    var_752 = 72;
    pri = fun_08D0(var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 8802641224559852288;
    var_768 = 8;
    pri = fun_09F0(var_760)
    var_776 = 6023732433702693609;
    var_784 = 8;
    pri = fun_09F0(var_776)
    var_792 = 1;
    var_800 = -1;
    var_808 = -1;
    var_816 = 3;
    var_824 = 0;
    var_832 = 0;
    var_840 = 6023732433702693609;
    var_848 = 56;
    pri = fun_2A30(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 0;
    var_864 = 3;
    var_872 = 0;
    var_880 = 100;
    var_888 = -1;
    OP_PUSH2_C 8225245380882533758, 6023732433702693609
    var_896 = 56;
    pri = fun_2168(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 6023732433702693609;
    var_912 = 8;
    pri = fun_0BC8(var_904)
    var_920 = 1;
    var_928 = 8;
    pri = fun_2300(var_920)
    var_936 = 0;
    var_944 = 3;
    var_952 = 0;
    var_960 = 100;
    var_968 = -1;
    OP_PUSH2_C 8225246480394161969, 6023732433702693609
    var_976 = 56;
    pri = fun_2168(var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_984 = 1;
    var_992 = 8;
    pri = fun_2300(var_984)
    var_1000 = 0;
    pri = fun_23C0()
    var_1008 = 0;
    var_1016 = 1;
    var_1024 = 230;
    pri = float(var_1024)
    var_1032 = pri;
    var_1040 = 4611686018427387904;
    var_1048 = 32;
    pri = fun_28B8(var_1040, var_1032, var_1024, var_1016)
    var_1056 = 0;
    var_1064 = 4630164850648442470;
    var_1072 = 0;
    OP_PUSH5_C 4671157876696117412, 4637353721553632625, 4671228891403376394, 4671324917251388211, 4634457344043279974
    var_1080 = 4671225930968318607;
    var_1088 = 1;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 0;
    pri = fun_27C0()
    var_1104 = 0;
    var_1112 = 4630164850648442470;
    var_1120 = 3;
    OP_PUSH5_C 4671145570412223529, 4637566938848490947, 4671229111305701949, 4671312281114005996, 4634676190837672509
    var_1128 = 4671226156368202301;
    var_1136 = 90;
    pri = EvCameraMove(var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064)
    var_1144 = 1;
    var_1152 = 0;
    var_1160 = 4641240890982006784;
    var_1168 = -90;
    pri = float(var_1168)
    var_1176 = pri;
    var_1184 = 0;
    var_1192 = 20000;
    pri = float(var_1192)
    var_1200 = pri;
    var_1208 = 20050;
    pri = float(var_1208)
    var_1216 = pri;
    OP_PUSH2_C 4607182418800017408, 6023732433702693609
    var_1224 = 72;
    pri = fun_08D0(var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1232 = 1;
    var_1240 = 0;
    var_1248 = 4641240890982006784;
    var_1256 = 90;
    pri = float(var_1256)
    var_1264 = pri;
    var_1272 = 0;
    var_1280 = 20000;
    pri = float(var_1280)
    var_1288 = pri;
    var_1296 = 19950;
    pri = float(var_1296)
    var_1304 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1312 = 72;
    pri = fun_08D0(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240)
    var_1320 = 1;
    var_1328 = 0;
    var_1336 = 15;
    var_1344 = 20000;
    pri = float(var_1344)
    var_1352 = pri;
    var_1360 = 145;
    pri = float(var_1360)
    var_1368 = pri;
    var_1376 = 20050;
    pri = float(var_1376)
    var_1384 = pri;
    var_1392 = 8802641224559852288;
    var_1400 = 56;
    pri = fun_1120(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344)
    var_1408 = 1;
    var_1416 = 0;
    var_1424 = 15;
    var_1432 = 10;
    pri = float(var_1432)
    var_1440 = pri;
    var_1448 = 0;
    var_1456 = 6023732433702693609;
    var_1464 = 48;
    pri = fun_11E0(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416)
    var_1472 = 6023732433702693609;
    var_1480 = 8;
    pri = fun_09F0(var_1472)
    var_1488 = 8802641224559852288;
    var_1496 = 8;
    pri = fun_09F0(var_1488)
    var_1504 = 15;
    var_1512 = 8;
    pri = fun_0060(var_1504)
    var_1520 = 1;
    var_1528 = 0;
    var_1536 = 15;
    OP_PUSH2_C 6023732433702693609, 8802641224559852288
    var_1544 = 40;
    pri = fun_1188(var_1536, var_1528, var_1520, var_1512, var_1504)
    var_1552 = 1;
    var_1560 = 0;
    var_1568 = 15;
    OP_PUSH2_C 8802641224559852288, 6023732433702693609
    var_1576 = 40;
    pri = fun_1188(var_1568, var_1560, var_1552, var_1544, var_1536)
    var_1584 = 0;
    var_1592 = 10;
    OP_PUSH2_C 8802641224559852288, 6023732433702693609
    var_1600 = 32;
    pri = fun_12D8(var_1592, var_1584, var_1576, var_1568)
    var_1608 = 34808;
    pri = SoundPostEvent(var_1608)
    var_1616 = 1;
    var_1624 = -1;
    var_1632 = -1;
    var_1640 = 1;
    var_1648 = 8802641224559852288;
    var_1656 = 40;
    pri = fun_6B58(var_1648, var_1640, var_1632, var_1624, var_1616)
    var_1664 = 1;
    var_1672 = 1;
    var_1680 = -1;
    var_1688 = -1;
    var_1696 = 0;
    var_1704 = 40;
    var_1712 = 6023732433702693609;
    var_1720 = 56;
    pri = fun_4610(var_1712, var_1704, var_1696, var_1688, var_1680, var_1672, var_1664)
    var_1728 = 15;
    var_1736 = 8;
    pri = fun_0060(var_1728)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1744 = 3;
    var_1752 = 1;
    var_1760 = 32;
    pri = fun_2910(var_1752, var_1744, var_1736, var_1728)
    var_1768 = 0;
    var_1776 = 4626379012211684147;
    var_1784 = 0;
    OP_PUSH5_C 4671094728994555167, 4636874510405782733, 4671230012905236726, 4671261819027849216, 4636590220679304970
    var_1792 = 4671227044223841731;
    var_1800 = 1;
    pri = EvCameraMove(var_1800, var_1792, var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728)
    var_1808 = 30;
    var_1816 = 8;
    pri = fun_0060(var_1808)
    var_1824 = 1002;
    var_1832 = 35008;
    var_1840 = 16;
    pri = fun_24A8(var_1832, var_1824)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1848 = 16;
    pri = fun_2850(var_1840, var_1832)
    var_1856 = 0;
    var_1864 = 1;
    var_1872 = 150;
    pri = float(var_1872)
    var_1880 = pri;
    var_1888 = 4611686018427387904;
    var_1896 = 32;
    pri = fun_28B8(var_1888, var_1880, var_1872, var_1864)
    var_1904 = 0;
    var_1912 = 4632092954238910464;
    var_1920 = 0;
    OP_PUSH5_C 4671094924157869097, 4638985220887391764, 4671230012905236726, 4671259301146221609, 4637015951581579837
    var_1928 = 4671227090953085911;
    var_1936 = 1;
    pri = EvCameraMove(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1944 = 0;
    pri = fun_27C0()
    var_1952 = 0;
    var_1960 = 4632092954238910464;
    var_1968 = 0;
    OP_PUSH5_C 4671094871931066778, 4638858908991592858, 4671230012905236726, 4671264169233953587, 4636696477483013243
    var_1976 = 4671227002992155689;
    var_1984 = 240;
    pri = EvCameraMove(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1992 = 3;
    var_2000 = 0;
    var_2008 = 2548951742253233998;
    var_2016 = 24;
    pri = fun_2218(var_2008, var_2000, var_1992)
    var_2024 = 1;
    var_2032 = 8;
    pri = fun_2300(var_2024)
    var_2040 = 0;
    pri = fun_23C0()
    var_2048 = 0;
    var_2056 = 3;
    var_2064 = 0;
    var_2072 = 100;
    var_2080 = -1;
    OP_PUSH2_C 8225243181859277336, 6023732433702693609
    var_2088 = 56;
    pri = fun_2168(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2096 = 1;
    var_2104 = 8;
    pri = fun_2300(var_2096)
    var_2112 = 0;
    var_2120 = 3;
    var_2128 = 0;
    var_2136 = 100;
    var_2144 = -1;
    OP_PUSH2_C 8225244281370905547, 6023732433702693609
    var_2152 = 56;
    pri = fun_2168(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096)
    var_2160 = 1;
    var_2168 = 8;
    pri = fun_2300(var_2160)
    var_2176 = 0;
    pri = fun_23C0()
    var_2184 = 3;
    var_2192 = 8;
    pri = fun_0408(var_2184)
    var_2200 = 0;
    pri = fun_0440()
    var_2208 = 35136;
    pri = SoundPostEvent(var_2208)
    var_2216 = 1;
    var_2224 = 0;
    var_2232 = 35400;
    var_2240 = 8;
    var_2248 = 32;
    pri = fun_02E0(var_2240, var_2232, var_2224, var_2216)
    var_2256 = 0;
    pri = fun_0350()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2264 = 3;
    var_2272 = 1;
    var_2280 = 32;
    pri = fun_2910(var_2272, var_2264, var_2256, var_2248)
    var_2288 = 0;
    var_2296 = 8802641224559852288;
    var_2304 = 16;
    pri = fun_8410(var_2296, var_2288)
    var_2312 = 1;
    var_2320 = 6023732433702693609;
    var_2328 = 16;
    pri = fun_8410(var_2320, var_2312)
    pri = 0;
    return pri;
}
// fun_BC60
fun_BC60() {
    var_8 = 6023732433702693609;
    var_16 = 8;
    pri = fun_0740(var_8)
    var_24 = 800;
    var_32 = 8;
    pri = fun_82A0(var_24)
    var_40 = 30;
    var_48 = 8021964092511761817;
    pri = WorkSet(var_48, var_40)
    var_56 = -4228322870407095995;
    pri = VanishFlagReset(var_56)
    var_64 = -3276541588292305844;
    pri = VanishFlagSet(var_64)
    var_72 = 8934089827376349105;
    pri = VanishFlagSet(var_72)
    var_80 = 7241280844505437625;
    pri = VanishFlagSet(var_80)
    var_88 = 189518795947836353;
    pri = VanishFlagSet(var_88)
    var_96 = 6404368837009661395;
    pri = VanishFlagSet(var_96)
    var_104 = 1341677696172497001;
    pri = VanishFlagSet(var_104)
    var_112 = -6389908182130456180;
    pri = VanishFlagSet(var_112)
    var_120 = -9019446742694110882;
    var_128 = 8;
    pri = fun_72B0(var_120)
    var_136 = -7105283499859088535;
    pri = FlagSet(var_136)
    pri = 0;
    return pri;
}
// fun_BE80
fun_BE80() {
    var_8 = 0;
    pri = SetPlayerUniform(var_8)
    var_16 = 0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_7900(var_24, var_16)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2813;
    pri = float(var_80)
    var_88 = pri;
    var_96 = 2563;
    pri = float(var_96)
    var_104 = pri;
    OP_PUSH3_C 4970112047004925188, 1082012253497709453, 5735056094494353814
    var_112 = 80;
    pri = fun_0570(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    pri = 0;
    return pri;
}
// fun_BF90
fun_BF90() {
    var_8 = 770;
    var_16 = 8;
    pri = fun_82A0(var_8)
    pri = 0;
    return pri;
}
// fun_BFC8
fun_BFC8() {
    var_8 = 180;
    var_16 = 7173170291637340478;
    var_24 = 1850;
    var_32 = 2410;
    OP_PUSH2_C 4970112047004925188, 1082012253497709453
    var_40 = 3;
    var_48 = 56;
    pri = fun_8200(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_C040
fun_C040() {
    var_8 = 0;
    pri = fun_86C8()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_8730()
    var_24 = 0;
    pri = fun_8788()
    var_32 = 0;
    pri = fun_87A0()
    var_40 = 0;
    pri = fun_87B8()
    var_48 = 0;
    pri = fun_BC60()
    var_56 = 0;
    pri = fun_BE80()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_C130
fun_C130() {
    var_8 = 0;
    pri = fun_8788()
    var_16 = 0;
    pri = fun_BC60()
    pri = 0;
    return pri;
}
// fun_C178
fun_C178() {
    var_8 = -2280518187774690054;
    var_16 = 8;
    pri = fun_7FF0(var_8)
    OP_JZER lab_C1E8
    var_24 = 0;
    pri = fun_BF90()
    var_32 = 0;
    pri = fun_BFC8()
// lab_C1E8
    pri = 0;
    return pri;
}
