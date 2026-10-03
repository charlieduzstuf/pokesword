# Layout recovery: what static analysis found, and where it stops

This records the state of class-layout recovery after the GOT was recovered, so
the next person does not have to re-derive the negative results. Three of them
are here because each one looked like a positive result first.

## What was recovered

The GOT is now mapped. `tools/got_map.py` finds **29,270 slots**, of which
**18,998** sit in runs with gaps of exactly 8 — a dense array, which is what a
global offset table is. Before this, only 411 slots were "found" and every one of
them was page-aligned, which is the signature of the bug described below.

| tool | gives | count |
|---|---|---|
| `got_map.py` | GOT slot addresses, access widths, referencing functions | 29,270 slots |
| `layout_map.py` | runs of consecutive slots, width purity, confidence | 493 runs, 265 high-confidence, 72 pure-pointer |
| `field_offsets.py` | field offsets on objects reached through the GOT | 147 GOT pages |
| `rtti_names.py` | polymorphic classes with namespaces | 1,873 |
| `rtti_vtables.py` | *(negative — see below)* | 0 vtables |
| `magic_static.py` + `add_handwritten.py` | hand-decompiled verified bodies | 28 |

Field offsets are real structure. GOT page `0x2496000` alone shows 23 distinct
field offsets across 9,193 functions, spanning `+0` to `+2048`, with mixed widths
at unaligned offsets — that is the gflib3 magic-static guard region, and it is the
first time the shape of a global region has been visible.

## Three negative results, each found by checking

**1. No DT_RELA, so no static relocation.** NSO modules carry no ELF relocation
table — confirmed by scanning `.dynamic` for tag 7 and finding nothing. The GOT
slots are all zero in the decrypted file. `tools/nso_reloc.py` was written on the
assumption that `DT_RELA` exists, produced nothing, and was deleted rather than
left in the tree claiming an approach these modules do not use.

**2. Vtables are not recoverable, and RTTI does not rescue them.** 993 RTTI
typeinfo pointers were located in `main`'s `.rodata`, all with the same
surrounding shape:

    +0   typeinfo pointer      (a known class)
    +8   0x238cxxx             (points into .data)
    +16  0x0000000000000403    (0x400 | 3 — a bitfield marker)

That is the SDK's **dynamic_cast / typeid descriptor table**, not a vtable. A
vtable would be `[offset-to-top][typeinfo][vfn0]` with a *code* pointer after the
typeinfo; there is none. Measured three independent ways, the longest consecutive
run of code pointers in the read-only data is **1**.

The 993 entries are still worth having — 52 namespaces, `nn::nex` (367),
`SiSDK3` (211), `nn::pia::*` (218), `PPFX` (43) — that is the game's polymorphic
type inventory, which was previously only loose rows in a CSV.

**3. The structures the RTTI table points at are in `.bss`.** Following
`0x238c290` and its neighbours: every word is zero. Those objects are populated by
the SDK's static initialisers during `_start`, which has not run. So the addresses
and the class names are known and the *contents* are not — which is the same
addresses-not-values limit as everywhere else, now pinned to a specific structure.

## The addresses/values distinction

Everything above recovers **where** things are and **how they are accessed**.
Nothing recovers **what is stored there**, because every pointer in these regions
is either zero or a link-time placeholder until the loader runs.

To cross that line you need a relocated image: a memory dump from a running
process, or an emulator that applies relocations and can export memory. On this
machine an emulator is installed and launches, but there
is no game install, and the ROM NCA is card-descriptor form that standard
keycrypto will not decrypt — which is why the decrypted NSOs in `exefs/nso/` were
produced earlier and why the GOT is all zeros.

## The bug that hid all of this

`got_map.py` originally recovered 411 slots, every one page-aligned, and reported
"1,642 candidate global runs" of which every large one turned out to be `.rodata`.

The cause: `ops.split(",")` splits `x8, [x8, #0x5a0]` into **three** fields, so a
`len(parts) != 2` guard silently rejected every GOT access carrying a
displacement. Only `ldr x8, [x8]` — no displacement — survived, and those are the
page-aligned ones. The project already had the correct bracket-aware splitter in
`tools/straight_line.py`; the GOT scanner had reimplemented it wrong.

The lesson generalises: **a filter that does not exclude what it claims to exclude
produces confident nonsense.** The tell was that the "objects" were implausibly
large — 3,240-byte and 3,616-byte structs that were string pools.
