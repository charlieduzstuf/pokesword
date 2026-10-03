# Locating the `.prmb` loaders from the code, not from the bytes

The seven data tables under `romfs_out/bin/battle/data_table/` were read
byte-first: recover strings, look for a stride, guess a record layout. That
produced 545 asset keys and one confirmed stride (`battle_talk.prmb`, 40 bytes,
96% of adjacent-key gaps), and stalled — four of the seven put keys at 22/5/8/21
distinct record offsets, so a single stride is not the shape.

Reading the loader instead is strictly better: **the loader knows the layout
because it fills it.**

## The names are there, but not as standalone literals

`main`'s rodata contains the table names, and the first attempt to find them
failed in an instructive way.

A raw `blob.find(b"poke_data.prmb")` hits at vaddr `0x1ad82b8`. But a scan for
NUL-terminated strings — 1,727,173 of them — finds **zero** standalone matches.
The name is a substring of a longer literal:

```
0x1ad82a2  bin/battle/data_table/poke_data.prmb
0x1b0011e  bin/battle/data_table/trainer_data.prmb
0x1aa6ed2  bin/battle/data_table/battle_wazamsg.prmb
0x1ab13c2  bin/appli/ribbon/data_table/status_ribbon.prmb
0x1ab5000  bin/archive/field/resident/data_table.gfpak
0x1adf3c9  bin/trainer/trainer_data/trainer_data_%03d.bin
```

So the earlier probe's "38 hits for `.prmb`" counted substrings, not strings. A
substring search finds a name and looks like success; it will not survive contact
with a loader that indexes the *string's* address rather than the name's offset.

There are 16 NUL-terminated strings naming a `data_table`, and **13 are
referenced by code** with an exact `adrp` + `add`. Reconstructing the address
rather than matching the page matters: a page match would attribute each string
to every function touching its 4KB page.

## The loaders

| function | tables |
|---|---|
| `sub_e899a0` — **`battle_default_placement_data`** | `trainer_data.prmb`, `poke_data.prmb`, `battle_talk.prmb` |
| `sub_94a120` | `wait_camera.prmb`, `battle_misc.prmb`, `battle_wazamsg.prmb` |
| `sub_e87ca0` | `background.prmb` |
| `sub_e883b0` | `battle_effect.prmb` |
| `sub_e5e490` | `xmenu_timeline.prmb` |
| `sub_a777d0`, `sub_12cabc0` | `status_ribbon.prmb` |
| `sub_ea9720` | `vibration_data_table.prmb` |
| `sub_f1fc50`, `sub_14bd660` | `live_comm_player.prmb` |
| `sub_14afe60` | `live_comm_stamp.prmb` |

`sub_e899a0` is 294 instructions and already carries a donor name,
`battle_default_placement_data`. Its opening:

```
sub  sp, sp, #0x80
stp  x29, x30, [sp, #0x70]
...
adrp x0, #0x1b00000
add  x0, x0, #0x11e
bl   #0x5e20
```

and later, at `0xe89abc`, it materialises `0x1ad82a2` —
`bin/battle/data_table/poke_data.prmb`. So the data-table initialiser is
identified, and its field accesses are where the record layout is readable.

`trainer_data_%03d.bin` is worth following separately: trainers appear to be
loaded per-index as well as from the monolithic table, which is a second, easier
route into trainer records than `trainer_data.prmb`.

## Field offsets, read off the loader

`sub_e899a0` delegates to three callees. Reading their memory accesses gives the
layout directly, which is the whole point of approaching this from the code.

| callee | size | insns | distinct field offsets |
|---|---|---|---|
| `sub_5dd790` | 2368 | 592 | 28 — most common 72, 128, 16, 40, 64, 24, 56, 8 |
| `sub_5e20` | 304 | 76 | 11 — 32, 16, 8, 24, 72, plus 2280/2288/2296 |
| `sub_5e2930` | 648 | 162 | 16 — **32, 48, 64, 80, 96** (a stride-16 run), 8, 128, 224, 232 |

`sub_5e2930`'s stride-16 run is the interesting one. Its full access set:

```
5e296c  ldp  x27, x28, [x20, #0xe0]
5e297c  ldr  x26, [x25, #0xb8]!
5e29f0  ldr  x27, [x20, #0xe0]
5e29f4  str  x27, [x20, #0xe8]
5e2a58  ldr  x8,  [x20, #0xc0]
5e2a68  ldr  x23, [x20, #0xc8]
5e2a6c  ldr  x8,  [x8, #0x820]
5e2a78  ldr  x8,  [x0, #0x80]
5e2a84  str  x23, [x0, x8, lsl #3]
5e2abc  ldr  x8,  [x20, #0xa8]
5e2af0  ldrb w8,  [x20, #0x170]
5e2b08  ldp  x23, x24, [x20, #0xe0]
```

Two objects, two confirmed layouts:

* **placement-data singleton** (base `x20`): fields at `0xa8`, `0xb8`, `0xc0`,
  `0xc8`, `0xe0`, `0xe8`, `0x170`. The `0x170` access is a **byte** read
  (`ldrb`), so that field is a flag or enum, not a pointer.
* **the registered table** (base `x0`): vtable at `0`, a pointer at `8`, and a
  **growable pointer array at `0x80`** — `str x23, [x0, x8, lsl #3]` with `x8`
  loaded from `[x0, #0x80]`, which is a `resize`-then-append.

**Which field is which is not yet known**, and that is the honest limit here. The
offsets are real and they came from the code rather than from a byte histogram,
but naming them needs either the donor's declarations for
`battle_default_placement_data` or more of the call graph. One suggestive detail:
the array at `0x80` is indexed by `lsl #3`, so it holds 8-byte entries — pointers
or `uint64_t`, not the 16-byte-aligned records the offset pattern in
`sub_5dd790` might suggest.



At `0xe899a8` the loader builds a 64-bit constant by `mov`/`movk`:

```
mov  x23, #0x2645
movk x23, #0x8422, lsl #16
movk x23, #0x9ce4, lsl #32
movk x23, #0xcbf2, lsl #48
```

which is `0xcbf29ce484222645` — the FNV-1a 64-bit offset basis
(`0xcbf29ce484222325`) plus `0x320`. That looks exactly like a file magic or a
hash seed, and it is stored next to a string pointer in a struct being built on
the stack, which made "header magic" the obvious reading.

**It is not a file magic.** Searched for it in all seven `.prmb` files, little-
and big-endian, plus the plain FNV basis: **absent from every one.** So it is a
runtime constant — a hash seed, or something unrelated — and the `.prmb` header
still has no identified magic. Recorded because the next person will notice the
same constant and reach for the same conclusion.

## What is now known, and what is not

**Known:** the full resource paths; 13 of 16 table-name strings are referenced by
code; 11 distinct loader functions, named where the donor named them; the
initialiser for the three biggest tables.

**Not known:** the record layouts. That is the next step and it is mechanical —
read the field offsets that `sub_e899a0` uses on the structures it populates,
using the same GOT/field-offset machinery already built (`tools/field_offsets.py`,
147 GOT pages). The loader's accesses *are* the layout; they have just not been
read yet.

**Still blocked on an artifact:** the *values* those layouts describe. Field
offsets and types come from the code; contents come from a relocated image.
