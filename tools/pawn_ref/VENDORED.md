# tools/pawn_ref

Vendored reference for the Pawn bytecode used by the battle scripts.

Originally a git submodule pointing at `swsh-pawn-decomp`, pinned at
`d35b78e854ce97ce6a93e357bc717c890129d4e7`. It was **de-submoduled** on 2026-10-03 for
three reasons, all measured rather than assumed:

1. **The submodule was never declared.** `.gitmodules` listed
   `lib/NintendoSDK` and `tools/asm-differ` -- both of which had already
   been committed as ordinary files (114 and 6 tree entries respectively) -- and
   did **not** list `tools/pawn_ref`, which was the only real gitlink in the
   tree. A clone could not have resolved it.
2. **1,450 lines of local work were uncommitted** inside the submodule:
   `known_strings.json` and `pawn_script.py` modified, `file_hashes.json`
   deleted, `PATCHES.md` untracked. These are the Game Freak opcode patches
   that `tools/pawn_disasm.py` documents as required. None of it was in any
   commit, so every clone lost it.
3. A published fork should be self-contained rather than depending on a
   submodule's availability.

The patch rationale is in `PATCHES.md`. Consumers: `tools/pawn_disasm.py`,
`tools/pawn_emit.py`, `tools/pawn_natives.py` -- all of which address these
files by path under `tools/pawn_ref/` and are unaffected by the change.

## Not vendored: `amx/*.amx`

691 compiled battle scripts are **excluded**, by this directory's own
`.gitignore` (`amx/*.amx`). They are Nintendo's copyrighted bytecode, extracted
from the ROM, and belong in the same category as `exefs/` — regenerable from
your own dump, never tracked.

What *is* vendored is the 266 `.p` source files, the disassembler
(`pawn_script.py`), the name table (`known_strings.json`), the hash
implementation (`fnv.py`), and the patches. So `tools/pawn_disasm.py` has
everything it needs to disassemble, but not the input; extract the `.amx` files
from your own dump first.

## Not vendored: `gf-pawncc`

The original repo declared a second submodule, `gf-pawncc`. It was never
checked out on this machine (0 files), nothing in this project reads it, and its
stale `.gitmodules` entry has been removed rather than left to declare a
submodule that is not carried.
