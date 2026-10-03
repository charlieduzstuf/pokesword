#!/usr/bin/env python3
"""objdump compatibility shim: GNU flag spellings -> LLVM.

asm-differ is written against GNU binutils objdump. The only objdump available
here is LLVM's, which understands aarch64 fine but spells a couple of the flags
differently:

    --disassemble=SYM   ->  --disassemble-symbols=SYM

(`--disassemble-symbols` has been verified to work; earlier runs against
`data/main.elf` produced correct per-function output with it.)

Everything else is passed through untouched. Set OBJDUMP to point asm-differ at
this file, or let tools/diff_settings.py find it automatically.
"""

import os
import subprocess
import sys

LLVM_CANDIDATES = [
    r"C:\Users\charl\scoop\apps\llvm\current\bin\llvm-objdump.exe",
    "llvm-objdump",
    "llvm-objdump.exe",
]

TRANSLATE_PREFIX = ("--disassemble=",)


def find_llvm():
    import shutil
    for cand in LLVM_CANDIDATES:
        if os.path.isfile(cand):
            return cand
        found = shutil.which(cand)
        if found:
            return found
    return None


def main(argv):
    llvm = find_llvm()
    if llvm is None:
        print("objdump-shim: no llvm-objdump found", file=sys.stderr)
        return 127

    args = list(argv)
    # A bare `--disassemble` means "all symbols" on both tools; leave it alone.
    args = ["--disassemble-symbols=" + a[len("--disassemble="):]
            if a.startswith(TRANSLATE_PREFIX) else a for a in args]

    return subprocess.call([llvm] + args)


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
