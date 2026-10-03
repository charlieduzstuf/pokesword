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
    var_8 = arg_1;
    pri = GetFnvHash64(var_8)
    var_16 = pri;
    var_24 = arg_0;
    pri = FadeIn_(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0198
fun_0198() {
    var_8 = arg_3;
    var_16 = arg_2;
    var_24 = arg_1;
    pri = GetFnvHash64(var_24)
    var_32 = pri;
    var_40 = arg_0;
    pri = FadeOut_(var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0208
fun_0208() {
    OP_JUMP lab_0220
// lab_0220
    pri = FadeWait_()
    OP_JZER lab_0258
    pri = 0;
    return pri;
// lab_0258
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0220
    pri = 0;
    return pri;
}
// fun_0298
fun_0298() {
    pri = FadeCheckOut_()
    return pri;
}
// fun_02C0
fun_02C0() {
    var_8 = arg_8;
    var_16 = arg_5;
    var_24 = arg_4;
    var_32 = arg_7;
    var_40 = arg_6;
    var_48 = arg_3;
    var_56 = 0;
    pri = float(var_56)
    var_64 = pri;
    var_72 = arg_2;
    var_80 = arg_1;
    var_88 = arg_0;
    pri = MapChangeCore_(var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32, var_24, var_16)
    pri = 0;
    return pri;
}
// fun_0360
fun_0360() {
    pri = DisplayPlaceName_()
    pri = 0;
    return pri;
}
// fun_0390
fun_0390() {
    OP_CONST_S -8, 3600
    OP_ZERO_P_S -16
    OP_JUMP lab_03D8
// lab_03D8
    var_8 = arg_0;
    pri = SoundIsPlaying(var_8)
    OP_JNZ lab_0418
    OP_JUMP lab_0488
// lab_0418
    OP_INC_P_S -16
    OP_LOAD_S_BOTH -16, -8
    OP_JSLESS lab_0458
    OP_JUMP lab_0488
// lab_0458
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_03D8
// lab_0488
    pri = 0;
    return pri;
}
// fun_04A0
fun_04A0() {
    var_8 = arg_0;
    pri = AddFieldObject_(var_8)
    return pri;
}
// fun_04D0
fun_04D0() {
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_0508
// lab_0508
    var_8 = 0;
    pri = fun_0650()
    OP_JNZ lab_0540
    OP_JUMP lab_0570
// lab_0540
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0508
// lab_0570
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_JUMP lab_05A0
// lab_05A0
    pri = WaitForAddingFieldObject_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_05E0
    pri = 0;
    return pri;
// lab_05E0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_05A0
    pri = 0;
    return pri;
}
// fun_0620
fun_0620() {
    var_8 = arg_0;
    pri = DeleteFieldObject_(var_8)
    return pri;
}
// fun_0650
fun_0650() {
    pri = IsFieldObjectTerminating_()
    return pri;
}
// fun_0678
fun_0678() {
    var_8 = arg_0;
    pri = ResetPhysX_(var_8)
    pri = 0;
    return pri;
}
// fun_06B0
fun_06B0() {
    var_8 = arg_0;
    pri = IsExistAnimationComponent_(var_8)
    OP_JNZ lab_06F8
    pri = 0;
    return pri;
// lab_06F8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0060(var_8)
    OP_ZERO_P_S -8
    OP_JUMP lab_0738
// lab_0738
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_0928(var_8)
    OP_JNZ lab_07C0
    var_24 = arg_0;
    pri = IsEndCharacterMotion_(var_24)
    OP_JZER lab_07B0
    pri = 0;
    return pri;
// lab_07C0
    var_8 = arg_0;
    pri = IsEndPokemonMotion_(var_8)
    OP_JZER lab_0808
    pri = 0;
    return pri;
// lab_0808
    OP_INC_P_S -8
    pri = var_8;
    alt = 300;
    OP_JSLEQ lab_0868
    var_8 = arg_0;
    var_16 = 8;
    pri = fun_08B0(var_8)
    pri = 0;
    return pri;
// lab_0868
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0738
    pri = 0;
    return pri;
// lab_07B0
    OP_JUMP lab_0808
}
// fun_08B0
fun_08B0() {
    var_8 = arg_0;
    pri = ResetAnimationState_(var_8)
    pri = 0;
    return pri;
}
// fun_08E8
fun_08E8() {
    var_8 = arg_1;
    var_16 = arg_0;
    pri = DisableFieldObjectLookAt_(var_16, var_8)
    pri = 0;
    return pri;
}
// fun_0928
fun_0928() {
    var_8 = arg_0;
    pri = IsPokemonObject(var_8)
    return pri;
}
// fun_0958
fun_0958() {
    OP_JUMP lab_0970
// lab_0970
    pri = arg_0;
    OP_EQ_P_C_PRI 2
    OP_JZER lab_0A00
    pri = IsPlayerRideBicycle()
    OP_JNZ lab_09F0
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06B0(var_8)
    pri = 0;
    return pri;
// lab_0A00
    pri = arg_0;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_0A90
    pri = IsPlayerRideBicycle()
    OP_JZER lab_0A80
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06B0(var_8)
    pri = 0;
    return pri;
// lab_0A90
    pri = 0;
    return pri;
// lab_0A80
    OP_JUMP lab_0AA0
// lab_0AA0
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_0970
    pri = 0;
    return pri;
// lab_09F0
    OP_JUMP lab_0AA0
}
// fun_0AE0
fun_0AE0() {
    var_8 = 8802641224559852288;
    var_16 = 8;
    pri = fun_06B0(var_8)
    var_24 = arg_1;
    var_32 = arg_0;
    pri = RequestPlayerRideBicycle(var_32, var_24)
    var_40 = arg_0;
    var_48 = 8;
    pri = fun_0958(var_40)
    pri = 0;
    return pri;
}
// fun_0B68
fun_0B68() {
    var_8 = arg_0;
    pri = SetInshadeClearMasterFlag_(var_8)
    pri = 0;
    return pri;
}
// fun_0BA0
fun_0BA0() {
    pri = SetNPCAngleDefaultAll()
    return pri;
}
// fun_0BC8
fun_0BC8() {
    var_8 = arg_0;
    pri = HideSymbolPokemon_(var_8)
    pri = 0;
    return pri;
}
// fun_0C00
fun_0C00() {
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
// switch_1218
        case default:
        {
// switch_1218_case_default
            pri = arg_2;
            var_40 = pri;
            OP_JUMP lab_1260
// lab_1260
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
            OP_JNZ lab_1308
            var_88 = 0;
            pri = fun_13D8()
// lab_1308
            pri = 0;
            return pri;
        }
        case 0x64:
        {
// switch_1218_case_0x64
            pri = arg_3;
            switch (pri) {
// switch_0E00
                case default:
                {
// switch_0E00_case_default
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E78
// lab_0E78
                    OP_JUMP lab_1260
                }
                case 0x0:
                {
// switch_0E00_case_0x0
                    OP_CONST_S -40, 32
                    OP_JUMP lab_0E78
                }
                case 0x1:
                {
// switch_0E00_case_0x1
                    OP_CONST_S -40, 30
                    OP_JUMP lab_0E78
                }
                case 0x2:
                {
// switch_0E00_case_0x2
                    OP_CONST_S -40, 31
                    OP_JUMP lab_0E78
                }
                case 0x3:
                {
// switch_0E00_case_0x3
                    OP_CONST_S -40, 35
                    OP_JUMP lab_0E78
                }
                case 0x4:
                {
// switch_0E00_case_0x4
                    OP_CONST_S -40, 33
                    OP_JUMP lab_0E78
                }
                case 0x5:
                {
// switch_0E00_case_0x5
                    OP_CONST_S -40, 34
                    OP_JUMP lab_0E78
                }
            }
        }
        case 0x65:
        {
// switch_1218_case_0x65
            pri = arg_3;
            switch (pri) {
// switch_0FB8
                case default:
                {
// switch_0FB8_case_default
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1030
// lab_1030
                    OP_JUMP lab_1260
                }
                case 0x0:
                {
// switch_0FB8_case_0x0
                    OP_CONST_S -40, 38
                    OP_JUMP lab_1030
                }
                case 0x1:
                {
// switch_0FB8_case_0x1
                    OP_CONST_S -40, 36
                    OP_JUMP lab_1030
                }
                case 0x2:
                {
// switch_0FB8_case_0x2
                    OP_CONST_S -40, 37
                    OP_JUMP lab_1030
                }
                case 0x3:
                {
// switch_0FB8_case_0x3
                    OP_CONST_S -40, 41
                    OP_JUMP lab_1030
                }
                case 0x4:
                {
// switch_0FB8_case_0x4
                    OP_CONST_S -40, 39
                    OP_JUMP lab_1030
                }
                case 0x5:
                {
// switch_0FB8_case_0x5
                    OP_CONST_S -40, 40
                    OP_JUMP lab_1030
                }
            }
        }
        case 0x66:
        {
// switch_1218_case_0x66
            pri = arg_3;
            switch (pri) {
// switch_1170
                case default:
                {
// switch_1170_case_default
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11E8
// lab_11E8
                    OP_JUMP lab_1260
                }
                case 0x0:
                {
// switch_1170_case_0x0
                    OP_CONST_S -40, 63
                    OP_JUMP lab_11E8
                }
                case 0x1:
                {
// switch_1170_case_0x1
                    OP_CONST_S -40, 64
                    OP_JUMP lab_11E8
                }
                case 0x2:
                {
// switch_1170_case_0x2
                    OP_CONST_S -40, 65
                    OP_JUMP lab_11E8
                }
                case 0x3:
                {
// switch_1170_case_0x3
                    OP_CONST_S -40, 60
                    OP_JUMP lab_11E8
                }
                case 0x4:
                {
// switch_1170_case_0x4
                    OP_CONST_S -40, 61
                    OP_JUMP lab_11E8
                }
                case 0x5:
                {
// switch_1170_case_0x5
                    OP_CONST_S -40, 62
                    OP_JUMP lab_11E8
                }
            }
        }
    }
}
// fun_1320
fun_1320() {
    var_8 = 0;
    var_16 = 0;
    var_24 = arg_2;
    var_32 = arg_3;
    var_40 = arg_1;
    var_48 = arg_0;
    var_56 = 0;
    var_64 = 56;
    pri = fun_0C00(var_56, var_48, var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_1388
fun_1388() {
    var_8 = arg_2;
    var_16 = arg_1;
    var_24 = 102;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_1320(var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_13D8
fun_13D8() {
    OP_JUMP lab_13F0
// lab_13F0
    pri = IsMsgWinEnd_()
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1430
    pri = 0;
    return pri;
// lab_1430
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_13F0
    pri = 0;
    return pri;
}
// fun_1470
fun_1470() {
    var_8 = 0;
    pri = fun_13D8()
    var_16 = 1;
    pri = ShowMsgWinCursor_(var_16)
    pri = ABKeyWait_()
    var_24 = 0;
    pri = ShowMsgWinCursor_(var_24)
    pri = arg_0;
    OP_JZER lab_1520
    var_32 = 32;
    pri = SoundPostEvent(var_32)
// lab_1520
    pri = 0;
    return pri;
}
// fun_1530
fun_1530() {
    pri = MsgWinClose()
    pri = 0;
    return pri;
}
// fun_1560
fun_1560() {
    var_8 = arg_0;
    pri = PlayCutScene_(var_8)
    pri = 0;
    return pri;
}
// fun_1598
fun_1598() {
    OP_JUMP lab_15B0
// lab_15B0
    pri = EvCameraMoveWait_()
    OP_JZER lab_15E8
    pri = 0;
    return pri;
// lab_15E8
    var_8 = 1;
    var_16 = 8;
    pri = fun_0008(var_8)
    OP_JUMP lab_15B0
    pri = 0;
    return pri;
}
// fun_1628
fun_1628() {
    pri = 208;
    OP_ADDR_ALT -920
    OP_MOVS 920
    OP_CONST_S -928, 115
    OP_ZERO_P_S -936
    OP_JUMP lab_16B0
// lab_16B0
    OP_LOAD_S_BOTH -936, -928
    OP_JSGEQ lab_1830
    pri = arg_0;
    var_8 = pri;
    OP_ADDR_P_ALT -920
    pri = var_936;
    OP_LIDX_P_B 3
    OP_POP_ALT 
    OP_JNEQ lab_1820
    pri = arg_0;
    OP_EQ_P_C_PRI 3165
    OP_JNZ lab_1770
    pri = arg_0;
    OP_EQ_P_C_PRI 3180
    OP_JNZ lab_1770
    pri = 0;
    OP_JUMP lab_1778
// lab_1830
    pri = 0;
    return pri;
// lab_1820
    OP_JUMP lab_16A8
// lab_16A8
    OP_INC_P_S -936
// lab_1770
    pri = 1;
// lab_1778
    OP_JZER lab_17F0
    pri = RomGetVersion()
    var_944 = pri;
    pri = var_944;
    OP_EQ_P_C_PRI 45
    OP_JZER lab_17E8
    pri = arg_0;
    OP_ADD_P_C 1
    arg_0 = pri;
// lab_17F0
    var_8 = arg_0;
    var_16 = 3438540040113970222;
    pri = WorkSet(var_16, var_8)
// lab_17E8
}
// fun_1850
fun_1850() {
    pri = arg_0;
    OP_MOVE_ALT 
    pri = 0;
    OP_JSGEQ lab_18E8
    var_8 = 1;
    var_16 = 0;
    var_24 = 1128;
    var_32 = arg_0;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
    var_56 = 0;
    pri = fun_0BA0()
// lab_18E8
    pri = arg_4;
    OP_JZER lab_1920
    var_8 = 1;
    var_16 = 8;
    pri = fun_0BC8(var_8)
// lab_1920
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JNZ lab_1978
    pri = arg_1;
    OP_EQ_P_C_PRI 2
    OP_JNZ lab_1978
    pri = 0;
    OP_JUMP lab_1980
// lab_1978
    pri = 1;
// lab_1980
    OP_JZER lab_1A48
    var_8 = 1;
    pri = IsPlayerRideBicycleType(var_8)
    OP_JZER lab_1A48
    var_16 = 0;
    pri = fun_0298()
    OP_JZER lab_1A20
    var_24 = 1;
    var_32 = 2;
    var_40 = 16;
    pri = fun_0AE0(var_32, var_24)
    OP_JUMP lab_1A48
// lab_1A48
    pri = arg_2;
    OP_JZER lab_1B20
    var_8 = 0;
    pri = fun_0298()
    OP_JZER lab_1AF0
    var_16 = 1;
    var_24 = 8802641224559852288;
    var_32 = 16;
    pri = fun_08E8(var_24, var_16)
    var_40 = 8802641224559852288;
    var_48 = 8;
    pri = fun_0678(var_40)
    OP_JUMP lab_1B20
// lab_1B20
    pri = arg_3;
    OP_JZER lab_1B58
    var_8 = 1;
    var_16 = 8;
    pri = fun_0B68(var_8)
// lab_1B58
    pri = 0;
    return pri;
// lab_1AF0
    var_8 = -1;
    var_16 = 8802641224559852288;
    var_24 = 16;
    pri = fun_08E8(var_16, var_8)
// lab_1A20
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_0AE0(var_16, var_8)
}
// fun_1B68
fun_1B68() {
    pri = arg_0;
    alt = 2;
    OP_JEQ lab_1CE8
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1C00
    var_8 = 1;
    var_16 = 0;
    var_24 = 1128;
    var_32 = 8;
    var_40 = 32;
    pri = fun_0198(var_32, var_24, var_16, var_8)
    var_48 = 0;
    pri = fun_0208()
// lab_1CE8
    pri = PokePartyRecoverAll()
    pri = PokeBoxRecover()
    pri = 0;
    return pri;
// lab_1C00
    pri = arg_0;
    OP_JNZ lab_1C48
    var_8 = 1176;
    pri = SoundPostEvent(var_8)
    OP_JUMP lab_1C68
// lab_1C48
    var_8 = 1352;
    pri = SoundPostEvent(var_8)
// lab_1C68
    var_8 = 0;
    var_16 = 8;
    pri = fun_0390(var_8)
    pri = arg_1;
    OP_EQ_P_C_PRI 1
    OP_JZER lab_1CE8
    var_24 = 1616;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
}
// fun_1D28
fun_1D28() {
    var_8 = arg_0;
    var_16 = 6910712898869243;
    pri = WorkSet(var_16, var_8)
    var_24 = arg_0;
    var_32 = 8;
    pri = fun_1628(var_24)
    pri = 0;
    return pri;
}
// fun_1D90
fun_1D90() {
    pri = g_mode;
    switch (pri) {
// switch_1E50
        case default:
        {
// switch_1E50_case_default
            pri = CommandNOP()
            OP_JUMP lab_1E98
// lab_1E98
            pri = 0;
            return pri;
        }
        case 0x0:
        {
// switch_1E50_case_0x0
            var_8 = 0;
            pri = fun_1EA8()
            OP_JUMP lab_1E98
        }
        case 0x6187050f09cf4f92:
        {
// switch_1E50_case_0x6187050f09cf4f92
            var_8 = 0;
            pri = fun_26B8()
            OP_JUMP lab_1E98
        }
        case 0x7f52ef129420207e:
        {
// switch_1E50_case_0x7f52ef129420207e
            var_8 = 0;
            pri = fun_25B0()
            OP_JUMP lab_1E98
        }
    }
}
// fun_1EA8
fun_1EA8() {
    pri = 0;
    return pri;
}
// fun_1EC0
fun_1EC0() {
    pri = EvCameraStart()
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 0;
    var_32 = 4631952216750555136;
    var_40 = 0;
    OP_PUSH5_C 4666242411008098304, 4655246030291966362, 4661893699583732613, 4666570070970733691, 4655118223060353679
    var_48 = 4661491311313315430;
    var_56 = 1;
    pri = EvCameraMove(var_56, var_48, var_40, var_32, var_24, var_16, var_8, var_0, var_-8, var_-16)
    var_64 = 0;
    pri = fun_1598()
    var_72 = 0;
    var_80 = 4631952216750555136;
    var_88 = 2;
    OP_PUSH5_C 4665973976239293071, 4655373001894741934, 4664099209957888492, 4666358371001921700, 4655245414565454807
    var_96 = 4664081606776727798;
    var_104 = 900;
    pri = EvCameraMove(var_104, var_96, var_88, var_80, var_72, var_64, var_56, var_48, var_40, var_32)
    var_112 = 1616;
    var_120 = 8;
    var_128 = 16;
    pri = fun_0138(var_120, var_112)
    var_136 = 0;
    pri = fun_0208()
    var_144 = 30;
    var_152 = 8;
    pri = fun_0060(var_144)
    var_160 = 0;
    pri = fun_0360()
    var_168 = 150;
    var_176 = 8;
    pri = fun_0060(var_168)
    var_184 = 3;
    var_192 = 0;
    var_200 = -5065219294977758799;
    var_208 = 24;
    pri = fun_1388(var_200, var_192, var_184)
    var_216 = 1;
    var_224 = 8;
    pri = fun_1470(var_216)
    var_232 = 0;
    pri = fun_1530()
    var_240 = 1;
    var_248 = 0;
    var_256 = 1128;
    var_264 = 8;
    var_272 = 32;
    pri = fun_0198(var_264, var_256, var_248, var_240)
    var_280 = 0;
    pri = fun_0208()
    var_288 = 3;
    var_296 = 0;
    pri = EvCameraEnd(var_296, var_288)
    var_304 = 0;
    var_312 = 0;
    var_320 = 0;
    var_328 = 0;
    var_336 = 0;
    var_344 = 2214;
    pri = float(var_344)
    var_352 = pri;
    var_360 = 1995;
    pri = float(var_360)
    var_368 = pri;
    OP_PUSH2_C 7866785123243537653, 742287118255506116
    var_376 = 72;
    pri = fun_02C0(var_368, var_360, var_352, var_344, var_336, var_328, var_320, var_312, var_304)
    pri = 0;
    return pri;
}
// fun_2250
fun_2250() {
    var_8 = 1;
    var_16 = 1;
    var_24 = 1;
    var_32 = 1;
    var_40 = 0;
    var_48 = 40;
    pri = fun_1850(var_40, var_32, var_24, var_16, var_8)
    pri = 0;
    return pri;
}
// fun_22A8
fun_22A8() {
    var_8 = -6123113357586276550;
    var_16 = 8;
    pri = fun_04A0(var_8)
    var_24 = -6123123253190930449;
    var_32 = 8;
    pri = fun_04A0(var_24)
    var_40 = -1554014642428341586;
    var_48 = 8;
    pri = fun_04A0(var_40)
    pri = 0;
    return pri;
}
// fun_2338
fun_2338() {
    var_8 = 0;
    pri = fun_04D0()
    var_16 = 15;
    var_24 = 8;
    pri = fun_0060(var_16)
    OP_PUSH2_C -1554014642428341586, -7351424554777745992
    pri = SetBamiriInfoToChara(var_24, var_16)
    pri = 0;
    return pri;
}
// fun_23B8
fun_23B8() {
    var_8 = 0;
    var_16 = 2;
    var_24 = 16;
    pri = fun_1B68(var_16, var_8)
    var_32 = 1664;
    var_40 = 8;
    pri = fun_1560(var_32)
    pri = 0;
    return pri;
}
// fun_2418
fun_2418() {
    pri = 0;
    return pri;
}
// fun_2430
fun_2430() {
    var_8 = -1554014642428341586;
    var_16 = 8;
    pri = fun_0620(var_8)
    var_24 = -6123123253190930449;
    var_32 = 8;
    pri = fun_0620(var_24)
    var_40 = -6123113357586276550;
    var_48 = 8;
    pri = fun_0620(var_40)
    var_56 = 2030;
    var_64 = 8;
    pri = fun_1D28(var_56)
    var_72 = 20;
    var_80 = -7727870117976650933;
    pri = WorkSet(var_80, var_72)
    var_88 = 7486487997080519139;
    pri = FlagSet(var_88)
    pri = 0;
    return pri;
}
// fun_2538
fun_2538() {
    var_8 = 15;
    var_16 = 8;
    pri = fun_0060(var_8)
    var_24 = 1616;
    var_32 = 8;
    var_40 = 16;
    pri = fun_0138(var_32, var_24)
    var_48 = 0;
    pri = fun_0208()
    pri = 0;
    return pri;
}
// fun_25B0
fun_25B0() {
    var_8 = 0;
    pri = fun_1EC0()
    pri = CommandNOP()
    var_16 = 0;
    pri = fun_2250()
    var_24 = 0;
    pri = fun_22A8()
    var_32 = 0;
    pri = fun_2338()
    var_40 = 0;
    pri = fun_23B8()
    var_48 = 0;
    pri = fun_2418()
    var_56 = 0;
    pri = fun_2430()
    var_64 = 0;
    pri = fun_2538()
    pri = CommandNOP()
    pri = 0;
    return pri;
}
// fun_26B8
fun_26B8() {
    var_8 = 0;
    pri = fun_22A8()
    var_16 = 0;
    pri = fun_2430()
    pri = 0;
    return pri;
}
