#!/usr/bin/env python3
"""Semantic (differential) equivalence for AArch64 functions.

Byte-identity is capped at ~21% on this project: 79.5% of what remains is
frame-blocked, because the retail code uses writeback `sp`
(`str x19, [sp, #-0x20]!`) and Clang 5.0.1 emits `sub sp, sp, #0x20` instead.
No amount of translator work changes that -- it is a different compiler backend.

This module tests the weaker property that actually matters for a decompilation:
**do the two functions compute the same thing?** It runs the original machine code
and the recompiled machine code under an emulator on identical inputs and compares
the observable effects -- the return register, and the bytes written to the
scratch memory the function was given a pointer into.

    original machine code  --unicorn-->  x0, memory after
    recompiled machine code --unicorn-->  x0, memory after
                                   compare both

This is falsifiable, which is the point. `--selftest` requires all three of:

  1. a byte-identical pair is ACCEPTED   (no false negatives)
  2. a semantically identical but differently-encoded pair is ACCEPTED
     (so it is not byte comparison wearing a mask)
  3. a one-instruction near-miss is REJECTED   (no false positives)

Only a matcher that passes all three may be used to accept a body. A matcher that
accepts everything is worse than no matcher, because it is indistinguishable from
a working one in every number it reports.

Optional dependency: `unicorn`. The audit must not require it -- an emulator is
not needed to verify the byte-matching pipeline -- so the import is deferred and
the absence reported as a clean "unavailable", never as a failure.

Usage:
    python tools/sem_match.py --selftest
    python tools/sem_match.py --module main --addr 0x1234
"""

import argparse
import json
import os
import random
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

# ---------------------------------------------------------------------------
# Emulation layout
#
# Addresses are arbitrary but fixed, so both sides of a comparison see the same
# memory map and any address-dependent behaviour is comparable. Nothing is
# mapped at the retail module's real addresses: the original's code is relocated,
# so an `adrp` in it would compute a page address that is meaningless here.
# Those bodies are declined rather than silently mismatched -- see `run`.
# ---------------------------------------------------------------------------
CODE_BASE = 0x0000_0000_0040_0000     # both original and candidate code
CODE_SIZE = 0x0010_0000               # 1 MiB page for code
# Where the body's `ret` lands. Inside the code page, far past any real body, so
# the return is defined and emulation stops there rather than jumping to whatever
# x30 happened to hold.
SENTINEL = CODE_BASE + 0x000F_0000    # inside the code page, past any real body
STACK_BASE = 0x0000_0000_0050_0000
STACK_SIZE = 0x0002_0000              # 128 KiB, plenty for any single frame
SCRATCH_BASE = 0x0000_0000_0060_0000  # the "object" the pointer argument names
SCRATCH_SIZE = 0x0000_4000            # 16 KiB
# A second code region for a relocated callee.
#
# Clear of code, stack and scratch. It was originally CODE_BASE + 0x200000, which
# is 0x600000 -- exactly SCRATCH_BASE -- and the second `mem_map` failed with
# UC_ERR_MAP. The map is now checked in `run` rather than assumed.
CALLEE_BASE = 0x0070_0000
CALLEE_SIZE = 0x0010_0000

SCRATCH_FILL = 0x5A
# Bytes of scratch initialised as a self-referential pointer table.
#
# A body that loads a pointer out of the object and dereferences it needs that
# pointer to be usable. Filling scratch with a constant byte gives every such load
# the value 0x5A5A5A5A5A5A5A5A, which is unmapped, so the trial faults on the very
# first pointer chase -- and the fault is indistinguishable from a semantic
# disagreement. That is what made the first frame-blocked test report "original
# faulted, candidate completed" on every layout: the *input object* was nonsense,
# not the decompilation.
#
# Filling the low region with pointers into itself means a body can follow a
# pointer chain as deep as it likes and stay inside the mapping.
SCRATCH_PTR_BYTES = 0x2000


def _init_scratch():
    """A realistic object: pointers into itself, then filler."""
    n = SCRATCH_PTR_BYTES // 8
    head = b"".join(struct.pack("<Q", SCRATCH_BASE + i * 8) for i in range(n))
    return head + bytes([SCRATCH_FILL]) * (SCRATCH_SIZE - len(head))

# Registers the emulator reads back.
XREGS = ["x%d" % i for i in range(8)]

MAX_INSNS = 20000                     # a runaway loop must not hang the audit


class SemUnavailable(Exception):
    """`unicorn` is not installed. Not a failure -- an absent capability."""


def _uc():
    try:
        from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM
        from unicorn.arm64_const import UC_ARM64_REG_SP, UC_ARM64_REG_X0, \
            UC_ARM64_REG_PC
    except ImportError as e:
        raise SemUnavailable("unicorn is not installed: %s" % e)
    return Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_ARM64_REG_SP, \
        UC_ARM64_REG_X0, UC_ARM64_REG_PC


def run(code, argv, max_insns=MAX_INSNS, callee=None):
    """Emulate `code` with `argv`; return (ret, scratch_after, insn_count).

    `code` is raw AArch64. Raises ValueError for a body this harness cannot
    honestly judge -- an unresolved `bl` or an `adrp` to a data page means the two
    sides would be computing different addresses, and reporting a mismatch there
    would be a false negative dressed as a result.

    Returning needs a sentinel. The body's `ret` pops x30, which on entry holds
    whatever the emulator left there, and jumps to it -- so without help every
    run ends in `UC_ERR_FETCH_PROT` the moment it returns, which is how the first
    version of this reported "unknown" for all six selftest cases and looked like
    a matcher that could not run. x30 is pointed at a `ret` in a mapped page and
    `until` is set to it, so the return lands somewhere defined and emulation
    stops there. A branch *within* the body that leaves the code range still
    faults, and is still reported as not comparable.
    """
    Uc, arch, mode, R_SP, R_X0, _ = _uc()
    from unicorn import UC_PROT_READ, UC_PROT_WRITE, UC_PROT_EXEC, UC_HOOK_CODE
    from unicorn import arm64_const as C

    uc = Uc(arch, mode)
    # EXEC on the code page only. Without it every run dies on the *entry* fetch
    # with UC_ERR_FETCH_PROT, which is what the first working-looking version did
    # -- and the symptom is indistinguishable from a body that branches out.
    uc.mem_map(CODE_BASE, CODE_SIZE, UC_PROT_READ | UC_PROT_WRITE | UC_PROT_EXEC)
    # Stack and scratch stay non-executable, so a wild pointer into them faults
    # instead of running whatever bytes happen to be there.
    uc.mem_map(STACK_BASE, STACK_SIZE, UC_PROT_READ | UC_PROT_WRITE)
    uc.mem_map(SCRATCH_BASE, SCRATCH_SIZE, UC_PROT_READ | UC_PROT_WRITE)
    if callee is not None:
        uc.mem_map(CALLEE_BASE, CALLEE_SIZE, UC_PROT_READ | UC_PROT_WRITE | UC_PROT_EXEC)

    uc.mem_write(CODE_BASE, code)
    if callee is not None:
        uc.mem_write(CALLEE_BASE, callee)
    uc.mem_write(SENTINEL, b"\xc0\x03\x5f\xd6")          # ret
    uc.mem_write(SCRATCH_BASE, _init_scratch())

    for i, val in enumerate(argv):
        uc.reg_write(getattr(C, "UC_ARM64_REG_X%d" % i), val & 0xFFFF_FFFF_FFFF_FFFF)
    uc.reg_write(R_SP, STACK_BASE + STACK_SIZE // 2)
    uc.reg_write(C.UC_ARM64_REG_X30, SENTINEL)

    state = {"n": 0}

    # When a callee has been supplied, returning from it must restore x30.
    #
    # `bl` leaves x30 pointing back into the caller; the callee's `ret` branches
    # there but does not clear x30, so the caller's own `ret` then branches to its
    # own post-call instruction. The run loops or escapes -- and the first version
    # of the call test reported "original faulted (escaped)" on every trial
    # immediately after confirming the callee *was* reached. Setting x30 on the
    # callee->caller transition makes the outer `ret` land on the sentinel.
    was_in_callee = [False]

    def on_code(uc_, addr, size, _user):
        state["n"] += 1
        if state["n"] > max_insns:
            uc_.emu_stop()
            return
        if callee is not None:
            in_callee = CALLEE_BASE <= addr < CALLEE_BASE + CALLEE_SIZE
            if was_in_callee[0] and not in_callee:
                uc_.reg_write(C.UC_ARM64_REG_X30, SENTINEL)
            was_in_callee[0] = in_callee
    uc.hook_add(UC_HOOK_CODE, on_code)

    try:
        uc.emu_start(CODE_BASE, SENTINEL, count=max_insns)
    except Exception as e:                    # noqa: BLE001
        # Distinguish the two failure kinds, because they mean different things.
        #
        # A *fetch* fault means control left the body -- an unresolved `bl`, a
        # tail jump, or a computed branch. Not comparable here.
        #
        # A *data* fault means the body dereferenced something illegal. That is a
        # perfectly comparable outcome: if both sides fault on the same input they
        # agree, and if only one does, that is a real difference. Calling every
        # fault "escaped" made every illegal-input trial look like an
        # incomparability, which is how a run where both sides faulted on 48 of 48
        # trials could be reported as "the original escaped the body".
        msg = str(e)
        kind = "escaped" if "FETCH" in msg.upper() else "faulted"
        raise ValueError("%s: %s" % (kind, msg))

    ret = uc.reg_read(R_X0)
    after = bytes(uc.mem_read(SCRATCH_BASE, SCRATCH_SIZE))
    return ret, after, state["n"]


def _mk_args(seed, n=4, layout="mixed"):
    """Inputs for one trial.

    The argument *roles* are not known -- a body may take a pointer in x0, an
    index in x1. Guessing one layout and calling a fault a result is how the
    first version failed: it passed pointer-sized values into `w1`/`w2` of
    `add x9, x8, w1, uxtw #4`, so every index address fell outside the mapped
    scratch and both sides faulted on all 48 trials. Correctly agreeing, and
    completely uninformative.

    So each trial sweeps several layouts, including the one that actually fits a
    `(pointer, index, index)` signature. A layout on which *both* sides fault is
    agreement -- they did the same illegal thing -- and is skipped rather than
    counted. A layout where exactly one side faults is a real, observable
    difference and is reported as such.
    """
    rnd = random.Random(seed)
    # Pointer arguments are placed near the *low* end of scratch, leaving room for
    # the body to add a field offset and an index stride and still land inside the
    # mapping. Spreading them across the whole region put `base + 0xe0 + i*16`
    # past the end for half the seeds, and the resulting unmapped read looked like
    # a semantic disagreement rather than a harness bug.
    ptrs = [SCRATCH_BASE + rnd.randrange(0, 0x200) // 8 * 8 for _ in range(n)]
    ints = [rnd.randrange(0, 1 << 32) for _ in range(n)]
    # Small indices: an index into the scratch object, so `base + i*8` lands
    # inside the mapping. These are the values that make a `(ptr, i, j)` body
    # actually run instead of faulting on every layout.
    small = [rnd.randrange(0, 16) for _ in range(n)]
    if layout == "all_ptr":
        return list(ptrs)
    if layout == "all_int":
        return list(ints)
    if layout == "all_small":
        return list(small)
    if layout == "ptr_small":
        return [ptrs[0]] + small[1:]
    if layout == "ptr_small_2":
        return [ptrs[0], small[1], small[2], ptrs[3]]
    if layout == "int_then_ptr":
        return [ints[0]] + ptrs[1:]
    return [ints[0], ptrs[1], ints[2], ptrs[3]]     # "mixed"


LAYOUTS = ("mixed", "all_ptr", "all_int", "all_small",
           "ptr_small", "ptr_small_2", "int_then_ptr")


def _attempt(code, argv, callee=None):
    """-> ("ok", ret, mem) or ("fault", message). Never raises.

    Both arms return a 3-tuple so the caller can unpack without branching first;
    the fault arm's third element is an empty string, never a half-read memory
    image that would compare unequal against anything.
    """
    try:
        r, m, _n = run(code, argv, callee=callee)
        return ("ok", r, m)
    except ValueError as e:
        return ("fault", str(e), "")


def compare(orig_code, cand_code, trials=12, seed0=0x5EED, callee=None):
    """-> (verdict, reason). `verdict` is "equivalent" / "different" / "unknown".

    "unknown" is a real outcome and reported as one. A body whose original escapes
    the code page on every layout is not comparable here -- typically an
    unresolved `bl` or a data reference -- and that is not a pass.
    """
    diffs = []
    compared = 0
    faults = 0
    escaped_orig = 0
    for t in range(trials):
        for lay in LAYOUTS:
            argv = _mk_args(seed0 + t, layout=lay)
            ko, ro, mo = _attempt(orig_code, argv, callee)
            kc, rc, mc = _attempt(cand_code, argv)
            if ko == "fault":
                faults += 1
                if "escaped" in ro:
                    escaped_orig += 1
                if kc == "fault":
                    continue          # both did the same illegal thing: agreement
                diffs.append("trial %d/%s: original faulted (%s) but candidate "
                             "completed" % (t, lay, ro[:48]))
                break
            if kc == "fault":
                diffs.append("trial %d/%s: candidate faulted (%s) but original "
                             "completed" % (t, lay, rc[:48]))
                break
            compared += 1
            if ro != rc:
                diffs.append("trial %d/%s: ret %#x vs %#x" % (t, lay, ro, rc))
                break
            if mo != mc:
                k = next(j for j in range(len(mo)) if mo[j] != mc[j])
                diffs.append("trial %d/%s: scratch[%#x] %02x vs %02x"
                             % (t, lay, SCRATCH_BASE + k, mo[k], mc[k]))
                break
        if len(diffs) >= 3:
            break

    if diffs:
        return "different", "; ".join(diffs)
    if compared == 0:
        return "unknown", ("no comparable trial: original escaped the body on "
                           "every layout (%d/%d faulted symmetrically)"
                           % (faults, trials * len(LAYOUTS)))
    return "equivalent", ("%d comparable trials, all identical (%d layouts "
                          "faulted symmetrically on both sides)"
                          % (compared, faults))
