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
        case 0xa27c72929a043696:
        {
// switch_00C8_case_0xa27c72929a043696
            var_8 = 0;
            pri = fun_0138()
            OP_JUMP lab_0110
        }
        case 0x0:
        {
// switch_00C8_case_0x0
            var_8 = 0;
            pri = fun_0120()
            OP_JUMP lab_0110
        }
        case 0x7118d41a240c68e:
        {
// switch_00C8_case_0x7118d41a240c68e
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
    var_8 = 8917331683143190470;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
