#!/usr/bin/env python3
import argparse
from colorama import Fore, Style
import diff_settings
import os
import shutil
import subprocess
import sys
import utils

parser = argparse.ArgumentParser(description="Prints build/pokesword.elf symbols")
parser.add_argument("--print-undefined", "-u",
                    help="Print symbols that are undefined", action="store_true")
parser.add_argument("--print-c2-d2", "-c",
                    help="Print C2/D2 (base object constructor/destructor) symbols", action="store_true")
parser.add_argument("--hide-unknown", "-H",
                    help="Hide symbols that are not present in the original game", action="store_true")
parser.add_argument("--all", "-a", action="store_true")
args = parser.parse_args()


listed_decomp_symbols = {info.decomp_name for info in utils.get_functions()}
original_symbols = {info.name for info in utils.get_functions()}

config: dict = dict()
diff_settings.apply(config, {})
myimg: str = config["myimg"]

def find_nm():
    """Locate an `nm` that can read the linked NX64 ELF.

    Was a bare `subprocess.check_output(["nm", myimg])`, which raised
    FileNotFoundError on this machine: the project's toolchain
    (`C:\\llvm-5.0.1\\bin`) ships `llvm-objdump` but no `nm`, and there is no GNU
    `nm` on PATH. `tools/audit.py` already knows this -- it hardcodes the scoop
    LLVM's `llvm-nm.exe` and skips the check when it is absent.

    Resolved in the order that actually works here: the project toolchain via
    `match_harness.tool`, then the scoop LLVM that audit.py uses, then PATH.
    Failing loudly beats a bare WinError 2 from deep inside subprocess, which
    says nothing about which binary was missing or where it was looked for.
    """
    import match_harness as MH
    try:
        return MH.tool("llvm-nm")
    except SystemExit:
        pass
    scoop = os.path.join(r"C:\Users\charl\scoop\apps\llvm\current\bin",
                         "llvm-nm.exe")
    if os.path.isfile(scoop):
        return scoop
    found = shutil.which("nm") or shutil.which("llvm-nm")
    if found:
        return found
    sys.exit("error: no nm found. Looked in %s, %s and on PATH.\n"
             "       tools/audit.py uses the scoop LLVM; install it or set "
             "POKESWORD_CLANG to a toolchain containing llvm-nm."
             % (MH.LLVM_BIN, scoop))


entries = [x.strip().split() for x in subprocess.check_output(
    [find_nm(), myimg], universal_newlines=True).split("\n")]


for entry in entries:
    if len(entry) == 3:
        addr = int(entry[0], 16)
        symbol_type: str = entry[1]
        name = entry[2]

        if (symbol_type == "t" or symbol_type == "T" or symbol_type == "W") and (args.all or name not in listed_decomp_symbols):
            c1_name = name.replace("C2", "C1")
            is_c2_ctor = "C2" in name and c1_name in listed_decomp_symbols and utils.are_demangled_names_equal(
                c1_name, name)

            d1_name = name.replace("D2", "D1")
            is_d2_dtor = "D2" in name and d1_name in listed_decomp_symbols and utils.are_demangled_names_equal(
                d1_name, name)

            if args.print_c2_d2 or not (is_c2_ctor or is_d2_dtor):
                color = Fore.YELLOW
                if name in original_symbols:
                    color = Fore.RED
                elif args.hide_unknown:
                    continue
                if is_c2_ctor or is_d2_dtor:
                    color += Style.DIM
                print(f"{color}UNLISTED {Fore.RESET} {utils.format_symbol_name(name)}")

    elif len(entry) == 2:
        symbol_type = entry[0]
        name = entry[1]

        if symbol_type.upper() == "U" and args.print_undefined:
            print(f"{Fore.CYAN}UNDEFINED{Style.RESET_ALL} {utils.format_symbol_name(name)}")
