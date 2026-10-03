// fun_0008
fun_0008() {
    pri = 0;
    OP_ADDR_ALT -24
    OP_FILL 24
    OP_PUSH_P_ADR -24
    pri = GetWildBattleResult_(var_24)
    OP_ADDR_P_PRI -24
    OP_LOAD_I 
    return pri;
}
// fun_0080
fun_0080() {
    pri = g_mode;
    switch (pri) {
// switch_0118
        case default:
        {
// switch_0118_case_default
            pri = CommandNOP()
            OP_JUMP lab_0150
// lab_0150
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0118_case_0x0
            var_8 = 0;
            pri = fun_0160()
            OP_JUMP lab_0150
        }
        case 0x1:
        {
// switch_0118_case_0x1
            var_8 = 0;
            pri = fun_0190()
            OP_JUMP lab_0150
        }
    }
}
// fun_0160
fun_0160() {
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_0190
fun_0190() {
    var_8 = 7991226338936091659;
    pri = FlagGet(var_8)
    OP_JZER lab_05B0
    var_24 = 0;
    pri = fun_0008()
    var_8 = pri;
    OP_ZERO_P_S -16
    OP_ZERO_P_S -24
    pri = GetLastHonooGymResult()
    OP_JZER lab_03A0
    OP_ZERO_P_S -32
    pri = var_8;
    switch (pri) {
// switch_02B8
        case default:
        {
// switch_02B8_case_default
            var_16 = 7889727436089521219;
            pri = WorkGet(var_16)
            var_40 = pri;
            OP_LOAD_S_BOTH -32, -40
            OP_ADD 
            var_24 = pri;
            var_32 = 7889727436089521219;
            pri = WorkSet(var_32, var_24)
            pri = var_32;
            var_16 = pri;
            OP_JUMP lab_03A0
// lab_03A0
            var_8 = var_16;
            var_16 = -7033287532161752766;
            pri = WorkSet(var_16, var_8)
            OP_ZERO_P_S -32
            var_32 = 7889727436089521219;
            pri = WorkGet(var_32)
            alt = 5;
            OP_JSLESS lab_04F0
            var_40 = 0;
            var_48 = -1018736999534205329;
            pri = WorkSet(var_48, var_40)
            var_56 = 0;
            var_64 = -1018735900022577118;
            pri = WorkSet(var_64, var_56)
            var_72 = 0;
            var_80 = -1018734800510948907;
            pri = WorkSet(var_80, var_72)
            var_88 = 4737462041362256485;
            pri = ReserveScript(var_88)
            OP_CONST_S -32, 1
// lab_04F0
            pri = var_32;
            OP_JNZ lab_0580
            var_16 = var_24;
            var_24 = var_16;
            var_32 = 16;
            pri = fun_05C0(var_24, var_16)
            var_40 = pri;
            pri = var_40;
            OP_JZER lab_0578
            var_40 = var_40;
            pri = ReserveScript(var_40)
// lab_0580
            var_8 = 7991226338936091659;
            pri = FlagReset(var_8)
// lab_0578
        }
        case 0x1:
        {
// switch_02B8_case_0x1
            OP_CONST_S -32, 1
            OP_JUMP switch_02B8_case_default
        }
        case 0x5:
        {
// switch_02B8_case_0x5
            OP_CONST_S -32, 2
            OP_JUMP switch_02B8_case_default
        }
    }
// lab_05B0
    pri = 0;
    return pri;
}
// fun_05C0
fun_05C0() {
    OP_ZERO_P_S -8
    var_24 = 7889727436089521219;
    pri = WorkGet(var_24)
    var_16 = pri;
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_06A8
    pri = var_16;
    alt = 4;
    OP_JSLESS lab_0680
    OP_CONST_S -8, 2
    OP_JUMP lab_0698
// lab_06A8
    OP_CONST_S -8, 3
// lab_0680
    OP_CONST_S -8, 1
// lab_0698
    OP_JUMP lab_06C0
// lab_06C0
    pri = var_8;
    OP_JNZ lab_06F0
    pri = 0;
    return pri;
// lab_06F0
    pri = 32;
    var_8 = pri;
    pri = var_8;
    OP_ADD_P_C -1
    OP_POP_ALT 
    OP_IDXADDR_P_B 3
    OP_LOAD_I 
    return pri;
}
