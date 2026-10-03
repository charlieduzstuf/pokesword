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
        case 0x4daadb21e0b6ca2d:
        {
// switch_00C8_case_0x4daadb21e0b6ca2d
            var_8 = 0;
            pri = fun_0138()
            OP_JUMP lab_0110
        }
        case 0x62eb5acd7d4e84b5:
        {
// switch_00C8_case_0x62eb5acd7d4e84b5
            var_8 = 0;
            pri = fun_0150()
            OP_JUMP lab_0110
        }
    }
}
// fun_0120
fun_0120() {
    pri = 0;
    return pri;
}
// fun_0138
fun_0138() {
    pri = 0;
    return pri;
}
// fun_0150
fun_0150() {
    var_8 = -8234580309977237507;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
