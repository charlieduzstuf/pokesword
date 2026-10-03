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
        case 0xb9d5f75ec1ab34b8:
        {
// switch_00C8_case_0xb9d5f75ec1ab34b8
            var_8 = 0;
            pri = fun_0178()
            OP_JUMP lab_0110
        }
        case 0xc0740b2e7966ad37:
        {
// switch_00C8_case_0xc0740b2e7966ad37
            var_8 = 0;
            pri = fun_0160()
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
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    OP_EQ_P_C_PRI 645
    OP_JZER lab_0208
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = -6473891332694040129;
    pri = GlobalCall(var_48, var_40, var_32, var_24, var_16)
// lab_0208
    pri = 0;
    return pri;
}
