#include "lib/std.inc"

main()
{
    switch (g_mode) {
        case 0x18b948b26a824851:
            fun_0C10()
        case 0x94987878b91b1b11:
            fun_0C28()
        case 0:
            fun_0BF8()
        default:
            CommandNOP()
    }
}

fun_0BF8()
{
    return 0;
}

fun_0C10()
{
    return 0;
}

fun_0C28()
{
    ShowMessageWindow_2(msg_wide_road_rigel2_oldmemo_00, 0, 3);
    FinishMessage(1);
    new response = RequestYesNo(0, 0, 0, 1, 0, 0);
    CloseMessageWindow();
    if (response) {
        ShowMessageWindow_4(msg_wide_road_rigel2_oldmemo_01, 0);
        FinishMessage(1);
        ShowMessageWindow_4(msg_wide_road_rigel2_oldmemo_02, 0);
        FinishMessage(1);
        CloseMessageWindow();
    }
}