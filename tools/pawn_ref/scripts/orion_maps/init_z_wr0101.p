#include "lib/std.inc"

// Places the random fishers, hikers, and breeders around the wild area
PlaceRandomNPCs(should_update_field_objects, should_fade, npc_to_skip)
{
    if (should_fade) {
        FadeOut(8, "BLACK", 0, 1);
        FadeWait();
    }
    new const npcs[50][2] = {
        // Save file flag, FieldObject.UniqueHash
        // (both end up being hashes of the same string)
        {z_wr0102_WR_ANGLER_NPC, z_wr0102_WR_ANGLER_NPC},
        {z_wr0102_WR_ANGLER_NPC_0, z_wr0102_WR_ANGLER_NPC_0},
        {z_wr0102_WR_ARTIST_NPC, z_wr0102_WR_ARTIST_NPC},
        {z_wr0102_WR_LEAGUESTAFFF_NPC, z_wr0102_WR_LEAGUESTAFFF_NPC},
        {z_wr0102_WR_ARTIST_NPC_0, z_wr0102_WR_ARTIST_NPC_0},
        {z_wr0102_WR_LEAGUESTAFFF_NPC_0, z_wr0102_WR_LEAGUESTAFFF_NPC_0},
        {z_wr0103_WR_ARTIST_NPC, z_wr0103_WR_ARTIST_NPC},
        {z_wr0103_WR_ARTIST_NPC_0, z_wr0103_WR_ARTIST_NPC_0},
        {z_wr0103_WR_ANGLER_NPC, z_wr0103_WR_ANGLER_NPC},
        {z_wr0105_WR_ANGLER_NPC, z_wr0105_WR_ANGLER_NPC},
        {z_wr0105_WR_ANGLER_NPC_0, z_wr0105_WR_ANGLER_NPC_0},
        {z_wr0105_WR_LEAGUESTAFFF_NPC, z_wr0105_WR_LEAGUESTAFFF_NPC},
        {z_wr0105_WR_LEAGUESTAFFF_NPC_0, z_wr0105_WR_LEAGUESTAFFF_NPC_0},
        {z_wr0105_WR_ANGLER_NPC_1, z_wr0105_WR_ANGLER_NPC_1},
        {z_wr0106_WR_ANGLER_NPC, z_wr0106_WR_ANGLER_NPC},
        {z_wr0107_WR_LEAGUESTAFFF_NPC, z_wr0107_WR_LEAGUESTAFFF_NPC},
        {z_wr0108_WR_ANGLER_NPC, z_wr0108_WR_ANGLER_NPC},
        {z_wr0108_WR_ARTIST_NPC, z_wr0108_WR_ARTIST_NPC},
        {z_wr0109_WR_LEAGUESTAFFF_NPC, z_wr0109_WR_LEAGUESTAFFF_NPC},
        {z_wr0109_WR_ANGLER_NPC, z_wr0109_WR_ANGLER_NPC},
        {z_wr0110_WR_ANGLER_NPC, z_wr0110_WR_ANGLER_NPC},
        {z_wr0110_WR_ANGLER_NPC_0, z_wr0110_WR_ANGLER_NPC_0},
        {z_wr0121_WR_ANGLER_NPC, z_wr0121_WR_ANGLER_NPC},
        {z_wr0121_WR_LEAGUESTAFFF_NPC, z_wr0121_WR_LEAGUESTAFFF_NPC},
        {z_wr0122_WR_LEAGUESTAFFF_NPC, z_wr0122_WR_LEAGUESTAFFF_NPC},
        {z_wr0122_WR_ARTIST_NPC, z_wr0122_WR_ARTIST_NPC},
        {z_wr0122_WR_LEAGUESTAFFF_NPC_0, z_wr0122_WR_LEAGUESTAFFF_NPC_0},
        {z_wr0122_WR_ARTIST_NPC_0, z_wr0122_WR_ARTIST_NPC_0},
        {z_wr0122_WR_ARTIST_NPC_1, z_wr0122_WR_ARTIST_NPC_1},
        {z_wr0122_WR_LEAGUESTAFFF_NPC_1, z_wr0122_WR_LEAGUESTAFFF_NPC_1},
        {z_wr0122_WR_ANGLER_NPC, z_wr0122_WR_ANGLER_NPC},
        {z_wr0131_WR_ARTIST_NPC, z_wr0131_WR_ARTIST_NPC},
        {z_wr0131_WR_LEAGUESTAFFF_NPC, z_wr0131_WR_LEAGUESTAFFF_NPC},
        {z_wr0131_WR_ARTIST_NPC_0, z_wr0131_WR_ARTIST_NPC_0},
        {z_wr0131_WR_ARTIST_NPC_1, z_wr0131_WR_ARTIST_NPC_1},
        {z_wr0132_WR_ARTIST_NPC, z_wr0132_WR_ARTIST_NPC},
        {z_wr0132_WR_ANGLER_NPC, z_wr0132_WR_ANGLER_NPC},
        {z_wr0132_WR_ARTIST_NPC_0, z_wr0132_WR_ARTIST_NPC_0},
        {z_wr0133_WR_ARTIST_NPC, z_wr0133_WR_ARTIST_NPC},
        {z_wr0133_WR_ANGLER_NPC, z_wr0133_WR_ANGLER_NPC},
        {z_wr0133_WR_LEAGUESTAFFF_NPC, z_wr0133_WR_LEAGUESTAFFF_NPC},
        {z_wr0133_WR_ANGLER_NPC_0, z_wr0133_WR_ANGLER_NPC_0},
        {z_wr0133_WR_LEAGUESTAFFF_NPC_0, z_wr0133_WR_LEAGUESTAFFF_NPC_0},
        {z_wr0134_WR_ARTIST_NPC, z_wr0134_WR_ARTIST_NPC},
        {z_wr0134_WR_LEAGUESTAFFF_NPC, z_wr0134_WR_LEAGUESTAFFF_NPC},
        {z_wr0134_WR_ARTIST_NPC_0, z_wr0134_WR_ARTIST_NPC_0},
        {z_wr0135_WR_LEAGUESTAFFF_NPC, z_wr0135_WR_LEAGUESTAFFF_NPC},
        {z_wr0135_WR_ARTIST_NPC, z_wr0135_WR_ARTIST_NPC},
        {z_wr0136_WR_LEAGUESTAFFF_NPC, z_wr0136_WR_LEAGUESTAFFF_NPC},
        {z_wr0136_WR_ANGLER_NPC, z_wr0136_WR_ANGLER_NPC},
    };
    new npcs_size = sizeof(npcs);
    new max_selectable_npc = 0;
    new attempted_npc_count = 5;
    if (FlagGet(FSYS_GYM_CLEAR_THIRD)) {
        max_selectable_npc = npcs_size;
    } else {
        max_selectable_npc = 22
    }
    new i = 0;
    new spawn_attempt = 0;
    for (i = 0; i < npcs_size; i++) {
        FlagSet(npcs[i][0]);
        if (should_update_field_objects) {
            DeleteFieldObject(npcs[i][1])
        }
    }
    for (i = 0; i < attempted_npc_count; i++) {
        for (spawn_attempt = 0; spawn_attempt < 100; spawn_attempt++) {
            new random_npc = RandMax(max_selectable_npc, false);
            if (VanishFlagGet(npcs[random_npc][0]) && npc_to_skip != npcs[random_npc][1]) {
                FlagReset(npcs[random_npc][0]);
                if (should_update_field_objects) {
                    AddFieldObject(npcs[random_npc][1])
                }
                break;
            }
        }
    }
    if (should_fade) {
        SuspendN(10);
        FadeIn(8, "BLACK");
        FadeWait();
    }
}

RefreshGimmickSpawners()
{
    new const spawners[114] = {
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common_3,
        z_wr0102_SymbolEncountPokemonGimmickSpawner,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0103_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0103_SymbolEncountPokemonGimmickSpawner,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0_0_0,
        z_wr0104_SymbolEncountPokemonGimmickSpawner_0,
        z_wr0104_SymbolEncountPokemonGimmickSpawner,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0102_SymbolEncountPokemonGimmickSpawner_0,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0109_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0109_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0,
        z_wr0109_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0109_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_1,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_Water,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_0_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_0_0,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_0,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_0_1,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_1,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_Common_0_1,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_Water,
        z_wr0105_SymbolEncountPokemonGimmickSpawner,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_0,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_Common_1_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common_Water,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_2,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_1_0_0,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_0_0_0,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_0,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_1_0,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_Water,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_Water_1,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_Common_Water,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0_0,
        z_wr0107_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_Common_4,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common_1_0,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common_1_1,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_Common_3,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_5,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_4,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_3,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_6,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_Common_7,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common_3,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_0,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_1,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_Common_0_1_0,
        z_wr0133_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0133_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0133_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0133_SymbolEncountPokemonGimmickSpawner_WR_Common_3,
        z_wr0133_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0134_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_Common_3,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_Common_0,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_Common_4,
        z_wr0134_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0_0,
        z_wr0134_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0134_SymbolEncountPokemonGimmickSpawner_WR_Common_0_0_0,
        z_wr0134_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common_Water,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common_2,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_Common_1,
    };
    new const postgame_spawners[18] = {
        z_wr0102_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0103_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0104_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0105_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0106_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0107_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0108_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0109_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0110_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0121_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0122_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0131_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0132_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0133_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0134_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0135_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
        z_wr0136_SymbolEncountPokemonGimmickSpawner_WR_GameClear,
    };
    new spawner_count = sizeof(spawners);
    new postgame_count = sizeof(postgame_spawners);
    new i = 0;
    for (i = 0; i < spawner_count; i++) {
        FlagReset(spawners[i]);
    }
    if (RomGetVersion() == GameVersion:Sword) {
        FlagReset(z_wr0103_SymbolEncountPokemonGimmickSpawner_WR_Common);
        FlagReset(z_wr0132_SymbolEncountPokemonGimmickSpawner_2);
    } else {
        FlagReset(z_wr0103_SymbolEncountPokemonGimmickSpawner_WR_Common_1);
        FlagReset(z_wr0132_SymbolEncountPokemonGimmickSpawner);
    }
    if (FlagGet(EF_R2_MEMO_SANCHO_START)) {
        // Galarian Zapdos
        if (!FlagGet(EF_R2_SANDAA_GET)) {
            FlagReset(z_wr01onload_SymbolEncountPokemonGimmickSpawner_WR02_THUNDER);
        }
    }
    if (FlagGet(FSYS_GAME_CLEAR)) {
        for (i = 0; i < postgame_count; i++) {
            FlagReset(postgame_spawners[i]);
        }
    }
}

fun_0D38()
{
   if (RomGetVersion() == GameVersion:Sword) {
        FlagReset(z_wr0107_HiddenItem_K_0);
        FlagReset(z_wr0132_HiddenItem_K_0);
        FlagReset(z_wr0132_HiddenItem_K_0_0);
    } else {
        FlagReset(z_wr0107_HiddenItem_T_0);
        FlagReset(z_wr0132_HiddenItem_T_0);
        FlagReset(z_wr0132_HiddenItem_T_0_0);
   }
}

fun_0E80()
{
   if (!FlagGet(TMFLG_WIDEROAD_DAY_RESET_END)) {
        PlaceRandomNPCs(1, 0, 0);
        CommandNOP();
        RefreshGimmickSpawners();
        fun_0D38();
        FlagSet(TMFLG_WIDEROAD_DAY_RESET_END);
    }
}

main()
{
    switch (g_mode) {
        case 0x0:
            fun_1050()
        case 0x1:
            fun_1098()
        default:
            CommandNOP()
    }
}

fun_1050()
{
    fun_0E80();
    CommandNOP();
}

fun_1098()
{
    if (PlayerGetZoneID() == z_wr0101) {
        if (!FlagGet(FSYS_ARRIVE_WR0101)) {
            FlagSet(FSYS_ARRIVE_WR0101);
        }
    }
}