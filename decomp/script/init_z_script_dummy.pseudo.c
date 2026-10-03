// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00F0
        case default:
        {
// switch_00F0_case_default
            pri = CommandNOP()
            OP_JUMP lab_0148
// lab_0148
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_00F0_case_0x0
            var_8 = 0;
            pri = fun_0158()
            OP_JUMP lab_0148
        }
        case 0x1:
        {
// switch_00F0_case_0x1
            var_8 = 0;
            pri = fun_0170()
            OP_JUMP lab_0148
        }
        case 0x2:
        {
// switch_00F0_case_0x2
            var_8 = 0;
            pri = fun_0188()
            OP_JUMP lab_0148
        }
        case 0x3:
        {
// switch_00F0_case_0x3
            var_8 = 0;
            pri = fun_01A0()
            OP_JUMP lab_0148
        }
    }
}
// fun_0158
fun_0158() {
    pri = 0;
    return pri;
}
// fun_0170
fun_0170() {
    pri = 0;
    return pri;
}
// fun_0188
fun_0188() {
    pri = 0;
    return pri;
}
// fun_01A0
fun_01A0() {
    pri = 0;
    return pri;
}
