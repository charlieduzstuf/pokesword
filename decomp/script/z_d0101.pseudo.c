// fun_0008
fun_0008() {
    pri = g_mode;
    switch (pri) {
// switch_0118
        case default:
        {
// switch_0118_case_default
            pri = CommandNOP()
            OP_JUMP lab_0180
// lab_0180
            pri = 0;
            return pri;
        }
        case 0x9786e2ddda6b6c77:
        {
// switch_0118_case_0x9786e2ddda6b6c77
            var_8 = 0;
            pri = fun_03A0()
            OP_JUMP lab_0180
        }
        case 0xc9ce0a041e2d6c43:
        {
// switch_0118_case_0xc9ce0a041e2d6c43
            var_8 = 0;
            pri = fun_01D0()
            OP_JUMP lab_0180
        }
        case 0x0:
        {
// switch_0118_case_0x0
            var_8 = 0;
            pri = fun_0190()
            OP_JUMP lab_0180
        }
        case 0x523fc331f2aa5def:
        {
// switch_0118_case_0x523fc331f2aa5def
            var_8 = 0;
            pri = fun_0308()
            OP_JUMP lab_0180
        }
        case 0x523fc431f2aa5fa2:
        {
// switch_0118_case_0x523fc431f2aa5fa2
            var_8 = 0;
            pri = fun_0270()
            OP_JUMP lab_0180
        }
    }
}
// fun_0190
fun_0190() {
    pri = 0;
    return pri;
}
// public GetSceneChangeData
public GetSceneChangeData() {
    alt = 32;
    pri = arg_0;
    OP_LIDX_P_B 3
    return pri;
}
// fun_01D0
fun_01D0() {
    var_8 = 6910712898869243;
    pri = WorkGet(var_8)
    alt = 141;
    OP_JSLESS lab_0260
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = -7845328890259614599;
    pri = GlobalCall(var_48, var_40, var_32, var_24, var_16)
// lab_0260
    pri = 0;
    return pri;
}
// fun_0270
fun_0270() {
    var_8 = 1;
    var_16 = -3096809212025893132;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 60;
    OP_PUSH3_C 4591870180066957722, 4678479150791524352, 4607182418800017408
    var_40 = 2;
    pri = FogStart(var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_0308
fun_0308() {
    var_8 = 2;
    var_16 = -3096809212025893132;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 60;
    OP_PUSH3_C 4595653203753948938, 4678479150791524352, 4607182418800017408
    var_40 = 2;
    pri = FogStart(var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
// fun_03A0
fun_03A0() {
    var_8 = 0;
    var_16 = -3096809212025893132;
    pri = WorkSet(var_16, var_8)
    var_24 = 0;
    var_32 = 60;
    OP_PUSH3_C 4591437834502730154, 4678479150791524352, 4648488871632306176
    var_40 = 2;
    pri = FogStart(var_40, var_32, var_24, var_16, var_8, var_0)
    pri = 0;
    return pri;
}
