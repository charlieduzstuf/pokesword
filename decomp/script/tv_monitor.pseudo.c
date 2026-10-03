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
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0178
fun_0178() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_01C0
    pri = 0;
    return pri;
// lab_01C0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0200
// lab_0200
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_03B0(var_8)
    OP_JNZ lab_0288
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_0278
    pri = 0;
    return pri;
// lab_0288
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_02D0
    pri = 0;
    return pri;
// lab_02D0
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0330
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0378(var_8)
    pri = 0;
    return pri;
// lab_0330
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0200
    pri = 0;
    return pri;
// lab_0278
    OP_JUMP lab_02D0
}
// fun_0378
fun_0378() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_03B0
fun_03B0() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_03E0
fun_03E0() {
    pri = g_mode;
    switch (pri) {
// switch_0608
        case default:
        {
// switch_0608_case_default
            pri = CommandNOP()
            OP_JUMP lab_06E0
// lab_06E0
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0608_case_0x0
            var_8 = 0;
            pri = fun_06F0()
            OP_JUMP lab_06E0
        }
        case 0x2d0b466a99757a6d:
        {
// switch_0608_case_0x2d0b466a99757a6d
            var_8 = 0;
            pri = fun_0938()
            OP_JUMP lab_06E0
        }
        case 0x5be51676bd49b1c0:
        {
// switch_0608_case_0x5be51676bd49b1c0
            var_8 = 0;
            pri = fun_0740()
            OP_JUMP lab_06E0
        }
        case 0x5be51776bd49b373:
        {
// switch_0608_case_0x5be51776bd49b373
            var_8 = 0;
            pri = fun_0778()
            OP_JUMP lab_06E0
        }
        case 0x5be51976bd49b6d9:
        {
// switch_0608_case_0x5be51976bd49b6d9
            var_8 = 0;
            pri = fun_0708()
            OP_JUMP lab_06E0
        }
        case 0x5be51a76bd49b88c:
        {
// switch_0608_case_0x5be51a76bd49b88c
            var_8 = 0;
            pri = fun_0820()
            OP_JUMP lab_06E0
        }
        case 0x5be51b76bd49ba3f:
        {
// switch_0608_case_0x5be51b76bd49ba3f
            var_8 = 0;
            pri = fun_0858()
            OP_JUMP lab_06E0
        }
        case 0x5be51c76bd49bbf2:
        {
// switch_0608_case_0x5be51c76bd49bbf2
            var_8 = 0;
            pri = fun_07B0()
            OP_JUMP lab_06E0
        }
        case 0x5be51d76bd49bda5:
        {
// switch_0608_case_0x5be51d76bd49bda5
            var_8 = 0;
            pri = fun_07E8()
            OP_JUMP lab_06E0
        }
        case 0x5be51e76bd49bf58:
        {
// switch_0608_case_0x5be51e76bd49bf58
            var_8 = 0;
            pri = fun_0900()
            OP_JUMP lab_06E0
        }
        case 0x5be52076bd49c2be:
        {
// switch_0608_case_0x5be52076bd49c2be
            var_8 = 0;
            pri = fun_0890()
            OP_JUMP lab_06E0
        }
        case 0x5be52176bd49c471:
        {
// switch_0608_case_0x5be52176bd49c471
            var_8 = 0;
            pri = fun_08C8()
            OP_JUMP lab_06E0
        }
    }
}
// fun_06F0
fun_06F0() {
    pri = 0;
    return pri;
}
// fun_0708
fun_0708() {
    var_8 = 32;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0740
fun_0740() {
    var_8 = 72;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0778
fun_0778() {
    var_8 = 112;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_07B0
fun_07B0() {
    var_8 = 152;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_07E8
fun_07E8() {
    var_8 = 192;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0820
fun_0820() {
    var_8 = 232;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0858
fun_0858() {
    var_8 = 272;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0890
fun_0890() {
    var_8 = 312;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_08C8
fun_08C8() {
    var_8 = 352;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0900
fun_0900() {
    var_8 = 392;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0938
fun_0938() {
    var_8 = 432;
    var_16 = 8;
    pri = fun_0970(var_8)
    pri = 0;
    return pri;
}
// fun_0970
fun_0970() {
    var_16 = arg_0;
    pri = GetZonePlacementHash(var_16)
    var_8 = pri;
    OP_CONST_S -16, 1
    var_40 = 512;
    var_48 = var_8;
    pri = IsAnimationStateName_(var_48, var_40)
    var_24 = pri;
    pri = var_24;
    OP_JZER lab_0AD0
    var_64 = 7506713967005848083;
    pri = FlagGet(var_64)
    OP_ZERO_ALT 
    OP_EQ 
    var_32 = pri;
    pri = var_32;
    OP_JZER lab_0AA0
    OP_CONST_S -16, 3
    OP_JUMP lab_0AB8
// lab_0AD0
    OP_CONST_S -16, 1
// lab_0AA0
    OP_CONST_S -16, 2
// lab_0AB8
    OP_JUMP lab_0AE8
// lab_0AE8
    var_8 = var_16;
    var_16 = 544;
    var_24 = var_8;
    var_32 = 24;
    pri = fun_0138(var_24, var_16, var_8)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0178(var_40)
    pri = 0;
    return pri;
}
