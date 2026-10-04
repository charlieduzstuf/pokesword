// fun_0010
fun_0010() {
    OP_BREAK 
    OP_PUSH_S 56
    OP_PUSH_S 48
    OP_PUSH_S 40
    OP_PUSH_S 32
    OP_PUSH_S 24
    OP_PUSH 0
    var_8 = 48;
    OP_SYSREQ_C AI_CMD
    OP_STACK 56
    return pri;
}
// fun_00B8
fun_00B8() {
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_LOAD_ALT 8
    OP_ADD 
    OP_STOR_PRI 8
    pri = 0;
    return pri;
}
// fun_0110
fun_0110() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 117;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    return pri;
}
// fun_0198
fun_0198() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 62;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    pri = fun_0280()
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_0280
fun_0280() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 62;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 79;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 57;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 1
    OP_JZER lab_0538
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 67;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_0538
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_0538
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 287;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_06D8
    var_56 = 0;
    var_64 = 0;
    var_72 = 220;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_06D8
    var_104 = 0;
    var_112 = 0;
    var_120 = 297;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_06D8
    pri = 0;
    OP_JUMP lab_06E8
// lab_06D8
    pri = 1;
// lab_06E8
    OP_JZER lab_0890
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 2;
    OP_JEQ lab_0780
    OP_LOAD_S_PRI -16
    alt = 1;
    OP_JEQ lab_0780
    pri = 1;
    OP_JUMP lab_0788
// lab_0890
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 93;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0A78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    pri = fun_0110()
    var_88 = pri;
    var_96 = 26;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_0A78
    OP_BREAK 
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 1;
    var_144 = 0;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_JZER lab_0A78
    OP_BREAK 
    var_160 = 1;
    var_168 = 8;
    pri = fun_00B8(var_160)
// lab_0A78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0E98
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    pri = fun_0110()
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 192
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 223
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 517
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 47
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 48
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 320
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 95
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 59
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 87
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 123
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 411
    OP_JNZ lab_0DA8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 542
    OP_JNZ lab_0DA8
    pri = 0;
    OP_JUMP lab_0DB8
// lab_0E98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 123;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12D0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 2;
    OP_JEQ lab_0FA8
    OP_LOAD_S_PRI -16
    alt = 1;
    OP_JEQ lab_0FA8
    pri = 1;
    OP_JUMP lab_0FB0
// lab_12D0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    switch (pri) {
// switch_5658
        case default:
        {
// switch_5658_case_default
            OP_STACK 24
            pri = 0;
            return pri;
        }
        case 0x1:
        {
// switch_5658_case_0x1
            OP_BREAK 
            var_8 = 0;
            pri = fun_69D0()
            OP_JUMP switch_5658_case_default
        }
        case 0x3:
        {
// switch_5658_case_0x3
            OP_BREAK 
            var_8 = 0;
            pri = fun_7338()
            OP_JUMP switch_5658_case_default
        }
        case 0x7:
        {
// switch_5658_case_0x7
            OP_BREAK 
            var_8 = 0;
            pri = fun_74F0()
            OP_JUMP switch_5658_case_default
        }
        case 0x8:
        {
// switch_5658_case_0x8
            OP_BREAK 
            var_8 = 0;
            pri = fun_8178()
            OP_JUMP switch_5658_case_default
        }
        case 0x9:
        {
// switch_5658_case_0x9
            OP_BREAK 
            var_8 = 0;
            pri = fun_87B8()
            OP_JUMP switch_5658_case_default
        }
        case 0xa:
        {
// switch_5658_case_0xa
            OP_BREAK 
            var_8 = 0;
            pri = fun_95B0()
            OP_JUMP switch_5658_case_default
        }
        case 0xb:
        {
// switch_5658_case_0xb
            OP_BREAK 
            var_8 = 0;
            pri = fun_9D50()
            OP_JUMP switch_5658_case_default
        }
        case 0xc:
        {
// switch_5658_case_0xc
            OP_BREAK 
            var_8 = 0;
            pri = fun_A828()
            OP_JUMP switch_5658_case_default
        }
        case 0xd:
        {
// switch_5658_case_0xd
            OP_BREAK 
            var_8 = 0;
            pri = fun_B5E8()
            OP_JUMP switch_5658_case_default
        }
        case 0xe:
        {
// switch_5658_case_0xe
            OP_BREAK 
            var_8 = 0;
            pri = fun_BD88()
            OP_JUMP switch_5658_case_default
        }
        case 0xf:
        {
// switch_5658_case_0xf
            OP_BREAK 
            var_8 = 0;
            pri = fun_C860()
            OP_JUMP switch_5658_case_default
        }
        case 0x10:
        {
// switch_5658_case_0x10
            OP_BREAK 
            var_8 = 0;
            pri = fun_CB08()
            OP_JUMP switch_5658_case_default
        }
        case 0x11:
        {
// switch_5658_case_0x11
            OP_BREAK 
            var_8 = 0;
            pri = fun_FEB8()
            OP_JUMP switch_5658_case_default
        }
        case 0x12:
        {
// switch_5658_case_0x12
            OP_BREAK 
            var_8 = 0;
            pri = fun_103E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x13:
        {
// switch_5658_case_0x13
            OP_BREAK 
            var_8 = 0;
            pri = fun_10928()
            OP_JUMP switch_5658_case_default
        }
        case 0x14:
        {
// switch_5658_case_0x14
            OP_BREAK 
            var_8 = 0;
            pri = fun_10D18()
            OP_JUMP switch_5658_case_default
        }
        case 0x15:
        {
// switch_5658_case_0x15
            OP_BREAK 
            var_8 = 0;
            pri = fun_10FB0()
            OP_JUMP switch_5658_case_default
        }
        case 0x16:
        {
// switch_5658_case_0x16
            OP_BREAK 
            var_8 = 0;
            pri = fun_114F8()
            OP_JUMP switch_5658_case_default
        }
        case 0x17:
        {
// switch_5658_case_0x17
            OP_BREAK 
            var_8 = 0;
            pri = fun_118E8()
            OP_JUMP switch_5658_case_default
        }
        case 0x18:
        {
// switch_5658_case_0x18
            OP_BREAK 
            var_8 = 0;
            pri = fun_13830()
            OP_JUMP switch_5658_case_default
        }
        case 0x19:
        {
// switch_5658_case_0x19
            OP_BREAK 
            var_8 = 0;
            pri = fun_13C20()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a:
        {
// switch_5658_case_0x1a
            OP_BREAK 
            var_8 = 0;
            pri = fun_14D10()
            OP_JUMP switch_5658_case_default
        }
        case 0x1c:
        {
// switch_5658_case_0x1c
            OP_BREAK 
            var_8 = 0;
            pri = fun_14E70()
            OP_JUMP switch_5658_case_default
        }
        case 0x1e:
        {
// switch_5658_case_0x1e
            OP_BREAK 
            var_8 = 0;
            pri = fun_15A20()
            OP_JUMP switch_5658_case_default
        }
        case 0x20:
        {
// switch_5658_case_0x20
            OP_BREAK 
            var_8 = 0;
            pri = fun_15B80()
            OP_JUMP switch_5658_case_default
        }
        case 0x21:
        {
// switch_5658_case_0x21
            OP_BREAK 
            var_8 = 0;
            pri = fun_16820()
            OP_JUMP switch_5658_case_default
        }
        case 0x23:
        {
// switch_5658_case_0x23
            OP_BREAK 
            var_8 = 0;
            pri = fun_17000()
            OP_JUMP switch_5658_case_default
        }
        case 0x25:
        {
// switch_5658_case_0x25
            OP_BREAK 
            var_8 = 0;
            pri = fun_174D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x26:
        {
// switch_5658_case_0x26
            OP_BREAK 
            var_8 = 0;
            pri = fun_18230()
            OP_JUMP switch_5658_case_default
        }
        case 0x27:
        {
// switch_5658_case_0x27
            OP_BREAK 
            var_8 = 0;
            pri = fun_18450()
            OP_JUMP switch_5658_case_default
        }
        case 0x28:
        {
// switch_5658_case_0x28
            OP_BREAK 
            var_8 = 0;
            pri = fun_19390()
            OP_JUMP switch_5658_case_default
        }
        case 0x2a:
        {
// switch_5658_case_0x2a
            OP_BREAK 
            var_8 = 0;
            pri = fun_19B58()
            OP_JUMP switch_5658_case_default
        }
        case 0x2b:
        {
// switch_5658_case_0x2b
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A020()
            OP_JUMP switch_5658_case_default
        }
        case 0x30:
        {
// switch_5658_case_0x30
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A848()
            OP_JUMP switch_5658_case_default
        }
        case 0x31:
        {
// switch_5658_case_0x31
            OP_BREAK 
            var_8 = 0;
            pri = fun_1AAF0()
            OP_JUMP switch_5658_case_default
        }
        case 0x32:
        {
// switch_5658_case_0x32
            OP_BREAK 
            var_8 = 0;
            pri = fun_95B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x33:
        {
// switch_5658_case_0x33
            OP_BREAK 
            var_8 = 0;
            pri = fun_9D50()
            OP_JUMP switch_5658_case_default
        }
        case 0x34:
        {
// switch_5658_case_0x34
            OP_BREAK 
            var_8 = 0;
            pri = fun_A828()
            OP_JUMP switch_5658_case_default
        }
        case 0x35:
        {
// switch_5658_case_0x35
            OP_BREAK 
            var_8 = 0;
            pri = fun_B5E8()
            OP_JUMP switch_5658_case_default
        }
        case 0x36:
        {
// switch_5658_case_0x36
            OP_BREAK 
            var_8 = 0;
            pri = fun_BD88()
            OP_JUMP switch_5658_case_default
        }
        case 0x37:
        {
// switch_5658_case_0x37
            OP_BREAK 
            var_8 = 0;
            pri = fun_C860()
            OP_JUMP switch_5658_case_default
        }
        case 0x38:
        {
// switch_5658_case_0x38
            OP_BREAK 
            var_8 = 0;
            pri = fun_CB08()
            OP_JUMP switch_5658_case_default
        }
        case 0x3a:
        {
// switch_5658_case_0x3a
            OP_BREAK 
            var_8 = 0;
            pri = fun_103E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x3b:
        {
// switch_5658_case_0x3b
            OP_BREAK 
            var_8 = 0;
            pri = fun_10928()
            OP_JUMP switch_5658_case_default
        }
        case 0x3c:
        {
// switch_5658_case_0x3c
            OP_BREAK 
            var_8 = 0;
            pri = fun_10D18()
            OP_JUMP switch_5658_case_default
        }
        case 0x3d:
        {
// switch_5658_case_0x3d
            OP_BREAK 
            var_8 = 0;
            pri = fun_10FB0()
            OP_JUMP switch_5658_case_default
        }
        case 0x3e:
        {
// switch_5658_case_0x3e
            OP_BREAK 
            var_8 = 0;
            pri = fun_114F8()
            OP_JUMP switch_5658_case_default
        }
        case 0x3f:
        {
// switch_5658_case_0x3f
            OP_BREAK 
            var_8 = 0;
            pri = fun_118E8()
            OP_JUMP switch_5658_case_default
        }
        case 0x40:
        {
// switch_5658_case_0x40
            OP_BREAK 
            var_8 = 0;
            pri = fun_13830()
            OP_JUMP switch_5658_case_default
        }
        case 0x41:
        {
// switch_5658_case_0x41
            OP_BREAK 
            var_8 = 0;
            pri = fun_1AD98()
            OP_JUMP switch_5658_case_default
        }
        case 0x42:
        {
// switch_5658_case_0x42
            OP_BREAK 
            var_8 = 0;
            pri = fun_16820()
            OP_JUMP switch_5658_case_default
        }
        case 0x43:
        {
// switch_5658_case_0x43
            OP_BREAK 
            var_8 = 0;
            pri = fun_1B270()
            OP_JUMP switch_5658_case_default
        }
        case 0x46:
        {
// switch_5658_case_0x46
            OP_BREAK 
            var_8 = 0;
            pri = fun_1B718()
            OP_JUMP switch_5658_case_default
        }
        case 0x4b:
        {
// switch_5658_case_0x4b
            OP_BREAK 
            var_8 = 0;
            pri = fun_18450()
            OP_JUMP switch_5658_case_default
        }
        case 0x4e:
        {
// switch_5658_case_0x4e
            OP_BREAK 
            var_8 = 0;
            pri = fun_1BA90()
            OP_JUMP switch_5658_case_default
        }
        case 0x4f:
        {
// switch_5658_case_0x4f
            OP_BREAK 
            var_8 = 0;
            pri = fun_1BCD8()
            OP_JUMP switch_5658_case_default
        }
        case 0x50:
        {
// switch_5658_case_0x50
            OP_BREAK 
            var_8 = 0;
            pri = fun_1D280()
            OP_JUMP switch_5658_case_default
        }
        case 0x54:
        {
// switch_5658_case_0x54
            OP_BREAK 
            var_8 = 0;
            pri = fun_16820()
            OP_JUMP switch_5658_case_default
        }
        case 0x56:
        {
// switch_5658_case_0x56
            OP_BREAK 
            var_8 = 0;
            pri = fun_1D9A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x57:
        {
// switch_5658_case_0x57
            OP_BREAK 
            var_8 = 0;
            pri = fun_1F218()
            OP_JUMP switch_5658_case_default
        }
        case 0x58:
        {
// switch_5658_case_0x58
            OP_BREAK 
            var_8 = 0;
            pri = fun_1F218()
            OP_JUMP switch_5658_case_default
        }
        case 0x59:
        {
// switch_5658_case_0x59
            OP_BREAK 
            var_8 = 0;
            pri = fun_1F438()
            OP_JUMP switch_5658_case_default
        }
        case 0x5a:
        {
// switch_5658_case_0x5a
            OP_BREAK 
            var_8 = 0;
            pri = fun_1FEE8()
            OP_JUMP switch_5658_case_default
        }
        case 0x5b:
        {
// switch_5658_case_0x5b
            OP_BREAK 
            var_8 = 0;
            pri = fun_205A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x5c:
        {
// switch_5658_case_0x5c
            OP_BREAK 
            var_8 = 0;
            pri = fun_21398()
            OP_JUMP switch_5658_case_default
        }
        case 0x5e:
        {
// switch_5658_case_0x5e
            OP_BREAK 
            var_8 = 0;
            pri = fun_21470()
            OP_JUMP switch_5658_case_default
        }
        case 0x61:
        {
// switch_5658_case_0x61
            OP_BREAK 
            var_8 = 0;
            pri = fun_21398()
            OP_JUMP switch_5658_case_default
        }
        case 0x62:
        {
// switch_5658_case_0x62
            OP_BREAK 
            var_8 = 0;
            pri = fun_21858()
            OP_JUMP switch_5658_case_default
        }
        case 0x63:
        {
// switch_5658_case_0x63
            OP_BREAK 
            var_8 = 0;
            pri = fun_22160()
            OP_JUMP switch_5658_case_default
        }
        case 0x66:
        {
// switch_5658_case_0x66
            OP_BREAK 
            var_8 = 0;
            pri = fun_227A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x69:
        {
// switch_5658_case_0x69
            OP_BREAK 
            var_8 = 0;
            pri = fun_23028()
            OP_JUMP switch_5658_case_default
        }
        case 0x6a:
        {
// switch_5658_case_0x6a
            OP_BREAK 
            var_8 = 0;
            pri = fun_19B58()
            OP_JUMP switch_5658_case_default
        }
        case 0x6c:
        {
// switch_5658_case_0x6c
            OP_BREAK 
            var_8 = 0;
            pri = fun_23C20()
            OP_JUMP switch_5658_case_default
        }
        case 0x6d:
        {
// switch_5658_case_0x6d
            OP_BREAK 
            var_8 = 0;
            pri = fun_242C8()
            OP_JUMP switch_5658_case_default
        }
        case 0x6f:
        {
// switch_5658_case_0x6f
            OP_BREAK 
            var_8 = 0;
            pri = fun_24AA0()
            OP_JUMP switch_5658_case_default
        }
        case 0x70:
        {
// switch_5658_case_0x70
            OP_BREAK 
            var_8 = 0;
            pri = fun_26658()
            OP_JUMP switch_5658_case_default
        }
        case 0x71:
        {
// switch_5658_case_0x71
            OP_BREAK 
            var_8 = 0;
            pri = fun_26828()
            OP_JUMP switch_5658_case_default
        }
        case 0x73:
        {
// switch_5658_case_0x73
            OP_BREAK 
            var_8 = 0;
            pri = fun_26C28()
            OP_JUMP switch_5658_case_default
        }
        case 0x74:
        {
// switch_5658_case_0x74
            OP_BREAK 
            var_8 = 0;
            pri = fun_26F38()
            OP_JUMP switch_5658_case_default
        }
        case 0x76:
        {
// switch_5658_case_0x76
            OP_BREAK 
            var_8 = 0;
            pri = fun_27400()
            OP_JUMP switch_5658_case_default
        }
        case 0x78:
        {
// switch_5658_case_0x78
            OP_BREAK 
            var_8 = 0;
            pri = fun_27B30()
            OP_JUMP switch_5658_case_default
        }
        case 0x79:
        {
// switch_5658_case_0x79
            OP_BREAK 
            var_8 = 0;
            pri = fun_27C30()
            OP_JUMP switch_5658_case_default
        }
        case 0x7b:
        {
// switch_5658_case_0x7b
            OP_BREAK 
            var_8 = 0;
            pri = fun_28160()
            OP_JUMP switch_5658_case_default
        }
        case 0x7f:
        {
// switch_5658_case_0x7f
            OP_BREAK 
            var_8 = 0;
            pri = fun_28690()
            OP_JUMP switch_5658_case_default
        }
        case 0x80:
        {
// switch_5658_case_0x80
            OP_BREAK 
            var_8 = 0;
            pri = fun_29168()
            OP_JUMP switch_5658_case_default
        }
        case 0x84:
        {
// switch_5658_case_0x84
            OP_BREAK 
            var_8 = 0;
            pri = fun_296D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x85:
        {
// switch_5658_case_0x85
            OP_BREAK 
            var_8 = 0;
            pri = fun_296D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x86:
        {
// switch_5658_case_0x86
            OP_BREAK 
            var_8 = 0;
            pri = fun_296D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x87:
        {
// switch_5658_case_0x87
            OP_BREAK 
            var_8 = 0;
            pri = fun_29978()
            OP_JUMP switch_5658_case_default
        }
        case 0x88:
        {
// switch_5658_case_0x88
            OP_BREAK 
            var_8 = 0;
            pri = fun_312D0()
            OP_JUMP switch_5658_case_default
        }
        case 0x89:
        {
// switch_5658_case_0x89
            OP_BREAK 
            var_8 = 0;
            pri = fun_315E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x8e:
        {
// switch_5658_case_0x8e
            OP_BREAK 
            var_8 = 0;
            pri = fun_318F0()
            OP_JUMP switch_5658_case_default
        }
        case 0x8f:
        {
// switch_5658_case_0x8f
            OP_BREAK 
            var_8 = 0;
            pri = fun_31A50()
            OP_JUMP switch_5658_case_default
        }
        case 0x90:
        {
// switch_5658_case_0x90
            OP_BREAK 
            var_8 = 0;
            pri = fun_32410()
            OP_JUMP switch_5658_case_default
        }
        case 0x91:
        {
// switch_5658_case_0x91
            OP_BREAK 
            var_8 = 0;
            pri = fun_18450()
            OP_JUMP switch_5658_case_default
        }
        case 0x97:
        {
// switch_5658_case_0x97
            OP_BREAK 
            var_8 = 0;
            pri = fun_18450()
            OP_JUMP switch_5658_case_default
        }
        case 0x98:
        {
// switch_5658_case_0x98
            OP_BREAK 
            var_8 = 0;
            pri = fun_32EC0()
            OP_JUMP switch_5658_case_default
        }
        case 0x9b:
        {
// switch_5658_case_0x9b
            OP_BREAK 
            var_8 = 0;
            pri = fun_33030()
            OP_JUMP switch_5658_case_default
        }
        case 0x9d:
        {
// switch_5658_case_0x9d
            OP_BREAK 
            var_8 = 0;
            pri = fun_15B80()
            OP_JUMP switch_5658_case_default
        }
        case 0x9e:
        {
// switch_5658_case_0x9e
            OP_BREAK 
            var_8 = 0;
            pri = fun_33550()
            OP_JUMP switch_5658_case_default
        }
        case 0xa0:
        {
// switch_5658_case_0xa0
            OP_BREAK 
            var_8 = 0;
            pri = fun_33628()
            OP_JUMP switch_5658_case_default
        }
        case 0xa1:
        {
// switch_5658_case_0xa1
            OP_BREAK 
            var_8 = 0;
            pri = fun_33A70()
            OP_JUMP switch_5658_case_default
        }
        case 0xa2:
        {
// switch_5658_case_0xa2
            OP_BREAK 
            var_8 = 0;
            pri = fun_15B80()
            OP_JUMP switch_5658_case_default
        }
        case 0xa4:
        {
// switch_5658_case_0xa4
            OP_BREAK 
            var_8 = 0;
            pri = fun_33BE0()
            OP_JUMP switch_5658_case_default
        }
        case 0xa5:
        {
// switch_5658_case_0xa5
            OP_BREAK 
            var_8 = 0;
            pri = fun_33EF0()
            OP_JUMP switch_5658_case_default
        }
        case 0xa6:
        {
// switch_5658_case_0xa6
            OP_BREAK 
            var_8 = 0;
            pri = fun_34068()
            OP_JUMP switch_5658_case_default
        }
        case 0xa7:
        {
// switch_5658_case_0xa7
            OP_BREAK 
            var_8 = 0;
            pri = fun_34248()
            OP_JUMP switch_5658_case_default
        }
        case 0xa8:
        {
// switch_5658_case_0xa8
            OP_BREAK 
            var_8 = 0;
            pri = fun_74F0()
            OP_JUMP switch_5658_case_default
        }
        case 0xa9:
        {
// switch_5658_case_0xa9
            OP_BREAK 
            var_8 = 0;
            pri = fun_34F08()
            OP_JUMP switch_5658_case_default
        }
        case 0xaa:
        {
// switch_5658_case_0xaa
            OP_BREAK 
            var_8 = 0;
            pri = fun_35688()
            OP_JUMP switch_5658_case_default
        }
        case 0xab:
        {
// switch_5658_case_0xab
            OP_BREAK 
            var_8 = 0;
            pri = fun_361D0()
            OP_JUMP switch_5658_case_default
        }
        case 0xad:
        {
// switch_5658_case_0xad
            OP_BREAK 
            var_8 = 0;
            pri = fun_36550()
            OP_JUMP switch_5658_case_default
        }
        case 0xae:
        {
// switch_5658_case_0xae
            OP_BREAK 
            var_8 = 0;
            pri = fun_367E8()
            OP_JUMP switch_5658_case_default
        }
        case 0xaf:
        {
// switch_5658_case_0xaf
            OP_BREAK 
            var_8 = 0;
            pri = fun_36D10()
            OP_JUMP switch_5658_case_default
        }
        case 0xb1:
        {
// switch_5658_case_0xb1
            OP_BREAK 
            var_8 = 0;
            pri = fun_37EE8()
            OP_JUMP switch_5658_case_default
        }
        case 0xb2:
        {
// switch_5658_case_0xb2
            OP_BREAK 
            var_8 = 0;
            pri = fun_39B60()
            OP_JUMP switch_5658_case_default
        }
        case 0xb7:
        {
// switch_5658_case_0xb7
            OP_BREAK 
            var_8 = 0;
            pri = fun_3AA80()
            OP_JUMP switch_5658_case_default
        }
        case 0xb8:
        {
// switch_5658_case_0xb8
            OP_BREAK 
            var_8 = 0;
            pri = fun_3B3C8()
            OP_JUMP switch_5658_case_default
        }
        case 0xb9:
        {
// switch_5658_case_0xb9
            OP_BREAK 
            var_8 = 0;
            pri = fun_3B4A0()
            OP_JUMP switch_5658_case_default
        }
        case 0xba:
        {
// switch_5658_case_0xba
            OP_BREAK 
            var_8 = 0;
            pri = fun_3B950()
            OP_JUMP switch_5658_case_default
        }
        case 0xbb:
        {
// switch_5658_case_0xbb
            OP_BREAK 
            var_8 = 0;
            pri = fun_3BBF8()
            OP_JUMP switch_5658_case_default
        }
        case 0xbc:
        {
// switch_5658_case_0xbc
            OP_BREAK 
            var_8 = 0;
            pri = fun_3BE40()
            OP_JUMP switch_5658_case_default
        }
        case 0xbd:
        {
// switch_5658_case_0xbd
            OP_BREAK 
            var_8 = 0;
            pri = fun_205A8()
            OP_JUMP switch_5658_case_default
        }
        case 0xbe:
        {
// switch_5658_case_0xbe
            OP_BREAK 
            var_8 = 0;
            pri = fun_3C440()
            OP_JUMP switch_5658_case_default
        }
        case 0xbf:
        {
// switch_5658_case_0xbf
            OP_BREAK 
            var_8 = 0;
            pri = fun_3CD20()
            OP_JUMP switch_5658_case_default
        }
        case 0xc0:
        {
// switch_5658_case_0xc0
            OP_BREAK 
            var_8 = 0;
            pri = fun_3DEB8()
            OP_JUMP switch_5658_case_default
        }
        case 0xc1:
        {
// switch_5658_case_0xc1
            OP_BREAK 
            var_8 = 0;
            pri = fun_3E030()
            OP_JUMP switch_5658_case_default
        }
        case 0xc3:
        {
// switch_5658_case_0xc3
            OP_BREAK 
            var_8 = 0;
            pri = fun_3E5F8()
            OP_JUMP switch_5658_case_default
        }
        case 0xc4:
        {
// switch_5658_case_0xc4
            OP_BREAK 
            var_8 = 0;
            pri = fun_402C0()
            OP_JUMP switch_5658_case_default
        }
        case 0xc6:
        {
// switch_5658_case_0xc6
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A848()
            OP_JUMP switch_5658_case_default
        }
        case 0xc8:
        {
// switch_5658_case_0xc8
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A020()
            OP_JUMP switch_5658_case_default
        }
        case 0xc9:
        {
// switch_5658_case_0xc9
            OP_BREAK 
            var_8 = 0;
            pri = fun_40DF8()
            OP_JUMP switch_5658_case_default
        }
        case 0xcb:
        {
// switch_5658_case_0xcb
            OP_BREAK 
            var_8 = 0;
            pri = fun_411F8()
            OP_JUMP switch_5658_case_default
        }
        case 0xcc:
        {
// switch_5658_case_0xcc
            OP_BREAK 
            var_8 = 0;
            pri = fun_414C8()
            OP_JUMP switch_5658_case_default
        }
        case 0xcd:
        {
// switch_5658_case_0xcd
            OP_BREAK 
            var_8 = 0;
            pri = fun_10928()
            OP_JUMP switch_5658_case_default
        }
        case 0xce:
        {
// switch_5658_case_0xce
            OP_BREAK 
            var_8 = 0;
            pri = fun_BD88()
            OP_JUMP switch_5658_case_default
        }
        case 0xd0:
        {
// switch_5658_case_0xd0
            OP_BREAK 
            var_8 = 0;
            pri = fun_95B0()
            OP_JUMP switch_5658_case_default
        }
        case 0xd1:
        {
// switch_5658_case_0xd1
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A020()
            OP_JUMP switch_5658_case_default
        }
        case 0xd2:
        {
// switch_5658_case_0xd2
            OP_BREAK 
            var_8 = 0;
            pri = fun_416B0()
            OP_JUMP switch_5658_case_default
        }
        case 0xd3:
        {
// switch_5658_case_0xd3
            OP_BREAK 
            var_8 = 0;
            pri = fun_B5E8()
            OP_JUMP switch_5658_case_default
        }
        case 0xd4:
        {
// switch_5658_case_0xd4
            OP_BREAK 
            var_8 = 0;
            pri = fun_41AB0()
            OP_JUMP switch_5658_case_default
        }
        case 0xd6:
        {
// switch_5658_case_0xd6
            OP_BREAK 
            var_8 = 0;
            pri = fun_15B80()
            OP_JUMP switch_5658_case_default
        }
        case 0xd7:
        {
// switch_5658_case_0xd7
            OP_BREAK 
            var_8 = 0;
            pri = fun_41E48()
            OP_JUMP switch_5658_case_default
        }
        case 0xd8:
        {
// switch_5658_case_0xd8
            OP_BREAK 
            var_8 = 0;
            pri = fun_42258()
            OP_JUMP switch_5658_case_default
        }
        case 0xd9:
        {
// switch_5658_case_0xd9
            OP_BREAK 
            var_8 = 0;
            pri = fun_425D8()
            OP_JUMP switch_5658_case_default
        }
        case 0xda:
        {
// switch_5658_case_0xda
            OP_BREAK 
            var_8 = 0;
            pri = fun_428C0()
            OP_JUMP switch_5658_case_default
        }
        case 0xdb:
        {
// switch_5658_case_0xdb
            OP_BREAK 
            var_8 = 0;
            pri = fun_42D88()
            OP_JUMP switch_5658_case_default
        }
        case 0xdc:
        {
// switch_5658_case_0xdc
            OP_BREAK 
            var_8 = 0;
            pri = fun_43378()
            OP_JUMP switch_5658_case_default
        }
        case 0xdd:
        {
// switch_5658_case_0xdd
            OP_BREAK 
            var_8 = 0;
            pri = fun_43650()
            OP_JUMP switch_5658_case_default
        }
        case 0xde:
        {
// switch_5658_case_0xde
            OP_BREAK 
            var_8 = 0;
            pri = fun_43B08()
            OP_JUMP switch_5658_case_default
        }
        case 0xe0:
        {
// switch_5658_case_0xe0
            OP_BREAK 
            var_8 = 0;
            pri = fun_46528()
            OP_JUMP switch_5658_case_default
        }
        case 0xe1:
        {
// switch_5658_case_0xe1
            OP_BREAK 
            var_8 = 0;
            pri = fun_469B8()
            OP_JUMP switch_5658_case_default
        }
        case 0xe2:
        {
// switch_5658_case_0xe2
            OP_BREAK 
            var_8 = 0;
            pri = fun_46C78()
            OP_JUMP switch_5658_case_default
        }
        case 0xe3:
        {
// switch_5658_case_0xe3
            OP_BREAK 
            var_8 = 0;
            pri = fun_47170()
            OP_JUMP switch_5658_case_default
        }
        case 0xe4:
        {
// switch_5658_case_0xe4
            OP_BREAK 
            var_8 = 0;
            pri = fun_47A30()
            OP_JUMP switch_5658_case_default
        }
        case 0xe5:
        {
// switch_5658_case_0xe5
            OP_BREAK 
            var_8 = 0;
            pri = fun_481F0()
            OP_JUMP switch_5658_case_default
        }
        case 0xe6:
        {
// switch_5658_case_0xe6
            OP_BREAK 
            var_8 = 0;
            pri = fun_48460()
            OP_JUMP switch_5658_case_default
        }
        case 0xe9:
        {
// switch_5658_case_0xe9
            OP_BREAK 
            var_8 = 0;
            pri = fun_48AD8()
            OP_JUMP switch_5658_case_default
        }
        case 0xed:
        {
// switch_5658_case_0xed
            OP_BREAK 
            var_8 = 0;
            pri = fun_495C8()
            OP_JUMP switch_5658_case_default
        }
        case 0xef:
        {
// switch_5658_case_0xef
            OP_BREAK 
            var_8 = 0;
            pri = fun_49E80()
            OP_JUMP switch_5658_case_default
        }
        case 0xf0:
        {
// switch_5658_case_0xf0
            OP_BREAK 
            var_8 = 0;
            pri = fun_4AA58()
            OP_JUMP switch_5658_case_default
        }
        case 0xf1:
        {
// switch_5658_case_0xf1
            OP_BREAK 
            var_8 = 0;
            pri = fun_4AA70()
            OP_JUMP switch_5658_case_default
        }
        case 0xf2:
        {
// switch_5658_case_0xf2
            OP_BREAK 
            var_8 = 0;
            pri = fun_4BB58()
            OP_JUMP switch_5658_case_default
        }
        case 0xf3:
        {
// switch_5658_case_0xf3
            OP_BREAK 
            var_8 = 0;
            pri = fun_4C308()
            OP_JUMP switch_5658_case_default
        }
        case 0xf4:
        {
// switch_5658_case_0xf4
            OP_BREAK 
            var_8 = 0;
            pri = fun_4CA58()
            OP_JUMP switch_5658_case_default
        }
        case 0xf5:
        {
// switch_5658_case_0xf5
            OP_BREAK 
            var_8 = 0;
            pri = fun_4D1A8()
            OP_JUMP switch_5658_case_default
        }
        case 0xf6:
        {
// switch_5658_case_0xf6
            OP_BREAK 
            var_8 = 0;
            pri = fun_4E178()
            OP_JUMP switch_5658_case_default
        }
        case 0xf7:
        {
// switch_5658_case_0xf7
            OP_BREAK 
            var_8 = 0;
            pri = fun_4E250()
            OP_JUMP switch_5658_case_default
        }
        case 0xf8:
        {
// switch_5658_case_0xf8
            OP_BREAK 
            var_8 = 0;
            pri = fun_4E6B8()
            OP_JUMP switch_5658_case_default
        }
        case 0xf9:
        {
// switch_5658_case_0xf9
            OP_BREAK 
            var_8 = 0;
            pri = fun_4EAC0()
            OP_JUMP switch_5658_case_default
        }
        case 0xfa:
        {
// switch_5658_case_0xfa
            OP_BREAK 
            var_8 = 0;
            pri = fun_4EB98()
            OP_JUMP switch_5658_case_default
        }
        case 0xfb:
        {
// switch_5658_case_0xfb
            OP_BREAK 
            var_8 = 0;
            pri = fun_4FA48()
            OP_JUMP switch_5658_case_default
        }
        case 0xfc:
        {
// switch_5658_case_0xfc
            OP_BREAK 
            var_8 = 0;
            pri = fun_4FB20()
            OP_JUMP switch_5658_case_default
        }
        case 0xfd:
        {
// switch_5658_case_0xfd
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A848()
            OP_JUMP switch_5658_case_default
        }
        case 0xff:
        {
// switch_5658_case_0xff
            OP_BREAK 
            var_8 = 0;
            pri = fun_33030()
            OP_JUMP switch_5658_case_default
        }
        case 0x100:
        {
// switch_5658_case_0x100
            OP_BREAK 
            var_8 = 0;
            pri = fun_33030()
            OP_JUMP switch_5658_case_default
        }
        case 0x102:
        {
// switch_5658_case_0x102
            OP_BREAK 
            var_8 = 0;
            pri = fun_50530()
            OP_JUMP switch_5658_case_default
        }
        case 0x103:
        {
// switch_5658_case_0x103
            OP_BREAK 
            var_8 = 0;
            pri = fun_509C8()
            OP_JUMP switch_5658_case_default
        }
        case 0x106:
        {
// switch_5658_case_0x106
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A848()
            OP_JUMP switch_5658_case_default
        }
        case 0x107:
        {
// switch_5658_case_0x107
            OP_BREAK 
            var_8 = 0;
            pri = fun_33030()
            OP_JUMP switch_5658_case_default
        }
        case 0x109:
        {
// switch_5658_case_0x109
            OP_BREAK 
            var_8 = 0;
            pri = fun_50C20()
            OP_JUMP switch_5658_case_default
        }
        case 0x10a:
        {
// switch_5658_case_0x10a
            OP_BREAK 
            var_8 = 0;
            pri = fun_50D98()
            OP_JUMP switch_5658_case_default
        }
        case 0x10c:
        {
// switch_5658_case_0x10c
            OP_BREAK 
            var_8 = 0;
            pri = fun_50E70()
            OP_JUMP switch_5658_case_default
        }
        case 0x10d:
        {
// switch_5658_case_0x10d
            OP_BREAK 
            var_8 = 0;
            pri = fun_1A848()
            OP_JUMP switch_5658_case_default
        }
        case 0x10e:
        {
// switch_5658_case_0x10e
            OP_BREAK 
            var_8 = 0;
            pri = fun_51FB0()
            OP_JUMP switch_5658_case_default
        }
        case 0x110:
        {
// switch_5658_case_0x110
            OP_BREAK 
            var_8 = 0;
            pri = fun_52288()
            OP_JUMP switch_5658_case_default
        }
        case 0x115:
        {
// switch_5658_case_0x115
            OP_BREAK 
            var_8 = 0;
            pri = fun_95B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x116:
        {
// switch_5658_case_0x116
            OP_BREAK 
            var_8 = 0;
            pri = fun_52AF0()
            OP_JUMP switch_5658_case_default
        }
        case 0x117:
        {
// switch_5658_case_0x117
            OP_BREAK 
            var_8 = 0;
            pri = fun_52B08()
            OP_JUMP switch_5658_case_default
        }
        case 0x118:
        {
// switch_5658_case_0x118
            OP_BREAK 
            var_8 = 0;
            pri = fun_52EF0()
            OP_JUMP switch_5658_case_default
        }
        case 0x119:
        {
// switch_5658_case_0x119
            OP_BREAK 
            var_8 = 0;
            pri = fun_532C8()
            OP_JUMP switch_5658_case_default
        }
        case 0x11b:
        {
// switch_5658_case_0x11b
            OP_BREAK 
            var_8 = 0;
            pri = fun_533A0()
            OP_JUMP switch_5658_case_default
        }
        case 0x11c:
        {
// switch_5658_case_0x11c
            OP_BREAK 
            var_8 = 0;
            pri = fun_53750()
            OP_JUMP switch_5658_case_default
        }
        case 0x11d:
        {
// switch_5658_case_0x11d
            OP_BREAK 
            var_8 = 0;
            pri = fun_538D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x11e:
        {
// switch_5658_case_0x11e
            OP_BREAK 
            var_8 = 0;
            pri = fun_538F0()
            OP_JUMP switch_5658_case_default
        }
        case 0x11f:
        {
// switch_5658_case_0x11f
            OP_BREAK 
            var_8 = 0;
            pri = fun_539C8()
            OP_JUMP switch_5658_case_default
        }
        case 0x120:
        {
// switch_5658_case_0x120
            OP_BREAK 
            var_8 = 0;
            pri = fun_54758()
            OP_JUMP switch_5658_case_default
        }
        case 0x121:
        {
// switch_5658_case_0x121
            OP_BREAK 
            var_8 = 0;
            pri = fun_54E30()
            OP_JUMP switch_5658_case_default
        }
        case 0x122:
        {
// switch_5658_case_0x122
            OP_BREAK 
            var_8 = 0;
            pri = fun_54E48()
            OP_JUMP switch_5658_case_default
        }
        case 0x123:
        {
// switch_5658_case_0x123
            OP_BREAK 
            var_8 = 0;
            pri = fun_551E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x124:
        {
// switch_5658_case_0x124
            OP_BREAK 
            var_8 = 0;
            pri = fun_55CE0()
            OP_JUMP switch_5658_case_default
        }
        case 0x125:
        {
// switch_5658_case_0x125
            OP_BREAK 
            var_8 = 0;
            pri = fun_55CF8()
            OP_JUMP switch_5658_case_default
        }
        case 0x126:
        {
// switch_5658_case_0x126
            OP_BREAK 
            var_8 = 0;
            pri = fun_56460()
            OP_JUMP switch_5658_case_default
        }
        case 0x127:
        {
// switch_5658_case_0x127
            OP_BREAK 
            var_8 = 0;
            pri = fun_56658()
            OP_JUMP switch_5658_case_default
        }
        case 0x128:
        {
// switch_5658_case_0x128
            OP_BREAK 
            var_8 = 0;
            pri = fun_567D0()
            OP_JUMP switch_5658_case_default
        }
        case 0x129:
        {
// switch_5658_case_0x129
            OP_BREAK 
            var_8 = 0;
            pri = fun_56A78()
            OP_JUMP switch_5658_case_default
        }
        case 0x12a:
        {
// switch_5658_case_0x12a
            OP_BREAK 
            var_8 = 0;
            pri = fun_573F8()
            OP_JUMP switch_5658_case_default
        }
        case 0x12b:
        {
// switch_5658_case_0x12b
            OP_BREAK 
            var_8 = 0;
            pri = fun_575B8()
            OP_JUMP switch_5658_case_default
        }
        case 0x12c:
        {
// switch_5658_case_0x12c
            OP_BREAK 
            var_8 = 0;
            pri = fun_57778()
            OP_JUMP switch_5658_case_default
        }
        case 0x12d:
        {
// switch_5658_case_0x12d
            OP_BREAK 
            var_8 = 0;
            pri = fun_57790()
            OP_JUMP switch_5658_case_default
        }
        case 0x12e:
        {
// switch_5658_case_0x12e
            OP_BREAK 
            var_8 = 0;
            pri = fun_577A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x12f:
        {
// switch_5658_case_0x12f
            OP_BREAK 
            var_8 = 0;
            pri = fun_577C0()
            OP_JUMP switch_5658_case_default
        }
        case 0x130:
        {
// switch_5658_case_0x130
            OP_BREAK 
            var_8 = 0;
            pri = fun_57C90()
            OP_JUMP switch_5658_case_default
        }
        case 0x131:
        {
// switch_5658_case_0x131
            OP_BREAK 
            var_8 = 0;
            pri = fun_585A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x132:
        {
// switch_5658_case_0x132
            OP_BREAK 
            var_8 = 0;
            pri = fun_59590()
            OP_JUMP switch_5658_case_default
        }
        case 0x134:
        {
// switch_5658_case_0x134
            OP_BREAK 
            var_8 = 0;
            pri = fun_596B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x136:
        {
// switch_5658_case_0x136
            OP_BREAK 
            var_8 = 0;
            pri = fun_59A28()
            OP_JUMP switch_5658_case_default
        }
        case 0x137:
        {
// switch_5658_case_0x137
            OP_BREAK 
            var_8 = 0;
            pri = fun_5A2A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x138:
        {
// switch_5658_case_0x138
            OP_BREAK 
            var_8 = 0;
            pri = fun_A828()
            OP_JUMP switch_5658_case_default
        }
        case 0x139:
        {
// switch_5658_case_0x139
            OP_BREAK 
            var_8 = 0;
            pri = fun_14E70()
            OP_JUMP switch_5658_case_default
        }
        case 0x13a:
        {
// switch_5658_case_0x13a
            OP_BREAK 
            var_8 = 0;
            pri = fun_5A398()
            OP_JUMP switch_5658_case_default
        }
        case 0x13c:
        {
// switch_5658_case_0x13c
            OP_BREAK 
            var_8 = 0;
            pri = fun_5A4F8()
            OP_JUMP switch_5658_case_default
        }
        case 0x13d:
        {
// switch_5658_case_0x13d
            OP_BREAK 
            var_8 = 0;
            pri = fun_5A6A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x13e:
        {
// switch_5658_case_0x13e
            OP_BREAK 
            var_8 = 0;
            pri = fun_5AB70()
            OP_JUMP switch_5658_case_default
        }
        case 0x13f:
        {
// switch_5658_case_0x13f
            OP_BREAK 
            var_8 = 0;
            pri = fun_5BD00()
            OP_JUMP switch_5658_case_default
        }
        case 0x140:
        {
// switch_5658_case_0x140
            OP_BREAK 
            var_8 = 0;
            pri = fun_5BD18()
            OP_JUMP switch_5658_case_default
        }
        case 0x141:
        {
// switch_5658_case_0x141
            OP_BREAK 
            var_8 = 0;
            pri = fun_B5E8()
            OP_JUMP switch_5658_case_default
        }
        case 0x142:
        {
// switch_5658_case_0x142
            OP_BREAK 
            var_8 = 0;
            pri = fun_95B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x143:
        {
// switch_5658_case_0x143
            OP_BREAK 
            var_8 = 0;
            pri = fun_5C460()
            OP_JUMP switch_5658_case_default
        }
        case 0x147:
        {
// switch_5658_case_0x147
            OP_BREAK 
            var_8 = 0;
            pri = fun_95B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x148:
        {
// switch_5658_case_0x148
            OP_BREAK 
            var_8 = 0;
            pri = fun_9D50()
            OP_JUMP switch_5658_case_default
        }
        case 0x149:
        {
// switch_5658_case_0x149
            OP_BREAK 
            var_8 = 0;
            pri = fun_5C5E8()
            OP_JUMP switch_5658_case_default
        }
        case 0x14a:
        {
// switch_5658_case_0x14a
            OP_BREAK 
            var_8 = 0;
            pri = fun_1B718()
            OP_JUMP switch_5658_case_default
        }
        case 0x14b:
        {
// switch_5658_case_0x14b
            OP_BREAK 
            var_8 = 0;
            pri = fun_18450()
            OP_JUMP switch_5658_case_default
        }
        case 0x14c:
        {
// switch_5658_case_0x14c
            OP_BREAK 
            var_8 = 0;
            pri = fun_18450()
            OP_JUMP switch_5658_case_default
        }
        case 0x14d:
        {
// switch_5658_case_0x14d
            OP_BREAK 
            var_8 = 0;
            pri = fun_32EC0()
            OP_JUMP switch_5658_case_default
        }
        case 0x14e:
        {
// switch_5658_case_0x14e
            OP_BREAK 
            var_8 = 0;
            pri = fun_5D268()
            OP_JUMP switch_5658_case_default
        }
        case 0x14f:
        {
// switch_5658_case_0x14f
            OP_BREAK 
            var_8 = 0;
            pri = fun_5D4D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x150:
        {
// switch_5658_case_0x150
            OP_BREAK 
            var_8 = 0;
            pri = fun_5D4F0()
            OP_JUMP switch_5658_case_default
        }
        case 0x151:
        {
// switch_5658_case_0x151
            OP_BREAK 
            var_8 = 0;
            pri = fun_5D508()
            OP_JUMP switch_5658_case_default
        }
        case 0x152:
        {
// switch_5658_case_0x152
            OP_BREAK 
            var_8 = 0;
            pri = fun_5DCC0()
            OP_JUMP switch_5658_case_default
        }
        case 0x154:
        {
// switch_5658_case_0x154
            OP_BREAK 
            var_8 = 0;
            pri = fun_5DFB8()
            OP_JUMP switch_5658_case_default
        }
        case 0x156:
        {
// switch_5658_case_0x156
            OP_BREAK 
            var_8 = 0;
            pri = fun_5E338()
            OP_JUMP switch_5658_case_default
        }
        case 0x157:
        {
// switch_5658_case_0x157
            OP_BREAK 
            var_8 = 0;
            pri = fun_5E570()
            OP_JUMP switch_5658_case_default
        }
        case 0x158:
        {
// switch_5658_case_0x158
            OP_BREAK 
            var_8 = 0;
            pri = fun_5EBD8()
            OP_JUMP switch_5658_case_default
        }
        case 0x159:
        {
// switch_5658_case_0x159
            OP_BREAK 
            var_8 = 0;
            pri = fun_7338()
            OP_JUMP switch_5658_case_default
        }
        case 0x15a:
        {
// switch_5658_case_0x15a
            OP_BREAK 
            var_8 = 0;
            pri = fun_5F068()
            OP_JUMP switch_5658_case_default
        }
        case 0x15b:
        {
// switch_5658_case_0x15b
            OP_BREAK 
            var_8 = 0;
            pri = fun_5F328()
            OP_JUMP switch_5658_case_default
        }
        case 0x15c:
        {
// switch_5658_case_0x15c
            OP_BREAK 
            var_8 = 0;
            pri = fun_7338()
            OP_JUMP switch_5658_case_default
        }
        case 0x15d:
        {
// switch_5658_case_0x15d
            OP_BREAK 
            var_8 = 0;
            pri = fun_5FD18()
            OP_JUMP switch_5658_case_default
        }
        case 0x15e:
        {
// switch_5658_case_0x15e
            OP_BREAK 
            var_8 = 0;
            pri = fun_5FF10()
            OP_JUMP switch_5658_case_default
        }
        case 0x15f:
        {
// switch_5658_case_0x15f
            OP_BREAK 
            var_8 = 0;
            pri = fun_60030()
            OP_JUMP switch_5658_case_default
        }
        case 0x160:
        {
// switch_5658_case_0x160
            OP_BREAK 
            var_8 = 0;
            pri = fun_60500()
            OP_JUMP switch_5658_case_default
        }
        case 0x161:
        {
// switch_5658_case_0x161
            OP_BREAK 
            var_8 = 0;
            pri = fun_60EF0()
            OP_JUMP switch_5658_case_default
        }
        case 0x162:
        {
// switch_5658_case_0x162
            OP_BREAK 
            var_8 = 0;
            pri = fun_615B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x163:
        {
// switch_5658_case_0x163
            OP_BREAK 
            var_8 = 0;
            pri = fun_24AA0()
            OP_JUMP switch_5658_case_default
        }
        case 0x164:
        {
// switch_5658_case_0x164
            OP_BREAK 
            var_8 = 0;
            pri = fun_103E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x165:
        {
// switch_5658_case_0x165
            OP_BREAK 
            var_8 = 0;
            pri = fun_10FB0()
            OP_JUMP switch_5658_case_default
        }
        case 0x167:
        {
// switch_5658_case_0x167
            OP_BREAK 
            var_8 = 0;
            pri = fun_615C8()
            OP_JUMP switch_5658_case_default
        }
        case 0x169:
        {
// switch_5658_case_0x169
            OP_BREAK 
            var_8 = 0;
            pri = fun_24AA0()
            OP_JUMP switch_5658_case_default
        }
        case 0x16b:
        {
// switch_5658_case_0x16b
            OP_BREAK 
            var_8 = 0;
            pri = fun_61A40()
            OP_JUMP switch_5658_case_default
        }
        case 0x16c:
        {
// switch_5658_case_0x16c
            OP_BREAK 
            var_8 = 0;
            pri = fun_103E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x16d:
        {
// switch_5658_case_0x16d
            OP_BREAK 
            var_8 = 0;
            pri = fun_61F20()
            OP_JUMP switch_5658_case_default
        }
        case 0x16e:
        {
// switch_5658_case_0x16e
            OP_BREAK 
            var_8 = 0;
            pri = fun_62778()
            OP_JUMP switch_5658_case_default
        }
        case 0x170:
        {
// switch_5658_case_0x170
            OP_BREAK 
            var_8 = 0;
            pri = fun_63298()
            OP_JUMP switch_5658_case_default
        }
        case 0x173:
        {
// switch_5658_case_0x173
            OP_BREAK 
            var_8 = 0;
            pri = fun_1B270()
            OP_JUMP switch_5658_case_default
        }
        case 0x174:
        {
// switch_5658_case_0x174
            OP_BREAK 
            var_8 = 0;
            pri = fun_638B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x175:
        {
// switch_5658_case_0x175
            OP_BREAK 
            var_8 = 0;
            pri = fun_638C8()
            OP_JUMP switch_5658_case_default
        }
        case 0x176:
        {
// switch_5658_case_0x176
            OP_BREAK 
            var_8 = 0;
            pri = fun_63908()
            OP_JUMP switch_5658_case_default
        }
        case 0x177:
        {
// switch_5658_case_0x177
            OP_BREAK 
            var_8 = 0;
            pri = fun_5E338()
            OP_JUMP switch_5658_case_default
        }
        case 0x178:
        {
// switch_5658_case_0x178
            OP_BREAK 
            var_8 = 0;
            pri = fun_24AA0()
            OP_JUMP switch_5658_case_default
        }
        case 0x179:
        {
// switch_5658_case_0x179
            OP_BREAK 
            var_8 = 0;
            pri = fun_63A90()
            OP_JUMP switch_5658_case_default
        }
        case 0x17b:
        {
// switch_5658_case_0x17b
            OP_BREAK 
            var_8 = 0;
            pri = fun_63CC8()
            OP_JUMP switch_5658_case_default
        }
        case 0x17d:
        {
// switch_5658_case_0x17d
            OP_BREAK 
            var_8 = 0;
            pri = fun_64148()
            OP_JUMP switch_5658_case_default
        }
        case 0x17f:
        {
// switch_5658_case_0x17f
            OP_BREAK 
            var_8 = 0;
            pri = fun_24AA0()
            OP_JUMP switch_5658_case_default
        }
        case 0x180:
        {
// switch_5658_case_0x180
            OP_BREAK 
            var_8 = 0;
            pri = fun_643E8()
            OP_JUMP switch_5658_case_default
        }
        case 0x183:
        {
// switch_5658_case_0x183
            OP_BREAK 
            var_8 = 0;
            pri = fun_648B0()
            OP_JUMP switch_5658_case_default
        }
        case 0x185:
        {
// switch_5658_case_0x185
            OP_BREAK 
            var_8 = 0;
            pri = fun_64C58()
            OP_JUMP switch_5658_case_default
        }
        case 0x186:
        {
// switch_5658_case_0x186
            OP_BREAK 
            var_8 = 0;
            pri = fun_64E08()
            OP_JUMP switch_5658_case_default
        }
        case 0x187:
        {
// switch_5658_case_0x187
            OP_BREAK 
            var_8 = 0;
            pri = fun_65130()
            OP_JUMP switch_5658_case_default
        }
        case 0x188:
        {
// switch_5658_case_0x188
            OP_BREAK 
            var_8 = 0;
            pri = fun_65250()
            OP_JUMP switch_5658_case_default
        }
        case 0x18a:
        {
// switch_5658_case_0x18a
            OP_BREAK 
            var_8 = 0;
            pri = fun_65728()
            OP_JUMP switch_5658_case_default
        }
        case 0x18b:
        {
// switch_5658_case_0x18b
            OP_BREAK 
            var_8 = 0;
            pri = fun_65BF8()
            OP_JUMP switch_5658_case_default
        }
        case 0x18c:
        {
// switch_5658_case_0x18c
            OP_BREAK 
            var_8 = 0;
            pri = fun_65F60()
            OP_JUMP switch_5658_case_default
        }
        case 0x18d:
        {
// switch_5658_case_0x18d
            OP_BREAK 
            var_8 = 0;
            pri = fun_66190()
            OP_JUMP switch_5658_case_default
        }
        case 0x18e:
        {
// switch_5658_case_0x18e
            OP_BREAK 
            var_8 = 0;
            pri = fun_10D18()
            OP_JUMP switch_5658_case_default
        }
        case 0x193:
        {
// switch_5658_case_0x193
            OP_BREAK 
            var_8 = 0;
            pri = fun_668A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x194:
        {
// switch_5658_case_0x194
            OP_BREAK 
            var_8 = 0;
            pri = fun_66C28()
            OP_JUMP switch_5658_case_default
        }
        case 0x196:
        {
// switch_5658_case_0x196
            OP_BREAK 
            var_8 = 0;
            pri = fun_66E38()
            OP_JUMP switch_5658_case_default
        }
        case 0x197:
        {
// switch_5658_case_0x197
            OP_BREAK 
            var_8 = 0;
            pri = fun_672F0()
            OP_JUMP switch_5658_case_default
        }
        case 0x198:
        {
// switch_5658_case_0x198
            OP_BREAK 
            var_8 = 0;
            pri = fun_67680()
            OP_JUMP switch_5658_case_default
        }
        case 0x199:
        {
// switch_5658_case_0x199
            OP_BREAK 
            var_8 = 0;
            pri = fun_67A00()
            OP_JUMP switch_5658_case_default
        }
        case 0x19a:
        {
// switch_5658_case_0x19a
            OP_BREAK 
            var_8 = 0;
            pri = fun_67E98()
            OP_JUMP switch_5658_case_default
        }
        case 0x19b:
        {
// switch_5658_case_0x19b
            OP_BREAK 
            var_8 = 0;
            pri = fun_5E570()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a3:
        {
// switch_5658_case_0x1a3
            OP_BREAK 
            var_8 = 0;
            pri = fun_681D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a4:
        {
// switch_5658_case_0x1a4
            OP_BREAK 
            var_8 = 0;
            pri = fun_68558()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a6:
        {
// switch_5658_case_0x1a6
            OP_BREAK 
            var_8 = 0;
            pri = fun_19B58()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a7:
        {
// switch_5658_case_0x1a7
            OP_BREAK 
            var_8 = 0;
            pri = fun_688D8()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a8:
        {
// switch_5658_case_0x1a8
            OP_BREAK 
            var_8 = 0;
            pri = fun_68EF0()
            OP_JUMP switch_5658_case_default
        }
        case 0x1a9:
        {
// switch_5658_case_0x1a9
            OP_BREAK 
            var_8 = 0;
            pri = fun_691A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x1aa:
        {
// switch_5658_case_0x1aa
            OP_BREAK 
            var_8 = 0;
            pri = fun_5E338()
            OP_JUMP switch_5658_case_default
        }
        case 0x1ac:
        {
// switch_5658_case_0x1ac
            OP_BREAK 
            var_8 = 0;
            pri = fun_69408()
            OP_JUMP switch_5658_case_default
        }
        case 0x1ad:
        {
// switch_5658_case_0x1ad
            OP_BREAK 
            var_8 = 0;
            pri = fun_694E0()
            OP_JUMP switch_5658_case_default
        }
        case 0x1ae:
        {
// switch_5658_case_0x1ae
            OP_BREAK 
            var_8 = 0;
            pri = fun_699A8()
            OP_JUMP switch_5658_case_default
        }
        case 0x1af:
        {
// switch_5658_case_0x1af
            OP_BREAK 
            var_8 = 0;
            pri = fun_69D28()
            OP_JUMP switch_5658_case_default
        }
        case 0x1b3:
        {
// switch_5658_case_0x1b3
            OP_BREAK 
            var_8 = 0;
            pri = fun_68558()
            OP_JUMP switch_5658_case_default
        }
        case 0x1b7:
        {
// switch_5658_case_0x1b7
            OP_BREAK 
            var_8 = 0;
            pri = fun_6C490()
            OP_JUMP switch_5658_case_default
        }
        case 0x1b9:
        {
// switch_5658_case_0x1b9
            OP_BREAK 
            var_8 = 0;
            pri = fun_24AA0()
            OP_JUMP switch_5658_case_default
        }
    }
// lab_0FA8
    pri = 0;
// lab_0FB0
    OP_JZER lab_12D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 63;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_1150
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1140
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_1150
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 63;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 1;
    OP_JSLEQ lab_12D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12D0
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_1140
    OP_JUMP lab_12D0
// lab_0DA8
    pri = 1;
// lab_0DB8
    OP_JZER lab_0E88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0E88
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_0E88
    OP_STACK 8
// lab_0780
    pri = 0;
// lab_0788
    OP_JZER lab_0890
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 177;
    OP_JEQ lab_0890
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_0890
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_69D0
fun_69D0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 8;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B30
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B20
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 107;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C88
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6C78
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6C88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 97;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6DE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6DD0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6DE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 183;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6F38
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 150;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6F28
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6F38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 92;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7080
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7080
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7080
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JZER lab_7220
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7210
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7220
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JZER lab_7318
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7318
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_7318
    OP_STACK 8
    pri = 0;
    return pri;
// lab_7210
    OP_JUMP lab_7318
// lab_6F28
    OP_JUMP lab_7080
// lab_6DD0
    OP_JUMP lab_7080
// lab_6C78
    OP_JUMP lab_7080
// lab_6B20
    OP_JUMP lab_7080
}
// fun_7338
fun_7338() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JZER lab_74D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_74D0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_74D0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_74F0
fun_74F0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 111;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7650
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7640
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7650
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 355;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_77A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7798
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_77A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 361;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7900
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_78F0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7900
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 278;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7A48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7A48
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7A48
    OP_BREAK 
    var_8 = 0;
    var_16 = 9;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7BA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7B90
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7BA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7CE8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7CE8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_7CE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_7EC8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_7EB8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_7EB8
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_7EC8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_8020
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_8010
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_8020
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_8168
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_8168
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_8168
    pri = 0;
    return pri;
// lab_8010
    OP_JUMP lab_8168
// lab_7EB8
    OP_JUMP lab_8168
// lab_7B90
    OP_JUMP lab_7CE8
// lab_78F0
    OP_JUMP lab_7A48
// lab_7798
    OP_JUMP lab_7A48
// lab_7640
    OP_JUMP lab_7A48
}
// fun_8178
fun_8178() {
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_82F8
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_82F8
    OP_BREAK 
    var_112 = -2;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_82F8
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_8470
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 200;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_8470
    OP_BREAK 
    var_112 = -1;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_8470
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JZER lab_8628
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_8628
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_8628
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_8798
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_8798
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_8798
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_87B8
fun_87B8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_8940
    OP_BREAK 
    var_56 = 0;
    pri = fun_8A58()
    OP_JNZ lab_8940
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 200;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_8940
    OP_BREAK 
    var_112 = -1;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_8940
    OP_BREAK 
    var_8 = 0;
    pri = fun_8A58()
    OP_EQ_C_PRI 1
    OP_JZER lab_8A48
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 128;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_8A48
    OP_BREAK 
    var_64 = 2;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_8A48
    pri = 0;
    return pri;
}
// fun_8A58
fun_8A58() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 32
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 86
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 90
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 92
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 101
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 109
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 136
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 137
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 142
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 162
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 180
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 196
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 200
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 213
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 223
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 247
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 259
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 261
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 259
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 271
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 276
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 285
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 329
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 337
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 370
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 375
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 406
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 407
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 415
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 416
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 421
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 425
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 434
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 448
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 459
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 460
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 464
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 467
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 490
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 496
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 497
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 522
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 523
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 530
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 533
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 543
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 549
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 555
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 557
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 560
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 566
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 568
    OP_JNZ lab_9538
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 586
    OP_JNZ lab_9538
    pri = 0;
    OP_JUMP lab_9548
// lab_9538
    pri = 1;
// lab_9548
    OP_JZER lab_9588
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_9588
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_95B0
fun_95B0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9700
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_9700
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_9700
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9848
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_9848
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_9848
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9AA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_9AA0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 127;
    var_128 = 1;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_9AA0
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 128;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_9AA0
    OP_BREAK 
    var_200 = 2;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_9AA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9BF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_9BE8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_9BF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9D40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_9D40
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_9D40
    pri = 0;
    return pri;
// lab_9BE8
    OP_JUMP lab_9D40
}
// fun_9D50
fun_9D50() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_9F38
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 80;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 2
    OP_JZER lab_9F38
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_9F38
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_9F38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_A090
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_A090
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_A090
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A1D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_A1D8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_A1D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A320
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_A320
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_A320
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 2;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A578
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_A578
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 127;
    var_128 = 1;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_A578
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 128;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_A578
    OP_BREAK 
    var_200 = 2;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_A578
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A6D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_A6C0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_A6D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A818
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_A818
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_A818
    pri = 0;
    return pri;
// lab_A6C0
    OP_JUMP lab_A818
}
// fun_A828
fun_A828() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_A908
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_A908
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 31;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AA50
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_AA50
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_AA50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 32;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AB98
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_AB98
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_AB98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 37;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_ACE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_ACE0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_ACE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 132;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AE28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_AE28
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_AE28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 214;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_AF70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_AF70
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_AF70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 79;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B0B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B0B8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B0B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 91;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B200
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B200
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B200
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 150;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B348
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B348
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B348
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 98;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B490
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B490
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B490
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 127;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B5D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B5D8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B5D8
    pri = 0;
    return pri;
}
// fun_B5E8
fun_B5E8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 3;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B738
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B738
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B738
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 3;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_B880
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_B880
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_B880
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 3;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BAD8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_BAD8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 127;
    var_128 = 1;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_BAD8
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 128;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_BAD8
    OP_BREAK 
    var_200 = 2;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_BAD8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BC30
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_BC20
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_BC30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BD78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_BD78
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_BD78
    pri = 0;
    return pri;
// lab_BC20
    OP_JUMP lab_BD78
}
// fun_BD88
fun_BD88() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_BF70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 80;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JZER lab_BF70
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_BF70
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_BF70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 79;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_C0C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C0C8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_C0C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 4;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C210
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C210
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_C210
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 4;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C358
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C358
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_C358
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 4;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C5B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C5B0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 127;
    var_128 = 1;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_C5B0
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 128;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_C5B0
    OP_BREAK 
    var_200 = 2;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_C5B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C708
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C6F8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_C708
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C850
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C850
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_C850
    pri = 0;
    return pri;
// lab_C6F8
    OP_JUMP lab_C850
}
// fun_C860
fun_C860() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 4;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_C9B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_C9B0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_C9B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_CAF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_CAF8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_CAF8
    pri = 0;
    return pri;
}
// fun_CB08
fun_CB08() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JNZ lab_CCC0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 99
    OP_JNZ lab_CCC0
    pri = 0;
    OP_JUMP lab_CCD0
// lab_CCC0
    pri = 1;
// lab_CCD0
    OP_JZER lab_CD40
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_CD40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 17;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_CE28
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_CE28
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 2
    OP_JZER lab_D188
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 87;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D040
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 230;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_D040
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_D188
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 3
    OP_JZER lab_D308
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 59;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D308
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D308
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_D308
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F268()
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 1
    OP_JZER lab_D528
    OP_BREAK 
    var_16 = 0;
    pri = fun_EB98()
    OP_JNZ lab_D518
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 1;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_D518
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 220;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_D518
    OP_BREAK 
    var_120 = -2;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_D528
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 2
    OP_JZER lab_D620
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D620
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_D620
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 2
    OP_JZER lab_D7B8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 44
    OP_JNZ lab_D6D8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 87
    OP_JNZ lab_D6D8
    pri = 0;
    OP_JUMP lab_D6E8
// lab_D7B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 21;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D900
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D900
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_D900
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 36;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DA48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_DA48
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_DA48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 234;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DB90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_DB90
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_DB90
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -40
    OP_BREAK 
    OP_LOAD_S_PRI -40
    OP_EQ_C_PRI 1
    OP_JZER lab_DDB0
    OP_BREAK 
    var_16 = 0;
    pri = fun_EF00()
    OP_JNZ lab_DDA0
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_DDA0
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 180;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_DDA0
    OP_BREAK 
    var_120 = 2;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_DDB0
    OP_BREAK 
    OP_LOAD_S_PRI -40
    OP_EQ_C_PRI 2
    OP_JZER lab_DEA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DEA8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_DEA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_DFF0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_DFF0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_DFF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E138
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E138
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E138
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 127;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E280
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E280
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E280
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 17;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E3C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E3C8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E3C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 235;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E510
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E510
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E510
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 272;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E658
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E658
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E658
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 25;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E7A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E7A0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E7A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 114;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_E8E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_E8E8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_E8E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 78;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EA30
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_EA30
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_EA30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 359;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EB78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_EB78
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_EB78
    OP_STACK 40
    pri = 0;
    return pri;
// lab_DDA0
    OP_JUMP lab_DEA8
// lab_D6D8
    pri = 1;
// lab_D6E8
    OP_JZER lab_D7B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D7B8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_D518
    OP_JUMP lab_D620
// lab_D040
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 542;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_D188
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_D188
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
}
// fun_EB98
fun_EB98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 32;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EC48
    OP_BREAK 
    pri = 1;
    return pri;
// lab_EC48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 132;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_ECF0
    OP_BREAK 
    pri = 1;
    return pri;
// lab_ECF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 156;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_ED98
    OP_BREAK 
    pri = 1;
    return pri;
// lab_ED98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 162;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EE40
    OP_BREAK 
    pri = 1;
    return pri;
// lab_EE40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 214;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EEE8
    OP_BREAK 
    pri = 1;
    return pri;
// lab_EEE8
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_EF00
fun_EF00() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 32;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_EFB0
    OP_BREAK 
    pri = 1;
    return pri;
// lab_EFB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 132;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F058
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F058
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 156;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F100
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F100
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 162;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F1A8
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F1A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 214;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F250
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F250
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_F268
fun_F268() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 18;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F318
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F318
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 10;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F3C0
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F3C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F520
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 90;
    OP_JEQ lab_F500
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F520
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F5C8
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F5C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 12;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F728
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 90;
    OP_JEQ lab_F708
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F728
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_F878
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 87
    OP_JZER lab_F878
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F878
    OP_BREAK 
    pri = 0;
    return pri;
// lab_F708
    OP_BREAK 
    pri = 2;
    return pri;
// lab_F500
    OP_BREAK 
    pri = 2;
    return pri;
}
// fun_F890
fun_F890() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 18;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F940
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F940
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 10;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_F9E8
    OP_BREAK 
    pri = 1;
    return pri;
// lab_F9E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_FB48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 90;
    OP_JEQ lab_FB28
    OP_BREAK 
    pri = 1;
    return pri;
// lab_FB48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_FBF0
    OP_BREAK 
    pri = 1;
    return pri;
// lab_FBF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 12;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_FD50
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 90;
    OP_JEQ lab_FD30
    OP_BREAK 
    pri = 1;
    return pri;
// lab_FD50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_FEA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 87
    OP_JZER lab_FEA0
    OP_BREAK 
    pri = 1;
    return pri;
// lab_FEA0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_FD30
    OP_BREAK 
    pri = 2;
    return pri;
// lab_FB28
    OP_BREAK 
    pri = 2;
    return pri;
}
// fun_FEB8
fun_FEB8() {
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_10000
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 240;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_10000
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10000
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_10140
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 200;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_10140
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10140
    OP_BREAK 
    var_8 = 0;
    var_16 = 10;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10288
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10288
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10288
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 6;
    var_32 = 1;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_103D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_103D0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_103D0
    pri = 0;
    return pri;
}
// fun_103E0
fun_103E0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10530
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10530
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10530
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10678
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10678
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10678
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_107C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_107C0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_107C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_10918
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10918
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10918
    pri = 0;
    return pri;
}
// fun_10928
fun_10928() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10A78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10A78
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10A78
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 2;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10BC0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10BC0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10BC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10D08
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_10D08
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_10D08
    pri = 0;
    return pri;
}
// fun_10D18
fun_10D18() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 3
    OP_JZER lab_10E08
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10E08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10EE0
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_10EE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_10FA0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_10FA0
    pri = 0;
    return pri;
}
// fun_10FB0
fun_10FB0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 3;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11100
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11100
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_11100
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 3;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11248
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11248
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_11248
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11390
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11390
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_11390
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_114E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_114E8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_114E8
    pri = 0;
    return pri;
}
// fun_114F8
fun_114F8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 4;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11648
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11648
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_11648
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 4;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11790
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11790
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_11790
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_118D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_118D8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_118D8
    pri = 0;
    return pri;
}
// fun_118E8
fun_118E8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JNZ lab_11AA0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 99
    OP_JNZ lab_11AA0
    pri = 0;
    OP_JUMP lab_11AB0
// lab_11AA0
    pri = 1;
// lab_11AB0
    OP_JZER lab_11B20
    OP_BREAK 
    var_8 = -3;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_11B20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 17;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11C08
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_11C08
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 2
    OP_JZER lab_11F68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 87;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11E20
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 230;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_11E20
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_11F68
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 3
    OP_JZER lab_120E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 59;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_120E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_120E8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_120E8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F268()
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 1
    OP_JZER lab_12308
    OP_BREAK 
    var_16 = 0;
    pri = fun_EB98()
    OP_JNZ lab_122F8
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 1;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_122F8
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 220;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_122F8
    OP_BREAK 
    var_120 = -2;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_12308
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 2
    OP_JZER lab_12400
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12400
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_12400
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 2
    OP_JZER lab_12598
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 44
    OP_JNZ lab_124B8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 87
    OP_JNZ lab_124B8
    pri = 0;
    OP_JUMP lab_124C8
// lab_12598
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 21;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_126E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_126E0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_126E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 36;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12828
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12828
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_12828
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 234;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12970
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12970
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_12970
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -40
    OP_BREAK 
    OP_LOAD_S_PRI -40
    OP_EQ_C_PRI 1
    OP_JZER lab_12B90
    OP_BREAK 
    var_16 = 0;
    pri = fun_EF00()
    OP_JNZ lab_12B80
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_12B80
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 180;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_12B80
    OP_BREAK 
    var_120 = 2;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_12B90
    OP_BREAK 
    OP_LOAD_S_PRI -40
    OP_EQ_C_PRI 2
    OP_JZER lab_12C88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12C88
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_12C88
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 6;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12DD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12DD0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_12DD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 6;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12F18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_12F18
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_12F18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 17;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13060
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13060
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13060
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 235;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_131A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_131A8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_131A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 272;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_132F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_132F0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_132F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 25;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13438
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13438
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13438
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 114;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13580
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13580
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13580
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 78;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_136C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_136C8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_136C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 359;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13810
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13810
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13810
    OP_STACK 40
    pri = 0;
    return pri;
// lab_12B80
    OP_JUMP lab_12C88
// lab_124B8
    pri = 1;
// lab_124C8
    OP_JZER lab_12598
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_12598
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_122F8
    OP_JUMP lab_12400
// lab_11E20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 542;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_11F68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_11F68
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
}
// fun_13830
fun_13830() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13980
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13980
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13980
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 7;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13AC8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13AC8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13AC8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_13C10
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_13C10
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_13C10
    pri = 0;
    return pri;
}
// fun_13C20
fun_13C20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_14348
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_14348
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_14348
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 1;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_14348
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 1;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_14348
    var_248 = 0;
    var_256 = 7;
    var_264 = 6;
    var_272 = 1;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_14348
    var_296 = 0;
    var_304 = 7;
    var_312 = 7;
    var_320 = 1;
    var_328 = 42;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_14348
    var_344 = 0;
    var_352 = 5;
    var_360 = 1;
    var_368 = 0;
    var_376 = 41;
    var_384 = 40;
    pri = fun_0010(var_376, var_368, var_360, var_352, var_344)
    OP_JNZ lab_14348
    var_392 = 0;
    var_400 = 5;
    var_408 = 2;
    var_416 = 0;
    var_424 = 41;
    var_432 = 40;
    pri = fun_0010(var_424, var_416, var_408, var_400, var_392)
    OP_JNZ lab_14348
    var_440 = 0;
    var_448 = 5;
    var_456 = 3;
    var_464 = 0;
    var_472 = 41;
    var_480 = 40;
    pri = fun_0010(var_472, var_464, var_456, var_448, var_440)
    OP_JNZ lab_14348
    var_488 = 0;
    var_496 = 5;
    var_504 = 4;
    var_512 = 0;
    var_520 = 41;
    var_528 = 40;
    pri = fun_0010(var_520, var_512, var_504, var_496, var_488)
    OP_JNZ lab_14348
    var_536 = 0;
    var_544 = 6;
    var_552 = 5;
    var_560 = 0;
    var_568 = 41;
    var_576 = 40;
    pri = fun_0010(var_568, var_560, var_552, var_544, var_536)
    OP_JNZ lab_14348
    var_584 = 0;
    var_592 = 5;
    var_600 = 6;
    var_608 = 0;
    var_616 = 41;
    var_624 = 40;
    pri = fun_0010(var_616, var_608, var_600, var_592, var_584)
    OP_JNZ lab_14348
    var_632 = 0;
    var_640 = 5;
    var_648 = 7;
    var_656 = 0;
    var_664 = 41;
    var_672 = 40;
    pri = fun_0010(var_664, var_656, var_648, var_640, var_632)
    OP_JNZ lab_14348
    pri = 0;
    OP_JUMP lab_14358
// lab_14348
    pri = 1;
// lab_14358
    OP_JZER lab_14428
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14428
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14428
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_14B48
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_14B48
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_14B48
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_14B48
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_14B48
    var_248 = 0;
    var_256 = 7;
    var_264 = 6;
    var_272 = 0;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_14B48
    var_296 = 0;
    var_304 = 7;
    var_312 = 7;
    var_320 = 0;
    var_328 = 42;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_14B48
    var_344 = 0;
    var_352 = 5;
    var_360 = 1;
    var_368 = 1;
    var_376 = 41;
    var_384 = 40;
    pri = fun_0010(var_376, var_368, var_360, var_352, var_344)
    OP_JNZ lab_14B48
    var_392 = 0;
    var_400 = 5;
    var_408 = 2;
    var_416 = 1;
    var_424 = 41;
    var_432 = 40;
    pri = fun_0010(var_424, var_416, var_408, var_400, var_392)
    OP_JNZ lab_14B48
    var_440 = 0;
    var_448 = 5;
    var_456 = 3;
    var_464 = 1;
    var_472 = 41;
    var_480 = 40;
    pri = fun_0010(var_472, var_464, var_456, var_448, var_440)
    OP_JNZ lab_14B48
    var_488 = 0;
    var_496 = 5;
    var_504 = 4;
    var_512 = 1;
    var_520 = 41;
    var_528 = 40;
    pri = fun_0010(var_520, var_512, var_504, var_496, var_488)
    OP_JNZ lab_14B48
    var_536 = 0;
    var_544 = 6;
    var_552 = 5;
    var_560 = 1;
    var_568 = 41;
    var_576 = 40;
    pri = fun_0010(var_568, var_560, var_552, var_544, var_536)
    OP_JNZ lab_14B48
    var_584 = 0;
    var_592 = 5;
    var_600 = 6;
    var_608 = 1;
    var_616 = 41;
    var_624 = 40;
    pri = fun_0010(var_616, var_608, var_600, var_592, var_584)
    OP_JNZ lab_14B48
    var_632 = 0;
    var_640 = 5;
    var_648 = 7;
    var_656 = 1;
    var_664 = 41;
    var_672 = 40;
    pri = fun_0010(var_664, var_656, var_648, var_640, var_632)
    OP_JNZ lab_14B48
    pri = 0;
    OP_JUMP lab_14B58
// lab_14B48
    pri = 1;
// lab_14B58
    OP_JZER lab_14C40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14C28
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14C40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14D00
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_14D00
    pri = 0;
    return pri;
// lab_14C28
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_14D10
fun_14D10() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_14E60
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_14E60
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_14E60
    pri = 0;
    return pri;
}
// fun_14E70
fun_14E70() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 82;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 4
    OP_JZER lab_14FD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_14FD0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_14FD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15118
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15118
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15118
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 8;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15260
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15260
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15260
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_153A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_153A8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_153A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_154F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_154F0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_154F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15638
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15638
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15638
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 3;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15780
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15780
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15780
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 4;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_158C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_158C8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_158C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15A10
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15A10
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15A10
    pri = 0;
    return pri;
}
// fun_15A20
fun_15A20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15B70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15B70
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_15B70
    pri = 0;
    return pri;
}
// fun_15B80
fun_15B80() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_15E28
    var_56 = 0;
    var_64 = 0;
    var_72 = 6;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_15E28
    var_104 = 0;
    var_112 = 0;
    var_120 = 7;
    var_128 = 0;
    var_136 = 10;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_15E28
    var_152 = 0;
    var_160 = 6;
    var_168 = 6;
    var_176 = 0;
    var_184 = 41;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_15E28
    var_200 = 0;
    var_208 = 6;
    var_216 = 7;
    var_224 = 1;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_15E28
    pri = 0;
    OP_JUMP lab_15E38
// lab_15E28
    pri = 1;
// lab_15E38
    OP_JZER lab_15FA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_15FA8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_15FA8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_15FA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16080
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_16080
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16300
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 30;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_16270
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_16270
    pri = 0;
    OP_JUMP lab_16280
// lab_16300
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_166C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16448
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_166C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 289;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16810
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16810
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16810
    pri = 0;
    return pri;
// lab_16448
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_165E8
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_165E8
    var_104 = 0;
    var_112 = 7;
    var_120 = 4;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_165E8
    pri = 0;
    OP_JUMP lab_165F8
// lab_165E8
    pri = 1;
// lab_165F8
    OP_JZER lab_166C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_166C8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_16270
    pri = 1;
// lab_16280
    OP_JZER lab_162F0
    OP_BREAK 
    var_8 = -4;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_162F0
    OP_STACK 8
}
// fun_16820
fun_16820() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 263;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16970
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16970
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16970
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 22;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16AD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16AD0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_16AD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16C18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16C18
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16C18
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16D60
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16D60
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16D60
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16EA8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16EA8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16EA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 4;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_16FF0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_16FF0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_16FF0
    pri = 0;
    return pri;
}
// fun_17000
fun_17000() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17160
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_17150
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_17160
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_172A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_172A8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_172A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 102;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17408
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_173F0
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_17408
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_174C8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_174C8
    pri = 0;
    return pri;
// lab_173F0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_17150
    OP_JUMP lab_172A8
}
// fun_174D8
fun_174D8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_175B8
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_175B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17838
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 30;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_177A8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_177A8
    pri = 0;
    OP_JUMP lab_177B8
// lab_17838
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17C00
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_17980
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_17C00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 289;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17D48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_17D48
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_17D48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 157;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_17F68
    var_56 = 0;
    var_64 = 0;
    var_72 = 150;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_17F68
    var_104 = 0;
    var_112 = 0;
    var_120 = 214;
    var_128 = 0;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_17F68
    var_152 = 0;
    var_160 = 0;
    var_168 = 173;
    var_176 = 0;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_17F68
    pri = 0;
    OP_JUMP lab_17F78
// lab_17F68
    pri = 1;
// lab_17F78
    OP_JZER lab_17FA0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_17FA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 7;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_18140
    var_56 = 0;
    var_64 = 8;
    var_72 = 2;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_18140
    var_104 = 0;
    var_112 = 8;
    var_120 = 4;
    var_128 = 0;
    var_136 = 41;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_18140
    pri = 0;
    OP_JUMP lab_18150
// lab_18140
    pri = 1;
// lab_18150
    OP_JZER lab_18220
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18220
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_18220
    pri = 0;
    return pri;
// lab_17980
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_17B20
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_17B20
    var_104 = 0;
    var_112 = 7;
    var_120 = 4;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_17B20
    pri = 0;
    OP_JUMP lab_17B30
// lab_17B20
    pri = 1;
// lab_17B30
    OP_JZER lab_17C00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_17C00
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_177A8
    pri = 1;
// lab_177B8
    OP_JZER lab_17828
    OP_BREAK 
    var_8 = -4;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_17828
    OP_STACK 8
}
// fun_18230
fun_18230() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18380
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_18380
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_18380
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18440
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_18440
    pri = 0;
    return pri;
}
// fun_18450
fun_18450() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_18640
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_18640
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_18640
    pri = 0;
    OP_JUMP lab_18650
// lab_18640
    pri = 1;
// lab_18650
    OP_JZER lab_18738
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 250;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18738
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_18738
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 62;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 151
    OP_JZER lab_18B98
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 40;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JZER lab_189D0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_189C0
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_18B98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 271;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18D08
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_18D08
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_18D08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 111;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_18F28
    var_56 = 0;
    var_64 = 0;
    var_72 = 376;
    var_80 = 0;
    var_88 = 49;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_18F28
    var_104 = 0;
    var_112 = 0;
    var_120 = 355;
    var_128 = 0;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_18F28
    var_152 = 0;
    var_160 = 0;
    var_168 = 361;
    var_176 = 0;
    var_184 = 49;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_18F28
    pri = 0;
    OP_JUMP lab_18F38
// lab_18F28
    pri = 1;
// lab_18F38
    OP_JZER lab_19030
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19030
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_19030
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 65;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19370
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19228
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_19228
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_19370
    OP_STACK 8
    pri = 0;
    return pri;
// lab_19228
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19370
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19370
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_189D0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_18A80
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_18A80
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_18A80
    pri = 0;
    OP_JUMP lab_18A90
// lab_18A80
    pri = 1;
// lab_18A90
    OP_JZER lab_18B88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_18B88
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_18B88
    OP_STACK 8
// lab_189C0
    OP_JUMP lab_18B88
}
// fun_19390
fun_19390() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_194E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_194E0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_194E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19628
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19628
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_19628
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19770
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19770
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_19770
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_198B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_198B8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_198B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 10;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19A00
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19A00
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_19A00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 14;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19B48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 150;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19B48
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_19B48
    pri = 0;
    return pri;
}
// fun_19B58
fun_19B58() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_19D70
    OP_BREAK 
    var_16 = 0;
    pri = fun_EF00()
    OP_JNZ lab_19D70
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_19D70
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 180;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_19D70
    OP_BREAK 
    var_120 = 1;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_19D70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_19EB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_19EB8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_19EB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1A000
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1A000
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1A000
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_1A020
fun_1A020() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_1A210
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_1A210
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_1A210
    pri = 0;
    OP_JUMP lab_1A220
// lab_1A210
    pri = 1;
// lab_1A220
    OP_JZER lab_1A248
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1A248
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_1A398
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_1A398
    pri = 0;
    OP_JUMP lab_1A3A8
// lab_1A398
    pri = 1;
// lab_1A3A8
    OP_JZER lab_1A478
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1A478
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1A478
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 79;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_1A658
    OP_BREAK 
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1A658
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_1A658
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_1A658
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 79;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_1A838
    OP_BREAK 
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1A838
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_1A838
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_1A838
    pri = 0;
    return pri;
}
// fun_1A848
fun_1A848() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 69;
    OP_JEQ lab_1A970
    OP_LOAD_S_PRI -8
    alt = 98;
    OP_JEQ lab_1A970
    pri = 1;
    OP_JUMP lab_1A978
// lab_1A970
    pri = 0;
// lab_1A978
    OP_JZER lab_1AAD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 10;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1AAD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1AAD0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1AAD0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_1AAF0
fun_1AAF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1AC40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1AC40
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1AC40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1AD88
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1AD88
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1AD88
    pri = 0;
    return pri;
}
// fun_1AD98
fun_1AD98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1AEF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1AEE8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1AEF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B040
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1B040
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1B040
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 101;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B1A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1B188
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1B1A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B260
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1B260
    pri = 0;
    return pri;
// lab_1B188
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1AEE8
    OP_JUMP lab_1B040
}
// fun_1B270
fun_1B270() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 263;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B3D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1B3D8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1B3D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B5C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 20;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1B5A8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 230;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_1B5A8
    OP_BREAK 
    var_152 = 3;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_1B5C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1B708
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1B708
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1B708
    pri = 0;
    return pri;
// lab_1B5A8
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_1B718
fun_1B718() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_1B7D8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1B7D8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_0110()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 196
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 317
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 341
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 490
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 527
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 523
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 549
    OP_JNZ lab_1B9C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 778
    OP_JNZ lab_1B9C0
    pri = 0;
    OP_JUMP lab_1B9D0
// lab_1B9C0
    pri = 1;
// lab_1B9D0
    OP_JZER lab_1BA70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    pri = fun_10D18()
    var_48 = pri;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
// lab_1BA70
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_1BA90
fun_1BA90() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1BCA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1BBE0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1BCA0
    OP_BREAK 
    var_8 = 0;
    pri = fun_FEB8()
    pri = 0;
    return pri;
// lab_1BBE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1BCA0
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_1BCD8
fun_1BCD8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 80;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 264;
    var_176 = 1;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_1BFF0
    OP_BREAK 
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 180;
    var_232 = 0;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JZER lab_1BFF0
    OP_BREAK 
    var_248 = 1;
    var_256 = 8;
    pri = fun_00B8(var_248)
// lab_1BFF0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 38
    OP_JZER lab_1C0E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C0E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1C0E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C240
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1C230
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1C240
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C388
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1C388
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1C388
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -32
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1C4F0
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 158
    OP_JNZ lab_1C4F0
    pri = 0;
    OP_JUMP lab_1C500
// lab_1C4F0
    pri = 1;
// lab_1C500
    OP_JZER lab_1D260
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 1
    OP_JNZ lab_1C650
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 33
    OP_JNZ lab_1C650
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 66
    OP_JNZ lab_1C650
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 67
    OP_JNZ lab_1C650
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 167
    OP_JNZ lab_1C650
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 187
    OP_JNZ lab_1C650
    pri = 0;
    OP_JUMP lab_1C660
// lab_1D260
    OP_STACK 32
    pri = 0;
    return pri;
// lab_1C650
    pri = 1;
// lab_1C660
    OP_JZER lab_1C7B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 9;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C7B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1C7B8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1C7B8
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 49
    OP_JNZ lab_1C868
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 118
    OP_JNZ lab_1C868
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 166
    OP_JNZ lab_1C868
    pri = 0;
    OP_JUMP lab_1C878
// lab_1C868
    pri = 1;
// lab_1C878
    OP_JZER lab_1C9D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1C9D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1C9D0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1C9D0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 84
    OP_JZER lab_1CB50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 18;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1CB50
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1CB50
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1CB50
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 38
    OP_JZER lab_1CC48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1CC48
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1CC48
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 294
    OP_JZER lab_1CDE0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_1CD00
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_1CD00
    pri = 0;
    OP_JUMP lab_1CD10
// lab_1CDE0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 342
    OP_JZER lab_1D020
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 1;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1CF18
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_1CF18
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_1CF18
    pri = 0;
    OP_JUMP lab_1CF28
// lab_1D020
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 375
    OP_JZER lab_1D260
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 1;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1D158
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_1D158
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_1D158
    pri = 0;
    OP_JUMP lab_1D168
// lab_1D158
    pri = 1;
// lab_1D168
    OP_JZER lab_1D1A0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_1D1A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1D260
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1CF18
    pri = 1;
// lab_1CF28
    OP_JZER lab_1CF60
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_1CF60
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1D020
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1CD00
    pri = 1;
// lab_1CD10
    OP_JZER lab_1CDE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1CDE0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1C230
    OP_JUMP lab_1C388
}
// fun_1D280
fun_1D280() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_1D470
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_1D470
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_1D470
    pri = 0;
    OP_JUMP lab_1D480
// lab_1D470
    pri = 1;
// lab_1D480
    OP_JZER lab_1D4A8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_1D4A8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 54
    OP_JZER lab_1D660
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1D638
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1D660
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1D840
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 55;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1D830
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_1D830
    OP_BREAK 
    var_152 = -1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_1D840
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1D988
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1D988
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1D988
    OP_STACK 8
    pri = 0;
    return pri;
// lab_1D830
    OP_JUMP lab_1D988
// lab_1D638
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_1D9A8
fun_1D9A8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1DB18
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_1DB18
    pri = 0;
    OP_JUMP lab_1DB28
// lab_1DB18
    pri = 1;
// lab_1DB28
    OP_JZER lab_1F1F8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 2;
    OP_JEQ lab_1DC58
    OP_LOAD_S_PRI -16
    alt = 1;
    OP_JEQ lab_1DC58
    pri = 1;
    OP_JUMP lab_1DC60
// lab_1F1F8
    OP_STACK 8
    pri = 0;
    return pri;
// lab_1DC58
    pri = 0;
// lab_1DC60
    OP_JZER lab_1DD30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1DD30
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1DD30
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 147
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 79
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 92
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 261
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 86
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 142
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 464
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 77
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 78
    OP_JNZ lab_1DFC8
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 137
    OP_JNZ lab_1DFC8
    pri = 0;
    OP_JUMP lab_1DFD8
// lab_1DFC8
    pri = 1;
// lab_1DFD8
    OP_JZER lab_1E2F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1E210
    var_56 = 0;
    var_64 = 0;
    var_72 = 4;
    var_80 = 1;
    var_88 = 11;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1E210
    var_104 = 0;
    var_112 = 0;
    var_120 = 5;
    var_128 = 1;
    var_136 = 11;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_1E210
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    var_184 = 13;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_1E210
    pri = 1;
    OP_JUMP lab_1E218
// lab_1E2F8
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 109
    OP_JNZ lab_1E438
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 207
    OP_JNZ lab_1E438
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 260
    OP_JNZ lab_1E438
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 298
    OP_JNZ lab_1E438
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 86
    OP_JNZ lab_1E438
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 448
    OP_JNZ lab_1E438
    pri = 0;
    OP_JUMP lab_1E448
// lab_1E438
    pri = 1;
// lab_1E448
    OP_JZER lab_1E5B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1E5A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1E5A0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1E5B0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 213
    OP_JZER lab_1E740
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1E730
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1E730
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1E740
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 269
    OP_JZER lab_1E8D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1E8C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1E8C0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1E8D0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 259
    OP_JZER lab_1EA60
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 12;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1EA50
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1EA50
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1EA60
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 50
    OP_JZER lab_1EBF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 13;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1EBE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1EBE0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1EBF0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 227
    OP_JZER lab_1ED80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 23;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1ED70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1ED70
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1ED80
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 73
    OP_JZER lab_1F1E8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -40
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 11;
    var_128 = 1;
    var_136 = 105;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_1EFE8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 11
    OP_JNZ lab_1EFE8
    OP_LOAD_S_PRI -40
    OP_EQ_C_PRI 11
    OP_JNZ lab_1EFE8
    pri = 0;
    OP_JUMP lab_1EFF8
// lab_1F1E8
    OP_STACK 16
// lab_1EFE8
    pri = 1;
// lab_1EFF8
    OP_JZER lab_1F030
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_1F030
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 64
    OP_JZER lab_1F090
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_1F090
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 18;
    var_32 = 1;
    var_40 = 11;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F1D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1F1D8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1F1D8
    OP_STACK 16
// lab_1ED70
    OP_JUMP lab_1F1E8
// lab_1EBE0
    OP_JUMP lab_1F1E8
// lab_1EA50
    OP_JUMP lab_1F1E8
// lab_1E8C0
    OP_JUMP lab_1F1E8
// lab_1E730
    OP_JUMP lab_1F1E8
// lab_1E5A0
    OP_JUMP lab_1F1E8
// lab_1E210
    pri = 0;
// lab_1E218
    OP_JZER lab_1E2E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1E2E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1E2E8
    OP_JUMP lab_1F1E8
}
// fun_1F218
fun_1F218() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F368
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1F368
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1F368
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F428
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1F428
    pri = 0;
    return pri;
}
// fun_1F438
fun_1F438() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1F560
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1F560
    pri = 0;
    OP_JUMP lab_1F570
// lab_1F560
    pri = 1;
// lab_1F570
    OP_JZER lab_1F640
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F640
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1F640
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_1F760
    var_56 = 0;
    var_64 = 0;
    var_72 = 6;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_1F760
    pri = 0;
    OP_JUMP lab_1F770
// lab_1F760
    pri = 1;
// lab_1F770
    OP_JZER lab_1F840
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F840
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_1F840
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1F988
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1F988
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1F988
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1FAE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1FAD0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1FAE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_1FC28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1FC28
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1FC28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_1FD80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1FD80
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1FD80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_1FED8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_1FED8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_1FED8
    pri = 0;
    return pri;
// lab_1FAD0
    OP_JUMP lab_1FC28
}
// fun_1FEE8
fun_1FEE8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_20058
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_20058
    pri = 0;
    OP_JUMP lab_20068
// lab_20058
    pri = 1;
// lab_20068
    OP_JZER lab_20180
    OP_BREAK 
    var_8 = 0;
    pri = fun_201A0()
    OP_EQ_C_PRI 1
    OP_JZER lab_20180
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 200;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_20180
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_20180
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_201A0
fun_201A0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JZER lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 147
    OP_JNZ lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 79
    OP_JNZ lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 104
    OP_JNZ lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 164
    OP_JNZ lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 227
    OP_JNZ lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 274
    OP_JNZ lab_203D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 464
    OP_JNZ lab_203D0
    pri = 0;
    OP_JUMP lab_203E0
// lab_203D0
    pri = 1;
// lab_203E0
    OP_JZER lab_20418
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_20418
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 2;
    OP_JEQ lab_20538
    OP_LOAD_S_PRI -16
    alt = 1;
    OP_JEQ lab_20538
    pri = 1;
    OP_JUMP lab_20540
// lab_20538
    pri = 0;
// lab_20540
    OP_JZER lab_20580
    OP_BREAK 
    pri = 1;
    OP_STACK 16
    return pri;
// lab_20580
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
// fun_205A8
fun_205A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 64;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_20960
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 29;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 182
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 197
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 203
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 469
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 501
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 588
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 561
    OP_JNZ lab_20870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 596
    OP_JNZ lab_20870
    pri = 0;
    OP_JUMP lab_20880
// lab_20960
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_20A38
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_20A38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_20B80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_20B80
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_20B80
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 1
    OP_JNZ lab_20CF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_20CF8
    pri = 0;
    OP_JUMP lab_20D08
// lab_20CF8
    pri = 1;
// lab_20D08
    OP_JZER lab_21050
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_20E70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_20E60
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_21050
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_211A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21198
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_211A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21378
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 80;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21378
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_21378
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_21378
    OP_STACK 8
    pri = 0;
    return pri;
// lab_21198
    OP_JUMP lab_21378
// lab_20E70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21040
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 80;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21040
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_21040
    OP_BREAK 
    var_152 = 3;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_21040
    OP_JUMP lab_21378
// lab_20E60
    OP_JUMP lab_21040
// lab_20870
    pri = 1;
// lab_20880
    OP_JZER lab_20950
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_20950
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_20950
    OP_STACK 8
}
// fun_21398
fun_21398() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21460
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_21460
    pri = 0;
    return pri;
}
// fun_21470
fun_21470() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 182;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_21718
    var_56 = 0;
    var_64 = 0;
    var_72 = 197;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_21718
    var_104 = 0;
    var_112 = 0;
    var_120 = 588;
    var_128 = 0;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_21718
    var_152 = 0;
    var_160 = 0;
    var_168 = 596;
    var_176 = 0;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_21718
    var_200 = 0;
    var_208 = 0;
    var_216 = 469;
    var_224 = 0;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_21718
    pri = 0;
    OP_JUMP lab_21728
// lab_21718
    pri = 1;
// lab_21728
    OP_JZER lab_21788
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_21788
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21848
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_21848
    pri = 0;
    return pri;
}
// fun_21858
fun_21858() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_219C8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_219C8
    pri = 0;
    OP_JUMP lab_219D8
// lab_219C8
    pri = 1;
// lab_219D8
    OP_JZER lab_21DE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21B40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21B30
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_21DE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21EA0
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_21EA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21FF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21FE8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_21FF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22140
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22140
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_22140
    OP_STACK 8
    pri = 0;
    return pri;
// lab_21FE8
    OP_JUMP lab_22140
// lab_21B40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21C88
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21C88
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_21C88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_21DD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_21DD0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_21DD0
    OP_JUMP lab_22140
// lab_21B30
    OP_JUMP lab_21C88
}
// fun_22160
fun_22160() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22480
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 33;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22338
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 240;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_22338
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_22480
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22798
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 60;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22650
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 220;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_22650
    OP_BREAK 
    var_152 = -1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_22798
    pri = 0;
    return pri;
// lab_22650
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22798
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22798
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_22338
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 8;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22480
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22480
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
}
// fun_227A8
fun_227A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 38;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22908
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_228F8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_22908
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22AD8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22AD8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_22AD8
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_22AD8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_22C20
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22C20
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_22C20
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_23008
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 8;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_22EC0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 70;
    var_128 = 3;
    var_136 = 5;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_22EC0
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 128;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_22EC0
    OP_BREAK 
    var_200 = 1;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_23008
    OP_STACK 8
    pri = 0;
    return pri;
// lab_22EC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 3;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23008
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_23008
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_228F8
    OP_JUMP lab_22AD8
}
// fun_23028
fun_23028() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 52;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23150
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 52;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_23150
    pri = 0;
    OP_JUMP lab_23160
// lab_23150
    pri = 1;
// lab_23160
    OP_JZER lab_23188
    OP_BREAK 
    pri = 0;
    return pri;
// lab_23188
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 60
    OP_JZER lab_23238
    OP_BREAK 
    pri = 0;
    return pri;
// lab_23238
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 5
    OP_JZER lab_23418
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 64;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_23418
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 220;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_23418
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_23418
    OP_BREAK 
    var_8 = 0;
    pri = fun_239F8()
    OP_EQ_C_PRI 1
    OP_JZER lab_23520
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 128;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_23520
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_23520
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 493
    OP_JNZ lab_23638
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 649
    OP_JNZ lab_23638
    pri = 0;
    OP_JUMP lab_23648
// lab_23638
    pri = 1;
// lab_23648
    OP_JZER lab_23690
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_23690
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 487
    OP_JZER lab_23788
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23788
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_23788
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 109;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23848
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_23848
    OP_BREAK 
    var_8 = 0;
    pri = fun_394B8()
    OP_EQ_C_PRI 1
    OP_JZER lab_239D8
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_23978
    OP_BREAK 
    var_64 = -5;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_239D8
    OP_STACK 8
    pri = 0;
    return pri;
// lab_23978
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_239F8
fun_239F8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 25
    OP_JNZ lab_23BA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 105
    OP_JNZ lab_23BA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 113
    OP_JNZ lab_23BA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 233
    OP_JNZ lab_23BA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 356
    OP_JNZ lab_23BA8
    pri = 0;
    OP_JUMP lab_23BB8
// lab_23BA8
    pri = 1;
// lab_23BB8
    OP_JZER lab_23BF8
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_23BF8
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_23C20
fun_23C20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 23;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23D70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_23D70
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_23D70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 34;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_23EB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_23EB8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_23EB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 535;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24000
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24000
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_24000
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 560;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24148
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24148
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_24148
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 407;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24290
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24290
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_24290
    OP_BREAK 
    var_8 = 0;
    pri = fun_CB08()
    pri = 0;
    return pri;
}
// fun_242C8
fun_242C8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_24480
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_24480
    pri = 0;
    OP_JUMP lab_24490
// lab_24480
    pri = 1;
// lab_24490
    OP_JZER lab_247F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_245E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_245E8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_247F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 360;
    var_32 = 1;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24938
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24938
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_24938
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 72;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24A80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24A80
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_24A80
    OP_STACK 16
    pri = 0;
    return pri;
// lab_245E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 31;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_24730
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24730
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_24730
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_247F0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_24AA0
fun_24AA0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 210;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24C78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 25;
    var_80 = 1;
    var_88 = 4;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_24C78
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 240;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_24C78
    OP_BREAK 
    var_152 = -3;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_24C78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_24FC0
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 289
    OP_JNZ lab_24EA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 632
    OP_JNZ lab_24EA8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 54
    OP_JNZ lab_24EA8
    pri = 0;
    OP_JUMP lab_24EB8
// lab_24FC0
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 182
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 197
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 203
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 469
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 501
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 588
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 561
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 596
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 661
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 792
    OP_JNZ lab_25288
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 743
    OP_JNZ lab_25288
    pri = 0;
    OP_JUMP lab_25298
// lab_25288
    pri = 1;
// lab_25298
    OP_JZER lab_25368
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_25368
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_25368
    OP_BREAK 
    var_8 = 0;
    pri = fun_25EF8()
    OP_EQ_C_PRI 1
    OP_JZER lab_25470
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 128;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_25470
    OP_BREAK 
    var_64 = -2;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_25470
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 364;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_255B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_255B8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_255B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 593;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_25700
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_25700
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_25700
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 467
    OP_JNZ lab_25818
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 566
    OP_JNZ lab_25818
    pri = 0;
    OP_JUMP lab_25828
// lab_25818
    pri = 1;
// lab_25828
    OP_JZER lab_25920
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_258F8
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_25920
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F268()
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 1
    OP_JZER lab_25AF8
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    var_48 = 33;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    alt = 98;
    OP_JEQ lab_25AF8
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_25AF8
    OP_BREAK 
    var_112 = -2;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_25AF8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 1
    OP_JZER lab_25CD0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 33;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    alt = 98;
    OP_JEQ lab_25CD0
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 125;
    var_96 = 97;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_25CD0
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_25CD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_25E18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_25E18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_25E18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 97;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_25ED8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_25ED8
    OP_STACK 32
    pri = 0;
    return pri;
// lab_258F8
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_24EA8
    pri = 1;
// lab_24EB8
    OP_JZER lab_24FB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 250;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_24FB0
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_24FB0
    OP_STACK 8
}
// fun_25EF8
fun_25EF8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_26640
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 26
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 55
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 65
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 68
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 71
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 87
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 122
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 186
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 189
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 202
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 213
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 313
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 314
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 317
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 365
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 392
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 428
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 441
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 503
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 510
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 531
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 555
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 573
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 587
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 617
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 699
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 701
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 730
    OP_JNZ lab_265E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 758
    OP_JNZ lab_265E0
    pri = 0;
    OP_JUMP lab_265F0
// lab_26640
    OP_BREAK 
    pri = 0;
    return pri;
// lab_265E0
    pri = 1;
// lab_265F0
    OP_JZER lab_26630
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_26630
    OP_STACK 8
}
// fun_26658
fun_26658() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 73;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JZER lab_26748
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_26748
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26808
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_26808
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_26828
fun_26828() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_269E0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_269E0
    pri = 0;
    OP_JUMP lab_269F0
// lab_269E0
    pri = 1;
// lab_269F0
    OP_JZER lab_26AC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26AC0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_26AC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26C08
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_26C08
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_26C08
    OP_STACK 16
    pri = 0;
    return pri;
}
// fun_26C28
fun_26C28() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_26D78
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_26D78
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_26D78
    pri = 0;
    OP_JUMP lab_26D88
// lab_26D78
    pri = 1;
// lab_26D88
    OP_JZER lab_26E58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26E58
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_26E58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_26F18
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_26F18
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_26F38
fun_26F38() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 63;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_27088
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_27088
    OP_BREAK 
    var_104 = -4;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_27088
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_271D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 160;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_271D0
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_271D0
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F268()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_27320
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 1;
    var_48 = 33;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    alt = 98;
    OP_JEQ lab_27320
    OP_BREAK 
    var_64 = -5;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_27320
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_273E0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_273E0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_27400
fun_27400() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 104;
    OP_JEQ lab_275F0
    OP_LOAD_S_PRI -16
    alt = 163;
    OP_JEQ lab_275F0
    OP_LOAD_S_PRI -16
    alt = 164;
    OP_JEQ lab_275F0
    pri = 1;
    OP_JUMP lab_275F8
// lab_275F0
    pri = 0;
// lab_275F8
    OP_JZER lab_279C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 4;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_279C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 94;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 687
    OP_JZER lab_27810
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_27810
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_279C8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_27AE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_27AE8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_27AE8
    OP_BREAK 
    var_8 = 0;
    pri = fun_1AAF0()
    OP_STACK 16
    pri = 0;
    return pri;
// lab_27810
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 126
    OP_JZER lab_279C8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_279C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_279C8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
// fun_27B30
fun_27B30() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_27BF8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_27BF8
    OP_BREAK 
    var_8 = 0;
    pri = fun_1AAF0()
    pri = 0;
    return pri;
}
// fun_27C30
fun_27C30() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_27E20
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_27E20
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_27E20
    pri = 0;
    OP_JUMP lab_27E30
// lab_27E20
    pri = 1;
// lab_27E30
    OP_JZER lab_27E90
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_27E90
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_27FF0
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 128;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_27FF0
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_27FF0
    OP_BREAK 
    var_8 = 9;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_28150
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 150;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_28150
    OP_BREAK 
    var_112 = 2;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_28150
    pri = 0;
    return pri;
}
// fun_28160
fun_28160() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_28350
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_28350
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_28350
    pri = 0;
    OP_JUMP lab_28360
// lab_28350
    pri = 1;
// lab_28360
    OP_JZER lab_283C0
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_283C0
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_28520
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 128;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_28520
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_28520
    OP_BREAK 
    var_8 = 9;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_28680
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 150;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_28680
    OP_BREAK 
    var_112 = 2;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_28680
    pri = 0;
    return pri;
}
// fun_28690
fun_28690() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_289B8
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_289B8
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_289B8
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 1;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_289B8
    var_200 = 0;
    var_208 = 7;
    var_216 = 7;
    var_224 = 1;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_289B8
    var_248 = 0;
    var_256 = 7;
    var_264 = 6;
    var_272 = 1;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_289B8
    pri = 0;
    OP_JUMP lab_289C8
// lab_289B8
    pri = 1;
// lab_289C8
    OP_JZER lab_29158
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_28DA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 60;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_28B88
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_28B88
    OP_BREAK 
    pri = 0;
    return pri;
// lab_29158
    pri = 0;
    return pri;
// lab_28DA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29158
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_28F50
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_28F50
    OP_BREAK 
    pri = 0;
    return pri;
// lab_28F50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29010
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_29010
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29158
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_29158
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_28B88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_28C48
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_28C48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_28D90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_28D90
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_28D90
    OP_JUMP lab_29158
}
// fun_29168
fun_29168() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 55;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_294F8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_29408
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_29408
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_29408
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_29408
    pri = 0;
    OP_JUMP lab_29418
// lab_294F8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_295D8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_295D8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_295D8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_295D8
    pri = 0;
    OP_JUMP lab_295E8
// lab_295D8
    pri = 1;
// lab_295E8
    OP_JZER lab_296B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_296B8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_296B8
    OP_STACK 16
    pri = 0;
    return pri;
// lab_29408
    pri = 1;
// lab_29418
    OP_JZER lab_294E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_294E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_294E8
    OP_JUMP lab_296B8
}
// fun_296D8
fun_296D8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_29828
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_29828
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_29828
    pri = 0;
    OP_JUMP lab_29838
// lab_29828
    pri = 1;
// lab_29838
    OP_JZER lab_29930
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29908
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_29930
    OP_BREAK 
    var_8 = 0;
    pri = fun_15B80()
    OP_STACK 8
    pri = 0;
    return pri;
// lab_29908
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_29978
fun_29978() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 112;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_PUSH_S -8
    var_56 = 8;
    pri = fun_29A70(var_48)
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_29A70
fun_29A70() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_STACK -8
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_JNZ lab_2A120
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_29D80
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_29D80
    pri = 0;
    OP_JUMP lab_29D90
// lab_2A120
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 9
    OP_JZER lab_2A9E0
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 18
    OP_JZER lab_2A2C0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 104;
    OP_JEQ lab_2A248
    OP_LOAD_S_PRI -24
    alt = 163;
    OP_JEQ lab_2A248
    OP_LOAD_S_PRI -24
    alt = 164;
    OP_JEQ lab_2A248
    pri = 1;
    OP_JUMP lab_2A250
// lab_2A9E0
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 10
    OP_JZER lab_2B1A0
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 11
    OP_JNZ lab_2AAC8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 114
    OP_JNZ lab_2AAC8
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 87
    OP_JNZ lab_2AAC8
    pri = 0;
    OP_JUMP lab_2AAD8
// lab_2B1A0
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 11
    OP_JZER lab_2BA48
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 157
    OP_JZER lab_2B340
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 104;
    OP_JEQ lab_2B2C8
    OP_LOAD_S_PRI -24
    alt = 163;
    OP_JEQ lab_2B2C8
    OP_LOAD_S_PRI -24
    alt = 164;
    OP_JEQ lab_2B2C8
    pri = 1;
    OP_JUMP lab_2B2D0
// lab_2BA48
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 12
    OP_JZER lab_2C2A8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2BB00
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_2BB00
    pri = 0;
    OP_JUMP lab_2BB10
// lab_2C2A8
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 14
    OP_JZER lab_2C998
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 47
    OP_JZER lab_2C350
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2C998
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 1
    OP_JZER lab_2D1E0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_2CA50
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_2CA50
    pri = 0;
    OP_JUMP lab_2CA60
// lab_2D1E0
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 3
    OP_JZER lab_2D970
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2D298
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2D298
    pri = 0;
    OP_JUMP lab_2D2A8
// lab_2D970
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 4
    OP_JZER lab_2E1F8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2DA28
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2DA28
    pri = 0;
    OP_JUMP lab_2DA38
// lab_2E1F8
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 2
    OP_JZER lab_2E7B8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_2E2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2E2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2E2E0
    pri = 0;
    OP_JUMP lab_2E2F0
// lab_2E7B8
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 13
    OP_JZER lab_2ECF8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_2E870
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_2E870
    pri = 0;
    OP_JUMP lab_2E880
// lab_2ECF8
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 6
    OP_JZER lab_2F508
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2EEA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_2EEA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_2EEA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2EEA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_2EEA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2EEA0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JNZ lab_2EEA0
    pri = 0;
    OP_JUMP lab_2EEB0
// lab_2F508
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 5
    OP_JZER lab_2FA68
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_2F5F0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2F5F0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2F5F0
    pri = 0;
    OP_JUMP lab_2F600
// lab_2FA68
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 7
    OP_JZER lab_2FF78
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JZER lab_2FB00
    OP_LOAD_S_PRI -16
    OP_JZER lab_2FB00
    pri = 0;
    OP_JUMP lab_2FB10
// lab_2FF78
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 15
    OP_JZER lab_30318
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JNZ lab_30030
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 17
    OP_JNZ lab_30030
    pri = 0;
    OP_JUMP lab_30040
// lab_30318
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 16
    OP_JZER lab_30878
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_30400
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_30400
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JNZ lab_30400
    pri = 0;
    OP_JUMP lab_30410
// lab_30878
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 8
    OP_JZER lab_30DD8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_30990
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_30990
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_30990
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_30990
    pri = 0;
    OP_JUMP lab_309A0
// lab_30DD8
    OP_BREAK 
    OP_LOAD_S_PRI 24
    OP_EQ_C_PRI 17
    OP_JZER lab_312B0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_30EC0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_30EC0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_30EC0
    pri = 0;
    OP_JUMP lab_30ED0
// lab_312B0
    OP_STACK 32
    pri = 0;
    return pri;
// lab_30EC0
    pri = 1;
// lab_30ED0
    OP_JZER lab_30F28
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_31030
// lab_30F28
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_30FD8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_30FD8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_30FD8
    pri = 0;
    OP_JUMP lab_30FE8
// lab_30FD8
    pri = 1;
// lab_30FE8
    OP_JZER lab_31030
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_31030
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_31090
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_31090
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_31140
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_31140
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_31140
    pri = 0;
    OP_JUMP lab_31150
// lab_31140
    pri = 1;
// lab_31150
    OP_JZER lab_311A8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_312B0
// lab_311A8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_31258
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_31258
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_31258
    pri = 0;
    OP_JUMP lab_31268
// lab_31258
    pri = 1;
// lab_31268
    OP_JZER lab_312B0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_30990
    pri = 1;
// lab_309A0
    OP_JZER lab_309F8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_30B00
// lab_309F8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_30AA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_30AA8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JNZ lab_30AA8
    pri = 0;
    OP_JUMP lab_30AB8
// lab_30AA8
    pri = 1;
// lab_30AB8
    OP_JZER lab_30B00
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_30B00
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_30B60
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_30B60
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_30C40
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_30C40
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_30C40
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_30C40
    pri = 0;
    OP_JUMP lab_30C50
// lab_30C40
    pri = 1;
// lab_30C50
    OP_JZER lab_30CA8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_30DB0
// lab_30CA8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_30D58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_30D58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 17
    OP_JNZ lab_30D58
    pri = 0;
    OP_JUMP lab_30D68
// lab_30D58
    pri = 1;
// lab_30D68
    OP_JZER lab_30DB0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_30DB0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_30400
    pri = 1;
// lab_30410
    OP_JZER lab_30468
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_30540
// lab_30468
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_304E8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_304E8
    pri = 0;
    OP_JUMP lab_304F8
// lab_304E8
    pri = 1;
// lab_304F8
    OP_JZER lab_30540
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_30540
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_30600
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_30600
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_30660
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_30660
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_30710
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_30710
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 17
    OP_JNZ lab_30710
    pri = 0;
    OP_JUMP lab_30720
// lab_30710
    pri = 1;
// lab_30720
    OP_JZER lab_30778
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_30850
// lab_30778
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_307F8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_307F8
    pri = 0;
    OP_JUMP lab_30808
// lab_307F8
    pri = 1;
// lab_30808
    OP_JZER lab_30850
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_30850
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_30030
    pri = 1;
// lab_30040
    OP_JZER lab_300B0
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_300B0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JZER lab_30130
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_301A0
// lab_30130
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JZER lab_301A0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_301A0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_30200
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_30200
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JZER lab_30280
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_302F0
// lab_30280
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JZER lab_302F0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_302F0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2FB00
    pri = 1;
// lab_2FB10
    OP_JZER lab_2FB80
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2FB80
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JZER lab_2FC00
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2FCD8
// lab_2FC00
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_2FC80
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_2FC80
    pri = 0;
    OP_JUMP lab_2FC90
// lab_2FC80
    pri = 1;
// lab_2FC90
    OP_JZER lab_2FCD8
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2FCD8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2FD98
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2FD98
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2FDF8
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2FDF8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JZER lab_2FE78
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2FF50
// lab_2FE78
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_2FEF8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_2FEF8
    pri = 0;
    OP_JUMP lab_2FF08
// lab_2FEF8
    pri = 1;
// lab_2FF08
    OP_JZER lab_2FF50
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2FF50
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2F5F0
    pri = 1;
// lab_2F600
    OP_JZER lab_2F658
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2F790
// lab_2F658
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2F738
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_2F738
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2F738
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_2F738
    pri = 0;
    OP_JUMP lab_2F748
// lab_2F738
    pri = 1;
// lab_2F748
    OP_JZER lab_2F790
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2F790
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2F7F0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2F7F0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_2F8A0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_2F8A0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2F8A0
    pri = 0;
    OP_JUMP lab_2F8B0
// lab_2F8A0
    pri = 1;
// lab_2F8B0
    OP_JZER lab_2F908
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2FA40
// lab_2F908
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2F9E8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_2F9E8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2F9E8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_2F9E8
    pri = 0;
    OP_JUMP lab_2F9F8
// lab_2F9E8
    pri = 1;
// lab_2F9F8
    OP_JZER lab_2FA40
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2FA40
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2EEA0
    pri = 1;
// lab_2EEB0
    OP_JZER lab_2EF08
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2F010
// lab_2EF08
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2EFB8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_2EFB8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_2EFB8
    pri = 0;
    OP_JUMP lab_2EFC8
// lab_2EFB8
    pri = 1;
// lab_2EFC8
    OP_JZER lab_2F010
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2F010
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2F0E0
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_JUMP lab_2F1A0
// lab_2F0E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2F1A0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2F1A0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2F200
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2F200
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2F370
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_2F370
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_2F370
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2F370
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_2F370
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2F370
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 17
    OP_JNZ lab_2F370
    pri = 0;
    OP_JUMP lab_2F380
// lab_2F370
    pri = 1;
// lab_2F380
    OP_JZER lab_2F3D8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2F4E0
// lab_2F3D8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2F488
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_2F488
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_2F488
    pri = 0;
    OP_JUMP lab_2F498
// lab_2F488
    pri = 1;
// lab_2F498
    OP_JZER lab_2F4E0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2F4E0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2E870
    pri = 1;
// lab_2E880
    OP_JZER lab_2E8F0
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2E8F0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_2E970
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2E970
    pri = 0;
    OP_JUMP lab_2E980
// lab_2E970
    pri = 1;
// lab_2E980
    OP_JZER lab_2E9D8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2EAB0
// lab_2E9D8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_2EA58
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_2EA58
    pri = 0;
    OP_JUMP lab_2EA68
// lab_2EA58
    pri = 1;
// lab_2EA68
    OP_JZER lab_2EAB0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2EAB0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2EB10
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2EB10
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_2EB90
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2EB90
    pri = 0;
    OP_JUMP lab_2EBA0
// lab_2EB90
    pri = 1;
// lab_2EBA0
    OP_JZER lab_2EBF8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2ECD0
// lab_2EBF8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_2EC78
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_2EC78
    pri = 0;
    OP_JUMP lab_2EC88
// lab_2EC78
    pri = 1;
// lab_2EC88
    OP_JZER lab_2ECD0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2ECD0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2E2E0
    pri = 1;
// lab_2E2F0
    OP_JZER lab_2E348
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2E450
// lab_2E348
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2E3F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_2E3F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_2E3F8
    pri = 0;
    OP_JUMP lab_2E408
// lab_2E3F8
    pri = 1;
// lab_2E408
    OP_JZER lab_2E450
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2E450
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2E510
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2E510
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2E570
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2E570
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_2E620
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2E620
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2E620
    pri = 0;
    OP_JUMP lab_2E630
// lab_2E620
    pri = 1;
// lab_2E630
    OP_JZER lab_2E688
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2E790
// lab_2E688
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2E738
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_2E738
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_2E738
    pri = 0;
    OP_JUMP lab_2E748
// lab_2E738
    pri = 1;
// lab_2E748
    OP_JZER lab_2E790
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2E790
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2DA28
    pri = 1;
// lab_2DA38
    OP_JZER lab_2DAA8
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2DAA8
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 26
    OP_JZER lab_2DC10
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 104;
    OP_JEQ lab_2DB98
    OP_LOAD_S_PRI -24
    alt = 163;
    OP_JEQ lab_2DB98
    OP_LOAD_S_PRI -24
    alt = 164;
    OP_JEQ lab_2DB98
    pri = 1;
    OP_JUMP lab_2DBA0
// lab_2DC10
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2DC90
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_2DC90
    pri = 0;
    OP_JUMP lab_2DCA0
// lab_2DC90
    pri = 1;
// lab_2DCA0
    OP_JZER lab_2DCF8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2DE60
// lab_2DCF8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2DE08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_2DE08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_2DE08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2DE08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2DE08
    pri = 0;
    OP_JUMP lab_2DE18
// lab_2DE08
    pri = 1;
// lab_2DE18
    OP_JZER lab_2DE60
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2DE60
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2DF20
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2DF20
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2DF80
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2DF80
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2E000
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_2E000
    pri = 0;
    OP_JUMP lab_2E010
// lab_2E000
    pri = 1;
// lab_2E010
    OP_JZER lab_2E068
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2E1D0
// lab_2E068
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2E178
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_2E178
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_2E178
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2E178
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2E178
    pri = 0;
    OP_JUMP lab_2E188
// lab_2E178
    pri = 1;
// lab_2E188
    OP_JZER lab_2E1D0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2E1D0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2DB98
    pri = 0;
// lab_2DBA0
    OP_JZER lab_2DC10
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2D298
    pri = 1;
// lab_2D2A8
    OP_JZER lab_2D318
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2D318
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_2D3F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2D3F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2D3F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_2D3F8
    pri = 0;
    OP_JUMP lab_2D408
// lab_2D3F8
    pri = 1;
// lab_2D408
    OP_JZER lab_2D460
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2D538
// lab_2D460
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2D4E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JNZ lab_2D4E0
    pri = 0;
    OP_JUMP lab_2D4F0
// lab_2D4E0
    pri = 1;
// lab_2D4F0
    OP_JZER lab_2D538
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2D538
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2D608
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_JUMP lab_2D6C8
// lab_2D608
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2D6C8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2D6C8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2D728
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2D728
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_2D808
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_2D808
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2D808
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_2D808
    pri = 0;
    OP_JUMP lab_2D818
// lab_2D808
    pri = 1;
// lab_2D818
    OP_JZER lab_2D870
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2D948
// lab_2D870
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2D8F0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 17
    OP_JNZ lab_2D8F0
    pri = 0;
    OP_JUMP lab_2D900
// lab_2D8F0
    pri = 1;
// lab_2D900
    OP_JZER lab_2D948
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2D948
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2CA50
    pri = 1;
// lab_2CA60
    OP_JZER lab_2CAD0
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2CAD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2CBB8
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2CBB8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_2CCC8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2CCC8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_2CCC8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_2CCC8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 17
    OP_JNZ lab_2CCC8
    pri = 0;
    OP_JUMP lab_2CCD8
// lab_2CCC8
    pri = 1;
// lab_2CCD8
    OP_JZER lab_2CD30
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2CE88
// lab_2CD30
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JZER lab_2CE30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_2CE30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2CE30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_2CE30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2CE30
    pri = 0;
    OP_JUMP lab_2CE40
// lab_2CE30
    pri = 1;
// lab_2CE40
    OP_JZER lab_2CE88
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2CE88
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2CEE8
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2CEE8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_2CFF8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2CFF8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_2CFF8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_2CFF8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 17
    OP_JNZ lab_2CFF8
    pri = 0;
    OP_JUMP lab_2D008
// lab_2CFF8
    pri = 1;
// lab_2D008
    OP_JZER lab_2D060
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2D1B8
// lab_2D060
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JZER lab_2D160
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_2D160
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2D160
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_2D160
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2D160
    pri = 0;
    OP_JUMP lab_2D170
// lab_2D160
    pri = 1;
// lab_2D170
    OP_JZER lab_2D1B8
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2D1B8
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2C350
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2C430
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_2C430
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_2C430
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2C430
    pri = 0;
    OP_JUMP lab_2C440
// lab_2C430
    pri = 1;
// lab_2C440
    OP_JZER lab_2C498
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2C5D0
// lab_2C498
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2C578
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2C578
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2C578
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_2C578
    pri = 0;
    OP_JUMP lab_2C588
// lab_2C578
    pri = 1;
// lab_2C588
    OP_JZER lab_2C5D0
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2C5D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2C690
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2C690
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2C6F0
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2C6F0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2C7D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_2C7D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_2C7D0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2C7D0
    pri = 0;
    OP_JUMP lab_2C7E0
// lab_2C7D0
    pri = 1;
// lab_2C7E0
    OP_JZER lab_2C838
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2C970
// lab_2C838
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2C918
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_2C918
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2C918
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_2C918
    pri = 0;
    OP_JUMP lab_2C928
// lab_2C918
    pri = 1;
// lab_2C928
    OP_JZER lab_2C970
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2C970
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2BB00
    pri = 1;
// lab_2BB10
    OP_JZER lab_2BB80
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2BB80
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 10
    OP_JNZ lab_2BC30
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 78
    OP_JNZ lab_2BC30
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 31
    OP_JNZ lab_2BC30
    pri = 0;
    OP_JUMP lab_2BC40
// lab_2BC30
    pri = 1;
// lab_2BC40
    OP_JZER lab_2BD80
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 104;
    OP_JEQ lab_2BD08
    OP_LOAD_S_PRI -24
    alt = 163;
    OP_JEQ lab_2BD08
    OP_LOAD_S_PRI -24
    alt = 164;
    OP_JEQ lab_2BD08
    pri = 1;
    OP_JUMP lab_2BD10
// lab_2BD80
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2BE30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_2BE30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_2BE30
    pri = 0;
    OP_JUMP lab_2BE40
// lab_2BE30
    pri = 1;
// lab_2BE40
    OP_JZER lab_2BE98
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2BF70
// lab_2BE98
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_2BF18
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2BF18
    pri = 0;
    OP_JUMP lab_2BF28
// lab_2BF18
    pri = 1;
// lab_2BF28
    OP_JZER lab_2BF70
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2BF70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2C030
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2C030
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2C090
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2C090
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2C140
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_2C140
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_2C140
    pri = 0;
    OP_JUMP lab_2C150
// lab_2C140
    pri = 1;
// lab_2C150
    OP_JZER lab_2C1A8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2C280
// lab_2C1A8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_2C228
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2C228
    pri = 0;
    OP_JUMP lab_2C238
// lab_2C228
    pri = 1;
// lab_2C238
    OP_JZER lab_2C280
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2C280
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2BD08
    pri = 0;
// lab_2BD10
    OP_JZER lab_2BD80
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2B340
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2B4B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2B4B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_2B4B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_2B4B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_2B4B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_2B4B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2B4B0
    pri = 0;
    OP_JUMP lab_2B4C0
// lab_2B4B0
    pri = 1;
// lab_2B4C0
    OP_JZER lab_2B518
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2B620
// lab_2B518
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_2B5C8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2B5C8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2B5C8
    pri = 0;
    OP_JUMP lab_2B5D8
// lab_2B5C8
    pri = 1;
// lab_2B5D8
    OP_JZER lab_2B620
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2B620
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2B6E0
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2B6E0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2B740
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2B740
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2B8B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2B8B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_2B8B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_2B8B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_2B8B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_2B8B0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2B8B0
    pri = 0;
    OP_JUMP lab_2B8C0
// lab_2B8B0
    pri = 1;
// lab_2B8C0
    OP_JZER lab_2B918
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2BA20
// lab_2B918
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_2B9C8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_2B9C8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2B9C8
    pri = 0;
    OP_JUMP lab_2B9D8
// lab_2B9C8
    pri = 1;
// lab_2B9D8
    OP_JZER lab_2BA20
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2BA20
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2B2C8
    pri = 0;
// lab_2B2D0
    OP_JZER lab_2B340
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2AAC8
    pri = 1;
// lab_2AAD8
    OP_JZER lab_2AC18
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 104;
    OP_JEQ lab_2ABA0
    OP_LOAD_S_PRI -24
    alt = 163;
    OP_JEQ lab_2ABA0
    OP_LOAD_S_PRI -24
    alt = 164;
    OP_JEQ lab_2ABA0
    pri = 1;
    OP_JUMP lab_2ABA8
// lab_2AC18
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_2ACC8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2ACC8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_2ACC8
    pri = 0;
    OP_JUMP lab_2ACD8
// lab_2ACC8
    pri = 1;
// lab_2ACD8
    OP_JZER lab_2AD30
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2AE38
// lab_2AD30
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2ADE0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_2ADE0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2ADE0
    pri = 0;
    OP_JUMP lab_2ADF0
// lab_2ADE0
    pri = 1;
// lab_2ADF0
    OP_JZER lab_2AE38
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2AE38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2AEF8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2AEF8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2AF58
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2AF58
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_2B008
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2B008
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_2B008
    pri = 0;
    OP_JUMP lab_2B018
// lab_2B008
    pri = 1;
// lab_2B018
    OP_JZER lab_2B070
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2B178
// lab_2B070
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2B120
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_2B120
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2B120
    pri = 0;
    OP_JUMP lab_2B130
// lab_2B120
    pri = 1;
// lab_2B130
    OP_JZER lab_2B178
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2B178
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2ABA0
    pri = 0;
// lab_2ABA8
    OP_JZER lab_2AC18
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2A2C0
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 85
    OP_JNZ lab_2A340
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 47
    OP_JNZ lab_2A340
    pri = 0;
    OP_JUMP lab_2A350
// lab_2A340
    pri = 1;
// lab_2A350
    OP_JZER lab_2A398
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2A398
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_2A478
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_2A478
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_2A478
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_2A478
    pri = 0;
    OP_JUMP lab_2A488
// lab_2A478
    pri = 1;
// lab_2A488
    OP_JZER lab_2A4E0
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2A618
// lab_2A4E0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_2A5C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_2A5C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_2A5C0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_2A5C0
    pri = 0;
    OP_JUMP lab_2A5D0
// lab_2A5C0
    pri = 1;
// lab_2A5D0
    OP_JZER lab_2A618
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2A618
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_2A6D8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_2A6D8
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2A738
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2A738
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_2A818
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_2A818
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2A818
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_2A818
    pri = 0;
    OP_JUMP lab_2A828
// lab_2A818
    pri = 1;
// lab_2A828
    OP_JZER lab_2A880
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_JUMP lab_2A9B8
// lab_2A880
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_2A960
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_2A960
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_2A960
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2A960
    pri = 0;
    OP_JUMP lab_2A970
// lab_2A960
    pri = 1;
// lab_2A970
    OP_JZER lab_2A9B8
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2A9B8
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2A248
    pri = 0;
// lab_2A250
    OP_JZER lab_2A2C0
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_29D80
    pri = 1;
// lab_29D90
    OP_JZER lab_29E00
    OP_BREAK 
    var_8 = -10;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_29E00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 105;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_29EE8
    OP_BREAK 
    var_56 = -10;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_29EE8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_29F68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_29F68
    pri = 0;
    OP_JUMP lab_29F78
// lab_29F68
    pri = 1;
// lab_29F78
    OP_JZER lab_29FC0
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_29FC0
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -8
    OP_JNEQ lab_2A020
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_2A020
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_2A0A0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_2A0A0
    pri = 0;
    OP_JUMP lab_2A0B0
// lab_2A0A0
    pri = 1;
// lab_2A0B0
    OP_JZER lab_2A0F8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_2A0F8
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
}
// fun_312D0
fun_312D0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_31420
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_31420
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_31420
    pri = 0;
    OP_JUMP lab_31430
// lab_31420
    pri = 1;
// lab_31430
    OP_JZER lab_31500
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_31500
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_31500
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_315C0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_315C0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_315E0
fun_315E0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_31730
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_31730
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_31730
    pri = 0;
    OP_JUMP lab_31740
// lab_31730
    pri = 1;
// lab_31740
    OP_JZER lab_31810
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_31810
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_31810
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_318D0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_318D0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_318F0
fun_318F0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 90;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_31A40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_31A40
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_31A40
    pri = 0;
    return pri;
}
// fun_31A50
fun_31A50() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_31BB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_31BA0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_31BB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_31ED8
    var_56 = 0;
    var_64 = 6;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_31ED8
    var_104 = 0;
    var_112 = 6;
    var_120 = 3;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_31ED8
    var_152 = 0;
    var_160 = 6;
    var_168 = 4;
    var_176 = 1;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_31ED8
    var_200 = 0;
    var_208 = 6;
    var_216 = 7;
    var_224 = 1;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_31ED8
    var_248 = 0;
    var_256 = 6;
    var_264 = 6;
    var_272 = 1;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_31ED8
    pri = 0;
    OP_JUMP lab_31EE8
// lab_31ED8
    pri = 1;
// lab_31EE8
    OP_JZER lab_31FB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_31FB8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_31FB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_322D8
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_322D8
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_322D8
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_322D8
    var_200 = 0;
    var_208 = 7;
    var_216 = 7;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_322D8
    var_248 = 0;
    var_256 = 7;
    var_264 = 6;
    var_272 = 0;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_322D8
    pri = 0;
    OP_JUMP lab_322E8
// lab_322D8
    pri = 1;
// lab_322E8
    OP_JZER lab_323C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_323B8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_323C8
    OP_BREAK 
    var_8 = -2;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_323B8
    OP_JUMP lab_32400
// lab_32400
    pri = 0;
    return pri;
// lab_31BA0
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_32410
fun_32410() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_32538
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_32538
    pri = 0;
    OP_JUMP lab_32548
// lab_32538
    pri = 1;
// lab_32548
    OP_JZER lab_32618
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32618
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_32618
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_32738
    var_56 = 0;
    var_64 = 0;
    var_72 = 6;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_32738
    pri = 0;
    OP_JUMP lab_32748
// lab_32738
    pri = 1;
// lab_32748
    OP_JZER lab_32818
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32818
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_32818
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32960
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_32960
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_32960
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32AB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_32AA8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_32AB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_32C00
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_32C00
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_32C00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_32D58
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_32D58
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_32D58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_32EB0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_32EB0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_32EB0
    pri = 0;
    return pri;
// lab_32AA8
    OP_JUMP lab_32C00
}
// fun_32EC0
fun_32EC0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 19
    OP_JZER lab_33020
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_33020
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_33020
    pri = 0;
    return pri;
}
// fun_33030
fun_33030() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 271;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_330F8
    OP_BREAK 
    var_56 = 0;
    pri = fun_52288()
    OP_JUMP lab_33540
// lab_330F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 111;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33258
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_33258
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_33258
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 361;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_333B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_333B8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_333B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 355;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33518
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_33518
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_33518
    OP_BREAK 
    var_8 = 0;
    pri = fun_52288()
// lab_33540
    pri = 0;
    return pri;
}
// fun_33550
fun_33550() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33618
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_33618
    pri = 0;
    return pri;
}
// fun_33628
fun_33628() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 90;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33848
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_33778
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_33848
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_339A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_33990
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_339A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33A60
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_33A60
    pri = 0;
    return pri;
// lab_33990
    OP_JUMP lab_33A60
// lab_33778
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 127;
    var_32 = 1;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33838
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_33838
    OP_JUMP lab_33A60
}
// fun_33A70
fun_33A70() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 56;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 3
    OP_JZER lab_33BD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_33BD0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_33BD0
    pri = 0;
    return pri;
}
// fun_33BE0
fun_33BE0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_33D30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_33D30
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_33D30
    pri = 0;
    OP_JUMP lab_33D40
// lab_33D30
    pri = 1;
// lab_33D40
    OP_JZER lab_33E10
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33E10
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_33E10
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_33ED0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_33ED0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_33EF0
fun_33EF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34058
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34058
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_34058
    pri = 0;
    return pri;
}
// fun_34068
fun_34068() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JZER lab_34200
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34200
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_34200
    OP_BREAK 
    var_8 = 0;
    pri = fun_1AAF0()
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_34248
fun_34248() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 263;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34398
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34398
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_34398
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 22;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34758
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 57;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_345D8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_345C8
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_34758
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 62
    OP_JZER lab_34840
    OP_BREAK 
    var_56 = -12;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_34840
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 67
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 68
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 217
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 277
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 538
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 533
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 534
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 20
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 214
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 296
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 297
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 404
    OP_JNZ lab_34B68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 405
    OP_JNZ lab_34B68
    pri = 0;
    OP_JUMP lab_34B78
// lab_34B68
    pri = 1;
// lab_34B78
    OP_JZER lab_34C48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34C48
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_34C48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34D90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34D90
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_34D90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_34EE8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34EE8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_34EE8
    OP_STACK 8
    pri = 0;
    return pri;
// lab_345D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_34748
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_34748
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_34748
    OP_STACK 8
// lab_345C8
    OP_JUMP lab_34748
}
// fun_34F08
fun_34F08() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_350F8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_350F8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_350F8
    pri = 0;
    OP_JUMP lab_35108
// lab_350F8
    pri = 1;
// lab_35108
    OP_JZER lab_35130
    OP_BREAK 
    pri = 0;
    return pri;
// lab_35130
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_35350
    var_56 = 0;
    var_64 = 0;
    var_72 = 1;
    var_80 = 1;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_35350
    var_104 = 0;
    var_112 = 0;
    var_120 = 4;
    var_128 = 1;
    var_136 = 10;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_35350
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    var_184 = 12;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_35350
    pri = 0;
    OP_JUMP lab_35360
// lab_35350
    pri = 1;
// lab_35360
    OP_JZER lab_35678
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_354C0
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_354C0
    pri = 0;
    OP_JUMP lab_354D0
// lab_35678
    pri = 0;
    return pri;
// lab_354C0
    pri = 1;
// lab_354D0
    OP_JZER lab_355B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_355B8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_355B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_35678
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_35688
fun_35688() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_35878
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_35878
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_35878
    pri = 0;
    OP_JUMP lab_35888
// lab_35878
    pri = 1;
// lab_35888
    OP_JZER lab_358B0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_358B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 93;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_35A10
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_35A10
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_35A10
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_35B30
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_35B30
    pri = 0;
    OP_JUMP lab_35B40
// lab_35B30
    pri = 1;
// lab_35B40
    OP_JZER lab_35C28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_35C28
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_35C28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_35D48
    var_56 = 0;
    var_64 = 0;
    var_72 = 6;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_35D48
    pri = 0;
    OP_JUMP lab_35D58
// lab_35D48
    pri = 1;
// lab_35D58
    OP_JZER lab_35E40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_35E40
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_35E40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_35FA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_35FA0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_35FA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_36100
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_36100
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_36100
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_361C0
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_361C0
    pri = 0;
    return pri;
}
// fun_361D0
fun_361D0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_363C0
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_363C0
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_363C0
    pri = 0;
    OP_JUMP lab_363D0
// lab_363C0
    pri = 1;
// lab_363D0
    OP_JZER lab_363F8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_363F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36540
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_36540
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_36540
    pri = 0;
    return pri;
}
// fun_36550
fun_36550() {
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 2;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36630
    OP_BREAK 
    pri = 17;
    OP_STOR_S_PRI -8
// lab_36630
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_366E0
    OP_BREAK 
    pri = 11;
    OP_STOR_S_PRI -8
// lab_366E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36790
    OP_BREAK 
    pri = 12;
    OP_STOR_S_PRI -8
// lab_36790
    OP_BREAK 
    OP_PUSH_S -8
    var_8 = 8;
    pri = fun_29A70(var_0)
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_367E8
fun_367E8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_368E0
    OP_BREAK 
    var_64 = -7;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_368E0
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_36A30
    var_64 = 6;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_36A30
    pri = 0;
    OP_JUMP lab_36A40
// lab_36A30
    pri = 1;
// lab_36A40
    OP_JZER lab_36B28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36B28
    OP_BREAK 
    var_56 = -4;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_36B28
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 78
    OP_JNZ lab_36C70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 31
    OP_JNZ lab_36C70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_36C70
    pri = 0;
    OP_JUMP lab_36C80
// lab_36C70
    pri = 1;
// lab_36C80
    OP_JZER lab_36CF0
    OP_BREAK 
    var_8 = -7;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_36CF0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_36D10
fun_36D10() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_37180()
    OP_EQ_C_PRI 1
    OP_JZER lab_36E20
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 200;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_36E20
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_36E20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_36F68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_36F68
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_36F68
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_370B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_370B0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_370B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_37170
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_37170
    pri = 0;
    return pri;
}
// fun_37180
fun_37180() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 47
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 45
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 182
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 53
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 71
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 80
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 199
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 87
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 97
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 113
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 242
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 122
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 197
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 176
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 468
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 189
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 195
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 198
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 200
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 429
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 202
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 205
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 213
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 235
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 286
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 302
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 304
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 305
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 326
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 327
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 346
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 352
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 354
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 356
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 477
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 426
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 437
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 442
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 488
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 491
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 510
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 518
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 549
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 563
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 576
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 579
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 591
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 593
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 594
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 598
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 606
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 642
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 641
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 676
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 709
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 666
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 670
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 687
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 678
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 711
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 681
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 689
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 707
    OP_JNZ lab_37E70
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 719
    OP_JNZ lab_37E70
    pri = 0;
    OP_JUMP lab_37E80
// lab_37E70
    pri = 1;
// lab_37E80
    OP_JZER lab_37EC0
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_37EC0
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_37EE8
fun_37EE8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 287;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_38210
    var_56 = 0;
    var_64 = 0;
    var_72 = 220;
    var_80 = 0;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_38210
    var_104 = 0;
    var_112 = 0;
    var_120 = 297;
    var_128 = 0;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_38210
    var_152 = 0;
    var_160 = 0;
    var_168 = 273;
    var_176 = 0;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_38210
    var_200 = 0;
    var_208 = 0;
    var_216 = 272;
    var_224 = 0;
    var_232 = 71;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_38210
    var_248 = 0;
    var_256 = 0;
    var_264 = 279;
    var_272 = 0;
    var_280 = 71;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_38210
    pri = 0;
    OP_JUMP lab_38220
// lab_38210
    pri = 1;
// lab_38220
    OP_JZER lab_38308
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_38308
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38308
    OP_BREAK 
    var_8 = 0;
    pri = fun_394B8()
    OP_EQ_C_PRI 1
    OP_JZER lab_38478
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_38428
    OP_BREAK 
    var_64 = -5;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38478
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 287;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_38618
    var_56 = 0;
    var_64 = 0;
    var_72 = 220;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_38618
    var_104 = 0;
    var_112 = 0;
    var_120 = 297;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_38618
    pri = 0;
    OP_JUMP lab_38628
// lab_38618
    pri = 1;
// lab_38628
    OP_JZER lab_388B8
    OP_BREAK 
    var_8 = 0;
    pri = fun_37180()
    OP_EQ_C_PRI 1
    OP_JZER lab_38758
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 200;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_38758
    OP_BREAK 
    var_64 = 2;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_388B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 273;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_38CB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 62;
    OP_JEQ lab_38CB8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 80;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 1
    OP_JZER lab_38B48
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 220;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_38B48
    OP_BREAK 
    var_200 = 2;
    var_208 = 8;
    pri = fun_00B8(var_200)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38CB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 279;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_38E18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_38E18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38E18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 272;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_39288
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 3;
    OP_JEQ lab_39198
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 2;
    var_136 = 24;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    alt = 3;
    OP_JEQ lab_39198
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 0;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    alt = 98;
    OP_JEQ lab_39198
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 33;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    alt = 62;
    OP_JEQ lab_39198
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 33;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    alt = 90;
    OP_JEQ lab_39198
    pri = 1;
    OP_JUMP lab_391A0
// lab_39288
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 279;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_393E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_393E8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_393E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_394A8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_394A8
    pri = 0;
    return pri;
// lab_39198
    pri = 0;
// lab_391A0
    OP_JZER lab_39288
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_39288
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38B48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 98;
    OP_JEQ lab_38CB8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 160;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_38CB8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38758
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_388B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_388B8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_38428
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_394B8
fun_394B8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 94
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 282
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 181
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 150
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 257
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 308
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 229
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 306
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 354
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 248
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 212
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 127
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 142
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 448
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 460
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 115
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 130
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 359
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 65
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 214
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 303
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 310
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 445
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 381
    OP_JNZ lab_39AE8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 380
    OP_JNZ lab_39AE8
    pri = 0;
    OP_JUMP lab_39AF8
// lab_39AE8
    pri = 1;
// lab_39AF8
    OP_JZER lab_39B38
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_39B38
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_39B60
fun_39B60() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_39E08()
    OP_EQ_C_PRI 1
    OP_JZER lab_39C88
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 180;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_39C88
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_39C88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 22;
    OP_JEQ lab_39DF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_39DF8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_39DF8
    pri = 0;
    return pri;
}
// fun_39E08
fun_39E08() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 51
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 53
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 55
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 230
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 466
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 131
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 134
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 135
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 139
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 141
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 171
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 184
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 192
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 195
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 198
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 202
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 211
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 226
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 229
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 244
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 243
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 245
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 272
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 275
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 295
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 302
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 310
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 311
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 312
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 330
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 367
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 368
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 369
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 419
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 421
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 423
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 453
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 485
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 510
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 528
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 530
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 508
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 537
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 549
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 576
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 579
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 586
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 593
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 601
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 609
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 637
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 642
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 641
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 655
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 673
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 695
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 678
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 676
    OP_JNZ lab_3AA08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 721
    OP_JNZ lab_3AA08
    pri = 0;
    OP_JUMP lab_3AA18
// lab_3AA08
    pri = 1;
// lab_3AA18
    OP_JZER lab_3AA58
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3AA58
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_3AA80
fun_3AA80() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_3ABA0()
    OP_EQ_C_PRI 1
    OP_JZER lab_3AB90
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_3AB90
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_3AB90
    pri = 0;
    return pri;
}
// fun_3ABA0
fun_3ABA0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 53
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 197
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 195
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 198
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 200
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 429
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 205
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 213
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 235
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 302
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 356
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 477
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 437
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 442
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 488
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 491
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 510
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 518
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 563
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 576
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 579
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 594
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 606
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 642
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 641
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 676
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 709
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 687
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 678
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 711
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 685
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 689
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 707
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 683
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 719
    OP_JNZ lab_3B350
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 703
    OP_JNZ lab_3B350
    pri = 0;
    OP_JUMP lab_3B360
// lab_3B350
    pri = 1;
// lab_3B360
    OP_JZER lab_3B3A0
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3B3A0
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_3B3C8
fun_3B3C8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3B490
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_3B490
    pri = 0;
    return pri;
}
// fun_3B4A0
fun_3B4A0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3B5F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3B5F0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3B5F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3B738
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3B738
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3B738
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3B880
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3B880
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3B880
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3B940
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_3B940
    pri = 0;
    return pri;
}
// fun_3B950
fun_3B950() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3BAA0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3BAA0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3BAA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3BBE8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3BBE8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3BBE8
    pri = 0;
    return pri;
}
// fun_3BBF8
fun_3BBF8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 14;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3BD48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 170;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3BD48
    OP_BREAK 
    var_104 = -5;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3BD48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3BE08
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_3BE08
    OP_BREAK 
    var_8 = 0;
    pri = fun_69D0()
    pri = 0;
    return pri;
}
// fun_3BE40
fun_3BE40() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 139
    OP_JZER lab_3BF80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3BF80
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3BF80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3C0F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3C0E0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3C0F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3C1C8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3C1C8
    OP_BREAK 
    var_8 = 0;
    pri = fun_239F8()
    OP_EQ_C_PRI 1
    OP_JZER lab_3C2D0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 200;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_3C2D0
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_3C2D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_3C430
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3C430
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3C430
    pri = 0;
    return pri;
// lab_3C0E0
    OP_JUMP lab_3C1C8
}
// fun_3C440
fun_3C440() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_3C630
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_3C630
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_3C630
    pri = 0;
    OP_JUMP lab_3C640
// lab_3C630
    pri = 1;
// lab_3C640
    OP_JZER lab_3C668
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3C668
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3CA70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 90;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3C848
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 220;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_3C838
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_3CA70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3CD10
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 80;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3CC50
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_3CC40
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_3CD10
    pri = 0;
    return pri;
// lab_3CC50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3CD10
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_3CC40
    OP_JUMP lab_3CD10
// lab_3C848
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3C9A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3C990
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3C9A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3CA60
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_3CA60
    OP_JUMP lab_3CD10
// lab_3C990
    OP_JUMP lab_3CA60
// lab_3C838
    OP_JUMP lab_3CA60
}
// fun_3CD20
fun_3CD20() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 94;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 54
    OP_JNZ lab_3CFD0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 112
    OP_JNZ lab_3CFD0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 289
    OP_JNZ lab_3CFD0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 486
    OP_JNZ lab_3CFD0
    pri = 0;
    OP_JUMP lab_3CFE0
// lab_3CFD0
    pri = 1;
// lab_3CFE0
    OP_JZER lab_3D050
    OP_BREAK 
    var_8 = -12;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_3D050
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 54
    OP_JNZ lab_3D0D0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 112
    OP_JNZ lab_3D0D0
    pri = 0;
    OP_JUMP lab_3D0E0
// lab_3D0D0
    pri = 1;
// lab_3D0E0
    OP_JZER lab_3D1D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3D1D8
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_3D1D8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_LOAD_S_PRI -32
    OP_JNZ lab_3D368
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 29;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 285
    OP_JZER lab_3D368
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3D368
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3D4D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3D4D8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_3D4D8
    OP_BREAK 
    var_8 = 0;
    pri = fun_3D7E0()
    OP_EQ_C_PRI 1
    OP_JZER lab_3D690
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 5;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_3D690
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_3D690
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_3D690
    OP_BREAK 
    var_8 = 0;
    pri = fun_39E08()
    OP_EQ_C_PRI 1
    OP_JZER lab_3D7C0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 180;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_3D7C0
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    OP_STACK 32
    return pri;
// lab_3D7C0
    OP_STACK 32
    pri = 0;
    return pri;
}
// fun_3D7E0
fun_3D7E0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 51
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 68
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 212
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 141
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 184
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 202
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 214
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 217
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 286
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 292
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 297
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 302
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 308
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 437
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 534
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 538
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 576
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 579
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 642
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 641
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 660
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 673
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 678
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 354
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 707
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 115
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 303
    OP_JNZ lab_3DE40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 115
    OP_JNZ lab_3DE40
    pri = 0;
    OP_JUMP lab_3DE50
// lab_3DE40
    pri = 1;
// lab_3DE50
    OP_JZER lab_3DE90
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_3DE90
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_3DEB8
fun_3DEB8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_3E020
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3E020
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3E020
    pri = 0;
    return pri;
}
// fun_3E030
fun_3E030() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 8;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3E4A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3E218
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_3E208
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_3E4A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 1;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3E5E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3E5E8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_3E5E8
    pri = 0;
    return pri;
// lab_3E218
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3E4A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_3E3C0
    var_104 = 0;
    var_112 = 7;
    var_120 = 4;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_3E3C0
    pri = 0;
    OP_JUMP lab_3E3D0
// lab_3E3C0
    pri = 1;
// lab_3E3D0
    OP_JZER lab_3E4A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3E4A0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_3E208
    OP_JUMP lab_3E4A0
}
// fun_3E5F8
fun_3E5F8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 32;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_3E7A0
    var_56 = 0;
    var_64 = 0;
    var_72 = 132;
    var_80 = 0;
    var_88 = 49;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_3E7A0
    var_104 = 0;
    var_112 = 0;
    var_120 = 214;
    var_128 = 0;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_3E7A0
    pri = 0;
    OP_JUMP lab_3E7B0
// lab_3E7A0
    pri = 1;
// lab_3E7B0
    OP_JZER lab_3EA90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3E930
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3E920
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3EA90
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 35
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 36
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 89
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 91
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 113
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 144
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 291
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 313
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 334
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 426
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 439
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 528
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 594
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 601
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 630
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 637
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 676
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 678
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 681
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 685
    OP_JNZ lab_3EF68
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 689
    OP_JNZ lab_3EF68
    pri = 0;
    OP_JUMP lab_3EF78
// lab_3EF68
    pri = 1;
// lab_3EF78
    OP_JZER lab_3F140
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_JZER lab_3F130
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3F130
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_3F140
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 130
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 149
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 160
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 334
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 612
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 697
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 384
    OP_JNZ lab_3F2E0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 718
    OP_JNZ lab_3F2E0
    pri = 0;
    OP_JUMP lab_3F2F0
// lab_3F2E0
    pri = 1;
// lab_3F2F0
    OP_JZER lab_3F568
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3F480
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3F470
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_3F568
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 24
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 28
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 49
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 62
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 71
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 166
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 178
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 184
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 192
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 200
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 202
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 212
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 245
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 264
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 267
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 269
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 284
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 348
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 370
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 338
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 344
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 377
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 379
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 380
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 470
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 482
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 480
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 481
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 488
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 493
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 542
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 547
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 555
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 558
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 604
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 612
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 638
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 639
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 640
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 658
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 663
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 666
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 703
    OP_JNZ lab_3FDF8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 707
    OP_JNZ lab_3FDF8
    pri = 0;
    OP_JUMP lab_3FE08
// lab_3FDF8
    pri = 1;
// lab_3FE08
    OP_JZER lab_3FF00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3FF00
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_3FF00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_402A0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 465
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 192
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 275
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 389
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 492
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 192
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 549
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 673
    OP_JNZ lab_40198
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 709
    OP_JNZ lab_40198
    pri = 0;
    OP_JUMP lab_401A8
// lab_402A0
    OP_STACK 8
    pri = 0;
    return pri;
// lab_40198
    pri = 1;
// lab_401A8
    OP_JZER lab_402A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_402A0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_3F480
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 30;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3F568
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_3F470
    OP_JUMP lab_3F568
// lab_3F130
    OP_STACK 8
// lab_3E930
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_3EA90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_3EA90
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_3E920
    OP_JUMP lab_3EA90
}
// fun_402C0
fun_402C0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_404B0
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_404B0
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_404B0
    pri = 0;
    OP_JUMP lab_404C0
// lab_404B0
    pri = 1;
// lab_404C0
    OP_JZER lab_404E8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_404E8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 107;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 8;
    var_64 = 0;
    pri = fun_0110()
    var_72 = pri;
    var_80 = 0;
    var_88 = 1;
    var_96 = 34;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JNZ lab_406D0
    var_112 = 9;
    var_120 = 0;
    pri = fun_0110()
    var_128 = pri;
    var_136 = 0;
    var_144 = 1;
    var_152 = 34;
    var_160 = 40;
    pri = fun_0010(var_152, var_144, var_136, var_128, var_120)
    OP_JNZ lab_406D0
    pri = 0;
    OP_JUMP lab_406E0
// lab_406D0
    pri = 1;
// lab_406E0
    OP_JZER lab_40810
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 800;
    OP_JSLESS lab_40810
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_407E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_40810
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 2000;
    OP_JSLESS lab_40930
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_40908
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_40930
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 1000;
    OP_JSLESS lab_40A50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_40A28
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_40A50
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 800;
    OP_JSLESS lab_40B98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_40B70
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_40B98
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 250;
    OP_JSGEQ lab_40CB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_40CB8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_40CB8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 100;
    OP_JSGEQ lab_40DD8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_40DD8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_40DD8
    OP_STACK 8
    pri = 0;
    return pri;
// lab_40B70
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_40A28
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_40908
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_407E8
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_40DF8
fun_40DF8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_40FB0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_40FB0
    pri = 0;
    OP_JUMP lab_40FC0
// lab_40FB0
    pri = 1;
// lab_40FC0
    OP_JZER lab_41090
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_41090
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_41090
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_411D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_411D8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_411D8
    OP_STACK 16
    pri = 0;
    return pri;
}
// fun_411F8
fun_411F8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_41330
    OP_BREAK 
    pri = 9;
    OP_STOR_S_PRI -16
    OP_JUMP lab_41470
// lab_41330
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JZER lab_413A0
    OP_BREAK 
    pri = 10;
    OP_STOR_S_PRI -16
    OP_JUMP lab_41470
// lab_413A0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JZER lab_41410
    OP_BREAK 
    pri = 5;
    OP_STOR_S_PRI -16
    OP_JUMP lab_41470
// lab_41410
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JZER lab_41470
    OP_BREAK 
    pri = 14;
    OP_STOR_S_PRI -16
// lab_41470
    OP_BREAK 
    OP_PUSH_S -16
    var_8 = 8;
    pri = fun_29A70(var_0)
    OP_STACK 16
    pri = 0;
    return pri;
}
// fun_414C8
fun_414C8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_416A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 31;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_416A0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 200;
    var_128 = 0;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_416A0
    OP_BREAK 
    var_152 = -1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_416A0
    pri = 0;
    return pri;
}
// fun_416B0
fun_416B0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_41868
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_41868
    pri = 0;
    OP_JUMP lab_41878
// lab_41868
    pri = 1;
// lab_41878
    OP_JZER lab_41948
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_41948
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_41948
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_41A90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_41A90
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_41A90
    OP_STACK 16
    pri = 0;
    return pri;
}
// fun_41AB0
fun_41AB0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_41C18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_41C00
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_41C18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_41D78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_41D78
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_41D78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_41E38
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_41E38
    pri = 0;
    return pri;
// lab_41C00
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_41E48
fun_41E48() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42188
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 26
    OP_JNZ lab_420A8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 24;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 2
    OP_JNZ lab_420A8
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 2;
    var_184 = 24;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_EQ_C_PRI 2
    OP_JNZ lab_420A8
    pri = 0;
    OP_JUMP lab_420B8
// lab_42188
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42248
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_42248
    pri = 0;
    return pri;
// lab_420A8
    pri = 1;
// lab_420B8
    OP_JZER lab_42188
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42188
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_42258
fun_42258() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 16
    OP_JNZ lab_423A0
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 16
    OP_JNZ lab_423A0
    pri = 0;
    OP_JUMP lab_423B0
// lab_423A0
    pri = 1;
// lab_423B0
    OP_JZER lab_42480
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42480
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_42480
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_425C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_425C8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_425C8
    pri = 0;
    return pri;
}
// fun_425D8
fun_425D8() {
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_42730
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_42730
    pri = 0;
    OP_JUMP lab_42740
// lab_42730
    pri = 1;
// lab_42740
    OP_JZER lab_42768
    OP_BREAK 
    pri = 0;
    return pri;
// lab_42768
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_428B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_428B0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_428B0
    pri = 0;
    return pri;
}
// fun_428C0
fun_428C0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 72;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42D78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_42A98
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 220;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_42A98
    OP_BREAK 
    var_152 = 2;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_42D78
    pri = 0;
    return pri;
// lab_42A98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_42C80
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_42C80
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_42C80
    pri = 0;
    OP_JUMP lab_42C90
// lab_42C80
    pri = 1;
// lab_42C90
    OP_JZER lab_42CB8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_42CB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_42D78
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_42D88
fun_42D88() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_42F78
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_42F78
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_42F78
    pri = 0;
    OP_JUMP lab_42F88
// lab_42F78
    pri = 1;
// lab_42F88
    OP_JZER lab_42FE8
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_42FE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_43148
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_43130
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_43148
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 5;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_432A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_432A8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_432A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_43368
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_43368
    pri = 0;
    return pri;
// lab_43130
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_43378
fun_43378() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_434E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_434E0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_434E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_43640
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_43640
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_43640
    pri = 0;
    return pri;
}
// fun_43650
fun_43650() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_43840
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_43840
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_43840
    pri = 0;
    OP_JUMP lab_43850
// lab_43840
    pri = 1;
// lab_43850
    OP_JZER lab_438B0
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_438B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_43A20
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_43A10
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_43A20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_43AF8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_43AF8
    pri = 0;
    return pri;
// lab_43A10
    OP_JUMP lab_43AF8
}
// fun_43B08
fun_43B08() {
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 163;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_43DD8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_43DD8
    var_104 = 0;
    var_112 = 0;
    var_120 = 198;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_43DD8
    var_152 = 0;
    var_160 = 0;
    var_168 = 212;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_43DD8
    var_200 = 0;
    var_208 = 0;
    var_216 = 688;
    var_224 = 1;
    var_232 = 71;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_43DD8
    pri = 0;
    OP_JUMP lab_43DE8
// lab_43DD8
    pri = 1;
// lab_43DE8
    OP_JZER lab_43E30
    OP_BREAK 
    pri = 16;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_43E30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 160;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_44050
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_44050
    var_104 = 0;
    var_112 = 0;
    var_120 = 195;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_44050
    var_152 = 0;
    var_160 = 0;
    var_168 = 209;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_44050
    pri = 0;
    OP_JUMP lab_44060
// lab_44050
    pri = 1;
// lab_44060
    OP_JZER lab_440A8
    OP_BREAK 
    pri = 5;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_440A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 207;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_442C8
    var_56 = 0;
    var_64 = 0;
    var_72 = 158;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_442C8
    var_104 = 0;
    var_112 = 0;
    var_120 = 193;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_442C8
    var_152 = 0;
    var_160 = 0;
    var_168 = 174;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_442C8
    pri = 0;
    OP_JUMP lab_442D8
// lab_442C8
    pri = 1;
// lab_442D8
    OP_JZER lab_44320
    OP_BREAK 
    pri = 13;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_44320
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 203;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_44540
    var_56 = 0;
    var_64 = 0;
    var_72 = 154;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_44540
    var_104 = 0;
    var_112 = 0;
    var_120 = 170;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_44540
    var_152 = 0;
    var_160 = 0;
    var_168 = 189;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_44540
    pri = 0;
    OP_JUMP lab_44550
// lab_44540
    pri = 1;
// lab_44550
    OP_JZER lab_44598
    OP_BREAK 
    pri = 1;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_44598
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 201;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_447B8
    var_56 = 0;
    var_64 = 0;
    var_72 = 152;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_447B8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_447B8
    var_152 = 0;
    var_160 = 0;
    var_168 = 187;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_447B8
    pri = 0;
    OP_JUMP lab_447C8
// lab_447B8
    pri = 1;
// lab_447C8
    OP_JZER lab_44810
    OP_BREAK 
    pri = 11;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_44810
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 210;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_44A30
    var_56 = 0;
    var_64 = 0;
    var_72 = 161;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_44A30
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_44A30
    var_152 = 0;
    var_160 = 0;
    var_168 = 196;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_44A30
    pri = 0;
    OP_JUMP lab_44A40
// lab_44A30
    pri = 1;
// lab_44A40
    OP_JZER lab_44A88
    OP_BREAK 
    pri = 7;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_44A88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 202;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_44CA8
    var_56 = 0;
    var_64 = 0;
    var_72 = 153;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_44CA8
    var_104 = 0;
    var_112 = 0;
    var_120 = 169;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_44CA8
    var_152 = 0;
    var_160 = 0;
    var_168 = 188;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_44CA8
    pri = 0;
    OP_JUMP lab_44CB8
// lab_44CA8
    pri = 1;
// lab_44CB8
    OP_JZER lab_44D00
    OP_BREAK 
    pri = 14;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_44D00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 205;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_44F20
    var_56 = 0;
    var_64 = 0;
    var_72 = 156;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_44F20
    var_104 = 0;
    var_112 = 0;
    var_120 = 172;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_44F20
    var_152 = 0;
    var_160 = 0;
    var_168 = 191;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_44F20
    pri = 0;
    OP_JUMP lab_44F30
// lab_44F20
    pri = 1;
// lab_44F30
    OP_JZER lab_44F78
    OP_BREAK 
    pri = 4;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_44F78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 151;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_45198
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_45198
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_45198
    var_152 = 0;
    var_160 = 0;
    var_168 = 186;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_45198
    pri = 0;
    OP_JUMP lab_451A8
// lab_45198
    pri = 1;
// lab_451A8
    OP_JZER lab_451F0
    OP_BREAK 
    pri = 12;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_451F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 155;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_45410
    var_56 = 0;
    var_64 = 0;
    var_72 = 171;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_45410
    var_104 = 0;
    var_112 = 0;
    var_120 = 190;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_45410
    var_152 = 0;
    var_160 = 0;
    var_168 = 204;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_45410
    pri = 0;
    OP_JUMP lab_45420
// lab_45410
    pri = 1;
// lab_45420
    OP_JZER lab_45468
    OP_BREAK 
    pri = 3;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_45468
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 162;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_45688
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_45688
    var_104 = 0;
    var_112 = 0;
    var_120 = 197;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_45688
    var_152 = 0;
    var_160 = 0;
    var_168 = 211;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_45688
    pri = 0;
    OP_JUMP lab_45698
// lab_45688
    pri = 1;
// lab_45698
    OP_JZER lab_456E0
    OP_BREAK 
    pri = 15;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_456E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 200;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_45790
    OP_BREAK 
    OP_ZERO_S -8
    OP_JUMP lab_464D0
// lab_45790
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_45930
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_45930
    var_104 = 0;
    var_112 = 0;
    var_120 = 199;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_45930
    pri = 0;
    OP_JUMP lab_45940
// lab_45930
    pri = 1;
// lab_45940
    OP_JZER lab_45988
    OP_BREAK 
    pri = 8;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_45988
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 157;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_45BA8
    var_56 = 0;
    var_64 = 0;
    var_72 = 173;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_45BA8
    var_104 = 0;
    var_112 = 0;
    var_120 = 192;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_45BA8
    var_152 = 0;
    var_160 = 0;
    var_168 = 206;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_45BA8
    pri = 0;
    OP_JUMP lab_45BB8
// lab_45BA8
    pri = 1;
// lab_45BB8
    OP_JZER lab_45C00
    OP_BREAK 
    pri = 2;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_45C00
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 149;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_45E20
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_45E20
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_45E20
    var_152 = 0;
    var_160 = 0;
    var_168 = 184;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_45E20
    pri = 0;
    OP_JUMP lab_45E30
// lab_45E20
    pri = 1;
// lab_45E30
    OP_JZER lab_45E78
    OP_BREAK 
    pri = 9;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_45E78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 150;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_46098
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_46098
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_46098
    var_152 = 0;
    var_160 = 0;
    var_168 = 185;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_46098
    pri = 0;
    OP_JUMP lab_460A8
// lab_46098
    pri = 1;
// lab_460A8
    OP_JZER lab_460F0
    OP_BREAK 
    pri = 10;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_460F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 159;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_46310
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_46310
    var_104 = 0;
    var_112 = 0;
    var_120 = 194;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_46310
    var_152 = 0;
    var_160 = 0;
    var_168 = 208;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_46310
    pri = 0;
    OP_JUMP lab_46320
// lab_46310
    pri = 1;
// lab_46320
    OP_JZER lab_46368
    OP_BREAK 
    pri = 6;
    OP_STOR_S_PRI -8
    OP_JUMP lab_464D0
// lab_46368
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 686;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_46488
    var_56 = 0;
    var_64 = 0;
    var_72 = 687;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_46488
    pri = 0;
    OP_JUMP lab_46498
// lab_46488
    pri = 1;
// lab_46498
    OP_JZER lab_464D0
    OP_BREAK 
    pri = 17;
    OP_STOR_S_PRI -8
// lab_464D0
    OP_BREAK 
    OP_PUSH_S -8
    var_8 = 8;
    pri = fun_29A70(var_0)
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_46528
fun_46528() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 52;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_465D0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_465D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 60
    OP_JZER lab_46680
    OP_BREAK 
    pri = 0;
    return pri;
// lab_46680
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 5
    OP_JZER lab_46860
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 64;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_46860
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 220;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_46860
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_46860
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_469A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_469A8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_469A8
    pri = 0;
    return pri;
}
// fun_469B8
fun_469B8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_46C68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 30;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_46BA8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 31;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_46BA8
    OP_BREAK 
    var_152 = -8;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_46C68
    pri = 0;
    return pri;
// lab_46BA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_46C68
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_46C78
fun_46C78() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_46DE0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_46DC8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_46DE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_46F40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_46F28
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_46F40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 100;
    var_32 = 1;
    var_40 = 6;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_470A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_47088
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_470A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47160
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_47160
    pri = 0;
    return pri;
// lab_47088
    OP_BREAK 
    pri = 0;
    return pri;
// lab_46F28
    OP_BREAK 
    pri = 0;
    return pri;
// lab_46DC8
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_47170
fun_47170() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_47298
    var_56 = 0;
    var_64 = 0;
    var_72 = 3;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_47298
    pri = 0;
    OP_JUMP lab_472A8
// lab_47298
    pri = 1;
// lab_472A8
    OP_JZER lab_47378
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47378
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_47378
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_47498
    var_56 = 0;
    var_64 = 0;
    var_72 = 6;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_47498
    pri = 0;
    OP_JUMP lab_474A8
// lab_47498
    pri = 1;
// lab_474A8
    OP_JZER lab_47578
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47578
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_47578
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_476C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_476C0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_476C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47818
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_47808
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_47818
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47960
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_47960
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_47960
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47A20
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_47A20
    pri = 0;
    return pri;
// lab_47808
    OP_JUMP lab_47960
}
// fun_47A30
fun_47A30() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_47D80()
    OP_EQ_C_PRI 1
    OP_JZER lab_47AD0
    OP_BREAK 
    var_16 = -3;
    var_24 = 8;
    pri = fun_00B8(var_16)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_47AD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 31;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_47C28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_47C18
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_47C28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 83;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_47D70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_47D70
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_47D70
    pri = 0;
    return pri;
// lab_47C18
    OP_JUMP lab_47D70
}
// fun_47D80
fun_47D80() {
    OP_BREAK 
    var_8 = 7;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_47E40
    OP_BREAK 
    pri = 0;
    return pri;
// lab_47E40
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_47EF8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_47EF8
    OP_BREAK 
    var_8 = 9;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_47FB0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_47FB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_48070
    OP_BREAK 
    pri = 1;
    return pri;
// lab_48070
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 84;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_48118
    OP_BREAK 
    pri = 1;
    return pri;
// lab_48118
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_481D8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_481D8
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_481F0
fun_481F0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_48450
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 80;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_48450
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 31;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_48450
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 128;
    var_176 = 0;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_48450
    OP_BREAK 
    var_200 = -1;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_48450
    pri = 0;
    return pri;
}
// fun_48460
fun_48460() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_48650
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_48650
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_48650
    pri = 0;
    OP_JUMP lab_48660
// lab_48650
    pri = 1;
// lab_48660
    OP_JZER lab_48688
    OP_BREAK 
    pri = 0;
    return pri;
// lab_48688
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_487C0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    alt = 101;
    OP_JEQ lab_487C0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_487C0
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_48910
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_48910
    pri = 0;
    OP_JUMP lab_48920
// lab_48910
    pri = 1;
// lab_48920
    OP_JZER lab_48A08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_48A08
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_48A08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_48AC8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_48AC8
    pri = 0;
    return pri;
}
// fun_48AD8
fun_48AD8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 53;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 55
    OP_JZER lab_48E88
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 30;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_48E88
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 80;
    OP_JEQ lab_48D88
    OP_LOAD_S_PRI -16
    alt = 39;
    OP_JEQ lab_48D88
    OP_LOAD_S_PRI -16
    alt = 158;
    OP_JEQ lab_48D88
    pri = 1;
    OP_JUMP lab_48D90
// lab_48E88
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 79
    OP_JNZ lab_48F08
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JNZ lab_48F08
    pri = 0;
    OP_JUMP lab_48F18
// lab_48F08
    pri = 1;
// lab_48F18
    OP_JZER lab_48F78
    OP_BREAK 
    var_8 = 0;
    pri = fun_16820()
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_48F78
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 100
    OP_JZER lab_49000
    OP_BREAK 
    var_8 = 0;
    pri = fun_34248()
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_49000
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 70
    OP_JZER lab_49088
    OP_BREAK 
    var_8 = 0;
    pri = fun_1B270()
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_49088
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_49270
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_49270
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_49270
    pri = 0;
    OP_JUMP lab_49280
// lab_49270
    pri = 1;
// lab_49280
    OP_JZER lab_49378
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49350
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_49378
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_494C8
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_494C8
    pri = 0;
    OP_JUMP lab_494D8
// lab_494C8
    pri = 1;
// lab_494D8
    OP_JZER lab_495A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 160;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_495A8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_495A8
    OP_STACK 16
    pri = 0;
    return pri;
// lab_49350
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_48D88
    pri = 0;
// lab_48D90
    OP_JZER lab_48E88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_48E88
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
}
// fun_495C8
fun_495C8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_497B8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_497B8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_497B8
    pri = 0;
    OP_JUMP lab_497C8
// lab_497B8
    pri = 1;
// lab_497C8
    OP_JZER lab_49828
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_49828
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49BB8
    OP_BREAK 
    var_56 = 8;
    var_64 = 0;
    pri = fun_0110()
    var_72 = pri;
    var_80 = 0;
    var_88 = 1;
    var_96 = 34;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JNZ lab_49A00
    var_112 = 9;
    var_120 = 0;
    pri = fun_0110()
    var_128 = pri;
    var_136 = 0;
    var_144 = 1;
    var_152 = 34;
    var_160 = 40;
    pri = fun_0010(var_152, var_144, var_136, var_128, var_120)
    OP_JNZ lab_49A00
    pri = 0;
    OP_JUMP lab_49A10
// lab_49BB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49D28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_49D18
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_49D28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49E70
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_49E70
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_49E70
    pri = 0;
    return pri;
// lab_49D18
    OP_JUMP lab_49E70
// lab_49A00
    pri = 1;
// lab_49A10
    OP_JZER lab_49AF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49AE0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_49AF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49BB8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_49AE0
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_49E80
fun_49E80() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_49FF8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_49FE8
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_49FF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4A140
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4A140
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_4A140
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 23
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 25
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 37
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 62
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 90
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 98
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JNZ lab_4A378
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 101
    OP_JNZ lab_4A378
    pri = 0;
    OP_JUMP lab_4A388
// lab_4A378
    pri = 1;
// lab_4A388
    OP_JZER lab_4A480
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4A480
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4A480
    OP_BREAK 
    var_8 = 0;
    pri = fun_3D7E0()
    OP_EQ_C_PRI 1
    OP_JZER lab_4A5B0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_4A5B0
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4A5B0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 32
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 33
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 34
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 122
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 156
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 158
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 169
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 177
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 178
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 181
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 185
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 186
    OP_JNZ lab_4A870
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 187
    OP_JNZ lab_4A870
    pri = 0;
    OP_JUMP lab_4A880
// lab_4A870
    pri = 1;
// lab_4A880
    OP_JZER lab_4A978
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4A978
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4A978
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4AA38
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4AA38
    OP_STACK 8
    pri = 0;
    return pri;
// lab_49FE8
    OP_JUMP lab_4A140
}
// fun_4AA58
fun_4AA58() {
    pri = 0;
    return pri;
}
// fun_4AA70
fun_4AA70() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 24;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_STACK -8
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 2;
    var_184 = 24;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_STOR_S_PRI -32
    OP_BREAK 
    OP_STACK -8
    var_200 = 0;
    var_208 = 0;
    var_216 = 0;
    var_224 = 0;
    var_232 = 29;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_STOR_S_PRI -40
    OP_BREAK 
    OP_LOAD_S_PRI -40
    OP_EQ_C_PRI 200
    OP_JZER lab_4AF90
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 8;
    OP_JEQ lab_4AE90
    OP_LOAD_S_PRI -32
    alt = 8;
    OP_JEQ lab_4AE90
    OP_LOAD_S_PRI -24
    alt = 17;
    OP_JEQ lab_4AE90
    OP_LOAD_S_PRI -32
    alt = 17;
    OP_JEQ lab_4AE90
    pri = 1;
    OP_JUMP lab_4AE98
// lab_4AF90
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 15
    OP_JNZ lab_4B010
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 15
    OP_JNZ lab_4B010
    pri = 0;
    OP_JUMP lab_4B020
// lab_4B010
    pri = 1;
// lab_4B020
    OP_JZER lab_4B460
    OP_BREAK 
    OP_LOAD_S_PRI -24
    alt = 8;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -32
    alt = 8;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -24
    alt = 17;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -32
    alt = 17;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -8
    alt = 8;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -16
    alt = 8;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -8
    alt = 17;
    OP_JEQ lab_4B1D8
    OP_LOAD_S_PRI -16
    alt = 17;
    OP_JEQ lab_4B1D8
    pri = 1;
    OP_JUMP lab_4B1E0
// lab_4B460
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 7
    OP_JNZ lab_4B4E0
    OP_LOAD_S_PRI -32
    OP_EQ_C_PRI 7
    OP_JNZ lab_4B4E0
    pri = 0;
    OP_JUMP lab_4B4F0
// lab_4B4E0
    pri = 1;
// lab_4B4F0
    OP_JZER lab_4B950
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_JZER lab_4B668
    OP_LOAD_S_PRI -32
    OP_JZER lab_4B668
    OP_LOAD_S_PRI -24
    alt = 16;
    OP_JEQ lab_4B668
    OP_LOAD_S_PRI -32
    alt = 16;
    OP_JEQ lab_4B668
    OP_LOAD_S_PRI -8
    OP_JZER lab_4B668
    OP_LOAD_S_PRI -16
    OP_JZER lab_4B668
    OP_LOAD_S_PRI -8
    alt = 16;
    OP_JEQ lab_4B668
    OP_LOAD_S_PRI -16
    alt = 16;
    OP_JEQ lab_4B668
    pri = 1;
    OP_JUMP lab_4B670
// lab_4B950
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_LOAD_S_ALT -24
    OP_JEQ lab_4BA30
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -32
    OP_JEQ lab_4BA30
    OP_LOAD_S_PRI -8
    OP_LOAD_S_ALT -32
    OP_JEQ lab_4BA30
    OP_LOAD_S_PRI -16
    OP_LOAD_S_ALT -24
    OP_JEQ lab_4BA30
    pri = 0;
    OP_JUMP lab_4BA40
// lab_4BA30
    pri = 1;
// lab_4BA40
    OP_JZER lab_4BB38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 60;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4BB38
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_4BB38
    OP_STACK 40
    pri = 0;
    return pri;
// lab_4B668
    pri = 0;
// lab_4B670
    OP_JZER lab_4B950
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 7
    OP_JNZ lab_4B760
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 7
    OP_JNZ lab_4B760
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_4B760
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_4B760
    pri = 0;
    OP_JUMP lab_4B770
// lab_4B760
    pri = 1;
// lab_4B770
    OP_JZER lab_4B868
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4B868
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_4B868
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4B950
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_4B1D8
    pri = 0;
// lab_4B1E0
    OP_JZER lab_4B460
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_4B270
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_4B270
    pri = 0;
    OP_JUMP lab_4B280
// lab_4B270
    pri = 1;
// lab_4B280
    OP_JZER lab_4B378
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4B378
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_4B378
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4B460
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
// lab_4AE90
    pri = 0;
// lab_4AE98
    OP_JZER lab_4AF90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4AF90
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 40
    return pri;
}
// fun_4BB58
fun_4BB58() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 29;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 15
    OP_JNZ lab_4BDA8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 15
    OP_JNZ lab_4BDA8
    pri = 0;
    OP_JUMP lab_4BDB8
// lab_4BDA8
    pri = 1;
// lab_4BDB8
    OP_JZER lab_4C2E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4BF48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4BF38
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_4C2E8
    OP_STACK 24
    pri = 0;
    return pri;
// lab_4BF48
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 200
    OP_JNZ lab_4C028
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 337
    OP_JNZ lab_4C028
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 407
    OP_JNZ lab_4C028
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 530
    OP_JNZ lab_4C028
    pri = 0;
    OP_JUMP lab_4C038
// lab_4C028
    pri = 1;
// lab_4C038
    OP_JZER lab_4C130
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4C130
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_4C130
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 406
    OP_JNZ lab_4C1E0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 434
    OP_JNZ lab_4C1E0
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 460
    OP_JNZ lab_4C1E0
    pri = 0;
    OP_JUMP lab_4C1F0
// lab_4C1E0
    pri = 1;
// lab_4C1F0
    OP_JZER lab_4C2E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4C2E8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_4BF38
    OP_JUMP lab_4C2E8
}
// fun_4C308
fun_4C308() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4C430
    var_56 = 0;
    var_64 = 7;
    var_72 = 3;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4C430
    pri = 0;
    OP_JUMP lab_4C440
// lab_4C430
    pri = 1;
// lab_4C440
    OP_JZER lab_4C4A0
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4C4A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4C5C0
    var_56 = 0;
    var_64 = 5;
    var_72 = 3;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4C5C0
    pri = 0;
    OP_JUMP lab_4C5D0
// lab_4C5C0
    pri = 1;
// lab_4C5D0
    OP_JZER lab_4C630
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4C630
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 1;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4C750
    var_56 = 0;
    var_64 = 5;
    var_72 = 3;
    var_80 = 1;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4C750
    pri = 0;
    OP_JUMP lab_4C760
// lab_4C750
    pri = 1;
// lab_4C760
    OP_JZER lab_4C848
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4C830
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4C848
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4C968
    var_56 = 0;
    var_64 = 7;
    var_72 = 3;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4C968
    pri = 0;
    OP_JUMP lab_4C978
// lab_4C968
    pri = 1;
// lab_4C978
    OP_JZER lab_4CA48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4CA48
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4CA48
    pri = 0;
    return pri;
// lab_4C830
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_4CA58
fun_4CA58() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4CB80
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4CB80
    pri = 0;
    OP_JUMP lab_4CB90
// lab_4CB80
    pri = 1;
// lab_4CB90
    OP_JZER lab_4CBF0
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4CBF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 2;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4CD10
    var_56 = 0;
    var_64 = 5;
    var_72 = 4;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4CD10
    pri = 0;
    OP_JUMP lab_4CD20
// lab_4CD10
    pri = 1;
// lab_4CD20
    OP_JZER lab_4CD80
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4CD80
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 2;
    var_32 = 1;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4CEA0
    var_56 = 0;
    var_64 = 5;
    var_72 = 4;
    var_80 = 1;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4CEA0
    pri = 0;
    OP_JUMP lab_4CEB0
// lab_4CEA0
    pri = 1;
// lab_4CEB0
    OP_JZER lab_4CF98
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4CF80
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4CF98
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4D0B8
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4D0B8
    pri = 0;
    OP_JUMP lab_4D0C8
// lab_4D0B8
    pri = 1;
// lab_4D0C8
    OP_JZER lab_4D198
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4D198
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4D198
    pri = 0;
    return pri;
// lab_4CF80
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_4D1A8
fun_4D1A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_4D2A0
    OP_BREAK 
    var_64 = -1;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4D2A0
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4D410
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4D410
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 2;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4D558
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4D558
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 3;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4D6A0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4D6A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 4;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4D7E8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 4;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4D7E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 5;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4D930
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 5;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4D930
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 6;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4DA78
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 6;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4DA78
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4DBC0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 7;
    var_88 = 0;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_4DBC0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 5;
    OP_JSLEQ lab_4DDA8
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_4DCC0
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4DDA8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 1;
    OP_JSLEQ lab_4E060
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_4DF30
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_4DF30
    pri = 0;
    OP_JUMP lab_4DF40
// lab_4E060
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 1;
    OP_JSGEQ lab_4E158
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4E158
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4E158
    OP_STACK 8
    pri = 0;
    return pri;
// lab_4DF30
    pri = 1;
// lab_4DF40
    OP_JZER lab_4DF78
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4DF78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4E038
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4E038
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_4DCC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4DD80
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4DD80
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_4E178
fun_4E178() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4E240
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4E240
    pri = 0;
    return pri;
}
// fun_4E250
fun_4E250() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4E3B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4E3B8
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4E3B8
    OP_BREAK 
    var_8 = 0;
    pri = fun_3D7E0()
    OP_EQ_C_PRI 1
    OP_JZER lab_4E560
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 5;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_4E560
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_4E560
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4E560
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 37;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4E6A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4E6A8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_4E6A8
    pri = 0;
    return pri;
}
// fun_4E6B8
fun_4E6B8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_4E8A8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_4E8A8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_4E8A8
    pri = 0;
    OP_JUMP lab_4E8B8
// lab_4E8A8
    pri = 1;
// lab_4E8B8
    OP_JZER lab_4E8E0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4E8E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4EAB0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 50;
    var_80 = 1;
    var_88 = 4;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4EAB0
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 150;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_4EAB0
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_4EAB0
    pri = 0;
    return pri;
}
// fun_4EAC0
fun_4EAC0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4EB88
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4EB88
    pri = 0;
    return pri;
}
// fun_4EB98
fun_4EB98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4ED00
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_4ED00
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4ED00
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4EFA0
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4EFA0
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 1;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_4EFA0
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 1;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_4EFA0
    var_200 = 0;
    var_208 = 7;
    var_216 = 5;
    var_224 = 1;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_4EFA0
    pri = 0;
    OP_JUMP lab_4EFB0
// lab_4EFA0
    pri = 1;
// lab_4EFB0
    OP_JZER lab_4F010
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4F010
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4F2B0
    var_56 = 0;
    var_64 = 5;
    var_72 = 2;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4F2B0
    var_104 = 0;
    var_112 = 5;
    var_120 = 3;
    var_128 = 0;
    var_136 = 41;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_4F2B0
    var_152 = 0;
    var_160 = 5;
    var_168 = 4;
    var_176 = 0;
    var_184 = 41;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_4F2B0
    var_200 = 0;
    var_208 = 5;
    var_216 = 5;
    var_224 = 0;
    var_232 = 41;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_4F2B0
    pri = 0;
    OP_JUMP lab_4F2C0
// lab_4F2B0
    pri = 1;
// lab_4F2C0
    OP_JZER lab_4F320
    OP_BREAK 
    var_8 = -8;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_4F320
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 1;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4F5C0
    var_56 = 0;
    var_64 = 5;
    var_72 = 2;
    var_80 = 1;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4F5C0
    var_104 = 0;
    var_112 = 5;
    var_120 = 3;
    var_128 = 1;
    var_136 = 41;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_4F5C0
    var_152 = 0;
    var_160 = 5;
    var_168 = 4;
    var_176 = 1;
    var_184 = 41;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_4F5C0
    var_200 = 0;
    var_208 = 5;
    var_216 = 5;
    var_224 = 1;
    var_232 = 41;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_4F5C0
    pri = 0;
    OP_JUMP lab_4F5D0
// lab_4F5C0
    pri = 1;
// lab_4F5D0
    OP_JZER lab_4F6B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4F6A0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4F6B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_4F958
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_4F958
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_4F958
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_4F958
    var_200 = 0;
    var_208 = 7;
    var_216 = 5;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_4F958
    pri = 0;
    OP_JUMP lab_4F968
// lab_4F958
    pri = 1;
// lab_4F968
    OP_JZER lab_4FA38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4FA38
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4FA38
    pri = 0;
    return pri;
// lab_4F6A0
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_4FA48
fun_4FA48() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_4FB10
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_4FB10
    pri = 0;
    return pri;
}
// fun_4FB20
fun_4FB20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 89;
    var_32 = 0;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_500C8
    var_56 = 0;
    var_64 = 0;
    var_72 = 90;
    var_80 = 0;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_500C8
    var_104 = 0;
    var_112 = 0;
    var_120 = 91;
    var_128 = 0;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_500C8
    var_152 = 0;
    var_160 = 0;
    var_168 = 125;
    var_176 = 0;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_500C8
    var_200 = 0;
    var_208 = 0;
    var_216 = 155;
    var_224 = 0;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_500C8
    var_248 = 0;
    var_256 = 0;
    var_264 = 198;
    var_272 = 0;
    var_280 = 47;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_500C8
    var_296 = 0;
    var_304 = 0;
    var_312 = 414;
    var_320 = 0;
    var_328 = 47;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_500C8
    var_344 = 0;
    var_352 = 0;
    var_360 = 529;
    var_368 = 0;
    var_376 = 47;
    var_384 = 40;
    pri = fun_0010(var_376, var_368, var_360, var_352, var_344)
    OP_JNZ lab_500C8
    var_392 = 0;
    var_400 = 0;
    var_408 = 614;
    var_416 = 0;
    var_424 = 47;
    var_432 = 40;
    pri = fun_0010(var_424, var_416, var_408, var_400, var_392)
    OP_JNZ lab_500C8
    var_440 = 0;
    var_448 = 0;
    var_456 = 615;
    var_464 = 0;
    var_472 = 47;
    var_480 = 40;
    pri = fun_0010(var_472, var_464, var_456, var_448, var_440)
    OP_JNZ lab_500C8
    var_488 = 0;
    var_496 = 0;
    var_504 = 616;
    var_512 = 0;
    var_520 = 47;
    var_528 = 40;
    pri = fun_0010(var_520, var_512, var_504, var_496, var_488)
    OP_JNZ lab_500C8
    pri = 0;
    OP_JUMP lab_500D8
// lab_500C8
    pri = 1;
// lab_500D8
    OP_JZER lab_501C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_501C0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_501C0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 4
    OP_JNZ lab_50300
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 4
    OP_JNZ lab_50300
    pri = 0;
    OP_JUMP lab_50310
// lab_50300
    pri = 1;
// lab_50310
    OP_JZER lab_503F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_503F8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_503F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_50520
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 30;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_50520
    OP_BREAK 
    pri = 0;
    return pri;
// lab_50520
    pri = 0;
    return pri;
}
// fun_50530
fun_50530() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_508D8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 16;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_508D8
    var_104 = 0;
    var_112 = 0;
    var_120 = 2;
    var_128 = 0;
    var_136 = 16;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_508D8
    var_152 = 0;
    var_160 = 0;
    var_168 = 3;
    var_176 = 0;
    var_184 = 16;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_508D8
    var_200 = 0;
    var_208 = 0;
    var_216 = 6;
    var_224 = 0;
    var_232 = 16;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_508D8
    var_248 = 0;
    var_256 = 0;
    var_264 = 7;
    var_272 = 0;
    var_280 = 16;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_508D8
    var_296 = 0;
    var_304 = 0;
    var_312 = 8;
    var_320 = 0;
    var_328 = 16;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_508D8
    pri = 0;
    OP_JUMP lab_508E8
// lab_508D8
    pri = 1;
// lab_508E8
    OP_JZER lab_509B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_509B8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_509B8
    pri = 0;
    return pri;
}
// fun_509C8
fun_509C8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_50A80
    OP_BREAK 
    pri = 0;
    return pri;
// lab_50A80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_50BD8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_50BC8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_50BD8
    OP_BREAK 
    var_8 = -5;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_50BC8
    OP_JUMP lab_50C10
// lab_50C10
    pri = 0;
    return pri;
}
// fun_50C20
fun_50C20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_50D88
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_50D88
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_50D88
    pri = 0;
    return pri;
}
// fun_50D98
fun_50D98() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_50E60
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_50E60
    pri = 0;
    return pri;
}
// fun_50E70
fun_50E70() {
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -8
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 493
    OP_JZER lab_51C30
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 312;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_51030
    OP_BREAK 
    pri = 16;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51C30
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 649
    OP_JZER lab_51F58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 119;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51D28
    OP_BREAK 
    pri = 14;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51F58
// lab_51F58
    OP_BREAK 
    OP_PUSH_S -8
    var_8 = 8;
    pri = fun_29A70(var_0)
    OP_STACK 16
    pri = 0;
    return pri;
// lab_51D28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 117;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51DE8
    OP_BREAK 
    pri = 12;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51F58
// lab_51DE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 118;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51EA8
    OP_BREAK 
    pri = 9;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51F58
// lab_51EA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 116;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51F58
    OP_BREAK 
    pri = 10;
    OP_STOR_S_PRI -8
// lab_51030
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 309;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_510F0
    OP_BREAK 
    pri = 5;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_510F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 307;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_511B0
    OP_BREAK 
    pri = 13;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_511B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 303;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51270
    OP_BREAK 
    pri = 1;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51270
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 301;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51330
    OP_BREAK 
    pri = 11;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51330
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 310;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_513F0
    OP_BREAK 
    pri = 7;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_513F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 302;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_514B0
    OP_BREAK 
    pri = 14;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_514B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 305;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51570
    OP_BREAK 
    pri = 4;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51570
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 300;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51630
    OP_BREAK 
    pri = 12;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51630
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 304;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_516F0
    OP_BREAK 
    pri = 3;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_516F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 311;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_517B0
    OP_BREAK 
    pri = 15;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_517B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 313;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51870
    OP_BREAK 
    pri = 8;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51870
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 306;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51930
    OP_BREAK 
    pri = 2;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51930
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 298;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_519F0
    OP_BREAK 
    pri = 9;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_519F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 299;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51AB0
    OP_BREAK 
    pri = 10;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51AB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 308;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51B70
    OP_BREAK 
    pri = 6;
    OP_STOR_S_PRI -8
    OP_JUMP lab_51C20
// lab_51B70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 644;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_51C20
    OP_BREAK 
    pri = 17;
    OP_STOR_S_PRI -8
// lab_51C20
    OP_JUMP lab_51F58
}
// fun_51FB0
fun_51FB0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52118
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_52118
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_52118
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52278
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_52278
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_52278
    pri = 0;
    return pri;
}
// fun_52288
fun_52288() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_524A0
    OP_BREAK 
    var_16 = 0;
    pri = fun_EF00()
    OP_JNZ lab_524A0
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_524A0
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 180;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_524A0
    OP_BREAK 
    var_120 = 1;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_524A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52730
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 29;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 199
    OP_JNZ lab_52640
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 170
    OP_JNZ lab_52640
    pri = 0;
    OP_JUMP lab_52650
// lab_52730
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_527F8
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_527F8
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_528C0
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_528C0
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_52988
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_52988
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 271;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52AD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_52AD0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_52AD0
    OP_STACK 8
    pri = 0;
    return pri;
// lab_52640
    pri = 1;
// lab_52650
    OP_JZER lab_52720
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52720
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_52720
    OP_STACK 8
}
// fun_52AF0
fun_52AF0() {
    pri = 0;
    return pri;
}
// fun_52B08
fun_52B08() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 55;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_52C90
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_52C90
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 235
    OP_JNZ lab_52D40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 327
    OP_JNZ lab_52D40
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 617
    OP_JNZ lab_52D40
    pri = 0;
    OP_JUMP lab_52D50
// lab_52D40
    pri = 1;
// lab_52D50
    OP_JZER lab_52ED0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52ED0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_52ED0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_52ED0
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_52EF0
fun_52EF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 55;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_52FD0
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_52FD0
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 213
    OP_JNZ lab_53118
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 235
    OP_JNZ lab_53118
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 563
    OP_JNZ lab_53118
    pri = 0;
    OP_JUMP lab_53128
// lab_53118
    pri = 1;
// lab_53128
    OP_JZER lab_532A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 0;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_532A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 50;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_532A8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_532A8
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_532C8
fun_532C8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_53390
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_53390
    pri = 0;
    return pri;
}
// fun_533A0
fun_533A0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_53590
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_53590
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_53590
    pri = 0;
    OP_JUMP lab_535A0
// lab_53590
    pri = 1;
// lab_535A0
    OP_JZER lab_535C8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_535C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_536E8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 12;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_536E8
    pri = 0;
    OP_JUMP lab_536F8
// lab_536E8
    pri = 1;
// lab_536F8
    OP_JZER lab_53740
    OP_BREAK 
    var_8 = 1;
    var_16 = 8;
    pri = fun_00B8(var_8)
// lab_53740
    pri = 0;
    return pri;
}
// fun_53750
fun_53750() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 196;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_538A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_538A0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_538A0
    OP_BREAK 
    var_8 = 0;
    pri = fun_A828()
    pri = 0;
    return pri;
}
// fun_538D8
fun_538D8() {
    pri = 0;
    return pri;
}
// fun_538F0
fun_538F0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 150;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_539B8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_539B8
    pri = 0;
    return pri;
}
// fun_539C8
fun_539C8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 26
    OP_JNZ lab_53C10
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_53C10
    OP_LOAD_S_PRI -16
    alt = 2;
    OP_JNEQ lab_53C10
    pri = 0;
    OP_JUMP lab_53C20
// lab_53C10
    pri = 1;
// lab_53C20
    OP_JZER lab_54738
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 89;
    var_32 = 1;
    var_40 = 47;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_541D0
    var_56 = 0;
    var_64 = 0;
    var_72 = 90;
    var_80 = 1;
    var_88 = 47;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_541D0
    var_104 = 0;
    var_112 = 0;
    var_120 = 91;
    var_128 = 1;
    var_136 = 47;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_541D0
    var_152 = 0;
    var_160 = 0;
    var_168 = 125;
    var_176 = 1;
    var_184 = 47;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_541D0
    var_200 = 0;
    var_208 = 0;
    var_216 = 155;
    var_224 = 1;
    var_232 = 47;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_541D0
    var_248 = 0;
    var_256 = 0;
    var_264 = 198;
    var_272 = 1;
    var_280 = 47;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_541D0
    var_296 = 0;
    var_304 = 0;
    var_312 = 414;
    var_320 = 1;
    var_328 = 47;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_541D0
    var_344 = 0;
    var_352 = 0;
    var_360 = 529;
    var_368 = 1;
    var_376 = 47;
    var_384 = 40;
    pri = fun_0010(var_376, var_368, var_360, var_352, var_344)
    OP_JNZ lab_541D0
    var_392 = 0;
    var_400 = 0;
    var_408 = 614;
    var_416 = 1;
    var_424 = 47;
    var_432 = 40;
    pri = fun_0010(var_424, var_416, var_408, var_400, var_392)
    OP_JNZ lab_541D0
    var_440 = 0;
    var_448 = 0;
    var_456 = 615;
    var_464 = 1;
    var_472 = 47;
    var_480 = 40;
    pri = fun_0010(var_472, var_464, var_456, var_448, var_440)
    OP_JNZ lab_541D0
    var_488 = 0;
    var_496 = 0;
    var_504 = 616;
    var_512 = 1;
    var_520 = 47;
    var_528 = 40;
    pri = fun_0010(var_520, var_512, var_504, var_496, var_488)
    OP_JNZ lab_541D0
    pri = 0;
    OP_JUMP lab_541E0
// lab_54738
    OP_STACK 16
    pri = 0;
    return pri;
// lab_541D0
    pri = 1;
// lab_541E0
    OP_JZER lab_54738
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 11;
    OP_JEQ lab_54358
    OP_LOAD_S_PRI -16
    alt = 11;
    OP_JEQ lab_54358
    OP_LOAD_S_PRI -8
    alt = 6;
    OP_JEQ lab_54358
    OP_LOAD_S_PRI -16
    alt = 6;
    OP_JEQ lab_54358
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_54358
    pri = 1;
    OP_JUMP lab_54360
// lab_54358
    pri = 0;
// lab_54360
    OP_JZER lab_54738
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 9
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 9
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 3
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 8
    OP_JNZ lab_54570
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 8
    OP_JNZ lab_54570
    pri = 0;
    OP_JUMP lab_54580
// lab_54570
    pri = 1;
// lab_54580
    OP_JZER lab_54678
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_54678
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_54678
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_54738
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_54758
fun_54758() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_54948
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_54948
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_54948
    pri = 0;
    OP_JUMP lab_54958
// lab_54948
    pri = 1;
// lab_54958
    OP_JZER lab_54980
    OP_BREAK 
    pri = 0;
    return pri;
// lab_54980
    OP_BREAK 
    var_8 = 0;
    pri = fun_0110()
    OP_EQ_C_PRI 480
    OP_JZER lab_54BD8
    OP_BREAK 
    var_16 = 0;
    var_24 = 6;
    var_32 = 1;
    var_40 = 1;
    var_48 = 41;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_54AE8
    var_64 = 0;
    var_72 = 6;
    var_80 = 2;
    var_88 = 0;
    var_96 = 42;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JNZ lab_54AE8
    pri = 0;
    OP_JUMP lab_54AF8
// lab_54BD8
    OP_BREAK 
    var_8 = 0;
    pri = fun_0110()
    OP_EQ_C_PRI 524
    OP_JZER lab_54E20
    OP_BREAK 
    var_16 = 0;
    var_24 = 6;
    var_32 = 3;
    var_40 = 1;
    var_48 = 41;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_54D40
    var_64 = 0;
    var_72 = 6;
    var_80 = 4;
    var_88 = 0;
    var_96 = 42;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JNZ lab_54D40
    pri = 0;
    OP_JUMP lab_54D50
// lab_54E20
    pri = 0;
    return pri;
// lab_54D40
    pri = 1;
// lab_54D50
    OP_JZER lab_54E20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_54E20
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_54AE8
    pri = 1;
// lab_54AF8
    OP_JZER lab_54BC8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_54BC8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_54BC8
    OP_JUMP lab_54E20
}
// fun_54E30
fun_54E30() {
    pri = 0;
    return pri;
}
// fun_54E48
fun_54E48() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_54FB0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_54F98
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_54FB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_55110
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_55110
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_55110
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_551D0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_551D0
    pri = 0;
    return pri;
// lab_54F98
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_551E0
fun_551E0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_553D0
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_553D0
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_553D0
    pri = 0;
    OP_JUMP lab_553E0
// lab_553D0
    pri = 1;
// lab_553E0
    OP_JZER lab_55408
    OP_BREAK 
    pri = 0;
    return pri;
// lab_55408
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 107;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 107;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_SDIV_ALT 
    OP_STOR_S_PRI -8
    OP_BREAK 
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 0;
    var_144 = 33;
    var_152 = 40;
    pri = fun_0010(var_144, var_136, var_128, var_120, var_112)
    OP_EQ_C_PRI 134
    OP_JZER lab_55600
    OP_BREAK 
    pri = 2;
    OP_LOAD_S_ALT -8
    OP_SDIV_ALT 
    OP_STOR_S_PRI -8
// lab_55600
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 134
    OP_JZER lab_556D0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_SMUL_C 2
    OP_STOR_S_PRI -8
// lab_556D0
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_55820
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_55820
    pri = 0;
    OP_JUMP lab_55830
// lab_55820
    pri = 1;
// lab_55830
    OP_JZER lab_55960
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 3;
    OP_JSLESS lab_55938
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_55938
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_55960
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 5;
    OP_JSLESS lab_55A80
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_55A58
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_55A80
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 4;
    OP_JSLESS lab_55BA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_55B78
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_55BA0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 2;
    OP_JSGEQ lab_55CC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_55C98
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_55CC0
    OP_STACK 8
    pri = 0;
    return pri;
// lab_55C98
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_55B78
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_55A58
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_55938
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_55CE0
fun_55CE0() {
    pri = 0;
    return pri;
}
// fun_55CF8
fun_55CF8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_55EE8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_55EE8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_55EE8
    pri = 0;
    OP_JUMP lab_55EF8
// lab_55EE8
    pri = 1;
// lab_55EF8
    OP_JZER lab_55F58
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_55F58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_560B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_560A0
    OP_BREAK 
    var_104 = -3;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_560B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 5;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56218
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_56200
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_56218
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 5;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56378
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_56378
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_56378
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 80;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56450
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_56450
    pri = 0;
    return pri;
// lab_56200
    OP_BREAK 
    pri = 0;
    return pri;
// lab_560A0
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_56460
fun_56460() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 171
    OP_JZER lab_56648
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_56648
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_56648
    OP_BREAK 
    var_152 = 1;
    var_160 = 8;
    pri = fun_00B8(var_152)
// lab_56648
    pri = 0;
    return pri;
}
// fun_56658
fun_56658() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56700
    OP_BREAK 
    pri = 0;
    return pri;
// lab_56700
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_567C0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_567C0
    pri = 0;
    return pri;
}
// fun_567D0
fun_567D0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 3;
    var_24 = 4;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56920
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_56920
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_56920
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 4;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56A68
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_56A68
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_56A68
    pri = 0;
    return pri;
}
// fun_56A78
fun_56A78() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_56C68
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_56C68
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_56C68
    pri = 0;
    OP_JUMP lab_56C78
// lab_56C68
    pri = 1;
// lab_56C78
    OP_JZER lab_56D60
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56D48
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_56D60
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_56ED0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_56EC0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_56ED0
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_57278
    OP_BREAK 
    var_56 = 8;
    var_64 = 0;
    pri = fun_0110()
    var_72 = pri;
    var_80 = 0;
    var_88 = 1;
    var_96 = 34;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JNZ lab_570A8
    var_112 = 9;
    var_120 = 0;
    pri = fun_0110()
    var_128 = pri;
    var_136 = 0;
    var_144 = 1;
    var_152 = 34;
    var_160 = 40;
    pri = fun_0010(var_152, var_144, var_136, var_128, var_120)
    OP_JNZ lab_570A8
    pri = 0;
    OP_JUMP lab_570B8
// lab_57278
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_573E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 80;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_573E8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_573E8
    pri = 0;
    return pri;
// lab_570A8
    pri = 1;
// lab_570B8
    OP_JZER lab_571A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_571A0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_571A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_57278
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_56EC0
    OP_JUMP lab_57278
// lab_56D48
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_573F8
fun_573F8() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_3D7E0()
    OP_EQ_C_PRI 1
    OP_JZER lab_575A8
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 5;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_575A8
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_575A8
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_575A8
    pri = 0;
    return pri;
}
// fun_575B8
fun_575B8() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_3D7E0()
    OP_EQ_C_PRI 1
    OP_JZER lab_57768
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 5;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_57768
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_57768
    OP_BREAK 
    var_112 = 1;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_57768
    pri = 0;
    return pri;
}
// fun_57778
fun_57778() {
    pri = 0;
    return pri;
}
// fun_57790
fun_57790() {
    pri = 0;
    return pri;
}
// fun_577A8
fun_577A8() {
    pri = 0;
    return pri;
}
// fun_577C0
fun_577C0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_57880
    OP_BREAK 
    pri = 0;
    return pri;
// lab_57880
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_57938
    OP_BREAK 
    pri = 0;
    return pri;
// lab_57938
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_579F0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_579F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_57B38
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_57B38
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_57B38
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 7;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_57C80
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_57C80
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_57C80
    pri = 0;
    return pri;
}
// fun_57C90
fun_57C90() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_58038
    var_56 = 0;
    var_64 = 6;
    var_72 = 2;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_58038
    var_104 = 0;
    var_112 = 6;
    var_120 = 3;
    var_128 = 0;
    var_136 = 41;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_58038
    var_152 = 0;
    var_160 = 6;
    var_168 = 4;
    var_176 = 0;
    var_184 = 41;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_58038
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 0;
    var_232 = 41;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_58038
    var_248 = 0;
    var_256 = 6;
    var_264 = 6;
    var_272 = 0;
    var_280 = 41;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_58038
    var_296 = 0;
    var_304 = 6;
    var_312 = 7;
    var_320 = 0;
    var_328 = 41;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_58038
    pri = 0;
    OP_JUMP lab_58048
// lab_58038
    pri = 1;
// lab_58048
    OP_JZER lab_58118
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58118
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_58118
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_584B8
    var_56 = 0;
    var_64 = 7;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_584B8
    var_104 = 0;
    var_112 = 7;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_584B8
    var_152 = 0;
    var_160 = 7;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_584B8
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_584B8
    var_248 = 0;
    var_256 = 7;
    var_264 = 6;
    var_272 = 0;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_584B8
    var_296 = 0;
    var_304 = 7;
    var_312 = 7;
    var_320 = 0;
    var_328 = 42;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_584B8
    pri = 0;
    OP_JUMP lab_584C8
// lab_584B8
    pri = 1;
// lab_584C8
    OP_JZER lab_58598
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58598
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_58598
    pri = 0;
    return pri;
}
// fun_585A8
fun_585A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_58668
    OP_BREAK 
    pri = 0;
    return pri;
// lab_58668
    OP_BREAK 
    OP_STACK -8
    OP_ZERO_S -8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_587D8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_587D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58920
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_58920
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 3;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58A68
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 3;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_58A68
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 4;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58BB0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 4;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_58BB0
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 5;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58CF8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 5;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_58CF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 6;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58E40
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 6;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_58E40
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 7;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_58F88
    OP_BREAK 
    OP_LOAD_S_PRI -8
    var_56 = pri;
    var_64 = 0;
    var_72 = 0;
    var_80 = 7;
    var_88 = 1;
    var_96 = 88;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_POP_ALT 
    OP_ADD 
    OP_ADD_C -6
    OP_STOR_S_PRI -8
// lab_58F88
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 16;
    OP_JSLEQ lab_590A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 250;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_59080
    OP_BREAK 
    var_56 = 4;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_590A8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 8;
    OP_JSLEQ lab_59290
    OP_BREAK 
    var_8 = 5;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_591A8
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_59290
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 4;
    OP_JSLEQ lab_59478
    OP_BREAK 
    var_8 = 6;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_59390
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_59478
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 3;
    OP_JSGEQ lab_59570
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_59570
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_59570
    OP_STACK 8
    pri = 0;
    return pri;
// lab_59390
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_59450
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_59450
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_591A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_59268
    OP_BREAK 
    var_56 = 3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_59268
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_59080
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_59590
fun_59590() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_59690
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_59690
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_596B0
fun_596B0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 2;
    var_32 = 1;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_597D8
    var_56 = 0;
    var_64 = 6;
    var_72 = 4;
    var_80 = 1;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_597D8
    pri = 0;
    OP_JUMP lab_597E8
// lab_597D8
    pri = 1;
// lab_597E8
    OP_JZER lab_598D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 250;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_598B8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_598D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_59A18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_59A18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_59A18
    pri = 0;
    return pri;
// lab_598B8
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_59A28
fun_59A28() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_59C18
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_59C18
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_59C18
    pri = 0;
    OP_JUMP lab_59C28
// lab_59C18
    pri = 1;
// lab_59C28
    OP_JZER lab_59C50
    OP_BREAK 
    pri = 0;
    return pri;
// lab_59C50
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_59F70
    var_56 = 0;
    var_64 = 0;
    var_72 = 2;
    var_80 = 0;
    var_88 = 10;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_59F70
    var_104 = 0;
    var_112 = 0;
    var_120 = 3;
    var_128 = 0;
    var_136 = 10;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_59F70
    var_152 = 0;
    var_160 = 0;
    var_168 = 1;
    var_176 = 0;
    var_184 = 10;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_59F70
    var_200 = 0;
    var_208 = 0;
    var_216 = 4;
    var_224 = 0;
    var_232 = 10;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_59F70
    var_248 = 0;
    var_256 = 0;
    var_264 = 0;
    var_272 = 0;
    var_280 = 12;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_59F70
    pri = 0;
    OP_JUMP lab_59F80
// lab_59F70
    pri = 1;
// lab_59F80
    OP_JZER lab_5A298
    OP_BREAK 
    var_8 = 8;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_5A0E0
    var_64 = 9;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_5A0E0
    pri = 0;
    OP_JUMP lab_5A0F0
// lab_5A298
    pri = 0;
    return pri;
// lab_5A0E0
    pri = 1;
// lab_5A0F0
    OP_JZER lab_5A1D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5A1D8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5A1D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5A298
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_5A2A8
fun_5A2A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_5A360
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5A360
    OP_BREAK 
    var_8 = 0;
    pri = fun_52288()
    pri = 0;
    return pri;
}
// fun_5A398
fun_5A398() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 23;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5A4E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5A4E8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_5A4E8
    pri = 0;
    return pri;
}
// fun_5A4F8
fun_5A4F8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_5A5D8
    OP_BREAK 
    var_56 = 0;
    pri = fun_95B0()
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5A5D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5A698
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5A698
    pri = 0;
    return pri;
}
// fun_5A6A8
fun_5A6A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_5A898
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_5A898
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_5A898
    pri = 0;
    OP_JUMP lab_5A8A8
// lab_5A898
    pri = 1;
// lab_5A8A8
    OP_JZER lab_5A8D0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5A8D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5AA18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 140;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5AA18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_5AA18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5AB60
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5AB60
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_5AB60
    pri = 0;
    return pri;
}
// fun_5AB70
fun_5AB70() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 94;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 73
    OP_JZER lab_5AF60
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_5AE58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_5AE58
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_5AE58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_5AE58
    pri = 0;
    OP_JUMP lab_5AE68
// lab_5AF60
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 94
    OP_JZER lab_5B180
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B078
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B078
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_5B078
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_5B078
    pri = 0;
    OP_JUMP lab_5B088
// lab_5B180
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 121
    OP_JZER lab_5B400
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B2F8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B2F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_5B2F8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_5B2F8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_5B2F8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_5B2F8
    pri = 0;
    OP_JUMP lab_5B308
// lab_5B400
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 139
    OP_JZER lab_5B620
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_5B518
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_5B518
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 12
    OP_JNZ lab_5B518
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 12
    OP_JNZ lab_5B518
    pri = 0;
    OP_JUMP lab_5B528
// lab_5B620
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 151
    OP_JZER lab_5B7E0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B6D8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B6D8
    pri = 0;
    OP_JUMP lab_5B6E8
// lab_5B7E0
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 380
    OP_JZER lab_5BA60
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_5B958
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_5B958
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_5B958
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_5B958
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B958
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_5B958
    pri = 0;
    OP_JUMP lab_5B968
// lab_5BA60
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 618
    OP_JZER lab_5BCE0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 14
    OP_JNZ lab_5BBD8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 14
    OP_JNZ lab_5BBD8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_5BBD8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_5BBD8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_5BBD8
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_5BBD8
    pri = 0;
    OP_JUMP lab_5BBE8
// lab_5BCE0
    OP_STACK 24
    pri = 0;
    return pri;
// lab_5BBD8
    pri = 1;
// lab_5BBE8
    OP_JZER lab_5BCB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5BCB8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5BCB8
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5B958
    pri = 1;
// lab_5B968
    OP_JZER lab_5BA38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5BA38
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5BA38
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5B6D8
    pri = 1;
// lab_5B6E8
    OP_JZER lab_5B7B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5B7B8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5B7B8
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5B518
    pri = 1;
// lab_5B528
    OP_JZER lab_5B5F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5B5F8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5B5F8
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5B2F8
    pri = 1;
// lab_5B308
    OP_JZER lab_5B3D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5B3D8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5B3D8
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5B078
    pri = 1;
// lab_5B088
    OP_JZER lab_5B158
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5B158
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5B158
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5AE58
    pri = 1;
// lab_5AE68
    OP_JZER lab_5AF38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5AF38
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5AF38
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
}
// fun_5BD00
fun_5BD00() {
    pri = 0;
    return pri;
}
// fun_5BD18
fun_5BD18() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 93;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5BDF8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5BDF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5BF58
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 60;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5BF58
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5BF58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5C030
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5C030
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5C190
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 50;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5C190
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5C190
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 60;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5C2F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 60;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5C2F0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5C2F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 84;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5C450
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5C450
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5C450
    pri = 0;
    return pri;
}
// fun_5C460
fun_5C460() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_394B8()
    OP_EQ_C_PRI 1
    OP_JZER lab_5C5D8
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 220;
    var_48 = 0;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_5C588
    OP_BREAK 
    var_64 = -5;
    var_72 = 8;
    pri = fun_00B8(var_64)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5C5D8
    pri = 0;
    return pri;
// lab_5C588
    OP_BREAK 
    var_8 = -1;
    var_16 = 8;
    pri = fun_00B8(var_8)
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_5C5E8
fun_5C5E8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 3;
    var_136 = 24;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -24
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    var_184 = 94;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_EQ_C_PRI 648
    OP_JZER lab_5D248
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 13
    OP_JZER lab_5CCB8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_5C968
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_5C968
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_5C968
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_5C968
    pri = 0;
    OP_JUMP lab_5C978
// lab_5D248
    OP_STACK 24
    pri = 0;
    return pri;
// lab_5CCB8
    OP_BREAK 
    OP_LOAD_S_PRI -24
    OP_EQ_C_PRI 1
    OP_JZER lab_5D248
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_5CD70
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_5CD70
    pri = 0;
    OP_JUMP lab_5CD80
// lab_5CD70
    pri = 1;
// lab_5CD80
    OP_JZER lab_5CE78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5CE78
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5CE78
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_5CF58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_5CF58
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_5CF58
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_5CF58
    pri = 0;
    OP_JUMP lab_5CF68
// lab_5CF58
    pri = 1;
// lab_5CF68
    OP_JZER lab_5D060
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5D060
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5D060
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_5D140
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_5D140
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 16
    OP_JNZ lab_5D140
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 16
    OP_JNZ lab_5D140
    pri = 0;
    OP_JUMP lab_5D150
// lab_5D140
    pri = 1;
// lab_5D150
    OP_JZER lab_5D248
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5D248
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5C968
    pri = 1;
// lab_5C978
    OP_JZER lab_5CA70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5CA70
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
// lab_5CA70
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_5CBB0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_5CBB0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_5CBB0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 2
    OP_JNZ lab_5CBB0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 13
    OP_JNZ lab_5CBB0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 13
    OP_JNZ lab_5CBB0
    pri = 0;
    OP_JUMP lab_5CBC0
// lab_5CBB0
    pri = 1;
// lab_5CBC0
    OP_JZER lab_5CCB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5CCB8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 24
    return pri;
}
// fun_5D268
fun_5D268() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5D4C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 80;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5D4C8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 31;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_5D4C8
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 128;
    var_176 = 0;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_5D4C8
    OP_BREAK 
    var_200 = -1;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_5D4C8
    pri = 0;
    return pri;
}
// fun_5D4D8
fun_5D4D8() {
    pri = 0;
    return pri;
}
// fun_5D4F0
fun_5D4F0() {
    pri = 0;
    return pri;
}
// fun_5D508
fun_5D508() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_5D6F8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_5D6F8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_5D6F8
    pri = 0;
    OP_JUMP lab_5D708
// lab_5D6F8
    pri = 1;
// lab_5D708
    OP_JZER lab_5D730
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5D730
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 11
    OP_JNZ lab_5D9A0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 11
    OP_JNZ lab_5D9A0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_5D9A0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_5D9A0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 6
    OP_JNZ lab_5D9A0
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 6
    OP_JNZ lab_5D9A0
    pri = 0;
    OP_JUMP lab_5D9B0
// lab_5D9A0
    pri = 1;
// lab_5D9B0
    OP_JZER lab_5DCA0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 12;
    OP_JEQ lab_5DB08
    OP_LOAD_S_PRI -16
    alt = 12;
    OP_JEQ lab_5DB08
    OP_LOAD_S_PRI -8
    alt = 5;
    OP_JEQ lab_5DB08
    OP_LOAD_S_PRI -16
    alt = 5;
    OP_JEQ lab_5DB08
    OP_LOAD_S_PRI -8
    alt = 8;
    OP_JEQ lab_5DB08
    OP_LOAD_S_PRI -16
    alt = 8;
    OP_JEQ lab_5DB08
    pri = 1;
    OP_JUMP lab_5DB10
// lab_5DCA0
    OP_STACK 16
    pri = 0;
    return pri;
// lab_5DB08
    pri = 0;
// lab_5DB10
    OP_JZER lab_5DCA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5DBE0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5DBE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5DCA0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_5DCC0
fun_5DCC0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_5DEB0
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_5DEB0
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_5DEB0
    pri = 0;
    OP_JUMP lab_5DEC0
// lab_5DEB0
    pri = 1;
// lab_5DEC0
    OP_JZER lab_5DEE8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5DEE8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5DFA8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5DFA8
    pri = 0;
    return pri;
}
// fun_5DFB8
fun_5DFB8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 72;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E108
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 240;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5E108
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_5E108
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 31;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5E268
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5E250
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_5E268
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E328
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5E328
    pri = 0;
    return pri;
// lab_5E250
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_5E338
fun_5E338() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E4A0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5E4A0
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5E4A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E560
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5E560
    pri = 0;
    return pri;
}
// fun_5E570
fun_5E570() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5E698
    var_56 = 0;
    var_64 = 7;
    var_72 = 3;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5E698
    pri = 0;
    OP_JUMP lab_5E6A8
// lab_5E698
    pri = 1;
// lab_5E6A8
    OP_JZER lab_5E790
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E790
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5E790
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5E8B0
    var_56 = 0;
    var_64 = 5;
    var_72 = 3;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5E8B0
    pri = 0;
    OP_JUMP lab_5E8C0
// lab_5E8B0
    pri = 1;
// lab_5E8C0
    OP_JZER lab_5E9A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5E9A8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5E9A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5EB08
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5EB08
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5EB08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5EBC8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5EBC8
    pri = 0;
    return pri;
}
// fun_5EBD8
fun_5EBD8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5F058
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5ED88
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 2;
    var_136 = 24;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_5ED88
    pri = 0;
    OP_JUMP lab_5ED98
// lab_5F058
    pri = 0;
    return pri;
// lab_5ED88
    pri = 1;
// lab_5ED98
    OP_JZER lab_5F058
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 31
    OP_JNZ lab_5EF78
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 10
    OP_JNZ lab_5EF78
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 78
    OP_JNZ lab_5EF78
    pri = 0;
    OP_JUMP lab_5EF88
// lab_5EF78
    pri = 1;
// lab_5EF88
    OP_JZER lab_5F058
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5F058
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_5F068
fun_5F068() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 84;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5F1D0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5F1D0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_5F1D0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 83;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5F318
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_5F318
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_5F318
    pri = 0;
    return pri;
}
// fun_5F328
fun_5F328() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5F6D0
    var_56 = 0;
    var_64 = 6;
    var_72 = 2;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5F6D0
    var_104 = 0;
    var_112 = 6;
    var_120 = 3;
    var_128 = 0;
    var_136 = 41;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_5F6D0
    var_152 = 0;
    var_160 = 6;
    var_168 = 4;
    var_176 = 0;
    var_184 = 41;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_5F6D0
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 0;
    var_232 = 41;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_5F6D0
    var_248 = 0;
    var_256 = 6;
    var_264 = 6;
    var_272 = 0;
    var_280 = 41;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_5F6D0
    var_296 = 0;
    var_304 = 6;
    var_312 = 7;
    var_320 = 0;
    var_328 = 41;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_5F6D0
    pri = 0;
    OP_JUMP lab_5F6E0
// lab_5F6D0
    pri = 1;
// lab_5F6E0
    OP_JZER lab_5F7B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5F7B0
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5F7B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_5FB50
    var_56 = 0;
    var_64 = 6;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_5FB50
    var_104 = 0;
    var_112 = 6;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_5FB50
    var_152 = 0;
    var_160 = 6;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_5FB50
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_5FB50
    var_248 = 0;
    var_256 = 6;
    var_264 = 6;
    var_272 = 0;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_5FB50
    var_296 = 0;
    var_304 = 6;
    var_312 = 7;
    var_320 = 0;
    var_328 = 42;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_5FB50
    pri = 0;
    OP_JUMP lab_5FB60
// lab_5FB50
    pri = 1;
// lab_5FB60
    OP_JZER lab_5FC48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5FC30
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5FC48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5FD08
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5FD08
    pri = 0;
    return pri;
// lab_5FC30
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_5FD18
fun_5FD18() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_3ABA0()
    OP_EQ_C_PRI 1
    OP_JZER lab_5FE40
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 180;
    var_48 = 97;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_5FE28
    OP_BREAK 
    var_64 = 1;
    var_72 = 8;
    pri = fun_00B8(var_64)
// lab_5FE40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 230;
    var_40 = 96;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_5FF00
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_5FF00
    pri = 0;
    return pri;
// lab_5FE28
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_5FF10
fun_5FF10() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_60010
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_60010
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_60030
fun_60030() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 2;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60190
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60180
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60190
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_602E8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_602D8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_602E8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60430
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60430
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60430
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_604F0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_604F0
    pri = 0;
    return pri;
// lab_602D8
    OP_JUMP lab_60430
// lab_60180
    OP_JUMP lab_60430
}
// fun_60500
fun_60500() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60660
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60650
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60660
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_607B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_607A8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_607B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60900
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60900
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60900
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60A48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60A48
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60A48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 33;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60B90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60B90
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60B90
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 67;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60CD8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60CD8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60CD8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 167;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60E20
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 100;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_60E20
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_60E20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_60EE0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_60EE0
    pri = 0;
    return pri;
// lab_607A8
    OP_JUMP lab_60900
// lab_60650
    OP_JUMP lab_60900
}
// fun_60EF0
fun_60EF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 31
    OP_JNZ lab_610C8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 10
    OP_JNZ lab_610C8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 78
    OP_JNZ lab_610C8
    pri = 0;
    OP_JUMP lab_610D8
// lab_610C8
    pri = 1;
// lab_610D8
    OP_JZER lab_611A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_611A8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_611A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 29;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_614E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 31
    OP_JNZ lab_61400
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 1;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_EQ_C_PRI 10
    OP_JNZ lab_61400
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 1;
    var_184 = 33;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_EQ_C_PRI 78
    OP_JNZ lab_61400
    pri = 0;
    OP_JUMP lab_61410
// lab_614E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 50;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_615A0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_615A0
    pri = 0;
    return pri;
// lab_61400
    pri = 1;
// lab_61410
    OP_JZER lab_614E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_614E0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_615B0
fun_615B0() {
    pri = 0;
    return pri;
}
// fun_615C8
fun_615C8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 93;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_61730
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_61730
    OP_BREAK 
    var_104 = 3;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_61730
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 111;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_61950
    var_56 = 0;
    var_64 = 0;
    var_72 = 355;
    var_80 = 0;
    var_88 = 49;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_61950
    var_104 = 0;
    var_112 = 0;
    var_120 = 361;
    var_128 = 0;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_61950
    var_152 = 0;
    var_160 = 0;
    var_168 = 79;
    var_176 = 0;
    var_184 = 49;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_61950
    pri = 0;
    OP_JUMP lab_61960
// lab_61950
    pri = 1;
// lab_61960
    OP_JZER lab_61A30
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_61A30
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_61A30
    pri = 0;
    return pri;
}
// fun_61A40
fun_61A40() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 5;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_61BA8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_61BA8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_61BA8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_61D08
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_61D08
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_61D08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_61DC8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_61DC8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_61F10
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_61F10
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_61F10
    pri = 0;
    return pri;
}
// fun_61F20
fun_61F20() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 8;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62050
    var_56 = 0;
    var_64 = 8;
    var_72 = 4;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62050
    pri = 1;
    OP_JUMP lab_62058
// lab_62050
    pri = 0;
// lab_62058
    OP_JZER lab_62128
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62128
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_62128
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 4;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62270
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62270
    OP_BREAK 
    var_104 = -1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_62270
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 4;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_624C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_624C8
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 127;
    var_128 = 1;
    var_136 = 49;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_624C8
    OP_BREAK 
    var_152 = 0;
    var_160 = 0;
    var_168 = 0;
    var_176 = 128;
    var_184 = 0;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JZER lab_624C8
    OP_BREAK 
    var_200 = 2;
    var_208 = 8;
    pri = fun_00B8(var_200)
// lab_624C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62620
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62610
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_62620
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62768
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62768
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_62768
    pri = 0;
    return pri;
// lab_62610
    OP_JUMP lab_62768
}
// fun_62778
fun_62778() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_63288
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 1;
    var_88 = 33;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 0;
    var_136 = 33;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 57
    OP_JNZ lab_629B8
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 58
    OP_JNZ lab_629B8
    pri = 0;
    OP_JUMP lab_629C8
// lab_63288
    pri = 0;
    return pri;
// lab_629B8
    pri = 1;
// lab_629C8
    OP_JZER lab_63278
    OP_BREAK 
    OP_LOAD_S_PRI -16
    alt = 57;
    OP_JNEQ lab_62A58
    OP_LOAD_S_PRI -16
    alt = 58;
    OP_JNEQ lab_62A58
    pri = 0;
    OP_JUMP lab_62A68
// lab_63278
    OP_STACK 16
// lab_62A58
    pri = 1;
// lab_62A68
    OP_JZER lab_63278
    OP_BREAK 
    var_8 = 0;
    var_16 = 9;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62BA0
    var_56 = 0;
    var_64 = 9;
    var_72 = 4;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62BA0
    pri = 1;
    OP_JUMP lab_62BA8
// lab_62BA0
    pri = 0;
// lab_62BA8
    OP_JZER lab_62CA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62CA0
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_62CA0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 40;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62E20
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62E10
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_62E20
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_62F90
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_62F90
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_62F90
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 2;
    var_32 = 1;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_630B8
    var_56 = 0;
    var_64 = 7;
    var_72 = 4;
    var_80 = 1;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_630B8
    pri = 1;
    OP_JUMP lab_630C0
// lab_630B8
    pri = 0;
// lab_630C0
    OP_JZER lab_631B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_631B8
    OP_BREAK 
    var_56 = -1;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_631B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_63278
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_62E10
    OP_JUMP lab_62F90
}
// fun_63298
fun_63298() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 2;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_633F8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_633E8
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_633F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_63550
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_63540
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_63550
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 4;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_63698
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_63698
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_63698
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 49;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_637E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_637E0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_637E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_638A0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_638A0
    pri = 0;
    return pri;
// lab_63540
    OP_JUMP lab_63698
// lab_633E8
    OP_JUMP lab_63698
}
// fun_638B0
fun_638B0() {
    pri = 0;
    return pri;
}
// fun_638C8
fun_638C8() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_19B58()
    pri = 0;
    return pri;
}
// fun_63908
fun_63908() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 7;
    var_24 = 1;
    var_32 = 1;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_63A58
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_63A58
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_63A58
    OP_BREAK 
    var_8 = 0;
    pri = fun_95B0()
    pri = 0;
    return pri;
}
// fun_63A90
fun_63A90() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 9
    OP_JNZ lab_63BD8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 9
    OP_JNZ lab_63BD8
    pri = 0;
    OP_JUMP lab_63BE8
// lab_63BD8
    pri = 1;
// lab_63BE8
    OP_JZER lab_63CB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_63CB8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_63CB8
    pri = 0;
    return pri;
}
// fun_63CC8
fun_63CC8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_63E20
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_63E20
    pri = 0;
    OP_JUMP lab_63E30
// lab_63E20
    pri = 1;
// lab_63E30
    OP_JZER lab_63E58
    OP_BREAK 
    pri = 0;
    return pri;
// lab_63E58
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 10
    OP_JNZ lab_63F98
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_EQ_C_PRI 10
    OP_JNZ lab_63F98
    pri = 0;
    OP_JUMP lab_63FA8
// lab_63F98
    pri = 1;
// lab_63FA8
    OP_JZER lab_64138
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64078
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_64138
    pri = 0;
    return pri;
// lab_64078
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64138
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_64148
fun_64148() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 2
    OP_JNZ lab_64298
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 3
    OP_JNZ lab_64298
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_64298
    pri = 0;
    OP_JUMP lab_642A8
// lab_64298
    pri = 1;
// lab_642A8
    OP_JZER lab_643A0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 240;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64378
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_643A0
    OP_BREAK 
    var_8 = 0;
    pri = fun_15B80()
    OP_STACK 8
    pri = 0;
    return pri;
// lab_64378
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_643E8
fun_643E8() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_64600
    OP_BREAK 
    var_16 = 0;
    pri = fun_EF00()
    OP_JNZ lab_64600
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_64600
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 100;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_64600
    OP_BREAK 
    var_120 = 1;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_64600
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64748
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_64748
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_64748
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64890
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_64890
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_64890
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_648B0
fun_648B0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 99
    OP_JZER lab_64A48
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_64A48
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_64A48
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 2
    OP_JZER lab_64AF0
    OP_JUMP lab_64C38
// lab_64AF0
    OP_BREAK 
    var_8 = 0;
    var_16 = 4;
    var_24 = 1;
    var_32 = 0;
    var_40 = 41;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64C38
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_64C38
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_64C38
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_64C58
fun_64C58() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64D38
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_64D38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_64DF8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_64DF8
    pri = 0;
    return pri;
}
// fun_64E08
fun_64E08() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 83
    OP_JZER lab_64FB0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_64FA0
    OP_BREAK 
    var_104 = -5;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_64FB0
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_65030
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 75
    OP_JNZ lab_65030
    pri = 0;
    OP_JUMP lab_65040
// lab_65030
    pri = 1;
// lab_65040
    OP_JZER lab_65110
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_65110
    OP_BREAK 
    var_56 = -4;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_65110
    OP_STACK 8
    pri = 0;
    return pri;
// lab_64FA0
    OP_JUMP lab_65110
}
// fun_65130
fun_65130() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 57;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_JNZ lab_65230
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_65230
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_65250
fun_65250() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_654D0()
    OP_EQ_C_PRI 1
    OP_JZER lab_654C0
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 30;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_65400
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 220;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_65400
    OP_BREAK 
    var_112 = 2;
    var_120 = 8;
    pri = fun_00B8(var_112)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_654C0
    pri = 0;
    return pri;
// lab_65400
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_654C0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_654D0
fun_654D0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 373
    OP_JNZ lab_656B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 700
    OP_JNZ lab_656B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 295
    OP_JNZ lab_656B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 715
    OP_JNZ lab_656B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 282
    OP_JNZ lab_656B0
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 334
    OP_JNZ lab_656B0
    pri = 0;
    OP_JUMP lab_656C0
// lab_656B0
    pri = 1;
// lab_656C0
    OP_JZER lab_65700
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_65700
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_65728
fun_65728() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 2;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_65888
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_65878
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_65888
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 3;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_659E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_659D0
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_659E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 106;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_65B28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_65B28
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_65B28
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_65BE8
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_65BE8
    pri = 0;
    return pri;
// lab_659D0
    OP_JUMP lab_65B28
// lab_65878
    OP_JUMP lab_65B28
}
// fun_65BF8
fun_65BF8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 30;
    var_32 = 0;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_65D20
    var_56 = 0;
    var_64 = 5;
    var_72 = 1;
    var_80 = 0;
    var_88 = 41;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_65D20
    pri = 0;
    OP_JUMP lab_65D30
// lab_65D20
    pri = 1;
// lab_65D30
    OP_JZER lab_65DE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_65DE0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_65DE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_65F50
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 128;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_65F50
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_65F50
    pri = 0;
    return pri;
}
// fun_65F60
fun_65F60() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 2;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66090
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_66090
    pri = 1;
    OP_JUMP lab_66098
// lab_66090
    pri = 0;
// lab_66098
    OP_JZER lab_66180
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66180
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_66180
    pri = 0;
    return pri;
}
// fun_66190
fun_66190() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 10
    OP_JNZ lab_66408
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 10
    OP_JNZ lab_66408
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 5
    OP_JNZ lab_66408
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 5
    OP_JNZ lab_66408
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 4
    OP_JNZ lab_66408
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 4
    OP_JNZ lab_66408
    pri = 0;
    OP_JUMP lab_66418
// lab_66408
    pri = 1;
// lab_66418
    OP_JZER lab_66510
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 220;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66510
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_66510
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66718
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 60;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_66708
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 200;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_66708
    OP_BREAK 
    var_152 = -2;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_66718
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 70;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66888
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_66888
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_66888
    OP_STACK 16
    pri = 0;
    return pri;
// lab_66708
    OP_JUMP lab_66888
}
// fun_668A8
fun_668A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66950
    OP_BREAK 
    pri = 0;
    return pri;
// lab_66950
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 24;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_STACK -8
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 2;
    var_88 = 24;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_STOR_S_PRI -16
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JNZ lab_66B00
    OP_LOAD_S_PRI -16
    OP_EQ_C_PRI 1
    OP_JNZ lab_66B00
    pri = 0;
    OP_JUMP lab_66B10
// lab_66B00
    pri = 1;
// lab_66B10
    OP_JZER lab_66C08
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_66C08
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 16
    return pri;
// lab_66C08
    OP_STACK 16
    pri = 0;
    return pri;
}
// fun_66C28
fun_66C28() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_66E28
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 80;
    var_80 = 1;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_66E28
    OP_BREAK 
    var_104 = 0;
    var_112 = 0;
    var_120 = 0;
    var_128 = 128;
    var_136 = 0;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JZER lab_66E28
    OP_BREAK 
    var_152 = -1;
    var_160 = 8;
    pri = fun_00B8(var_152)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_66E28
    pri = 0;
    return pri;
}
// fun_66E38
fun_66E38() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 40;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    alt = 3;
    OP_JEQ lab_66F70
    OP_BREAK 
    var_56 = -5;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
// lab_66F70
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 80;
    var_32 = 1;
    var_40 = 5;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_670C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_670B8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_670C8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 50;
    var_32 = 1;
    var_40 = 4;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_67210
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_67210
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_67210
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_672D0
    OP_BREAK 
    var_56 = 1;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_672D0
    OP_STACK 8
    pri = 0;
    return pri;
// lab_670B8
    OP_JUMP lab_67210
}
// fun_672F0
fun_672F0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_674E0
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_674E0
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_674E0
    pri = 0;
    OP_JUMP lab_674F0
// lab_674E0
    pri = 1;
// lab_674F0
    OP_JZER lab_67518
    OP_BREAK 
    pri = 0;
    return pri;
// lab_67518
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 80;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 1
    OP_JZER lab_67670
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 150;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_67670
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_67670
    pri = 0;
    return pri;
}
// fun_67680
fun_67680() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_67870
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_67870
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_67870
    pri = 0;
    OP_JUMP lab_67880
// lab_67870
    pri = 1;
// lab_67880
    OP_JZER lab_678A8
    OP_BREAK 
    pri = 0;
    return pri;
// lab_678A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 119;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_679F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_679F0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_679F0
    pri = 0;
    return pri;
}
// fun_67A00
fun_67A00() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 1;
    var_32 = 0;
    var_40 = 42;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_67DA8
    var_56 = 0;
    var_64 = 6;
    var_72 = 2;
    var_80 = 0;
    var_88 = 42;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_67DA8
    var_104 = 0;
    var_112 = 6;
    var_120 = 3;
    var_128 = 0;
    var_136 = 42;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_67DA8
    var_152 = 0;
    var_160 = 6;
    var_168 = 4;
    var_176 = 0;
    var_184 = 42;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_67DA8
    var_200 = 0;
    var_208 = 6;
    var_216 = 5;
    var_224 = 0;
    var_232 = 42;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_67DA8
    var_248 = 0;
    var_256 = 6;
    var_264 = 6;
    var_272 = 0;
    var_280 = 42;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_67DA8
    var_296 = 0;
    var_304 = 6;
    var_312 = 7;
    var_320 = 0;
    var_328 = 42;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_67DA8
    pri = 0;
    OP_JUMP lab_67DB8
// lab_67DA8
    pri = 1;
// lab_67DB8
    OP_JZER lab_67E88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 200;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_67E88
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_67E88
    pri = 0;
    return pri;
}
// fun_67E98
fun_67E98() {
    OP_BREAK 
    var_8 = 0;
    pri = fun_68040()
    OP_EQ_C_PRI 1
    OP_JZER lab_68030
    OP_BREAK 
    var_16 = 0;
    var_24 = 0;
    var_32 = 100;
    var_40 = 0;
    var_48 = 6;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JZER lab_68030
    OP_BREAK 
    var_64 = 0;
    var_72 = 0;
    var_80 = 0;
    var_88 = 200;
    var_96 = 0;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JZER lab_68030
    OP_BREAK 
    var_112 = 2;
    var_120 = 8;
    pri = fun_00B8(var_112)
// lab_68030
    pri = 0;
    return pri;
}
// fun_68040
fun_68040() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 94;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 149
    OP_JNZ lab_68160
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 249
    OP_JNZ lab_68160
    pri = 0;
    OP_JUMP lab_68170
// lab_68160
    pri = 1;
// lab_68170
    OP_JZER lab_681B0
    OP_BREAK 
    pri = 1;
    OP_STACK 8
    return pri;
// lab_681B0
    OP_BREAK 
    pri = 0;
    OP_STACK 8
    return pri;
}
// fun_681D8
fun_681D8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_683C8
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_683C8
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_683C8
    pri = 0;
    OP_JUMP lab_683D8
// lab_683C8
    pri = 1;
// lab_683D8
    OP_JZER lab_68400
    OP_BREAK 
    pri = 0;
    return pri;
// lab_68400
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_68548
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_68548
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_68548
    pri = 0;
    return pri;
}
// fun_68558
fun_68558() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 123;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_688C8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    pri = fun_0110()
    var_72 = pri;
    var_80 = 0;
    var_88 = 1;
    var_96 = 34;
    var_104 = 40;
    pri = fun_0010(var_96, var_88, var_80, var_72, var_64)
    OP_JNZ lab_687D0
    var_112 = 5;
    var_120 = 0;
    pri = fun_0110()
    var_128 = pri;
    var_136 = 0;
    var_144 = 1;
    var_152 = 34;
    var_160 = 40;
    pri = fun_0010(var_152, var_144, var_136, var_128, var_120)
    OP_JNZ lab_687D0
    var_168 = 6;
    var_176 = 0;
    pri = fun_0110()
    var_184 = pri;
    var_192 = 0;
    var_200 = 1;
    var_208 = 34;
    var_216 = 40;
    pri = fun_0010(var_208, var_200, var_192, var_184, var_176)
    OP_JNZ lab_687D0
    pri = 0;
    OP_JUMP lab_687E0
// lab_688C8
    pri = 0;
    return pri;
// lab_687D0
    pri = 1;
// lab_687E0
    OP_JZER lab_68808
    OP_BREAK 
    pri = 0;
    return pri;
// lab_68808
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_688C8
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
}
// fun_688D8
fun_688D8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 201;
    var_32 = 1;
    var_40 = 71;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JNZ lab_68E00
    var_56 = 0;
    var_64 = 0;
    var_72 = 687;
    var_80 = 1;
    var_88 = 71;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JNZ lab_68E00
    var_104 = 0;
    var_112 = 0;
    var_120 = 203;
    var_128 = 1;
    var_136 = 71;
    var_144 = 40;
    pri = fun_0010(var_136, var_128, var_120, var_112, var_104)
    OP_JNZ lab_68E00
    var_152 = 0;
    var_160 = 0;
    var_168 = 206;
    var_176 = 1;
    var_184 = 71;
    var_192 = 40;
    pri = fun_0010(var_184, var_176, var_168, var_160, var_152)
    OP_JNZ lab_68E00
    var_200 = 0;
    var_208 = 0;
    var_216 = 205;
    var_224 = 1;
    var_232 = 71;
    var_240 = 40;
    pri = fun_0010(var_232, var_224, var_216, var_208, var_200)
    OP_JNZ lab_68E00
    var_248 = 0;
    var_256 = 0;
    var_264 = 207;
    var_272 = 1;
    var_280 = 71;
    var_288 = 40;
    pri = fun_0010(var_280, var_272, var_264, var_256, var_248)
    OP_JNZ lab_68E00
    var_296 = 0;
    var_304 = 0;
    var_312 = 688;
    var_320 = 1;
    var_328 = 71;
    var_336 = 40;
    pri = fun_0010(var_328, var_320, var_312, var_304, var_296)
    OP_JNZ lab_68E00
    var_344 = 0;
    var_352 = 0;
    var_360 = 204;
    var_368 = 1;
    var_376 = 71;
    var_384 = 40;
    pri = fun_0010(var_376, var_368, var_360, var_352, var_344)
    OP_JNZ lab_68E00
    var_392 = 0;
    var_400 = 0;
    var_408 = 202;
    var_416 = 1;
    var_424 = 71;
    var_432 = 40;
    pri = fun_0010(var_424, var_416, var_408, var_400, var_392)
    OP_JNZ lab_68E00
    var_440 = 0;
    var_448 = 0;
    var_456 = 209;
    var_464 = 1;
    var_472 = 71;
    var_480 = 40;
    pri = fun_0010(var_472, var_464, var_456, var_448, var_440)
    OP_JNZ lab_68E00
    pri = 0;
    OP_JUMP lab_68E10
// lab_68E00
    pri = 1;
// lab_68E10
    OP_JZER lab_68EE0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_68EE0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_68EE0
    pri = 0;
    return pri;
}
// fun_68EF0
fun_68EF0() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 86;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    alt = 6;
    OP_JSLESS lab_69050
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69050
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69050
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 84;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_69198
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69198
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69198
    pri = 0;
    return pri;
}
// fun_691A8
fun_691A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 33;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_EQ_C_PRI 3
    OP_JZER lab_69298
    OP_BREAK 
    var_56 = -3;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_69298
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_693F8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 220;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_693E0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_693F8
    pri = 0;
    return pri;
// lab_693E0
    OP_BREAK 
    pri = 0;
    return pri;
}
// fun_69408
fun_69408() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 180;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_694D0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_694D0
    pri = 0;
    return pri;
}
// fun_694E0
fun_694E0() {
    OP_BREAK 
    OP_STACK -8
    var_8 = 0;
    pri = fun_F890()
    OP_STOR_S_PRI -8
    OP_BREAK 
    OP_LOAD_S_PRI -8
    OP_EQ_C_PRI 1
    OP_JZER lab_696F8
    OP_BREAK 
    var_16 = 0;
    pri = fun_EF00()
    OP_JNZ lab_696F8
    OP_BREAK 
    var_24 = 0;
    var_32 = 0;
    var_40 = 0;
    var_48 = 0;
    var_56 = 33;
    var_64 = 40;
    pri = fun_0010(var_56, var_48, var_40, var_32, var_24)
    alt = 98;
    OP_JEQ lab_696F8
    OP_BREAK 
    var_72 = 0;
    var_80 = 0;
    var_88 = 0;
    var_96 = 180;
    var_104 = 0;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JZER lab_696F8
    OP_BREAK 
    var_120 = 1;
    var_128 = 8;
    pri = fun_00B8(var_120)
// lab_696F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_69840
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69840
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69840
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 10;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_69988
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69988
    OP_BREAK 
    var_104 = 1;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69988
    OP_STACK 8
    pri = 0;
    return pri;
}
// fun_699A8
fun_699A8() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    pri = fun_0110()
    var_24 = pri;
    var_32 = 0;
    var_40 = 1;
    var_48 = 34;
    var_56 = 40;
    pri = fun_0010(var_48, var_40, var_32, var_24, var_16)
    OP_JNZ lab_69B98
    var_64 = 5;
    var_72 = 0;
    pri = fun_0110()
    var_80 = pri;
    var_88 = 0;
    var_96 = 1;
    var_104 = 34;
    var_112 = 40;
    pri = fun_0010(var_104, var_96, var_88, var_80, var_72)
    OP_JNZ lab_69B98
    var_120 = 6;
    var_128 = 0;
    pri = fun_0110()
    var_136 = pri;
    var_144 = 0;
    var_152 = 1;
    var_160 = 34;
    var_168 = 40;
    pri = fun_0010(var_160, var_152, var_144, var_136, var_128)
    OP_JNZ lab_69B98
    pri = 0;
    OP_JUMP lab_69BA8
// lab_69B98
    pri = 1;
// lab_69BA8
    OP_JZER lab_69BD0
    OP_BREAK 
    pri = 0;
    return pri;
// lab_69BD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 30;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_69D18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69D18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69D18
    pri = 0;
    return pri;
}
// fun_69D28
fun_69D28() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_69E78
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69E78
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69E78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_69FC0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_69FC0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_69FC0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 8;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A108
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A108
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A108
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 12;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A250
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A250
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A250
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 13;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A398
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A398
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A398
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 14;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A4E0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 200;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A4E0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A4E0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 19;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A628
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A628
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A628
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A770
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A770
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A770
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 21;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A8B8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6A8B8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6A8B8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6A978
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6A978
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6AA38
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6AA38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6AAF8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6AAF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6ABB8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6ABB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6AC78
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6AC78
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6AD38
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6AD38
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6ADF8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6ADF8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 17;
    var_32 = 1;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6AEB8
    OP_BREAK 
    var_56 = -2;
    var_64 = 8;
    pri = fun_00B8(var_56)
// lab_6AEB8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 6;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B000
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B000
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B000
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 7;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B148
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B148
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B148
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 8;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B290
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B290
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B290
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 12;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B3D8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B3D8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B3D8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 13;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B520
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B520
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B520
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 14;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B668
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B668
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B668
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 19;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B7B0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B7B0
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B7B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 20;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6B8F8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6B8F8
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6B8F8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 21;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6BA40
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6BA40
    OP_BREAK 
    var_104 = -2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6BA40
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6BB88
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6BB88
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6BB88
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 1;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6BCD0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6BCD0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6BCD0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 2;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6BE18
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 180;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6BE18
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6BE18
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 3;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6BF60
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6BF60
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6BF60
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 4;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C0A8
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6C0A8
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6C0A8
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 5;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C1F0
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 150;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6C1F0
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6C1F0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 11;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C338
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6C338
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6C338
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 17;
    var_32 = 0;
    var_40 = 16;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C480
    OP_BREAK 
    var_56 = 0;
    var_64 = 0;
    var_72 = 0;
    var_80 = 230;
    var_88 = 0;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6C480
    OP_BREAK 
    var_104 = 2;
    var_112 = 8;
    pri = fun_00B8(var_104)
// lab_6C480
    pri = 0;
    return pri;
}
// fun_6C490
fun_6C490() {
    OP_BREAK 
    var_8 = 0;
    var_16 = 6;
    var_24 = 4;
    var_32 = 1;
    var_40 = 43;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C5C0
    var_56 = 0;
    var_64 = 0;
    var_72 = 70;
    var_80 = 0;
    var_88 = 5;
    var_96 = 40;
    pri = fun_0010(var_88, var_80, var_72, var_64, var_56)
    OP_JZER lab_6C5C0
    pri = 1;
    OP_JUMP lab_6C5C8
// lab_6C5C0
    pri = 0;
// lab_6C5C8
    OP_JZER lab_6C6B0
    OP_BREAK 
    var_8 = 0;
    var_16 = 0;
    var_24 = 0;
    var_32 = 128;
    var_40 = 0;
    var_48 = 40;
    pri = fun_0010(var_40, var_32, var_24, var_16, var_8)
    OP_JZER lab_6C6B0
    OP_BREAK 
    var_56 = 2;
    var_64 = 8;
    pri = fun_00B8(var_56)
    OP_BREAK 
    pri = 0;
    return pri;
// lab_6C6B0
    pri = 0;
    return pri;
}
