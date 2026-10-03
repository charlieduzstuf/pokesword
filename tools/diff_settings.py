#!/usr/bin/env python3
"""asm-differ configuration for Pokemon Sword.

Upstream pokesword points `baseimg` at a single data/main.elf. This project
rebuilds the same kind of ELF for all five NSO modules, and the per-function
sources live under prog/ grouped by subsystem, so the config accepts a module
and resolves paths relative to it.

Select a module with the POKESWORD_MODULE environment variable, or pass
--module to tools/diff.py.
"""

import os

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

# Each module's NX64 build output. asm-differ needs an AArch64 ELF on the
# "my" side, so this points at the matching build (build/), not the host
# verification binaries in build_host/.
MY_IMAGE = {
    "rtld": "build/rtld.elf",
    "main": "build/main.elf",
    "sdk": "build/sdk.elf",
    "subsdk0": "build/subsdk0.elf",
    "subsdk1": "build/subsdk1.elf",
}


def my_image(mod):
    return os.environ.get("MY_IMAGE", MY_IMAGE.get(mod, MY_IMAGE["main"]))


def shim_dir():
    """Directory holding `tail`/`less` stand-ins for the differ's pager."""
    return os.path.join("tools", "shim")


def current_module(args=None):
    """Resolve the module to diff.

    asm-differ passes an argparse Namespace, while tools/diff.py exports the
    choice in the environment, so accept either.
    """
    mod = os.environ.get("POKESWORD_MODULE", "main")
    if args is not None:
        if hasattr(args, "module") and getattr(args, "module"):
            mod = args.module
        else:
            try:
                items = list(args)
            except TypeError:
                items = []
            for i, a in enumerate(items):
                if a in ("--module", "-m") and i + 1 < len(items):
                    mod = items[i + 1]
    return mod if mod in MODULES else "main"


def apply(config, args):
    mod = current_module(args)
    config['arch'] = 'aarch64'
    # NOTE: asm-differ compares machine code, so `myimg` must be an AArch64
    # ELF. The default host verification build in build_host/ produces x86-64
    # PE binaries and cannot be disassembled for comparison; point MY_IMAGE at
    # the NX64 build instead (see README) or override with MY_IMAGE env var.
    # The original, rebuilt from the decrypted NSO by tools/nso_to_elf.py.
    config['baseimg'] = os.path.join('data', '%s.elf' % mod)
    # Our build of the recovered code.
    config['myimg'] = my_image(mod)
    # Recovered declarations are spread over the generated prog/ tree.
    config['source_directories'] = ['prog']
    # Upstream ships a Linux aarch64-none-elf-objdump; use whichever objdump
    # is available so the differ runs on this machine too.
    config['objdump_executable'] = objdump()


def objdump():
    """Pick a disassembler.

    Upstream ships a Linux x86-64 `aarch64-none-elf-objdump`, which cannot run
    on Windows. LLVM's objdump handles aarch64 but spells `--disassemble=SYM`
    as `--disassemble-symbols=SYM`, so tools/objdump_shim.py translates it.
    """
    override = os.environ.get('OBJDUMP')
    if override:
        return override
    if os.name == 'nt':
        shim = os.path.join('tools', 'objdump_shim.cmd')
        if os.path.exists(shim):
            return shim
    bundled = os.path.join('tools', 'aarch64-none-elf-objdump')
    if os.path.exists(bundled) and os.name != 'nt':
        return bundled
    for cand in (r'C:\Users\charl\scoop\apps\llvm\current\bin\llvm-objdump.exe',
                 'llvm-objdump', 'llvm-objdump.exe'):
        if os.path.isfile(cand):
            return cand
    return bundled
