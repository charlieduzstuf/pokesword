// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = IsFieldObjectSetupTiming_(var_8)
    return pri;
}
// fun_0038
fun_0038() {
    pri = g_mode;
    switch (pri) {
// switch_0120
        case default:
        {
// switch_0120_case_default
            pri = CommandNOP()
            OP_JUMP lab_0178
// lab_0178
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0120_case_0x0
            var_8 = 0;
            pri = fun_0188()
            OP_JUMP lab_0178
        }
        case 0x1:
        {
// switch_0120_case_0x1
            var_8 = 0;
            pri = fun_01B8()
            OP_JUMP lab_0178
        }
        case 0x2:
        {
// switch_0120_case_0x2
            var_8 = 0;
            pri = fun_0278()
            OP_JUMP lab_0178
        }
        case 0x3:
        {
// switch_0120_case_0x3
            var_8 = 0;
            pri = fun_02A8()
            OP_JUMP lab_0178
        }
    }
}
// fun_0188
fun_0188() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_01B8
fun_01B8() {
    var_8 = 3545634300468685848;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_0268
    var_24 = 2;
    var_32 = 32;
    var_40 = 3545634300468685848;
    pri = SetAnimationStateIntParameter_(var_40, var_32, var_24)
    var_48 = 1;
    var_56 = 112;
    var_64 = 3545634300468685848;
    pri = SetAnimationStateBoolParameter_(var_64, var_56, var_48)
// lab_0268
    pri = 0;
    return pri;
}
// fun_0278
fun_0278() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_02A8
fun_02A8() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
