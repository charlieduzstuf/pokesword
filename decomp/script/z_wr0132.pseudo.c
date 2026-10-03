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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_00C0
fun_00C0() {
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
// fun_0130
fun_0130() {
    OP_JUMP lab_0148
// lab_0148
    pri = FadeWait_()
    OP_JZER lab_0180
    pri = 0;
    return pri;
// lab_0180
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0148
    pri = 0;
    return pri;
}
// fun_01C0
fun_01C0() {
    pri = g_mode;
    switch (pri) {
// switch_02D0
        case default:
        {
// switch_02D0_case_default
            pri = CommandNOP()
            OP_JUMP lab_0338
// lab_0338
            pri = 0;
            return pri;
        }
        case 0x80a140f427c3f883:
        {
// switch_02D0_case_0x80a140f427c3f883
            var_8 = 0;
            pri = fun_0520()
            OP_JUMP lab_0338
        }
        case 0x8d0140735a01920e:
        {
// switch_02D0_case_0x8d0140735a01920e
            var_8 = 0;
            pri = fun_0360()
            OP_JUMP lab_0338
        }
        case 0xceab368884e58633:
        {
// switch_02D0_case_0xceab368884e58633
            var_8 = 0;
            pri = fun_0378()
            OP_JUMP lab_0338
        }
        case 0x0:
        {
// switch_02D0_case_0x0
            var_8 = 0;
            pri = fun_0348()
            OP_JUMP lab_0338
        }
        case 0x261dc1a76131e052:
        {
// switch_02D0_case_0x261dc1a76131e052
            var_8 = 0;
            pri = fun_0458()
            OP_JUMP lab_0338
        }
    }
}
// fun_0348
fun_0348() {
    pri = 0;
    return pri;
}
// fun_0360
fun_0360() {
    pri = 0;
    return pri;
}
// fun_0378
fun_0378() {
    var_8 = 8288251802093069724;
    pri = FlagGet(var_8)
    OP_JZER lab_03C8
    pri = 0;
    return pri;
// lab_03C8
    var_8 = 562;
    pri = PokePartyCanEvolve(var_8)
    OP_JZER lab_0448
    var_16 = 2746564272400228434;
    pri = ReserveScript(var_16)
    var_24 = 8288251802093069724;
    pri = FlagSet(var_24)
// lab_0448
    pri = 0;
    return pri;
}
// fun_0458
fun_0458() {
    var_8 = 1;
    var_16 = 0;
    var_24 = 32;
    var_32 = 8;
    var_40 = 32;
    pri = fun_00C0(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0130()
    var_56 = 562;
    pri = PokePartyCallEvolve(var_56)
    var_64 = 80;
    var_72 = 8;
    var_80 = 16;
    pri = fun_0060(var_72, var_64)
    var_88 = 0;
    pri = fun_0130()
    pri = 0;
    return pri;
}
// fun_0520
fun_0520() {
    var_8 = 8288251802093069724;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
