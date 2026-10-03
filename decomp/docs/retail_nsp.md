# The retail NSP: what it is, and why it did not unblock the relocated image

`~/Downloads/Pokemon Sword[0100ABF008968000][US][v0].nsp`, 9.53 GB. Found by
searching the machine after an emulator was reported present. Everything below was
established by running the code, not by inference.

## It is the ROM already decompiled

Title id `0100ABF008968000`, US, **v0** — the same build the decrypted NSOs in
`exefs/nso/` came from (`main` buildid `8dafedbb5be81c2c`). So it contains no new
code: the 104,004 `main` functions already extracted are these bytes.

What it does contain that the extraction did not is ~9.5 GB of **assets** —
RomFS, data files, shaders, audio. That is the data layer, and it is a separate
piece of work rather than a way to the relocated image.

## It is card-descriptor form, so it does not decrypt

`tools/nsp_dump.py` reports `header failed` for all five NCAs. Probing that
properly (`work/hand/xts_probe.py`) established why:

- prod.keys loads correctly — `header_key` begins `aeab1ca…`, matching the file
- the XTS tweak convention is **not** the problem: both `be` and `le` produce
  *byte-identical* output, so the multiplier is not being applied differently
- neither convention yields the `NCA3` magic at header offset 0x200

Identical output from both conventions is the tell. The tweak only differs for
sector numbers above zero, and the probe reads sector 0 — so this is consistent
rather than contradictory, and it isolates the failure to the **key**, not the
cipher. A correct key with a wrong multiplier would still have produced a magic
in *one* of the two conventions.

Deriving the card-descriptor key was tried (`work/hand/card_descriptor.py`):

    header_kek = AES-ECB-decrypt(master_key_00, header_kek_source)
               = bc9474c034b89718c8ecd18be61653e1      <- derived successfully
    header_key = AES-ECB-decrypt(header_kek, rights_id[:16] ^ sha256(hks)[:16])

The chain up to `header_kek` works. The last step needs `rights_id`, which lives
at offset 0x222 of the *plaintext* header — and opening the header is what the
key is for. Circular. `rights_id` is only recoverable from the `.cnmt.nca` meta
region, and that NCA will not open either (`906dda2e…` at offset 0, no magic),
because it is card-locked as well. The titlekey candidate read from the `.tik`
at offset 0x180 is unverified and did not resolve it.

**Conclusion:** this NSP cannot be decrypted with the keys available here. That is
the same wall the project hit before, now confirmed from the bytes rather than
assumed.

## The emulator

A Switch emulator (v0.0.10) is installed on this machine. It launches and
responds, and it has a complete `prod.keys` (231 lines) alongside an empty
`dump` directory.

A relocated memory image needs the emulator to load the game, run past static
initialisation, and export process memory. That is GUI interaction plus a memory
export facility — not something that can be driven unattended, and not something
more permissions would provide. The missing thing is an artifact/tooling path,
not a capability.

## What this means for the relocated image

Still blocked, and now with the reason fully characterised rather than assumed:

| route | status |
|---|---|
| static relocation from the NSO | impossible — no `DT_RELA`, GOT slots all zero |
| decrypt the retail NSP | card-descriptor; `rights_id` is unreachable |
| emulator memory dump | needs GUI interaction + export support |

The GOT work stands on its own regardless: `tools/got_map.py` recovers 29,270
slot addresses from the instruction stream, and `tools/field_offsets.py` recovers
field offsets on 147 GOT pages. That is **addresses and shapes**. Values still
need a dump. See `decomp/docs/layout_recovery.md`.

## A side finding worth keeping

The PFS0 header field order is `<IIQII`, not `<IIQQ`. Reimplementing the
partition index with `<IIQQ` produced an `fs_size` of `0x7e3000000000` and all
seven partition names concatenated into one string — a plausible-looking
structure that was entirely wrong. `tools/nsp_dump.py` already had a correct
`parse_pfs0`; the lesson is the ninth instance of the same shape as the nine
silent tool failures already recorded: **a reimplementation that is not checked
against the working one produces confident nonsense.**
