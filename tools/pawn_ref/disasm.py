"""Disassemble scripts in the amx folder to the disasm folder"""

import glob
from pathlib import Path
from hashlib import sha1
import json
import os
from tqdm import tqdm
from pawn_script import PawnDisassembler

os.makedirs("disasm", exist_ok=True)

file_hashes = {}

for script in tqdm(glob.glob("./amx/*.amx")):
    disassembler = PawnDisassembler(script)
    path = Path(script)
    with open(script, "rb") as f:
        file_hashes[path.name] = sha1(f.read()).hexdigest()
    with open("./disasm/" + path.stem + ".pasm", "w+", encoding="utf-8") as f:
        f.write(disassembler.infodump())
        f.write(disassembler.disasm())
    disassembler.dump_data(f"./disasm/{path.stem}.data.bin")

with open("file_hashes.json", "w+", encoding="utf-8") as f:
    json.dump(dict(sorted(file_hashes.items())), f)
