#!/usr/bin/env python3
"""Verify a single hand-written function body against the original.

Why this exists
---------------
`match_harness.py` and `auto_match.py` test *generated* bodies: they build a
candidate from one of nine instruction shapes and check it. That is the wrong
instrument for a function a human has decompiled by hand, which is how every
function that is not one of those shapes has to be finished -- the 40-odd
gflib3 magic-static initialisers, the PhysX allocator constructors, anything
with a real algorithm in it.

Those bodies cannot be expressed as a shape, and writing a throwaway verification
loop for each one means re-deriving the comparison rules every time. This tool
takes the job over:

    python tools/verify_one.py <module> <hex-address> <source.cpp>

It compiles `source.cpp` for aarch64-none-elf under the project's flags, finds
the symbol for the function it defines, and compares it instruction-for-instruction
with the original at that address -- the same `match_harness.compare` the
generated path uses, so a pass here means exactly what a pass there means.

Both sides are rendered by the same disassembler. The original is read from
`data/<module>.elf`; the candidate from its own object file. Branch targets are
checked against relocation records rather than ignored, so a tail call has to
actually go where the original goes.

What "pass" does not mean
-------------------------
Passing means the instruction sequences agree. It does not mean the source is
what the original author wrote -- `asm("")` barriers, cached pointers and
reordered statements all preserve the bytes while changing the source. A
function that needs a barrier to match should say so in a comment, because the
next person to read it will otherwise assume the C++ is idiomatic.

Usage:
    python tools/verify_one.py main 0x1ce0 body.cpp
    python tools/verify_one.py main 0x1ce0 body.cpp --symbol my_ns::my_fn
    python tools/verify_one.py main 0x1ce0 body.cpp --asm     # show both
"""

import argparse
import os
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402


def original_instructions(module, addr):
    """(instructions, end_address) for the original function at `addr`."""
    import capstone
    md = MH._md()
    blob = MH.text_blob(module)
    size = None
    for a, s, _n, _m in MH.load_functions(module):
        if a == addr:
            size = s
            break
    if size is None:
        raise SystemExit("no function at %s+0x%x in %s" % (module, addr, module))
    raw = blob[addr:addr + size]
    ins = list(md.disasm(raw, addr))
    # effective_end returns an instruction *index*, not an address, and it
    # expects the untrimmed list -- it is the thing doing the trimming.
    end = MH.effective_end(ins, size)
    return ins, end, raw


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("address", help="hex address in the original, e.g. 0x1ce0")
    ap.add_argument("source", help=".cpp file containing the candidate body")
    ap.add_argument("--symbol", default=None,
                    help="mangled symbol to compare; default is the only "
                         "function defined in the file")
    ap.add_argument("--asm", action="store_true",
                    help="print both instruction listings")
    a = ap.parse_args()

    addr = int(a.address, 16)
    orig_ins, orig_end, _raw = original_instructions(a.module, addr)

    with tempfile.TemporaryDirectory() as td:
        obj = os.path.join(td, "cand.o")
        # Compile the file verbatim, with the harness's own flags so a pass here
        # means what a pass in the generated path means.
        cmd = [MH.tool("clang++")] + MH.CFLAGS + [a.source, "-c", "-o", obj]
        p = subprocess.run(cmd, capture_output=True, text=True)
        if p.returncode != 0:
            print("COMPILE FAILED:\n%s" % p.stderr[:4000])
            return 1
        if p.stderr.strip():
            for line in p.stderr.splitlines():
                if "warning" in line:
                    print("  warn: %s" % line.strip())

        syms = MH.obj_symbols(obj)
        # obj_symbols returns {name: (addr, size)} with no type letter, so a
        # file-level `static` shows up alongside the function. Pick the symbol
        # that actually has code in .text -- which is exactly the function, and
        # excludes the file-local statics the candidate declares.
        if a.symbol:
            syms = {k: v for k, v in syms.items() if k == a.symbol}
        if not syms:
            print("no symbol found in %s" % a.source)
            return 1
        dumped = MH.obj_text_range(obj, syms, set(syms))
        with_code = sorted(n for n, b in dumped.items() if b)
        if not with_code:
            print("no function with code in %s" % a.source)
            return 1
        if len(with_code) > 1:
            print("file defines %d functions; pass --symbol:\n  %s"
                  % (len(with_code), "\n  ".join(with_code)))
            return 1
        name = with_code[0]
        code = dumped[name]

    mine_ins = list(MH._md().disasm(code, 0))
    verdict, why = MH.compare(orig_ins, orig_end, mine_ins)

    print()
    print("original : %s+0x%x  %d instruction(s), %d effective"
          % (a.module, addr, len(orig_ins), orig_end))
    print("candidate: %d instruction(s), %d bytes"
          % (len(mine_ins), len(mine_ins) * 4))

    if a.asm:
        print()
        print("%-10s %-34s | %s" % ("addr", "original", "candidate"))
        print("-" * 92)
        for i in range(max(len(orig_ins), len(mine_ins))):
            o = orig_ins[i] if i < len(orig_ins) else None
            m = mine_ins[i] if i < len(mine_ins) else None
            # capstone hands back a bytearray; .hex() wants bytes.
            fmt = lambda x: "%-8s  %s %s" % (
                bytes(x.bytes).hex(), x.mnemonic, x.op_str)  # noqa: E731
            print("%-10s %-34s | %s"
                  % (("%x" % o.address) if o else "",
                     fmt(o) if o else "",
                     fmt(m) if m else ""))

    print()
    if verdict == "match":
        print("MATCH  -- %s" % why)
        return 0
    print("NO MATCH: %s" % why)
    return 1


if __name__ == "__main__":
    sys.exit(main())
