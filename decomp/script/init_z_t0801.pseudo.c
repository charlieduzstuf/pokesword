// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = IsFieldObjectExists_(var_8)
    return pri;
}
// fun_0038
fun_0038() {
    var_8 = arg_0;
    pri = IsFieldObjectSetupTiming_(var_8)
    return pri;
}
// fun_0068
fun_0068() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = arg_0;
    pri = SetAnimationStateBoolParameter_(var_24, var_16, var_8)
    return pri;
}
// fun_00A8
fun_00A8() {
    pri = g_mode;
    switch (pri) {
// switch_0140
        case default:
        {
// switch_0140_case_default
            pri = CommandNOP()
            OP_JUMP lab_0178
// lab_0178
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0140_case_0x0
            var_8 = 0;
            pri = fun_0188()
            OP_JUMP lab_0178
        }
        case 0x1:
        {
// switch_0140_case_0x1
            var_8 = 0;
            pri = fun_01B8()
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
    pri = PlayerGetZoneID()
    OP_EQ_C_PRI 4546239514756643921
    OP_JZER lab_0258
    var_8 = -1901612872801575524;
    pri = FlagGet(var_8)
    OP_JNZ lab_0258
    var_16 = -1901612872801575524;
    pri = FlagSet(var_16)
// lab_0258
    var_16 = 6910712898869243;
    pri = WorkGet(var_16)
    var_8 = pri;
    var_32 = -2580759782777728451;
    pri = WorkGet(var_32)
    var_16 = pri;
    var_40 = 5953194496154584116;
    var_48 = 8;
    pri = fun_0038(var_40)
    OP_JZER lab_0358
    pri = var_16;
    alt = 40;
    OP_JSLESS lab_0358
    var_56 = 1;
    var_64 = 32;
    var_72 = 5953194496154584116;
    var_80 = 24;
    pri = fun_0068(var_72, var_64, var_56)
// lab_0358
    pri = var_16;
    alt = 40;
    OP_JSLESS lab_03D0
    var_16 = 136;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_24 = var_24;
    pri = EvCameraAddIgnoreScrollStopHash(var_24)
// lab_03D0
    pri = var_16;
    alt = 70;
    OP_JSLESS lab_0448
    var_16 = 328;
    pri = GetFnvHash64(var_16)
    var_24 = pri;
    var_24 = var_24;
    pri = EvCameraAddIgnoreScrollStopHash(var_24)
// lab_0448
    pri = var_8;
    OP_EQ_P_C_PRI 1330
    OP_JZER lab_04B0
    pri = var_16;
    OP_MOVE_ALT 
    pri = 0;
    OP_XCHG 
    OP_JSLEQ lab_04B0
    pri = 1;
    OP_JUMP lab_04B8
// lab_04B0
    pri = 0;
// lab_04B8
    OP_JZER lab_0598
    var_8 = -6925055579901216630;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JZER lab_0550
    var_24 = -303377521461947352;
    var_32 = 8;
    pri = fun_0008(var_24)
    OP_JZER lab_0550
    pri = 1;
    OP_JUMP lab_0558
// lab_0598
    pri = 0;
    return pri;
// lab_0550
    pri = 0;
// lab_0558
    OP_JZER lab_0598
    OP_PUSH2_C -303377521461947352, -6925055579901216630
    pri = SetBamiriInfoToChara(var_0, var_-8)
}
