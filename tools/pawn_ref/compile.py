"""Compiles and disassembles .p files in the scripts directory"""

import subprocess
import os
import hashlib
import json
import glob
from pathlib import Path
from pawn_script import PawnDisassembler

with open("file_hashes.json", "r", encoding="utf-8") as f:
    file_hashes = json.load(f)

os.makedirs("build", exist_ok=True)
os.chdir("build")

paths = glob.glob("../scripts/**/*.p", recursive=True)
for i, full_path in enumerate(paths):
    path = Path(full_path)
    script = path.stem
    src_time = os.path.getmtime(full_path)

    print(f"Compiling {script}.p {i+1}/{len(paths)}")
    # basic modification check to avoid rebuilding
    if not os.path.exists(f"{script}.amx") or (os.path.getmtime(f"{script}.amx") < src_time):
        subprocess.check_call(
            [
                "../gf-pawncc/build/compiler/gf-pawncc",
                full_path,
                "-d0",
                "-i=../scripts/",
                "-a",
                "-S1024",
            ],
        )
        subprocess.check_call(
            [
                "../gf-pawncc/build/compiler/gf-pawncc",
                full_path,
                "-d0",
                "-i../scripts/",
                "-S1024",
            ],
        )

        # location of compiled .amx is either in cwd (correct) or next to the script
        if os.path.exists(full_path.replace(".p", ".amx")):
            subprocess.check_call(["mv", full_path.replace(".p", ".amx"), "."])

            subprocess.check_call(["mv", full_path.replace(".p", ".asm"), "."])

        disasm = PawnDisassembler(f"{script}.amx")
        with open(f"{script}.pasm", "w+", encoding="utf-8") as f:
            f.write(disasm.infodump())
            f.write(disasm.disasm())
        disasm.dump_data(f"{script}.data.bin")

        subprocess.run(
            ["git", "diff", "--no-index", f"../disasm/{script}.pasm", f"{script}.pasm"],
            check=False,
        )

    with open(f"{script}.amx", "rb") as f:
        FILE_HASH = hashlib.sha1(f.read()).hexdigest()

    assert FILE_HASH == file_hashes[f"{script}.amx"], (
        FILE_HASH,
        file_hashes[f"{script}.amx"],
    )

total_scripts = len(file_hashes)
matching_scripts = len(paths)
print(f"{matching_scripts}/{total_scripts} ({matching_scripts/total_scripts*100:.2f}%) decompiled scripts")
