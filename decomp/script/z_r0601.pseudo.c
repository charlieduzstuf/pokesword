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
        case 0x62de3ed0432ec804:
        {
// switch_00C8_case_0x62de3ed0432ec804
            var_8 = 0;
            pri = fun_0150()
            OP_JUMP lab_0110
        }
        case 0x6e8390927c943e94:
        {
// switch_00C8_case_0x6e8390927c943e94
            var_8 = 0;
            pri = fun_0138()
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
    var_8 = 8404135271039631384;
    pri = FlagSet(var_8)
    pri = 0;
    return pri;
}
