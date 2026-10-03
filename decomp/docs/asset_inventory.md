# Pokemon Sword — asset / RomFS inventory

Source: decrypted `romfs.bin` (9.48 GiB, 42,693 entries), read with
`tools/romfs_extract.py`. Full listing methodology: `romfs_extract.py list`.

## Top-level layout

Only two roots: `bin/` (game data, 42,677 entries) and `system_resource/`
(shaders/textures, 16 entries).

| dir | entries | contents |
|---|---|---|
| bin/message | 18,641 | localized text (`.dat` message archives) |
| bin/archive | 6,291 | `.gfpak` packs (field/area textures, demos, pokemon, chara) |
| bin/battle | 4,186 | battle data tables, AI scripts, waza models |
| bin/appli | 3,519 | UI layouts, icons, boot/credit movie |
| bin/pml | 3,221 | personal/learnset tables (`.tbl`) |
| bin/misc | 2,082 | misc tables |
| bin/field | 1,153 | Wild Area / route geometry + encount tables |
| bin/sound | 1,151 | Wwise banks (`.bnk`), Stream.pck 671 MB, `.wav` |
| bin/trainer | 854 | trainer models + messages |
| bin/script | 704 | Pawn `.amx` event scripts (see `decomp/script/`) |
| bin/demo | 506 | camera/demo timelines (`.prmb`, `res/`) |
| bin/trainer_msg | 317 | trainer message data |
| bin/graphics | 19 | |
| bin/font | 10 | `.bffnt`/`.bfotf` |
| bin/flagwork | 8 | story flag definitions |
| bin/script_event_data | 6 | |
| bin/pokecamp | 5 | curry/camp data |
| bin/pokemon | 4 | |

## Notable extensions

`.dat` 9419 (message + misc tables), `.tbl` 9308 (pml/misc flat tables),
`.gfpak` 6247 (resource packs), `.bin` 4949, `.bntx` 2580 (textures),
`.bseq` 1219, `.bnk` 1146 (Wwise), `.wav` 888, `.wazabin` 797 (move data),
`.gfbmdl` 728 (models), `.amx` 691 (Pawn scripts), `.arc` 680,
`.gfbcam(a)` ~1180 (cameras), `.ptcl` 450 (particles), `.gfbanm(cfg)` ~637
(animations), `.bnsh(_vsh/_fsh)` (shaders), `.gfbbt` 50, `.prmb` 37,
`.blua` 1, `.pck` 1.

## `.prmb` spot check (bin/battle/data_table)

`poke_data.prmb` (1.18 MB), `trainer_data.prmb` (423 KB),
`battle_wazamsg.prmb`, `battle_talk.prmb`, `battle_misc.prmb`,
`battle_effect.prmb`, `background.prmb`. Headers are offset tables of
32-bit RVAs (e.g. `54 66 0b 00` …), i.e. packed struct arrays, not Pawn
bytecode. Deep format RE is deferred: the community
`jayztemplier/swordshield-data` repo already publishes these tables as
parsed JSON, which is the authoritative reference for data semantics;
this decomp focuses on code.

## Biggest files

Stream.pck (671 MB, audio), staff.mp4 (127 MB), field texture `.gfpak`s
(33–67 MB each), Common.bnk (23 MB).
