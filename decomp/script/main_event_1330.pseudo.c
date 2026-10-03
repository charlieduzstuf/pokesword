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
    pri = arg_0;
    OP_JZER lab_0318
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0418(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0488()
// lab_0318
    var_8 = arg_1;
    pri = SetPlayerUniform(var_8)
    pri = CallReloadPlayer()
    pri = arg_0;
    OP_JZER lab_03A8
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_03B8(var_24, var_16)
    var_40 = 0;
    pri = fun_0488()
// lab_03A8
    pri = 0;
    return pri;
}
// fun_03B8
fun_03B8() {
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0418
fun_0418() {
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
// fun_0488
fun_0488() {
    OP_JUMP lab_04A0
// lab_04A0
    pri = FadeWait_()
    OP_JZER lab_04D8
    pri = 0;
    return pri;
// lab_04D8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_04A0
    pri = 0;
    return pri;
}
// fun_0518
fun_0518() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_0540
fun_0540() {
    var_8 = arg_0;
    pri = StartLoadLogoFade_(var_8)
    pri = 0;
    return pri;
}
// fun_0578
fun_0578() {
    OP_JUMP lab_0590
// lab_0590
    pri = IsLoadedLogoFade_()
    OP_JZER lab_05C8
    pri = 0;
    return pri;
// lab_05C8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0590
    pri = 0;
    return pri;
}
// fun_0608
fun_0608() {
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
// fun_06A8
fun_06A8() {
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
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_08A8
fun_08A8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_08E0
// lab_08E0
    var_8 = 0;
    pri = fun_0A28()
    OP_JNZ lab_0918
    OP_JUMP lab_0948
// lab_0918
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_08E0
// lab_0948
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0978
// lab_0978
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_09B8
    pri = 0;
    return pri;
// lab_09B8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0978
    pri = 0;
    return pri;
}
// fun_09F8
fun_09F8() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0A28
fun_0A28() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0A50
fun_0A50() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = SetFieldObjectPositionXZ_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AA0
fun_0AA0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXZAndAngle_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0AF8
fun_0AF8() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = SetFieldObjectPositionXYZ_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0B50
fun_0B50() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0B90
fun_0B90() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngleToTargetObject_(var_24, var_16, var_8)
    return pri;
}
// fun_0BD0
fun_0BD0() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = SetFieldObjectVisibility_(var_16, var_8)
    return pri;
}
// fun_0C08
fun_0C08() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0C40
fun_0C40() {
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
// fun_0CB8
fun_0CB8() {
    var_8 = arg_4;
    var_16 = arg_5;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartPathMove_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D10
fun_0D10() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = StartTurnAround_(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0D60
fun_0D60() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    pri = StartTurnAroundToTargetObject_(var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0DB8
fun_0DB8() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1868(var_8)
    OP_JZER lab_0E30
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1898(var_24)
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
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = GetAnimationStateIntParameter_(var_16, var_8)
    return pri;
}
// fun_0FD0
fun_0FD0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_1018
    pri = 0;
    return pri;
// lab_1018
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_1058
// lab_1058
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1868(var_8)
    OP_JNZ lab_10E0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_10D0
    pri = 0;
    return pri;
// lab_10E0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_1128
    pri = 0;
    return pri;
// lab_1128
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_1188
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_11D0(var_8)
    pri = 0;
    return pri;
// lab_1188
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_1058
    pri = 0;
    return pri;
// lab_10D0
    OP_JUMP lab_1128
}
// fun_11D0
fun_11D0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    var_8 = 14;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1258
    pri = 0;
    return pri;
// lab_1258
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_1868(var_8)
    OP_JZER lab_1388
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12B0
    OP_ZERO_P_S 64
// lab_1388
    pri = arg_5;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13C0
    OP_CONST_S 64, 1
// lab_13C0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_13F8
    OP_CONST_S 72, 1
// lab_13F8
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
// lab_12B0
    pri = arg_6;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_12D8
    OP_ZERO_P_S 72
// lab_12D8
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
    OP_JUMP lab_1498
// lab_1498
    pri = 0;
    return pri;
}
// fun_14A8
fun_14A8() {
    var_8 = 1;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_14E8
fun_14E8() {
    var_8 = 0;
    var_16 = 14;
    pri = TempWorkSet(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1528
fun_1528() {
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = arg_0;
    pri = EnableFieldObjectLookAtFieldObject_(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1580
fun_1580() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_15C0
fun_15C0() {
    var_8 = arg_1;
    var_16 = 8;
    pri = fun_1868(var_8)
    OP_JZER lab_1660
    var_24 = arg_5;
    var_32 = arg_4;
    var_40 = arg_3;
    var_48 = 0;
    var_56 = arg_2;
    var_64 = 0;
    var_72 = 440;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = PlayParticleVfx_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    return pri;
// lab_1660
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = 0;
    var_40 = arg_2;
    var_48 = 0;
    var_56 = 552;
    var_64 = arg_1;
    var_72 = arg_0;
    pri = PlayParticleVfx_(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_16C8
fun_16C8() {
    pri = 0;
    OP_ADDR_ALT -1376
    OP_FILL 1376
    pri = 656;
    OP_ADDR_ALT -1376
    OP_MOVS 1368
    pri = 0;
    OP_ADDR_ALT -2560
    OP_FILL 1184
    pri = 2024;
    OP_ADDR_ALT -2560
    OP_MOVS 1176
    OP_ADDR_P_ALT -2560
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2568 = pri;
    pri = SoundPostEvent(var_2568)
    var_2576 = arg_3;
    var_2584 = arg_5;
    var_2592 = arg_2;
    var_2600 = arg_4;
    var_2608 = arg_1;
    OP_ADDR_P_ALT -1376
    pri = arg_0;
    OP_IDXADDR_P_B 3
    OP_MOVE_ALT 
    OP_LOAD_I 
    OP_ADD 
    var_2616 = pri;
    var_2624 = 48;
    pri = fun_15C0(var_2616, var_2608, var_2600, var_2592, var_2584, var_2576)
    return pri;
}
// fun_1868
fun_1868() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_1898
fun_1898() {
    var_8 = arg_0;
    pri = IsExistPokemonMotion(var_8)
    return pri;
}
// fun_18C8
fun_18C8() {
    OP_JUMP lab_18E0
// lab_18E0
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_1970
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_1960
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FD0(var_8)
    pri = 0;
    return pri;
// lab_1970
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1A00
    pri = IsPlayerRideBicycle()
    OP_JZER lab_19F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FD0(var_8)
    pri = 0;
    return pri;
// lab_1A00
    pri = 0;
    return pri;
// lab_19F0
    OP_JUMP lab_1A10
// lab_1A10
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_18E0
    pri = 0;
    return pri;
// lab_1960
    OP_JUMP lab_1A10
}
// fun_1A50
fun_1A50() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FD0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_18C8(var_40)
    pri = 0;
    return pri;
}
// fun_1AD8
fun_1AD8() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_1B10
fun_1B10() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_1B38
fun_1B38() {
    var_8 = arg_0;
    pri = SetNPCDefaultMotion(var_8)
    return pri;
}
// fun_1B68
fun_1B68() {
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
// fun_1C38
fun_1C38() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_1C70
fun_1C70() {
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
// switch_2288
        case default:
        {
// switch_2288_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_22D0
// lab_22D0
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
            OP_JNZ lab_2378
            var_88 = 0;
            pri = fun_2648()
// lab_2378
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_2288_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_1E70
                case default:
                {
// switch_1E70_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1EE8
// lab_1EE8
                    OP_JUMP lab_22D0
                }
                case 0x0:
                {
// switch_1E70_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_1EE8
                }
                case 0x1:
                {
// switch_1E70_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_1EE8
                }
                case 0x2:
                {
// switch_1E70_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_1EE8
                }
                case 0x3:
                {
// switch_1E70_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_1EE8
                }
                case 0x4:
                {
// switch_1E70_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_1EE8
                }
                case 0x5:
                {
// switch_1E70_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_1EE8
                }
            }
        }
        case 0x65:
        {
// switch_2288_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_2028
                case default:
                {
// switch_2028_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20A0
// lab_20A0
                    OP_JUMP lab_22D0
                }
                case 0x0:
                {
// switch_2028_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_20A0
                }
                case 0x1:
                {
// switch_2028_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_20A0
                }
                case 0x2:
                {
// switch_2028_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_20A0
                }
                case 0x3:
                {
// switch_2028_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_20A0
                }
                case 0x4:
                {
// switch_2028_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_20A0
                }
                case 0x5:
                {
// switch_2028_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_20A0
                }
            }
        }
        case 0x66:
        {
// switch_2288_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_21E0
                case default:
                {
// switch_21E0_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2258
// lab_2258
                    OP_JUMP lab_22D0
                }
                case 0x0:
                {
// switch_21E0_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_2258
                }
                case 0x1:
                {
// switch_21E0_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_2258
                }
                case 0x2:
                {
// switch_21E0_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_2258
                }
                case 0x3:
                {
// switch_21E0_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_2258
                }
                case 0x4:
                {
// switch_21E0_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_2258
                }
                case 0x5:
                {
// switch_21E0_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_2258
                }
            }
        }
    }
}
// fun_2390
fun_2390() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_1C70(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_23F8
fun_23F8() {
    pri = 3200;
    OP_ADDR_ALT -80
    OP_MOVS 80
    var_96 = 3280;
    var_104 = arg_0;
    var_112 = 16;
    pri = fun_0F98(var_104, var_96)
    var_88 = pri;
    pri = var_88;
    OP_JNZ lab_24A0
    pri = 1;
    return pri;
// lab_24A0
    OP_ADDR_P_PRI -80
    var_8 = pri;
    pri = var_88;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
// fun_24E8
fun_24E8() {
    pri = arg_2;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_2538
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_23F8(var_8)
    arg_2 = pri;
// lab_2538
    var_8 = arg_6;
    var_16 = arg_2;
    var_24 = arg_4;
    var_32 = arg_5;
    var_40 = arg_3;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_1C70(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2598
fun_2598() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_2390(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_25E8
fun_25E8() {
    var_8 = arg_2;
    pri = arg_1;
    alt = 1;
    pri |= alt;
    var_16 = pri;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_2598(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2648
fun_2648() {
    OP_JUMP lab_2660
// lab_2660
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_26A0
    pri = 0;
    return pri;
// lab_26A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2660
    pri = 0;
    return pri;
}
// fun_26E0
fun_26E0() {
    var_8 = 0;
    pri = fun_2648()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_2790
    var_32 = 3328;
    pri = SoundPostEvent(var_32)
// lab_2790
    pri = 0;
    return pri;
}
// fun_27A0
fun_27A0() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_27D0
fun_27D0() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = 0;
    var_56 = arg_0;
    pri = YesNoWin_(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    pri = fun_2848()
    return pri;
}
// fun_2848
fun_2848() {
    var_8 = 12;
    pri = TempWorkGet(var_8)
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2888
fun_2888() {
    var_8 = arg_0;
    pri = ExtraMsgLoad(var_8)
    pri = 0;
    return pri;
}
// fun_28C0
fun_28C0() {
    OP_JUMP lab_28D8
// lab_28D8
    pri = ExtraMsgIsLoaded_()
    OP_JZER lab_2920
    OP_JUMP lab_2950
    OP_JUMP lab_2940
// lab_2920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
// lab_2950
    pri = 0;
    return pri;
// lab_2940
    OP_JUMP lab_28D8
}
// fun_2960
fun_2960() {
    pri = ExtraMsgUnload()
    pri = 0;
    return pri;
}
// fun_2990
fun_2990() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 1;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_29E0
fun_29E0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 11;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A30
fun_2A30() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 10;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2A80
fun_2A80() {
    var_8 = 0;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 15;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2AD0
fun_2AD0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    var_32 = 16;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2B20
fun_2B20() {
    pri = arg_1;
    OP_JNZ lab_2B68
    var_8 = 3504;
    pri = GetFnvHash64(var_8)
    arg_1 = pri;
// lab_2B68
    var_8 = arg_4;
    var_16 = arg_3;
    var_24 = arg_2;
    var_32 = arg_1;
    var_40 = 0;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2BC0
fun_2BC0() {
    pri = arg_2;
    OP_JNZ lab_2C08
    var_8 = 3512;
    pri = GetFnvHash64(var_8)
    arg_2 = pri;
// lab_2C08
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    pri = CallTrainerBattleCore(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_2C60
fun_2C60() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetTrainerBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_2CD8
fun_2CD8() {
    var_8 = 0;
    pri = fun_2C60()
    OP_EQ_P_C_PRI 2
    OP_JZER lab_2D58
    var_16 = 0;
    var_24 = 1;
    pri = PokePartyGetCount(var_24, var_16)
    OP_JNZ lab_2D58
    pri = 1;
    return pri;
// lab_2D58
    var_8 = 0;
    pri = fun_2C60()
    OP_EQ_P_C_PRI 3
    OP_JZER lab_2D98
    pri = 1;
    return pri;
// lab_2D98
    var_8 = 0;
    pri = fun_2C60()
    OP_ZERO_ALT 
    OP_EQ 
    return pri;
}
// fun_2DC8
fun_2DC8() {
    pri = CallBattleLose_()
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = 0;
    return pri;
}
// fun_2E18
fun_2E18() {
    OP_JUMP lab_2E30
// lab_2E30
    pri = EvCameraMoveWait_()
    OP_JZER lab_2E68
    pri = 0;
    return pri;
// lab_2E68
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_2E30
    pri = 0;
    return pri;
}
// fun_2EA8
fun_2EA8() {
    var_8 = arg_8;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = arg_7;
    var_64 = arg_6;
    var_72 = arg_5;
    var_80 = 0;
    var_88 = 4607182418800017408;
    var_96 = 0;
    pri = EvCameraShake_(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_2F40
fun_2F40() {
    var_8 = arg_0;
    pri = SetNpcLicenseCardFlag(var_8)
    pri = 0;
    return pri;
}
// fun_2F78
fun_2F78() {
    pri = arg_6;
    OP_JNZ lab_2FB0
    var_8 = 0;
    pri = fun_14A8()
// lab_2FB0
    pri = arg_1;
    switch (pri) {
// switch_4518
        case default:
        {
// switch_4518_case_default
            pri = 0;
            OP_ADDR_ALT -512
            OP_FILL 512
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_4868
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_4868
            pri = 1;
            OP_JUMP lab_4870
// lab_4868
            pri = 0;
// lab_4870
            OP_JZER lab_49C8
            var_16 = 11192;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F98(var_24, var_16)
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
            var_64 = 11296;
            pri = ConcatString(var_64, var_56, var_48)
            OP_PUSH_P_ADR -512
            OP_PUSH_P_ADR -536
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_72 = pri;
            pri = ConcatString(var_72, var_64, var_56)
            OP_JUMP lab_4A28
// lab_49C8
            var_8 = 64;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -512
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_4A28
            pri = arg_1;
            alt = 30;
            OP_JSGEQ lab_4A88
            var_8 = 0;
            OP_PUSH_P_ADR -512
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            OP_JUMP lab_4AE8
// lab_4A88
            var_8 = arg_0;
            pri = IsExistPokemonMotion(var_8)
            OP_JZER lab_4AE8
            var_16 = 0;
            OP_PUSH_P_ADR -512
            var_24 = arg_0;
            pri = AddParallelCommandMonitorState_(var_24, var_16, var_8)
// lab_4AE8
            pri = arg_2;
            OP_JZER lab_4B28
            OP_PUSH_P_ADR -512
            var_8 = arg_0;
            pri = WaitAnimationState_(var_8, var_0)
// lab_4B28
            var_8 = 0;
            pri = fun_14E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_4518_case_0x0
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x1:
        {
// switch_4518_case_0x1
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x2:
        {
// switch_4518_case_0x2
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x3:
        {
// switch_4518_case_0x3
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x4:
        {
// switch_4518_case_0x4
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x5:
        {
// switch_4518_case_0x5
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8480;
            var_72 = 8472;
            var_80 = 8464;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x6:
        {
// switch_4518_case_0x6
            var_8 = 0;
            var_16 = 2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8504;
            var_72 = 8496;
            var_80 = 8488;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x7:
        {
// switch_4518_case_0x7
            var_8 = 0;
            var_16 = 2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8528;
            var_72 = 8520;
            var_80 = 8512;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x8:
        {
// switch_4518_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x9:
        {
// switch_4518_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8552;
            var_72 = 8544;
            var_80 = 8536;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xa:
        {
// switch_4518_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8576;
            var_72 = 8568;
            var_80 = 8560;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xb:
        {
// switch_4518_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8600;
            var_72 = 8592;
            var_80 = 8584;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xc:
        {
// switch_4518_case_0xc
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8624;
            var_72 = 8616;
            var_80 = 8608;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xd:
        {
// switch_4518_case_0xd
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8648;
            var_72 = 8640;
            var_80 = 8632;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xe:
        {
// switch_4518_case_0xe
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8672;
            var_72 = 8664;
            var_80 = 8656;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0xf:
        {
// switch_4518_case_0xf
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x10:
        {
// switch_4518_case_0x10
            var_8 = 0;
            var_16 = -1;
            var_24 = 7;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x11:
        {
// switch_4518_case_0x11
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8696;
            var_72 = 8688;
            var_80 = 8680;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x12:
        {
// switch_4518_case_0x12
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 5;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8720;
            var_72 = 8712;
            var_80 = 8704;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x13:
        {
// switch_4518_case_0x13
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x14:
        {
// switch_4518_case_0x14
            var_8 = 0;
            var_16 = -1;
            var_24 = 2;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x15:
        {
// switch_4518_case_0x15
            var_8 = 0;
            var_16 = -1;
            var_24 = 3;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x16:
        {
// switch_4518_case_0x16
            var_8 = 0;
            var_16 = -1;
            var_24 = 4;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x17:
        {
// switch_4518_case_0x17
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x18:
        {
// switch_4518_case_0x18
            var_8 = 0;
            var_16 = -1;
            var_24 = 5;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x19:
        {
// switch_4518_case_0x19
            var_8 = 0;
            var_16 = -1;
            var_24 = 6;
            var_32 = 0;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_5;
            var_56 = arg_4;
            var_64 = 8744;
            var_72 = 8736;
            var_80 = 8728;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_88 = pri;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_4518_case_default
        }
        case 0x1a:
        {
// switch_4518_case_0x1a
            var_8 = 1;
            var_16 = 8752;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            var_40 = 8888;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EE0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 8968;
            var_88 = 8960;
            var_96 = 8952;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1208(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4518_case_default
        }
        case 0x1b:
        {
// switch_4518_case_0x1b
            var_8 = 3;
            var_16 = 8976;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            var_40 = 9112;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EE0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9192;
            var_88 = 9184;
            var_96 = 9176;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1208(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4518_case_default
        }
        case 0x1c:
        {
// switch_4518_case_0x1c
            var_8 = 2;
            var_16 = 9200;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            var_40 = 9336;
            var_48 = arg_0;
            var_56 = 16;
            pri = fun_0EE0(var_48, var_40)
            var_64 = arg_5;
            var_72 = arg_4;
            var_80 = 9416;
            var_88 = 9408;
            var_96 = 9400;
            alt = 3520;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_104 = pri;
            var_112 = arg_0;
            var_120 = 56;
            pri = fun_1208(var_112, var_104, var_96, var_88, var_80, var_72, var_64)
            OP_JUMP switch_4518_case_default
        }
        case 0x1d:
        {
// switch_4518_case_0x1d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9424;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x1e:
        {
// switch_4518_case_0x1e
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9560;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x1f:
        {
// switch_4518_case_0x1f
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9696;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x20:
        {
// switch_4518_case_0x20
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9832;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x21:
        {
// switch_4518_case_0x21
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 9952;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x22:
        {
// switch_4518_case_0x22
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10072;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x23:
        {
// switch_4518_case_0x23
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10208;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x24:
        {
// switch_4518_case_0x24
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10344;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x25:
        {
// switch_4518_case_0x25
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10480;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x26:
        {
// switch_4518_case_0x26
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10616;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x27:
        {
// switch_4518_case_0x27
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10760;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x28:
        {
// switch_4518_case_0x28
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 10904;
            var_32 = 1;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
        case 0x29:
        {
// switch_4518_case_0x29
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 11048;
            var_32 = 2;
            var_40 = 0;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_4518_case_default
        }
    }
}
// fun_4B58
fun_4B58() {
    pri = arg_5;
    OP_JNZ lab_4B90
    var_8 = 0;
    pri = fun_14A8()
// lab_4B90
    OP_CONST_S -8, -2
    pri = arg_6;
    OP_JZER lab_4BE0
    OP_CONST_S -8, -1
// lab_4BE0
    pri = arg_1;
    switch (pri) {
// switch_6698
        case default:
        {
// switch_6698_case_default
            pri = 0;
            OP_ADDR_ALT -520
            OP_FILL 512
            pri = arg_1;
            OP_JNZ lab_6B40
            var_520 = 31056;
            var_528 = arg_0;
            var_536 = 16;
            pri = fun_0F98(var_528, var_520)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_6B40
            pri = 1;
            OP_JUMP lab_6B48
// lab_6B40
            pri = 0;
// lab_6B48
            OP_JZER lab_6B98
            var_8 = 64;
            var_16 = 31152;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_6DF0
// lab_6B98
            pri = arg_1;
            OP_MOVE_ALT 
            pri = 0;
            OP_XCHG 
            OP_JSLESS lab_6C00
            pri = arg_1;
            alt = 5;
            OP_JSGEQ lab_6C00
            pri = 1;
            OP_JUMP lab_6C08
// lab_6C00
            pri = 0;
// lab_6C08
            OP_JZER lab_6D90
            var_16 = 31328;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F98(var_24, var_16)
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
            var_176 = 31432;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -656
            var_184 = 31448;
            OP_PUSH_P_ADR -656
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -520
            OP_PUSH_P_ADR -656
            alt = 11312;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_192 = pri;
            pri = ConcatString(var_192, var_184, var_176)
            OP_JUMP lab_6DF0
// lab_6D90
            var_8 = 64;
            alt = 11312;
            pri = arg_1;
            OP_IDXADDR_P_B 3
            OP_MOVE_ALT 
            OP_LOAD_I 
            OP_ADD 
            var_16 = pri;
            OP_PUSH_P_ADR -520
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
// lab_6DF0
            var_8 = 0;
            OP_PUSH_P_ADR -520
            var_16 = arg_0;
            pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
            pri = arg_2;
            OP_JZER lab_6E60
            OP_PUSH_P_ADR -520
            var_24 = arg_0;
            pri = WaitAnimationState_(var_24, var_16)
// lab_6E60
            var_8 = 0;
            pri = fun_14E8()
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_6698_case_0x0
            var_8 = 0;
            var_16 = var_8;
            var_24 = 1;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1:
        {
// switch_6698_case_0x1
            var_8 = 0;
            var_16 = var_8;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x2:
        {
// switch_6698_case_0x2
            var_8 = 0;
            var_16 = var_8;
            var_24 = 3;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3:
        {
// switch_6698_case_0x3
            var_8 = 0;
            var_16 = var_8;
            var_24 = 4;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x4:
        {
// switch_6698_case_0x4
            var_8 = 0;
            var_16 = var_8;
            var_24 = 5;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x5:
        {
// switch_6698_case_0x5
            var_8 = 2;
            var_16 = 21312;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11D0(var_40)
            OP_JUMP switch_6698_case_default
        }
        case 0x6:
        {
// switch_6698_case_0x6
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x7:
        {
// switch_6698_case_0x7
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x8:
        {
// switch_6698_case_0x8
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x9:
        {
// switch_6698_case_0x9
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xa:
        {
// switch_6698_case_0xa
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xb:
        {
// switch_6698_case_0xb
            var_8 = 0;
            var_16 = 0;
            var_24 = 6;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xc:
        {
// switch_6698_case_0xc
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0xd:
        {
// switch_6698_case_0xd
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 21960;
            var_72 = 21784;
            var_80 = 21600;
            var_88 = 21408;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0xe:
        {
// switch_6698_case_0xe
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 22616;
            var_72 = 22408;
            var_80 = 22192;
            var_88 = 21968;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0xf:
        {
// switch_6698_case_0xf
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23008;
            var_72 = 22888;
            var_80 = 22760;
            var_88 = 22624;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x10:
        {
// switch_6698_case_0x10
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23352;
            var_72 = 23248;
            var_80 = 23136;
            var_88 = 23016;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x11:
        {
// switch_6698_case_0x11
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 23696;
            var_72 = 23592;
            var_80 = 23480;
            var_88 = 23360;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x12:
        {
// switch_6698_case_0x12
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x13:
        {
// switch_6698_case_0x13
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x14:
        {
// switch_6698_case_0x14
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 24256;
            var_72 = 24080;
            var_80 = 23896;
            var_88 = 23704;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x15:
        {
// switch_6698_case_0x15
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x16:
        {
// switch_6698_case_0x16
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x17:
        {
// switch_6698_case_0x17
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x18:
        {
// switch_6698_case_0x18
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x19:
        {
// switch_6698_case_0x19
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1a:
        {
// switch_6698_case_0x1a
            var_8 = 0;
            var_16 = 0;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1b:
        {
// switch_6698_case_0x1b
            var_8 = 0;
            var_16 = 0;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1c:
        {
// switch_6698_case_0x1c
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 24648;
            var_72 = 24528;
            var_80 = 24400;
            var_88 = 24264;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x1d:
        {
// switch_6698_case_0x1d
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x1e:
        {
// switch_6698_case_0x1e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_3;
            var_56 = arg_3;
            var_64 = 25112;
            var_72 = 24968;
            var_80 = 24816;
            var_88 = 24656;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x1f:
        {
// switch_6698_case_0x1f
            var_8 = 0;
            var_16 = 3;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x20:
        {
// switch_6698_case_0x20
            var_8 = 0;
            var_16 = 3;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x21:
        {
// switch_6698_case_0x21
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x22:
        {
// switch_6698_case_0x22
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x23:
        {
// switch_6698_case_0x23
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x24:
        {
// switch_6698_case_0x24
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25480;
            var_72 = 25368;
            var_80 = 25248;
            var_88 = 25120;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x25:
        {
// switch_6698_case_0x25
            var_8 = 0;
            var_16 = 0;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 25848;
            var_72 = 25736;
            var_80 = 25616;
            var_88 = 25488;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x26:
        {
// switch_6698_case_0x26
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x27:
        {
// switch_6698_case_0x27
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x28:
        {
// switch_6698_case_0x28
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x29:
        {
// switch_6698_case_0x29
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26288;
            var_72 = 26152;
            var_80 = 26008;
            var_88 = 25856;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2a:
        {
// switch_6698_case_0x2a
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 26680;
            var_72 = 26560;
            var_80 = 26432;
            var_88 = 26296;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2b:
        {
// switch_6698_case_0x2b
            var_8 = 0;
            var_16 = 1;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27096;
            var_72 = 26968;
            var_80 = 26832;
            var_88 = 26688;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2c:
        {
// switch_6698_case_0x2c
            var_8 = 0;
            var_16 = 1;
            var_24 = 2;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27536;
            var_72 = 27400;
            var_80 = 27256;
            var_88 = 27104;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2d:
        {
// switch_6698_case_0x2d
            var_8 = 0;
            var_16 = 2;
            var_24 = 1;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x2e:
        {
// switch_6698_case_0x2e
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 27856;
            var_72 = 27760;
            var_80 = 27656;
            var_88 = 27544;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x2f:
        {
// switch_6698_case_0x2f
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28248;
            var_72 = 28128;
            var_80 = 28000;
            var_88 = 27864;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x30:
        {
// switch_6698_case_0x30
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 28640;
            var_72 = 28520;
            var_80 = 28392;
            var_88 = 28256;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x31:
        {
// switch_6698_case_0x31
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x32:
        {
// switch_6698_case_0x32
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x33:
        {
// switch_6698_case_0x33
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29032;
            var_72 = 28912;
            var_80 = 28784;
            var_88 = 28648;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x34:
        {
// switch_6698_case_0x34
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29400;
            var_72 = 29288;
            var_80 = 29168;
            var_88 = 29040;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x35:
        {
// switch_6698_case_0x35
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 29888;
            var_72 = 29736;
            var_80 = 29576;
            var_88 = 29408;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x36:
        {
// switch_6698_case_0x36
            var_8 = 0;
            var_16 = 0;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30256;
            var_72 = 30144;
            var_80 = 30024;
            var_88 = 29896;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x37:
        {
// switch_6698_case_0x37
            var_8 = 0;
            var_16 = 0;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x38:
        {
// switch_6698_case_0x38
            var_8 = 0;
            var_16 = 0;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            var_48 = arg_4;
            var_56 = arg_3;
            var_64 = 30624;
            var_72 = 30512;
            var_80 = 30392;
            var_88 = 30264;
            var_96 = arg_0;
            var_104 = 56;
            pri = fun_1208(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
            OP_JUMP switch_6698_case_default
        }
        case 0x39:
        {
// switch_6698_case_0x39
            var_8 = 0;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3a:
        {
// switch_6698_case_0x3a
            var_8 = 0;
            var_16 = -1;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3b:
        {
// switch_6698_case_0x3b
            var_8 = 0;
            var_16 = -1;
            var_24 = 1;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3c:
        {
// switch_6698_case_0x3c
            var_8 = 0;
            var_16 = 1;
            var_24 = 30632;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3d:
        {
// switch_6698_case_0x3d
            var_8 = 0;
            var_16 = 1;
            var_24 = 30808;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
        case 0x3e:
        {
// switch_6698_case_0x3e
            var_8 = 4;
            var_16 = 30952;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            OP_JUMP switch_6698_case_default
        }
    }
}
// fun_6E90
fun_6E90() {
    pri = arg_4;
    OP_JNZ lab_6EC8
    var_8 = 0;
    pri = fun_14A8()
// lab_6EC8
    pri = arg_1;
    switch (pri) {
// switch_82A0
        case default:
        {
// switch_82A0_case_default
            pri = 0;
            OP_ADDR_ALT -256
            OP_FILL 256
            pri = 32024;
            OP_ADDR_ALT -256
            OP_MOVS 56
            var_264 = arg_0;
            var_272 = 8;
            pri = fun_1868(var_264)
            OP_JZER lab_8868
            pri = arg_3;
            switch (pri) {
// switch_8810
                case default:
                {
// switch_8810_case_default
                    OP_JUMP lab_8B20
// lab_8B20
                    var_8 = 1;
                    OP_PUSH_P_ADR -256
                    var_16 = arg_0;
                    pri = AddParallelCommandMonitorState_(var_16, var_8, var_0)
                    pri = arg_2;
                    OP_JZER lab_8B90
                    OP_PUSH_P_ADR -256
                    var_24 = arg_0;
                    pri = WaitAnimationState_(var_24, var_16)
// lab_8B90
                    var_8 = 0;
                    pri = fun_14E8()
                    pri = 0;
                    return pri;
                }
                case 0x1:
                {
// switch_8810_case_0x1
                    var_8 = 32;
                    var_16 = 32176;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8810_case_default
                }
                case 0x2:
                {
// switch_8810_case_0x2
                    var_8 = 32;
                    var_16 = 32280;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8810_case_default
                }
                case 0x3:
                {
// switch_8810_case_0x3
                    var_8 = 32;
                    var_16 = 32080;
                    OP_PUSH_P_ADR -256
                    var_24 = 24;
                    pri = fun_0160(var_16, var_8, var_0)
                    OP_JUMP switch_8810_case_default
                }
            }
// lab_8868
            pri = arg_1;
            OP_JZER lab_88B8
            pri = arg_1;
            OP_EQ_P_C_PRI 19
            OP_JNZ lab_88B8
            pri = 0;
            OP_JUMP lab_88C0
// lab_88B8
            pri = 1;
// lab_88C0
            OP_JZER lab_8928
            var_8 = 32376;
            var_16 = arg_0;
            var_24 = 16;
            pri = fun_0F98(var_16, var_8)
            OP_EQ_P_C_PRI 2
            OP_JZER lab_8928
            pri = 1;
            OP_JUMP lab_8930
// lab_8928
            pri = 0;
// lab_8930
            OP_JZER lab_8980
            var_8 = 32;
            var_16 = 32472;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8B20
// lab_8980
            pri = arg_0;
            OP_EQ_C_PRI 8802641224559852288
            OP_JZER lab_89E8
            var_8 = 32;
            var_16 = 32632;
            OP_PUSH_P_ADR -256
            var_24 = 24;
            pri = fun_0160(var_16, var_8, var_0)
            OP_JUMP lab_8B20
// lab_89E8
            var_16 = 32752;
            var_24 = arg_0;
            var_32 = 16;
            pri = fun_0F98(var_24, var_16)
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
            var_176 = 32856;
            pri = ConcatString(var_176, var_168, var_160)
            OP_PUSH_P_ADR -392
            var_184 = 32872;
            OP_PUSH_P_ADR -392
            pri = ConcatString(var_184, var_176, var_168)
            OP_PUSH_P_ADR -256
            OP_PUSH_P_ADR -392
            OP_PUSH_P_ADR -256
            pri = ConcatString(var_184, var_176, var_168)
        }
        case 0x0:
        {
// switch_82A0_case_0x0
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1:
        {
// switch_82A0_case_0x1
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2:
        {
// switch_82A0_case_0x2
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3:
        {
// switch_82A0_case_0x3
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x4:
        {
// switch_82A0_case_0x4
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x5:
        {
// switch_82A0_case_0x5
            var_8 = 1;
            var_16 = 31504;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            var_40 = arg_0;
            var_48 = 8;
            pri = fun_11D0(var_40)
            OP_JUMP switch_82A0_case_default
        }
        case 0x6:
        {
// switch_82A0_case_0x6
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x7:
        {
// switch_82A0_case_0x7
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x8:
        {
// switch_82A0_case_0x8
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x9:
        {
// switch_82A0_case_0x9
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xa:
        {
// switch_82A0_case_0xa
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xb:
        {
// switch_82A0_case_0xb
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xc:
        {
// switch_82A0_case_0xc
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xd:
        {
// switch_82A0_case_0xd
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xe:
        {
// switch_82A0_case_0xe
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0xf:
        {
// switch_82A0_case_0xf
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x10:
        {
// switch_82A0_case_0x10
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x11:
        {
// switch_82A0_case_0x11
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x12:
        {
// switch_82A0_case_0x12
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x13:
        {
// switch_82A0_case_0x13
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x14:
        {
// switch_82A0_case_0x14
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x15:
        {
// switch_82A0_case_0x15
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x16:
        {
// switch_82A0_case_0x16
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x17:
        {
// switch_82A0_case_0x17
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x18:
        {
// switch_82A0_case_0x18
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x19:
        {
// switch_82A0_case_0x19
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1a:
        {
// switch_82A0_case_0x1a
            var_8 = 1;
            var_16 = -2;
            var_24 = 5;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1b:
        {
// switch_82A0_case_0x1b
            var_8 = 1;
            var_16 = -2;
            var_24 = 7;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1c:
        {
// switch_82A0_case_0x1c
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1d:
        {
// switch_82A0_case_0x1d
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1e:
        {
// switch_82A0_case_0x1e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x1f:
        {
// switch_82A0_case_0x1f
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x20:
        {
// switch_82A0_case_0x20
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x21:
        {
// switch_82A0_case_0x21
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x22:
        {
// switch_82A0_case_0x22
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x23:
        {
// switch_82A0_case_0x23
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x24:
        {
// switch_82A0_case_0x24
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x25:
        {
// switch_82A0_case_0x25
            var_8 = 1;
            var_16 = -2;
            var_24 = 4;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x26:
        {
// switch_82A0_case_0x26
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x27:
        {
// switch_82A0_case_0x27
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x28:
        {
// switch_82A0_case_0x28
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x29:
        {
// switch_82A0_case_0x29
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2a:
        {
// switch_82A0_case_0x2a
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2b:
        {
// switch_82A0_case_0x2b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2c:
        {
// switch_82A0_case_0x2c
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2d:
        {
// switch_82A0_case_0x2d
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 3;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2e:
        {
// switch_82A0_case_0x2e
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x2f:
        {
// switch_82A0_case_0x2f
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x30:
        {
// switch_82A0_case_0x30
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x31:
        {
// switch_82A0_case_0x31
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x32:
        {
// switch_82A0_case_0x32
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x33:
        {
// switch_82A0_case_0x33
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x34:
        {
// switch_82A0_case_0x34
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x35:
        {
// switch_82A0_case_0x35
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x36:
        {
// switch_82A0_case_0x36
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x37:
        {
// switch_82A0_case_0x37
            var_8 = 1;
            var_16 = -2;
            var_24 = 3;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x38:
        {
// switch_82A0_case_0x38
            var_8 = 1;
            var_16 = -2;
            var_24 = 1;
            var_32 = 4;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x39:
        {
// switch_82A0_case_0x39
            var_8 = 1;
            var_16 = -2;
            var_24 = 2;
            var_32 = 2;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3a:
        {
// switch_82A0_case_0x3a
            var_8 = 1;
            var_16 = -2;
            var_24 = 9;
            var_32 = 1;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3b:
        {
// switch_82A0_case_0x3b
            var_8 = 1;
            var_16 = -2;
            var_24 = 0;
            var_32 = 6;
            var_40 = arg_0;
            pri = PlayCharacterMotion_(var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3c:
        {
// switch_82A0_case_0x3c
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31600;
            var_32 = 2;
            var_40 = 1;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3d:
        {
// switch_82A0_case_0x3d
            var_8 = arg_3;
            var_16 = 0;
            var_24 = 31776;
            var_32 = 3;
            var_40 = 2;
            var_48 = arg_0;
            pri = PlayPokemonMotion_(var_48, var_40, var_32, var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
        case 0x3e:
        {
// switch_82A0_case_0x3e
            var_8 = 3;
            var_16 = 31920;
            var_24 = arg_0;
            var_32 = 24;
            pri = fun_0F58(var_24, var_16, var_8)
            OP_JUMP switch_82A0_case_default
        }
    }
}
// fun_8BC0
fun_8BC0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_8E90(var_16, var_8)
    pri = 0;
    OP_ADDR_ALT -256
    OP_FILL 256
    pri = 32920;
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
    var_424 = 32976;
    pri = ConcatString(var_424, var_416, var_408)
    OP_PUSH_P_ADR -384
    var_432 = 32992;
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
    OP_JZER lab_8DB8
    OP_PUSH_P_ADR -256
    var_456 = arg_0;
    pri = WaitAnimationState_(var_456, var_448)
// lab_8DB8
    pri = 0;
    return pri;
}
// fun_8DD0
fun_8DD0() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_8E08(var_8)
    pri = 0;
    return pri;
}
// fun_8E08
fun_8E08() {
    var_8 = 33040;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_0EE0(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8E48
fun_8E48() {
    var_8 = arg_1;
    var_16 = 33224;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F58(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8E90
fun_8E90() {
    var_8 = arg_1;
    var_16 = 33352;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_0F58(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_8ED8
fun_8ED8() {
    var_8 = arg_5;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = EasyTalkPlayer(var_24, var_16, var_8)
    OP_ZERO_P_S -8
    pri = arg_3;
    switch (pri) {
// switch_8FD8
        case default:
        {
// switch_8FD8_case_default
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
// switch_8FD8_case_0x0
            OP_CONST_S -8, 1
            OP_JUMP switch_8FD8_case_default
        }
        case 0x1:
        {
// switch_8FD8_case_0x1
            OP_CONST_S -8, 2
            OP_JUMP switch_8FD8_case_default
        }
        case 0x2:
        {
// switch_8FD8_case_0x2
            OP_CONST_S -8, 3
            OP_JUMP switch_8FD8_case_default
        }
        case 0x3:
        {
// switch_8FD8_case_0x3
            OP_CONST_S -8, 4
            OP_JUMP switch_8FD8_case_default
        }
    }
}
// fun_9098
fun_9098() {
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
    pri = fun_24E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    pri = fun_2648()
    pri = 0;
    return pri;
}
// fun_9130
fun_9130() {
    var_8 = arg_10;
    var_16 = arg_9;
    var_24 = arg_4;
    var_32 = arg_3;
    var_40 = arg_2;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_8ED8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = arg_8;
    var_72 = arg_7;
    var_80 = arg_6;
    var_88 = arg_5;
    var_96 = arg_1;
    var_104 = arg_0;
    var_112 = 48;
    pri = fun_9098(var_104, var_96, var_88, var_80, var_72, var_64)
    pri = 0;
    return pri;
}
// fun_91D8
fun_91D8() {
    pri = CommandNOP()
    var_8 = arg_0;
    pri = EasyTalkTerminate(var_8)
    OP_JUMP lab_9228
// lab_9228
    var_8 = 8802641224559852288;
    pri = EasyTalkTerminate(var_8)
    var_16 = 33456;
    var_24 = 8802641224559852288;
    pri = FindParallelWait(var_24, var_16)
    OP_JNZ lab_92A0
    OP_JUMP lab_92D0
// lab_92A0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_9228
// lab_92D0
    pri = arg_3;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGRTR lab_9358
    var_8 = 1;
    var_16 = 3;
    var_24 = 0;
    var_32 = arg_3;
    var_40 = arg_0;
    var_48 = 40;
    pri = fun_6E90(var_40, var_32, var_24, var_16, var_8)
    var_56 = arg_0;
    var_64 = 8;
    pri = fun_1B38(var_56)
// lab_9358
    var_8 = 15;
    pri = TempWorkGet(var_8)
    alt = 1;
    OP_JEQ lab_93C0
    var_16 = -1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1580(var_24, var_16)
// lab_93C0
    var_8 = -1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_1580(var_16, var_8)
    OP_CONST_S -8, 4
    pri = arg_1;
    OP_JZER lab_9480
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0FD0(var_40)
    var_56 = 0;
    var_64 = 0;
    var_72 = var_8;
    var_80 = arg_2;
    var_88 = arg_0;
    var_96 = 40;
    pri = fun_0D10(var_88, var_80, var_72, var_64, var_56)
// lab_9480
    pri = IsPlayerRideBicycle()
    OP_JZER lab_94C0
    pri = 0;
    return pri;
// lab_94C0
    pri = CommandNOP()
    var_8 = 15;
    pri = TempWorkGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_9608
    var_16 = 1;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 33576;
    var_40 = 8802641224559852288;
    var_48 = 16;
    pri = fun_0EE0(var_40, var_32)
    var_64 = 7;
    pri = TempWorkGet(var_64)
    var_16 = pri;
    pri = var_16;
    alt = 23;
    OP_JSLESS lab_95D0
    var_72 = 12;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_9608
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0DB8(var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0DB8(var_24)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0FD0(var_40)
    pri = 0;
    return pri;
// lab_95D0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1580(var_16, var_8)
}
// fun_9690
fun_9690() {
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
    pri = fun_9130(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    var_112 = 1;
    var_120 = 8;
    pri = fun_26E0(var_112)
    var_128 = 0;
    pri = fun_27A0()
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
    pri = fun_91D8(var_184, var_176, var_168, var_160)
    pri = 0;
    return pri;
}
// fun_9808
fun_9808() {
    pri = arg_1;
    OP_EQ_P_C_PRI 4
    OP_JZER lab_98A0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0FD0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 2;
    var_72 = arg_0;
    var_80 = 56;
    pri = fun_2F78(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_98A0
    var_8 = 8;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = arg_2;
    OP_EQ_P_C_PRI 6
    OP_JZER lab_99F8
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_9960
    var_24 = 33712;
    var_32 = 8802641224559852288;
    pri = IsAnimationStateName_(var_32, var_24)
    OP_JNZ lab_9960
    pri = 1;
    OP_JUMP lab_9968
// lab_99F8
    pri = 0;
    return pri;
// lab_9960
    pri = 0;
// lab_9968
    OP_JZER lab_99F8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0FD0(var_8)
    var_24 = 1;
    var_32 = -1;
    var_40 = -1;
    var_48 = 3;
    var_56 = 0;
    var_64 = 22;
    var_72 = 8802641224559852288;
    var_80 = 56;
    pri = fun_2F78(var_72, var_64, var_56, var_48, var_40, var_32, var_24)
}
// fun_9A08
fun_9A08() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_6;
    var_32 = arg_5;
    var_40 = arg_4;
    var_48 = arg_1;
    var_56 = arg_0;
    var_64 = 56;
    pri = fun_9D88(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_9A70
fun_9A70() {
    var_16 = arg_0;
    pri = ItemHaveNeverAdded(var_16)
    var_8 = pri;
    pri = arg_1;
    OP_EQ_P_C_PRI 8
    OP_JZER lab_9AE0
    OP_CONST_S -8, 1
// lab_9AE0
    pri = arg_0;
    OP_JNZ lab_9B00
    OP_ZERO_P_S -8
// lab_9B00
    pri = var_8;
    OP_JZER lab_9B88
    var_8 = arg_0;
    pri = ItemOpenDescWindow(var_8)
    var_16 = 30;
    var_24 = 8;
    pri = fun_0060(var_16)
    var_32 = 0;
    pri = fun_0138()
    pri = ItemCloseDescWindow()
// lab_9B88
    pri = 0;
    return pri;
}
// fun_9BA0
fun_9BA0() {
    var_8 = 33816;
    var_16 = 8;
    pri = fun_2888(var_8)
    var_24 = 0;
    pri = fun_28C0()
    var_32 = 0;
    var_40 = 8;
    pri = fun_2990(var_32)
    var_48 = 1;
    var_56 = arg_1;
    var_64 = 1;
    var_72 = 24;
    pri = fun_2AD0(var_64, var_56, var_48)
    OP_CONST_S -8, 6088246355923164688
    OP_CONST_S -16, -3980990967343358874
    pri = arg_3;
    OP_JZER lab_9CB8
    OP_CONST_S -8, 6088249654458049321
    OP_CONST_S -16, -3980992066854987085
// lab_9CB8
    var_8 = 6;
    var_16 = 4;
    var_24 = arg_0;
    var_32 = 24;
    pri = fun_9808(var_24, var_16, var_8)
    var_40 = 2;
    var_48 = 1;
    var_56 = 9;
    var_64 = var_16;
    var_72 = var_8;
    var_80 = 0;
    var_88 = 0;
    var_96 = 56;
    pri = fun_9A08(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    pri = fun_2960()
    var_112 = arg_2;
    var_120 = 8;
    pri = fun_2F40(var_112)
    pri = 0;
    return pri;
}
// fun_9D88
fun_9D88() {
    var_8 = 33976;
    var_16 = 8;
    pri = fun_2888(var_8)
    var_24 = 0;
    pri = fun_28C0()
    pri = arg_3;
    OP_JNZ lab_9EA8
    var_32 = arg_1;
    var_40 = arg_0;
    pri = ItemAddCheck(var_40, var_32)
    OP_JZER lab_9E70
    var_48 = arg_6;
    var_56 = arg_5;
    var_64 = arg_4;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    var_96 = 48;
    pri = fun_9F18(var_88, var_80, var_72, var_64, var_56, var_48)
    OP_JUMP lab_9E98
// lab_9EA8
    var_8 = arg_6;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A0B8(var_48, var_40, var_32, var_24, var_16, var_8)
// lab_9E70
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_9FE0(var_16, var_8)
// lab_9E98
    OP_JUMP lab_9EF0
// lab_9EF0
    var_8 = 0;
    pri = fun_2960()
    pri = 0;
    return pri;
}
// fun_9F18
fun_9F18() {
    var_8 = arg_5;
    var_16 = arg_4;
    var_24 = arg_3;
    var_32 = arg_2;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 48;
    pri = fun_A0B8(var_48, var_40, var_32, var_24, var_16, var_8)
    OP_CONST_S -8, 1
    pri = var_8;
    OP_JZER lab_9FC8
    var_72 = arg_1;
    var_80 = arg_0;
    pri = ItemAdd(var_80, var_72)
// lab_9FC8
    pri = 0;
    return pri;
}
// fun_9FE0
fun_9FE0() {
    var_8 = arg_1;
    var_16 = arg_0;
    var_24 = 0;
    var_32 = 24;
    pri = fun_29E0(var_24, var_16, var_8)
    var_40 = 3;
    var_48 = 0;
    var_56 = 6146203932443992235;
    var_64 = 24;
    pri = fun_25E8(var_56, var_48, var_40)
    var_72 = 1;
    var_80 = 8;
    pri = fun_26E0(var_72)
    var_88 = 0;
    pri = fun_27A0()
    var_96 = 0;
    var_104 = 8;
    pri = fun_2990(var_96)
    pri = 0;
    return pri;
}
// fun_A0B8
fun_A0B8() {
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A100
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_A3C0(var_8)
// lab_A100
    pri = arg_4;
    OP_JNZ lab_A168
    var_8 = 0;
    var_16 = 8;
    pri = fun_2990(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_29E0(var_40, var_32, var_24)
// lab_A168
    var_8 = arg_0;
    pri = ItemIsWazaMachine(var_8)
    OP_JZER lab_A208
    var_16 = arg_0;
    var_24 = 2;
    var_32 = 16;
    pri = fun_2A30(var_24, var_16)
    var_40 = 3;
    var_48 = 0;
    var_56 = 1318456242711175708;
    var_64 = 24;
    pri = fun_25E8(var_56, var_48, var_40)
    OP_JUMP lab_A2F8
// lab_A208
    pri = arg_4;
    var_8 = pri;
    pri = var_8;
    OP_JNZ lab_A2C0
    OP_CONST_S -8, 1318458441734432130
    pri = arg_1;
    alt = 1;
    OP_JSLEQ lab_A2C0
    OP_CONST_S -8, 1318457342222803919
    var_16 = 0;
    var_24 = 0;
    var_32 = arg_1;
    var_40 = 2;
    pri = WordSetNumber(var_40, var_32, var_24, var_16)
// lab_A2C0
    var_8 = 3;
    var_16 = 0;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_25E8(var_24, var_16, var_8)
// lab_A2F8
    pri = arg_3;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_A338
    var_8 = 0;
    var_16 = 8;
    pri = fun_0768(var_8)
// lab_A338
    var_8 = 1;
    var_16 = 8;
    pri = fun_26E0(var_8)
    var_24 = arg_5;
    var_32 = arg_1;
    var_40 = arg_0;
    var_48 = 24;
    pri = fun_A5C8(var_40, var_32, var_24)
    var_56 = arg_2;
    var_64 = arg_0;
    var_72 = 16;
    pri = fun_9A70(var_64, var_56)
    pri = 0;
    return pri;
}
// fun_A3C0
fun_A3C0() {
    var_8 = arg_0;
    pri = ItemIsEventItem(var_8)
    OP_JZER lab_A420
    var_16 = 34136;
    pri = SoundPostEvent(var_16)
    return pri;
// lab_A420
    var_16 = arg_0;
    pri = ItemGetCategory(var_16)
    var_8 = pri;
    pri = var_8;
    switch (pri) {
// switch_A560
        case default:
        {
// switch_A560_case_default
            var_8 = arg_0;
            pri = GetPocketNumberFromItemNumber_(var_8)
            OP_EQ_P_C_PRI 8
            OP_JZER lab_A550
            var_16 = 34680;
            pri = SoundPostEvent(var_16)
            return pri;
// lab_A550
            OP_JUMP lab_A598
// lab_A598
            var_8 = 34896;
            pri = SoundPostEvent(var_8)
            return pri;
        }
        case 0x1:
        {
// switch_A560_case_0x1
            var_8 = 34352;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A598
        }
        case 0x2:
        {
// switch_A560_case_0x2
            var_8 = 34480;
            pri = SoundPostEvent(var_8)
            return pri;
            OP_JUMP lab_A598
        }
    }
}
// fun_A5C8
fun_A5C8() {
    pri = arg_2;
    OP_JNZ lab_A6B0
    var_8 = 0;
    var_16 = 8;
    pri = fun_2990(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    var_40 = 1;
    var_48 = 24;
    pri = fun_29E0(var_40, var_32, var_24)
    var_64 = arg_0;
    pri = GetPocketNumberFromItemNumber_(var_64)
    var_8 = pri;
    var_72 = var_8;
    var_80 = 2;
    var_88 = 16;
    pri = fun_2A80(var_80, var_72)
    OP_CONST_S 40, -1840022397907466531
// lab_A6B0
    var_8 = 3;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = 24;
    pri = fun_25E8(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_26E0(var_40)
    var_56 = 0;
    pri = fun_27A0()
    pri = 0;
    return pri;
}
// fun_A728
fun_A728() {
    pri = 35080;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_A7B0
// lab_A7B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_A930
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_A920
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_A870
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_A870
    pri = 0;
    OP_JUMP lab_A878
// lab_A930
    pri = 0;
    return pri;
// lab_A920
    OP_JUMP lab_A7A8
// lab_A7A8
    OP_INC_P_S -936
// lab_A870
    pri = 1;
// lab_A878
    OP_JZER lab_A8F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_A8E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_A8F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_A8E8
}
// fun_A950
fun_A950() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_A9E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0418(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0488()
    var_56 = 0;
    pri = fun_1B10()
// lab_A9E8
    pri = arg_4;
    OP_JZER lab_AA20
    var_8 = 1;
    var_16 = 8;
    pri = fun_1C38(var_8)
// lab_AA20
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_AA78
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_AA78
    pri = 0;
    OP_JUMP lab_AA80
// lab_AA78
    pri = 1;
// lab_AA80
    OP_JZER lab_AB48
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_AB48
    var_16 = 0;
    pri = fun_0518()
    OP_JZER lab_AB20
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_1A50(var_32, var_24)
    OP_JUMP lab_AB48
// lab_AB48
    pri = arg_2;
    OP_JZER lab_AC20
    var_8 = 0;
    pri = fun_0518()
    OP_JZER lab_ABF0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_1580(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0C08(var_40)
    OP_JUMP lab_AC20
// lab_AC20
    pri = arg_3;
    OP_JZER lab_AC58
    var_8 = 1;
    var_16 = 8;
    pri = fun_1AD8(var_8)
// lab_AC58
    pri = 0;
    return pri;
// lab_ABF0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_1580(var_16, var_8)
// lab_AB20
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1A50(var_16, var_8)
}
// fun_AC68
fun_AC68() {
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0540(var_8)
    var_24 = 0;
    pri = fun_0578()
    pri = arg_1;
    OP_JZER lab_ACE0
    var_32 = 36000;
    pri = SoundPostEvent(var_32)
// lab_ACE0
    var_8 = 36200;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 0;
    var_32 = 36464;
    var_40 = 8;
    var_48 = 32;
    pri = fun_0418(var_40, var_32, var_24, var_16)
    var_56 = 0;
    pri = fun_0488()
    pri = 0;
    return pri;
}
// fun_AD60
fun_AD60() {
    pri = arg_0;
    alt = -1;
    OP_JEQ lab_ADB0
    var_8 = arg_8;
    var_16 = arg_0;
    var_24 = 16;
    pri = fun_AC68(var_16, var_8)
// lab_ADB0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0DB8(var_8)
    var_24 = arg_6;
    pri = SetPlayerUniform(var_24)
    pri = arg_1;
    alt = -1;
    OP_JEQ lab_AE50
    pri = arg_2;
    alt = -1;
    OP_JEQ lab_AE50
    pri = 1;
    OP_JUMP lab_AE58
// lab_AE50
    pri = 0;
// lab_AE58
    OP_JZER lab_AFF0
    pri = arg_7;
    OP_EQ_P_C_PRI -1
    OP_JZER lab_AF38
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
    pri = fun_0608(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
    OP_JUMP lab_AFE0
// lab_AFF0
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
    pri = fun_0A50(var_56, var_48, var_40, var_32, var_24)
    pri = CallReloadPlayer()
    var_72 = 5;
    var_80 = 8;
    pri = fun_0060(var_72)
// lab_AF38
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
    pri = fun_06A8(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24)
// lab_AFE0
    OP_JUMP lab_B0B0
// lab_B0B0
    pri = arg_5;
    alt = -1;
    OP_JEQ lab_B128
    var_8 = 1;
    var_16 = arg_5;
    pri = float(var_16)
    var_24 = pri;
    var_32 = 8802641224559852288;
    var_40 = 24;
    pri = fun_0B50(var_32, var_24, var_16)
// lab_B128
    var_8 = 36480;
    pri = SoundPostEvent(var_8)
    var_16 = 36752;
    var_24 = 8;
    var_32 = 16;
    pri = fun_03B8(var_24, var_16)
    var_40 = 0;
    pri = fun_0488()
    pri = 0;
    return pri;
}
// fun_B198
fun_B198() {
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
    pri = fun_AD60(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_B238
fun_B238() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_A728(var_24)
    pri = 0;
    return pri;
}
// fun_B2A0
fun_B2A0() {
    pri = g_mode;
    switch (pri) {
// switch_B540
        case default:
        {
// switch_B540_case_default
            pri = CommandNOP()
            OP_JUMP lab_B648
// lab_B648
            pri = 0;
            return pri;
        }
        case 0x8626e36f56a1fcaa:
        {
// switch_B540_case_0x8626e36f56a1fcaa
            var_8 = 0;
            pri = fun_124A0()
            OP_JUMP lab_B648
        }
        case 0x8626e96f56a206dc:
        {
// switch_B540_case_0x8626e96f56a206dc
            var_8 = 0;
            pri = fun_122E0()
            OP_JUMP lab_B648
        }
        case 0x8cba7a3b96d43cc0:
        {
// switch_B540_case_0x8cba7a3b96d43cc0
            var_8 = 0;
            pri = fun_FD58()
            OP_JUMP lab_B648
        }
        case 0x8cba7b3b96d43e73:
        {
// switch_B540_case_0x8cba7b3b96d43e73
            var_8 = 0;
            pri = fun_10F08()
            OP_JUMP lab_B648
        }
        case 0x8cba7f3b96d4453f:
        {
// switch_B540_case_0x8cba7f3b96d4453f
            var_8 = 0;
            pri = fun_CC48()
            OP_JUMP lab_B648
        }
        case 0x8cba803b96d446f2:
        {
// switch_B540_case_0x8cba803b96d446f2
            var_8 = 0;
            pri = fun_DA20()
            OP_JUMP lab_B648
        }
        case 0x8cba813b96d448a5:
        {
// switch_B540_case_0x8cba813b96d448a5
            var_8 = 0;
            pri = fun_EAB8()
            OP_JUMP lab_B648
        }
        case 0xb0ebb053cafb6769:
        {
// switch_B540_case_0xb0ebb053cafb6769
            var_8 = 0;
            pri = fun_121B0()
            OP_JUMP lab_B648
        }
        case 0xe7b5df36dbef0a3e:
        {
// switch_B540_case_0xe7b5df36dbef0a3e
            var_8 = 0;
            pri = fun_D918()
            OP_JUMP lab_B648
        }
        case 0x0:
        {
// switch_B540_case_0x0
            var_8 = 0;
            pri = fun_B658()
            OP_JUMP lab_B648
        }
        case 0x830a381d23af41:
        {
// switch_B540_case_0x830a381d23af41
            var_8 = 0;
            pri = fun_126E8()
            OP_JUMP lab_B648
        }
        case 0x88609655970e99f:
        {
// switch_B540_case_0x88609655970e99f
            var_8 = 0;
            pri = fun_12660()
            OP_JUMP lab_B648
        }
        case 0x30f0b6eed16873cb:
        {
// switch_B540_case_0x30f0b6eed16873cb
            var_8 = 0;
            pri = fun_121E8()
            OP_JUMP lab_B648
        }
        case 0x34e7122774503b75:
        {
// switch_B540_case_0x34e7122774503b75
            var_8 = 0;
            pri = fun_CAC0()
            OP_JUMP lab_B648
        }
        case 0x52467c2afe451401:
        {
// switch_B540_case_0x52467c2afe451401
            var_8 = 0;
            pri = fun_C968()
            OP_JUMP lab_B648
        }
    }
}
// fun_B658
fun_B658() {
    pri = 0;
    return pri;
}
// fun_B670
fun_B670() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A950(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_B6C8
fun_B6C8() {
    pri = 0;
    return pri;
}
// fun_B6E0
fun_B6E0() {
    pri = 0;
    return pri;
}
// fun_B6F8
fun_B6F8() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = EvCameraStart()
    OP_ZERO_P_S -8
    var_32 = -2580759782777728451;
    pri = WorkGet(var_32)
    OP_JNZ lab_B798
    OP_CONST_S -8, 1
// lab_B798
    pri = var_8;
    OP_JZER lab_BEB0
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0418(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0488()
    var_56 = 15;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 0;
    var_80 = 4629475236955501363;
    var_88 = 0;
    OP_PUSH5_C 4658286949600906445, 4632056362491938079, 4660497429767619871, 4658990615052450529, 4637374832176885924
    var_96 = 4661630179631903539;
    var_104 = 1;
    pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 0;
    pri = fun_2E18()
    var_120 = 0;
    var_128 = 4629475236955501363;
    var_136 = 3;
    OP_PUSH5_C 4658243936706027848, 4632056362491938079, 4660517111025757061, 4658947602157571932, 4637374832176885924
    var_144 = 4661640031256088412;
    var_152 = 90;
    pri = EvCameraMove(var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_160 = 80;
    var_168 = 8;
    var_176 = 16;
    pri = fun_03B8(var_168, var_160)
    var_184 = 0;
    pri = fun_0488()
    var_192 = 1;
    var_200 = 1;
    var_208 = -1;
    var_216 = -1;
    var_224 = 0;
    var_232 = 6;
    var_240 = -303377521461947352;
    var_248 = 56;
    pri = fun_4B58(var_240, var_232, var_224, var_216, var_208, var_200, var_192)
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    OP_PUSH2_C -303377521461947352, 8802641224559852288
    var_288 = 48;
    pri = fun_0D60(var_280, var_272, var_264, var_256, var_248, var_240)
    var_296 = 0;
    var_304 = 3;
    var_312 = 0;
    var_320 = 100;
    var_328 = -1;
    OP_PUSH2_C 5394639124719897690, -303377521461947352
    var_336 = 56;
    pri = fun_24E8(var_328, var_320, var_312, var_304, var_296, var_288, var_280)
    var_344 = 8802641224559852288;
    var_352 = 8;
    pri = fun_0DB8(var_344)
    var_360 = 1;
    var_368 = 8;
    pri = fun_26E0(var_360)
    var_376 = 0;
    pri = fun_27A0()
    var_384 = 1;
    var_392 = 3;
    var_400 = 0;
    var_408 = 6;
    var_416 = -303377521461947352;
    var_424 = 40;
    pri = fun_6E90(var_416, var_408, var_400, var_392, var_384)
    var_432 = -303377521461947352;
    var_440 = 8;
    pri = fun_0FD0(var_432)
    var_448 = 0;
    var_456 = 4630629284360015053;
    var_464 = 0;
    OP_PUSH5_C 4658059306713491702, 4632858566175563448, 4661479469573084283, 4659427604953793823, 4641130763897368740
    var_472 = 4660781587552702300;
    var_480 = 1;
    pri = EvCameraMove(var_480, var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 0;
    pri = fun_2E18()
    var_496 = 0;
    var_504 = 4630629284360015053;
    var_512 = 3;
    OP_PUSH5_C 4658024386224193536, 4632858566175563448, 4661454356727505879, 4659392728444960768, 4641129356522485187
    var_520 = 4660731427832243159;
    var_528 = 90;
    pri = EvCameraMove(var_528, var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 0;
    var_544 = 0;
    var_552 = 0;
    var_560 = 0;
    OP_PUSH2_C 8802641224559852288, -303377521461947352
    var_568 = 48;
    pri = fun_0D60(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 0;
    var_584 = 3;
    var_592 = 0;
    var_600 = 100;
    var_608 = -1;
    OP_PUSH2_C 5394638025208269479, -303377521461947352
    var_616 = 56;
    pri = fun_24E8(var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_624 = 1;
    var_632 = 8;
    pri = fun_26E0(var_624)
    var_640 = 0;
    pri = fun_27A0()
    var_648 = -303377521461947352;
    var_656 = 8;
    pri = fun_0DB8(var_648)
    var_664 = 0;
    var_672 = 20;
    OP_PUSH2_C -5887039907420794789, -303377521461947352
    var_680 = 32;
    pri = fun_9BA0(var_672, var_664, var_656, var_648)
    var_688 = 1;
    var_696 = 0;
    var_704 = 100;
    pri = float(var_704)
    var_712 = pri;
    var_720 = 0;
    pri = float(var_720)
    var_728 = pri;
    var_736 = 0;
    var_744 = 2914;
    pri = float(var_744)
    var_752 = pri;
    var_760 = 4900;
    pri = float(var_760)
    var_768 = pri;
    OP_PUSH2_C 4611686018427387904, -303377521461947352
    var_776 = 72;
    pri = fun_0C40(var_768, var_760, var_752, var_744, var_736, var_728, var_720, var_712, var_704)
    var_784 = 40;
    var_792 = 8;
    pri = fun_0060(var_784)
// lab_BEB0
    var_8 = 0;
    var_16 = 1;
    pri = PokePartyGetCount(var_16, var_8)
    alt = 2;
    OP_JSGEQ lab_BF98
    var_24 = 0;
    var_32 = 3;
    var_40 = 0;
    var_48 = 100;
    var_56 = -1;
    OP_PUSH2_C 5393651763277953437, -3123382877661890469
    var_64 = 56;
    pri = fun_24E8(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 1;
    var_80 = 8;
    pri = fun_26E0(var_72)
    var_88 = 0;
    pri = fun_27A0()
    pri = 0;
    return pri;
// lab_BF98
    var_8 = 0;
    var_16 = 4631952216750555136;
    var_24 = 3;
    OP_PUSH5_C 4658221990453937439, 4639481672377565184, 4661243503382647276, 4659935491364896113, 4642832280131584655
    var_32 = 4661243800250786775;
    var_40 = 60;
    pri = EvCameraMove(var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16, var_-24, var_-32)
    var_48 = 1;
    var_56 = 1;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = -3123382877661890469;
    var_96 = 48;
    pri = fun_8ED8(var_88, var_80, var_72, var_64, var_56, var_48)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C 5393650663766325226, -3123382877661890469
    var_144 = 56;
    pri = fun_24E8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_26E0(var_152)
    var_168 = 0;
    pri = fun_27A0()
    var_176 = 0;
    var_184 = 3;
    var_192 = 0;
    var_200 = 100;
    var_208 = -1;
    OP_PUSH2_C 5394636925696641268, -3123382877661890469
    var_216 = 56;
    pri = fun_24E8(var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_224 = 1;
    var_232 = 8;
    pri = fun_26E0(var_224)
    var_240 = 0;
    pri = fun_27A0()
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = -3123382877661890469;
    var_280 = 32;
    pri = fun_91D8(var_272, var_264, var_256, var_248)
    var_288 = 8;
    var_296 = 8;
    pri = fun_0540(var_288)
    var_304 = 0;
    pri = fun_0578()
    var_312 = 36768;
    pri = SoundPostEvent(var_312)
    var_320 = 1;
    var_328 = 0;
    var_336 = 37032;
    var_344 = 8;
    var_352 = 32;
    pri = fun_0418(var_344, var_336, var_328, var_320)
    var_360 = 0;
    pri = fun_0488()
    var_368 = 1;
    var_376 = 1;
    var_384 = -154;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 2870;
    pri = float(var_400)
    var_408 = pri;
    var_416 = 4350;
    pri = float(var_416)
    var_424 = pri;
    var_432 = 8802641224559852288;
    var_440 = 48;
    pri = fun_0AA0(var_432, var_424, var_416, var_408, var_400, var_392)
    var_448 = 1;
    var_456 = 0;
    var_464 = 16;
    pri = fun_02A8(var_456, var_448)
    var_472 = 1;
    OP_PUSH2_C 8802641224559852288, -3123382877661890469
    var_480 = 24;
    pri = fun_0B90(var_472, var_464, var_456)
    var_488 = 3;
    var_496 = 1;
    pri = EvCameraEnd(var_496, var_488)
    var_504 = 8;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 37048;
    pri = SoundPostEvent(var_520)
    var_528 = 37320;
    var_536 = 8;
    var_544 = 16;
    pri = fun_03B8(var_536, var_528)
    var_552 = 0;
    pri = fun_0488()
    var_560 = 1;
    var_568 = 1;
    var_576 = 0;
    var_584 = 0;
    var_592 = 0;
    var_600 = -3123382877661890469;
    var_608 = 48;
    pri = fun_8ED8(var_600, var_592, var_584, var_576, var_568, var_560)
    var_616 = 0;
    var_624 = 3;
    var_632 = 0;
    var_640 = 100;
    var_648 = -1;
    OP_PUSH2_C 5394635826185013057, -3123382877661890469
    var_656 = 56;
    pri = fun_24E8(var_648, var_640, var_632, var_624, var_616, var_608, var_600)
    var_664 = 1;
    var_672 = 8;
    pri = fun_26E0(var_664)
    var_680 = 0;
    pri = fun_27A0()
    var_688 = 0;
    var_696 = 0;
    var_704 = 0;
    var_712 = -3123382877661890469;
    var_720 = 32;
    pri = fun_91D8(var_712, var_704, var_696, var_688)
    pri = var_8;
    OP_JZER lab_C588
    var_728 = -303377521461947352;
    var_736 = 8;
    pri = fun_0DB8(var_728)
// lab_C588
    pri = 1;
    return pri;
}
// fun_C5A0
fun_C5A0() {
    pri = 0;
    return pri;
}
// fun_C5B8
fun_C5B8() {
    var_8 = -2580759782777728451;
    pri = WorkGet(var_8)
    OP_JNZ lab_C628
    var_16 = 10;
    var_24 = -2580759782777728451;
    pri = WorkSet(var_24, var_16)
// lab_C628
    var_8 = -6545290045693462799;
    pri = FlagGet(var_8)
    OP_EQ_P_C_PRI 1
    OP_JZER lab_C698
    var_16 = 1350;
    var_24 = 8;
    pri = fun_B238(var_16)
    OP_JUMP lab_C6E0
// lab_C698
    var_8 = 1340;
    var_16 = 8;
    pri = fun_B238(var_8)
    var_24 = -3293621181990616472;
    pri = FlagSet(var_24)
// lab_C6E0
    var_8 = 5871714809546737952;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
// fun_C718
fun_C718() {
    var_8 = -3293621181990616472;
    pri = FlagReset(var_8)
    var_16 = 1330;
    var_24 = 8;
    pri = fun_B238(var_16)
    var_32 = 5871714809546737952;
    pri = FlagReset(var_32)
    pri = 0;
    return pri;
}
// fun_C7A0
fun_C7A0() {
    OP_PUSH2_C -303377521461947352, -6925055579901216630
    pri = SetBamiriInfoToChara(var_0, var_-8)
    pri = 0;
    return pri;
}
// fun_C7E8
fun_C7E8() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 2850;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 3800;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_80 = 72;
    pri = fun_0C40(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0DB8(var_88)
    var_104 = 3;
    var_112 = 20;
    pri = EvCameraEnd(var_112, var_104)
    pri = 0;
    return pri;
}
// fun_C900
fun_C900() {
    var_8 = -90;
    var_16 = -1;
    var_24 = 2850;
    var_32 = 3800;
    var_40 = -1;
    var_48 = -1;
    var_56 = 8;
    var_64 = 56;
    pri = fun_B198(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_C968
fun_C968() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_B670()
    var_16 = 0;
    pri = fun_B6C8()
    var_24 = 0;
    pri = fun_B6E0()
    var_32 = 0;
    pri = fun_B6F8()
    OP_JZER lab_CA50
    var_40 = 0;
    pri = fun_C5A0()
    var_48 = 0;
    pri = fun_C5B8()
    var_56 = 0;
    pri = fun_C7A0()
    OP_JUMP lab_CA98
// lab_CA50
    var_8 = 0;
    pri = fun_C5B8()
    var_16 = 0;
    pri = fun_C718()
    var_24 = 0;
    pri = fun_C7E8()
// lab_CA98
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_CAC0
fun_CAC0() {
    var_8 = 0;
    pri = fun_B6C8()
    var_16 = 0;
    pri = fun_C5B8()
    var_24 = 2183196719354992197;
    pri = VanishFlagSet(var_24)
    var_32 = -7205741670279695942;
    pri = VanishFlagSet(var_32)
    var_40 = -1397410882338721035;
    pri = VanishFlagReset(var_40)
    var_48 = 2183193420820107564;
    pri = VanishFlagSet(var_48)
    var_56 = 20;
    pri = SetNpcLicenseCardFlag(var_56)
    var_64 = 999;
    var_72 = -2580759782777728451;
    pri = WorkSet(var_72, var_64)
    var_80 = -6527131671004063671;
    pri = FlagReset(var_80)
    var_88 = -3293621181990616472;
    pri = FlagReset(var_88)
    pri = 0;
    return pri;
}
// fun_CC48
fun_CC48() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A950(var_40, var_32, var_24, var_16, var_8)
    var_56 = 3932988810004887490;
    var_64 = 8;
    pri = fun_0878(var_56)
    var_72 = -2963507660619991057;
    var_80 = 8;
    pri = fun_0878(var_72)
    var_88 = 0;
    pri = fun_08A8()
    var_96 = 37336;
    pri = SoundPostEvent(var_96)
    pri = EvCameraStart()
    var_104 = 0;
    var_112 = 4631952216750555136;
    var_120 = 3;
    OP_PUSH5_C 4658221902493007217, 4639481672377565184, 4663261217170779013, 4659935535345361224, 4642818206382749123
    var_128 = 4663261634985197568;
    var_136 = 90;
    pri = EvCameraMove(var_136, var_128, var_120, var_112, var_104, var_96, var_88, var_80, var_72, var_64)
    var_152 = 37496;
    var_160 = 1;
    var_168 = 0;
    var_176 = 1;
    var_184 = -1;
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = 4658375240384616858;
    var_224 = 0;
    OP_PUSH2_C 4663412213102621491, 4658331259919505818
    var_232 = 0;
    OP_PUSH2_C 4663566144730510131, 4658071995077676237
    var_240 = 0;
    OP_PUSH2_C 4663673127211892736, 4657613278826568090
    var_248 = 0;
    var_256 = 4663684342230496051;
    var_264 = 4;
    var_272 = 168;
    pri = fun_1B68(var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104)
    var_8 = pri;
    var_280 = 1;
    var_288 = 4596373779694328218;
    var_296 = -1;
    var_304 = 4608083138725491507;
    var_312 = var_8;
    var_320 = -2963507660619991057;
    var_328 = 48;
    pri = fun_0CB8(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 10;
    var_344 = 8;
    pri = fun_0060(var_336)
    var_360 = 37544;
    var_368 = 1;
    var_376 = 0;
    var_384 = 1;
    var_392 = -1;
    var_400 = 4658375680189267968;
    var_408 = 0;
    OP_PUSH2_C 4663632445281665024, 4658331699724156928
    var_416 = 0;
    OP_PUSH2_C 4663676425746776064, 4658067816933490688
    var_424 = 0;
    OP_PUSH2_C 4663676425746776064, 4657843736463749939
    var_432 = 0;
    OP_PUSH2_C 4663676425746776064, 4657485295673094963
    var_440 = 0;
    var_448 = 4663676425746776064;
    var_456 = 5;
    var_464 = 168;
    pri = fun_1B68(var_456, var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_16 = pri;
    var_472 = 1;
    var_480 = 4596373779694328218;
    var_488 = -1;
    var_496 = 4608083138725491507;
    var_504 = var_16;
    var_512 = 3932988810004887490;
    var_520 = 48;
    pri = fun_0CB8(var_512, var_504, var_496, var_488, var_480, var_472)
    var_528 = -2963507660619991057;
    var_536 = 8;
    pri = fun_0DB8(var_528)
    var_544 = 3932988810004887490;
    var_552 = 8;
    pri = fun_0DB8(var_544)
    var_560 = 0;
    var_568 = 0;
    var_576 = 0;
    var_584 = 0;
    OP_PUSH2_C -2963507660619991057, 8802641224559852288
    var_592 = 48;
    pri = fun_0D60(var_584, var_576, var_568, var_560, var_552, var_544)
    var_600 = 0;
    var_608 = 0;
    var_616 = 0;
    var_624 = 0;
    OP_PUSH2_C 8802641224559852288, -2963507660619991057
    var_632 = 48;
    pri = fun_0D60(var_624, var_616, var_608, var_600, var_592, var_584)
    var_640 = 0;
    var_648 = 0;
    var_656 = 0;
    var_664 = 0;
    OP_PUSH2_C 8802641224559852288, 3932988810004887490
    var_672 = 48;
    pri = fun_0D60(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 8802641224559852288;
    var_688 = 8;
    pri = fun_0DB8(var_680)
    var_696 = -2963507660619991057;
    var_704 = 8;
    pri = fun_0DB8(var_696)
    var_712 = 3932988810004887490;
    var_720 = 8;
    pri = fun_0DB8(var_712)
    var_728 = 0;
    pri = fun_2E18()
    var_736 = 1;
    var_744 = 1;
    var_752 = -1;
    var_760 = -1;
    var_768 = 0;
    var_776 = 0;
    var_784 = -2963507660619991057;
    var_792 = 56;
    pri = fun_4B58(var_784, var_776, var_768, var_760, var_752, var_744, var_736)
    var_800 = 0;
    var_808 = 3;
    var_816 = 0;
    var_824 = 100;
    var_832 = -1;
    OP_PUSH2_C 3052823229651651514, -2963507660619991057
    var_840 = 56;
    pri = fun_24E8(var_832, var_824, var_816, var_808, var_800, var_792, var_784)
    var_848 = 1;
    var_856 = 8;
    pri = fun_26E0(var_848)
    var_864 = 0;
    pri = fun_27A0()
    var_872 = -1;
    var_880 = 0;
    var_888 = 0;
    var_896 = -7819510558539344989;
    var_904 = 101;
    var_912 = 40;
    pri = fun_2B20(var_904, var_896, var_888, var_880, var_872)
    var_920 = 0;
    pri = fun_2CD8()
    OP_JZER lab_D3C8
    var_928 = 0;
    pri = fun_2DC8()
// lab_D3C8
    var_8 = 37592;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 1;
    var_32 = 4635942124545428685;
    var_40 = 2800;
    pri = float(var_40)
    var_48 = pri;
    OP_PUSH2_C 4663066636598011494, 8802641224559852288
    var_56 = 48;
    pri = fun_0AA0(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 8802641224559852288;
    var_72 = 8;
    pri = fun_0DB8(var_64)
    var_80 = 0;
    var_88 = 0;
    var_96 = 0;
    var_104 = 0;
    OP_PUSH2_C 8802641224559852288, -2963507660619991057
    var_112 = 48;
    pri = fun_0D60(var_104, var_96, var_88, var_80, var_72, var_64)
    var_120 = -2963507660619991057;
    var_128 = 8;
    pri = fun_0DB8(var_120)
    var_136 = 80;
    var_144 = 8;
    var_152 = 16;
    pri = fun_03B8(var_144, var_136)
    var_160 = 0;
    pri = fun_0488()
    var_168 = 1;
    var_176 = 1;
    var_184 = -1;
    var_192 = -1;
    var_200 = 0;
    var_208 = 1;
    var_216 = -2963507660619991057;
    var_224 = 56;
    pri = fun_4B58(var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_232 = 0;
    var_240 = 3;
    var_248 = 0;
    var_256 = 100;
    var_264 = -1;
    OP_PUSH2_C 3052822130140023303, -2963507660619991057
    var_272 = 56;
    pri = fun_24E8(var_264, var_256, var_248, var_240, var_232, var_224, var_216)
    var_280 = 1;
    var_288 = 8;
    pri = fun_26E0(var_280)
    var_296 = 0;
    pri = fun_27A0()
    var_304 = 1;
    var_312 = 3;
    var_320 = 0;
    var_328 = 1;
    var_336 = -2963507660619991057;
    var_344 = 40;
    pri = fun_6E90(var_336, var_328, var_320, var_312, var_304)
    var_352 = -2963507660619991057;
    var_360 = 8;
    pri = fun_0FD0(var_352)
    var_368 = 1;
    var_376 = 0;
    var_384 = 100;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 0;
    pri = float(var_400)
    var_408 = pri;
    var_416 = 0;
    OP_PUSH4_C 4658360287026479104, 4664204191328108544, 4611686018427387904, 3932988810004887490
    var_424 = 72;
    pri = fun_0C40(var_416, var_408, var_400, var_392, var_384, var_376, var_368, var_360, var_352)
    var_432 = 10;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 1;
    var_456 = 0;
    var_464 = 100;
    pri = float(var_464)
    var_472 = pri;
    var_480 = 0;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 0;
    OP_PUSH4_C 4658358088003223552, 4664204191328108544, 4611686018427387904, -2963507660619991057
    var_504 = 72;
    pri = fun_0C40(var_496, var_488, var_480, var_472, var_464, var_456, var_448, var_440, var_432)
    var_512 = -2963507660619991057;
    var_520 = 8;
    pri = fun_0DB8(var_512)
    var_528 = 3932988810004887490;
    var_536 = 8;
    pri = fun_0DB8(var_528)
    var_544 = 3932988810004887490;
    var_552 = 8;
    pri = fun_09F8(var_544)
    var_560 = -2963507660619991057;
    var_568 = 8;
    pri = fun_09F8(var_560)
    var_576 = 20;
    var_584 = -2580759782777728451;
    pri = WorkSet(var_584, var_576)
    var_592 = 3;
    var_600 = 30;
    pri = EvCameraEnd(var_600, var_592)
    pri = 0;
    return pri;
}
// fun_D918
fun_D918() {
    var_8 = 0;
    var_16 = 0;
    var_24 = -2963506561108362846;
    var_32 = 24;
    pri = fun_8BC0(var_24, var_16, var_8)
    var_40 = 0;
    var_48 = 0;
    var_56 = 3932987710493259279;
    var_64 = 24;
    pri = fun_8BC0(var_56, var_48, var_40)
    var_72 = -2963506561108362846;
    var_80 = 8;
    pri = fun_0FD0(var_72)
    var_88 = 3932987710493259279;
    var_96 = 8;
    pri = fun_0FD0(var_88)
    var_104 = 30;
    var_112 = -2580759782777728451;
    pri = WorkSet(var_112, var_104)
    pri = 0;
    return pri;
}
// fun_DA20
fun_DA20() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A950(var_40, var_32, var_24, var_16, var_8)
    pri = EvCameraStart()
    var_56 = 37752;
    pri = SoundPostEvent(var_56)
    var_64 = 1;
    var_72 = 0;
    var_80 = 4641240890982006784;
    var_88 = 0;
    var_96 = 0;
    OP_PUSH4_C 4658602179584589824, 4666127786920902656, 4608083138725491507, 3932987710493259279
    var_104 = 72;
    pri = fun_0C40(var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 30;
    var_120 = 8;
    pri = fun_0060(var_112)
    var_128 = 1;
    var_136 = 0;
    var_144 = 4641240890982006784;
    var_152 = 0;
    var_160 = 0;
    OP_PUSH4_C 4658140384700923904, 4666073910851141632, 4608083138725491507, -2963506561108362846
    var_168 = 72;
    pri = fun_0C40(var_160, var_152, var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_176 = 3932987710493259279;
    var_184 = 8;
    pri = fun_0DB8(var_176)
    var_192 = 0;
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    OP_PUSH2_C 3932987710493259279, 8802641224559852288
    var_224 = 48;
    pri = fun_0D60(var_216, var_208, var_200, var_192, var_184, var_176)
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    var_256 = 0;
    OP_PUSH2_C 8802641224559852288, 3932987710493259279
    var_264 = 48;
    pri = fun_0D60(var_256, var_248, var_240, var_232, var_224, var_216)
    var_272 = 8802641224559852288;
    var_280 = 8;
    pri = fun_0DB8(var_272)
    var_288 = -2963506561108362846;
    var_296 = 8;
    pri = fun_0DB8(var_288)
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    OP_PUSH2_C 8802641224559852288, -2963506561108362846
    var_336 = 48;
    pri = fun_0D60(var_328, var_320, var_312, var_304, var_296, var_288)
    var_344 = 3932987710493259279;
    var_352 = 8;
    pri = fun_0DB8(var_344)
    var_360 = 1;
    var_368 = 1;
    var_376 = -1;
    var_384 = -1;
    var_392 = 0;
    var_400 = 0;
    var_408 = 3932987710493259279;
    var_416 = 56;
    pri = fun_4B58(var_408, var_400, var_392, var_384, var_376, var_368, var_360)
    var_424 = 0;
    var_432 = 3;
    var_440 = 0;
    var_448 = 100;
    var_456 = -1;
    OP_PUSH2_C 3201903531103095608, 3932987710493259279
    var_464 = 56;
    pri = fun_24E8(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 1;
    var_480 = 8;
    pri = fun_26E0(var_472)
    var_488 = 0;
    pri = fun_27A0()
    var_496 = -2963506561108362846;
    var_504 = 8;
    pri = fun_0DB8(var_496)
    var_512 = -1;
    var_520 = 0;
    var_528 = 0;
    var_536 = -7819510558539344989;
    var_544 = 103;
    var_552 = 40;
    pri = fun_2B20(var_544, var_536, var_528, var_520, var_512)
    var_560 = 0;
    pri = fun_2CD8()
    OP_JZER lab_DEF8
    var_568 = 20;
    var_576 = -2580759782777728451;
    pri = WorkSet(var_576, var_568)
    var_584 = 0;
    pri = fun_2DC8()
// lab_DEF8
    var_8 = 37912;
    pri = SoundPostEvent(var_8)
    var_16 = 1;
    var_24 = 1;
    OP_PUSH4_C -4587338432941916160, 4658382936966011290, 4666302004538323763, 8802641224559852288
    var_32 = 48;
    pri = fun_0AA0(var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_40 = 0;
    var_48 = 0;
    var_56 = 0;
    var_64 = 0;
    OP_PUSH2_C 8802641224559852288, 3932987710493259279
    var_72 = 48;
    pri = fun_0D60(var_64, var_56, var_48, var_40, var_32, var_24)
    var_80 = 3932987710493259279;
    var_88 = 8;
    pri = fun_0DB8(var_80)
    var_96 = 0;
    var_104 = 0;
    var_112 = -2963506561108362846;
    var_120 = 24;
    pri = fun_8BC0(var_112, var_104, var_96)
    var_128 = 0;
    var_136 = 0;
    var_144 = 3932987710493259279;
    var_152 = 24;
    pri = fun_8BC0(var_144, var_136, var_128)
    var_160 = -2963506561108362846;
    var_168 = 8;
    pri = fun_0FD0(var_160)
    var_176 = 3932987710493259279;
    var_184 = 8;
    pri = fun_0FD0(var_176)
    var_192 = 80;
    var_200 = 8;
    var_208 = 16;
    pri = fun_03B8(var_200, var_192)
    var_216 = 0;
    pri = fun_0488()
    var_224 = 1;
    var_232 = 1;
    var_240 = -1;
    var_248 = -1;
    var_256 = 0;
    var_264 = 11;
    var_272 = 3932987710493259279;
    var_280 = 56;
    pri = fun_4B58(var_272, var_264, var_256, var_248, var_240, var_232, var_224)
    var_288 = 0;
    var_296 = 3;
    var_304 = 0;
    var_312 = 100;
    var_320 = -1;
    OP_PUSH2_C 3201906829637980241, 3932987710493259279
    var_328 = 56;
    pri = fun_24E8(var_320, var_312, var_304, var_296, var_288, var_280, var_272)
    var_336 = 1;
    var_344 = 8;
    pri = fun_26E0(var_336)
    var_352 = 0;
    pri = fun_27A0()
    var_360 = 1;
    var_368 = 3;
    var_376 = 0;
    var_384 = 11;
    var_392 = 3932987710493259279;
    var_400 = 40;
    pri = fun_6E90(var_392, var_384, var_376, var_368, var_360)
    var_408 = 3932987710493259279;
    var_416 = 8;
    pri = fun_0FD0(var_408)
    var_424 = 1;
    var_432 = 0;
    var_440 = 100;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 0;
    pri = float(var_456)
    var_464 = pri;
    var_472 = 0;
    OP_PUSH4_C 4658580189352034304, 4666773145270825779, 4611686018427387904, 3932987710493259279
    var_480 = 72;
    pri = fun_0C40(var_472, var_464, var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_488 = 15;
    var_496 = 8;
    pri = fun_0060(var_488)
    var_504 = 1;
    var_512 = 0;
    var_520 = 100;
    pri = float(var_520)
    var_528 = pri;
    var_536 = 0;
    pri = float(var_536)
    var_544 = pri;
    var_552 = 0;
    OP_PUSH4_C 4658140384700923904, 4666861271127792026, 4611686018427387904, -2963506561108362846
    var_560 = 72;
    pri = fun_0C40(var_552, var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_568 = 45;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 0;
    var_592 = 4631952216750555136;
    var_600 = 3;
    OP_PUSH5_C 4658221682590681661, 4639481672377565184, 4666465925229350748, 4659935579325826335, 4642788299666473615
    var_608 = 4666466073663420498;
    var_616 = 75;
    pri = EvCameraMove(var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560, var_552, var_544)
    var_624 = 0;
    var_632 = 0;
    var_640 = 0;
    var_648 = 0;
    OP_PUSH2_C -5196931039515366606, 8802641224559852288
    var_656 = 48;
    pri = fun_0D60(var_648, var_640, var_632, var_624, var_616, var_608)
    var_664 = 8802641224559852288;
    var_672 = 8;
    pri = fun_0DB8(var_664)
    var_680 = 0;
    pri = fun_2E18()
    var_688 = 3932987710493259279;
    var_696 = 8;
    pri = fun_0DB8(var_688)
    var_704 = -2963506561108362846;
    var_712 = 8;
    pri = fun_0DB8(var_704)
    var_720 = 1;
    var_728 = 0;
    var_736 = 0;
    OP_PUSH2_C 4607182418800017408, -5196931039515366606
    var_744 = 0;
    var_752 = 48;
    pri = fun_16C8(var_744, var_736, var_728, var_720, var_712, var_704)
    var_760 = 30;
    var_768 = 8;
    pri = fun_0060(var_760)
    var_776 = 0;
    var_784 = 0;
    var_792 = 0;
    var_800 = 122;
    pri = SoundPlayPokeVoice(var_800, var_792, var_784, var_776)
    var_808 = 0;
    var_816 = 3;
    var_824 = 0;
    var_832 = 100;
    var_840 = -1;
    OP_PUSH2_C -8206567642011559854, -5196931039515366606
    var_848 = 56;
    pri = fun_24E8(var_840, var_832, var_824, var_816, var_808, var_800, var_792)
    var_856 = 1;
    var_864 = 8;
    pri = fun_26E0(var_856)
    var_872 = 0;
    pri = fun_27A0()
    var_880 = 0;
    var_888 = 0;
    var_896 = 0;
    var_904 = 90;
    pri = float(var_904)
    var_912 = pri;
    var_920 = -5196931039515366606;
    var_928 = 40;
    pri = fun_0D10(var_920, var_912, var_904, var_896, var_888)
    var_936 = -5196931039515366606;
    var_944 = 8;
    pri = fun_0DB8(var_936)
    var_952 = 1;
    var_960 = 0;
    var_968 = 4641240890982006784;
    var_976 = 0;
    var_984 = 0;
    OP_PUSH4_C 4658374140872989082, 4666869462489418957, 4607182418800017408, -5196931039515366606
    var_992 = 72;
    pri = fun_0C40(var_984, var_976, var_968, var_960, var_952, var_944, var_936, var_928, var_920)
    var_1000 = -5196931039515366606;
    var_1008 = 8;
    pri = fun_0DB8(var_1000)
    var_1016 = 2183196719354992197;
    var_1024 = 8;
    pri = fun_09F8(var_1016)
    var_1040 = 38072;
    pri = GetFnvHash64(var_1040)
    var_8 = pri;
    var_1048 = var_8;
    pri = EvCameraAddIgnoreScrollStopHash(var_1048)
    var_1056 = 0;
    var_1064 = 4630896685587890176;
    var_1072 = 2;
    OP_PUSH5_C 4657340402030786642, 4644264811841181450, 4666465853761094943, 4659065777667325297, 4643813572269142180
    var_1080 = 4666465853761094943;
    var_1088 = 1;
    pri = EvCameraMove(var_1088, var_1080, var_1072, var_1064, var_1056, var_1048, var_1040, var_1032, var_1024, var_1016)
    var_1096 = 0;
    pri = fun_2E18()
    var_1104 = 15;
    var_1112 = 8;
    pri = fun_0060(var_1104)
    var_1120 = 1;
    var_1128 = 38264;
    var_1136 = 5953194496154584116;
    var_1144 = 24;
    pri = fun_0F18(var_1136, var_1128, var_1120)
    var_1152 = 38368;
    pri = SoundPostEvent(var_1152)
    var_1160 = 60;
    var_1168 = 8;
    pri = fun_0060(var_1160)
    var_1176 = 3932987710493259279;
    var_1184 = 8;
    pri = fun_09F8(var_1176)
    var_1192 = -2963506561108362846;
    var_1200 = 8;
    pri = fun_09F8(var_1192)
    var_1208 = -5196931039515366606;
    var_1216 = 8;
    pri = fun_09F8(var_1208)
    var_1224 = 0;
    var_1232 = 4631952216750555136;
    var_1240 = 0;
    OP_PUSH5_C 4658222100405100216, 4639481672377565184, 4666302004538323763, 4659935557335593779, 4642836854099956204
    var_1248 = 4666302004538323763;
    var_1256 = 15;
    pri = EvCameraMove(var_1256, var_1248, var_1240, var_1232, var_1224, var_1216, var_1208, var_1200, var_1192, var_1184)
    var_1264 = 30;
    var_1272 = 8;
    pri = fun_0060(var_1264)
    var_1280 = 3;
    var_1288 = 0;
    pri = EvCameraEnd(var_1288, var_1280)
    var_1296 = 40;
    var_1304 = -2580759782777728451;
    pri = WorkSet(var_1304, var_1296)
    pri = 0;
    return pri;
}
// fun_EAB8
fun_EAB8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A950(var_40, var_32, var_24, var_16, var_8)
    var_56 = 1;
    var_64 = 0;
    var_72 = 2400;
    pri = float(var_72)
    var_80 = pri;
    var_88 = 350;
    pri = float(var_88)
    var_96 = pri;
    var_104 = 11475;
    pri = float(var_104)
    var_112 = pri;
    var_120 = -2963505461596734635;
    var_128 = 48;
    pri = fun_0AF8(var_120, var_112, var_104, var_96, var_88, var_80)
    var_136 = 1;
    var_144 = 0;
    var_152 = 2400;
    pri = float(var_152)
    var_160 = pri;
    var_168 = 350;
    pri = float(var_168)
    var_176 = pri;
    var_184 = 10985;
    pri = float(var_184)
    var_192 = pri;
    var_200 = -2963513158178132112;
    var_208 = 48;
    pri = fun_0AF8(var_200, var_192, var_184, var_176, var_168, var_160)
    var_216 = 38528;
    pri = SoundPostEvent(var_216)
    pri = EvCameraStart()
    var_224 = 0;
    var_232 = 4631952216750555136;
    var_240 = 1;
    OP_PUSH5_C 4657046678494542561, 4646821836082737316, 4667403313867611177, 4658633977460865106, 4646412114069762867
    var_248 = 4667403451306564649;
    var_256 = 20;
    pri = EvCameraMove(var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184)
    var_264 = 0;
    pri = fun_2E18()
    var_272 = 1;
    var_280 = 180;
    pri = float(var_280)
    var_288 = pri;
    var_296 = 8802641224559852288;
    var_304 = 24;
    pri = fun_0B50(var_296, var_288, var_280)
    var_312 = 0;
    var_320 = 3;
    var_328 = 0;
    var_336 = 101;
    var_344 = -1;
    OP_PUSH2_C -8965949260113400121, -2963505461596734635
    var_352 = 56;
    pri = fun_24E8(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 1;
    var_368 = 8;
    pri = fun_26E0(var_360)
    var_376 = 0;
    pri = fun_27A0()
    var_384 = 0;
    var_392 = -2963505461596734635;
    var_400 = 16;
    pri = fun_8E48(var_392, var_384)
    var_408 = 0;
    var_416 = -2963513158178132112;
    var_424 = 16;
    pri = fun_8E48(var_416, var_408)
    var_432 = 33;
    var_440 = 8;
    pri = fun_0060(var_432)
    var_448 = 0;
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 0;
    var_488 = 10;
    var_496 = 2;
    var_504 = 5;
    pri = float(var_504)
    var_512 = pri;
    var_520 = 5;
    var_528 = 72;
    pri = fun_2EA8(var_520, var_512, var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_536 = 38688;
    pri = SoundPostEvent(var_536)
    var_544 = 1;
    var_552 = 1;
    var_560 = 0;
    OP_PUSH3_C 4658375680189267968, 4667528564734689280, -2963505461596734635
    var_568 = 48;
    pri = fun_0AA0(var_560, var_552, var_544, var_536, var_528, var_520)
    var_576 = 1;
    var_584 = 1;
    OP_PUSH4_C -4597696712084868301, 4658309709491601408, 4667253686827745280, -2963513158178132112
    var_592 = 48;
    pri = fun_0AA0(var_584, var_576, var_568, var_560, var_552, var_544)
    var_600 = -2963505461596734635;
    var_608 = 8;
    pri = fun_0FD0(var_600)
    var_616 = -2963513158178132112;
    var_624 = 8;
    pri = fun_0FD0(var_616)
    var_632 = -7205741670279695942;
    var_640 = 8;
    pri = fun_09F8(var_632)
    var_648 = -1421941409151136461;
    var_656 = 8;
    pri = fun_09F8(var_648)
    var_664 = -1397410882338721035;
    var_672 = 8;
    pri = fun_0878(var_664)
    var_680 = -6527131671004063671;
    var_688 = 8;
    pri = fun_0878(var_680)
    var_696 = 0;
    pri = fun_08A8()
    var_704 = 30;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 0;
    var_728 = 4631952216750555136;
    var_736 = 2;
    OP_PUSH5_C 4658222100405100216, 4639481672377565184, 4667389394050403533, 4659935491364896113, 4642845298349257523
    var_744 = 4667389602957612810;
    var_752 = 15;
    pri = EvCameraMove(var_752, var_744, var_736, var_728, var_720, var_712, var_704, var_696, var_688, var_680)
    var_760 = 5;
    var_768 = 8;
    pri = fun_0060(var_760)
    var_776 = 1;
    var_784 = 0;
    var_792 = 50;
    pri = float(var_792)
    var_800 = pri;
    var_808 = 0;
    pri = float(var_808)
    var_816 = pri;
    var_824 = 0;
    OP_PUSH4_C 4658485631352045568, 4667528564734689280, 4607182418800017408, -2963505461596734635
    var_832 = 72;
    pri = fun_0C40(var_824, var_816, var_808, var_800, var_792, var_784, var_776, var_768, var_760)
    var_840 = 1;
    var_848 = 0;
    var_856 = 50;
    pri = float(var_856)
    var_864 = pri;
    var_872 = 0;
    pri = float(var_872)
    var_880 = pri;
    var_888 = 0;
    OP_PUSH4_C 4658485631352045568, 4667253686827745280, 4607182418800017408, -2963513158178132112
    var_896 = 72;
    pri = fun_0C40(var_888, var_880, var_872, var_864, var_856, var_848, var_840, var_832, var_824)
    var_904 = -2963505461596734635;
    var_912 = 8;
    pri = fun_0DB8(var_904)
    var_920 = -2963513158178132112;
    var_928 = 8;
    pri = fun_0DB8(var_920)
    var_936 = 0;
    var_944 = 0;
    var_952 = 0;
    var_960 = 0;
    OP_PUSH2_C 8802641224559852288, -2963505461596734635
    var_968 = 48;
    pri = fun_0D60(var_960, var_952, var_944, var_936, var_928, var_920)
    var_976 = 0;
    var_984 = 0;
    var_992 = 0;
    var_1000 = 0;
    OP_PUSH2_C 8802641224559852288, -2963513158178132112
    var_1008 = 48;
    pri = fun_0D60(var_1000, var_992, var_984, var_976, var_968, var_960)
    var_1016 = 0;
    var_1024 = 0;
    var_1032 = 0;
    var_1040 = 0;
    OP_PUSH2_C -2963505461596734635, 8802641224559852288
    var_1048 = 48;
    pri = fun_0D60(var_1040, var_1032, var_1024, var_1016, var_1008, var_1000)
    var_1056 = 30;
    var_1064 = 8;
    pri = fun_0060(var_1056)
    var_1072 = 0;
    pri = fun_2E18()
    var_1080 = 8802641224559852288;
    var_1088 = 8;
    pri = fun_0DB8(var_1080)
    var_1096 = -2963505461596734635;
    var_1104 = 8;
    pri = fun_0DB8(var_1096)
    var_1112 = -2963513158178132112;
    var_1120 = 8;
    pri = fun_0DB8(var_1112)
    var_1128 = 1;
    var_1136 = 1;
    var_1144 = -1;
    var_1152 = -1;
    var_1160 = 0;
    var_1168 = 0;
    var_1176 = -2963505461596734635;
    var_1184 = 56;
    pri = fun_4B58(var_1176, var_1168, var_1160, var_1152, var_1144, var_1136, var_1128)
    var_1192 = 0;
    var_1200 = 3;
    var_1208 = 0;
    var_1216 = 100;
    var_1224 = -1;
    OP_PUSH2_C -8965947061090143699, -2963505461596734635
    var_1232 = 56;
    pri = fun_24E8(var_1224, var_1216, var_1208, var_1200, var_1192, var_1184, var_1176)
    var_1240 = 1;
    var_1248 = 8;
    pri = fun_26E0(var_1240)
    var_1256 = 0;
    pri = fun_27A0()
    var_1264 = -1;
    var_1272 = 0;
    var_1280 = 0;
    var_1288 = -7819510558539344989;
    var_1296 = 102;
    var_1304 = 40;
    pri = fun_2B20(var_1296, var_1288, var_1280, var_1272, var_1264)
    var_1312 = 0;
    pri = fun_2CD8()
    OP_JZER lab_F6B8
    var_1320 = -1397410882338721035;
    var_1328 = 8;
    pri = fun_09F8(var_1320)
    var_1336 = -7205741670279695942;
    var_1344 = 8;
    pri = fun_0878(var_1336)
    var_1352 = 0;
    pri = fun_08A8()
    var_1360 = 0;
    pri = fun_2DC8()
// lab_F6B8
    var_8 = -2963507660619991057;
    var_16 = 8;
    pri = fun_0878(var_8)
    var_24 = -2963506561108362846;
    var_32 = 8;
    pri = fun_0878(var_24)
    var_40 = 0;
    pri = fun_08A8()
    var_48 = 1;
    var_56 = 1;
    var_64 = -90;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH3_C 4658485631352045568, 4667528564734689280, -2963507660619991057
    var_80 = 48;
    pri = fun_0AA0(var_72, var_64, var_56, var_48, var_40, var_32)
    var_88 = 1;
    var_96 = 1;
    var_104 = 90;
    pri = float(var_104)
    var_112 = pri;
    OP_PUSH3_C 4658485631352045568, 4667253686827745280, -2963506561108362846
    var_120 = 48;
    pri = fun_0AA0(var_112, var_104, var_96, var_88, var_80, var_72)
    var_128 = 0;
    var_136 = -2963505461596734635;
    var_144 = 16;
    pri = fun_0BD0(var_136, var_128)
    var_152 = 0;
    var_160 = -2963513158178132112;
    var_168 = 16;
    pri = fun_0BD0(var_160, var_152)
    var_176 = 0;
    var_184 = 0;
    var_192 = -2963506561108362846;
    var_200 = 24;
    pri = fun_8BC0(var_192, var_184, var_176)
    var_208 = -2963506561108362846;
    var_216 = 8;
    pri = fun_0FD0(var_208)
    var_224 = 5;
    var_232 = 8;
    pri = fun_0060(var_224)
    var_240 = 38920;
    pri = SoundPostEvent(var_240)
    var_248 = 10;
    var_256 = 8;
    pri = fun_0060(var_248)
    var_264 = 80;
    var_272 = 8;
    var_280 = 16;
    pri = fun_03B8(var_272, var_264)
    var_288 = 0;
    pri = fun_0488()
    var_296 = 1;
    var_304 = 1;
    var_312 = -1;
    var_320 = -1;
    var_328 = 0;
    var_336 = 0;
    var_344 = -2963507660619991057;
    var_352 = 56;
    pri = fun_4B58(var_344, var_336, var_328, var_320, var_312, var_304, var_296)
    var_360 = 0;
    var_368 = 3;
    var_376 = 0;
    var_384 = 100;
    var_392 = -1;
    OP_PUSH2_C -8965950359625028332, -2963507660619991057
    var_400 = 56;
    pri = fun_24E8(var_392, var_384, var_376, var_368, var_360, var_352, var_344)
    var_408 = 1;
    var_416 = 8;
    pri = fun_26E0(var_408)
    var_424 = 0;
    pri = fun_27A0()
    var_432 = 1;
    var_440 = 3;
    var_448 = 0;
    var_456 = 0;
    var_464 = -2963507660619991057;
    var_472 = 40;
    pri = fun_6E90(var_464, var_456, var_448, var_440, var_432)
    var_480 = -2963507660619991057;
    var_488 = 8;
    pri = fun_0FD0(var_480)
    var_496 = 1;
    var_504 = 0;
    var_512 = 100;
    pri = float(var_512)
    var_520 = pri;
    var_528 = 0;
    pri = float(var_528)
    var_536 = pri;
    var_544 = 0;
    OP_PUSH4_C 4658375680189267968, 4667825432874188800, 4611686018427387904, -2963507660619991057
    var_552 = 72;
    pri = fun_0C40(var_544, var_536, var_528, var_520, var_512, var_504, var_496, var_488, var_480)
    var_560 = 15;
    var_568 = 8;
    pri = fun_0060(var_560)
    var_576 = 1;
    var_584 = 0;
    var_592 = 100;
    pri = float(var_592)
    var_600 = pri;
    var_608 = 0;
    pri = float(var_608)
    var_616 = pri;
    var_624 = 0;
    OP_PUSH4_C 4658309709491601408, 4666918335781273600, 4611686018427387904, -2963506561108362846
    var_632 = 72;
    pri = fun_0C40(var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568, var_560)
    var_640 = -2963507660619991057;
    var_648 = 8;
    pri = fun_0DB8(var_640)
    var_656 = -2963506561108362846;
    var_664 = 8;
    pri = fun_0DB8(var_656)
    var_672 = -2963507660619991057;
    var_680 = 8;
    pri = fun_09F8(var_672)
    var_688 = -2963506561108362846;
    var_696 = 8;
    pri = fun_09F8(var_688)
    var_704 = -2963505461596734635;
    var_712 = 8;
    pri = fun_09F8(var_704)
    var_720 = -2963513158178132112;
    var_728 = 8;
    pri = fun_09F8(var_720)
    var_736 = 50;
    var_744 = -2580759782777728451;
    pri = WorkSet(var_744, var_736)
    pri = 0;
    return pri;
}
// fun_FD58
fun_FD58() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A950(var_40, var_32, var_24, var_16, var_8)
    var_56 = 3932986610981631068;
    var_64 = 8;
    pri = fun_09F8(var_56)
    var_72 = 3932985511470002857;
    var_80 = 8;
    pri = fun_09F8(var_72)
    var_88 = 6332055657046231525;
    var_96 = 8;
    pri = fun_09F8(var_88)
    var_104 = 1;
    var_112 = 8;
    pri = fun_0060(var_104)
    var_120 = 6332055657046231525;
    var_128 = 8;
    pri = fun_0878(var_120)
    var_136 = 3932986610981631068;
    var_144 = 8;
    pri = fun_0878(var_136)
    var_152 = 3932985511470002857;
    var_160 = 8;
    pri = fun_0878(var_152)
    var_168 = 0;
    pri = fun_08A8()
    var_176 = 1;
    var_184 = 1;
    var_192 = 90;
    pri = float(var_192)
    var_200 = pri;
    var_208 = 2680;
    pri = float(var_208)
    var_216 = pri;
    var_224 = 13400;
    pri = float(var_224)
    var_232 = pri;
    var_240 = 3932986610981631068;
    var_248 = 48;
    pri = fun_0AA0(var_240, var_232, var_224, var_216, var_208, var_200)
    var_256 = 1;
    var_264 = 1;
    var_272 = 90;
    pri = float(var_272)
    var_280 = pri;
    var_288 = 2940;
    pri = float(var_288)
    var_296 = pri;
    var_304 = 13400;
    pri = float(var_304)
    var_312 = pri;
    var_320 = 3932985511470002857;
    var_328 = 48;
    pri = fun_0AA0(var_320, var_312, var_304, var_296, var_288, var_280)
    var_336 = 39080;
    pri = SoundPostEvent(var_336)
    var_344 = 0;
    var_352 = 3;
    var_360 = 0;
    var_368 = 100;
    var_376 = -1;
    OP_PUSH2_C -9099192910122070539, 3932986610981631068
    var_384 = 56;
    pri = fun_24E8(var_376, var_368, var_360, var_352, var_344, var_336, var_328)
    var_392 = 1;
    var_400 = 8;
    pri = fun_26E0(var_392)
    var_408 = 0;
    pri = fun_27A0()
    pri = EvCameraStart()
    var_416 = 0;
    var_424 = 4631952216750555136;
    var_432 = 2;
    OP_PUSH5_C 4658222320307425772, 4639481672377565184, 4669031893997998572, 4659935843208617001, 4642830169069259325
    var_440 = 4669032102905207849;
    var_448 = 15;
    pri = EvCameraMove(var_448, var_440, var_432, var_424, var_416, var_408, var_400, var_392, var_384, var_376)
    var_456 = 3932986610981631068;
    var_464 = 8;
    pri = fun_8DD0(var_456)
    var_472 = 5;
    var_480 = 8;
    pri = fun_0060(var_472)
    var_488 = 3932985511470002857;
    var_496 = 8;
    pri = fun_8DD0(var_488)
    var_504 = 35;
    var_512 = 8;
    pri = fun_0060(var_504)
    var_520 = 3932986610981631068;
    var_528 = 8;
    pri = fun_8DD0(var_520)
    var_536 = 5;
    var_544 = 8;
    pri = fun_0060(var_536)
    var_552 = 3932985511470002857;
    var_560 = 8;
    pri = fun_8DD0(var_552)
    var_568 = 20;
    var_576 = 8;
    pri = fun_0060(var_568)
    var_584 = 0;
    var_592 = 8802641224559852288;
    var_600 = 16;
    pri = fun_0BD0(var_592, var_584)
    var_608 = 0;
    var_616 = 4629855228174060749;
    var_624 = 0;
    OP_PUSH5_C 4658436769055307203, 4634874630696253522, 4669028523994859438, 4658808140102704824, 4634660006026511647
    var_632 = 4669140487263915868;
    var_640 = 1;
    pri = EvCameraMove(var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_648 = 0;
    pri = fun_2E18()
    var_656 = 0;
    var_664 = 4629855228174060749;
    var_672 = 2;
    OP_PUSH5_C 4658539045626922926, 4634815520951144284, 4669059365296018555, 4658910438664553103, 4634600192593960632
    var_680 = 4669171323067516846;
    var_688 = 15;
    pri = EvCameraMove(var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616)
    var_696 = 10;
    var_704 = 8;
    pri = fun_0060(var_696)
    var_712 = 0;
    var_720 = 3;
    var_728 = 0;
    var_736 = 100;
    var_744 = -1;
    OP_PUSH2_C -9099195109145326961, 3932986610981631068
    var_752 = 56;
    pri = fun_24E8(var_744, var_736, var_728, var_720, var_712, var_704, var_696)
    var_760 = 1;
    var_768 = 8;
    pri = fun_26E0(var_760)
    var_776 = 0;
    pri = fun_27A0()
    var_784 = -1;
    var_792 = 0;
    var_800 = 0;
    var_808 = -7819510558539344989;
    var_816 = 104;
    var_824 = 40;
    pri = fun_2B20(var_816, var_808, var_800, var_792, var_784)
    var_832 = 0;
    pri = fun_2CD8()
    OP_JZER lab_10590
    var_840 = 3932986610981631068;
    pri = FlagSet(var_840)
    var_848 = 3932985511470002857;
    pri = FlagSet(var_848)
    var_856 = 50;
    var_864 = -2580759782777728451;
    pri = WorkSet(var_864, var_856)
    var_872 = 0;
    pri = fun_2DC8()
// lab_10590
    var_8 = 39240;
    pri = SoundPostEvent(var_8)
    pri = EvCameraStart()
    var_16 = 1;
    var_24 = 1;
    var_32 = 90;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 2660;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 14163;
    pri = float(var_64)
    var_72 = pri;
    var_80 = 3932986610981631068;
    var_88 = 48;
    pri = fun_0AA0(var_80, var_72, var_64, var_56, var_48, var_40)
    var_96 = 1;
    var_104 = 1;
    var_112 = 90;
    pri = float(var_112)
    var_120 = pri;
    var_128 = 2960;
    pri = float(var_128)
    var_136 = pri;
    var_144 = 14163;
    pri = float(var_144)
    var_152 = pri;
    var_160 = 3932985511470002857;
    var_168 = 48;
    pri = fun_0AA0(var_160, var_152, var_144, var_136, var_128, var_120)
    var_176 = 1;
    var_184 = 1;
    var_192 = -4587338432941916160;
    var_200 = 2810;
    pri = float(var_200)
    var_208 = pri;
    OP_PUSH2_C 4669122086936825037, 8802641224559852288
    var_216 = 48;
    pri = fun_0AA0(var_208, var_200, var_192, var_184, var_176, var_168)
    var_224 = 0;
    var_232 = 0;
    var_240 = 0;
    var_248 = 0;
    OP_PUSH2_C 8802641224559852288, 3932985511470002857
    var_256 = 48;
    pri = fun_0D60(var_248, var_240, var_232, var_224, var_216, var_208)
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    var_288 = 0;
    OP_PUSH2_C 8802641224559852288, 3932986610981631068
    var_296 = 48;
    pri = fun_0D60(var_288, var_280, var_272, var_264, var_256, var_248)
    var_304 = 8802641224559852288;
    var_312 = 8;
    pri = fun_0DB8(var_304)
    var_320 = 3932985511470002857;
    var_328 = 8;
    pri = fun_0DB8(var_320)
    var_336 = 3932986610981631068;
    var_344 = 8;
    pri = fun_0DB8(var_336)
    var_352 = 80;
    var_360 = 8;
    var_368 = 16;
    pri = fun_03B8(var_360, var_352)
    var_376 = 0;
    pri = fun_0488()
    var_384 = 0;
    var_392 = 3;
    var_400 = 0;
    var_408 = 100;
    var_416 = -1;
    OP_PUSH2_C -9099194009633698750, 3932985511470002857
    var_424 = 56;
    pri = fun_24E8(var_416, var_408, var_400, var_392, var_384, var_376, var_368)
    var_432 = 1;
    var_440 = 8;
    pri = fun_26E0(var_432)
    var_448 = 0;
    pri = fun_27A0()
    var_456 = 0;
    var_464 = 0;
    var_472 = 0;
    var_480 = 90;
    pri = float(var_480)
    var_488 = pri;
    var_496 = 3932986610981631068;
    var_504 = 40;
    pri = fun_0D10(var_496, var_488, var_480, var_472, var_464)
    var_512 = 0;
    var_520 = 0;
    var_528 = 0;
    var_536 = 90;
    pri = float(var_536)
    var_544 = pri;
    var_552 = 3932985511470002857;
    var_560 = 40;
    pri = fun_0D10(var_552, var_544, var_536, var_528, var_520)
    var_568 = 3932986610981631068;
    var_576 = 8;
    pri = fun_0DB8(var_568)
    var_584 = 3932985511470002857;
    var_592 = 8;
    pri = fun_0DB8(var_584)
    var_600 = 3932986610981631068;
    var_608 = 8;
    pri = fun_8DD0(var_600)
    var_616 = 5;
    var_624 = 8;
    pri = fun_0060(var_616)
    var_632 = 3932985511470002857;
    var_640 = 8;
    pri = fun_8DD0(var_632)
    var_648 = 20;
    var_656 = 8;
    pri = fun_0060(var_648)
    var_664 = 0;
    var_672 = 4631952216750555136;
    var_680 = 3;
    OP_PUSH5_C 4658221814532076995, 4639481672377565184, 4669309113864709734, 4659935271462570557, 4642837205943677092
    var_688 = 4669309113864709734;
    var_696 = 120;
    pri = EvCameraMove(var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624)
    var_704 = 20;
    var_712 = 8;
    pri = fun_0060(var_704)
    var_720 = 0;
    var_728 = 0;
    var_736 = 0;
    var_744 = 90;
    pri = float(var_744)
    var_752 = pri;
    var_760 = 8802641224559852288;
    var_768 = 40;
    pri = fun_0D10(var_760, var_752, var_744, var_736, var_728)
    var_776 = 8802641224559852288;
    var_784 = 8;
    pri = fun_0DB8(var_776)
    var_792 = 0;
    pri = fun_2E18()
    var_800 = 0;
    var_808 = 0;
    var_816 = 0;
    var_824 = 90;
    pri = float(var_824)
    var_832 = pri;
    var_840 = 6332055657046231525;
    var_848 = 40;
    pri = fun_0D10(var_840, var_832, var_824, var_816, var_808)
    var_856 = 6332055657046231525;
    var_864 = 8;
    pri = fun_0DB8(var_856)
    var_872 = 1;
    var_880 = 0;
    var_888 = 4641240890982006784;
    var_896 = 0;
    var_904 = 0;
    OP_PUSH4_C 4658374140872989082, 4670021762326252749, 4607182418800017408, 6332055657046231525
    var_912 = 72;
    pri = fun_0C40(var_904, var_896, var_888, var_880, var_872, var_864, var_856, var_848, var_840)
    var_920 = 6332055657046231525;
    var_928 = 8;
    pri = fun_0DB8(var_920)
    var_936 = 3;
    var_944 = 30;
    pri = EvCameraEnd(var_944, var_936)
    var_952 = 2183193420820107564;
    var_960 = 8;
    pri = fun_09F8(var_952)
    var_976 = 39400;
    pri = GetFnvHash64(var_976)
    var_8 = pri;
    var_984 = var_8;
    pri = EvCameraAddIgnoreScrollStopHash(var_984)
    var_992 = 3932986610981631068;
    var_1000 = 8;
    pri = fun_09F8(var_992)
    var_1008 = 3932985511470002857;
    var_1016 = 8;
    pri = fun_09F8(var_1008)
    var_1024 = 6332055657046231525;
    var_1032 = 8;
    pri = fun_09F8(var_1024)
    var_1040 = 70;
    var_1048 = -2580759782777728451;
    pri = WorkSet(var_1048, var_1040)
    pri = 0;
    return pri;
}
// fun_10F08
fun_10F08() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_A950(var_40, var_32, var_24, var_16, var_8)
    var_56 = 39592;
    pri = SoundPostEvent(var_56)
    var_64 = 0;
    var_72 = 1;
    var_80 = -2963510959154875690;
    var_88 = 24;
    pri = fun_8BC0(var_80, var_72, var_64)
    var_96 = 0;
    var_104 = 3;
    var_112 = 0;
    var_120 = 100;
    var_128 = -1;
    OP_PUSH2_C 6175066464886843354, -2963510959154875690
    var_136 = 56;
    pri = fun_24E8(var_128, var_120, var_112, var_104, var_96, var_88, var_80)
    var_144 = 1;
    var_152 = 8;
    pri = fun_26E0(var_144)
    var_160 = 0;
    pri = fun_27A0()
    var_168 = 0;
    var_176 = 1;
    pri = PokePartyGetCount(var_176, var_168)
    alt = 2;
    OP_JSGEQ lab_112D0
    var_184 = 0;
    var_192 = 0;
    var_200 = -2963510959154875690;
    var_208 = 24;
    pri = fun_8BC0(var_200, var_192, var_184)
    var_216 = 0;
    var_224 = 3;
    var_232 = 0;
    var_240 = 100;
    var_248 = -1;
    OP_PUSH2_C 6175064265863586932, -2963510959154875690
    var_256 = 56;
    pri = fun_24E8(var_248, var_240, var_232, var_224, var_216, var_208, var_200)
    var_264 = 1;
    var_272 = 8;
    pri = fun_26E0(var_264)
    var_280 = 0;
    pri = fun_27A0()
    var_288 = 1;
    var_296 = 0;
    var_304 = 32;
    var_312 = 8;
    var_320 = 32;
    pri = fun_0418(var_312, var_304, var_296, var_288)
    var_328 = 0;
    pri = fun_0488()
    var_336 = 1;
    var_344 = 1;
    var_352 = 0;
    pri = float(var_352)
    var_360 = pri;
    var_368 = 2358;
    pri = float(var_368)
    var_376 = pri;
    var_384 = 16981;
    pri = float(var_384)
    var_392 = pri;
    var_400 = 8802641224559852288;
    var_408 = 48;
    pri = fun_0AA0(var_400, var_392, var_384, var_376, var_368, var_360)
    var_416 = 39752;
    pri = SoundPostEvent(var_416)
    var_424 = 35;
    var_432 = 8;
    pri = fun_0060(var_424)
    var_440 = 80;
    var_448 = 8;
    var_456 = 16;
    pri = fun_03B8(var_448, var_440)
    var_464 = 0;
    pri = fun_0488()
    pri = 0;
    return pri;
// lab_112D0
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    var_32 = -1;
    var_40 = 0;
    var_48 = 1;
    var_56 = -2963510959154875690;
    var_64 = 56;
    pri = fun_4B58(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 100;
    var_104 = -1;
    OP_PUSH2_C 6175063166351958721, -2963510959154875690
    var_112 = 56;
    pri = fun_24E8(var_104, var_96, var_88, var_80, var_72, var_64, var_56)
    var_120 = 1;
    var_128 = 8;
    pri = fun_26E0(var_120)
    var_136 = 0;
    pri = fun_27A0()
    var_144 = 1;
    var_152 = 3;
    var_160 = 0;
    var_168 = 1;
    var_176 = -2963510959154875690;
    var_184 = 40;
    pri = fun_6E90(var_176, var_168, var_160, var_152, var_144)
    var_192 = 4949931760410899326;
    var_200 = 8;
    pri = fun_0878(var_192)
    var_208 = 0;
    pri = fun_08A8()
    var_224 = 39912;
    var_232 = 1;
    var_240 = 0;
    var_248 = 1;
    var_256 = -1;
    var_264 = 0;
    var_272 = 0;
    var_280 = 0;
    var_288 = 4657334882482415206;
    var_296 = 0;
    OP_PUSH2_C 4670389741380278682, 4657466823877748326
    var_304 = 0;
    OP_PUSH5_C 4670375997484931482, 4658060560156747366, -9223372036854775808, 4670359504810514842, 4658060560156747366
    var_312 = 0;
    var_320 = 4670304529229126042;
    var_328 = 4;
    var_336 = 168;
    pri = fun_1B68(var_328, var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168)
    var_8 = pri;
    var_344 = 1;
    var_352 = 4596373779694328218;
    var_360 = -1;
    var_368 = 4611686018427387904;
    var_376 = var_8;
    var_384 = 4949931760410899326;
    var_392 = 48;
    pri = fun_0CB8(var_384, var_376, var_368, var_360, var_352, var_344)
    var_400 = 4949931760410899326;
    var_408 = 8;
    pri = fun_0DB8(var_400)
    var_416 = 0;
    var_424 = 0;
    var_432 = 0;
    var_440 = 90;
    pri = float(var_440)
    var_448 = pri;
    var_456 = 4949931760410899326;
    var_464 = 40;
    pri = fun_0D10(var_456, var_448, var_440, var_432, var_424)
    var_472 = 4949931760410899326;
    var_480 = 8;
    pri = fun_0DB8(var_472)
    var_488 = 1;
    var_496 = 1;
    var_504 = -1;
    var_512 = -1;
    var_520 = 0;
    var_528 = 2;
    var_536 = 4949931760410899326;
    var_544 = 56;
    pri = fun_4B58(var_536, var_528, var_520, var_512, var_504, var_496, var_488)
    var_552 = 0;
    var_560 = 3;
    var_568 = 0;
    var_576 = 100;
    var_584 = -1;
    OP_PUSH2_C -4022296068709244610, 4949931760410899326
    var_592 = 56;
    pri = fun_24E8(var_584, var_576, var_568, var_560, var_552, var_544, var_536)
    var_600 = 1;
    var_608 = 8;
    pri = fun_26E0(var_600)
    var_616 = 0;
    pri = fun_27A0()
    var_624 = 17;
    var_632 = 0;
    var_640 = 0;
    var_648 = -7819510558539344989;
    var_656 = 106;
    var_664 = 105;
    var_672 = 48;
    pri = fun_2BC0(var_664, var_656, var_648, var_640, var_632, var_624)
    var_680 = 0;
    pri = fun_2CD8()
    OP_JZER lab_117E8
    var_688 = 4949931760410899326;
    pri = FlagSet(var_688)
    var_696 = 0;
    pri = fun_2DC8()
// lab_117E8
    var_8 = 39960;
    pri = SoundPostEvent(var_8)
    var_16 = 80;
    var_24 = 8;
    var_32 = 16;
    pri = fun_03B8(var_24, var_16)
    var_40 = 0;
    pri = fun_0488()
    var_48 = 1;
    var_56 = -1;
    var_64 = -1;
    var_72 = 3;
    var_80 = 0;
    var_88 = 1;
    var_96 = -2963510959154875690;
    var_104 = 56;
    pri = fun_2F78(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 100;
    var_144 = -1;
    OP_PUSH2_C 6175065365375215143, -2963510959154875690
    var_152 = 56;
    pri = fun_24E8(var_144, var_136, var_128, var_120, var_112, var_104, var_96)
    var_160 = -2963510959154875690;
    var_168 = 8;
    pri = fun_0FD0(var_160)
    var_176 = 1;
    var_184 = 8;
    pri = fun_26E0(var_176)
    var_192 = 0;
    pri = fun_27A0()
    var_208 = 40120;
    var_216 = 1;
    var_224 = 0;
    var_232 = 1;
    var_240 = -1;
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 4658287719259045888;
    var_280 = 0;
    OP_PUSH2_C 4670781469885464576, 4658001846235824128
    var_288 = 0;
    OP_PUSH2_C 4670762228431978496, 4657408109956825088
    var_296 = 0;
    OP_PUSH2_C 4670742079881399501, 4657276168561491968
    var_304 = 0;
    var_312 = 4670762228431978496;
    var_320 = 4;
    var_328 = 168;
    pri = fun_1B68(var_320, var_312, var_304, var_296, var_288, var_280, var_272, var_264, var_256, var_248, var_240, var_232, var_224, var_216, var_208, var_200, var_192, var_184, var_176, var_168, var_160)
    var_16 = pri;
    var_336 = 1;
    var_344 = 4609434218613702656;
    var_352 = -1;
    var_360 = 4611686018427387904;
    var_368 = var_16;
    var_376 = -2963510959154875690;
    var_384 = 48;
    pri = fun_0CB8(var_376, var_368, var_360, var_352, var_344, var_336)
    var_392 = 15;
    var_400 = 8;
    pri = fun_0060(var_392)
    var_408 = 1;
    var_416 = 1;
    var_424 = -1;
    var_432 = -1;
    var_440 = 0;
    var_448 = 6;
    var_456 = 4949931760410899326;
    var_464 = 56;
    pri = fun_4B58(var_456, var_448, var_440, var_432, var_424, var_416, var_408)
    var_472 = 0;
    var_480 = 3;
    var_488 = 0;
    var_496 = 100;
    var_504 = -1;
    OP_PUSH2_C -4022297168220872821, 4949931760410899326
    var_512 = 56;
    pri = fun_24E8(var_504, var_496, var_488, var_480, var_472, var_464, var_456)
    var_520 = 1;
    var_528 = 8;
    pri = fun_26E0(var_520)
    var_536 = 0;
    pri = fun_27A0()
    var_544 = 1;
    var_552 = 3;
    var_560 = 0;
    var_568 = 6;
    var_576 = 4949931760410899326;
    var_584 = 40;
    pri = fun_6E90(var_576, var_568, var_560, var_552, var_544)
    var_592 = 4949931760410899326;
    var_600 = 8;
    pri = fun_0FD0(var_592)
    var_608 = 15;
    var_616 = 8;
    pri = fun_0060(var_608)
    var_632 = 40168;
    var_640 = 1;
    var_648 = 0;
    var_656 = 1;
    var_664 = -1;
    var_672 = 0;
    var_680 = 0;
    var_688 = 0;
    OP_PUSH4_C 4658280462482302566, -9223372036854775808, 4670359504810514842, 4657928618761414246
    var_696 = 0;
    OP_PUSH2_C 4670389741380278682, 4657463965147516109
    var_704 = 0;
    OP_PUSH2_C 4670407690907602125, 4657334882482415206
    var_712 = 0;
    var_720 = 4670389741380278682;
    var_728 = 4;
    var_736 = 168;
    pri = fun_1B68(var_728, var_720, var_712, var_704, var_696, var_688, var_680, var_672, var_664, var_656, var_648, var_640, var_632, var_624, var_616, var_608, var_600, var_592, var_584, var_576, var_568)
    var_24 = pri;
    var_744 = 1;
    var_752 = 4596373779694328218;
    var_760 = -1;
    var_768 = 4611686018427387904;
    var_776 = var_24;
    var_784 = 4949931760410899326;
    var_792 = 48;
    pri = fun_0CB8(var_784, var_776, var_768, var_760, var_752, var_744)
    var_800 = -2963510959154875690;
    var_808 = 8;
    pri = fun_0DB8(var_800)
    var_816 = 4949931760410899326;
    var_824 = 8;
    pri = fun_0DB8(var_816)
    var_832 = -2963510959154875690;
    var_840 = 8;
    pri = fun_09F8(var_832)
    var_848 = 4949931760410899326;
    var_856 = 8;
    pri = fun_09F8(var_848)
    var_864 = 999;
    var_872 = -2580759782777728451;
    pri = WorkSet(var_872, var_864)
    var_880 = -3293621181990616472;
    pri = FlagReset(var_880)
    var_888 = 1;
    var_896 = 8;
    pri = fun_0060(var_888)
    pri = 0;
    return pri;
}
// fun_11EC8
fun_11EC8() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 0;
    var_32 = 1;
    var_40 = 1;
    var_48 = -3123382877661890469;
    var_56 = 48;
    pri = fun_8ED8(var_48, var_40, var_32, var_24, var_16, var_8)
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 100;
    var_96 = -1;
    OP_PUSH2_C 5394634726673384846, -3123382877661890469
    var_104 = 56;
    pri = fun_24E8(var_96, var_88, var_80, var_72, var_64, var_56, var_48)
    var_112 = 1;
    var_120 = 8;
    pri = fun_26E0(var_112)
    var_136 = 0;
    var_144 = 0;
    var_152 = 1;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 48;
    pri = fun_27D0(var_176, var_168, var_160, var_152, var_144, var_136)
    var_8 = pri;
    var_192 = 0;
    pri = fun_27A0()
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = -3123382877661890469;
    var_232 = 32;
    pri = fun_91D8(var_224, var_216, var_208, var_200)
    pri = var_8;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_120A8
    var_240 = 0;
    pri = fun_C718()
    var_248 = 0;
    pri = fun_C900()
    OP_JUMP lab_12198
// lab_120A8
    pri = arg_0;
    OP_JNZ lab_12198
    var_8 = 1;
    var_16 = 0;
    var_24 = 4641240890982006784;
    var_32 = 0;
    var_40 = 0;
    var_48 = 2850;
    pri = float(var_48)
    var_56 = pri;
    var_64 = 4200;
    pri = float(var_64)
    var_72 = pri;
    OP_PUSH2_C 4607182418800017408, 8802641224559852288
    var_80 = 72;
    pri = fun_0C40(var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    var_88 = 8802641224559852288;
    var_96 = 8;
    pri = fun_0DB8(var_88)
// lab_12198
    pri = 0;
    return pri;
}
// fun_121B0
fun_121B0() {
    var_8 = 0;
    var_16 = 8;
    pri = fun_11EC8(var_8)
    pri = 0;
    return pri;
}
// fun_121E8
fun_121E8() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 1350;
    OP_JSLESS lab_122B0
    var_16 = 1;
    var_24 = 3;
    var_32 = 0;
    var_40 = 100;
    var_48 = -1;
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 5394631428138500213;
    var_96 = 80;
    pri = fun_9690(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    OP_JUMP lab_122D0
// lab_122B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_11EC8(var_8)
// lab_122D0
    pri = 0;
    return pri;
}
// fun_122E0
fun_122E0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, -2963506561108362846
    var_32 = 40;
    pri = fun_1528(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    var_64 = -1;
    var_72 = 0;
    var_80 = 45;
    var_88 = -2963506561108362846;
    var_96 = 56;
    pri = fun_4B58(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C 3052821030628395092, -2963506561108362846
    var_144 = 56;
    pri = fun_24E8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_26E0(var_152)
    var_168 = 0;
    pri = fun_27A0()
    var_176 = 1;
    var_184 = 3;
    var_192 = 0;
    var_200 = 45;
    var_208 = -2963506561108362846;
    var_216 = 40;
    pri = fun_6E90(var_208, var_200, var_192, var_184, var_176)
    var_224 = -1;
    var_232 = -2963506561108362846;
    var_240 = 16;
    pri = fun_1580(var_232, var_224)
    pri = 0;
    return pri;
}
// fun_124A0
fun_124A0() {
    var_8 = 1;
    var_16 = 1;
    var_24 = -1;
    OP_PUSH2_C 8802641224559852288, 3932987710493259279
    var_32 = 40;
    pri = fun_1528(var_24, var_16, var_8, var_0, var_-8)
    var_40 = 1;
    var_48 = 1;
    var_56 = -1;
    var_64 = -1;
    var_72 = 0;
    var_80 = 45;
    var_88 = 3932987710493259279;
    var_96 = 56;
    pri = fun_4B58(var_88, var_80, var_72, var_64, var_56, var_48, var_40)
    var_104 = 0;
    var_112 = 3;
    var_120 = 0;
    var_128 = 100;
    var_136 = -1;
    OP_PUSH2_C 3201905730126352030, 3932987710493259279
    var_144 = 56;
    pri = fun_24E8(var_136, var_128, var_120, var_112, var_104, var_96, var_88)
    var_152 = 1;
    var_160 = 8;
    pri = fun_26E0(var_152)
    var_168 = 0;
    pri = fun_27A0()
    var_176 = 1;
    var_184 = 3;
    var_192 = 0;
    var_200 = 45;
    var_208 = 3932987710493259279;
    var_216 = 40;
    pri = fun_6E90(var_208, var_200, var_192, var_184, var_176)
    var_224 = -1;
    var_232 = 3932987710493259279;
    var_240 = 16;
    pri = fun_1580(var_232, var_224)
    pri = 0;
    return pri;
}
// fun_12660
fun_12660() {
    var_8 = 3;
    var_16 = 0;
    var_24 = -8448844164459398255;
    var_32 = 24;
    pri = fun_2598(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_26E0(var_40)
    var_56 = 0;
    pri = fun_27A0()
    pri = 0;
    return pri;
}
// fun_126E8
fun_126E8() {
    var_8 = 3;
    var_16 = 0;
    var_24 = -8448844164459398255;
    var_32 = 24;
    pri = fun_2598(var_24, var_16, var_8)
    var_40 = 1;
    var_48 = 8;
    pri = fun_26E0(var_40)
    var_56 = 0;
    pri = fun_27A0()
    pri = 0;
    return pri;
}
