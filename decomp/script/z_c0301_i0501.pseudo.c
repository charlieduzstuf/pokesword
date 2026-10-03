// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_00A0
        case default:
        {
// switch_00A0_case_default
            pri = CommandNOP()
            OP_JUMP lab_00D8
// lab_00D8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_00A0_case_0x0
            var_8 = 0;
            pri = fun_00E8()
            OP_JUMP lab_00D8
        }
        case 0x80c2a83769e56f8:
        {
// switch_00A0_case_0x80c2a83769e56f8
            var_8 = 0;
            pri = fun_0100()
            OP_JUMP lab_00D8
        }
    }
}
// fun_00E8
fun_00E8() {
    pri = 0;
    return pri;
}
// fun_0100
fun_0100() {
    pri = 0;
    return pri;
}
