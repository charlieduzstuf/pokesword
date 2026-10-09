"""Feasibility: can the emulator handle a `bl` to a mapped callee?

Gates roughly 25,000 framed bodies -- `call/no-adrp/branch` (17,624) and
`call/no-adrp` (7,490) -- which need nothing more than a frame model (built), a
call (this test), and the callee's bytes reachable.

`bl` is PC-relative, and the harness relocates code to a synthetic base, so the
branch offset has to be rewritten. That is a 26-bit signed word offset:
`imm26 = (target - pc) / 4`, and only the immediate field changes.

`main@0x2560` is the subject:

    stp  x20, x19, [sp, #-0x20]!
    stp  x29, x30, [sp, #0x10]
    add  x29, sp, #0x10
    mov  x19, x1
    mov  x20, x0
    bl   0x65f1b0            ; callee: str x1, [x0, #0x10] ; ret
    str  x19, [x20, #0x88]
    ldp  x29, x30, [sp, #0x10]
    ldp  x20, x19, [sp], #0x20
    ret

The C under test inlines the callee. Inlining is the right shape for the C side:
a call to a namespaced C symbol would need its own relocation, whereas the
behaviour is identical either way and inlining needs nothing.

The control is the same C with the second store's offset changed, which must be
rejected -- a matcher that accepts everything would pass the first test too.
"""

import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH          # noqa: E402
import sem_match as SM              # noqa: E402
from sem_match_selftest import compile_to_bytes   # noqa: E402

CALLER = 0x2560
CALLEE = 0x65F1B0
MODULE = "main"

# Where the relocated callee goes.
#
# A separate region from the caller so a branch out of the caller is visible
# rather than accidentally valid -- and *not* derived from CODE_BASE by an offset
# that happens to land on SCRATCH_BASE. It did: `CODE_BASE + 0x200000` is
# `0x600000`, which is exactly where the scratch object is mapped, and the second
# `mem_map` failed. The map is now checked rather than assumed.
CALLEE_BASE = 0x0070_0000
CALLEE_SIZE = 0x0010_0000

GOOD_C = """
#include <stdint.h>
void wrapper(void* a0, void* a1) {
    *(void**)((char*)a0 + 0x10) = a1;      /* the callee, inlined */
    *(void**)((char*)a0 + 0x88) = a1;
}
"""
BAD_C = GOOD_C.replace("0x88", "0x90")


def patch_bl(code, at, target):
    """Rewrite the `bl` at `at` (a byte offset) to branch to `target`.

    The instruction is one word: bits 31..26 = 100101, bits 25..0 = imm26. Only
    the immediate changes when the code is relocated, which is what makes a
    PC-relative call emulatable at a synthetic base at all.
    """
    word = struct.unpack_from("<I", code, at)[0]
    assert (word >> 26) == 0b100101, "not a bl: %#x" % word
    pc = SM.CODE_BASE + at
    imm = (target - pc) // 4
    assert -(1 << 25) <= imm < (1 << 25), "branch out of range: %d" % imm
    struct.pack_into("<I", code, at, (word & 0xFC000000) | (imm & 0x03FFFFFF))
    return code


def build_orig():
    """Caller bytes with the `bl` retargeted at the relocated callee."""
    funcs = dict((a, (s, n, d)) for a, s, n, d in MH.load_functions(MODULE))
    blob = MH.text_blob(MODULE)
    csize = funcs[CALLER][0]
    caller = bytearray(blob[CALLER:CALLER + csize])

    ksize = funcs[CALLEE][0]
    callee = blob[CALLEE:CALLEE + ksize]

    md = MH._md()
    bl_off = None
    for i in md.disasm(bytes(caller), SM.CODE_BASE):
        if i.mnemonic == "bl":
            bl_off = i.address - SM.CODE_BASE
            break
    if bl_off is None:
        raise RuntimeError("no bl in the caller")

    patch_bl(caller, bl_off, CALLEE_BASE)
    return bytes(caller), bytes(callee), bl_off


def run_with_callee(caller, callee, argv):
    """Emulate caller+callee together. Mirrors sem_match.run but with two regions."""
    Uc, arch, mode, R_SP, R_X0, _ = SM._uc()
    from unicorn import (UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC,
                         UC_HOOK_CODE)
    from unicorn import arm64_const as C

    uc = Uc(arch, mode)
    uc.mem_map(SM.CODE_BASE, SM.CODE_SIZE, UC_PROT_READ | UC_PROT_WRITE | UC_PROT_EXEC)
    uc.mem_map(CALLEE_BASE, CALLEE_SIZE, UC_PROT_READ | UC_PROT_WRITE | UC_PROT_EXEC)
    uc.mem_map(SM.STACK_BASE, SM.STACK_SIZE, UC_PROT_READ | UC_PROT_WRITE)
    uc.mem_map(SM.SCRATCH_BASE, SM.SCRATCH_SIZE, UC_PROT_READ | UC_PROT_WRITE)

    uc.mem_write(SM.CODE_BASE, caller)
    uc.mem_write(CALLEE_BASE, callee)
    # The callee returns to the caller, so its link register must be the address
    # after the call site -- and the caller must not then run off the end.
    # Rather than model a real return address, the callee is given the sentinel:
    # the caller's `bl` overwrites x30 anyway, and the callee's own `ret`
    # therefore lands on the sentinel, ending the run after the callee.
    # But then the caller's post-call instructions never execute...
    #
    # So x30 must point back into the caller. The correct value is
    # `bl_addr + 4`, which the *emulator* supplies by hooking the call.
    uc.mem_write(SM.SENTINEL, b"\xc0\x03\x5f\xd6")
    uc.mem_write(SM.SCRATCH_BASE, SM._init_scratch())

    for i, v in enumerate(argv):
        uc.reg_write(getattr(C, "UC_ARM64_REG_X%d" % i), v)
    uc.reg_write(R_SP, SM.STACK_BASE + SM.STACK_SIZE // 2)
    uc.reg_write(C.UC_ARM64_REG_X30, SM.SENTINEL)

    call_site = {"seen": set(), "was_in_callee": False}

    def on_code(uc_, addr, size, _u):
        call_site["seen"].add(addr)
        in_callee = CALLEE_BASE <= addr < CALLEE_BASE + CALLEE_SIZE
        # Returning from the callee: the caller's own `ret` must go to the
        # sentinel, but `bl` left x30 pointing back into the caller and `ret`
        # does not clear it. Without this the caller's `ret` branches to its own
        # post-call instruction and the run either loops or escapes -- which is
        # what the first version did, reporting "original faulted (escaped)" on
        # every trial after successfully reaching the callee.
        if call_site["was_in_callee"] and not in_callee:
            uc_.reg_write(C.UC_ARM64_REG_X30, SM.SENTINEL)
        call_site["was_in_callee"] = in_callee

    uc.hook_add(UC_HOOK_CODE, on_code)
    # Emulate until the caller's `ret`, i.e. until control reaches the sentinel.
    uc.emu_start(SM.CODE_BASE, SM.SENTINEL, count=100000)
    return (uc.reg_read(R_X0), bytes(uc.mem_read(SM.SCRATCH_BASE, SM.SCRATCH_SIZE)),
            call_site.get("seen", set()))


def main():
    try:
        SM._uc()
    except SM.SemUnavailable as e:
        print("  SKIP: %s" % e)
        return 2

    caller, callee, bl_off = build_orig()
    md = MH._md()
    print("  caller main@%#x, bl at +%d, callee main@%#x" % (CALLER, bl_off, CALLEE))
    for i in md.disasm(caller, SM.CODE_BASE):
        print("       %-8s %s" % (i.mnemonic, i.op_str))
    print()

    cand = compile_to_bytes(GOOD_C, name="wrapper")
    print("  inlined C compiles to %d bytes" % len(cand))
    print()

    # One trial by hand first, to see whether the callee is reached at all.
    argv = [SM.SCRATCH_BASE, SM.SCRATCH_BASE + 0x40]
    _, _, seen = run_with_callee(caller, callee, argv)
    reached_callee = CALLEE_BASE in seen
    print("  emulation reached the mapped callee: %s" % reached_callee)
    if not reached_callee:
        print("  RESULT: FAIL -- the relocated `bl` does not land, so a call "
              "cannot be emulated and the call population stays out of reach.")
        return 1

    # The comparison must go through sem_match's own callee support. An earlier
    # version had a private runner that mapped the callee for the reachability
    # probe and then called `SM.compare`, which does not -- so the probe said
    # "reached" and the comparison said "escaped", and the two contradicted each
    # other in the same output.
    v, why = SM.compare(caller, cand, callee=callee)
    print("  [relocated caller with a real callee vs inlined C] -> %s" % v)
    print("         %s" % why)

    bad = compile_to_bytes(BAD_C, name="wrapper")
    v2, why2 = SM.compare(caller, bad, callee=callee)
    print("  [inlined C, second store offset changed]             -> %s" % v2)
    print("         %s" % why2)

    ok = (v == "equivalent" and v2 == "different")
    print()
    print("  RESULT: %s" % ("PASS -- calls are emulatable, so the framed-call "
                           "population is reachable" if ok else
                           "INCONCLUSIVE -- calls are reachable but the "
                           "comparison did not come out clean"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main())
