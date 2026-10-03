# ROM, keys, and provenance

> **No key material appears in this repository.** Not in the source, not in the
> docs, not in the history. Keys live only in your local `prod.keys` /
> `title.keys`, which `.gitignore` excludes. If you ever commit one, rotating it
> is the only remediation — deleting the commit does not un-push it.

## Source ROM

`Pokemon Sword[0100ABF008968000][US][v0].nsp` (10,236,786,112 bytes) —
base game, no update. Title ID `0100ABF008968000`.

Note: the NSP's inner entries use card-descriptor form (`Root-CA00000003-`,
`XS00000020`, big-endian title ID at +0x1B0), so stock hactool reports
`Invalid NCA header! Are keys correct?` on it. The decrypted artifacts below
were produced by an external exporter (August 2026 runs) whose key handling
covers this layout.

## Decrypted artifacts (all reused, not re-derived)

These are Nintendo's copyrighted code. **They are not tracked** — `exefs/` is
excluded by `.gitignore`, because it is 5.7 GB of decrypted NSO binaries plus a
third-party block-dispatch tree. Every user regenerates it from their own dump.

- `<user-chosen output dir>/exefs/`
  - `main` (20,454,852), `main.npdm`, `rtld`, `sdk`, `subsdk0`, `subsdk1`
  - `romfs.bin` (10,181,769,972 bytes) — raw decrypted RomFS
    (`header_size == 0x50`), 42,693 entries, read by `tools/romfs_extract.py`
  - `nso/*` and `*/data/*` — the per-instruction block tree this decomp is
    organised from
- The Sword title key is present in the exporter's own title-key file. Its value
  is deliberately not reproduced here; read it from your own dump.

## Key material on this machine

Described, never quoted:

- `prod.keys` (231 lines, 5 identical copies across the machine) — standard
  SDK / application / source keys. `header_key` derivation was verified against
  hactool's `-t keygen` and `generate_kek`. The value is not recorded here.
- `title.keys` (19 entries: Smash, Tomodachi, Wonder, … — no Sword base entry)

## Toolchain

`tools/hactool/hactool.exe` built from upstream `SciresM/hactool` with
clang/MSVC; only additions are `compat/getopt.{c,h}` + `compat/strings.h`
(MSVC lacks both) — rebuild via `tools/build_hactool.ps1`. Disassembly via
capstone 5.0.7, decompression via `lz4`/`zstandard` pip packages,
demangling via `llvm-cxxfilt`.

Note that `hactool.exe` itself is excluded by `.gitignore`; build it from source.