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
        case 0x0:
        {
// switch_00C8_case_0x0
            var_8 = 0;
            pri = fun_0120()
            OP_JUMP lab_0110
        }
        case 0x35bc4a10ae5aaef7:
        {
// switch_00C8_case_0x35bc4a10ae5aaef7
            var_8 = 0;
            pri = fun_0160()
            OP_JUMP lab_0110
        }
        case 0x5e4ade85824a4b8a:
        {
// switch_00C8_case_0x5e4ade85824a4b8a
            var_8 = 0;
            pri = fun_0178()
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
    pri = RomGetVersion()
    OP_EQ_P_C_PRI 44
    OP_JZER lab_0208
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 7298688327097273996;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
    OP_JUMP lab_0250
// lab_0208
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 7298696023678671473;
    pri = GlobalCall(var_40, var_32, var_24, var_16, var_8)
// lab_0250
    pri = 0;
    return pri;
}
