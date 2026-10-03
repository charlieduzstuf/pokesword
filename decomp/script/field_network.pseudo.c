// fun_0008
fun_0008() {
    var_8 = arg_0;
    pri = _Suspend(var_8)
    pri = 0;
    OP_ZERO_ALT 
    OP_HALT 12
    pri = 0;
    return pri;
}
// fun_0060
fun_0060() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSLESS lab_00A0
    pri = 0;
    return pri;
// lab_00A0
    OP_ZERO_P_S -8
    OP_JUMP lab_00C8
// lab_00C8
    OP_LOAD_S_BOTH -8, 24
    OP_JSGEQ lab_0120
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_00C0
// lab_0120
    pri = 0;
    return pri;
// lab_00C0
    OP_INC_P_S -8
}
// fun_0138
fun_0138() {
    pri = arg_4;
    alt = 1;
    OP_AND 
    var_8 = pri;
    pri = arg_4;
    alt = 4;
    OP_AND 
    var_16 = pri;
    pri = arg_4;
    alt = 16;
    OP_AND 
    var_24 = pri;
    pri = arg_4;
    alt = 8;
    OP_AND 
    var_32 = pri;
    OP_ZERO_P_S -40
    pri = arg_2;
    switch (pri) {
// switch_0750
        case default:
        {
// switch_0750_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_0798
// lab_0798
            var_8 = arg_6;
            var_16 = arg_5;
            var_24 = var_32;
            var_32 = var_24;
            var_40 = var_16;
            var_48 = var_8;
            var_56 = var_40;
            var_64 = arg_1;
            var_72 = 0;
            var_80 = arg_0;
            pri = MsgWin_(var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16, var_8)
            pri = arg_4;
            alt = 2;
            OP_AND 
            OP_JNZ lab_0840
            var_88 = 0;
            pri = fun_0910()
// lab_0840
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_0750_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0338
                case default:
                {
// switch_0338_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_03B0
// lab_03B0
                    OP_JUMP lab_0798
                }
                case 0x0:
                {
// switch_0338_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_03B0
                }
                case 0x1:
                {
// switch_0338_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_03B0
                }
                case 0x2:
                {
// switch_0338_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_03B0
                }
                case 0x3:
                {
// switch_0338_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_03B0
                }
                case 0x4:
                {
// switch_0338_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_03B0
                }
                case 0x5:
                {
// switch_0338_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_03B0
                }
            }
        }
        case 0x65:
        {
// switch_0750_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_04F0
                case default:
                {
// switch_04F0_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0568
// lab_0568
                    OP_JUMP lab_0798
                }
                case 0x0:
                {
// switch_04F0_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_0568
                }
                case 0x1:
                {
// switch_04F0_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_0568
                }
                case 0x2:
                {
// switch_04F0_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_0568
                }
                case 0x3:
                {
// switch_04F0_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_0568
                }
                case 0x4:
                {
// switch_04F0_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_0568
                }
                case 0x5:
                {
// switch_04F0_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_0568
                }
            }
        }
        case 0x66:
        {
// switch_0750_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_06A8
                case default:
                {
// switch_06A8_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0720
// lab_0720
                    OP_JUMP lab_0798
                }
                case 0x0:
                {
// switch_06A8_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_0720
                }
                case 0x1:
                {
// switch_06A8_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_0720
                }
                case 0x2:
                {
// switch_06A8_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_0720
                }
                case 0x3:
                {
// switch_06A8_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_0720
                }
                case 0x4:
                {
// switch_06A8_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_0720
                }
                case 0x5:
                {
// switch_06A8_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_0720
                }
            }
        }
    }
}
// fun_0858
fun_0858() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0138(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_08C0
fun_08C0() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0858(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0910
fun_0910() {
    OP_JUMP lab_0928
// lab_0928
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0968
    pri = 0;
    return pri;
// lab_0968
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0928
    pri = 0;
    return pri;
}
// fun_09A8
fun_09A8() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_09D8
fun_09D8() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_0;
    var_32 = 26;
    pri = PG_WordSetRegister(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0A28
fun_0A28() {
    pri = g_mode;
    switch (pri) {
// switch_0AC0
        case default:
        {
// switch_0AC0_case_default
            pri = CommandNOP()
            OP_JUMP lab_0AF8
// lab_0AF8
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0AC0_case_0x0
            var_8 = 0;
            pri = fun_0B08()
            OP_JUMP lab_0AF8
        }
        case 0x76b4e3ddac7e4325:
        {
// switch_0AC0_case_0x76b4e3ddac7e4325
            var_8 = 0;
            pri = fun_0B20()
            OP_JUMP lab_0AF8
        }
    }
}
// fun_0B08
fun_0B08() {
    pri = 0;
    return pri;
}
// fun_0B20
fun_0B20() {
    var_16 = 0;
    pri = TempWorkGet(var_16)
    var_8 = pri;
    OP_ZERO_P_S -16
    pri = var_8;
    switch (pri) {
// switch_0C40
        case default:
        {
// switch_0C40_case_default
            pri = 0;
            return pri;
            OP_JUMP lab_0C88
// lab_0C88
            var_8 = 3;
            var_16 = 0;
            var_24 = var_16;
            var_32 = 24;
            pri = fun_08C0(var_24, var_16, var_8)
            var_40 = 90;
            var_48 = 8;
            pri = fun_0060(var_40)
            var_56 = 0;
            pri = fun_09A8()
            var_64 = var_8;
            pri = CallNetworkEvent(var_64)
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_0C40_case_0x0
            OP_CONST_S -16, -8140514021827731672
            OP_JUMP lab_0C88
        }
        case 0x1:
        {
// switch_0C40_case_0x1
            OP_CONST_S -16, -8164293056429416192
            OP_JUMP lab_0C88
        }
        case 0x2:
        {
// switch_0C40_case_0x2
            OP_CONST_S -16, -5727485473874622110
            var_8 = 0;
            var_16 = 8;
            pri = fun_09D8(var_8)
            OP_JUMP lab_0C88
        }
    }
}
