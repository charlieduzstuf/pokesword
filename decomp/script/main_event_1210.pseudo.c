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
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_02F8
fun_02F8() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_0340
    pri = 0;
    return pri;
// lab_0340
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0380
// lab_0380
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0570(var_8)
    OP_JNZ lab_0408
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_03F8
    pri = 0;
    return pri;
// lab_0408
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0450
    pri = 0;
    return pri;
// lab_0450
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_04B0
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_04F8(var_8)
    pri = 0;
    return pri;
// lab_04B0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0380
    pri = 0;
    return pri;
// lab_03F8
    OP_JUMP lab_0450
}
// fun_04F8
fun_04F8() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_0530
fun_0530() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0570
fun_0570() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_05A0
fun_05A0() {
    OP_JUMP lab_05B8
// lab_05B8
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0648
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_0638
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_02F8(var_8)
    pri = 0;
    return pri;
// lab_0648
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_06D8
    pri = IsPlayerRideBicycle()
    OP_JZER lab_06C8
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_02F8(var_8)
    pri = 0;
    return pri;
// lab_06D8
    pri = 0;
    return pri;
// lab_06C8
    OP_JUMP lab_06E8
// lab_06E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05B8
    pri = 0;
    return pri;
// lab_0638
    OP_JUMP lab_06E8
}
// fun_0728
fun_0728() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_02F8(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_05A0(var_40)
    pri = 0;
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0810
fun_0810() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0848
fun_0848() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_0880
fun_0880() {
    pri = 32;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_0908
// lab_0908
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_0A88
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_0A78
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_09C8
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_09C8
    pri = 0;
    OP_JUMP lab_09D0
// lab_0A88
    pri = 0;
    return pri;
// lab_0A78
    OP_JUMP lab_0900
// lab_0900
    OP_INC_P_S -936
// lab_09C8
    pri = 1;
// lab_09D0
    OP_JZER lab_0A48
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_0A40
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_0A48
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_0A40
}
// fun_0AA8
fun_0AA8() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_0B40
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_07E8()
// lab_0B40
    pri = arg_4;
    OP_JZER lab_0B78
    var_8 = 1;
    var_16 = 8;
    pri = fun_0810(var_8)
// lab_0B78
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_0BD0
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_0BD0
    pri = 0;
    OP_JUMP lab_0BD8
// lab_0BD0
    pri = 1;
// lab_0BD8
    OP_JZER lab_0CA0
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_0CA0
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_0C78
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0728(var_32, var_24)
    OP_JUMP lab_0CA0
// lab_0CA0
    pri = arg_2;
    OP_JZER lab_0D78
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_0D48
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_0530(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_02C0(var_40)
    OP_JUMP lab_0D78
// lab_0D78
    pri = arg_3;
    OP_JZER lab_0DB0
    var_8 = 1;
    var_16 = 8;
    pri = fun_07B0(var_8)
// lab_0DB0
    pri = 0;
    return pri;
// lab_0D48
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_0530(var_16, var_8)
// lab_0C78
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0728(var_16, var_8)
}
// fun_0DC0
fun_0DC0() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_0880(var_24)
    pri = 0;
    return pri;
}
// fun_0E28
fun_0E28() {
    pri = g_mode;
    switch (pri) {
// switch_0EE8
        case default:
        {
// switch_0EE8_case_default
            pri = CommandNOP()
            OP_JUMP lab_0F30
// lab_0F30
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0EE8_case_0x0
            var_8 = 0;
            pri = fun_0F40()
            OP_JUMP lab_0F30
        }
        case 0x3d902d2779379700:
        {
// switch_0EE8_case_0x3d902d2779379700
            var_8 = 0;
            pri = fun_1360()
            OP_JUMP lab_0F30
        }
        case 0x5b5c972b0389416c:
        {
// switch_0EE8_case_0x5b5c972b0389416c
            var_8 = 0;
            pri = fun_1270()
            OP_JUMP lab_0F30
        }
    }
}
// fun_0F40
fun_0F40() {
    pri = 0;
    return pri;
}
// fun_0F58
fun_0F58() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0AA8(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0FB0
fun_0FB0() {
    pri = 0;
    return pri;
}
// fun_0FC8
fun_0FC8() {
    pri = 0;
    return pri;
}
// fun_0FE0
fun_0FE0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = IsMovieSkipEnable()
    OP_JZER lab_1040
    OP_JUMP lab_1060
// lab_1040
    var_8 = 1000;
    var_16 = 8;
    pri = fun_0848(var_8)
// lab_1060
    OP_LCTRL 5
    OP_SCTRL 4
    pri = IsMovieSkipEnable()
    OP_JZER lab_1158
    var_8 = 1;
    var_16 = 0;
    var_24 = 952;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 10;
    var_64 = 8;
    pri = fun_0060(var_56)
    var_72 = 1160;
    var_80 = 8;
    var_88 = 16;
    pri = fun_0138(var_80, var_72)
    var_96 = 0;
    pri = fun_0208()
// lab_1158
    pri = 0;
    return pri;
}
// fun_1168
fun_1168() {
    pri = 0;
    return pri;
}
// fun_1180
fun_1180() {
    var_8 = 1230;
    var_16 = 8;
    pri = fun_0DC0(var_8)
    var_24 = 1139803630595787993;
    pri = FlagSet(var_24)
    pri = 0;
    return pri;
}
// fun_11E0
fun_11E0() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    pri = FieldCameraClearDelay()
    var_24 = 1160;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_1270
fun_1270() {
    pri = CommandNOP()
    var_8 = 0;
    pri = fun_0F58()
    var_16 = 0;
    pri = fun_0FB0()
    var_24 = 0;
    pri = fun_0FC8()
    var_32 = 0;
    pri = fun_0FE0()
    var_40 = 0;
    pri = fun_1168()
    var_48 = 0;
    pri = fun_1180()
    var_56 = 0;
    pri = fun_11E0()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_1360
fun_1360() {
    var_8 = 0;
    pri = fun_0FB0()
    var_16 = 0;
    pri = fun_1180()
    pri = 0;
    return pri;
}
