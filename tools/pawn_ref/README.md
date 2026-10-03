# swsh-pawn-decomp
Quick & dirty matching decompilation of Pokemon Sword & Shield's pawn .amx scripts

## Basic Info

``romfs://bin/script/amx/`` should be copied to (merged with) the ``amx`` folder.

``disasm.py`` will disassemble every amx file and output ``.pasm`` files & ``.data.bin`` files to a ``disasm`` directory.
  - .pasm is a made up format containing a representation of the code section of the binary + template info for things like native functions and library imports
  - .data.bin files contain the bytes of the "data" section of an .amx file which is roughly analagous to the .rodata section of elf binaries

``compile.py`` (expects gf-pawncc executable @ gf-pawncc/build/compiler/gf-pawncc) will compile every ``.s`` file in the ``scripts`` directory, output ``.amx``, ``.asm`` (pawncc's intermediate representation), ``.pasm`` and ``.data.bin`` files, diff the ``.pasm`` files with those dumped from the game & compare the hashes of the binary files to ensure the compiled binaries match with the game.

other files are utility libraries/resources for these scripts.
