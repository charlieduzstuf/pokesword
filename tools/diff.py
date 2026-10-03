#!/usr/bin/env python3
import argparse
from colorama import Fore, Style
import cxxfilt
import os
import subprocess
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import diff_settings  # noqa: E402
import utils  # noqa: E402

parser = argparse.ArgumentParser(description="Diff assembly")
parser.add_argument(
    "function", help="Name of the function to diff. Pass | to get a WIP function", nargs="?", default="|")
parser.add_argument(
    "--module", "-m", default=None,
    help="NSO module to diff against (rtld, main, sdk, subsdk0, subsdk1). "
         "Addresses are per-module, so this is required for an unambiguous name.")
args, unknown = parser.parse_known_args()

find_wip = args.function == "|"


def find_function_info(name: str):
    module = args.module or utils.selected_module()
    funcs = list(utils.get_functions(module))

    # Cheap exact matches first. The demangling fallback below spawns a
    # subprocess per symbol, so running it over 104,004 functions before trying
    # the obvious exact match makes `diff.py` take hours.
    if find_wip:
        for info in funcs:
            if info.status == utils.FunctionStatus.Wip:
                return info
    for info in funcs:
        if info.decomp_name == name:
            return info
    for info in funcs:
        if info.name == name:
            return info

    # Only now fall back to demangled substring matching, and only over symbols
    # that could plausibly contain the query.
    needle = name.lower()
    for info in funcs:
        if not info.decomp_name:
            continue
        if needle in info.decomp_name.lower() and needle in utils.demangle(
                info.decomp_name).lower():
            return info

    return None


info = find_function_info(args.function)
if info is not None:
    if not info.decomp_name:
        utils.fail(f"{args.function} has not been decompiled")

    # asm-differ reads diff_settings.py from the current working directory and
    # picks the images up from there, so the module choice has to be exported.
    if args.module:
        os.environ["POKESWORD_MODULE"] = args.module

    print(f"diffing: {Style.BRIGHT}{Fore.BLUE}{utils.demangle(info.decomp_name)}{Style.RESET_ALL} {Style.DIM}({info.decomp_name}){Style.RESET_ALL} in {info.module}")
    addr_end = info.addr + info.size
    # asm-differ/diff.py is a Python script; on Windows it needs an interpreter
    # rather than relying on the executable bit and shebang.
    differ = os.path.join("tools", "asm-differ", "diff.py")
    cmd = [sys.executable, differ, "-I", "-e", info.decomp_name,
           "0x%016x" % info.addr, "0x%016x" % addr_end] + unknown

    # asm-differ -> ansiwrap -> `imp`, removed in Python 3.12. tools/py_compat
    # supplies the two functions ansiwrap actually calls.
    env = dict(os.environ)
    compat = os.path.join("tools", "py_compat")
    existing = env.get("PYTHONPATH")
    env["PYTHONPATH"] = compat + (os.pathsep + existing if existing else "")

    # asm-differ pipes its output through `tail -c ...` and then `less`; neither
    # exists on Windows, so tools/shim provides stand-ins.
    shim = os.path.abspath(diff_settings.shim_dir())
    path = env.get("PATH", "")
    env["PATH"] = shim + os.pathsep + path

    rc = subprocess.call(cmd, env=env)
    if rc != 0:
        sys.exit(rc)

    if info.status == utils.FunctionStatus.NonMatching:
        utils.warn(
            f"{info.decomp_name} is marked as non-matching and possibly NOT functionally equivalent")
    elif info.status == utils.FunctionStatus.Equivalent:
        utils.warn(f"{info.decomp_name} is marked as functionally equivalent but non-matching")

else:
    if find_wip:
        utils.fail("no WIP function")

    utils.fail(
        f"unknown function '{args.function}'\nfor constructors and destructors, list the complete object constructor (C1) or destructor (D1)")
