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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
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
// fun_0208
fun_0208() {
    OP_JUMP lab_0220
// lab_0220
    pri = FadeWait_()
    OP_JZER lab_0258
    pri = 0;
    return pri;
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0220
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_02C0
fun_02C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetFieldObjectAngle_(var_24, var_16, var_8)
    return pri;
}
// fun_0300
fun_0300() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_0338
fun_0338() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0380
    pri = 0;
    return pri;
// lab_0380
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_03C0
// lab_03C0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_05B0(var_8)
    OP_JNZ lab_0448
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0438
    pri = 0;
    return pri;
// lab_0448
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0490
    pri = 0;
    return pri;
// lab_0490
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_04F0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0538(var_8)
    pri = 0;
    return pri;
// lab_04F0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03C0
    pri = 0;
    return pri;
// lab_0438
    OP_JUMP lab_0490
}
// fun_0538
fun_0538() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_05B0
fun_05B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_05E0
fun_05E0() {
    OP_JUMP lab_05F8
// lab_05F8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0688
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0678
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0338(var_8)
    pri = 0;
    return pri;
// lab_0688
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0718
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0708
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0338(var_8)
    pri = 0;
    return pri;
// lab_0718
    pri = 0;
    return pri;
// lab_0708
    OP_JUMP lab_0728
// lab_0728
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05F8
    pri = 0;
    return pri;
// lab_0678
    OP_JUMP lab_0728
}
// fun_0768
fun_0768() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_0338(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05E0(var_40)
    pri = 0;
    return pri;
}
// fun_07F0
fun_07F0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0828
fun_0828() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0850
fun_0850() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0888
fun_0888() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0948
// lab_0948
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0AC8
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0AB8
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_0A08
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_0A08
    pri = 0;
    OP_JUMP lab_0A10
// lab_0AC8
    pri = 0;
    return pri;
// lab_0AB8
    OP_JUMP lab_0940
// lab_0940
    OP_INC_P_S -936
// lab_0A08
    pri = 1;
// lab_0A10
    OP_JZER lab_0A88
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0A80
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0A88
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0A80
}
// fun_0AE8
fun_0AE8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0B80
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0828()
// lab_0B80
    pri = arg_4;
    OP_JZER lab_0BB8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0850(var_8)
// lab_0BB8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_0C10
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_0C10
    pri = 0;
    OP_JUMP lab_0C18
// lab_0C10
    pri = 1;
// lab_0C18
    OP_JZER lab_0CE0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_0CE0
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_0CB8
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0768(var_32, var_24)
    OP_JUMP lab_0CE0
// lab_0CE0
    pri = arg_2;
    OP_JZER lab_0DB8
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_0D88
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0570(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0300(var_40)
    OP_JUMP lab_0DB8
// lab_0DB8
    pri = arg_3;
    OP_JZER lab_0DF0
    var_8 = 1;
    var_16 = 8;
    pri = fun_07F0(var_8)
// lab_0DF0
    pri = 0;
    return pri;
// lab_0D88
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0570(var_16, var_8)
// lab_0CB8
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0768(var_16, var_8)
}
// fun_0E00
fun_0E00() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_08C0(var_24)
    pri = 0;
    return pri;
}
// fun_0E68
fun_0E68() {
    pri = g_mode;
    switch (pri) {
// switch_0F28
        case default:
        {
// switch_0F28_case_default
            pri = CommandNOP()
            OP_JUMP lab_0F70
// lab_0F70
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0F28_case_0x0
            var_8 = 0;
            pri = fun_0F80()
            OP_JUMP lab_0F70
        }
        case 0x34e38b27744d2039:
        {
// switch_0F28_case_0x34e38b27744d2039
            var_8 = 0;
            pri = fun_12F8()
            OP_JUMP lab_0F70
        }
        case 0x5242fd2afe42065d:
        {
// switch_0F28_case_0x5242fd2afe42065d
            var_8 = 0;
            pri = fun_1208()
            OP_JUMP lab_0F70
        }
    }
}
// fun_0F80
fun_0F80() {
    pri = 0;
    return pri;
}
// fun_0F98
fun_0F98() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0AE8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FF0
fun_0FF0() {
    pri = 0;
    return pri;
}
// fun_1008
fun_1008() {
    pri = 0;
    return pri;
}
// fun_1020
fun_1020() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = IsMovieSkipEnable()
    OP_JZER lab_1080
    OP_JUMP lab_10A0
// lab_1080
    var_8 = 1000;
    var_16 = 8;
    pri = fun_0888(var_8)
// lab_10A0
    OP_LCTRL 5
    OP_SCTRL 4
    pri = 0;
    return pri;
}
// fun_10D0
fun_10D0() {
    pri = 0;
    return pri;
}
// fun_10E8
fun_10E8() {
    var_8 = 1330;
    var_16 = 8;
    pri = fun_0E00(var_8)
    pri = 0;
    return pri;
}
// fun_1120
fun_1120() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1;
    var_32 = 180;
    pri = float(var_32)
    var_40 = pri;
    var_48 = 8802641224559852288;
    var_56 = 24;
    pri = fun_02C0(var_48, var_40, var_32)
    pri = FieldCameraClearDelay()
    var_64 = 1160;
    var_72 = 8;
    var_80 = 16;
    pri = fun_0138(var_72, var_64)
    var_88 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_1208
fun_1208() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_0F98()
    var_16 = 0;
    pri = fun_0FF0()
    var_24 = 0;
    pri = fun_1008()
    var_32 = 0;
    pri = fun_1020()
    var_40 = 0;
    pri = fun_10D0()
    var_48 = 0;
    pri = fun_10E8()
    var_56 = 0;
    pri = fun_1120()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_12F8
fun_12F8() {
    var_8 = 0;
    pri = fun_0FF0()
    var_16 = 0;
    pri = fun_10E8()
    pri = 0;
    return pri;
}
