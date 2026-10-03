// fun_0008
fun_0008() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_0048
fun_0048() {
    var_8 = 0;
    var_16 = 7868662798435347852;
    pri = WorkSet(var_16, var_8)
    var_32 = 32;
    pri = GetCharaUniqueHashFromNameHash(var_32)
    var_8 = pri;
    var_40 = 0;
    var_48 = 64;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_0008(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_00F8
fun_00F8() {
    var_8 = 1;
    var_16 = 7868662798435347852;
    pri = WorkSet(var_16, var_8)
    var_32 = 168;
    pri = GetCharaUniqueHashFromNameHash(var_32)
    var_8 = pri;
    var_40 = 1;
    var_48 = 200;
    var_56 = var_8;
    var_64 = 24;
    pri = fun_0008(var_56, var_48, var_40)
    pri = 0;
    return pri;
}
// fun_01A8
fun_01A8() {
    pri = g_mode;
    switch (pri) {
// switch_02B8
        case default:
        {
// switch_02B8_case_default
            pri = CommandNOP()
            OP_JUMP lab_0320
// lab_0320
            pri = 0;
            return pri;
        }
        case 0xc19d69c0613981cd:
        {
// switch_02B8_case_0xc19d69c0613981cd
            var_8 = 0;
            pri = fun_03B0()
            OP_JUMP lab_0320
        }
        case 0xc4455cbf3fc53802:
        {
// switch_02B8_case_0xc4455cbf3fc53802
            var_8 = 0;
            pri = fun_0360()
            OP_JUMP lab_0320
        }
        case 0x0:
        {
// switch_02B8_case_0x0
            var_8 = 0;
            pri = fun_0330()
            OP_JUMP lab_0320
        }
        case 0x3ab9bbb36ab022de:
        {
// switch_02B8_case_0x3ab9bbb36ab022de
            var_8 = 0;
            pri = fun_03E0()
            OP_JUMP lab_0320
        }
        case 0x628294f012e70565:
        {
// switch_02B8_case_0x628294f012e70565
            var_8 = 0;
            pri = fun_0348()
            OP_JUMP lab_0320
        }
    }
}
// fun_0330
fun_0330() {
    pri = 0;
    return pri;
}
// fun_0348
fun_0348() {
    pri = 0;
    return pri;
}
// fun_0360
fun_0360() {
    var_8 = 2;
    var_16 = 304;
    var_24 = 6282085758111793762;
    pri = SetAnimationStateIntParameter_(var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_03B0
fun_03B0() {
    var_8 = 0;
    pri = fun_0048()
    pri = 0;
    return pri;
}
// fun_03E0
fun_03E0() {
    var_8 = 0;
    pri = fun_00F8()
    pri = 0;
    return pri;
}
