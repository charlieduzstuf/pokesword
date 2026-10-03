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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_0798
fun_0798() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_07D0
// lab_07D0
    var_8 = 0;
    pri = fun_0918()
    OP_JNZ lab_0808
    OP_JUMP lab_0838
// lab_0808
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_07D0
// lab_0838
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0868
// lab_0868
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_08A8
    pri = 0;
    return pri;
// lab_08A8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0868
    pri = 0;
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0918
fun_0918() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0940
fun_0940() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0990
fun_0990() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_09E8
fun_09E8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0A60
fun_0A60() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectAlwaysVisibleInEvent(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0AD8
fun_0AD8() {
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
// fun_0B50
fun_0B50() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartForceMoveFrame_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BA8
fun_0BA8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0BF8
fun_0BF8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0C50
fun_0C50() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16E0(var_8)
    OP_JZER lab_0CC8
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1710(var_24)
    OP_JNZ lab_0CC8
    pri = 0;
    return pri;
// lab_0CC8
    OP_JUMP lab_0CD8
// lab_0CD8
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0D38
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0D38
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0CD8
    pri = 0;
    return pri;
}
// fun_0D78
fun_0D78() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0DB0
fun_0DB0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0DF0
fun_0DF0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0E28
fun_0E28() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0E70
    pri = 0;
    return pri;
// lab_0E70
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0EB0
// lab_0EB0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16E0(var_8)
    OP_JNZ lab_0F38
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0F28
    pri = 0;
    return pri;
// lab_0F38
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0F80
    pri = 0;
    return pri;
// lab_0F80
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0FE0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1028(var_8)
    pri = 0;
    return pri;
// lab_0FE0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0EB0
    pri = 0;
    return pri;
// lab_0F28
    OP_JUMP lab_0F80
}
// fun_1028
fun_1028() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1060
fun_1060() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10B0
    pri = 0;
    return pri;
// lab_10B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_16E0(var_8)
    OP_JZER lab_11E0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1108
    OP_ZERO_P_S 64
// lab_11E0
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1218
    OP_CONST_S 64, 1
// lab_1218
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1250
    OP_CONST_S 72, 1
// lab_1250
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
// lab_1108
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1130
    OP_ZERO_P_S 72
// lab_1130
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
    OP_JUMP lab_12F0
// lab_12F0
    pri = 0;
    return pri;
}
// fun_1300
fun_1300() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1340
fun_1340() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1380
fun_1380() {
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
// fun_13E8
fun_13E8() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1440
fun_1440() {
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
// fun_14A0
fun_14A0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14E0
fun_14E0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = StartFieldObjectEyeLookAtFieldObject_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1570
fun_1570() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_15A8
fun_15A8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15E8
fun_15E8() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_1620
fun_1620() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1530(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_15A8(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1688
fun_1688() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1570(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_15E8(var_24)
    pri = 0;
    return pri;
}
// fun_16E0
fun_16E0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1710
fun_1710() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_1740
fun_1740() {
    OP_JUMP lab_1758
// lab_1758
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_17E8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_17D8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E28(var_8)
    pri = 0;
    return pri;
// lab_17E8
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1878
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1868
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E28(var_8)
    pri = 0;
    return pri;
// lab_1878
    pri = 0;
    return pri;
// lab_1868
    OP_JUMP lab_1888
// lab_1888
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1758
    pri = 0;
    return pri;
// lab_17D8
    OP_JUMP lab_1888
}
// fun_18C8
fun_18C8() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E28(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_1740(var_40)
    pri = 0;
    return pri;
}
// fun_1950
fun_1950() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1988
fun_1988() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_19B0
fun_19B0() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_19E0
fun_19E0() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A30
fun_1A30() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1A70
fun_1A70() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1AA8
fun_1AA8() {
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
// switch_20C0
        case default:
        {
// switch_20C0_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2108
// lab_2108
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
            OP_JNZ lab_21B0
            var_88 = 0;
            pri = fun_2548()
// lab_21B0
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_20C0_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1CA8
                case default:
                {
// switch_1CA8_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D20
// lab_1D20
                    OP_JUMP lab_2108
                }
                case 0x0:
                {
// switch_1CA8_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1D20
                }
                case 0x1:
                {
// switch_1CA8_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1D20
                }
                case 0x2:
                {
// switch_1CA8_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1D20
                }
                case 0x3:
                {
// switch_1CA8_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1D20
                }
                case 0x4:
                {
// switch_1CA8_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1D20
                }
                case 0x5:
                {
// switch_1CA8_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1D20
                }
            }
        }
        case 0x65:
        {
// switch_20C0_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_1E60
                case default:
                {
// switch_1E60_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1ED8
// lab_1ED8
                    OP_JUMP lab_2108
                }
                case 0x0:
                {
// switch_1E60_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1ED8
                }
                case 0x1:
                {
// switch_1E60_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1ED8
                }
                case 0x2:
                {
// switch_1E60_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1ED8
                }
                case 0x3:
                {
// switch_1E60_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1ED8
                }
                case 0x4:
                {
// switch_1E60_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1ED8
                }
                case 0x5:
                {
// switch_1E60_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1ED8
                }
            }
        }
        case 0x66:
        {
// switch_20C0_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2018
                case default:
                {
// switch_2018_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2090
// lab_2090
                    OP_JUMP lab_2108
                }
                case 0x0:
                {
// switch_2018_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2090
                }
                case 0x1:
                {
// switch_2018_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2090
                }
                case 0x2:
                {
// switch_2018_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2090
                }
                case 0x3:
                {
// switch_2018_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2090
                }
                case 0x4:
                {
// switch_2018_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2090
                }
                case 0x5:
                {
// switch_2018_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2090
                }
            }
        }
    }
}
// fun_21C8
fun_21C8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1AA8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2230
fun_2230() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0DF0(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_22D8
    pri = 1;
    return pri;
// lab_22D8
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2320
fun_2320() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2370
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2230(var_8)
    arg_2 = pri;
// lab_2370
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1AA8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23D0
fun_23D0() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2420
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2230(var_8)
    arg_2 = pri;
// lab_2420
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
    pri = fun_2320(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2498
fun_2498() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_21C8(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_24E8
fun_24E8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2498(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2548
fun_2548() {
    OP_JUMP lab_2560
// lab_2560
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_25A0
    pri = 0;
    return pri;
// lab_25A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2560
    pri = 0;
    return pri;
}
// fun_25E0
fun_25E0() {
    var_8 = 0;
    pri = fun_2548()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2690
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_2690
    pri = 0;
    return pri;
}
// fun_26A0
fun_26A0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_26D0
fun_26D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2748()
    return pri;
}
// fun_2748
fun_2748() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2788
fun_2788() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_27C0
fun_27C0() {
    OP_JUMP lab_27D8
// lab_27D8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2820
    OP_JUMP lab_2850
    OP_JUMP lab_2840
// lab_2820
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2850
    pri = 0;
    return pri;
// lab_2840
    OP_JUMP lab_27D8
}
// fun_2860
fun_2860() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2890
fun_2890() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_28E0
fun_28E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2930
fun_2930() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2980
fun_2980() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29D0
fun_29D0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A20
fun_2A20() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A60
fun_2A60() {
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
// fun_2AC0
fun_2AC0() {
    OP_JUMP lab_2AD8
// lab_2AD8
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2B10
    pri = 0;
    return pri;
// lab_2B10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2AD8
    pri = 0;
    return pri;
}
// fun_2B50
fun_2B50() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2B80
fun_2B80() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2BF8
fun_2BF8() {
    var_8 = 0;
    pri = fun_2B80()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2C78
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2C78
    pri = 1;
    return pri;
// lab_2C78
    var_8 = 0;
    pri = fun_2B80()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2CB8
    pri = 1;
    return pri;
// lab_2CB8
    var_8 = 0;
    pri = fun_2B80()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2CE8
fun_2CE8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2D38
fun_2D38() {
    OP_JUMP lab_2D50
// lab_2D50
    pri = EvCameraMoveWait_()
    OP_JZER lab_2D88
    pri = 0;
    return pri;
// lab_2D88
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2D50
    pri = 0;
    return pri;
}
// fun_2DC8
fun_2DC8() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2E30(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2F08()
    pri = 0;
    return pri;
}
// fun_2E30
fun_2E30() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2E88
fun_2E88() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_2E30(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_2F08()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_2F08
fun_2F08() {
    OP_JUMP lab_2F20
// lab_2F20
    pri = IsEasingRunningDof_()
    OP_JZER lab_2F78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2F88
// lab_2F78
    pri = 0;
    return pri;
// lab_2F88
    OP_JUMP lab_2F20
    pri = 0;
    return pri;
}
// fun_2FA8
fun_2FA8() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_2FE0
fun_2FE0() {
    pri = arg_6;
    OP_JNZ lab_3018
    var_8 = 0;
    pri = fun_1300()
// lab_3018
    pri = arg_1;
    switch (pri) {
// switch_4580
        case default:
        {
// switch_4580_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_48D0
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_48D0
            pri = 1;
            OP_JUMP lab_48D8
// lab_48D0
            pri = 0;
// lab_48D8
            OP_JZER lab_4A30
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DF0(var_24, var_16)
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
            OP_JUMP lab_4A90
// lab_4A30
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
// lab_4A90
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4AF0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4B50
// lab_4AF0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4B50
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4B50
            pri = arg_2;
            OP_JZER lab_4B90
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4B90
            var_8 = 0;
            pri = fun_1340()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4580_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x1:
        {
// switch_4580_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x2:
        {
// switch_4580_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x3:
        {
// switch_4580_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x4:
        {
// switch_4580_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x5:
        {
// switch_4580_case_0x5
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0x6:
        {
// switch_4580_case_0x6
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0x7:
        {
// switch_4580_case_0x7
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0x8:
        {
// switch_4580_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x9:
        {
// switch_4580_case_0x9
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0xa:
        {
// switch_4580_case_0xa
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0xb:
        {
// switch_4580_case_0xb
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0xc:
        {
// switch_4580_case_0xc
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0xd:
        {
// switch_4580_case_0xd
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0xe:
        {
// switch_4580_case_0xe
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0xf:
        {
// switch_4580_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x10:
        {
// switch_4580_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x11:
        {
// switch_4580_case_0x11
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0x12:
        {
// switch_4580_case_0x12
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0x13:
        {
// switch_4580_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x14:
        {
// switch_4580_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x15:
        {
// switch_4580_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x16:
        {
// switch_4580_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x17:
        {
// switch_4580_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x18:
        {
// switch_4580_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x19:
        {
// switch_4580_case_0x19
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4580_case_default
        }
        case 0x1a:
        {
// switch_4580_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D78(var_48, var_40)
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
            pri = fun_1060(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4580_case_default
        }
        case 0x1b:
        {
// switch_4580_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D78(var_48, var_40)
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
            pri = fun_1060(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4580_case_default
        }
        case 0x1c:
        {
// switch_4580_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0D78(var_48, var_40)
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
            pri = fun_1060(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4580_case_default
        }
        case 0x1d:
        {
// switch_4580_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x1e:
        {
// switch_4580_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x1f:
        {
// switch_4580_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x20:
        {
// switch_4580_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x21:
        {
// switch_4580_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x22:
        {
// switch_4580_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x23:
        {
// switch_4580_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x24:
        {
// switch_4580_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x25:
        {
// switch_4580_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x26:
        {
// switch_4580_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x27:
        {
// switch_4580_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x28:
        {
// switch_4580_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
        case 0x29:
        {
// switch_4580_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4580_case_default
        }
    }
}
// fun_4BC0
fun_4BC0() {
    pri = arg_5;
    OP_JNZ lab_4BF8
    var_8 = 0;
    pri = fun_1300()
// lab_4BF8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4C48
    OP_CONST_S -8, -1
// lab_4C48
    pri = arg_1;
    switch (pri) {
// switch_6700
        case default:
        {
// switch_6700_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6BA8
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0DF0(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6BA8
            pri = 1;
            OP_JUMP lab_6BB0
// lab_6BA8
            pri = 0;
// lab_6BB0
            OP_JZER lab_6C00
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6E58
// lab_6C00
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6C68
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6C68
            pri = 1;
            OP_JUMP lab_6C70
// lab_6C68
            pri = 0;
// lab_6C70
            OP_JZER lab_6DF8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DF0(var_24, var_16)
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
            OP_JUMP lab_6E58
// lab_6DF8
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
// lab_6E58
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6EC8
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6EC8
            var_8 = 0;
            pri = fun_1340()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6700_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x1:
        {
// switch_6700_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x2:
        {
// switch_6700_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x3:
        {
// switch_6700_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x4:
        {
// switch_6700_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x5:
        {
// switch_6700_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1028(var_40)
            OP_JUMP switch_6700_case_default
        }
        case 0x6:
        {
// switch_6700_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x7:
        {
// switch_6700_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x8:
        {
// switch_6700_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x9:
        {
// switch_6700_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0xa:
        {
// switch_6700_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0xb:
        {
// switch_6700_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0xc:
        {
// switch_6700_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0xd:
        {
// switch_6700_case_0xd
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0xe:
        {
// switch_6700_case_0xe
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0xf:
        {
// switch_6700_case_0xf
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x10:
        {
// switch_6700_case_0x10
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x11:
        {
// switch_6700_case_0x11
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x12:
        {
// switch_6700_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x13:
        {
// switch_6700_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x14:
        {
// switch_6700_case_0x14
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x15:
        {
// switch_6700_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x16:
        {
// switch_6700_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x17:
        {
// switch_6700_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x18:
        {
// switch_6700_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x19:
        {
// switch_6700_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x1a:
        {
// switch_6700_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x1b:
        {
// switch_6700_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x1c:
        {
// switch_6700_case_0x1c
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x1d:
        {
// switch_6700_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x1e:
        {
// switch_6700_case_0x1e
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x1f:
        {
// switch_6700_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x20:
        {
// switch_6700_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x21:
        {
// switch_6700_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x22:
        {
// switch_6700_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x23:
        {
// switch_6700_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x24:
        {
// switch_6700_case_0x24
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x25:
        {
// switch_6700_case_0x25
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x26:
        {
// switch_6700_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x27:
        {
// switch_6700_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x28:
        {
// switch_6700_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x29:
        {
// switch_6700_case_0x29
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x2a:
        {
// switch_6700_case_0x2a
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x2b:
        {
// switch_6700_case_0x2b
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x2c:
        {
// switch_6700_case_0x2c
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x2d:
        {
// switch_6700_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x2e:
        {
// switch_6700_case_0x2e
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x2f:
        {
// switch_6700_case_0x2f
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x30:
        {
// switch_6700_case_0x30
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x31:
        {
// switch_6700_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x32:
        {
// switch_6700_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x33:
        {
// switch_6700_case_0x33
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x34:
        {
// switch_6700_case_0x34
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x35:
        {
// switch_6700_case_0x35
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x36:
        {
// switch_6700_case_0x36
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x37:
        {
// switch_6700_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x38:
        {
// switch_6700_case_0x38
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
            pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6700_case_default
        }
        case 0x39:
        {
// switch_6700_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x3a:
        {
// switch_6700_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x3b:
        {
// switch_6700_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x3c:
        {
// switch_6700_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x3d:
        {
// switch_6700_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
        case 0x3e:
        {
// switch_6700_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            OP_JUMP switch_6700_case_default
        }
    }
}
// fun_6EF8
fun_6EF8() {
    pri = arg_4;
    OP_JNZ lab_6F30
    var_8 = 0;
    pri = fun_1300()
// lab_6F30
    pri = arg_1;
    switch (pri) {
// switch_8308
        case default:
        {
// switch_8308_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_16E0(var_264)
            OP_JZER lab_88D0
            pri = arg_3;
            switch (pri) {
// switch_8878
                case default:
                {
// switch_8878_case_default
                    OP_JUMP lab_8B88
// lab_8B88
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8BF8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8BF8
                    var_8 = 0;
                    pri = fun_1340()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8878_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8878_case_default
                }
                case 0x2:
                {
// switch_8878_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8878_case_default
                }
                case 0x3:
                {
// switch_8878_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8878_case_default
                }
            }
// lab_88D0
            pri = arg_1;
            OP_JZER lab_8920
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8920
            pri = 0;
            OP_JUMP lab_8928
// lab_8920
            pri = 1;
// lab_8928
            OP_JZER lab_8990
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0DF0(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8990
            pri = 1;
            OP_JUMP lab_8998
// lab_8990
            pri = 0;
// lab_8998
            OP_JZER lab_89E8
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8B88
// lab_89E8
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8A50
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8B88
// lab_8A50
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0DF0(var_24, var_16)
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
// switch_8308_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1:
        {
// switch_8308_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2:
        {
// switch_8308_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x3:
        {
// switch_8308_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x4:
        {
// switch_8308_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x5:
        {
// switch_8308_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_1028(var_40)
            OP_JUMP switch_8308_case_default
        }
        case 0x6:
        {
// switch_8308_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x7:
        {
// switch_8308_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x8:
        {
// switch_8308_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x9:
        {
// switch_8308_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0xa:
        {
// switch_8308_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0xb:
        {
// switch_8308_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0xc:
        {
// switch_8308_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0xd:
        {
// switch_8308_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0xe:
        {
// switch_8308_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0xf:
        {
// switch_8308_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x10:
        {
// switch_8308_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x11:
        {
// switch_8308_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x12:
        {
// switch_8308_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x13:
        {
// switch_8308_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x14:
        {
// switch_8308_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x15:
        {
// switch_8308_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x16:
        {
// switch_8308_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x17:
        {
// switch_8308_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x18:
        {
// switch_8308_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x19:
        {
// switch_8308_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1a:
        {
// switch_8308_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1b:
        {
// switch_8308_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1c:
        {
// switch_8308_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1d:
        {
// switch_8308_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1e:
        {
// switch_8308_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x1f:
        {
// switch_8308_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x20:
        {
// switch_8308_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x21:
        {
// switch_8308_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x22:
        {
// switch_8308_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x23:
        {
// switch_8308_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x24:
        {
// switch_8308_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x25:
        {
// switch_8308_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x26:
        {
// switch_8308_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x27:
        {
// switch_8308_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x28:
        {
// switch_8308_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x29:
        {
// switch_8308_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2a:
        {
// switch_8308_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2b:
        {
// switch_8308_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2c:
        {
// switch_8308_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2d:
        {
// switch_8308_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2e:
        {
// switch_8308_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x2f:
        {
// switch_8308_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x30:
        {
// switch_8308_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x31:
        {
// switch_8308_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x32:
        {
// switch_8308_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x33:
        {
// switch_8308_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x34:
        {
// switch_8308_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x35:
        {
// switch_8308_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x36:
        {
// switch_8308_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x37:
        {
// switch_8308_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x38:
        {
// switch_8308_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x39:
        {
// switch_8308_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x3a:
        {
// switch_8308_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x3b:
        {
// switch_8308_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x3c:
        {
// switch_8308_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x3d:
        {
// switch_8308_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
        case 0x3e:
        {
// switch_8308_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0DB0(var_24, var_16, var_8)
            OP_JUMP switch_8308_case_default
        }
    }
}
// fun_8C28
fun_8C28() {
    pri = arg_4;
    OP_JNZ lab_8C60
    var_8 = 0;
    pri = fun_1300()
// lab_8C60
    pri = arg_1;
    OP_JNZ lab_8D08
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30352;
    var_72 = 30344;
    var_80 = 30200;
    var_88 = 30048;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8D08
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_8D68
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_8D68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_8E18
    var_8 = 0;
    var_16 = -1;
    var_24 = 3;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 30808;
    var_72 = 30664;
    var_80 = 30512;
    var_88 = 30360;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8E18
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_8EC8
    var_8 = 0;
    var_16 = -1;
    var_24 = 4;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31440;
    var_72 = 31288;
    var_80 = 31120;
    var_88 = 30944;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8EC8
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_8F78
    var_8 = 0;
    var_16 = -1;
    var_24 = 6;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 31640;
    var_72 = 31632;
    var_80 = 31624;
    var_88 = 31448;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_8F78
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_9028
    var_8 = 0;
    var_16 = -1;
    var_24 = 1;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
    var_48 = arg_3;
    var_56 = arg_2;
    var_64 = 32056;
    var_72 = 31928;
    var_80 = 31792;
    var_88 = 31648;
    var_96 = arg_0;
    var_104 = 56;
    pri = fun_1060(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9028
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9088
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9088
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_90E8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_90E8
    var_8 = 0;
    pri = fun_1340()
    pri = 0;
    return pri;
}
// fun_9110
fun_9110() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_9210
        case default:
        {
// switch_9210_case_default
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
// switch_9210_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_9210_case_default
        }
        case 0x1:
        {
// switch_9210_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_9210_case_default
        }
        case 0x2:
        {
// switch_9210_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_9210_case_default
        }
        case 0x3:
        {
// switch_9210_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_9210_case_default
        }
    }
}
// fun_92D0
fun_92D0() {
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
    pri = fun_2320(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2548()
    pri = 0;
    return pri;
}
// fun_9368
fun_9368() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9110(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_92D0(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_9410
fun_9410() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_9460
// lab_9460
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 32224;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_94D8
    OP_JUMP lab_9508
// lab_94D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_9460
// lab_9508
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_9590
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6EF8(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_19B0(var_56)
// lab_9590
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_95F8
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14A0(var_24, var_16)
// lab_95F8
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_14A0(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_96B8
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0E28(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0BA8(var_88, var_80, var_72, var_64, var_56)
// lab_96B8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_96F8
    pri = 0;
    return pri;
// lab_96F8
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9840
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 32344;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0D78(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_9808
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_9840
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C50(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0C50(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0E28(var_40)
    pri = 0;
    return pri;
// lab_9808
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14A0(var_16, var_8)
}
// fun_98C8
fun_98C8() {
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
    pri = fun_9368(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_25E0(var_112)
    var_128 = 0;
    pri = fun_26A0()
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
    pri = fun_9410(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9A40
fun_9A40() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9AD8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0E28(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2FE0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_9AD8
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9C30
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9B98
    var_24 = 32480;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9B98
    pri = 1;
    OP_JUMP lab_9BA0
// lab_9C30
    pri = 0;
    return pri;
// lab_9B98
    pri = 0;
// lab_9BA0
    OP_JZER lab_9C30
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0E28(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2FE0(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9C40
fun_9C40() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9A40(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_9CC8(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_9CC8
fun_9CC8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_A068(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9D30
fun_9D30() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9DA0
    OP_CONST_S -8, 1
// lab_9DA0
    pri = arg_0;
    OP_JNZ lab_9DC0
    OP_ZERO_P_S -8
// lab_9DC0
    pri = var_8;
    OP_JZER lab_9E48
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9E48
    pri = 0;
    return pri;
}
// fun_9E60
fun_9E60() {
    var_8 = 32584;
    var_16 = 8;
    pri = fun_2788(var_8)
    var_24 = 0;
    pri = fun_27C0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2890(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_29D0(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_2860()
    var_88 = 32816;
    var_96 = 8;
    pri = fun_2788(var_88)
    var_104 = 0;
    pri = fun_27C0()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_9A40(var_128, var_120, var_112)
    var_144 = 32976;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_24E8(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0658(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_25E0(var_200)
    var_216 = 0;
    pri = fun_26A0()
    var_224 = 0;
    pri = fun_2860()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_2FA8(var_232)
    pri = 0;
    return pri;
}
// fun_A068
fun_A068() {
    var_8 = 33160;
    var_16 = 8;
    pri = fun_2788(var_8)
    var_24 = 0;
    pri = fun_27C0()
    pri = arg_3;
    OP_JNZ lab_A188
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_A150
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_A1F8(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_A178
// lab_A188
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A398(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_A150
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_A2C0(var_16, var_8)
// lab_A178
    OP_JUMP lab_A1D0
// lab_A1D0
    var_8 = 0;
    pri = fun_2860()
    pri = 0;
    return pri;
}
// fun_A1F8
fun_A1F8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A398(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_A2A8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_A2A8
    pri = 0;
    return pri;
}
// fun_A2C0
fun_A2C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_28E0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_24E8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_25E0(var_72)
    var_88 = 0;
    pri = fun_26A0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2890(var_96)
    pri = 0;
    return pri;
}
// fun_A398
fun_A398() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A3E0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A6A0(var_8)
// lab_A3E0
    pri = arg_4;
    OP_JNZ lab_A448
    var_8 = 0;
    var_16 = 8;
    pri = fun_2890(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_28E0(var_40, var_32, var_24)
// lab_A448
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_A4E8
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2930(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_24E8(var_56, var_48, var_40)
    OP_JUMP lab_A5D8
// lab_A4E8
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_A5A0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_A5A0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_A5A0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_24E8(var_24, var_16, var_8)
// lab_A5D8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A618
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
// lab_A618
    var_8 = 1;
    var_16 = 8;
    pri = fun_25E0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A8A8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9D30(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A6A0
fun_A6A0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A700
    var_16 = 33320;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A700
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A840
        case default:
        {
// switch_A840_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A830
            var_16 = 33864;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A830
            OP_JUMP lab_A878
// lab_A878
            var_8 = 34080;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A840_case_0x1
            var_8 = 33536;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A878
        }
        case 0x2:
        {
// switch_A840_case_0x2
            var_8 = 33664;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A878
        }
    }
}
// fun_A8A8
fun_A8A8() {
    pri = arg_2;
    OP_JNZ lab_A990
    var_8 = 0;
    var_16 = 8;
    pri = fun_2890(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_28E0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2980(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_A990
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_24E8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_25E0(var_40)
    var_56 = 0;
    pri = fun_26A0()
    pri = 0;
    return pri;
}
// fun_AA08
fun_AA08() {
    pri = 34264;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_AA90
// lab_AA90
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_AC10
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_AC00
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_AB50
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_AB50
    pri = 0;
    OP_JUMP lab_AB58
// lab_AC10
    pri = 0;
    return pri;
// lab_AC00
    OP_JUMP lab_AA88
// lab_AA88
    OP_INC_P_S -936
// lab_AB50
    pri = 1;
// lab_AB58
    OP_JZER lab_ABD0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_ABC8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_ABD0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_ABC8
}
// fun_AC30
fun_AC30() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_ACB8()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_ACB8
fun_ACB8() {
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
// fun_AF68
fun_AF68() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_B000
    var_8 = 1;
    var_16 = 0;
    var_24 = 35184;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1988()
// lab_B000
    pri = arg_4;
    OP_JZER lab_B038
    var_8 = 1;
    var_16 = 8;
    pri = fun_1A70(var_8)
// lab_B038
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_B090
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_B090
    pri = 0;
    OP_JUMP lab_B098
// lab_B090
    pri = 1;
// lab_B098
    OP_JZER lab_B160
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_B160
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_B138
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_18C8(var_32, var_24)
    OP_JUMP lab_B160
// lab_B160
    pri = arg_2;
    OP_JZER lab_B238
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_B208
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_14A0(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AA0(var_40)
    OP_JUMP lab_B238
// lab_B238
    pri = arg_3;
    OP_JZER lab_B270
    var_8 = 1;
    var_16 = 8;
    pri = fun_1950(var_8)
// lab_B270
    pri = 0;
    return pri;
// lab_B208
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_14A0(var_16, var_8)
// lab_B138
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_18C8(var_16, var_8)
}
// fun_B280
fun_B280() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_B400
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B318
    var_8 = 1;
    var_16 = 0;
    var_24 = 35184;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_B400
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_B318
    pri = arg_0;
    OP_JNZ lab_B360
    var_8 = 35232;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_B380
// lab_B360
    var_8 = 35408;
    pri = SoundPostEvent(var_8)
// lab_B380
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B400
    var_24 = 35672;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_B440
fun_B440() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0430(var_8)
    var_24 = 0;
    pri = fun_0468()
    pri = arg_1;
    OP_JZER lab_B4B8
    var_32 = 35720;
    pri = SoundPostEvent(var_32)
// lab_B4B8
    var_8 = 35920;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 36184;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0308(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B538
fun_B538() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_B588
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_B440(var_16, var_8)
// lab_B588
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0C50(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_B628
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_B628
    pri = 1;
    OP_JUMP lab_B630
// lab_B628
    pri = 0;
// lab_B630
    OP_JZER lab_B7C8
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_B710
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
    OP_JUMP lab_B7B8
// lab_B7C8
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
    pri = fun_0940(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_B710
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
// lab_B7B8
    OP_JUMP lab_B888
// lab_B888
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_B900
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_09E8(var_32, var_24, var_16)
// lab_B900
    var_8 = 36200;
    pri = SoundPostEvent(var_8)
    var_16 = 36472;
    var_24 = 8;
    var_32 = 16;
    pri = fun_02A8(var_24, var_16)
    var_40 = 0;
    pri = fun_0378()
    pri = 0;
    return pri;
}
// fun_B970
fun_B970() {
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2498(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_25E0(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_26D0(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_BA70
    pri = 1;
    return pri;
// lab_BA70
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
    pri = fun_0AD8(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_96 = 8802641224559852288;
    var_104 = 8;
    pri = fun_0C50(var_96)
    pri = 0;
    return pri;
}
// fun_BB80
fun_BB80() {
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
    pri = fun_B538(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_BC20
fun_BC20() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_AA08(var_24)
    pri = 0;
    return pri;
}
// fun_BC88
fun_BC88() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_BE08(var_16)
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
    pri = fun_0940(var_80, var_72, var_64, var_56, var_48)
    var_96 = 36544;
    var_104 = 36488;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_19E0(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_BD90
fun_BD90() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_BE08(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1A30(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_BE08
fun_BE08() {
    pri = arg_0;
    OP_JNZ lab_BE50
    var_8 = 36600;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_BE50
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_BE98
    var_8 = 36752;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_BE98
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 36904;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_BEE0
fun_BEE0() {
    pri = g_mode;
    switch (pri) {
// switch_BFF0
        case default:
        {
// switch_BFF0_case_default
            pri = CommandNOP()
            OP_JUMP lab_C058
// lab_C058
            pri = 0;
            return pri;
        }
        case 0xa639372210593f6d:
        {
// switch_BFF0_case_0xa639372210593f6d
            var_8 = 0;
            pri = fun_103D8()
            OP_JUMP lab_C058
        }
        case 0x0:
        {
// switch_BFF0_case_0x0
            var_8 = 0;
            pri = fun_C068()
            OP_JUMP lab_C058
        }
        case 0x38f3f804ffcd637b:
        {
// switch_BFF0_case_0x38f3f804ffcd637b
            var_8 = 0;
            pri = fun_10590()
            OP_JUMP lab_C058
        }
        case 0x43faf51e5f814369:
        {
// switch_BFF0_case_0x43faf51e5f814369
            var_8 = 0;
            pri = fun_104C8()
            OP_JUMP lab_C058
        }
        case 0x7fd3be70fc69754d:
        {
// switch_BFF0_case_0x7fd3be70fc69754d
            var_8 = 0;
            pri = fun_10510()
            OP_JUMP lab_C058
        }
    }
}
// fun_C068
fun_C068() {
    pri = 0;
    return pri;
}
// fun_C080
fun_C080() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_AF68(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_C0D8
fun_C0D8() {
    var_8 = 5022837494877359952;
    var_16 = 8;
    pri = fun_0768(var_8)
    var_24 = 8541340050249644631;
    var_32 = 8;
    pri = fun_0768(var_24)
    pri = 0;
    return pri;
}
// fun_C140
fun_C140() {
    var_8 = 0;
    pri = fun_0798()
    pri = 0;
    return pri;
}
// fun_C170
fun_C170() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35184;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_BC88(var_64, var_56)
    var_80 = 1;
    var_88 = 5022837494877359952;
    var_96 = 16;
    pri = fun_BC88(var_88, var_80)
    pri = EvCameraStart()
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0A60(var_112, var_104)
    var_128 = 1;
    var_136 = 5022837494877359952;
    var_144 = 16;
    pri = fun_0A60(var_136, var_128)
    var_152 = 1;
    var_160 = -9000327665943980061;
    var_168 = 16;
    pri = fun_0A60(var_160, var_152)
    var_176 = 1;
    var_184 = -9000328765455608272;
    var_192 = 16;
    pri = fun_0A60(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C -4582834833314545664, 4672367515408531456, 4671226909533667328, 8802641224559852288
    var_216 = 48;
    pri = fun_0990(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = 0;
    OP_PUSH3_C 4670297684769243136, 4671235018431922176, 5022837494877359952
    var_248 = 48;
    pri = fun_0990(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 2;
    var_264 = 2;
    var_272 = 8802641224559852288;
    var_280 = 24;
    pri = fun_1620(var_272, var_264, var_256)
    var_288 = 5022837494877359952;
    var_296 = 8;
    pri = fun_1688(var_288)
    OP_CONST_S -8, 274
    var_312 = 4;
    var_320 = 0;
    var_328 = var_8;
    var_336 = 32;
    var_344 = 32;
    pri = fun_2A60(var_336, var_328, var_320, var_312)
    var_352 = 0;
    var_360 = 60;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 36912;
    pri = SoundSetRTPC(var_376, var_368, var_360)
    var_384 = 15;
    var_392 = 8;
    pri = fun_0060(var_384)
    var_400 = 0;
    var_408 = 4627617502109211034;
    var_416 = 0;
    OP_PUSH5_C 4672483332465843241, 4657303326498698035, 4671220862219714560, 4672385860760040899, 4657338466890321756
    var_424 = 4671219897398261187;
    var_432 = 1;
    pri = EvCameraMove(var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_440 = 0;
    pri = fun_2D38()
    var_448 = 35672;
    var_456 = 8;
    var_464 = 16;
    pri = fun_02A8(var_456, var_448)
    var_472 = 0;
    pri = fun_0378()
    var_480 = 1;
    var_488 = 0;
    var_496 = 0;
    var_504 = 190;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_512 = 48;
    pri = fun_0B50(var_504, var_496, var_488, var_480, var_472, var_464)
    var_520 = 1;
    var_528 = 0;
    var_536 = 0;
    var_544 = 180;
    OP_PUSH2_C 4607182418800017408, 5022837494877359952
    var_552 = 48;
    pri = fun_0B50(var_544, var_536, var_528, var_520, var_512, var_504)
    var_560 = 0;
    var_568 = 4633415886629450547;
    var_576 = 3;
    OP_PUSH5_C 4671989440088983470, 4641626863543821271, 4671231159146108682, 4671895978851843441, 4643359166103614915
    var_584 = 4671230232807562281;
    var_592 = 60;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 90;
    var_608 = 8;
    pri = fun_0060(var_600)
    var_616 = 0;
    var_624 = 4631459635541311488;
    var_632 = 0;
    OP_PUSH5_C 4672150106225592238, 4637758341832654193, 4671232888128143360, 4672286797511157350, 4637597901095929119
    var_640 = 4671201620766228480;
    var_648 = 1;
    pri = EvCameraMove(var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576)
    var_656 = 0;
    pri = fun_2D38()
    var_664 = 0;
    var_672 = 4631459635541311488;
    var_680 = 0;
    OP_PUSH5_C 4672083316391762985, 4636889287842060042, 4671223495550063084, 4672178404906112123, 4636778105226259333
    var_688 = 4671201749958844744;
    var_696 = 95;
    pri = EvCameraMove(var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_704 = 5022837494877359952;
    var_712 = 8;
    pri = fun_0C50(var_704)
    var_720 = 1;
    var_728 = 1;
    var_736 = 0;
    OP_PUSH3_C 4670525833432006656, 4671226772094713856, 5022837494877359952
    var_744 = 48;
    pri = fun_0990(var_736, var_728, var_720, var_712, var_704, var_696)
    var_752 = 1;
    var_760 = 0;
    var_768 = 0;
    var_776 = 245;
    OP_PUSH2_C 4607182418800017408, 5022837494877359952
    var_784 = 48;
    pri = fun_0B50(var_776, var_768, var_760, var_752, var_744, var_736)
    var_792 = 0;
    var_800 = 4631684815522680013;
    var_808 = 0;
    OP_PUSH5_C 4670428460682250813, -4619071921816275517, 4671225592868493066, 4670556581274677412, 4631826960385918894
    var_816 = 4671225911726865121;
    var_824 = 1;
    pri = EvCameraMove(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752)
    var_832 = 0;
    pri = fun_2D38()
    var_840 = 0;
    var_848 = 4631684815522680013;
    var_856 = 0;
    OP_PUSH5_C 4670592051519789466, 4635903421736130970, 4671226002436574413, 4670720172112216064, 4638986980105996206
    var_864 = 4671226321294946468;
    var_872 = 120;
    pri = EvCameraMove(var_872, var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800)
    var_880 = 8802641224559852288;
    var_888 = 8;
    pri = fun_0C50(var_880)
    var_896 = 1;
    var_904 = 1;
    OP_PUSH4_C 4640537203540230144, 4671927710757421056, 4671226772094713856, 8802641224559852288
    var_912 = 48;
    pri = fun_0990(var_904, var_896, var_888, var_880, var_872, var_864)
    var_920 = 1;
    var_928 = 0;
    var_936 = 0;
    var_944 = 240;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_952 = 48;
    pri = fun_0B50(var_944, var_936, var_928, var_920, var_912, var_904)
    var_960 = 0;
    pri = fun_2D38()
    var_968 = 0;
    var_976 = 4627195289644145050;
    var_984 = 0;
    OP_PUSH5_C 4670736263464888566, 4632968341416480604, 4671227440048027730, 4670610083510484992, 4632879676798816748
    var_992 = 4671201659249135452;
    var_1000 = 1;
    pri = EvCameraMove(var_1000, var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 0;
    pri = fun_2D38()
    var_1016 = 0;
    var_1024 = 4627195289644145050;
    var_1032 = 0;
    OP_PUSH5_C 4670815716923890729, 4633021821662055629, 4671227736916167229, 4670689536969487155, 4632933157044391772
    var_1040 = 4671201956117274952;
    var_1048 = 60;
    pri = EvCameraMove(var_1048, var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 0;
    pri = fun_2D38()
    var_1064 = 0;
    var_1072 = 4627195289644145050;
    var_1080 = 0;
    OP_PUSH5_C 4671614440653214188, 4633725509103832269, 4671218561491633439, 4671742673945582633, 4633569290491757855
    var_1088 = 4671206615297797652;
    var_1096 = 1;
    pri = EvCameraMove(var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024)
    var_1104 = 0;
    pri = fun_2D38()
    var_1112 = 0;
    var_1120 = 4627195289644145050;
    var_1128 = 0;
    OP_PUSH5_C 4671492298655263621, 4633873283466605363, 4671222695655353876, 4671620531947632067, 4633717064854530949
    var_1136 = 4671210749461518090;
    var_1144 = 65;
    pri = EvCameraMove(var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1152 = 60;
    var_1160 = 8;
    pri = fun_0060(var_1152)
    var_1168 = 0;
    var_1176 = 4630108555653100339;
    var_1184 = 0;
    OP_PUSH5_C 4671368790514115543, 4651849418971440742, 4671211945180413297, 4671410481246261740, 4653399378522884014
    var_1192 = 4671212373989948129;
    var_1200 = 1;
    pri = EvCameraMove(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 0;
    pri = fun_2D38()
    var_1216 = 0;
    var_1224 = 4630108555653100339;
    var_1232 = 0;
    OP_PUSH5_C 4671376726239289016, 4651061992724092682, 4671137392794491945, 4671423612163876454, 4652907588962012365
    var_1240 = 4671113934713913344;
    var_1248 = 300;
    pri = EvCameraMove(var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1256 = 8802641224559852288;
    var_1264 = 8;
    pri = fun_0C50(var_1256)
    var_1272 = 5022837494877359952;
    var_1280 = 8;
    pri = fun_0C50(var_1272)
    var_1288 = 1;
    var_1296 = 1;
    var_1304 = 0;
    OP_PUSH3_C 4671034357559853056, 4671226772094713856, 5022837494877359952
    var_1312 = 48;
    pri = fun_0990(var_1304, var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1320 = 1;
    var_1328 = 0;
    var_1336 = 4641240890982006784;
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 20000;
    pri = float(var_1360)
    var_1368 = pri;
    var_1376 = 20150;
    pri = float(var_1376)
    var_1384 = pri;
    OP_PUSH2_C 4607182418800017408, 5022837494877359952
    var_1392 = 72;
    pri = fun_0AD8(var_1384, var_1376, var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320)
    var_1400 = 1;
    var_1408 = 1;
    OP_PUSH4_C 4640537203540230144, 4671460418315616256, 4671226772094713856, 8802641224559852288
    var_1416 = 48;
    pri = fun_0990(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368)
    var_1424 = 1;
    var_1432 = 0;
    var_1440 = 4641240890982006784;
    var_1448 = 0;
    var_1456 = 0;
    var_1464 = 20000;
    pri = float(var_1464)
    var_1472 = pri;
    var_1480 = 19850;
    pri = float(var_1480)
    var_1488 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1496 = 72;
    pri = fun_0AD8(var_1488, var_1480, var_1472, var_1464, var_1456, var_1448, var_1440, var_1432, var_1424)
    var_1504 = 8802641224559852288;
    var_1512 = 8;
    pri = fun_0C50(var_1504)
    var_1520 = 5022837494877359952;
    var_1528 = 8;
    pri = fun_0C50(var_1520)
    var_1536 = 30;
    var_1544 = 8;
    pri = fun_0060(var_1536)
    var_1552 = 0;
    var_1560 = 30;
    pri = float(var_1560)
    var_1568 = pri;
    var_1576 = 37048;
    pri = SoundSetRTPC(var_1576, var_1568, var_1560)
    var_1584 = 0;
    var_1592 = 0;
    var_1600 = 0;
    var_1608 = 90;
    pri = float(var_1608)
    var_1616 = pri;
    var_1624 = 8802641224559852288;
    var_1632 = 40;
    pri = fun_0BA8(var_1624, var_1616, var_1608, var_1600, var_1592)
    var_1640 = 0;
    var_1648 = 0;
    var_1656 = 0;
    var_1664 = 270;
    pri = float(var_1664)
    var_1672 = pri;
    var_1680 = 5022837494877359952;
    var_1688 = 40;
    pri = fun_0BA8(var_1680, var_1672, var_1664, var_1656, var_1648)
    var_1696 = 60;
    var_1704 = 8;
    pri = fun_0060(var_1696)
    var_1712 = 8802641224559852288;
    var_1720 = 8;
    pri = fun_0C50(var_1712)
    var_1728 = 5022837494877359952;
    var_1736 = 8;
    pri = fun_0C50(var_1728)
    var_1744 = 0;
    pri = fun_2AC0()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1752 = 16;
    pri = fun_2DC8(var_1744, var_1736)
    var_1760 = 0;
    var_1768 = 1;
    var_1776 = 500;
    pri = float(var_1776)
    var_1784 = pri;
    var_1792 = 4611686018427387904;
    var_1800 = 32;
    pri = fun_2E30(var_1792, var_1784, var_1776, var_1768)
    var_1808 = 0;
    var_1816 = 4630052260657758208;
    var_1824 = 0;
    OP_PUSH5_C 4671222492245702738, 4636984989334141665, 4671216409197622067, 4671277039017556705, 4636387558696073298
    var_1832 = 4671139036564375470;
    var_1840 = 1;
    pri = EvCameraMove(var_1840, var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1848 = 0;
    pri = fun_2D38()
    var_1856 = 0;
    var_1864 = 4630052260657758208;
    var_1872 = 2;
    OP_PUSH5_C 4671222434521342280, 4635953383544497111, 4671216491660994150, 4671276981293196247, 4635356656593870520
    var_1880 = 4671139116278968484;
    var_1888 = 240;
    pri = EvCameraMove(var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1896 = 0;
    var_1904 = 3;
    var_1912 = 0;
    var_1920 = 100;
    var_1928 = -1;
    OP_PUSH2_C 4026446471276972161, 5022837494877359952
    var_1936 = 56;
    pri = fun_2320(var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880)
    var_1944 = 1;
    var_1952 = 8;
    pri = fun_25E0(var_1944)
    var_1960 = 0;
    pri = fun_26A0()
    var_1968 = 5;
    var_1976 = 5022837494877359952;
    var_1984 = 16;
    pri = fun_1530(var_1976, var_1968)
    var_1992 = 0;
    var_2000 = 3;
    var_2008 = 0;
    var_2016 = 100;
    var_2024 = -1;
    OP_PUSH2_C 4026443172742087528, 5022837494877359952
    var_2032 = 56;
    pri = fun_2320(var_2024, var_2016, var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2040 = 1;
    var_2048 = 8;
    pri = fun_25E0(var_2040)
    var_2056 = 0;
    pri = fun_26A0()
    var_2064 = 0;
    var_2072 = 1;
    var_2080 = 180;
    pri = float(var_2080)
    var_2088 = pri;
    var_2096 = 4611686018427387904;
    var_2104 = 32;
    pri = fun_2E30(var_2096, var_2088, var_2080, var_2072)
    var_2112 = 0;
    var_2120 = 4631825553011035341;
    var_2128 = 0;
    OP_PUSH5_C 4671210930880936673, 4634498861602344796, 4671242258715991081, 4671304675242320855, 4636729550792776745
    var_2136 = 4671229685800527462;
    var_2144 = 1;
    pri = EvCameraMove(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072)
    var_2152 = 0;
    pri = fun_2D38()
    var_2160 = 0;
    var_2168 = 4631825553011035341;
    var_2176 = 3;
    OP_PUSH5_C 4671207794524018442, 4634745152206966620, 4671216980943668511, 4671302022670518845, 4636883658342525829
    var_2184 = 4671225535144132608;
    var_2192 = 240;
    pri = EvCameraMove(var_2192, var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120)
    var_2200 = 6;
    var_2208 = 6;
    var_2216 = 5022837494877359952;
    var_2224 = 24;
    pri = fun_1620(var_2216, var_2208, var_2200)
    var_2232 = 0;
    var_2240 = 3;
    var_2248 = 0;
    var_2256 = 100;
    var_2264 = -1;
    OP_PUSH2_C 4026444272253715739, 5022837494877359952
    var_2272 = 56;
    pri = fun_2320(var_2264, var_2256, var_2248, var_2240, var_2232, var_2224, var_2216)
    var_2280 = 1;
    var_2288 = 8;
    pri = fun_25E0(var_2280)
    var_2296 = 0;
    pri = fun_26A0()
    var_2304 = 0;
    var_2312 = 1;
    var_2320 = 850;
    pri = float(var_2320)
    var_2328 = pri;
    var_2336 = 4607182418800017408;
    var_2344 = 32;
    pri = fun_2E30(var_2336, var_2328, var_2320, var_2312)
    var_2352 = 0;
    var_2360 = 4633345517885272883;
    var_2368 = 0;
    OP_PUSH5_C 4671229564854248407, 4639456339629661225, 4671225414197853553, 4671236519265294090, 4647396396878947942
    var_2376 = 4671225510405120983;
    var_2384 = 1;
    pri = EvCameraMove(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 0;
    pri = fun_2D38()
    var_2400 = 0;
    var_2408 = 4633345517885272883;
    var_2416 = 3;
    OP_PUSH5_C 4671229564854248407, 4639456339629661225, 4671225414197853553, 4671646117583210414, 4650757208100873175
    var_2424 = 4671222266845819044;
    var_2432 = 300;
    pri = EvCameraMove(var_2432, var_2424, var_2416, var_2408, var_2400, var_2392, var_2384, var_2376, var_2368, var_2360)
    var_2440 = 0;
    var_2448 = 60;
    pri = float(var_2448)
    var_2456 = pri;
    var_2464 = 37184;
    pri = SoundSetRTPC(var_2464, var_2456, var_2448)
    var_2472 = 37320;
    pri = SoundPostEvent(var_2472)
    var_2480 = 60;
    var_2488 = 8;
    pri = fun_0060(var_2480)
    var_2496 = 0;
    var_2504 = 120;
    var_2512 = 850;
    pri = float(var_2512)
    var_2520 = pri;
    var_2528 = 4596373779694328218;
    var_2536 = 32;
    pri = fun_2E30(var_2528, var_2520, var_2512, var_2504)
    var_2544 = 1;
    var_2552 = 0;
    var_2560 = 4641240890982006784;
    var_2568 = 0;
    var_2576 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2584 = 72;
    pri = fun_0AD8(var_2576, var_2568, var_2560, var_2552, var_2544, var_2536, var_2528, var_2520, var_2512)
    var_2592 = 1;
    var_2600 = 0;
    var_2608 = 4641240890982006784;
    var_2616 = 0;
    var_2624 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 5022837494877359952
    var_2632 = 72;
    pri = fun_0AD8(var_2624, var_2616, var_2608, var_2600, var_2592, var_2584, var_2576, var_2568, var_2560)
    var_2640 = 8802641224559852288;
    var_2648 = 8;
    pri = fun_0C50(var_2640)
    var_2656 = 5022837494877359952;
    var_2664 = 8;
    pri = fun_0C50(var_2656)
    var_2672 = 30;
    var_2680 = 8;
    pri = fun_0060(var_2672)
    var_2688 = 0;
    var_2696 = 0;
    var_2704 = 0;
    var_2712 = 90;
    pri = float(var_2712)
    var_2720 = pri;
    var_2728 = 8802641224559852288;
    var_2736 = 40;
    pri = fun_0BA8(var_2728, var_2720, var_2712, var_2704, var_2696)
    var_2744 = 0;
    var_2752 = 0;
    var_2760 = 0;
    var_2768 = 270;
    pri = float(var_2768)
    var_2776 = pri;
    var_2784 = 5022837494877359952;
    var_2792 = 40;
    pri = fun_0BA8(var_2784, var_2776, var_2768, var_2760, var_2752)
    var_2800 = 60;
    var_2808 = 8;
    pri = fun_0060(var_2800)
    var_2816 = 8802641224559852288;
    var_2824 = 8;
    pri = fun_0C50(var_2816)
    var_2832 = 5022837494877359952;
    var_2840 = 8;
    pri = fun_0C50(var_2832)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2848 = 3;
    var_2856 = 1;
    var_2864 = 32;
    pri = fun_2E88(var_2856, var_2848, var_2840, var_2832)
    var_2872 = 0;
    pri = fun_2B50()
    var_2880 = 0;
    pri = fun_2BF8()
    OP_JZER lab_DDD8
    var_2888 = 590;
    var_2896 = 8;
    pri = fun_BC20(var_2888)
    var_2904 = 5022837494877359952;
    pri = VanishFlagSet(var_2904)
    var_2912 = 8541340050249644631;
    pri = VanishFlagSet(var_2912)
    var_2920 = 0;
    pri = fun_2CE8()
// lab_DDD8
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_8 = 16;
    pri = fun_2DC8(var_0, var_-8)
    var_16 = 0;
    var_24 = 1;
    var_32 = 600;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 4612811918334230528;
    var_56 = 32;
    pri = fun_2E30(var_48, var_40, var_32, var_24)
    var_64 = 0;
    var_72 = 0;
    var_80 = 37568;
    pri = PokeMemoryCheckParty(var_80, var_72, var_64)
    var_88 = 1;
    var_96 = 1;
    var_104 = 90;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_120 = 48;
    pri = fun_0990(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 1;
    var_136 = 1;
    var_144 = 270;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 4671226772094713856;
    var_168 = 20580;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 5022837494877359952;
    var_192 = 48;
    pri = fun_0990(var_184, var_176, var_168, var_160, var_152, var_144)
    var_200 = 8802641224559852288;
    var_208 = 8;
    pri = fun_1688(var_200)
    var_216 = 5022837494877359952;
    var_224 = 8;
    pri = fun_1688(var_216)
    var_232 = 15;
    var_240 = 8;
    pri = fun_0060(var_232)
    pri = EvCameraStart()
    var_248 = 1;
    var_256 = 0;
    var_264 = 4641240890982006784;
    var_272 = 90;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 0;
    var_296 = 20000;
    pri = float(var_296)
    var_304 = pri;
    var_312 = 19900;
    pri = float(var_312)
    var_320 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_328 = 72;
    pri = fun_0AD8(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256)
    var_336 = 1;
    var_344 = 0;
    var_352 = 4641240890982006784;
    var_360 = -90;
    pri = float(var_360)
    var_368 = pri;
    var_376 = 0;
    var_384 = 20000;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 20100;
    pri = float(var_400)
    var_408 = pri;
    OP_PUSH2_C 4607182418800017408, 5022837494877359952
    var_416 = 72;
    pri = fun_0AD8(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    var_432 = 4626547897197710541;
    var_440 = 0;
    OP_PUSH5_C 4671256937196221891, 4635172994171566817, 4671104723555251651, 4671290158940055142, 4636299597765851218
    var_448 = 4670980344051138560;
    var_456 = 1;
    pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 0;
    pri = fun_2D38()
    var_472 = 0;
    var_480 = 4626547897197710541;
    var_488 = 2;
    OP_PUSH5_C 4671247360449943962, 4635172994171566817, 4671102167190717071, 4671280582193777213, 4636299597765851218
    var_496 = 4670977784937824911;
    var_504 = 300;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    var_520 = 30;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 37720;
    pri = SoundSetRTPC(var_536, var_528, var_520)
    var_544 = 35672;
    var_552 = 8;
    var_560 = 16;
    pri = fun_02A8(var_552, var_544)
    var_568 = 0;
    pri = fun_0378()
    var_576 = 60;
    var_584 = 8;
    pri = fun_0060(var_576)
    var_592 = 1;
    var_600 = 0;
    var_608 = 37856;
    var_616 = 1;
    var_624 = 32;
    pri = fun_0308(var_616, var_608, var_600, var_592)
    var_632 = 0;
    pri = fun_0378()
    var_640 = 0;
    var_648 = 1;
    var_656 = 370;
    pri = float(var_656)
    var_664 = pri;
    var_672 = 4611686018427387904;
    var_680 = 32;
    pri = fun_2E30(var_672, var_664, var_656, var_648)
    var_688 = 0;
    var_696 = 4629447089457830298;
    var_704 = 0;
    OP_PUSH5_C 4671252800283722383, 4632843085051844362, 4671204831340181586, 4671377641582719140, 4631401933171085804
    var_712 = 4671173569475824845;
    var_720 = 1;
    pri = EvCameraMove(var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648)
    var_728 = 0;
    pri = fun_2D38()
    var_736 = 0;
    var_744 = 4629447089457830298;
    var_752 = 3;
    OP_PUSH5_C 4671255433614070907, 4632843085051844362, 4671215298690878013, 4671380274913067663, 4631401933171085804
    var_760 = 4671184036826521272;
    var_768 = 120;
    pri = EvCameraMove(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_776 = 37904;
    var_784 = 15;
    var_792 = 16;
    pri = fun_02A8(var_784, var_776)
    var_800 = 8802641224559852288;
    var_808 = 8;
    pri = fun_0C50(var_800)
    var_816 = 5022837494877359952;
    var_824 = 8;
    pri = fun_0C50(var_816)
    var_832 = 5;
    var_840 = 5;
    var_848 = 5022837494877359952;
    var_856 = 24;
    pri = fun_1620(var_848, var_840, var_832)
    var_864 = 0;
    var_872 = 3;
    var_880 = 0;
    var_888 = 100;
    var_896 = -1;
    OP_PUSH2_C 4026449769811856794, 5022837494877359952
    var_904 = 56;
    pri = fun_2320(var_896, var_888, var_880, var_872, var_864, var_856, var_848)
    var_912 = 1;
    var_920 = 8;
    pri = fun_25E0(var_912)
    var_928 = 0;
    pri = fun_26A0()
    var_936 = 0;
    var_944 = 1;
    var_952 = 230;
    pri = float(var_952)
    var_960 = pri;
    var_968 = 4609434218613702656;
    var_976 = 32;
    pri = fun_2E30(var_968, var_960, var_952, var_944)
    var_984 = 5022837494877359952;
    var_992 = 8;
    pri = fun_1688(var_984)
    var_1000 = 0;
    var_1008 = 4631234455559942963;
    var_1016 = 0;
    OP_PUSH5_C 4671195048435473449, 4636151119715636347, 4671166736011058217, 4671254111451338506, 4636551517870007255
    var_1024 = 4671281038491102740;
    var_1032 = 1;
    pri = EvCameraMove(var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1040 = 0;
    pri = fun_2D38()
    var_1048 = 0;
    var_1056 = 4631234455559942963;
    var_1064 = 2;
    OP_PUSH5_C 4671192197951578440, 4636151119715636347, 4671168209356639437, 4671251258218664428, 4636551517870007255
    var_1072 = 4671282511836683960;
    var_1080 = 240;
    pri = EvCameraMove(var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016, var_1008)
    var_1088 = 0;
    var_1096 = 3;
    var_1104 = 0;
    var_1112 = 100;
    var_1120 = -1;
    OP_PUSH2_C 4026450869323485005, 5022837494877359952
    var_1128 = 56;
    pri = fun_2320(var_1120, var_1112, var_1104, var_1096, var_1088, var_1080, var_1072)
    var_1136 = 1;
    var_1144 = 8;
    pri = fun_25E0(var_1136)
    var_1152 = 0;
    pri = fun_26A0()
    var_1160 = 0;
    var_1168 = 1;
    var_1176 = 230;
    pri = float(var_1176)
    var_1184 = pri;
    var_1192 = 4611686018427387904;
    var_1200 = 32;
    pri = fun_2E30(var_1192, var_1184, var_1176, var_1168)
    var_1208 = 0;
    var_1216 = 4630164850648442470;
    var_1224 = 0;
    OP_PUSH5_C 4671157876696117412, 4637353721553632625, 4671228891403376394, 4671324917251388211, 4634457344043279974
    var_1232 = 4671225930968318607;
    var_1240 = 1;
    pri = EvCameraMove(var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1248 = 0;
    pri = fun_2D38()
    var_1256 = 0;
    var_1264 = 4630164850648442470;
    var_1272 = 3;
    OP_PUSH5_C 4671145570412223529, 4637566938848490947, 4671229111305701949, 4671312281114005996, 4634676190837672509
    var_1280 = 4671226156368202301;
    var_1288 = 90;
    pri = EvCameraMove(var_1288, var_1280, var_1272, var_1264, var_1256, var_1248, var_1240, var_1232, var_1224, var_1216)
    var_1296 = 1;
    var_1304 = 0;
    var_1312 = 4641240890982006784;
    var_1320 = -90;
    pri = float(var_1320)
    var_1328 = pri;
    var_1336 = 0;
    var_1344 = 20000;
    pri = float(var_1344)
    var_1352 = pri;
    var_1360 = 20050;
    pri = float(var_1360)
    var_1368 = pri;
    OP_PUSH2_C 4607182418800017408, 5022837494877359952
    var_1376 = 72;
    pri = fun_0AD8(var_1368, var_1360, var_1352, var_1344, var_1336, var_1328, var_1320, var_1312, var_1304)
    var_1384 = 1;
    var_1392 = 0;
    var_1400 = 4641240890982006784;
    var_1408 = 90;
    pri = float(var_1408)
    var_1416 = pri;
    var_1424 = 0;
    var_1432 = 20000;
    pri = float(var_1432)
    var_1440 = pri;
    var_1448 = 19950;
    pri = float(var_1448)
    var_1456 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1464 = 72;
    pri = fun_0AD8(var_1456, var_1448, var_1440, var_1432, var_1424, var_1416, var_1408, var_1400, var_1392)
    var_1472 = 1;
    var_1480 = 0;
    var_1488 = 15;
    var_1496 = 20000;
    pri = float(var_1496)
    var_1504 = pri;
    var_1512 = 140;
    pri = float(var_1512)
    var_1520 = pri;
    var_1528 = 20050;
    pri = float(var_1528)
    var_1536 = pri;
    var_1544 = 8802641224559852288;
    var_1552 = 56;
    pri = fun_1380(var_1544, var_1536, var_1528, var_1520, var_1512, var_1504, var_1496)
    var_1560 = 1;
    var_1568 = 0;
    var_1576 = 15;
    var_1584 = 10;
    pri = float(var_1584)
    var_1592 = pri;
    var_1600 = 0;
    var_1608 = 5022837494877359952;
    var_1616 = 48;
    pri = fun_1440(var_1608, var_1600, var_1592, var_1584, var_1576, var_1568)
    var_1624 = 5022837494877359952;
    var_1632 = 8;
    pri = fun_0C50(var_1624)
    var_1640 = 8802641224559852288;
    var_1648 = 8;
    pri = fun_0C50(var_1640)
    var_1656 = 15;
    var_1664 = 8;
    pri = fun_0060(var_1656)
    var_1672 = 1;
    var_1680 = 0;
    var_1688 = 15;
    OP_PUSH2_C 5022837494877359952, 8802641224559852288
    var_1696 = 40;
    pri = fun_13E8(var_1688, var_1680, var_1672, var_1664, var_1656)
    var_1704 = 1;
    var_1712 = 0;
    var_1720 = 15;
    OP_PUSH2_C 8802641224559852288, 5022837494877359952
    var_1728 = 40;
    pri = fun_13E8(var_1720, var_1712, var_1704, var_1696, var_1688)
    var_1736 = 0;
    var_1744 = 10;
    OP_PUSH2_C 8802641224559852288, 5022837494877359952
    var_1752 = 32;
    pri = fun_14E0(var_1744, var_1736, var_1728, var_1720)
    var_1760 = 37952;
    pri = SoundPostEvent(var_1760)
    var_1768 = 1;
    var_1776 = -1;
    var_1784 = -1;
    var_1792 = 1;
    var_1800 = 8802641224559852288;
    var_1808 = 40;
    pri = fun_8C28(var_1800, var_1792, var_1784, var_1776, var_1768)
    var_1816 = 1;
    var_1824 = 1;
    var_1832 = -1;
    var_1840 = -1;
    var_1848 = 0;
    var_1856 = 40;
    var_1864 = 5022837494877359952;
    var_1872 = 56;
    pri = fun_4BC0(var_1864, var_1856, var_1848, var_1840, var_1832, var_1824, var_1816)
    var_1880 = 0;
    var_1888 = 4626379012211684147;
    var_1896 = 0;
    OP_PUSH5_C 4671094728994555167, 4636874510405782733, 4671230012905236726, 4671261819027849216, 4636590220679304970
    var_1904 = 4671227044223841731;
    var_1912 = 1;
    pri = EvCameraMove(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864, var_1856, var_1848, var_1840)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1920 = 3;
    var_1928 = 1;
    var_1936 = 32;
    pri = fun_2E88(var_1928, var_1920, var_1912, var_1904)
    var_1944 = 30;
    var_1952 = 8;
    pri = fun_0060(var_1944)
    var_1960 = 1000;
    var_1968 = 38152;
    var_1976 = 16;
    pri = fun_2A20(var_1968, var_1960)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1984 = 16;
    pri = fun_2DC8(var_1976, var_1968)
    var_1992 = 0;
    var_2000 = 1;
    var_2008 = 200;
    pri = float(var_2008)
    var_2016 = pri;
    var_2024 = 4611686018427387904;
    var_2032 = 32;
    pri = fun_2E30(var_2024, var_2016, var_2008, var_2000)
    var_2040 = 5;
    var_2048 = 5;
    var_2056 = 5022837494877359952;
    var_2064 = 24;
    pri = fun_1620(var_2056, var_2048, var_2040)
    var_2072 = 0;
    var_2080 = 4631445561792475955;
    var_2088 = 0;
    OP_PUSH5_C 4671148668286234788, 4637754119708003533, 4671260991645349315, 4671266164847558001, 4636838622346252124
    var_2096 = 4671208621906518344;
    var_2104 = 1;
    pri = EvCameraMove(var_2104, var_2096, var_2088, var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2112 = 0;
    pri = fun_2D38()
    var_2120 = 0;
    var_2128 = 4631445561792475955;
    var_2136 = 2;
    OP_PUSH5_C 4671156702967454761, 4637754119708003533, 4671275246813603430, 4671261582632849244, 4636838622346252124
    var_2144 = 4671200757649600676;
    var_2152 = 360;
    pri = EvCameraMove(var_2152, var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080)
    var_2160 = 3;
    var_2168 = 0;
    var_2176 = 1847002356864243988;
    var_2184 = 24;
    pri = fun_2498(var_2176, var_2168, var_2160)
    var_2192 = 1;
    var_2200 = 8;
    pri = fun_25E0(var_2192)
    var_2208 = 0;
    pri = fun_26A0()
    var_2216 = 0;
    var_2224 = 3;
    var_2232 = 0;
    var_2240 = 100;
    var_2248 = -1;
    OP_PUSH2_C 4026447570788600372, 5022837494877359952
    var_2256 = 56;
    pri = fun_2320(var_2248, var_2240, var_2232, var_2224, var_2216, var_2208, var_2200)
    var_2264 = 1;
    var_2272 = 8;
    pri = fun_25E0(var_2264)
    var_2280 = 0;
    pri = fun_26A0()
    var_2288 = 5;
    var_2296 = 8;
    pri = fun_0430(var_2288)
    var_2304 = 0;
    pri = fun_0468()
    var_2312 = 38280;
    pri = SoundPostEvent(var_2312)
    var_2320 = 1;
    var_2328 = 0;
    var_2336 = 38544;
    var_2344 = 8;
    var_2352 = 32;
    pri = fun_0308(var_2344, var_2336, var_2328, var_2320)
    var_2360 = 0;
    pri = fun_0378()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2368 = 3;
    var_2376 = 1;
    var_2384 = 32;
    pri = fun_2E88(var_2376, var_2368, var_2360, var_2352)
    var_2392 = 0;
    var_2400 = 8802641224559852288;
    var_2408 = 16;
    pri = fun_BD90(var_2400, var_2392)
    var_2416 = 1;
    var_2424 = 5022837494877359952;
    var_2432 = 16;
    pri = fun_BD90(var_2424, var_2416)
    var_2440 = 0;
    pri = SetPlayerUniform(var_2440)
    var_2448 = 0;
    var_2456 = 0;
    var_2464 = 0;
    var_2472 = 0;
    var_2480 = 0;
    var_2488 = 1990;
    pri = float(var_2488)
    var_2496 = pri;
    var_2504 = 2430;
    pri = float(var_2504)
    var_2512 = pri;
    OP_PUSH2_C 5283455131070743918, 3971602330360908115
    var_2520 = 72;
    pri = fun_04F8(var_2512, var_2504, var_2496, var_2488, var_2480, var_2472, var_2464, var_2456, var_2448)
    var_2528 = 1;
    var_2536 = 8541340050249644631;
    var_2544 = 16;
    pri = fun_0A28(var_2536, var_2528)
    var_2552 = 1;
    var_2560 = 1;
    OP_PUSH4_C 4640537203540230144, 4658155777863712768, 4657348736328925184, 8541340050249644631
    var_2568 = 48;
    pri = fun_0990(var_2560, var_2552, var_2544, var_2536, var_2528, var_2520)
    var_2576 = 1;
    var_2584 = 180;
    pri = float(var_2584)
    var_2592 = pri;
    var_2600 = 8802641224559852288;
    var_2608 = 24;
    pri = fun_09E8(var_2600, var_2592, var_2584)
    var_2616 = 15;
    var_2624 = 8;
    pri = fun_0060(var_2616)
    var_2632 = 38560;
    pri = SoundPostEvent(var_2632)
    var_2640 = 38832;
    var_2648 = 8;
    var_2656 = 16;
    pri = fun_02A8(var_2648, var_2640)
    var_2664 = 0;
    pri = fun_0378()
    var_2672 = 0;
    var_2680 = 3;
    var_2688 = 0;
    var_2696 = 100;
    var_2704 = -1;
    OP_PUSH2_C 502861626413427080, -853404815738154776
    var_2712 = 56;
    pri = fun_2320(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656)
    var_2720 = 1;
    var_2728 = 8;
    pri = fun_25E0(var_2720)
    var_2736 = 0;
    pri = fun_26A0()
    var_2744 = 6;
    var_2752 = 4;
    var_2760 = 2;
    var_2768 = 1;
    var_2776 = 9;
    var_2784 = 1;
    var_2792 = 337;
    var_2800 = -853404815738154776;
    var_2808 = 64;
    pri = fun_9C40(var_2800, var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744)
    var_2816 = 0;
    var_2824 = 3;
    var_2832 = 0;
    var_2840 = 100;
    var_2848 = -1;
    OP_PUSH2_C 502863825436683502, -853404815738154776
    var_2856 = 56;
    pri = fun_2320(var_2848, var_2840, var_2832, var_2824, var_2816, var_2808, var_2800)
    var_2864 = 1;
    var_2872 = 8;
    pri = fun_25E0(var_2864)
    var_2880 = 0;
    pri = fun_26A0()
    var_2888 = 8903955815623325121;
    var_2896 = 38848;
    var_2904 = -853404815738154776;
    var_2912 = 24;
    pri = fun_9E60(var_2904, var_2896, var_2888)
    var_2920 = 38920;
    var_2928 = 8;
    pri = fun_2788(var_2920)
    var_2936 = 0;
    pri = fun_27C0()
    var_2944 = 1;
    var_2952 = 0;
    var_2960 = 4641240890982006784;
    var_2968 = 0;
    var_2976 = 0;
    OP_PUSH4_C 4656880344375492608, 4657348736328925184, 4607182418800017408, 8541340050249644631
    var_2984 = 72;
    pri = fun_0AD8(var_2976, var_2968, var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2992 = 30;
    var_3000 = 8;
    pri = fun_0060(var_2992)
    var_3008 = 0;
    var_3016 = 0;
    var_3024 = 0;
    var_3032 = 0;
    OP_PUSH2_C 8541340050249644631, 8802641224559852288
    var_3040 = 48;
    pri = fun_0BF8(var_3032, var_3024, var_3016, var_3008, var_3000, var_2992)
    var_3048 = 15;
    var_3056 = 8;
    pri = fun_0060(var_3048)
    var_3064 = 8802641224559852288;
    var_3072 = 8;
    pri = fun_0C50(var_3064)
    var_3080 = 1;
    var_3088 = 1;
    var_3096 = -1;
    OP_PUSH2_C 8541340050249644631, 8802641224559852288
    var_3104 = 40;
    pri = fun_13E8(var_3096, var_3088, var_3080, var_3072, var_3064)
    var_3112 = 30;
    var_3120 = 8;
    pri = fun_0060(var_3112)
    var_3128 = 1;
    var_3136 = 1;
    var_3144 = 55;
    var_3152 = 4656880344375492608;
    var_3160 = 135;
    pri = float(var_3160)
    var_3168 = pri;
    OP_PUSH2_C 4657348736328925184, 8802641224559852288
    var_3176 = 56;
    pri = fun_1380(var_3168, var_3160, var_3152, var_3144, var_3136, var_3128, var_3120)
    var_3184 = 8541340050249644631;
    var_3192 = 8;
    pri = fun_0C50(var_3184)
    var_3200 = 0;
    var_3208 = 0;
    var_3216 = 0;
    var_3224 = 0;
    OP_PUSH2_C 8802641224559852288, 8541340050249644631
    var_3232 = 48;
    pri = fun_0BF8(var_3224, var_3216, var_3208, var_3200, var_3192, var_3184)
    var_3240 = 5;
    var_3248 = 8;
    pri = fun_0060(var_3240)
    var_3256 = 1;
    var_3264 = 1;
    var_3272 = -1;
    var_3280 = 4656880344375492608;
    var_3288 = 135;
    pri = float(var_3288)
    var_3296 = pri;
    OP_PUSH2_C 4657348736328925184, 8802641224559852288
    var_3304 = 56;
    pri = fun_1380(var_3296, var_3288, var_3280, var_3272, var_3264, var_3256, var_3248)
    var_3312 = 0;
    var_3320 = 0;
    var_3328 = 0;
    var_3336 = 0;
    OP_PUSH2_C 8541340050249644631, 8802641224559852288
    var_3344 = 48;
    pri = fun_0BF8(var_3336, var_3328, var_3320, var_3312, var_3304, var_3296)
    var_3352 = 8541340050249644631;
    var_3360 = 8;
    pri = fun_0C50(var_3352)
    var_3368 = 0;
    var_3376 = 3;
    var_3384 = 0;
    var_3392 = 100;
    var_3400 = -1;
    OP_PUSH2_C -2480686303244160536, 8541340050249644631
    var_3408 = 56;
    pri = fun_23D0(var_3400, var_3392, var_3384, var_3376, var_3368, var_3360, var_3352)
    var_3416 = 1;
    var_3424 = 8;
    pri = fun_25E0(var_3416)
    var_3432 = 8802641224559852288;
    var_3440 = 8;
    pri = fun_0C50(var_3432)
    var_3448 = 1;
    var_3456 = 1;
    var_3464 = -1;
    var_3472 = -1;
    var_3480 = 0;
    var_3488 = 1;
    var_3496 = 8541340050249644631;
    var_3504 = 56;
    pri = fun_4BC0(var_3496, var_3488, var_3480, var_3472, var_3464, var_3456, var_3448)
    var_3512 = 0;
    var_3520 = 3;
    var_3528 = 0;
    var_3536 = 100;
    var_3544 = -1;
    OP_PUSH2_C -2480683004709275903, 8541340050249644631
    var_3552 = 56;
    pri = fun_23D0(var_3544, var_3536, var_3528, var_3520, var_3512, var_3504, var_3496)
    var_3560 = 1;
    var_3568 = 8;
    pri = fun_25E0(var_3560)
    var_3576 = 0;
    pri = fun_26A0()
    var_3584 = 1;
    var_3592 = 3;
    var_3600 = 0;
    var_3608 = 1;
    var_3616 = 8541340050249644631;
    var_3624 = 40;
    pri = fun_6EF8(var_3616, var_3608, var_3600, var_3592, var_3584)
    var_3632 = 1;
    var_3640 = 0;
    var_3648 = 35184;
    var_3656 = 8;
    var_3664 = 32;
    pri = fun_0308(var_3656, var_3648, var_3640, var_3632)
    var_3672 = 0;
    pri = fun_0378()
    var_3680 = 8541340050249644631;
    var_3688 = 8;
    pri = fun_0E28(var_3680)
    var_3696 = -1;
    var_3704 = 8802641224559852288;
    var_3712 = 16;
    pri = fun_14A0(var_3704, var_3696)
    var_3720 = 0;
    pri = fun_2860()
    pri = 0;
    return pri;
}
// fun_FE98
fun_FE98() {
    pri = 0;
    return pri;
}
// fun_FEB0
fun_FEB0() {
    var_8 = 5022837494877359952;
    var_16 = 8;
    pri = fun_08E8(var_8)
    var_24 = 620;
    var_32 = 8;
    pri = fun_BC20(var_24)
    var_40 = 20;
    var_48 = 1053005715797944393;
    pri = WorkSet(var_48, var_40)
    var_56 = 10;
    var_64 = 8021964092511761817;
    pri = WorkSet(var_64, var_56)
    var_72 = 7983844220748856187;
    pri = VanishFlagSet(var_72)
    var_80 = -7459836055509795977;
    pri = VanishFlagSet(var_80)
    var_88 = 4090159915399653913;
    pri = VanishFlagSet(var_88)
    var_96 = -6104390763371469974;
    pri = VanishFlagSet(var_96)
    var_104 = 5858126159611641479;
    pri = VanishFlagReset(var_104)
    var_112 = 5858127259123269690;
    pri = VanishFlagReset(var_112)
    var_120 = 6824651908674154928;
    pri = VanishFlagReset(var_120)
    var_128 = 1508178191079341492;
    pri = VanishFlagReset(var_128)
    var_136 = 8541340050249644631;
    pri = VanishFlagReset(var_136)
    var_144 = 2491457344527812609;
    var_152 = 8;
    pri = fun_AC30(var_144)
    var_160 = 1;
    var_168 = 337;
    pri = ItemAdd(var_168, var_160)
    var_176 = 39136;
    var_184 = 8;
    pri = fun_2FA8(var_176)
    var_192 = -6557272665422505968;
    pri = FlagSet(var_192)
    var_200 = -7105285698882344957;
    pri = FlagSet(var_200)
    pri = 0;
    return pri;
}
// fun_10198
fun_10198() {
    var_8 = 0;
    pri = fun_0798()
    var_16 = 1;
    var_24 = 0;
    pri = float(var_24)
    var_32 = pri;
    var_40 = 8802641224559852288;
    var_48 = 24;
    pri = fun_09E8(var_40, var_32, var_24)
    var_56 = 1;
    var_64 = 1;
    var_72 = 0;
    OP_PUSH3_C 4656282210049982464, 4657150824235925504, 8541340050249644631
    var_80 = 48;
    pri = fun_0990(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 15;
    var_96 = 8;
    pri = fun_0060(var_88)
    var_104 = 35672;
    var_112 = 8;
    var_120 = 16;
    pri = fun_02A8(var_112, var_104)
    var_128 = 0;
    pri = fun_0378()
    var_136 = 0;
    var_144 = 2;
    var_152 = 16;
    pri = fun_B280(var_144, var_136)
    pri = 0;
    return pri;
}
// fun_102F8
fun_102F8() {
    var_8 = 590;
    var_16 = 8;
    pri = fun_BC20(var_8)
    var_24 = 0;
    var_32 = 7474429120239519668;
    pri = WorkSet(var_32, var_24)
    pri = 0;
    return pri;
}
// fun_10360
fun_10360() {
    var_8 = 180;
    var_16 = -8914110537742719526;
    var_24 = 2000;
    var_32 = 2425;
    OP_PUSH2_C 5283455131070743918, 3971602330360908115
    var_40 = 5;
    var_48 = 56;
    pri = fun_BB80(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_103D8
fun_103D8() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_C080()
    var_16 = 0;
    pri = fun_C0D8()
    var_24 = 0;
    pri = fun_C140()
    var_32 = 0;
    pri = fun_C170()
    var_40 = 0;
    pri = fun_FE98()
    var_48 = 0;
    pri = fun_FEB0()
    var_56 = 0;
    pri = fun_10198()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_104C8
fun_104C8() {
    var_8 = 0;
    pri = fun_C0D8()
    var_16 = 0;
    pri = fun_FEB0()
    pri = 0;
    return pri;
}
// fun_10510
fun_10510() {
    var_8 = -1516644049416470180;
    var_16 = 8;
    pri = fun_B970(var_8)
    OP_JZER lab_10580
    var_24 = 0;
    pri = fun_102F8()
    var_32 = 0;
    pri = fun_10360()
// lab_10580
    pri = 0;
    return pri;
}
// fun_10590
fun_10590() {
    var_8 = 39208;
    var_16 = 8;
    pri = fun_2788(var_8)
    var_24 = 0;
    pri = fun_27C0()
    var_32 = 1;
    var_40 = 3;
    var_48 = 1;
    var_56 = 100;
    var_64 = -1;
    var_72 = 0;
    var_80 = 0;
    var_88 = 1;
    var_96 = 1;
    var_104 = -2480683004709275903;
    var_112 = 80;
    pri = fun_98C8(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_120 = 0;
    pri = fun_2860()
    pri = 0;
    return pri;
}
