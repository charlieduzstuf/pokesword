# The `.prmb` data tables: what was recovered, and what cannot be

`romfs_out/bin/battle/data_table/*.prmb` — seven files, 2.06 MB. Found by
searching `romfs_out` after the retail NSP turned out to be card-descriptor
form and undecryptable (`decomp/docs/retail_nsp.md`). The NSP was not the only
source of the game's data; it had already been extracted.

| table | bytes | records recovered |
|---|---|---|
| `poke_data.prmb` | 1,183,232 | numeric only, no strings |
| `battle_wazamsg.prmb` | 148,936 | numeric only, no strings |
| `trainer_data.prmb` | 423,264 | 2,628 |
| `background.prmb` | 88,432 | 87 |
| `battle_misc.prmb` | 23,272 | 102 |
| `battle_effect.prmb` | 23,960 | 118 |
| `battle_talk.prmb` | 5,584 | 51 |

**545 distinct Game Freak asset keys, 2,986 occurrences** — recovered as literal
NUL-terminated strings, exact byte matches. `a_btl41_c0201`,
`Play_bgm_or_wn_win05`, `eg_trainer_turn_action01`, `tr0005_00_00`,
`start_cam`, `data:/bin/battle/waza/camera/ballthrow/tr0001_00_ba_ballthrow1_cam.gfbcam`.

## The format is not FlatBuffers, though a vtable is present

All seven files have a FlatBuffers vtable: `vt_len=10, tbl_len=16`, three present
fields, coherent vtable position. Reading them as FlatBuffers produces confident
nonsense, and three separate assumptions caused it.

**1. A vtable was required to be at least as long as its table.** It may be
shorter — a field the builder omitted takes its default and occupies no slot.
The check `vt_len >= tbl_len` rejected all seven files as "not a vtable".

**2. A vtable was assumed to carry type tags.** It carries offsets only. Reading
the low byte of the next slot offset as a type produced `float32` fields holding
1.6e-41 and a `table` field that followed to `None`. This is the same shape as
the `access_width` bug that modelled `mov w0, wzr` as `mov x0, xzr`: every
branch tests for a specific token, and the one unlisted case falls through to a
default that looks reasonable.

**3. A positive soffset was rejected.** `vtable = pos - soffset` is correct for
either sign, and the two largest tables have a positive one — they were the two
that reported `ROOT UNREADABLE`.

The vtable reading is nonetheless *real* structure, and it located something: the
three root fields resolve to ordered, disjoint, length-prefixed regions,
consistently across all seven files.

```
background.prmb   88432 bytes  root@0x10
   f0 field@0x14  stored=12      -> target@0x20     length=1405    end=0x59d
   f1 field@0x18  stored=55320   -> target@0xd830   length=1284    end=0xdd34
   f2 field@0x1c  stored=87540   -> target@0x15610  length=3       end=0x15613
   ordered=True disjoint=True in_file=True
```

But these are **indexes, not payload**. Every one of the 2,986 recovered strings
falls outside all three regions.

## Only one table is a fixed-stride array

Addresses of consecutive keys:

```
battle_talk.prmb      0xd5c 0xd84 0xdac 0xdd4    stride 40
battle_effect.prmb  0x33dc 0x3484 0x352c          stride 168
```

Constant to the byte. So the payload is fixed-size records with inline strings.
Only `battle_talk.prmb` confirms it under the vote test — stride 40, **96% of
adjacent-key gaps**, every key at `record+0`:

```
[   0] @0xd5c  key='tr0005_00_00'   small_u32=0 4 4 12
[   1] @0xd84  key='tr0004_00_01'   small_u32=0 4 4 12
[   2] @0xdac  key='jk0000_00_01'   small_u32=0 4 4 12
[   3] @0xdd4  key='tr0002_00_06'   small_u32=0 4 4 12
```

The other four are **not** single-stride. Keys fall at 22 / 5 / 8 / 21 distinct
record offsets respectively, and the stride vote is weak (20% / 50% / 30% / 24%).
Recorded rather than averaged into a single number: `battle_effect.prmb`'s
runner-up stride of 120 outvoted its 48, and taking either produces nonsense.

## The negative result that closes off string matching

15 of the 545 asset keys appear in `main`'s rodata. Splitting the other 530 on
the last `/` and testing each half separately:

| | count |
|---|---|
| whole path in rodata | 15 |
| basename only | 0 |
| directory only | 0 |
| both halves | 0 |
| neither half | 530 |

**530 of 545 asset paths appear nowhere in `main` — not whole, not by directory,
not by basename.** They are reached by index or hash. No amount of string
matching will name anything through them, and that is worth recording before
more effort is spent on it.

An earlier probe concluded the opposite — "the game composes these keys at
runtime" — on the evidence that 164 keys had *some* matching prefix. The match
was `data`, a four-character generic word present among 15,569 rodata strings,
covering 162 keys. `data` is not evidence of composition. That probe then died on
an unformatted `%d` in its own summary line, which is how a bad number survives:
the script printed a confident claim and crashed before anyone could check it.
Prefixes under six characters are now excluded.

## 15 fabricated names, found and reverted

`tools/prmb_xref.py` mapped four-letter asset-key prefixes to class names and
wrote the results into `data/functions.csv`. It put 15 wrong names into `main`:

```
sub_fbb430 -> Set_Volume_m96_Field_Music     (mentions BGM cues)
sub_7f6540 -> a_btl36_vs02                   (mentions a_btl35_vs01, a neighbour)
```

A function that **mentions** a string is not **named by** it. `sub_7f6540` was
named after a neighbouring key rather than the one present, which is what showed
the rule was not tracking anything real. And `Set_Volume_m96_Field_Music` is the
more dangerous of the two, because it reads like a real decompilation name and
carries no visible tell that it was invented from the body's own strings.

The prefix table could not have worked: `a_` covers audio (`a_bt0110`,
`a_t0301_g0110`), battle animation (`a_btl35_vs01`) and cameras
(`a_c0101_g0210`) alike.

Scope, checked before writing: **all 15 were confirmed absent from the 38,727-name
donor table** (`vendor/pokesword_functions.csv`), so all 15 were fabricated rather
than donated — including the two that looked legitimate. **None of the 15 is in
`data/matched_main.json`**, so no matching work was affected; this was a naming
defect only, and reverting could not regress a verified body.

All 15 reverted to `sub_<addr>`. `propose()` now returns `None` unconditionally,
with the reasoning above in its docstring, and `--apply-names` is retained so the
flag that caused the damage fails visibly rather than being quietly forgotten.

## What is left

Recovering 2,986 asset keys was worth doing. Naming 15 functions after them was
not, and the two have to be kept apart or the first drags the second along — the
same way a good GOT recovery nearly hid behind a filter that was excluding
nothing.

Decoding `poke_data.prmb` (1.18 MB, 1,148,548-element numeric region) and
`trainer_data.prmb` needs the schema. The 54 `.fbs` files in `vendor/pkNX/` cover
`Placement`, `Encounter`, `Archive` and `PokeResource` — **none covers these seven
battle tables**. The keys' structure is visible in the data (`ob0204_00_tr0001_00`
is bank/group/clip), but a width inferred from a stride is a hypothesis, and
labelling one as a field name is how the 15 wrong names happened.