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
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0468
fun_0468() {
    OP_JUMP lab_0480
// lab_0480
    pri = IsLoadedLogoFade_()
    OP_JZER lab_04B8
    pri = 0;
    return pri;
// lab_04B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0480
    pri = 0;
    return pri;
}
// fun_04F8
fun_04F8() {
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
// fun_0598
fun_0598() {
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
// fun_0658
fun_0658() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_06A0
// lab_06A0
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_06E0
    OP_JUMP lab_0750
// lab_06E0
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0720
    OP_JUMP lab_0750
// lab_0720
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_06A0
// lab_0750
    pri = 0;
    return pri;
}
// fun_0768
fun_0768() {
    pri = arg_0;
    switch (pri) {
// switch_0910
        case default:
        {
// switch_0910_case_default
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0910_case_0x0
            var_8 = 0;
            var_16 = 4;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
        case 0x1:
        {
// switch_0910_case_0x1
            var_8 = 0;
            var_16 = 6;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
        case 0x2:
        {
// switch_0910_case_0x2
            var_8 = 0;
            var_16 = 9;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
        case 0x3:
        {
// switch_0910_case_0x3
            var_8 = 0;
            var_16 = 12;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
        case 0x4:
        {
// switch_0910_case_0x4
            var_8 = 0;
            var_16 = 19;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
        case 0x5:
        {
// switch_0910_case_0x5
            var_8 = 0;
            var_16 = 20;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
        case 0x6:
        {
// switch_0910_case_0x6
            var_8 = 0;
            var_16 = 0;
            pri = FixGameTime_(var_16, var_8)
            OP_JUMP switch_0910_case_default
        }
    }
}
// fun_09A8
fun_09A8() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0A10
// lab_0A10
    var_8 = 0;
    pri = fun_0B28()
    OP_JNZ lab_0A48
    OP_JUMP lab_0A78
// lab_0A48
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0A10
// lab_0A78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0AA8
// lab_0AA8
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0AE8
    pri = 0;
    return pri;
// lab_0AE8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0AA8
    pri = 0;
    return pri;
}
// fun_0B28
fun_0B28() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BA0
fun_0BA0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0C38
fun_0C38() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0C78
fun_0C78() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0CB0
fun_0CB0() {
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
// fun_0D28
fun_0D28() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0DD0
fun_0DD0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    OP_JZER lab_0E48
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1890(var_24)
    OP_JNZ lab_0E48
    pri = 0;
    return pri;
// lab_0E48
    OP_JUMP lab_0E58
// lab_0E58
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0EB8
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0EB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E58
    pri = 0;
    return pri;
}
// fun_0EF8
fun_0EF8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0F30
fun_0F30() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0F70
fun_0F70() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0FA8
fun_0FA8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0FF0
    pri = 0;
    return pri;
// lab_0FF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1030
// lab_1030
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1860(var_8)
    OP_JNZ lab_10B8
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_10A8
    pri = 0;
    return pri;
// lab_10B8
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_1100
    pri = 0;
    return pri;
// lab_1100
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1160
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11A8(var_8)
    pri = 0;
    return pri;
// lab_1160
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1030
    pri = 0;
    return pri;
// lab_10A8
    OP_JUMP lab_1100
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
    pri = fun_1860(var_8)
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
// lab_1288
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12B0
    OP_ZERO_P_S 72
// lab_12B0
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
// fun_1568
fun_1568() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15C0
fun_15C0() {
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
// fun_1620
fun_1620() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1660
fun_1660() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = StartFieldObjectEyeLookAtFieldObject_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16B0
fun_16B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16F0
fun_16F0() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1728
fun_1728() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1768
fun_1768() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_17A0
fun_17A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_16B0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1728(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1808
fun_1808() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16F0(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1768(var_24)
    pri = 0;
    return pri;
}
// fun_1860
fun_1860() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1890
fun_1890() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_18C0
fun_18C0() {
    OP_JUMP lab_18D8
// lab_18D8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1968
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1958
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    pri = 0;
    return pri;
// lab_1968
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_19F8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_19E8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    pri = 0;
    return pri;
// lab_19F8
    pri = 0;
    return pri;
// lab_19E8
    OP_JUMP lab_1A08
// lab_1A08
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18D8
    pri = 0;
    return pri;
// lab_1958
    OP_JUMP lab_1A08
}
// fun_1A48
fun_1A48() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_18C0(var_40)
    pri = 0;
    return pri;
}
// fun_1AD0
fun_1AD0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1B08
fun_1B08() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B30
fun_1B30() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1B80
fun_1B80() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1BC0
fun_1BC0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1BF8
fun_1BF8() {
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
// switch_2210
        case default:
        {
// switch_2210_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2258
// lab_2258
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
            OP_JNZ lab_2300
            var_88 = 0;
            pri = fun_25D0()
// lab_2300
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2210_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1DF8
                case default:
                {
// switch_1DF8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E70
// lab_1E70
                    OP_JUMP lab_2258
                }
                case 0x0:
                {
// switch_1DF8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1E70
                }
                case 0x1:
                {
// switch_1DF8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1E70
                }
                case 0x2:
                {
// switch_1DF8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1E70
                }
                case 0x3:
                {
// switch_1DF8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1E70
                }
                case 0x4:
                {
// switch_1DF8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1E70
                }
                case 0x5:
                {
// switch_1DF8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1E70
                }
            }
        }
        case 0x65:
        {
// switch_2210_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1FB0
                case default:
                {
// switch_1FB0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2028
// lab_2028
                    OP_JUMP lab_2258
                }
                case 0x0:
                {
// switch_1FB0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2028
                }
                case 0x1:
                {
// switch_1FB0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2028
                }
                case 0x2:
                {
// switch_1FB0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2028
                }
                case 0x3:
                {
// switch_1FB0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2028
                }
                case 0x4:
                {
// switch_1FB0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2028
                }
                case 0x5:
                {
// switch_1FB0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2028
                }
            }
        }
        case 0x66:
        {
// switch_2210_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2168
                case default:
                {
// switch_2168_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21E0
// lab_21E0
                    OP_JUMP lab_2258
                }
                case 0x0:
                {
// switch_2168_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_21E0
                }
                case 0x1:
                {
// switch_2168_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_21E0
                }
                case 0x2:
                {
// switch_2168_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_21E0
                }
                case 0x3:
                {
// switch_2168_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_21E0
                }
                case 0x4:
                {
// switch_2168_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_21E0
                }
                case 0x5:
                {
// switch_2168_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_21E0
                }
            }
        }
    }
}
// fun_2318
fun_2318() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1BF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2380
fun_2380() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0F70(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2428
    pri = 1;
    return pri;
// lab_2428
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2470
fun_2470() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_24C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2380(var_8)
    arg_2 = pri;
// lab_24C0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1BF8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2520
fun_2520() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2318(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2570
fun_2570() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2520(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25D0
fun_25D0() {
    OP_JUMP lab_25E8
// lab_25E8
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2628
    pri = 0;
    return pri;
// lab_2628
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_25E8
    pri = 0;
    return pri;
}
// fun_2668
fun_2668() {
    var_8 = 0;
    pri = fun_25D0()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2718
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2718
    pri = 0;
    return pri;
}
// fun_2728
fun_2728() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2758
fun_2758() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_27D0()
    return pri;
}
// fun_27D0
fun_27D0() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2810
fun_2810() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2848
fun_2848() {
    OP_JUMP lab_2860
// lab_2860
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_28A8
    OP_JUMP lab_28D8
    OP_JUMP lab_28C8
// lab_28A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_28D8
    pri = 0;
    return pri;
// lab_28C8
    OP_JUMP lab_2860
}
// fun_28E8
fun_28E8() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2918
fun_2918() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2968
fun_2968() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29B8
fun_29B8() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A08
fun_2A08() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A58
fun_2A58() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AA8
fun_2AA8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AE8
fun_2AE8() {
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
// fun_2B48
fun_2B48() {
    OP_JUMP lab_2B60
// lab_2B60
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2B98
    pri = 0;
    return pri;
// lab_2B98
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2B60
    pri = 0;
    return pri;
}
// fun_2BD8
fun_2BD8() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2C08
fun_2C08() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2C80
fun_2C80() {
    var_8 = 0;
    pri = fun_2C08()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2D00
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2D00
    pri = 1;
    return pri;
// lab_2D00
    var_8 = 0;
    pri = fun_2C08()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2D40
    pri = 1;
    return pri;
// lab_2D40
    var_8 = 0;
    pri = fun_2C08()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2D70
fun_2D70() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2DC0
fun_2DC0() {
    OP_JUMP lab_2DD8
// lab_2DD8
    pri = EvCameraMoveWait_()
    OP_JZER lab_2E10
    pri = 0;
    return pri;
// lab_2E10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2DD8
    pri = 0;
    return pri;
}
// fun_2E50
fun_2E50() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2EB8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2F90()
    pri = 0;
    return pri;
}
// fun_2EB8
fun_2EB8() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2F10
fun_2F10() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2EB8(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2F90()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2F90
fun_2F90() {
    OP_JUMP lab_2FA8
// lab_2FA8
    pri = IsEasingRunningDof_()
    OP_JZER lab_3000
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_3010
// lab_3000
    pri = 0;
    return pri;
// lab_3010
    OP_JUMP lab_2FA8
    pri = 0;
    return pri;
}
// fun_3030
fun_3030() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_3068
fun_3068() {
    pri = arg_6;
    OP_JNZ lab_30A0
    var_8 = 0;
    pri = fun_1480()
// lab_30A0
    pri = arg_1;
    switch (pri) {
// switch_4608
        case default:
        {
// switch_4608_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4958
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4958
            pri = 1;
            OP_JUMP lab_4960
// lab_4958
            pri = 0;
// lab_4960
            OP_JZER lab_4AB8
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F70(var_24, var_16)
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
            OP_JUMP lab_4B18
// lab_4AB8
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
// lab_4B18
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4B78
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4BD8
// lab_4B78
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4BD8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4BD8
            pri = arg_2;
            OP_JZER lab_4C18
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4C18
            var_8 = 0;
            pri = fun_14C0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4608_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x1:
        {
// switch_4608_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x2:
        {
// switch_4608_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x3:
        {
// switch_4608_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x4:
        {
// switch_4608_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x5:
        {
// switch_4608_case_0x5
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0x6:
        {
// switch_4608_case_0x6
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0x7:
        {
// switch_4608_case_0x7
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0x8:
        {
// switch_4608_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x9:
        {
// switch_4608_case_0x9
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0xa:
        {
// switch_4608_case_0xa
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0xb:
        {
// switch_4608_case_0xb
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0xc:
        {
// switch_4608_case_0xc
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0xd:
        {
// switch_4608_case_0xd
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0xe:
        {
// switch_4608_case_0xe
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0xf:
        {
// switch_4608_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x10:
        {
// switch_4608_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x11:
        {
// switch_4608_case_0x11
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0x12:
        {
// switch_4608_case_0x12
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0x13:
        {
// switch_4608_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x14:
        {
// switch_4608_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x15:
        {
// switch_4608_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x16:
        {
// switch_4608_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x17:
        {
// switch_4608_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x18:
        {
// switch_4608_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x19:
        {
// switch_4608_case_0x19
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4608_case_default
        }
        case 0x1a:
        {
// switch_4608_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EF8(var_48, var_40)
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
            pri = fun_11E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4608_case_default
        }
        case 0x1b:
        {
// switch_4608_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EF8(var_48, var_40)
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
            pri = fun_11E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4608_case_default
        }
        case 0x1c:
        {
// switch_4608_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EF8(var_48, var_40)
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
            pri = fun_11E0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4608_case_default
        }
        case 0x1d:
        {
// switch_4608_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x1e:
        {
// switch_4608_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x1f:
        {
// switch_4608_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x20:
        {
// switch_4608_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x21:
        {
// switch_4608_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x22:
        {
// switch_4608_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x23:
        {
// switch_4608_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x24:
        {
// switch_4608_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x25:
        {
// switch_4608_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x26:
        {
// switch_4608_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x27:
        {
// switch_4608_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x28:
        {
// switch_4608_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
        case 0x29:
        {
// switch_4608_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4608_case_default
        }
    }
}
// fun_4C48
fun_4C48() {
    pri = arg_5;
    OP_JNZ lab_4C80
    var_8 = 0;
    pri = fun_1480()
// lab_4C80
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4CD0
    OP_CONST_S -8, -1
// lab_4CD0
    pri = arg_1;
    switch (pri) {
// switch_6788
        case default:
        {
// switch_6788_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6C30
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0F70(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6C30
            pri = 1;
            OP_JUMP lab_6C38
// lab_6C30
            pri = 0;
// lab_6C38
            OP_JZER lab_6C88
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6EE0
// lab_6C88
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6CF0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6CF0
            pri = 1;
            OP_JUMP lab_6CF8
// lab_6CF0
            pri = 0;
// lab_6CF8
            OP_JZER lab_6E80
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F70(var_24, var_16)
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
            OP_JUMP lab_6EE0
// lab_6E80
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
// lab_6EE0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6F50
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6F50
            var_8 = 0;
            pri = fun_14C0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6788_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x1:
        {
// switch_6788_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x2:
        {
// switch_6788_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x3:
        {
// switch_6788_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x4:
        {
// switch_6788_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x5:
        {
// switch_6788_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11A8(var_40)
            OP_JUMP switch_6788_case_default
        }
        case 0x6:
        {
// switch_6788_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x7:
        {
// switch_6788_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x8:
        {
// switch_6788_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x9:
        {
// switch_6788_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0xa:
        {
// switch_6788_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0xb:
        {
// switch_6788_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0xc:
        {
// switch_6788_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0xd:
        {
// switch_6788_case_0xd
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0xe:
        {
// switch_6788_case_0xe
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0xf:
        {
// switch_6788_case_0xf
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x10:
        {
// switch_6788_case_0x10
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x11:
        {
// switch_6788_case_0x11
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x12:
        {
// switch_6788_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x13:
        {
// switch_6788_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x14:
        {
// switch_6788_case_0x14
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x15:
        {
// switch_6788_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x16:
        {
// switch_6788_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x17:
        {
// switch_6788_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x18:
        {
// switch_6788_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x19:
        {
// switch_6788_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x1a:
        {
// switch_6788_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x1b:
        {
// switch_6788_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x1c:
        {
// switch_6788_case_0x1c
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x1d:
        {
// switch_6788_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x1e:
        {
// switch_6788_case_0x1e
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x1f:
        {
// switch_6788_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x20:
        {
// switch_6788_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x21:
        {
// switch_6788_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x22:
        {
// switch_6788_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x23:
        {
// switch_6788_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x24:
        {
// switch_6788_case_0x24
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x25:
        {
// switch_6788_case_0x25
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x26:
        {
// switch_6788_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x27:
        {
// switch_6788_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x28:
        {
// switch_6788_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x29:
        {
// switch_6788_case_0x29
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x2a:
        {
// switch_6788_case_0x2a
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x2b:
        {
// switch_6788_case_0x2b
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x2c:
        {
// switch_6788_case_0x2c
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x2d:
        {
// switch_6788_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x2e:
        {
// switch_6788_case_0x2e
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x2f:
        {
// switch_6788_case_0x2f
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x30:
        {
// switch_6788_case_0x30
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x31:
        {
// switch_6788_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x32:
        {
// switch_6788_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x33:
        {
// switch_6788_case_0x33
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x34:
        {
// switch_6788_case_0x34
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x35:
        {
// switch_6788_case_0x35
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x36:
        {
// switch_6788_case_0x36
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x37:
        {
// switch_6788_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x38:
        {
// switch_6788_case_0x38
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
            pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6788_case_default
        }
        case 0x39:
        {
// switch_6788_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x3a:
        {
// switch_6788_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x3b:
        {
// switch_6788_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x3c:
        {
// switch_6788_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x3d:
        {
// switch_6788_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
        case 0x3e:
        {
// switch_6788_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            OP_JUMP switch_6788_case_default
        }
    }
}
// fun_6F80
fun_6F80() {
    pri = arg_4;
    OP_JNZ lab_6FB8
    var_8 = 0;
    pri = fun_1480()
// lab_6FB8
    pri = arg_1;
    switch (pri) {
// switch_8390
        case default:
        {
// switch_8390_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1860(var_264)
            OP_JZER lab_8958
            pri = arg_3;
            switch (pri) {
// switch_8900
                case default:
                {
// switch_8900_case_default
                    OP_JUMP lab_8C10
// lab_8C10
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8C80
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8C80
                    var_8 = 0;
                    pri = fun_14C0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8900_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8900_case_default
                }
                case 0x2:
                {
// switch_8900_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8900_case_default
                }
                case 0x3:
                {
// switch_8900_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8900_case_default
                }
            }
// lab_8958
            pri = arg_1;
            OP_JZER lab_89A8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_89A8
            pri = 0;
            OP_JUMP lab_89B0
// lab_89A8
            pri = 1;
// lab_89B0
            OP_JZER lab_8A18
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0F70(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8A18
            pri = 1;
            OP_JUMP lab_8A20
// lab_8A18
            pri = 0;
// lab_8A20
            OP_JZER lab_8A70
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8C10
// lab_8A70
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8AD8
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8C10
// lab_8AD8
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F70(var_24, var_16)
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
// switch_8390_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1:
        {
// switch_8390_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2:
        {
// switch_8390_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x3:
        {
// switch_8390_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x4:
        {
// switch_8390_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x5:
        {
// switch_8390_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11A8(var_40)
            OP_JUMP switch_8390_case_default
        }
        case 0x6:
        {
// switch_8390_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x7:
        {
// switch_8390_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x8:
        {
// switch_8390_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x9:
        {
// switch_8390_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0xa:
        {
// switch_8390_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0xb:
        {
// switch_8390_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0xc:
        {
// switch_8390_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0xd:
        {
// switch_8390_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0xe:
        {
// switch_8390_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0xf:
        {
// switch_8390_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x10:
        {
// switch_8390_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x11:
        {
// switch_8390_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x12:
        {
// switch_8390_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x13:
        {
// switch_8390_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x14:
        {
// switch_8390_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x15:
        {
// switch_8390_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x16:
        {
// switch_8390_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x17:
        {
// switch_8390_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x18:
        {
// switch_8390_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x19:
        {
// switch_8390_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1a:
        {
// switch_8390_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1b:
        {
// switch_8390_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1c:
        {
// switch_8390_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1d:
        {
// switch_8390_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1e:
        {
// switch_8390_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x1f:
        {
// switch_8390_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x20:
        {
// switch_8390_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x21:
        {
// switch_8390_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x22:
        {
// switch_8390_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x23:
        {
// switch_8390_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x24:
        {
// switch_8390_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x25:
        {
// switch_8390_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x26:
        {
// switch_8390_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x27:
        {
// switch_8390_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x28:
        {
// switch_8390_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x29:
        {
// switch_8390_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2a:
        {
// switch_8390_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2b:
        {
// switch_8390_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2c:
        {
// switch_8390_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2d:
        {
// switch_8390_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2e:
        {
// switch_8390_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x2f:
        {
// switch_8390_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x30:
        {
// switch_8390_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x31:
        {
// switch_8390_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x32:
        {
// switch_8390_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x33:
        {
// switch_8390_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x34:
        {
// switch_8390_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x35:
        {
// switch_8390_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x36:
        {
// switch_8390_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x37:
        {
// switch_8390_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x38:
        {
// switch_8390_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x39:
        {
// switch_8390_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x3a:
        {
// switch_8390_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x3b:
        {
// switch_8390_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x3c:
        {
// switch_8390_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x3d:
        {
// switch_8390_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
        case 0x3e:
        {
// switch_8390_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F30(var_24, var_16, var_8)
            OP_JUMP switch_8390_case_default
        }
    }
}
// fun_8CB0
fun_8CB0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_93A8(var_16, var_8)
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
    OP_JZER lab_8EA8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8EA8
    pri = 0;
    return pri;
}
// fun_8EC0
fun_8EC0() {
    pri = arg_4;
    OP_JNZ lab_8EF8
    var_8 = 0;
    pri = fun_1480()
// lab_8EF8
    pri = arg_1;
    OP_JNZ lab_8FA0
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30472;
    var_72 = 30464;
    var_80 = 30320;
    var_88 = 30168;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8FA0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9000
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9000
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_90B0
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30928;
    var_72 = 30784;
    var_80 = 30632;
    var_88 = 30480;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_90B0
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_9160
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31560;
    var_72 = 31408;
    var_80 = 31240;
    var_88 = 31064;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9160
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9210
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31760;
    var_72 = 31752;
    var_80 = 31744;
    var_88 = 31568;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9210
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_92C0
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32176;
    var_72 = 32048;
    var_80 = 31912;
    var_88 = 31768;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_11E0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_92C0
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9320
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9320
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_9380
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9380
    var_8 = 0;
    pri = fun_14C0()
    pri = 0;
    return pri;
}
// fun_93A8
fun_93A8() {
    var_8 = arg_1;
    var_16 = 32344;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F30(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_93F0
fun_93F0() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9488
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_3068(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9488
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_95E0
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9548
    var_24 = 32448;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9548
    pri = 1;
    OP_JUMP lab_9550
// lab_95E0
    pri = 0;
    return pri;
// lab_9548
    pri = 0;
// lab_9550
    OP_JZER lab_95E0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FA8(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_3068(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_95F0
fun_95F0() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_93F0(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9678(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9678
fun_9678() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9A18(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_96E0
fun_96E0() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9750
    OP_CONST_S -8, 1
// lab_9750
    pri = arg_0;
    OP_JNZ lab_9770
    OP_ZERO_P_S -8
// lab_9770
    pri = var_8;
    OP_JZER lab_97F8
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_97F8
    pri = 0;
    return pri;
}
// fun_9810
fun_9810() {
    var_8 = 32552;
    var_16 = 8;
    pri = fun_2810(var_8)
    var_24 = 0;
    pri = fun_2848()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2918(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2A58(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_28E8()
    var_88 = 32784;
    var_96 = 8;
    pri = fun_2810(var_88)
    var_104 = 0;
    pri = fun_2848()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_93F0(var_128, var_120, var_112)
    var_144 = 32944;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_2570(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0658(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2668(var_200)
    var_216 = 0;
    pri = fun_2728()
    var_224 = 0;
    pri = fun_28E8()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_3030(var_232)
    pri = 0;
    return pri;
}
// fun_9A18
fun_9A18() {
    var_8 = 33128;
    var_16 = 8;
    pri = fun_2810(var_8)
    var_24 = 0;
    pri = fun_2848()
    pri = arg_3;
    OP_JNZ lab_9B38
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9B00
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9BA8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9B28
// lab_9B38
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9D48(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9B00
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9C70(var_16, var_8)
// lab_9B28
    OP_JUMP lab_9B80
// lab_9B80
    var_8 = 0;
    pri = fun_28E8()
    pri = 0;
    return pri;
}
// fun_9BA8
fun_9BA8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9D48(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9C58
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9C58
    pri = 0;
    return pri;
}
// fun_9C70
fun_9C70() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2968(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2570(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2668(var_72)
    var_88 = 0;
    pri = fun_2728()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2918(var_96)
    pri = 0;
    return pri;
}
// fun_9D48
fun_9D48() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9D90
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A050(var_8)
// lab_9D90
    pri = arg_4;
    OP_JNZ lab_9DF8
    var_8 = 0;
    var_16 = 8;
    pri = fun_2918(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2968(var_40, var_32, var_24)
// lab_9DF8
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_9E98
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_29B8(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2570(var_56, var_48, var_40)
    OP_JUMP lab_9F88
// lab_9E98
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_9F50
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_9F50
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_9F50
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2570(var_24, var_16, var_8)
// lab_9F88
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9FC8
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
// lab_9FC8
    var_8 = 1;
    var_16 = 8;
    pri = fun_2668(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A258(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_96E0(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A050
fun_A050() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A0B0
    var_16 = 33288;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A0B0
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A1F0
        case default:
        {
// switch_A1F0_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A1E0
            var_16 = 33832;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A1E0
            OP_JUMP lab_A228
// lab_A228
            var_8 = 34048;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A1F0_case_0x1
            var_8 = 33504;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A228
        }
        case 0x2:
        {
// switch_A1F0_case_0x2
            var_8 = 33632;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A228
        }
    }
}
// fun_A258
fun_A258() {
    pri = arg_2;
    OP_JNZ lab_A340
    var_8 = 0;
    var_16 = 8;
    pri = fun_2918(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2968(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2A08(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_A340
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2570(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2668(var_40)
    var_56 = 0;
    pri = fun_2728()
    pri = 0;
    return pri;
}
// fun_A3B8
fun_A3B8() {
    pri = 34232;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_A440
// lab_A440
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A5C0
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A5B0
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_A500
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_A500
    pri = 0;
    OP_JUMP lab_A508
// lab_A5C0
    pri = 0;
    return pri;
// lab_A5B0
    OP_JUMP lab_A438
// lab_A438
    OP_INC_P_S -936
// lab_A500
    pri = 1;
// lab_A508
    OP_JZER lab_A580
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A578
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A580
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A578
}
// fun_A5E0
fun_A5E0() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_A668()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_A668
fun_A668() {
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
// fun_A918
fun_A918() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A9B0
    var_8 = 1;
    var_16 = 0;
    var_24 = 35152;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1B08()
// lab_A9B0
    pri = arg_4;
    OP_JZER lab_A9E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BC0(var_8)
// lab_A9E8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_AA40
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_AA40
    pri = 0;
    OP_JUMP lab_AA48
// lab_AA40
    pri = 1;
// lab_AA48
    OP_JZER lab_AB10
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_AB10
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_AAE8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1A48(var_32, var_24)
    OP_JUMP lab_AB10
// lab_AB10
    pri = arg_2;
    OP_JZER lab_ABE8
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_ABB8
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1620(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0C78(var_40)
    OP_JUMP lab_ABE8
// lab_ABE8
    pri = arg_3;
    OP_JZER lab_AC20
    var_8 = 1;
    var_16 = 8;
    pri = fun_1AD0(var_8)
// lab_AC20
    pri = 0;
    return pri;
// lab_ABB8
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1620(var_16, var_8)
// lab_AAE8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1A48(var_16, var_8)
}
// fun_AC30
fun_AC30() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_ADB0
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_ACC8
    var_8 = 1;
    var_16 = 0;
    var_24 = 35152;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_ADB0
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_ACC8
    pri = arg_0;
    OP_JNZ lab_AD10
    var_8 = 35200;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_AD30
// lab_AD10
    var_8 = 35376;
    pri = SoundPostEvent(var_8)
// lab_AD30
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_ADB0
    var_24 = 35640;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_ADF0
fun_ADF0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0430(var_8)
    var_24 = 0;
    pri = fun_0468()
    pri = arg_1;
    OP_JZER lab_AE68
    var_32 = 35688;
    pri = SoundPostEvent(var_32)
// lab_AE68
    var_8 = 35888;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 36152;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0308(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_AEE8
fun_AEE8() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_AF38
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_ADF0(var_16, var_8)
// lab_AF38
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0DD0(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_AFD8
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_AFD8
    pri = 1;
    OP_JUMP lab_AFE0
// lab_AFD8
    pri = 0;
// lab_AFE0
    OP_JZER lab_B178
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_B0C0
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
    pri = fun_04F8(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_B168
// lab_B178
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
    pri = fun_0B50(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_B0C0
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
    pri = fun_0598(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_B168
    OP_JUMP lab_B238
// lab_B238
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_B2B0
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0BF8(var_32, var_24, var_16)
// lab_B2B0
    var_8 = 36168;
    pri = SoundPostEvent(var_8)
    var_16 = 36440;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02A8(var_24, var_16)
    var_40 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B320
fun_B320() {
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2520(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2668(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_2758(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B420
    pri = 1;
    return pri;
// lab_B420
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
    pri = fun_0CB0(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0DD0(var_96)
    pri = 0;
    return pri;
}
// fun_B530
fun_B530() {
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
    pri = fun_AEE8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_B5D0
fun_B5D0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_A3B8(var_24)
    pri = 0;
    return pri;
}
// fun_B638
fun_B638() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_B7B8(var_16)
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
    pri = fun_0B50(var_80, var_72, var_64, var_56, var_48)
    var_96 = 36512;
    var_104 = 36456;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1B30(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_B740
fun_B740() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_B7B8(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1B80(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_B7B8
fun_B7B8() {
    pri = arg_0;
    OP_JNZ lab_B800
    var_8 = 36568;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_B800
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B848
    var_8 = 36720;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_B848
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 36872;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_B890
fun_B890() {
    pri = g_mode;
    switch (pri) {
// switch_B978
        case default:
        {
// switch_B978_case_default
            pri = CommandNOP()
            OP_JUMP lab_B9D0
// lab_B9D0
            pri = 0;
            return pri;
        }
        case 0x92dcb1febd688e2b:
        {
// switch_B978_case_0x92dcb1febd688e2b
            var_8 = 0;
            pri = fun_F790()
            OP_JUMP lab_B9D0
        }
        case 0xa632ab221053e5db:
        {
// switch_B978_case_0xa632ab221053e5db
            var_8 = 0;
            pri = fun_F658()
            OP_JUMP lab_B9D0
        }
        case 0x0:
        {
// switch_B978_case_0x0
            var_8 = 0;
            pri = fun_B9E0()
            OP_JUMP lab_B9D0
        }
        case 0x440ef91e5f91f33f:
        {
// switch_B978_case_0x440ef91e5f91f33f
            var_8 = 0;
            pri = fun_F748()
            OP_JUMP lab_B9D0
        }
    }
}
// fun_B9E0
fun_B9E0() {
    pri = 0;
    return pri;
}
// fun_B9F8
fun_B9F8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A918(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BA50
fun_BA50() {
    var_8 = 2082975168935974472;
    var_16 = 8;
    pri = fun_09A8(var_8)
    pri = 0;
    return pri;
}
// fun_BA90
fun_BA90() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    pri = fun_09D8()
    var_32 = 1;
    var_40 = 8;
    pri = fun_0060(var_32)
    pri = 0;
    return pri;
}
// fun_BB00
fun_BB00() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35152;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    pri = EvCameraStart()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_B638(var_64, var_56)
    var_80 = 1;
    var_88 = 2082975168935974472;
    var_96 = 16;
    pri = fun_B638(var_88, var_80)
    var_104 = 1;
    var_112 = 2415033103042277516;
    var_120 = 16;
    pri = fun_0C38(var_112, var_104)
    var_128 = 1;
    var_136 = 2415034202553905727;
    var_144 = 16;
    pri = fun_0C38(var_136, var_128)
    var_152 = 1;
    var_160 = 1;
    var_168 = 0;
    OP_PUSH3_C 4672463722675961856, 4671226772094713856, 2082975168935974472
    var_176 = 48;
    pri = fun_0BA0(var_168, var_160, var_152, var_144, var_136, var_128)
    var_184 = 1;
    var_192 = 8802641224559852288;
    var_200 = 16;
    pri = fun_0C38(var_192, var_184)
    var_208 = 1;
    var_216 = 2082975168935974472;
    var_224 = 16;
    pri = fun_0C38(var_216, var_208)
    var_232 = 1;
    var_240 = 8;
    pri = fun_0060(var_232)
    var_248 = 1;
    var_256 = 1;
    OP_PUSH4_C -4582834833314545664, 4672051405815545856, 4671226772094713856, 8802641224559852288
    var_264 = 48;
    pri = fun_0BA0(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 1;
    var_280 = 1;
    var_288 = 0;
    OP_PUSH3_C 4670484601745965056, 4671226772094713856, 2082975168935974472
    var_296 = 48;
    pri = fun_0BA0(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 2;
    var_312 = 2;
    var_320 = 8802641224559852288;
    var_328 = 24;
    pri = fun_17A0(var_320, var_312, var_304)
    var_336 = 2;
    var_344 = 2;
    var_352 = 2082975168935974472;
    var_360 = 24;
    pri = fun_17A0(var_352, var_344, var_336)
    OP_CONST_S -8, 274
    var_376 = 6;
    var_384 = 0;
    var_392 = var_8;
    var_400 = 36;
    var_408 = 32;
    pri = fun_2AE8(var_400, var_392, var_384, var_376)
    var_416 = 0;
    var_424 = 60;
    pri = float(var_424)
    var_432 = pri;
    var_440 = 36880;
    pri = SoundSetRTPC(var_440, var_432, var_424)
    var_448 = 5;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 1;
    var_472 = 0;
    var_480 = 4641240890982006784;
    var_488 = 0;
    var_496 = 0;
    var_504 = 20000;
    pri = float(var_504)
    var_512 = pri;
    var_520 = 19850;
    pri = float(var_520)
    var_528 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_536 = 72;
    pri = fun_0CB0(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464)
    var_544 = 1;
    var_552 = 0;
    var_560 = 4641240890982006784;
    var_568 = 0;
    var_576 = 0;
    var_584 = 20000;
    pri = float(var_584)
    var_592 = pri;
    var_600 = 20150;
    pri = float(var_600)
    var_608 = pri;
    OP_PUSH2_C 4607182418800017408, 2082975168935974472
    var_616 = 72;
    pri = fun_0CB0(var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    var_632 = 4632050732992403866;
    var_640 = 0;
    OP_PUSH5_C 4671324664363713823, 4649098704761535857, 4670923293141552333, 4671247190025641656, 4650307727747438346
    var_648 = 4670859043179583242;
    var_656 = 1;
    pri = EvCameraMove(var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584)
    var_664 = 0;
    pri = fun_2DC0()
    var_672 = 15;
    var_680 = 8;
    pri = fun_0060(var_672)
    var_688 = 35640;
    var_696 = 8;
    var_704 = 16;
    pri = fun_02A8(var_696, var_688)
    var_712 = 0;
    pri = fun_0378()
    var_720 = 0;
    var_728 = 4632050732992403866;
    var_736 = 3;
    OP_PUSH5_C 4671344010270804541, 4645397572700581396, 4670900896089694536, 4671396198590216929, 4647764425410997125
    var_744 = 4670814851058483855;
    var_752 = 120;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 120;
    var_768 = 8;
    pri = fun_0060(var_760)
    var_776 = 0;
    var_784 = 4629390794462488166;
    var_792 = 3;
    OP_PUSH5_C 4671057851374559560, 4633484847998744658, 4671221455955993559, 4671163181839721431, 4634439751857235558
    var_800 = 4671200353579077468;
    var_808 = 120;
    pri = EvCameraMove(var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_816 = 120;
    var_824 = 8;
    pri = fun_0060(var_816)
    var_832 = 0;
    var_840 = 4629559679448514560;
    var_848 = 0;
    OP_PUSH5_C 4671057428062582866, 4633907060463810642, 4671221161836633129, 4671162343462105252, 4634792299265565655
    var_856 = 4671198080338787041;
    var_864 = 30;
    pri = EvCameraMove(var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = 30;
    var_880 = 8;
    pri = fun_0060(var_872)
    var_888 = 0;
    var_896 = 4627279732137158246;
    var_904 = 0;
    OP_PUSH5_C 4671473969796428595, 4631794590763597169, 4671205177686344335, 4671254878360698880, 4634310977055390433
    var_912 = 4671182420544428442;
    var_920 = 1;
    pri = EvCameraMove(var_920, var_912, var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_928 = 0;
    pri = fun_2DC0()
    var_936 = 0;
    var_944 = 4628124157067290214;
    var_952 = 0;
    OP_PUSH5_C 4671444972926025073, 4631689037647330673, 4671199350274717123, 4671229787505353032, 4634327865553993073
    var_960 = 4671152293925827379;
    var_968 = 120;
    pri = EvCameraMove(var_968, var_960, var_952, var_944, var_936, var_928, var_920, var_912, var_904, var_896)
    var_976 = 90;
    var_984 = 8;
    pri = fun_0060(var_976)
    var_992 = 0;
    var_1000 = 4630024113160087142;
    var_1008 = 0;
    OP_PUSH5_C 4671038516462585119, 4653186688993607025, 4671118181577575629, 4670927770902656451, 4656589545540178412
    var_1016 = 4671052914567350845;
    var_1024 = 1;
    pri = EvCameraMove(var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960, var_952)
    var_1032 = 0;
    pri = fun_2DC0()
    var_1040 = 30;
    var_1048 = 8;
    pri = fun_0060(var_1040)
    var_1056 = 0;
    var_1064 = 4630024113160087142;
    var_1072 = 3;
    OP_PUSH5_C 4671212868770180628, 4655231472758014607, 4671162228013384335, 4671212885262855045, 4657951554573969654
    var_1080 = 4671133291616120340;
    var_1088 = 120;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 8802641224559852288;
    var_1104 = 8;
    pri = fun_0DD0(var_1096)
    var_1112 = 2082975168935974472;
    var_1120 = 8;
    pri = fun_0DD0(var_1112)
    var_1128 = 0;
    var_1136 = 0;
    var_1144 = 0;
    var_1152 = 0;
    OP_PUSH2_C 2082975168935974472, 8802641224559852288
    var_1160 = 48;
    pri = fun_0D78(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112)
    var_1168 = 0;
    var_1176 = 0;
    var_1184 = 0;
    var_1192 = 0;
    OP_PUSH2_C 8802641224559852288, 2082975168935974472
    var_1200 = 48;
    pri = fun_0D78(var_1192, var_1184, var_1176, var_1168, var_1160, var_1152)
    var_1208 = 0;
    pri = fun_2DC0()
    var_1216 = 0;
    pri = fun_2B48()
    var_1224 = 30;
    var_1232 = 8;
    pri = fun_0060(var_1224)
    var_1240 = 0;
    var_1248 = 30;
    pri = float(var_1248)
    var_1256 = pri;
    var_1264 = 37016;
    pri = SoundSetRTPC(var_1264, var_1256, var_1248)
    var_1272 = 8802641224559852288;
    var_1280 = 8;
    pri = fun_0DD0(var_1272)
    var_1288 = 2082975168935974472;
    var_1296 = 8;
    pri = fun_0DD0(var_1288)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1304 = 16;
    pri = fun_2E50(var_1296, var_1288)
    var_1312 = 0;
    var_1320 = 1;
    var_1328 = 500;
    pri = float(var_1328)
    var_1336 = pri;
    var_1344 = 4611686018427387904;
    var_1352 = 32;
    pri = fun_2EB8(var_1344, var_1336, var_1328, var_1320)
    var_1360 = 0;
    var_1368 = 4629700416936869888;
    var_1376 = 0;
    OP_PUSH5_C 4671157601818210468, 4638810706401831158, 4671319265761621443, 4671298182626158838, 4635625465196629197
    var_1384 = 4671114850057343468;
    var_1392 = 1;
    pri = EvCameraMove(var_1392, var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1400 = 0;
    pri = fun_2DC0()
    var_1408 = 0;
    var_1416 = 4629700416936869888;
    var_1424 = 2;
    OP_PUSH5_C 4671157335186640732, 4636556443682099692, 4671319664334586511, 4671297913245810033, 4632333615343998075
    var_1432 = 4671115248630308536;
    var_1440 = 180;
    pri = EvCameraMove(var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1448 = 5;
    var_1456 = 1;
    var_1464 = 2082975168935974472;
    var_1472 = 24;
    pri = fun_17A0(var_1464, var_1456, var_1448)
    var_1480 = 0;
    var_1488 = 3;
    var_1496 = 2082975168935974472;
    var_1504 = 24;
    pri = fun_8CB0(var_1496, var_1488, var_1480)
    var_1512 = 1;
    var_1520 = 8;
    pri = fun_0060(var_1512)
    var_1528 = 2082975168935974472;
    var_1536 = 8;
    pri = fun_0FA8(var_1528)
    var_1544 = 0;
    var_1552 = 3;
    var_1560 = 0;
    var_1568 = 100;
    var_1576 = -1;
    OP_PUSH2_C -1040461041951008289, 2082975168935974472
    var_1584 = 56;
    pri = fun_2470(var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528)
    var_1592 = 1;
    var_1600 = 8;
    pri = fun_2668(var_1592)
    var_1608 = 5;
    var_1616 = 5;
    var_1624 = 2082975168935974472;
    var_1632 = 24;
    pri = fun_17A0(var_1624, var_1616, var_1608)
    var_1640 = 0;
    var_1648 = 3;
    var_1656 = 0;
    var_1664 = 100;
    var_1672 = -1;
    OP_PUSH2_C -1040459942439380078, 2082975168935974472
    var_1680 = 56;
    pri = fun_2470(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624)
    var_1688 = 1;
    var_1696 = 8;
    pri = fun_2668(var_1688)
    var_1704 = 0;
    var_1712 = 1;
    var_1720 = 400;
    pri = float(var_1720)
    var_1728 = pri;
    var_1736 = 4613937818241073152;
    var_1744 = 32;
    pri = fun_2EB8(var_1736, var_1728, var_1720, var_1712)
    var_1752 = 0;
    var_1760 = 4626941962165105459;
    var_1768 = 0;
    OP_PUSH5_C 4671157461630477926, 4634979480125078241, 4671371709717487288, 4671254424812152422, 4638901833925541233
    var_1776 = 4671143868917979546;
    var_1784 = 1;
    pri = EvCameraMove(var_1784, var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712)
    var_1792 = 0;
    pri = fun_2DC0()
    var_1800 = 0;
    var_1808 = 4626941962165105459;
    var_1816 = 2;
    OP_PUSH5_C 4671169968575243878, 4634979480125078241, 4671376297429754184, 4671247354952385823, 4638887760176705700
    var_1824 = 4671141142129142661;
    var_1832 = 360;
    pri = EvCameraMove(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768, var_1760)
    var_1840 = 5;
    var_1848 = 2;
    var_1856 = 2082975168935974472;
    var_1864 = 24;
    pri = fun_17A0(var_1856, var_1848, var_1840)
    var_1872 = 0;
    var_1880 = 3;
    var_1888 = 0;
    var_1896 = 100;
    var_1904 = -1;
    OP_PUSH2_C -1040458842927751867, 2082975168935974472
    var_1912 = 56;
    pri = fun_2470(var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856)
    var_1920 = 1;
    var_1928 = 8;
    pri = fun_2668(var_1920)
    var_1936 = 0;
    var_1944 = 1;
    var_1952 = 210;
    pri = float(var_1952)
    var_1960 = pri;
    var_1968 = 4616752568008179712;
    var_1976 = 32;
    pri = fun_2EB8(var_1968, var_1960, var_1952, var_1944)
    var_1984 = 0;
    var_1992 = 4626773077179079066;
    var_2000 = 0;
    OP_PUSH5_C 4671219520815528673, -4588447444350156145, 4671436149345212170, 4671226912282446397, 4641761971532642386
    var_2008 = 4671201310154193633;
    var_2016 = 1;
    pri = EvCameraMove(var_2016, var_2008, var_2000, var_1992, var_1984, var_1976, var_1968, var_1960, var_1952, var_1944)
    var_2024 = 0;
    pri = fun_2DC0()
    var_2032 = 0;
    var_2040 = 4626773077179079066;
    var_2048 = 2;
    OP_PUSH5_C 4671219053523086868, -4587375728376330322, 4671450767352303452, 4671226444990004593, 4641226465389450363
    var_2056 = 4671215928161284915;
    var_2064 = 90;
    pri = EvCameraMove(var_2064, var_2056, var_2048, var_2040, var_2032, var_2024, var_2016, var_2008, var_2000, var_1992)
    var_2072 = 2;
    var_2080 = 8;
    var_2088 = 2082975168935974472;
    var_2096 = 24;
    pri = fun_17A0(var_2088, var_2080, var_2072)
    var_2104 = 0;
    var_2112 = 0;
    var_2120 = 2082975168935974472;
    var_2128 = 24;
    pri = fun_8CB0(var_2120, var_2112, var_2104)
    var_2136 = 1;
    var_2144 = 8;
    pri = fun_0060(var_2136)
    var_2152 = 2082975168935974472;
    var_2160 = 8;
    pri = fun_0FA8(var_2152)
    var_2168 = 15;
    var_2176 = 8;
    pri = fun_0060(var_2168)
    var_2184 = 2;
    var_2192 = 2;
    var_2200 = 2082975168935974472;
    var_2208 = 24;
    pri = fun_17A0(var_2200, var_2192, var_2184)
    var_2216 = 0;
    var_2224 = 3;
    var_2232 = 0;
    var_2240 = 100;
    var_2248 = -1;
    OP_PUSH2_C -1040466539509149344, 2082975168935974472
    var_2256 = 56;
    pri = fun_2470(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2264 = 1;
    var_2272 = 8;
    pri = fun_2668(var_2264)
    var_2280 = 0;
    pri = fun_2728()
    var_2288 = 0;
    var_2296 = 40;
    pri = float(var_2296)
    var_2304 = pri;
    var_2312 = 37152;
    pri = SoundSetRTPC(var_2312, var_2304, var_2296)
    var_2320 = 1;
    var_2328 = 0;
    var_2336 = 4641240890982006784;
    var_2344 = 0;
    var_2352 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 2082975168935974472
    var_2360 = 72;
    pri = fun_0CB0(var_2352, var_2344, var_2336, var_2328, var_2320, var_2312, var_2304, var_2296, var_2288)
    var_2368 = 15;
    var_2376 = 8;
    pri = fun_0060(var_2368)
    var_2384 = 0;
    var_2392 = 1;
    var_2400 = 850;
    pri = float(var_2400)
    var_2408 = pri;
    var_2416 = 4612811918334230528;
    var_2424 = 32;
    pri = fun_2EB8(var_2416, var_2408, var_2400, var_2392)
    var_2432 = 0;
    var_2440 = 4623620557439919718;
    var_2448 = 0;
    OP_PUSH5_C 4671239105866398433, 4629883375671731814, 4671353312139175526, 4671258897075698401, 4623175826976716882
    var_2456 = 4671463958743057695;
    var_2464 = 1;
    pri = EvCameraMove(var_2464, var_2456, var_2448, var_2440, var_2432, var_2424, var_2416, var_2408, var_2400, var_2392)
    var_2472 = 0;
    pri = fun_2DC0()
    var_2480 = 0;
    var_2488 = 4623620557439919718;
    var_2496 = 2;
    OP_PUSH5_C 4671243468178781635, 4629883375671731814, 4671352531485919805, 4671263259388081603, 4623175826976716882
    var_2504 = 4671463178089801974;
    var_2512 = 90;
    pri = EvCameraMove(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448, var_2440)
    var_2520 = 30;
    var_2528 = 8;
    pri = fun_0060(var_2520)
    var_2536 = 0;
    var_2544 = 60;
    pri = float(var_2544)
    var_2552 = pri;
    var_2560 = 37288;
    pri = SoundSetRTPC(var_2560, var_2552, var_2544)
    var_2568 = 1;
    var_2576 = 0;
    var_2584 = 4641240890982006784;
    var_2592 = 0;
    var_2600 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2608 = 72;
    pri = fun_0CB0(var_2600, var_2592, var_2584, var_2576, var_2568, var_2560, var_2552, var_2544, var_2536)
    var_2616 = 45;
    var_2624 = 8;
    pri = fun_0060(var_2616)
    var_2632 = 3;
    var_2640 = 60;
    var_2648 = 1000;
    pri = float(var_2648)
    var_2656 = pri;
    var_2664 = 8;
    pri = float(var_2664)
    var_2672 = pri;
    var_2680 = 32;
    pri = fun_2EB8(var_2672, var_2664, var_2656, var_2648)
    var_2688 = 0;
    var_2696 = 4631698889271515546;
    var_2704 = 0;
    OP_PUSH5_C 4671284413991800013, 4638084149118196777, 4671293344774996623, 4671417963422888755, 4648114773796071670
    var_2712 = 4671394689510507807;
    var_2720 = 1;
    pri = EvCameraMove(var_2720, var_2712, var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648)
    var_2728 = 0;
    pri = fun_2DC0()
    var_2736 = 0;
    var_2744 = 4631093718071587635;
    var_2752 = 3;
    OP_PUSH5_C 4671253366532210688, 4627929939333359862, 4671138566523154596, 4671365860315627520, 4643461552626393416
    var_2760 = 4670979024637185229;
    var_2768 = 90;
    pri = EvCameraMove(var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2776 = 37424;
    pri = SoundPostEvent(var_2776)
    var_2784 = 45;
    var_2792 = 8;
    pri = fun_0060(var_2784)
    var_2800 = 8802641224559852288;
    var_2808 = 8;
    pri = fun_0DD0(var_2800)
    var_2816 = 2082975168935974472;
    var_2824 = 8;
    pri = fun_0DD0(var_2816)
    var_2832 = 30;
    var_2840 = 8;
    pri = fun_0060(var_2832)
    var_2848 = 0;
    var_2856 = 0;
    var_2864 = 0;
    var_2872 = 90;
    pri = float(var_2872)
    var_2880 = pri;
    var_2888 = 8802641224559852288;
    var_2896 = 40;
    pri = fun_0D28(var_2888, var_2880, var_2872, var_2864, var_2856)
    var_2904 = 0;
    var_2912 = 0;
    var_2920 = 0;
    var_2928 = 270;
    pri = float(var_2928)
    var_2936 = pri;
    var_2944 = 2082975168935974472;
    var_2952 = 40;
    pri = fun_0D28(var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2960 = 60;
    var_2968 = 8;
    pri = fun_0060(var_2960)
    var_2976 = 8802641224559852288;
    var_2984 = 8;
    pri = fun_0DD0(var_2976)
    var_2992 = 2082975168935974472;
    var_3000 = 8;
    pri = fun_0DD0(var_2992)
    var_3008 = 0;
    pri = fun_2BD8()
    var_3016 = 0;
    pri = fun_2C80()
    OP_JZER lab_D758
    var_3024 = 0;
    pri = fun_2D70()
// lab_D758
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_8 = 3;
    var_16 = 1;
    var_24 = 32;
    pri = fun_2F10(var_16, var_8, var_0, var_-8)
    var_32 = 0;
    var_40 = 0;
    var_48 = 37672;
    pri = PokeMemoryCheckParty(var_48, var_40, var_32)
    var_56 = 1;
    var_64 = 1;
    var_72 = 90;
    pri = float(var_72)
    var_80 = pri;
    OP_PUSH3_C 4671213028199366656, 4671067342908686336, 8802641224559852288
    var_88 = 48;
    pri = fun_0BA0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    var_112 = 270;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 4671240515990061056;
    var_136 = 20580;
    pri = float(var_136)
    var_144 = pri;
    var_152 = 2082975168935974472;
    var_160 = 48;
    pri = fun_0BA0(var_152, var_144, var_136, var_128, var_120, var_112)
    var_168 = 8802641224559852288;
    var_176 = 8;
    pri = fun_1808(var_168)
    var_184 = 3;
    var_192 = 6;
    var_200 = 2082975168935974472;
    var_208 = 24;
    pri = fun_17A0(var_200, var_192, var_184)
    var_216 = 10;
    var_224 = 8;
    pri = fun_0060(var_216)
    var_232 = 0;
    var_240 = 4631093718071587635;
    var_248 = 0;
    OP_PUSH5_C 4671242794727909622, 4638622470011155907, 4671376668514928558, 4671255010302094213, 4639914088310536929
    var_256 = 4671351203825629266;
    var_264 = 1;
    pri = EvCameraMove(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_272 = 0;
    pri = fun_2DC0()
    var_280 = 0;
    var_288 = 4631093718071587635;
    var_296 = 2;
    OP_PUSH5_C 4671244155373548995, 4638804021371134280, 4671373831774928896, 4671256370947733586, 4640053066580287816
    var_304 = 4671348369834408673;
    var_312 = 180;
    pri = EvCameraMove(var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240)
    var_320 = 0;
    var_328 = 30;
    pri = float(var_328)
    var_336 = pri;
    var_344 = 37824;
    pri = SoundSetRTPC(var_344, var_336, var_328)
    var_352 = 35640;
    var_360 = 8;
    var_368 = 16;
    pri = fun_02A8(var_360, var_352)
    var_376 = 0;
    pri = fun_0378()
    var_384 = 1;
    var_392 = 1;
    var_400 = -1;
    var_408 = -1;
    var_416 = 0;
    var_424 = 12;
    var_432 = 2082975168935974472;
    var_440 = 56;
    pri = fun_4C48(var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_448 = 15;
    var_456 = 8;
    pri = fun_0060(var_448)
    var_464 = 0;
    var_472 = 3;
    var_480 = 0;
    var_488 = 100;
    var_496 = -1;
    OP_PUSH2_C -1040465439997521133, 2082975168935974472
    var_504 = 56;
    pri = fun_2470(var_496, var_488, var_480, var_472, var_464, var_456, var_448)
    var_512 = 1;
    var_520 = 8;
    pri = fun_2668(var_512)
    var_528 = 2;
    var_536 = 8;
    var_544 = 2082975168935974472;
    var_552 = 24;
    pri = fun_17A0(var_544, var_536, var_528)
    var_560 = 1;
    var_568 = 3;
    var_576 = 0;
    var_584 = 12;
    var_592 = 2082975168935974472;
    var_600 = 40;
    pri = fun_6F80(var_592, var_584, var_576, var_568, var_560)
    var_608 = 15;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = 0;
    var_632 = 3;
    var_640 = 0;
    var_648 = 100;
    var_656 = -1;
    OP_PUSH2_C -1040464340485892922, 2082975168935974472
    var_664 = 56;
    pri = fun_2470(var_656, var_648, var_640, var_632, var_624, var_616, var_608)
    var_672 = 1;
    var_680 = 8;
    pri = fun_2668(var_672)
    var_688 = 5;
    var_696 = 1;
    var_704 = 2082975168935974472;
    var_712 = 24;
    pri = fun_17A0(var_704, var_696, var_688)
    var_720 = 0;
    var_728 = 3;
    var_736 = 0;
    var_744 = 100;
    var_752 = -1;
    OP_PUSH2_C -1040463240974264711, 2082975168935974472
    var_760 = 56;
    pri = fun_2470(var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_768 = 1;
    var_776 = 8;
    pri = fun_2668(var_768)
    var_784 = 0;
    pri = fun_2728()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_792 = 16;
    pri = fun_2E50(var_784, var_776)
    var_800 = 0;
    var_808 = 1;
    var_816 = 300;
    pri = float(var_816)
    var_824 = pri;
    var_832 = 4609434218613702656;
    var_840 = 32;
    pri = fun_2EB8(var_832, var_824, var_816, var_808)
    var_848 = 1;
    var_856 = 1;
    var_864 = 90;
    pri = float(var_864)
    var_872 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_880 = 48;
    pri = fun_0BA0(var_872, var_864, var_856, var_848, var_840, var_832)
    var_888 = 1;
    var_896 = 1;
    var_904 = -90;
    pri = float(var_904)
    var_912 = pri;
    var_920 = 4671226772094713856;
    var_928 = 20580;
    pri = float(var_928)
    var_936 = pri;
    var_944 = 2082975168935974472;
    var_952 = 48;
    pri = fun_0BA0(var_944, var_936, var_928, var_920, var_912, var_904)
    var_960 = 0;
    var_968 = 4631093718071587635;
    var_976 = 0;
    OP_PUSH5_C 4671433004741956731, 4640745143179275141, 4671148745252048732, 4671526067406131692, 4643092292641321124
    var_984 = 4671117326707285033;
    var_992 = 1;
    pri = EvCameraMove(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = 0;
    pri = fun_2DC0()
    var_1008 = 0;
    var_1016 = 4631093718071587635;
    var_1024 = 3;
    OP_PUSH5_C 4671286596522381148, 4636643700924879995, 4671201683988147077, 4671379661935335178, 4640023159864012308
    var_1032 = 4671170262694604308;
    var_1040 = 150;
    pri = EvCameraMove(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968)
    var_1048 = 1;
    var_1056 = 0;
    var_1064 = 4641240890982006784;
    var_1072 = 90;
    pri = float(var_1072)
    var_1080 = pri;
    var_1088 = 0;
    var_1096 = 20000;
    pri = float(var_1096)
    var_1104 = pri;
    var_1112 = 19900;
    pri = float(var_1112)
    var_1120 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1128 = 72;
    pri = fun_0CB0(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056)
    var_1136 = 1;
    var_1144 = 0;
    var_1152 = 4641240890982006784;
    var_1160 = -90;
    pri = float(var_1160)
    var_1168 = pri;
    var_1176 = 0;
    var_1184 = 20000;
    pri = float(var_1184)
    var_1192 = pri;
    var_1200 = 20100;
    pri = float(var_1200)
    var_1208 = pri;
    OP_PUSH2_C 4607182418800017408, 2082975168935974472
    var_1216 = 72;
    pri = fun_0CB0(var_1208, var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144)
    var_1224 = 8802641224559852288;
    var_1232 = 8;
    pri = fun_0DD0(var_1224)
    var_1240 = 2082975168935974472;
    var_1248 = 8;
    pri = fun_0DD0(var_1240)
    var_1256 = 0;
    var_1264 = 1;
    var_1272 = 350;
    pri = float(var_1272)
    var_1280 = pri;
    var_1288 = 4611686018427387904;
    var_1296 = 32;
    pri = fun_2EB8(var_1288, var_1280, var_1272, var_1264)
    var_1304 = 0;
    var_1312 = 4629447089457830298;
    var_1320 = 0;
    OP_PUSH5_C 4671219042527970591, 4636364337010494669, 4671229457651864699, 4671307459755518198, 4634213868188425257
    var_1328 = 4671183825170532925;
    var_1336 = 1;
    pri = EvCameraMove(var_1336, var_1328, var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1344 = 0;
    pri = fun_2DC0()
    var_1352 = 0;
    var_1360 = 4629447089457830298;
    var_1368 = 2;
    OP_PUSH5_C 4671219042527970591, 4636364337010494669, 4671229457651864699, 4671299584503484252, 4634214571875867034
    var_1376 = 4671171035101522821;
    var_1384 = 240;
    pri = EvCameraMove(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312)
    var_1392 = 0;
    var_1400 = 3;
    var_1408 = 0;
    var_1416 = 100;
    var_1424 = -1;
    OP_PUSH2_C -1040453345369610812, 2082975168935974472
    var_1432 = 56;
    pri = fun_2470(var_1424, var_1416, var_1408, var_1400, var_1392, var_1384, var_1376)
    var_1440 = 1;
    var_1448 = 8;
    pri = fun_2668(var_1440)
    var_1456 = 0;
    pri = fun_2728()
    var_1464 = 0;
    var_1472 = 1;
    var_1480 = 230;
    pri = float(var_1480)
    var_1488 = pri;
    var_1496 = 4611686018427387904;
    var_1504 = 32;
    pri = fun_2EB8(var_1496, var_1488, var_1480, var_1472)
    var_1512 = 0;
    var_1520 = 4630164850648442470;
    var_1528 = 0;
    OP_PUSH5_C 4671157876696117412, 4637353721553632625, 4671228891403376394, 4671324917251388211, 4634457344043279974
    var_1536 = 4671225930968318607;
    var_1544 = 1;
    pri = EvCameraMove(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488, var_1480, var_1472)
    var_1552 = 0;
    pri = fun_2DC0()
    var_1560 = 0;
    var_1568 = 4630164850648442470;
    var_1576 = 3;
    OP_PUSH5_C 4671145570412223529, 4637566938848490947, 4671229111305701949, 4671312281114005996, 4634676190837672509
    var_1584 = 4671226156368202301;
    var_1592 = 90;
    pri = EvCameraMove(var_1592, var_1584, var_1576, var_1568, var_1560, var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1600 = 1;
    var_1608 = 0;
    var_1616 = 4641240890982006784;
    var_1624 = -90;
    pri = float(var_1624)
    var_1632 = pri;
    var_1640 = 0;
    var_1648 = 20000;
    pri = float(var_1648)
    var_1656 = pri;
    var_1664 = 20050;
    pri = float(var_1664)
    var_1672 = pri;
    OP_PUSH2_C 4607182418800017408, 2082975168935974472
    var_1680 = 72;
    pri = fun_0CB0(var_1672, var_1664, var_1656, var_1648, var_1640, var_1632, var_1624, var_1616, var_1608)
    var_1688 = 1;
    var_1696 = 0;
    var_1704 = 4641240890982006784;
    var_1712 = 90;
    pri = float(var_1712)
    var_1720 = pri;
    var_1728 = 0;
    var_1736 = 20000;
    pri = float(var_1736)
    var_1744 = pri;
    var_1752 = 19950;
    pri = float(var_1752)
    var_1760 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1768 = 72;
    pri = fun_0CB0(var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704, var_1696)
    var_1776 = 1;
    var_1784 = 0;
    var_1792 = 15;
    var_1800 = 20000;
    pri = float(var_1800)
    var_1808 = pri;
    var_1816 = 150;
    pri = float(var_1816)
    var_1824 = pri;
    var_1832 = 20050;
    pri = float(var_1832)
    var_1840 = pri;
    var_1848 = 8802641224559852288;
    var_1856 = 56;
    pri = fun_1500(var_1848, var_1840, var_1832, var_1824, var_1816, var_1808, var_1800)
    var_1864 = 1;
    var_1872 = 0;
    var_1880 = 15;
    var_1888 = 10;
    pri = float(var_1888)
    var_1896 = pri;
    var_1904 = 0;
    var_1912 = 2082975168935974472;
    var_1920 = 48;
    pri = fun_15C0(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872)
    var_1928 = 2082975168935974472;
    var_1936 = 8;
    pri = fun_0DD0(var_1928)
    var_1944 = 8802641224559852288;
    var_1952 = 8;
    pri = fun_0DD0(var_1944)
    var_1960 = 15;
    var_1968 = 8;
    pri = fun_0060(var_1960)
    var_1976 = 1;
    var_1984 = 0;
    var_1992 = 15;
    OP_PUSH2_C 2082975168935974472, 8802641224559852288
    var_2000 = 40;
    pri = fun_1568(var_1992, var_1984, var_1976, var_1968, var_1960)
    var_2008 = 10;
    var_2016 = 2082975168935974472;
    var_2024 = 16;
    pri = fun_1620(var_2016, var_2008)
    var_2032 = 0;
    var_2040 = 10;
    OP_PUSH2_C 8802641224559852288, 2082975168935974472
    var_2048 = 32;
    pri = fun_1660(var_2040, var_2032, var_2024, var_2016)
    var_2056 = 37960;
    pri = SoundPostEvent(var_2056)
    var_2064 = 1;
    var_2072 = -1;
    var_2080 = -1;
    var_2088 = 1;
    var_2096 = 8802641224559852288;
    var_2104 = 40;
    pri = fun_8EC0(var_2096, var_2088, var_2080, var_2072, var_2064)
    var_2112 = 1;
    var_2120 = 1;
    var_2128 = -1;
    var_2136 = -1;
    var_2144 = 0;
    var_2152 = 40;
    var_2160 = 2082975168935974472;
    var_2168 = 56;
    pri = fun_4C48(var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2176 = 15;
    var_2184 = 8;
    pri = fun_0060(var_2176)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2192 = 3;
    var_2200 = 1;
    var_2208 = 32;
    pri = fun_2F10(var_2200, var_2192, var_2184, var_2176)
    var_2216 = 0;
    var_2224 = 4626379012211684147;
    var_2232 = 0;
    OP_PUSH5_C 4671094728994555167, 4636874510405782733, 4671230012905236726, 4671261819027849216, 4636590220679304970
    var_2240 = 4671227044223841731;
    var_2248 = 1;
    pri = EvCameraMove(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200, var_2192, var_2184, var_2176)
    var_2256 = 30;
    var_2264 = 8;
    pri = fun_0060(var_2256)
    var_2272 = 1001;
    var_2280 = 38160;
    var_2288 = 16;
    pri = fun_2AA8(var_2280, var_2272)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2296 = 16;
    pri = fun_2E50(var_2288, var_2280)
    var_2304 = 0;
    var_2312 = 1;
    var_2320 = 420;
    pri = float(var_2320)
    var_2328 = pri;
    var_2336 = 4611686018427387904;
    var_2344 = 32;
    pri = fun_2EB8(var_2336, var_2328, var_2320, var_2312)
    var_2352 = 0;
    var_2360 = 4628096009569619149;
    var_2368 = 0;
    OP_PUSH5_C 4671131884241236787, 4637625344906158408, 4671250046007094804, 4671294290354996511, 4637340351492238868
    var_2376 = 4671210650505471590;
    var_2384 = 1;
    pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 0;
    pri = fun_2DC0()
    var_2400 = 0;
    var_2408 = 4628096009569619149;
    var_2416 = 2;
    OP_PUSH5_C 4671146271350886236, 4637261538498759885, 4671246560555234755, 4671308677464645960, 4636975841397398569
    var_2424 = 4671207165053611540;
    var_2432 = 240;
    pri = EvCameraMove(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2440 = 3;
    var_2448 = 0;
    var_2456 = -3349692771303800711;
    var_2464 = 24;
    pri = fun_2520(var_2456, var_2448, var_2440)
    var_2472 = 1;
    var_2480 = 8;
    pri = fun_2668(var_2472)
    var_2488 = 0;
    pri = fun_2728()
    var_2496 = 0;
    var_2504 = 3;
    var_2512 = 0;
    var_2520 = 100;
    var_2528 = -1;
    OP_PUSH2_C -1040452245857982601, 2082975168935974472
    var_2536 = 56;
    pri = fun_2470(var_2528, var_2520, var_2512, var_2504, var_2496, var_2488, var_2480)
    var_2544 = 1;
    var_2552 = 8;
    pri = fun_2668(var_2544)
    var_2560 = 0;
    pri = fun_2728()
    var_2568 = 4;
    var_2576 = 8;
    pri = fun_0430(var_2568)
    var_2584 = 0;
    pri = fun_0468()
    var_2592 = 38288;
    pri = SoundPostEvent(var_2592)
    var_2600 = 1;
    var_2608 = 0;
    var_2616 = 38552;
    var_2624 = 8;
    var_2632 = 32;
    pri = fun_0308(var_2624, var_2616, var_2608, var_2600)
    var_2640 = 0;
    pri = fun_0378()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2648 = 3;
    var_2656 = 1;
    var_2664 = 32;
    pri = fun_2F10(var_2656, var_2648, var_2640, var_2632)
    var_2672 = 3;
    var_2680 = 1;
    pri = EvCameraEnd(var_2680, var_2672)
    var_2688 = 4;
    var_2696 = 8;
    pri = fun_0768(var_2688)
    var_2704 = 0;
    var_2712 = 8802641224559852288;
    var_2720 = 16;
    pri = fun_B740(var_2712, var_2704)
    var_2728 = 1;
    var_2736 = 2082975168935974472;
    var_2744 = 16;
    pri = fun_B740(var_2736, var_2728)
    var_2752 = 0;
    pri = SetPlayerUniform(var_2752)
    var_2760 = 0;
    var_2768 = 0;
    var_2776 = 0;
    var_2784 = 0;
    var_2792 = 0;
    var_2800 = 2000;
    pri = float(var_2800)
    var_2808 = pri;
    var_2816 = 2420;
    pri = float(var_2816)
    var_2824 = pri;
    OP_PUSH2_C 3133527603482252227, -2500388889229905346
    var_2832 = 72;
    pri = fun_04F8(var_2824, var_2816, var_2808, var_2800, var_2792, var_2784, var_2776, var_2768, var_2760)
    var_2840 = 1;
    var_2848 = 180;
    pri = float(var_2848)
    var_2856 = pri;
    var_2864 = 8802641224559852288;
    var_2872 = 24;
    pri = fun_0BF8(var_2864, var_2856, var_2848)
    var_2880 = 38568;
    pri = SoundPostEvent(var_2880)
    var_2888 = 38840;
    var_2896 = 8;
    var_2904 = 16;
    pri = fun_02A8(var_2896, var_2888)
    var_2912 = 0;
    pri = fun_0378()
    var_2920 = 0;
    var_2928 = 3;
    var_2936 = 0;
    var_2944 = 100;
    var_2952 = -1;
    OP_PUSH2_C -7043599274342493731, 2558031901490264850
    var_2960 = 56;
    pri = fun_2470(var_2952, var_2944, var_2936, var_2928, var_2920, var_2912, var_2904)
    var_2968 = 1;
    var_2976 = 8;
    pri = fun_2668(var_2968)
    var_2984 = 0;
    pri = fun_2728()
    var_2992 = 6;
    var_3000 = 4;
    var_3008 = 2;
    var_3016 = 1;
    var_3024 = 9;
    var_3032 = 1;
    var_3040 = 363;
    var_3048 = 2558031901490264850;
    var_3056 = 64;
    pri = fun_95F0(var_3048, var_3040, var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3064 = 0;
    var_3072 = 3;
    var_3080 = 0;
    var_3088 = 100;
    var_3096 = -1;
    OP_PUSH2_C -7043606970923891208, 2558031901490264850
    var_3104 = 56;
    pri = fun_2470(var_3096, var_3088, var_3080, var_3072, var_3064, var_3056, var_3048)
    var_3112 = 1;
    var_3120 = 8;
    pri = fun_2668(var_3112)
    var_3128 = 0;
    pri = fun_2728()
    var_3136 = 8903954716111696910;
    var_3144 = 38856;
    var_3152 = 2558031901490264850;
    var_3160 = 24;
    pri = fun_9810(var_3152, var_3144, var_3136)
    var_3168 = 0;
    var_3176 = 3;
    var_3184 = 0;
    var_3192 = 100;
    var_3200 = -1;
    OP_PUSH2_C -7043601473365750153, 2558031901490264850
    var_3208 = 56;
    pri = fun_2470(var_3200, var_3192, var_3184, var_3176, var_3168, var_3160, var_3152)
    var_3216 = 1;
    var_3224 = 8;
    pri = fun_2668(var_3216)
    var_3232 = 0;
    pri = fun_2728()
    pri = 0;
    return pri;
}
// fun_F3E0
fun_F3E0() {
    pri = 0;
    return pri;
}
// fun_F3F8
fun_F3F8() {
    var_8 = 680;
    var_16 = 8;
    pri = fun_B5D0(var_8)
    var_24 = 20;
    var_32 = 8021964092511761817;
    pri = WorkSet(var_32, var_24)
    var_40 = 1003091793780467894;
    pri = VanishFlagReset(var_40)
    var_48 = 2082975168935974472;
    pri = FlagSet(var_48)
    var_56 = -6338460143570643299;
    var_64 = 8;
    pri = fun_A5E0(var_56)
    var_72 = 1;
    var_80 = 363;
    pri = ItemAdd(var_80, var_72)
    var_88 = 38928;
    var_96 = 8;
    pri = fun_3030(var_88)
    var_104 = -7105284599370716746;
    pri = FlagSet(var_104)
    var_112 = 4;
    var_120 = 8;
    pri = fun_0768(var_112)
    pri = 0;
    return pri;
}
// fun_F568
fun_F568() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_AC30(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_F5A8
fun_F5A8() {
    var_8 = 650;
    var_16 = 8;
    pri = fun_B5D0(var_8)
    pri = 0;
    return pri;
}
// fun_F5E0
fun_F5E0() {
    var_8 = 180;
    var_16 = -8459470141266686975;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C 3133527603482252227, -2500388889229905346
    var_40 = 4;
    var_48 = 56;
    pri = fun_B530(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_F658
fun_F658() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_B9F8()
    var_16 = 0;
    pri = fun_BA50()
    var_24 = 0;
    pri = fun_BA90()
    var_32 = 0;
    pri = fun_BB00()
    var_40 = 0;
    pri = fun_F3E0()
    var_48 = 0;
    pri = fun_F3F8()
    var_56 = 0;
    pri = fun_F568()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_F748
fun_F748() {
    var_8 = 0;
    pri = fun_BA50()
    var_16 = 0;
    pri = fun_F3F8()
    pri = 0;
    return pri;
}
// fun_F790
fun_F790() {
    var_8 = -1618257604483862133;
    var_16 = 8;
    pri = fun_B320(var_8)
    OP_JZER lab_F800
    var_24 = 0;
    pri = fun_F5A8()
    var_32 = 0;
    pri = fun_F5E0()
// lab_F800
    pri = 0;
    return pri;
}
