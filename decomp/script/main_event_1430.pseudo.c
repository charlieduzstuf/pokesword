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
// fun_0C68
fun_0C68() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0CB8
fun_0CB8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_0CB8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = arg_2;
    var_96 = arg_0;
    var_104 = arg_1;
    var_112 = 48;
    pri = fun_0CB8(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_0DB8
fun_0DB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1970(var_8)
    OP_JZER lab_0E30
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_19A0(var_24)
    OP_JNZ lab_0E30
    pri = 0;
    return pri;
// lab_0E30
    OP_JUMP lab_0E40
// lab_0E40
    var_8 = arg_0;
    pri = CheckActionCommandRunningState_(var_8)
    OP_JNZ lab_0EA0
    var_16 = arg_0;
    pri = DeletePlayingActionCommand_(var_16)
    pri = 0;
    return pri;
// lab_0EA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0E40
    pri = 0;
    return pri;
}
// fun_0EE0
fun_0EE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetAnimationStateTrigger_(var_16, var_8)
    return pri;
}
// fun_0F18
fun_0F18() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0F90
fun_0F90() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0FD8
    pri = 0;
    return pri;
// lab_0FD8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1018
// lab_1018
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1970(var_8)
    OP_JNZ lab_10A0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_1090
    pri = 0;
    return pri;
// lab_10A0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_10E8
    pri = 0;
    return pri;
// lab_10E8
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1148
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_12B8(var_8)
    pri = 0;
    return pri;
// lab_1148
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1018
    pri = 0;
    return pri;
// lab_1090
    OP_JUMP lab_10E8
}
// fun_1190
fun_1190() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_11D8
// lab_11D8
    var_8 = arg_1;
    var_16 = arg_0;
    pri = IsAnimationStateName_(var_16, var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1230
    pri = 0;
    return pri;
// lab_1230
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1270
    pri = 0;
    return pri;
// lab_1270
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_11D8
    pri = 0;
    return pri;
}
// fun_12B8
fun_12B8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_12F0
fun_12F0() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1340
    pri = 0;
    return pri;
// lab_1340
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1970(var_8)
    OP_JZER lab_1470
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_1398
    OP_ZERO_P_S 64
// lab_1470
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_14A8
    OP_CONST_S 64, 1
// lab_14A8
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_14E0
    OP_CONST_S 72, 1
// lab_14E0
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
// lab_1398
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13C0
    OP_ZERO_P_S 72
// lab_13C0
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
    OP_JUMP lab_1580
// lab_1580
    pri = 0;
    return pri;
}
// fun_1590
fun_1590() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15D0
fun_15D0() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1610
fun_1610() {
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
// fun_1678
fun_1678() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_16D0
fun_16D0() {
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
// fun_1730
fun_1730() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1770
fun_1770() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = StartFieldObjectEyeLookAtFieldObject_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_17C0
fun_17C0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectEye_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1800
fun_1800() {
    var_8 = arg_0;
    pri = ResetFieldObjectEye_(var_8)
    pri = 0;
    return pri;
}
// fun_1838
fun_1838() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectMouth_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1878
fun_1878() {
    var_8 = arg_0;
    pri = ResetFieldObjectMouth_(var_8)
    pri = 0;
    return pri;
}
// fun_18B0
fun_18B0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_17C0(var_16, var_8)
    var_32 = arg_2;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1838(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_1918
fun_1918() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1800(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1878(var_24)
    pri = 0;
    return pri;
}
// fun_1970
fun_1970() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_19A0
fun_19A0() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_19D0
fun_19D0() {
    OP_JUMP lab_19E8
// lab_19E8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1A78
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1A68
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F90(var_8)
    pri = 0;
    return pri;
// lab_1A78
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1B08
    pri = IsPlayerRideBicycle()
    OP_JZER lab_1AF8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F90(var_8)
    pri = 0;
    return pri;
// lab_1B08
    pri = 0;
    return pri;
// lab_1AF8
    OP_JUMP lab_1B18
// lab_1B18
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_19E8
    pri = 0;
    return pri;
// lab_1A68
    OP_JUMP lab_1B18
}
// fun_1B58
fun_1B58() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F90(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_19D0(var_40)
    pri = 0;
    return pri;
}
// fun_1BE0
fun_1BE0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1C18
fun_1C18() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1C40
fun_1C40() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    var_32 = arg_0;
    pri = AttachCharaModel_(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1C90
fun_1C90() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DetachCharaModel_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1CD0
fun_1CD0() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1D08
fun_1D08() {
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
// switch_2320
        case default:
        {
// switch_2320_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_2368
// lab_2368
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
            OP_JNZ lab_2410
            var_88 = 0;
            pri = fun_27A8()
// lab_2410
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2320_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1F08
                case default:
                {
// switch_1F08_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F80
// lab_1F80
                    OP_JUMP lab_2368
                }
                case 0x0:
                {
// switch_1F08_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1F80
                }
                case 0x1:
                {
// switch_1F08_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1F80
                }
                case 0x2:
                {
// switch_1F08_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1F80
                }
                case 0x3:
                {
// switch_1F08_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1F80
                }
                case 0x4:
                {
// switch_1F08_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1F80
                }
                case 0x5:
                {
// switch_1F08_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1F80
                }
            }
        }
        case 0x65:
        {
// switch_2320_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_20C0
                case default:
                {
// switch_20C0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2138
// lab_2138
                    OP_JUMP lab_2368
                }
                case 0x0:
                {
// switch_20C0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_2138
                }
                case 0x1:
                {
// switch_20C0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_2138
                }
                case 0x2:
                {
// switch_20C0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_2138
                }
                case 0x3:
                {
// switch_20C0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_2138
                }
                case 0x4:
                {
// switch_20C0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_2138
                }
                case 0x5:
                {
// switch_20C0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_2138
                }
            }
        }
        case 0x66:
        {
// switch_2320_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_2278
                case default:
                {
// switch_2278_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22F0
// lab_22F0
                    OP_JUMP lab_2368
                }
                case 0x0:
                {
// switch_2278_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_22F0
                }
                case 0x1:
                {
// switch_2278_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_22F0
                }
                case 0x2:
                {
// switch_2278_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_22F0
                }
                case 0x3:
                {
// switch_2278_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_22F0
                }
                case 0x4:
                {
// switch_2278_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_22F0
                }
                case 0x5:
                {
// switch_2278_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_22F0
                }
            }
        }
    }
}
// fun_2428
fun_2428() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1D08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2490
fun_2490() {
    pri = 344;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 424;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0F58(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_2538
    pri = 1;
    return pri;
// lab_2538
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_2580
fun_2580() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_25D0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2490(var_8)
    arg_2 = pri;
// lab_25D0
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1D08(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2630
fun_2630() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2680
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_2490(var_8)
    arg_2 = pri;
// lab_2680
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
    pri = fun_2580(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_26F8
fun_26F8() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2428(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2748
fun_2748() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_26F8(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_27A8
fun_27A8() {
    OP_JUMP lab_27C0
// lab_27C0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_2800
    pri = 0;
    return pri;
// lab_2800
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_27C0
    pri = 0;
    return pri;
}
// fun_2840
fun_2840() {
    var_8 = 0;
    pri = fun_27A8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_28F0
    var_32 = 472;
    pri = SoundPostEvent(var_32)
// lab_28F0
    pri = 0;
    return pri;
}
// fun_2900
fun_2900() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_2930
fun_2930() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_29A8()
    return pri;
}
// fun_29A8
fun_29A8() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_29E8
fun_29E8() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_2A20
fun_2A20() {
    OP_JUMP lab_2A38
// lab_2A38
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2A80
    OP_JUMP lab_2AB0
    OP_JUMP lab_2AA0
// lab_2A80
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2AB0
    pri = 0;
    return pri;
// lab_2AA0
    OP_JUMP lab_2A38
}
// fun_2AC0
fun_2AC0() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2AF0
fun_2AF0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B40
fun_2B40() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B90
fun_2B90() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2BE0
fun_2BE0() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C30
fun_2C30() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2C80
fun_2C80() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 24;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2CD0
fun_2CD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = PlayCutin_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2D10
fun_2D10() {
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
// fun_2D70
fun_2D70() {
    OP_JUMP lab_2D88
// lab_2D88
    pri = IsLoadedTrainerBattleSeamless_()
    OP_JZER lab_2DC0
    pri = 0;
    return pri;
// lab_2DC0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2D88
    pri = 0;
    return pri;
}
// fun_2E00
fun_2E00() {
    pri = CallTrainerBattleSeamless_()
    pri = 0;
    return pri;
}
// fun_2E30
fun_2E30() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2EA8
fun_2EA8() {
    var_8 = 0;
    pri = fun_2E30()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2F28
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2F28
    pri = 1;
    return pri;
// lab_2F28
    var_8 = 0;
    pri = fun_2E30()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2F68
    pri = 1;
    return pri;
// lab_2F68
    var_8 = 0;
    pri = fun_2E30()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2F98
fun_2F98() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2FE8
fun_2FE8() {
    OP_JUMP lab_3000
// lab_3000
    pri = EvCameraMoveWait_()
    OP_JZER lab_3038
    pri = 0;
    return pri;
// lab_3038
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_3000
    pri = 0;
    return pri;
}
// fun_3078
fun_3078() {
    var_8 = 3;
    var_16 = 1;
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_30E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_31B8()
    pri = 0;
    return pri;
}
// fun_30E0
fun_30E0() {
    var_8 = 0;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartDof_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_3138
fun_3138() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = 32;
    pri = fun_30E0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_31B8()
    pri = EndDof_()
    pri = 0;
    return pri;
}
// fun_31B8
fun_31B8() {
    OP_JUMP lab_31D0
// lab_31D0
    pri = IsEasingRunningDof_()
    OP_JZER lab_3228
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_3238
// lab_3228
    pri = 0;
    return pri;
// lab_3238
    OP_JUMP lab_31D0
    pri = 0;
    return pri;
}
// fun_3258
fun_3258() {
    var_8 = arg_0;
    pri = PlayerAddDressupItemByPreset(var_8)
    pri = 0;
    return pri;
}
// fun_3290
fun_3290() {
    pri = arg_6;
    OP_JNZ lab_32C8
    var_8 = 0;
    pri = fun_1590()
// lab_32C8
    pri = arg_1;
    switch (pri) {
// switch_4830
        case default:
        {
// switch_4830_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4B80
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4B80
            pri = 1;
            OP_JUMP lab_4B88
// lab_4B80
            pri = 0;
// lab_4B88
            OP_JZER lab_4CE0
            var_16 = 8320;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F58(var_24, var_16)
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
            OP_JUMP lab_4D40
// lab_4CE0
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
// lab_4D40
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4DA0
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4E00
// lab_4DA0
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4E00
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4E00
            pri = arg_2;
            OP_JZER lab_4E40
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4E40
            var_8 = 0;
            pri = fun_15D0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4830_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x1:
        {
// switch_4830_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x2:
        {
// switch_4830_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x3:
        {
// switch_4830_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x4:
        {
// switch_4830_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x5:
        {
// switch_4830_case_0x5
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0x6:
        {
// switch_4830_case_0x6
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0x7:
        {
// switch_4830_case_0x7
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0x8:
        {
// switch_4830_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x9:
        {
// switch_4830_case_0x9
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0xa:
        {
// switch_4830_case_0xa
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0xb:
        {
// switch_4830_case_0xb
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0xc:
        {
// switch_4830_case_0xc
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0xd:
        {
// switch_4830_case_0xd
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0xe:
        {
// switch_4830_case_0xe
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0xf:
        {
// switch_4830_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x10:
        {
// switch_4830_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x11:
        {
// switch_4830_case_0x11
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0x12:
        {
// switch_4830_case_0x12
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0x13:
        {
// switch_4830_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x14:
        {
// switch_4830_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x15:
        {
// switch_4830_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x16:
        {
// switch_4830_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x17:
        {
// switch_4830_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x18:
        {
// switch_4830_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x19:
        {
// switch_4830_case_0x19
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4830_case_default
        }
        case 0x1a:
        {
// switch_4830_case_0x1a
            var_8 = 1;
            var_16 = 5880;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            var_40 = 6016;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EE0(var_48, var_40)
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
            pri = fun_12F0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4830_case_default
        }
        case 0x1b:
        {
// switch_4830_case_0x1b
            var_8 = 3;
            var_16 = 6104;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            var_40 = 6240;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EE0(var_48, var_40)
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
            pri = fun_12F0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4830_case_default
        }
        case 0x1c:
        {
// switch_4830_case_0x1c
            var_8 = 2;
            var_16 = 6328;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            var_40 = 6464;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EE0(var_48, var_40)
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
            pri = fun_12F0(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4830_case_default
        }
        case 0x1d:
        {
// switch_4830_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6552;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x1e:
        {
// switch_4830_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6688;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x1f:
        {
// switch_4830_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6824;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x20:
        {
// switch_4830_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 6960;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x21:
        {
// switch_4830_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7080;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x22:
        {
// switch_4830_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7200;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x23:
        {
// switch_4830_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7336;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x24:
        {
// switch_4830_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7472;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x25:
        {
// switch_4830_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7608;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x26:
        {
// switch_4830_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7744;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x27:
        {
// switch_4830_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 7888;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x28:
        {
// switch_4830_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8032;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
        case 0x29:
        {
// switch_4830_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 8176;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4830_case_default
        }
    }
}
// fun_4E70
fun_4E70() {
    pri = arg_5;
    OP_JNZ lab_4EA8
    var_8 = 0;
    pri = fun_1590()
// lab_4EA8
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4EF8
    OP_CONST_S -8, -1
// lab_4EF8
    pri = arg_1;
    switch (pri) {
// switch_69B0
        case default:
        {
// switch_69B0_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6E58
            var_520 = 28184;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0F58(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6E58
            pri = 1;
            OP_JUMP lab_6E60
// lab_6E58
            pri = 0;
// lab_6E60
            OP_JZER lab_6EB0
            var_8 = 64;
            var_16 = 28280;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_7108
// lab_6EB0
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6F18
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6F18
            pri = 1;
            OP_JUMP lab_6F20
// lab_6F18
            pri = 0;
// lab_6F20
            OP_JZER lab_70A8
            var_16 = 28456;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F58(var_24, var_16)
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
            OP_JUMP lab_7108
// lab_70A8
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
// lab_7108
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_7178
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_7178
            var_8 = 0;
            pri = fun_15D0()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_69B0_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1:
        {
// switch_69B0_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2:
        {
// switch_69B0_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x3:
        {
// switch_69B0_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x4:
        {
// switch_69B0_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x5:
        {
// switch_69B0_case_0x5
            var_8 = 2;
            var_16 = 18440;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_12B8(var_40)
            OP_JUMP switch_69B0_case_default
        }
        case 0x6:
        {
// switch_69B0_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x7:
        {
// switch_69B0_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x8:
        {
// switch_69B0_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x9:
        {
// switch_69B0_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0xa:
        {
// switch_69B0_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0xb:
        {
// switch_69B0_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0xc:
        {
// switch_69B0_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0xd:
        {
// switch_69B0_case_0xd
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0xe:
        {
// switch_69B0_case_0xe
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0xf:
        {
// switch_69B0_case_0xf
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x10:
        {
// switch_69B0_case_0x10
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x11:
        {
// switch_69B0_case_0x11
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x12:
        {
// switch_69B0_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x13:
        {
// switch_69B0_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x14:
        {
// switch_69B0_case_0x14
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x15:
        {
// switch_69B0_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x16:
        {
// switch_69B0_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x17:
        {
// switch_69B0_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x18:
        {
// switch_69B0_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x19:
        {
// switch_69B0_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1a:
        {
// switch_69B0_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1b:
        {
// switch_69B0_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1c:
        {
// switch_69B0_case_0x1c
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1d:
        {
// switch_69B0_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1e:
        {
// switch_69B0_case_0x1e
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x1f:
        {
// switch_69B0_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x20:
        {
// switch_69B0_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x21:
        {
// switch_69B0_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x22:
        {
// switch_69B0_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x23:
        {
// switch_69B0_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x24:
        {
// switch_69B0_case_0x24
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x25:
        {
// switch_69B0_case_0x25
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x26:
        {
// switch_69B0_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x27:
        {
// switch_69B0_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x28:
        {
// switch_69B0_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x29:
        {
// switch_69B0_case_0x29
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2a:
        {
// switch_69B0_case_0x2a
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2b:
        {
// switch_69B0_case_0x2b
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2c:
        {
// switch_69B0_case_0x2c
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2d:
        {
// switch_69B0_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2e:
        {
// switch_69B0_case_0x2e
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x2f:
        {
// switch_69B0_case_0x2f
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x30:
        {
// switch_69B0_case_0x30
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x31:
        {
// switch_69B0_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x32:
        {
// switch_69B0_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x33:
        {
// switch_69B0_case_0x33
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x34:
        {
// switch_69B0_case_0x34
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x35:
        {
// switch_69B0_case_0x35
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x36:
        {
// switch_69B0_case_0x36
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x37:
        {
// switch_69B0_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x38:
        {
// switch_69B0_case_0x38
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
            pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_69B0_case_default
        }
        case 0x39:
        {
// switch_69B0_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x3a:
        {
// switch_69B0_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x3b:
        {
// switch_69B0_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x3c:
        {
// switch_69B0_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 27760;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x3d:
        {
// switch_69B0_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 27936;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
        case 0x3e:
        {
// switch_69B0_case_0x3e
            var_8 = 4;
            var_16 = 28080;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            OP_JUMP switch_69B0_case_default
        }
    }
}
// fun_71A8
fun_71A8() {
    pri = arg_4;
    OP_JNZ lab_71E0
    var_8 = 0;
    pri = fun_1590()
// lab_71E0
    pri = arg_1;
    switch (pri) {
// switch_85B8
        case default:
        {
// switch_85B8_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 29152;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1970(var_264)
            OP_JZER lab_8B80
            pri = arg_3;
            switch (pri) {
// switch_8B28
                case default:
                {
// switch_8B28_case_default
                    OP_JUMP lab_8E38
// lab_8E38
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8EA8
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8EA8
                    var_8 = 0;
                    pri = fun_15D0()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8B28_case_0x1
                    var_8 = 32;
                    var_16 = 29304;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8B28_case_default
                }
                case 0x2:
                {
// switch_8B28_case_0x2
                    var_8 = 32;
                    var_16 = 29408;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8B28_case_default
                }
                case 0x3:
                {
// switch_8B28_case_0x3
                    var_8 = 32;
                    var_16 = 29208;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8B28_case_default
                }
            }
// lab_8B80
            pri = arg_1;
            OP_JZER lab_8BD0
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_8BD0
            pri = 0;
            OP_JUMP lab_8BD8
// lab_8BD0
            pri = 1;
// lab_8BD8
            OP_JZER lab_8C40
            var_8 = 29504;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0F58(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8C40
            pri = 1;
            OP_JUMP lab_8C48
// lab_8C40
            pri = 0;
// lab_8C48
            OP_JZER lab_8C98
            var_8 = 32;
            var_16 = 29600;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8E38
// lab_8C98
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_8D00
            var_8 = 32;
            var_16 = 29760;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8E38
// lab_8D00
            var_16 = 29880;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F58(var_24, var_16)
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
// switch_85B8_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1:
        {
// switch_85B8_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2:
        {
// switch_85B8_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x3:
        {
// switch_85B8_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x4:
        {
// switch_85B8_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x5:
        {
// switch_85B8_case_0x5
            var_8 = 1;
            var_16 = 28632;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_12B8(var_40)
            OP_JUMP switch_85B8_case_default
        }
        case 0x6:
        {
// switch_85B8_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x7:
        {
// switch_85B8_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x8:
        {
// switch_85B8_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x9:
        {
// switch_85B8_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0xa:
        {
// switch_85B8_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0xb:
        {
// switch_85B8_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0xc:
        {
// switch_85B8_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0xd:
        {
// switch_85B8_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0xe:
        {
// switch_85B8_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0xf:
        {
// switch_85B8_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x10:
        {
// switch_85B8_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x11:
        {
// switch_85B8_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x12:
        {
// switch_85B8_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x13:
        {
// switch_85B8_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x14:
        {
// switch_85B8_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x15:
        {
// switch_85B8_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x16:
        {
// switch_85B8_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x17:
        {
// switch_85B8_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x18:
        {
// switch_85B8_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x19:
        {
// switch_85B8_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1a:
        {
// switch_85B8_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1b:
        {
// switch_85B8_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1c:
        {
// switch_85B8_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1d:
        {
// switch_85B8_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1e:
        {
// switch_85B8_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x1f:
        {
// switch_85B8_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x20:
        {
// switch_85B8_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x21:
        {
// switch_85B8_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x22:
        {
// switch_85B8_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x23:
        {
// switch_85B8_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x24:
        {
// switch_85B8_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x25:
        {
// switch_85B8_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x26:
        {
// switch_85B8_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x27:
        {
// switch_85B8_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x28:
        {
// switch_85B8_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x29:
        {
// switch_85B8_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2a:
        {
// switch_85B8_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2b:
        {
// switch_85B8_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2c:
        {
// switch_85B8_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2d:
        {
// switch_85B8_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2e:
        {
// switch_85B8_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x2f:
        {
// switch_85B8_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x30:
        {
// switch_85B8_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x31:
        {
// switch_85B8_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x32:
        {
// switch_85B8_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x33:
        {
// switch_85B8_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x34:
        {
// switch_85B8_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x35:
        {
// switch_85B8_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x36:
        {
// switch_85B8_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x37:
        {
// switch_85B8_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x38:
        {
// switch_85B8_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x39:
        {
// switch_85B8_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x3a:
        {
// switch_85B8_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x3b:
        {
// switch_85B8_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x3c:
        {
// switch_85B8_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28728;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x3d:
        {
// switch_85B8_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 28904;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
        case 0x3e:
        {
// switch_85B8_case_0x3e
            var_8 = 3;
            var_16 = 29048;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F18(var_24, var_16, var_8)
            OP_JUMP switch_85B8_case_default
        }
    }
}
// fun_8ED8
fun_8ED8() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_95D0(var_16, var_8)
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
    OP_JZER lab_90D0
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_90D0
    pri = 0;
    return pri;
}
// fun_90E8
fun_90E8() {
    pri = arg_4;
    OP_JNZ lab_9120
    var_8 = 0;
    pri = fun_1590()
// lab_9120
    pri = arg_1;
    OP_JNZ lab_91C8
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
    pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_91C8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9228
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9228
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_92D8
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
    pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_92D8
    pri = arg_1;
    OP_EQ_P_C_PRI 3
    OP_JZER lab_9388
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
    pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9388
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_9438
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
    pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_9438
    pri = arg_1;
    OP_EQ_P_C_PRI 5
    OP_JZER lab_94E8
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
    pri = fun_12F0(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
// lab_94E8
    pri = arg_1;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9548
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_9548
    pri = arg_1;
    OP_EQ_P_C_PRI 7
    OP_JZER lab_95A8
    var_8 = 0;
    var_16 = -1;
    var_24 = 2;
    var_32 = 4;
    var_40 = arg_0;
    pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
// lab_95A8
    var_8 = 0;
    pri = fun_15D0()
    pri = 0;
    return pri;
}
// fun_95D0
fun_95D0() {
    var_8 = arg_1;
    var_16 = 32344;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F18(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9618
fun_9618() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_96B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0F90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_3290(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_96B0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_9808
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9770
    var_24 = 32448;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9770
    pri = 1;
    OP_JUMP lab_9778
// lab_9808
    pri = 0;
    return pri;
// lab_9770
    pri = 0;
// lab_9778
    OP_JZER lab_9808
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0F90(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_3290(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9818
fun_9818() {
    var_8 = arg_7;
    var_16 = arg_6;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9618(var_24, var_16, var_8)
    var_40 = arg_5;
    var_48 = arg_4;
    var_56 = arg_3;
    var_64 = arg_2;
    var_72 = arg_1;
    var_80 = 40;
    pri = fun_98A0(var_72, var_64, var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_98A0
fun_98A0() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9C40(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9908
fun_9908() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9978
    OP_CONST_S -8, 1
// lab_9978
    pri = arg_0;
    OP_JNZ lab_9998
    OP_ZERO_P_S -8
// lab_9998
    pri = var_8;
    OP_JZER lab_9A20
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9A20
    pri = 0;
    return pri;
}
// fun_9A38
fun_9A38() {
    var_8 = 32552;
    var_16 = 8;
    pri = fun_29E8(var_8)
    var_24 = 0;
    pri = fun_2A20()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2AF0(var_32)
    var_48 = 1;
    var_56 = arg_2;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2C30(var_64, var_56, var_48)
    var_80 = 0;
    pri = fun_2AC0()
    var_88 = 32784;
    var_96 = 8;
    pri = fun_29E8(var_88)
    var_104 = 0;
    pri = fun_2A20()
    var_112 = 6;
    var_120 = 4;
    var_128 = arg_0;
    var_136 = 24;
    pri = fun_9618(var_128, var_120, var_112)
    var_144 = 32944;
    pri = SoundPostEvent(var_144)
    var_152 = 3;
    var_160 = 0;
    var_168 = -5174137429720893594;
    var_176 = 24;
    pri = fun_2748(var_168, var_160, var_152)
    var_184 = 0;
    var_192 = 8;
    pri = fun_0658(var_184)
    var_200 = 1;
    var_208 = 8;
    pri = fun_2840(var_200)
    var_216 = 0;
    pri = fun_2900()
    var_224 = 0;
    pri = fun_2AC0()
    var_232 = arg_1;
    var_240 = 8;
    pri = fun_3258(var_232)
    pri = 0;
    return pri;
}
// fun_9C40
fun_9C40() {
    var_8 = 33128;
    var_16 = 8;
    pri = fun_29E8(var_8)
    var_24 = 0;
    pri = fun_2A20()
    pri = arg_3;
    OP_JNZ lab_9D60
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9D28
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9DD0(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9D50
// lab_9D60
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9F70(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9D28
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9E98(var_16, var_8)
// lab_9D50
    OP_JUMP lab_9DA8
// lab_9DA8
    var_8 = 0;
    pri = fun_2AC0()
    pri = 0;
    return pri;
}
// fun_9DD0
fun_9DD0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_9F70(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9E80
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9E80
    pri = 0;
    return pri;
}
// fun_9E98
fun_9E98() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_2B40(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_2748(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_2840(var_72)
    var_88 = 0;
    pri = fun_2900()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2AF0(var_96)
    pri = 0;
    return pri;
}
// fun_9F70
fun_9F70() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_9FB8
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A278(var_8)
// lab_9FB8
    pri = arg_4;
    OP_JNZ lab_A020
    var_8 = 0;
    var_16 = 8;
    pri = fun_2AF0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2B40(var_40, var_32, var_24)
// lab_A020
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_A0C0
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2B90(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_2748(var_56, var_48, var_40)
    OP_JUMP lab_A1B0
// lab_A0C0
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_A178
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_A178
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_A178
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_2748(var_24, var_16, var_8)
// lab_A1B0
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A1F0
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
// lab_A1F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_2840(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A480(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9908(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A278
fun_A278() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A2D8
    var_16 = 33288;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A2D8
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A418
        case default:
        {
// switch_A418_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A408
            var_16 = 33832;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A408
            OP_JUMP lab_A450
// lab_A450
            var_8 = 34048;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A418_case_0x1
            var_8 = 33504;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A450
        }
        case 0x2:
        {
// switch_A418_case_0x2
            var_8 = 33632;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A450
        }
    }
}
// fun_A480
fun_A480() {
    pri = arg_2;
    OP_JNZ lab_A568
    var_8 = 0;
    var_16 = 8;
    pri = fun_2AF0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_2B40(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2BE0(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_A568
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_2748(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2840(var_40)
    var_56 = 0;
    pri = fun_2900()
    pri = 0;
    return pri;
}
// fun_A5E0
fun_A5E0() {
    pri = 34232;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_A668
// lab_A668
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A7E8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A7D8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_A728
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_A728
    pri = 0;
    OP_JUMP lab_A730
// lab_A7E8
    pri = 0;
    return pri;
// lab_A7D8
    OP_JUMP lab_A660
// lab_A660
    OP_INC_P_S -936
// lab_A728
    pri = 1;
// lab_A730
    OP_JZER lab_A7A8
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A7A0
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A7A8
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A7A0
}
// fun_A808
fun_A808() {
    var_8 = arg_0;
    pri = FlagSet(var_8)
    var_24 = 0;
    pri = fun_A890()
    var_8 = pri;
    var_32 = var_8;
    pri = SetMiscBadgeCount(var_32)
    pri = 0;
    return pri;
}
// fun_A890
fun_A890() {
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
// fun_AB40
fun_AB40() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_ABD8
    var_8 = 1;
    var_16 = 0;
    var_24 = 35152;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    pri = fun_1C18()
// lab_ABD8
    pri = arg_4;
    OP_JZER lab_AC10
    var_8 = 1;
    var_16 = 8;
    pri = fun_1CD0(var_8)
// lab_AC10
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_AC68
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_AC68
    pri = 0;
    OP_JUMP lab_AC70
// lab_AC68
    pri = 1;
// lab_AC70
    OP_JZER lab_AD38
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_AD38
    var_16 = 0;
    pri = fun_0408()
    OP_JZER lab_AD10
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1B58(var_32, var_24)
    OP_JUMP lab_AD38
// lab_AD38
    pri = arg_2;
    OP_JZER lab_AE10
    var_8 = 0;
    pri = fun_0408()
    OP_JZER lab_ADE0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1730(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0AA0(var_40)
    OP_JUMP lab_AE10
// lab_AE10
    pri = arg_3;
    OP_JZER lab_AE48
    var_8 = 1;
    var_16 = 8;
    pri = fun_1BE0(var_8)
// lab_AE48
    pri = 0;
    return pri;
// lab_ADE0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1730(var_16, var_8)
// lab_AD10
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B58(var_16, var_8)
}
// fun_AE58
fun_AE58() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_AFD8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_AEF0
    var_8 = 1;
    var_16 = 0;
    var_24 = 35152;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
// lab_AFD8
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_AEF0
    pri = arg_0;
    OP_JNZ lab_AF38
    var_8 = 35200;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_AF58
// lab_AF38
    var_8 = 35376;
    pri = SoundPostEvent(var_8)
// lab_AF58
    var_8 = 0;
    var_16 = 8;
    pri = fun_0658(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_AFD8
    var_24 = 35640;
    var_32 = 8;
    var_40 = 16;
    pri = fun_02A8(var_32, var_24)
    var_48 = 0;
    pri = fun_0378()
}
// fun_B018
fun_B018() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0430(var_8)
    var_24 = 0;
    pri = fun_0468()
    pri = arg_1;
    OP_JZER lab_B090
    var_32 = 35688;
    pri = SoundPostEvent(var_32)
// lab_B090
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
// fun_B110
fun_B110() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_B160
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_B018(var_16, var_8)
// lab_B160
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0DB8(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_B200
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_B200
    pri = 1;
    OP_JUMP lab_B208
// lab_B200
    pri = 0;
// lab_B208
    OP_JZER lab_B3A0
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_B2E8
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
    OP_JUMP lab_B390
// lab_B3A0
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
// lab_B2E8
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
// lab_B390
    OP_JUMP lab_B460
// lab_B460
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_B4D8
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_09E8(var_32, var_24, var_16)
// lab_B4D8
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
// fun_B548
fun_B548() {
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
    pri = fun_B110(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_B5E8
fun_B5E8() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_A5E0(var_24)
    pri = 0;
    return pri;
}
// fun_B650
fun_B650() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_B7D0(var_16)
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
    var_96 = 36512;
    var_104 = 36456;
    var_112 = var_8;
    var_120 = arg_0;
    var_128 = 32;
    pri = fun_1C40(var_120, var_112, var_104, var_96)
    pri = 0;
    return pri;
}
// fun_B758
fun_B758() {
    var_16 = arg_1;
    var_24 = 8;
    pri = fun_B7D0(var_16)
    var_8 = pri;
    var_32 = var_8;
    var_40 = arg_0;
    var_48 = 16;
    pri = fun_1C90(var_40, var_32)
    pri = 0;
    return pri;
}
// fun_B7D0
fun_B7D0() {
    pri = arg_0;
    OP_JNZ lab_B818
    var_8 = 36568;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_B818
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_B860
    var_8 = 36720;
    pri = GetZonePlacementHash(var_8)
    return pri;
// lab_B860
    var_8 = 0;
    pri = DebugAssert(var_8)
    var_16 = 36872;
    pri = GetFnvHash64(var_16)
    return pri;
}
// fun_B8A8
fun_B8A8() {
    pri = g_mode;
    switch (pri) {
// switch_B9B8
        case default:
        {
// switch_B9B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_BA20
// lab_BA20
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_B9B8_case_0x0
            var_8 = 0;
            pri = fun_BA30()
            OP_JUMP lab_BA20
        }
        case 0x26f0292ae5b71df8:
        {
// switch_B9B8_case_0x26f0292ae5b71df8
            var_8 = 0;
            pri = fun_10400()
            OP_JUMP lab_BA20
        }
        case 0x4fb6172783bb0504:
        {
// switch_B9B8_case_0x4fb6172783bb0504
            var_8 = 0;
            pri = fun_104F0()
            OP_JUMP lab_BA20
        }
        case 0x5deba0a3a1b25796:
        {
// switch_B9B8_case_0x5deba0a3a1b25796
            var_8 = 0;
            pri = fun_10538()
            OP_JUMP lab_BA20
        }
        case 0x7d1c91ed6c5a594f:
        {
// switch_B9B8_case_0x7d1c91ed6c5a594f
            var_8 = 0;
            pri = fun_10778()
            OP_JUMP lab_BA20
        }
    }
}
// fun_BA30
fun_BA30() {
    pri = 0;
    return pri;
}
// fun_BA48
fun_BA48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_AB40(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_BAA0
fun_BAA0() {
    pri = 0;
    return pri;
}
// fun_BAB8
fun_BAB8() {
    var_8 = 0;
    pri = fun_0798()
    pri = 0;
    return pri;
}
// fun_BAE8
fun_BAE8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 35152;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0308(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0378()
    var_56 = 0;
    var_64 = 8802641224559852288;
    var_72 = 16;
    pri = fun_B650(var_64, var_56)
    var_80 = 1;
    var_88 = 2023047967208508797;
    var_96 = 16;
    pri = fun_B650(var_88, var_80)
    pri = EvCameraStart()
    var_104 = 1;
    var_112 = 8802641224559852288;
    var_120 = 16;
    pri = fun_0A60(var_112, var_104)
    var_128 = 1;
    var_136 = 2023047967208508797;
    var_144 = 16;
    pri = fun_0A60(var_136, var_128)
    var_152 = 1;
    var_160 = 2839744139488196430;
    var_168 = 16;
    pri = fun_0A60(var_160, var_152)
    var_176 = 1;
    var_184 = 2839745238999824641;
    var_192 = 16;
    pri = fun_0A60(var_184, var_176)
    var_200 = 1;
    var_208 = 1;
    OP_PUSH4_C 4640537203540230144, 4672161356978323456, 4671185540408672256, 8802641224559852288
    var_216 = 48;
    pri = fun_0990(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 1;
    var_232 = 1;
    var_240 = 0;
    OP_PUSH3_C 4670292187211104256, 4671268003780755456, 2023047967208508797
    var_248 = 48;
    pri = fun_0990(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 2;
    var_264 = 2;
    var_272 = 8802641224559852288;
    var_280 = 24;
    pri = fun_18B0(var_272, var_264, var_256)
    var_288 = 1;
    var_296 = 1;
    var_304 = 2023047967208508797;
    var_312 = 24;
    pri = fun_18B0(var_304, var_296, var_288)
    OP_CONST_S -8, 274
    var_328 = 19;
    var_336 = 0;
    var_344 = var_8;
    var_352 = 144;
    var_360 = 32;
    pri = fun_2D10(var_352, var_344, var_336, var_328)
    var_368 = 0;
    var_376 = 60;
    pri = float(var_376)
    var_384 = pri;
    var_392 = 36880;
    pri = SoundSetRTPC(var_392, var_384, var_376)
    var_400 = 15;
    var_408 = 8;
    pri = fun_0060(var_400)
    var_416 = 1;
    var_424 = 0;
    var_432 = 0;
    var_440 = 75;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_448 = 48;
    pri = fun_0B50(var_440, var_432, var_424, var_416, var_408, var_400)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_456 = 16;
    pri = fun_3078(var_448, var_440)
    var_464 = 0;
    var_472 = 1;
    var_480 = 220;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 4609434218613702656;
    var_504 = 32;
    pri = fun_30E0(var_496, var_488, var_480, var_472)
    var_512 = 0;
    var_520 = 4630798169346041446;
    var_528 = 0;
    OP_PUSH5_C 4672367853508356997, 4639979531242622157, 4671255282431222088, 4672061842929672520, 4631038830451129057
    var_536 = 4671166637055011717;
    var_544 = 1;
    pri = EvCameraMove(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472)
    var_552 = 0;
    pri = fun_2FE8()
    var_560 = 0;
    var_568 = 4630798169346041446;
    var_576 = 3;
    OP_PUSH5_C 4672365451075450307, 4639979531242622157, 4671263564502558310, 4672059443245544899, 4631038830451129057
    var_584 = 4671174919126347940;
    var_592 = 90;
    pri = EvCameraMove(var_592, var_584, var_576, var_568, var_560, var_552, var_544, var_536, var_528, var_520)
    var_600 = 0;
    var_608 = 60;
    var_616 = 100;
    pri = float(var_616)
    var_624 = pri;
    var_632 = 4609434218613702656;
    var_640 = 32;
    pri = fun_30E0(var_632, var_624, var_616, var_608)
    var_648 = 35640;
    var_656 = 8;
    var_664 = 16;
    pri = fun_02A8(var_656, var_648)
    var_672 = 0;
    pri = fun_0378()
    var_680 = 8802641224559852288;
    var_688 = 8;
    pri = fun_0DB8(var_680)
    var_696 = 1;
    var_704 = 0;
    var_712 = 0;
    var_720 = 75;
    OP_PUSH2_C 4607182418800017408, 2023047967208508797
    var_728 = 48;
    pri = fun_0B50(var_720, var_712, var_704, var_696, var_688, var_680)
    var_736 = 0;
    var_744 = 1;
    var_752 = 220;
    pri = float(var_752)
    var_760 = pri;
    var_768 = 4609434218613702656;
    var_776 = 32;
    pri = fun_30E0(var_768, var_760, var_752, var_744)
    var_784 = 0;
    var_792 = 4630798169346041446;
    var_800 = 0;
    OP_PUSH5_C 4669939606817425326, 4640953082818320138, 4671321011236330537, 4670396387928068588, 4631981771623109755
    var_808 = 4671252805781280522;
    var_816 = 1;
    pri = EvCameraMove(var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_824 = 0;
    pri = fun_2FE8()
    var_832 = 0;
    var_840 = 4630798169346041446;
    var_848 = 3;
    OP_PUSH5_C 4670052427705551421, 4641170522237829120, 4671391718080333742, 4670402297803067884, 4632852936676029235
    var_856 = 4671208891286867149;
    var_864 = 180;
    pri = EvCameraMove(var_864, var_856, var_848, var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_872 = 2023047967208508797;
    var_880 = 8;
    pri = fun_0DB8(var_872)
    var_888 = 1;
    var_896 = 1;
    OP_PUSH4_C 4640537203540230144, 4671295491571449856, 4671185540408672256, 8802641224559852288
    var_904 = 48;
    pri = fun_0990(var_896, var_888, var_880, var_872, var_864, var_856)
    var_912 = 1;
    var_920 = 1;
    var_928 = 0;
    OP_PUSH3_C 4671158052617977856, 4671268003780755456, 2023047967208508797
    var_936 = 48;
    pri = fun_0990(var_928, var_920, var_912, var_904, var_896, var_888)
    var_944 = 1;
    var_952 = 8;
    pri = fun_0060(var_944)
    var_960 = 1;
    var_968 = 0;
    var_976 = 4641240890982006784;
    var_984 = 0;
    var_992 = 0;
    OP_PUSH4_C 4671226772094713856, 4671185540408672256, 4607182418800017408, 8802641224559852288
    var_1000 = 72;
    pri = fun_0AD8(var_992, var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928)
    var_1008 = 1;
    var_1016 = 0;
    var_1024 = 4641240890982006784;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH4_C 4671226772094713856, 4671268003780755456, 4607182418800017408, 2023047967208508797
    var_1048 = 72;
    pri = fun_0AD8(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000, var_992, var_984, var_976)
    var_1056 = 15;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 0;
    var_1080 = 1;
    var_1088 = 700;
    pri = float(var_1088)
    var_1096 = pri;
    var_1104 = 4611686018427387904;
    var_1112 = 32;
    pri = fun_30E0(var_1104, var_1096, var_1088, var_1080)
    var_1120 = 0;
    var_1128 = 4626857519672092262;
    var_1136 = 0;
    OP_PUSH5_C 4671256233508780114, 4634774707079521239, 4671171472157394862, 4671314186017901117, 4634904889256249917
    var_1144 = 4671083459000370463;
    var_1152 = 1;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 0;
    pri = fun_2FE8()
    var_1168 = 0;
    var_1176 = 4626857519672092262;
    var_1184 = 2;
    OP_PUSH5_C 4671249515492734403, 4634762040705569260, 4671168305563906867, 4671293803821101220, 4634881667570671288
    var_1192 = 4671072741510778716;
    var_1200 = 480;
    pri = EvCameraMove(var_1200, var_1192, var_1184, var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1208 = 8802641224559852288;
    var_1216 = 8;
    pri = fun_0DB8(var_1208)
    var_1224 = 2023047967208508797;
    var_1232 = 8;
    pri = fun_0DB8(var_1224)
    var_1240 = 15;
    var_1248 = 8;
    pri = fun_0060(var_1240)
    var_1256 = 0;
    var_1264 = 30;
    pri = float(var_1264)
    var_1272 = pri;
    var_1280 = 37016;
    pri = SoundSetRTPC(var_1280, var_1272, var_1264)
    var_1288 = 0;
    var_1296 = 0;
    var_1304 = 0;
    var_1312 = 90;
    pri = float(var_1312)
    var_1320 = pri;
    var_1328 = 8802641224559852288;
    var_1336 = 40;
    pri = fun_0C68(var_1328, var_1320, var_1312, var_1304, var_1296)
    var_1344 = 0;
    var_1352 = 0;
    var_1360 = 0;
    var_1368 = 270;
    pri = float(var_1368)
    var_1376 = pri;
    var_1384 = 2023047967208508797;
    var_1392 = 40;
    pri = fun_0C68(var_1384, var_1376, var_1368, var_1360, var_1352)
    var_1400 = 30;
    var_1408 = 8;
    pri = fun_0060(var_1400)
    var_1416 = 8802641224559852288;
    var_1424 = 8;
    pri = fun_0DB8(var_1416)
    var_1432 = 2023047967208508797;
    var_1440 = 8;
    pri = fun_0DB8(var_1432)
    var_1448 = 0;
    var_1456 = 1;
    var_1464 = 2023047967208508797;
    var_1472 = 24;
    pri = fun_8ED8(var_1464, var_1456, var_1448)
    var_1480 = 2;
    var_1488 = 2023047967208508797;
    var_1496 = 16;
    pri = fun_1838(var_1488, var_1480)
    var_1504 = 0;
    var_1512 = 3;
    var_1520 = 0;
    var_1528 = 100;
    var_1536 = -1;
    OP_PUSH2_C -5017667270822466752, 2023047967208508797
    var_1544 = 56;
    pri = fun_2580(var_1536, var_1528, var_1520, var_1512, var_1504, var_1496, var_1488)
    var_1552 = 1;
    var_1560 = 8;
    pri = fun_2840(var_1552)
    var_1568 = 8;
    var_1576 = 2023047967208508797;
    var_1584 = 16;
    pri = fun_17C0(var_1576, var_1568)
    var_1592 = 0;
    var_1600 = 3;
    var_1608 = 0;
    var_1616 = 100;
    var_1624 = -1;
    OP_PUSH2_C -5017663972287582119, 2023047967208508797
    var_1632 = 56;
    pri = fun_2580(var_1624, var_1616, var_1608, var_1600, var_1592, var_1584, var_1576)
    var_1640 = 1;
    var_1648 = 8;
    pri = fun_2840(var_1640)
    var_1656 = 0;
    var_1664 = 0;
    var_1672 = 2023047967208508797;
    var_1680 = 24;
    pri = fun_8ED8(var_1672, var_1664, var_1656)
    var_1688 = 5;
    var_1696 = 6;
    var_1704 = 2023047967208508797;
    var_1712 = 24;
    pri = fun_18B0(var_1704, var_1696, var_1688)
    var_1720 = 0;
    var_1728 = 3;
    var_1736 = 0;
    var_1744 = 100;
    var_1752 = -1;
    OP_PUSH2_C -5017665071799210330, 2023047967208508797
    var_1760 = 56;
    pri = fun_2580(var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    var_1768 = 1;
    var_1776 = 8;
    pri = fun_2840(var_1768)
    var_1784 = 1;
    var_1792 = 1;
    var_1800 = -1;
    var_1808 = -1;
    var_1816 = 0;
    var_1824 = 8;
    var_1832 = 2023047967208508797;
    var_1840 = 56;
    pri = fun_4E70(var_1832, var_1824, var_1816, var_1808, var_1800, var_1792, var_1784)
    var_1848 = 2;
    var_1856 = 2;
    var_1864 = 2023047967208508797;
    var_1872 = 24;
    pri = fun_18B0(var_1864, var_1856, var_1848)
    var_1880 = 0;
    var_1888 = 3;
    var_1896 = 0;
    var_1904 = 100;
    var_1912 = -1;
    OP_PUSH2_C -5017661773264325697, 2023047967208508797
    var_1920 = 56;
    pri = fun_2580(var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1928 = 1;
    var_1936 = 8;
    pri = fun_2840(var_1928)
    var_1944 = 0;
    pri = fun_2900()
    var_1952 = 37152;
    var_1960 = 2023047967208508797;
    var_1968 = 16;
    pri = fun_1190(var_1960, var_1952)
    var_1976 = 1;
    var_1984 = 3;
    var_1992 = 0;
    var_2000 = 8;
    var_2008 = 2023047967208508797;
    var_2016 = 40;
    pri = fun_71A8(var_2008, var_2000, var_1992, var_1984, var_1976)
    var_2024 = 2023047967208508797;
    var_2032 = 8;
    pri = fun_0F90(var_2024)
    var_2040 = 2023047967208508797;
    var_2048 = 8;
    pri = fun_1878(var_2040)
    var_2056 = 0;
    var_2064 = 1;
    var_2072 = 200;
    pri = float(var_2072)
    var_2080 = pri;
    var_2088 = 4612811918334230528;
    var_2096 = 32;
    pri = fun_30E0(var_2088, var_2080, var_2072, var_2064)
    var_2104 = 0;
    var_2112 = 4631952216750555136;
    var_2120 = 0;
    OP_PUSH5_C 4671306000153832325, 4639053830412964987, 4671112354165948416, 4671368034599871447, 4642437159633027072
    var_2128 = 4671031446602818519;
    var_2136 = 1;
    pri = EvCameraMove(var_2136, var_2128, var_2120, var_2112, var_2104, var_2096, var_2088, var_2080, var_2072, var_2064)
    var_2144 = 0;
    pri = fun_2FE8()
    var_2152 = 0;
    var_2160 = 4631952216750555136;
    var_2168 = 9;
    OP_PUSH5_C 4671360082382023557, 4641241242825727672, 4671080179706940621, 4671441319798641787, 4643910505214246912
    var_2176 = 4671018568572878193;
    var_2184 = 240;
    pri = EvCameraMove(var_2184, var_2176, var_2168, var_2160, var_2152, var_2144, var_2136, var_2128, var_2120, var_2112)
    var_2192 = 0;
    var_2200 = 60;
    pri = float(var_2200)
    var_2208 = pri;
    var_2216 = 37328;
    pri = SoundSetRTPC(var_2216, var_2208, var_2200)
    var_2224 = 37464;
    pri = SoundPostEvent(var_2224)
    var_2232 = 30;
    var_2240 = 8;
    pri = fun_0060(var_2232)
    var_2248 = 0;
    var_2256 = 120;
    var_2264 = 850;
    pri = float(var_2264)
    var_2272 = pri;
    var_2280 = 4605380978949069210;
    var_2288 = 32;
    pri = fun_30E0(var_2280, var_2272, var_2264, var_2256)
    var_2296 = 1;
    var_2304 = 0;
    var_2312 = 4641240890982006784;
    var_2320 = 0;
    var_2328 = 0;
    OP_PUSH4_C 4671213028199366656, 4671067342908686336, 4607182418800017408, 8802641224559852288
    var_2336 = 72;
    pri = fun_0AD8(var_2328, var_2320, var_2312, var_2304, var_2296, var_2288, var_2280, var_2272, var_2264)
    var_2344 = 1;
    var_2352 = 0;
    var_2360 = 4641240890982006784;
    var_2368 = 0;
    var_2376 = 0;
    OP_PUSH4_C 4671240515990061056, 4671386201280741376, 4607182418800017408, 2023047967208508797
    var_2384 = 72;
    pri = fun_0AD8(var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320, var_2312)
    var_2392 = 8802641224559852288;
    var_2400 = 8;
    pri = fun_0DB8(var_2392)
    var_2408 = 2023047967208508797;
    var_2416 = 8;
    pri = fun_0DB8(var_2408)
    var_2424 = 15;
    var_2432 = 8;
    pri = fun_0060(var_2424)
    var_2440 = 0;
    var_2448 = 0;
    var_2456 = 0;
    var_2464 = 90;
    pri = float(var_2464)
    var_2472 = pri;
    var_2480 = 8802641224559852288;
    var_2488 = 40;
    pri = fun_0C68(var_2480, var_2472, var_2464, var_2456, var_2448)
    var_2496 = 0;
    var_2504 = 0;
    var_2512 = 0;
    var_2520 = 270;
    pri = float(var_2520)
    var_2528 = pri;
    var_2536 = 2023047967208508797;
    var_2544 = 40;
    pri = fun_0C68(var_2536, var_2528, var_2520, var_2512, var_2504)
    var_2552 = 30;
    var_2560 = 8;
    pri = fun_0060(var_2552)
    var_2568 = 8802641224559852288;
    var_2576 = 8;
    pri = fun_0DB8(var_2568)
    var_2584 = 2023047967208508797;
    var_2592 = 8;
    pri = fun_0DB8(var_2584)
    var_2600 = 0;
    pri = fun_2D70()
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_2608 = 3;
    var_2616 = 1;
    var_2624 = 32;
    pri = fun_3138(var_2616, var_2608, var_2600, var_2592)
    var_2632 = 0;
    pri = fun_2E00()
    var_2640 = 0;
    pri = fun_2EA8()
    OP_JZER lab_D238
    var_2648 = 0;
    pri = fun_2F98()
// lab_D238
    var_8 = 0;
    var_16 = 0;
    var_24 = 37712;
    pri = PokeMemoryCheckParty(var_24, var_16, var_8)
    var_32 = 1;
    var_40 = 1;
    var_48 = 90;
    pri = float(var_48)
    var_56 = pri;
    OP_PUSH3_C 4671226772094713856, 4671067342908686336, 8802641224559852288
    var_64 = 48;
    pri = fun_0990(var_56, var_48, var_40, var_32, var_24, var_16)
    var_72 = 1;
    var_80 = 1;
    var_88 = 270;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 4671226772094713856;
    var_112 = 20580;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 2023047967208508797;
    var_136 = 48;
    pri = fun_0990(var_128, var_120, var_112, var_104, var_96, var_88)
    var_144 = 8802641224559852288;
    var_152 = 8;
    pri = fun_1918(var_144)
    var_160 = 5;
    var_168 = 5;
    var_176 = 2023047967208508797;
    var_184 = 24;
    pri = fun_18B0(var_176, var_168, var_160)
    var_192 = 15;
    var_200 = 8;
    pri = fun_0060(var_192)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_208 = 16;
    pri = fun_3078(var_200, var_192)
    var_216 = 0;
    var_224 = 1;
    var_232 = 250;
    pri = float(var_232)
    var_240 = pri;
    var_248 = 4609434218613702656;
    var_256 = 32;
    pri = fun_30E0(var_248, var_240, var_232, var_224)
    var_264 = 1;
    var_272 = 0;
    var_280 = 4641240890982006784;
    var_288 = 0;
    var_296 = 0;
    var_304 = 20000;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 19850;
    pri = float(var_320)
    var_328 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_336 = 72;
    pri = fun_0AD8(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264)
    var_344 = 1;
    var_352 = 0;
    var_360 = 4641240890982006784;
    var_368 = 0;
    var_376 = 0;
    var_384 = 20000;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 20150;
    pri = float(var_400)
    var_408 = pri;
    OP_PUSH2_C 4607182418800017408, 2023047967208508797
    var_416 = 72;
    pri = fun_0AD8(var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_424 = 0;
    var_432 = 4631952216750555136;
    var_440 = 0;
    OP_PUSH5_C 4671267426537150874, 4633083746156931973, 4671177480988440658, 4671352528737140736, 4633449663626655826
    var_448 = 4671115501517982925;
    var_456 = 1;
    pri = EvCameraMove(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384)
    var_464 = 0;
    pri = fun_2FE8()
    var_472 = 0;
    var_480 = 4631952216750555136;
    var_488 = 2;
    OP_PUSH5_C 4671260076301919191, 4633083746156931973, 4671169237400011407, 4671333688605398794, 4633439812002470953
    var_496 = 4671093984075427348;
    var_504 = 240;
    pri = EvCameraMove(var_504, var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = 0;
    var_520 = 30;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 37864;
    pri = SoundSetRTPC(var_536, var_528, var_520)
    var_544 = 35640;
    var_552 = 8;
    var_560 = 16;
    pri = fun_02A8(var_552, var_544)
    var_568 = 0;
    pri = fun_0378()
    var_576 = 8802641224559852288;
    var_584 = 8;
    pri = fun_0DB8(var_576)
    var_592 = 2023047967208508797;
    var_600 = 8;
    pri = fun_0DB8(var_592)
    var_608 = 30;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_624 = 0;
    var_632 = 1;
    var_640 = 320;
    pri = float(var_640)
    var_648 = pri;
    var_656 = 4611686018427387904;
    var_664 = 32;
    pri = fun_30E0(var_656, var_648, var_640, var_632)
    var_672 = 0;
    var_680 = 4629587826946185626;
    var_688 = 0;
    OP_PUSH5_C 4671210452593378591, 4636657070986273751, 4671244853563432632, 4671252146074303857, 4638823020932062249
    var_696 = 4671148720513037107;
    var_704 = 1;
    pri = EvCameraMove(var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632)
    var_712 = 0;
    pri = fun_2FE8()
    var_720 = 0;
    var_728 = 4629587826946185626;
    var_736 = 2;
    OP_PUSH5_C 4671212764316575990, 4636657070986273751, 4671245705684944159, 4671246271933432463, 4638821261713457807
    var_744 = 4671146447272746680;
    var_752 = 240;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 0;
    var_768 = 3;
    var_776 = 0;
    var_784 = 100;
    var_792 = -1;
    OP_PUSH2_C -5017662872775953908, 2023047967208508797
    var_800 = 56;
    pri = fun_2580(var_792, var_784, var_776, var_768, var_760, var_752, var_744)
    var_808 = 1;
    var_816 = 8;
    pri = fun_2840(var_808)
    pri = MsgWinClose()
    var_824 = 6;
    var_832 = 6;
    var_840 = 2023047967208508797;
    var_848 = 24;
    pri = fun_18B0(var_840, var_832, var_824)
    var_856 = 0;
    var_864 = 3;
    var_872 = 0;
    var_880 = 101;
    var_888 = -1;
    OP_PUSH2_C -5017659574241069275, 2023047967208508797
    var_896 = 56;
    pri = fun_2580(var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_904 = 1;
    var_912 = 8;
    pri = fun_2840(var_904)
    var_920 = 2;
    var_928 = 2;
    var_936 = 2023047967208508797;
    var_944 = 24;
    pri = fun_18B0(var_936, var_928, var_920)
    var_952 = 0;
    var_960 = 3;
    var_968 = 0;
    var_976 = 100;
    var_984 = -1;
    OP_PUSH2_C -5017660673752697486, 2023047967208508797
    var_992 = 56;
    pri = fun_2580(var_984, var_976, var_968, var_960, var_952, var_944, var_936)
    var_1000 = 1;
    var_1008 = 8;
    pri = fun_2840(var_1000)
    var_1016 = 0;
    pri = fun_2900()
    var_1024 = 0;
    var_1032 = 1;
    var_1040 = 230;
    pri = float(var_1040)
    var_1048 = pri;
    var_1056 = 4611686018427387904;
    var_1064 = 32;
    pri = fun_30E0(var_1056, var_1048, var_1040, var_1032)
    var_1072 = 0;
    var_1080 = 4630164850648442470;
    var_1088 = 0;
    OP_PUSH5_C 4671157876696117412, 4637353721553632625, 4671228891403376394, 4671324917251388211, 4634457344043279974
    var_1096 = 4671225930968318607;
    var_1104 = 1;
    pri = EvCameraMove(var_1104, var_1096, var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032)
    var_1112 = 0;
    pri = fun_2FE8()
    var_1120 = 0;
    var_1128 = 4630164850648442470;
    var_1136 = 3;
    OP_PUSH5_C 4671145570412223529, 4637566938848490947, 4671229111305701949, 4671312281114005996, 4634676190837672509
    var_1144 = 4671226156368202301;
    var_1152 = 90;
    pri = EvCameraMove(var_1152, var_1144, var_1136, var_1128, var_1120, var_1112, var_1104, var_1096, var_1088, var_1080)
    var_1160 = 1;
    var_1168 = 0;
    var_1176 = 4641240890982006784;
    var_1184 = -90;
    pri = float(var_1184)
    var_1192 = pri;
    var_1200 = 0;
    var_1208 = 20000;
    pri = float(var_1208)
    var_1216 = pri;
    var_1224 = 20050;
    pri = float(var_1224)
    var_1232 = pri;
    OP_PUSH2_C 4607182418800017408, 2023047967208508797
    var_1240 = 72;
    pri = fun_0AD8(var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176, var_1168)
    var_1248 = 1;
    var_1256 = 0;
    var_1264 = 4641240890982006784;
    var_1272 = 90;
    pri = float(var_1272)
    var_1280 = pri;
    var_1288 = 0;
    var_1296 = 20000;
    pri = float(var_1296)
    var_1304 = pri;
    var_1312 = 19950;
    pri = float(var_1312)
    var_1320 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_1328 = 72;
    pri = fun_0AD8(var_1320, var_1312, var_1304, var_1296, var_1288, var_1280, var_1272, var_1264, var_1256)
    var_1336 = 1;
    var_1344 = 0;
    var_1352 = 15;
    var_1360 = 20000;
    pri = float(var_1360)
    var_1368 = pri;
    var_1376 = 170;
    pri = float(var_1376)
    var_1384 = pri;
    var_1392 = 20050;
    pri = float(var_1392)
    var_1400 = pri;
    var_1408 = 8802641224559852288;
    var_1416 = 56;
    pri = fun_1610(var_1408, var_1400, var_1392, var_1384, var_1376, var_1368, var_1360)
    var_1424 = 1;
    var_1432 = 0;
    var_1440 = 15;
    var_1448 = 20;
    pri = float(var_1448)
    var_1456 = pri;
    var_1464 = 0;
    var_1472 = 2023047967208508797;
    var_1480 = 48;
    pri = fun_16D0(var_1472, var_1464, var_1456, var_1448, var_1440, var_1432)
    var_1488 = 2023047967208508797;
    var_1496 = 8;
    pri = fun_0DB8(var_1488)
    var_1504 = 8802641224559852288;
    var_1512 = 8;
    pri = fun_0DB8(var_1504)
    var_1520 = 15;
    var_1528 = 8;
    pri = fun_0060(var_1520)
    var_1536 = 1;
    var_1544 = 0;
    var_1552 = 15;
    OP_PUSH2_C 2023047967208508797, 8802641224559852288
    var_1560 = 40;
    pri = fun_1678(var_1552, var_1544, var_1536, var_1528, var_1520)
    var_1568 = 1;
    var_1576 = 0;
    var_1584 = 15;
    OP_PUSH2_C 8802641224559852288, 2023047967208508797
    var_1592 = 40;
    pri = fun_1678(var_1584, var_1576, var_1568, var_1560, var_1552)
    var_1600 = 0;
    var_1608 = 10;
    OP_PUSH2_C 8802641224559852288, 2023047967208508797
    var_1616 = 32;
    pri = fun_1770(var_1608, var_1600, var_1592, var_1584)
    var_1624 = 38000;
    pri = SoundPostEvent(var_1624)
    var_1632 = 1;
    var_1640 = -1;
    var_1648 = -1;
    var_1656 = 1;
    var_1664 = 8802641224559852288;
    var_1672 = 40;
    pri = fun_90E8(var_1664, var_1656, var_1648, var_1640, var_1632)
    var_1680 = 1;
    var_1688 = 1;
    var_1696 = -1;
    var_1704 = -1;
    var_1712 = 0;
    var_1720 = 40;
    var_1728 = 2023047967208508797;
    var_1736 = 56;
    pri = fun_4E70(var_1728, var_1720, var_1712, var_1704, var_1696, var_1688, var_1680)
    var_1744 = 0;
    var_1752 = 4626379012211684147;
    var_1760 = 0;
    OP_PUSH5_C 4671094728994555167, 4636874510405782733, 4671230012905236726, 4671261819027849216, 4636590220679304970
    var_1768 = 4671227044223841731;
    var_1776 = 1;
    pri = EvCameraMove(var_1776, var_1768, var_1760, var_1752, var_1744, var_1736, var_1728, var_1720, var_1712, var_1704)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1784 = 3;
    var_1792 = 1;
    var_1800 = 32;
    pri = fun_3138(var_1792, var_1784, var_1776, var_1768)
    var_1808 = 30;
    var_1816 = 8;
    pri = fun_0060(var_1808)
    var_1824 = 1007;
    var_1832 = 38200;
    var_1840 = 16;
    pri = fun_2CD0(var_1832, var_1824)
    OP_PUSH2_C 4652007308841189376, 4620693217682128896
    var_1848 = 16;
    pri = fun_3078(var_1840, var_1832)
    var_1856 = 0;
    var_1864 = 1;
    var_1872 = 230;
    pri = float(var_1872)
    var_1880 = pri;
    var_1888 = 4611686018427387904;
    var_1896 = 32;
    pri = fun_30E0(var_1888, var_1880, var_1872, var_1864)
    var_1904 = 0;
    var_1912 = 4630601136862343987;
    var_1920 = 0;
    OP_PUSH5_C 4671115254127866675, 4638811410089272934, 4671272701444185129, 4671268712965755372, 4637260834811318108
    var_1928 = 4671206843446460416;
    var_1936 = 1;
    pri = EvCameraMove(var_1936, var_1928, var_1920, var_1912, var_1904, var_1896, var_1888, var_1880, var_1872, var_1864)
    var_1944 = 0;
    pri = fun_2FE8()
    var_1952 = 0;
    var_1960 = 4630601136862343987;
    var_1968 = 3;
    OP_PUSH5_C 4671122585121644872, 4638772003592533443, 4671269556840929690, 4671276043959533568, 4637182021817839124
    var_1976 = 4671203698843204977;
    var_1984 = 360;
    pri = EvCameraMove(var_1984, var_1976, var_1968, var_1960, var_1952, var_1944, var_1936, var_1928, var_1920, var_1912)
    var_1992 = 3;
    var_2000 = 0;
    var_2008 = -2478455935639121676;
    var_2016 = 24;
    pri = fun_26F8(var_2008, var_2000, var_1992)
    var_2024 = 1;
    var_2032 = 8;
    pri = fun_2840(var_2024)
    var_2040 = 0;
    pri = fun_2900()
    var_2048 = 0;
    var_2056 = 3;
    var_2064 = 0;
    var_2072 = 100;
    var_2080 = -1;
    OP_PUSH2_C -5017657375217812853, 2023047967208508797
    var_2088 = 56;
    pri = fun_2580(var_2080, var_2072, var_2064, var_2056, var_2048, var_2040, var_2032)
    var_2096 = 1;
    var_2104 = 8;
    pri = fun_2840(var_2096)
    var_2112 = 0;
    var_2120 = 3;
    var_2128 = 0;
    var_2136 = 100;
    var_2144 = -1;
    OP_PUSH2_C -5017658474729441064, 2023047967208508797
    var_2152 = 56;
    pri = fun_2580(var_2144, var_2136, var_2128, var_2120, var_2112, var_2104, var_2096)
    var_2160 = 1;
    var_2168 = 8;
    pri = fun_2840(var_2160)
    var_2176 = 0;
    pri = fun_2900()
    var_2184 = 7;
    var_2192 = 8;
    pri = fun_0430(var_2184)
    var_2200 = 0;
    pri = fun_0468()
    var_2208 = 38328;
    pri = SoundPostEvent(var_2208)
    var_2216 = 1;
    var_2224 = 0;
    var_2232 = 38592;
    var_2240 = 8;
    var_2248 = 32;
    pri = fun_0308(var_2240, var_2232, var_2224, var_2216)
    var_2256 = 0;
    pri = fun_0378()
    var_2264 = 0;
    var_2272 = 8802641224559852288;
    var_2280 = 16;
    pri = fun_B758(var_2272, var_2264)
    var_2288 = 1;
    var_2296 = 2023047967208508797;
    var_2304 = 16;
    pri = fun_B758(var_2296, var_2288)
    var_2312 = 0;
    pri = SetPlayerUniform(var_2312)
    var_2320 = 0;
    var_2328 = 0;
    var_2336 = 0;
    var_2344 = 0;
    var_2352 = 0;
    var_2360 = 1404;
    pri = float(var_2360)
    var_2368 = pri;
    var_2376 = 1477;
    pri = float(var_2376)
    var_2384 = pri;
    OP_PUSH2_C -2908913071569379095, -1799557544859572328
    var_2392 = 72;
    pri = fun_04F8(var_2384, var_2376, var_2368, var_2360, var_2352, var_2344, var_2336, var_2328, var_2320)
    var_2400 = 1;
    var_2408 = 180;
    pri = float(var_2408)
    var_2416 = pri;
    var_2424 = 8802641224559852288;
    var_2432 = 24;
    pri = fun_09E8(var_2424, var_2416, var_2408)
    var_2440 = -7268306149131292845;
    var_2448 = 8;
    pri = fun_0768(var_2440)
    var_2456 = -2669111732362968534;
    var_2464 = 8;
    pri = fun_0768(var_2456)
    var_2472 = 0;
    pri = fun_0798()
    var_2480 = 1;
    var_2488 = 1;
    var_2496 = 0;
    pri = float(var_2496)
    var_2504 = pri;
    OP_PUSH3_C 4648488871632306176, 4654201934050230272, -7268306149131292845
    var_2512 = 48;
    pri = fun_0990(var_2504, var_2496, var_2488, var_2480, var_2472, var_2464)
    var_2520 = 0;
    var_2528 = -7268306149131292845;
    var_2536 = 16;
    pri = fun_0A28(var_2528, var_2520)
    var_2544 = 1;
    var_2552 = 1;
    var_2560 = 180;
    pri = float(var_2560)
    var_2568 = pri;
    var_2576 = 2100;
    pri = float(var_2576)
    var_2584 = pri;
    OP_PUSH2_C 4654979508673393459, -2669111732362968534
    var_2592 = 48;
    pri = fun_0990(var_2584, var_2576, var_2568, var_2560, var_2552, var_2544)
    var_2600 = 0;
    var_2608 = -2669111732362968534;
    var_2616 = 16;
    pri = fun_0A28(var_2608, var_2600)
    pri = EvCameraStart()
    var_2624 = 0;
    var_2632 = 4629925596918238413;
    var_2640 = 0;
    OP_PUSH5_C 4654626301558086697, 4637724564835448914, 4653344490902425436, 4657399841629384212, 4642043094665632154
    var_2648 = 4654260735932083732;
    var_2656 = 1;
    pri = EvCameraMove(var_2656, var_2648, var_2640, var_2632, var_2624, var_2616, var_2608, var_2600, var_2592, var_2584)
    var_2664 = 0;
    pri = fun_2FE8()
    var_2672 = 0;
    var_2680 = 4629925596918238413;
    var_2688 = 3;
    OP_PUSH5_C 4654297107776730563, 4637724564835448914, 4654584564096696320, 4657235288719171256, 4642040631759585935
    var_2696 = 4655500765145889505;
    var_2704 = 100;
    pri = EvCameraMove(var_2704, var_2696, var_2688, var_2680, var_2672, var_2664, var_2656, var_2648, var_2640, var_2632)
    var_2712 = 38608;
    pri = SoundPostEvent(var_2712)
    var_2720 = 38880;
    var_2728 = 8;
    var_2736 = 16;
    pri = fun_02A8(var_2728, var_2720)
    var_2744 = 0;
    pri = fun_0378()
    var_2752 = 0;
    pri = fun_2FE8()
    var_2760 = 0;
    var_2768 = 4629193761978790707;
    var_2776 = 0;
    OP_PUSH5_C 4653671837504246907, 4635147661423662858, 4654449192225084539, 4654808600585971958, 4637253094249458565
    var_2784 = 4656314359769978634;
    var_2792 = 1;
    pri = EvCameraMove(var_2792, var_2784, var_2776, var_2768, var_2760, var_2752, var_2744, var_2736, var_2728, var_2720)
    var_2800 = 0;
    pri = fun_2FE8()
    var_2808 = 0;
    var_2816 = 3;
    var_2824 = 0;
    var_2832 = 100;
    var_2840 = -1;
    OP_PUSH2_C 890940252873396410, -4775404322951928595
    var_2848 = 56;
    pri = fun_2580(var_2840, var_2832, var_2824, var_2816, var_2808, var_2800, var_2792)
    var_2856 = 1;
    var_2864 = 8;
    pri = fun_2840(var_2856)
    var_2872 = 0;
    pri = fun_2900()
    var_2880 = 38896;
    var_2888 = 8;
    pri = fun_29E8(var_2880)
    var_2896 = 0;
    pri = fun_2A20()
    var_2904 = 1;
    var_2912 = -7268306149131292845;
    var_2920 = 16;
    pri = fun_0A28(var_2912, var_2904)
    var_2928 = 0;
    var_2936 = 3;
    var_2944 = 2;
    var_2952 = 100;
    var_2960 = -1;
    OP_PUSH2_C 1139811202941638055, -7268306149131292845
    var_2968 = 56;
    pri = fun_2630(var_2960, var_2952, var_2944, var_2936, var_2928, var_2920, var_2912)
    var_2976 = 0;
    pri = fun_27A8()
    var_2984 = 1;
    var_2992 = 8;
    pri = fun_2840(var_2984)
    var_3000 = 0;
    pri = fun_2900()
    var_3008 = 0;
    var_3016 = 0;
    var_3024 = 0;
    var_3032 = 180;
    pri = float(var_3032)
    var_3040 = pri;
    var_3048 = -4775404322951928595;
    var_3056 = 40;
    pri = fun_0C68(var_3048, var_3040, var_3032, var_3024, var_3016)
    var_3064 = -4775404322951928595;
    var_3072 = 8;
    pri = fun_0DB8(var_3064)
    var_3080 = 15;
    var_3088 = 8;
    pri = fun_0060(var_3080)
    var_3096 = 1;
    var_3104 = 0;
    var_3112 = 30;
    pri = float(var_3112)
    var_3120 = pri;
    var_3128 = 35;
    pri = float(var_3128)
    var_3136 = pri;
    var_3144 = 1;
    OP_PUSH4_C 4652407531073699840, 4653581809492164608, 4607182418800017408, -4775404322951928595
    var_3152 = 72;
    pri = fun_0AD8(var_3144, var_3136, var_3128, var_3120, var_3112, var_3104, var_3096, var_3088, var_3080)
    var_3160 = 1;
    var_3168 = 0;
    var_3176 = 4641240890982006784;
    var_3184 = 0;
    var_3192 = 0;
    OP_PUSH4_C 4653383897399164928, 4654338273492074496, 4611686018427387904, -7268306149131292845
    var_3200 = 72;
    pri = fun_0AD8(var_3192, var_3184, var_3176, var_3168, var_3160, var_3152, var_3144, var_3136, var_3128)
    var_3208 = -4775404322951928595;
    var_3216 = 8;
    pri = fun_0DB8(var_3208)
    var_3224 = -7268306149131292845;
    var_3232 = 8;
    pri = fun_0DB8(var_3224)
    var_3240 = 4;
    OP_PUSH2_C -7268306149131292845, 8802641224559852288
    var_3248 = 24;
    pri = fun_0D10(var_3240, var_3232, var_3224)
    var_3256 = 1;
    var_3264 = 1;
    var_3272 = -1;
    OP_PUSH2_C -7268306149131292845, 8802641224559852288
    var_3280 = 40;
    pri = fun_1678(var_3272, var_3264, var_3256, var_3248, var_3240)
    var_3288 = 0;
    var_3296 = 3;
    var_3304 = 0;
    var_3312 = 100;
    var_3320 = -1;
    OP_PUSH2_C 1139812302453266266, -7268306149131292845
    var_3328 = 56;
    pri = fun_2630(var_3320, var_3312, var_3304, var_3296, var_3288, var_3280, var_3272)
    var_3336 = 1;
    var_3344 = 8;
    pri = fun_2840(var_3336)
    var_3352 = 0;
    pri = fun_2900()
    var_3360 = -7268306149131292845;
    var_3368 = 8;
    pri = fun_0DB8(var_3360)
    var_3376 = 8802641224559852288;
    var_3384 = 8;
    pri = fun_0DB8(var_3376)
    var_3392 = 0;
    var_3400 = 4629193761978790707;
    var_3408 = 0;
    OP_PUSH5_C 4653704163146103521, 4638701986692076667, 4654413787950670152, 4654223660399995126, 4639185771808298107
    var_3416 = 4655266173344987218;
    var_3424 = 1;
    pri = EvCameraMove(var_3424, var_3416, var_3408, var_3400, var_3392, var_3384, var_3376, var_3368, var_3360, var_3352)
    var_3432 = 0;
    pri = fun_2FE8()
    var_3440 = 0;
    var_3448 = 3;
    var_3456 = 0;
    var_3464 = 100;
    var_3472 = -1;
    OP_PUSH2_C 1139805705383497000, -7268306149131292845
    var_3480 = 56;
    pri = fun_2630(var_3472, var_3464, var_3456, var_3448, var_3440, var_3432, var_3424)
    var_3488 = 1;
    var_3496 = 8;
    pri = fun_2840(var_3488)
    var_3504 = 0;
    pri = fun_2900()
    var_3512 = 6;
    var_3520 = 4;
    var_3528 = 2;
    var_3536 = 1;
    var_3544 = 9;
    var_3552 = 1;
    var_3560 = 693;
    var_3568 = -7268306149131292845;
    var_3576 = 64;
    pri = fun_9818(var_3568, var_3560, var_3552, var_3544, var_3536, var_3528, var_3520, var_3512)
    var_3584 = 0;
    var_3592 = 3;
    var_3600 = 0;
    var_3608 = 100;
    var_3616 = -1;
    OP_PUSH2_C 1139806804895125211, -7268306149131292845
    var_3624 = 56;
    pri = fun_2630(var_3616, var_3608, var_3600, var_3592, var_3584, var_3576, var_3568)
    var_3632 = 1;
    var_3640 = 8;
    pri = fun_2840(var_3632)
    var_3648 = 0;
    pri = fun_2900()
    var_3656 = 8902962956623239813;
    var_3664 = 39112;
    var_3672 = -7268306149131292845;
    var_3680 = 24;
    pri = fun_9A38(var_3672, var_3664, var_3656)
    var_3688 = 1;
    var_3696 = 8;
    pri = fun_2C80(var_3688)
    var_3704 = 0;
    var_3712 = 3;
    var_3720 = 0;
    var_3728 = 100;
    var_3736 = -1;
    OP_PUSH2_C 1139813401964894477, -7268306149131292845
    var_3744 = 56;
    pri = fun_2630(var_3736, var_3728, var_3720, var_3712, var_3704, var_3696, var_3688)
    var_3752 = 1;
    var_3760 = 8;
    pri = fun_2840(var_3752)
    var_3768 = 0;
    pri = fun_2900()
    var_3776 = 1;
    var_3784 = -2669111732362968534;
    var_3792 = 16;
    pri = fun_0A28(var_3784, var_3776)
    var_3800 = 1;
    var_3808 = 0;
    OP_PUSH5_C 4641240890982006784, -7268306149131292845, 4654379615129278874, 4654979508673393459, 4611686018427387904
    var_3816 = -2669111732362968534;
    var_3824 = 64;
    pri = fun_0BA8(var_3816, var_3808, var_3800, var_3792, var_3784, var_3776, var_3768, var_3760)
    var_3832 = 0;
    var_3840 = 4629193761978790707;
    var_3848 = 3;
    OP_PUSH5_C 4653671837504246907, 4635147661423662858, 4654449192225084539, 4654808600585971958, 4637253094249458565
    var_3856 = 4656314359769978634;
    var_3864 = 20;
    pri = EvCameraMove(var_3864, var_3856, var_3848, var_3840, var_3832, var_3824, var_3816, var_3808, var_3800, var_3792)
    var_3872 = 0;
    pri = fun_2FE8()
    var_3880 = 0;
    var_3888 = 3;
    var_3896 = 2;
    var_3904 = 101;
    var_3912 = -1;
    OP_PUSH2_C 3382903652064207225, -2669111732362968534
    var_3920 = 56;
    pri = fun_2630(var_3912, var_3904, var_3896, var_3888, var_3880, var_3872, var_3864)
    var_3928 = 0;
    pri = fun_27A8()
    var_3936 = 1;
    var_3944 = 8;
    pri = fun_2840(var_3936)
    var_3952 = 0;
    pri = fun_2900()
    var_3960 = -1;
    var_3968 = 8802641224559852288;
    var_3976 = 16;
    pri = fun_1730(var_3968, var_3960)
    var_3984 = 0;
    var_3992 = 0;
    var_4000 = 0;
    OP_PUSH2_C 4633289222889930752, 8802641224559852288
    var_4008 = 40;
    pri = fun_0C68(var_4000, var_3992, var_3984, var_3976, var_3968)
    var_4016 = 0;
    var_4024 = 0;
    var_4032 = 0;
    OP_PUSH2_C 4629813006927554150, -7268306149131292845
    var_4040 = 40;
    pri = fun_0C68(var_4032, var_4024, var_4016, var_4008, var_4000)
    var_4048 = -2669111732362968534;
    var_4056 = 8;
    pri = fun_0DB8(var_4048)
    var_4064 = 8802641224559852288;
    var_4072 = 8;
    pri = fun_0DB8(var_4064)
    var_4080 = -7268306149131292845;
    var_4088 = 8;
    pri = fun_0DB8(var_4080)
    var_4096 = 0;
    var_4104 = 0;
    var_4112 = 0;
    var_4120 = 0;
    OP_PUSH2_C -7268306149131292845, -2669111732362968534
    var_4128 = 48;
    pri = fun_0CB8(var_4120, var_4112, var_4104, var_4096, var_4088, var_4080)
    var_4136 = 0;
    var_4144 = 0;
    var_4152 = 0;
    var_4160 = 0;
    OP_PUSH2_C -2669111732362968534, -7268306149131292845
    var_4168 = 48;
    pri = fun_0CB8(var_4160, var_4152, var_4144, var_4136, var_4128, var_4120)
    var_4176 = 0;
    var_4184 = 0;
    var_4192 = 0;
    var_4200 = 0;
    OP_PUSH2_C -2669111732362968534, 8802641224559852288
    var_4208 = 48;
    pri = fun_0CB8(var_4200, var_4192, var_4184, var_4176, var_4168, var_4160)
    var_4216 = 1;
    var_4224 = 1;
    var_4232 = -1;
    var_4240 = -1;
    var_4248 = 0;
    var_4256 = 1;
    var_4264 = -7268306149131292845;
    var_4272 = 56;
    pri = fun_4E70(var_4264, var_4256, var_4248, var_4240, var_4232, var_4224, var_4216)
    var_4280 = 0;
    var_4288 = 3;
    var_4296 = 2;
    var_4304 = 100;
    var_4312 = -1;
    OP_PUSH2_C 1139807904406753422, -7268306149131292845
    var_4320 = 56;
    pri = fun_2630(var_4312, var_4304, var_4296, var_4288, var_4280, var_4272, var_4264)
    var_4328 = 0;
    pri = fun_27A8()
    var_4336 = 1;
    var_4344 = 8;
    pri = fun_2840(var_4336)
    var_4352 = 1;
    var_4360 = 3;
    var_4368 = 0;
    var_4376 = 1;
    var_4384 = -7268306149131292845;
    var_4392 = 40;
    pri = fun_71A8(var_4384, var_4376, var_4368, var_4360, var_4352)
    var_4400 = -7268306149131292845;
    var_4408 = 8;
    pri = fun_0DB8(var_4400)
    var_4416 = -2669111732362968534;
    var_4424 = 8;
    pri = fun_0DB8(var_4416)
    var_4432 = 8802641224559852288;
    var_4440 = 8;
    pri = fun_0DB8(var_4432)
    var_4448 = 0;
    pri = fun_2900()
    var_4456 = 1;
    var_4464 = 1;
    var_4472 = -1;
    var_4480 = -1;
    var_4488 = 0;
    var_4496 = 8;
    var_4504 = -2669111732362968534;
    var_4512 = 56;
    pri = fun_4E70(var_4504, var_4496, var_4488, var_4480, var_4472, var_4464, var_4456)
    var_4520 = 0;
    var_4528 = 3;
    var_4536 = 2;
    var_4544 = 100;
    var_4552 = -1;
    OP_PUSH2_C 3382900353529322592, -2669111732362968534
    var_4560 = 56;
    pri = fun_2630(var_4552, var_4544, var_4536, var_4528, var_4520, var_4512, var_4504)
    var_4568 = 0;
    pri = fun_27A8()
    var_4576 = 1;
    var_4584 = 8;
    pri = fun_2840(var_4576)
    var_4592 = 0;
    pri = fun_2900()
    var_4600 = 1;
    var_4608 = 3;
    var_4616 = 0;
    var_4624 = 8;
    var_4632 = -2669111732362968534;
    var_4640 = 40;
    pri = fun_71A8(var_4632, var_4624, var_4616, var_4608, var_4600)
    var_4648 = -7268306149131292845;
    var_4656 = 8;
    pri = fun_0DB8(var_4648)
    var_4664 = 4;
    OP_PUSH2_C 8802641224559852288, -7268306149131292845
    var_4672 = 24;
    pri = fun_0D10(var_4664, var_4656, var_4648)
    var_4680 = 1;
    var_4688 = 1;
    var_4696 = -1;
    OP_PUSH2_C -7268306149131292845, 8802641224559852288
    var_4704 = 40;
    pri = fun_1678(var_4696, var_4688, var_4680, var_4672, var_4664)
    var_4712 = 0;
    var_4720 = 3;
    var_4728 = 0;
    var_4736 = 100;
    var_4744 = -1;
    OP_PUSH2_C 1139809003918381633, -7268306149131292845
    var_4752 = 56;
    pri = fun_2630(var_4744, var_4736, var_4728, var_4720, var_4712, var_4704, var_4696)
    var_4760 = 1;
    var_4768 = 8;
    pri = fun_2840(var_4760)
    var_4776 = 0;
    pri = fun_2900()
    var_4784 = 8802641224559852288;
    var_4792 = 8;
    pri = fun_0DB8(var_4784)
    var_4800 = -7268306149131292845;
    var_4808 = 8;
    pri = fun_0DB8(var_4800)
    var_4816 = 1;
    var_4824 = 0;
    var_4832 = 35152;
    var_4840 = 8;
    var_4848 = 32;
    pri = fun_0308(var_4840, var_4832, var_4824, var_4816)
    var_4856 = 0;
    pri = fun_0378()
    var_4864 = 0;
    var_4872 = -2669111732362968534;
    var_4880 = 16;
    pri = fun_0A28(var_4872, var_4864)
    var_4888 = 0;
    var_4896 = -7268306149131292845;
    var_4904 = 16;
    pri = fun_0A28(var_4896, var_4888)
    var_4912 = 15;
    var_4920 = 8;
    pri = fun_0060(var_4912)
    var_4928 = -1;
    var_4936 = 8802641224559852288;
    var_4944 = 16;
    pri = fun_1730(var_4936, var_4928)
    var_4952 = 0;
    pri = fun_2AC0()
    var_4960 = 3;
    var_4968 = 1;
    pri = EvCameraEnd(var_4968, var_4960)
    pri = 0;
    return pri;
}
// fun_FE18
fun_FE18() {
    pri = 0;
    return pri;
}
// fun_FE30
fun_FE30() {
    var_8 = -2669111732362968534;
    var_16 = 8;
    pri = fun_08E8(var_8)
    var_24 = 2023047967208508797;
    var_32 = 8;
    pri = fun_08E8(var_24)
    var_40 = -7268306149131292845;
    var_48 = 8;
    pri = fun_08E8(var_40)
    var_56 = 1440;
    var_64 = 8;
    pri = fun_B5E8(var_56)
    var_72 = 80;
    var_80 = 8021964092511761817;
    pri = WorkSet(var_80, var_72)
    var_88 = 20;
    var_96 = 5709399143917384936;
    pri = WorkSet(var_96, var_88)
    var_104 = -8208209633826348795;
    pri = VanishFlagReset(var_104)
    var_112 = 7418990988919710256;
    pri = VanishFlagReset(var_112)
    var_120 = 1452431273728693011;
    pri = VanishFlagReset(var_120)
    var_128 = 7432981168339418010;
    pri = VanishFlagReset(var_128)
    var_136 = 1151691026885595427;
    pri = VanishFlagReset(var_136)
    var_144 = 1151689927373967216;
    pri = VanishFlagReset(var_144)
    var_152 = 1452433472751949433;
    pri = VanishFlagReset(var_152)
    var_160 = 3902380436590392612;
    pri = VanishFlagReset(var_160)
    var_168 = -2838057900622105808;
    pri = VanishFlagReset(var_168)
    var_176 = 3902379337078764401;
    pri = VanishFlagReset(var_176)
    var_184 = 3902378237567136190;
    pri = VanishFlagReset(var_184)
    var_192 = -2838055701598849386;
    pri = VanishFlagReset(var_192)
    var_200 = 1151692126397223638;
    pri = VanishFlagReset(var_200)
    var_208 = 1151704221025133959;
    pri = VanishFlagReset(var_208)
    var_216 = 1452432373240321222;
    pri = VanishFlagReset(var_216)
    var_224 = -4302912376062203493;
    pri = VanishFlagReset(var_224)
    var_232 = 1151703121513505748;
    pri = VanishFlagReset(var_232)
    var_240 = 2483696471998715560;
    var_248 = 8;
    pri = fun_A808(var_240)
    var_256 = 1;
    var_264 = 693;
    pri = ItemAdd(var_264, var_256)
    var_272 = 39192;
    var_280 = 8;
    pri = fun_3258(var_272)
    var_288 = -7104435776393927079;
    pri = FlagSet(var_288)
    pri = 0;
    return pri;
}
// fun_10280
fun_10280() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    OP_PUSH3_C 4652992471259676672, 4654201934050230272, -4775404322951928595
    var_32 = 48;
    pri = fun_0990(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 35640;
    var_48 = 8;
    var_56 = 16;
    pri = fun_02A8(var_48, var_40)
    var_64 = 0;
    pri = fun_0378()
    var_72 = 0;
    var_80 = 2;
    var_88 = 16;
    pri = fun_AE58(var_80, var_72)
    pri = 0;
    return pri;
}
// fun_10350
fun_10350() {
    var_8 = 1420;
    var_16 = 8;
    pri = fun_B5E8(var_8)
    pri = 0;
    return pri;
}
// fun_10388
fun_10388() {
    var_8 = 180;
    var_16 = -6753229122579741207;
    var_24 = 1450;
    var_32 = 1475;
    OP_PUSH2_C -2908913071569379095, -1799557544859572328
    var_40 = 7;
    var_48 = 56;
    pri = fun_B548(var_40, var_32, var_24, var_16, var_8, var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_10400
fun_10400() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_BA48()
    var_16 = 0;
    pri = fun_BAA0()
    var_24 = 0;
    pri = fun_BAB8()
    var_32 = 0;
    pri = fun_BAE8()
    var_40 = 0;
    pri = fun_FE18()
    var_48 = 0;
    pri = fun_FE30()
    var_56 = 0;
    pri = fun_10280()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_104F0
fun_104F0() {
    var_8 = 0;
    pri = fun_BAA0()
    var_16 = 0;
    pri = fun_FE30()
    pri = 0;
    return pri;
}
// fun_10538
fun_10538() {
    var_8 = 3;
    var_16 = 0;
    var_24 = 5897381559761953468;
    var_32 = 24;
    pri = fun_26F8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_2840(var_40)
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    var_112 = 48;
    pri = fun_2930(var_104, var_96, var_88, var_80, var_72, var_64)
    var_8 = pri;
    pri = MsgWinClose()
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_10668
    var_120 = 0;
    pri = fun_10350()
    var_128 = 0;
    pri = fun_10388()
    OP_JUMP lab_10760
// lab_10668
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 1;
    var_56 = 26500;
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
    pri = fun_0DB8(var_96)
// lab_10760
    pri = 0;
    return pri;
}
// fun_10778
fun_10778() {
    pri = 0;
    return pri;
}
