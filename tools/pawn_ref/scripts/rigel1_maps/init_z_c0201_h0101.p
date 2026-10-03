#include "lib/std.inc"

main()
{
    switch (g_mode) {
        case 0:
            fun_00E8()
        case 1:
            fun_0118()
        default:
            CommandNOP()
    }
}

fun_00E8()
{
    CommandNOP();
}

fun_0118()
{
    return 0;
}
