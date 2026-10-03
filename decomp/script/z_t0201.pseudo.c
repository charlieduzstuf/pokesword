// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00C8
        case default:
        {
// switch_00C8_case_default
            pri = CommandNOP()
            OP_JUMP lab_0110
// lab_0110
            pri = 0;
            return pri;
        }
        case 0xaeb4352e6f3a1461:
        {
// switch_00C8_case_0xaeb4352e6f3a1461
            var_8 = 0;
            pri = fun_0160()
            OP_JUMP lab_0110
        }
        case 0xb5f91545e011e790:
        {
// switch_00C8_case_0xb5f91545e011e790
            var_8 = 0;
            pri = fun_0178()
            OP_JUMP lab_0110
        }
        case 0x0:
        {
// switch_00C8_case_0x0
            var_8 = 0;
            pri = fun_0120()
            OP_JUMP lab_0110
        }
    }
}
// fun_0120
fun_0120() {
    pri = 0;
    return pri;
}
// public fun_63F02D54
public fun_63F02D54() {
    alt = 32;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_0160
fun_0160() {
    pri = 0;
    return pri;
}
// fun_0178
fun_0178() {
    var_8 = 6399049165662858200;
    pri = FlagReset(var_8)
    pri = 0;
    return pri;
}
