#!/usr/bin/env python3
"""Generate C for stack-framed bodies, for *semantic* matching only.

A framed body cannot byte-match: the retail code adjusts `sp` inside the access
(`str x19, [sp, #-0x20]!`) and Clang 5.0.1 emits `sub sp, sp, #0x20` instead. That
is a backend difference, so no amount of translator work closes it.

But semantic matching does not need the frame reproduced -- it needs the same
*behaviour*. And the frame is mostly not behaviour:

    stp  x29, x30, [sp, #-0x30]!    allocate; save frame pointer and return addr
    stp  x20, x19, [sp, #0x10]      spill two callee-saved registers
    ...body, reading and writing [sp, #0x10]...
    ldp  x20, x19, [sp, #0x10]      reload them -- same values they held
    ldp  x29, x30, [sp], #0x30      release
    ret

The allocation and the spills are register allocation and stack management, both
invisible to the caller. The *slots* are the only part that carries data, and for
a leaf they are ordinary locals.

So rather than teach the translator about frames -- which would put a
backend-specific concern into code whose job is byte-exactness -- this rewrites
`sp` to a synthetic frame pointer and hands the result to the existing translator
unchanged. Every load, store, index, extend and conditional already implemented and
already verified against the compiler applies here for free.

The emitted C declares a local frame array and passes its address:

    unsigned char _fr[0x30];
    f(a0, ..., (char*)_fr);

Which means the frame's *layout* is irrelevant: Clang allocates `_fr` however it
likes, and the behavioural comparison does not care.

Scope is deliberately narrow -- leaf bodies with no `bl`, no `adrp`, and no
vector registers. Every one of those is a separate modelling problem, and a
generator that tried all of them would be wrong in ways that are hard to see.
"""

import re
import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

import straight_line as SL   # noqa: E402

# Callee-saved registers. Saving and restoring them is register allocation: the
# value written is the value the register already held, and nothing observable
# depends on it. So a spill/restore pair is dropped rather than modelled.
CALLEE_SAVED = set(range(19, 29)) | {29}      # x19..x28 plus x29 (frame pointer)

FRAME_PNTR = "a%d"                            # filled in once the arg count is known


class FrameDecline(Exception):
    """This body is outside the frame generator's scope. Always a decline."""


def _is_sp_insn(i):
    return re.search(r"\[sp\b", i.op_str) or re.match(r"^(add|sub)\s+sp,", i.op_str)


def _full(i):
    """mnemonic + operands, as one string.

    Capstone's `op_str` is operands *only* -- `stp x29, x30, [sp, #-0x10]!` has
    `op_str == "x29, x30, [sp, #-0x10]!"`. Every pattern below is anchored on the
    mnemonic, so matching against `op_str` alone rejected all 56,338 framed bodies
    at the first check. The failure looked like "this shape does not occur" rather
    than "the pattern is wrong", because the census had just printed the very same
    instructions that the patterns were supposed to match.
    """
    return "%s\t%s" % (i.mnemonic, i.op_str)


def _split_frame(insns):
    """-> (frame_size, inner) or raise FrameDecline.

    The allocation takes three forms in this corpus, and the commonest is not a
    pair store:

        stp  x29, x30, [sp, #-0x30]!      6,044 bodies
        str  x19, [sp, #-0x20]!           10,859 bodies   <- most common
        sub  sp, sp, #0x40                2,983 bodies

    So the release is found by scanning backwards for `add sp`/`ldp [sp], #n`
    rather than by assuming a fixed epilogue length, and the spill/restore pairs
    are dropped afterwards by `_drop_spills`. An earlier version matched a fixed
    one-instruction prologue and epilogue and so accepted only the `stp` form --
    which is a third of the corpus, not the whole of it.

    A frame with no recognisable release is declined. Guessing would produce C
    that compiles and computes something else, which is worse than declining.
    """
    body = list(insns)
    if not body or body[-1].mnemonic != "ret":
        raise FrameDecline("body does not end in ret")

    size = None
    pro = 0
    m = re.match(r"^stp\s+(\S+),\s*(\S+),\s*\[sp,\s*#(-?0x[0-9a-f]+|\d+)\]!$",
                 _full(body[0]))
    m1 = re.match(r"^str\s+\S+,\s*\[sp,\s*#(-?0x[0-9a-f]+|\d+)\]!$",
                  _full(body[0]))
    m2 = re.match(r"^sub\s+sp,\s*sp,\s*#(0x[0-9a-f]+|\d+)$", _full(body[0]))
    if m:
        size, pro = -int(m.group(3), 0), 1
    elif m1:
        size, pro = -int(m1.group(1), 0), 1
    elif m2:
        size, pro = int(m2.group(1), 0), 1
    if size is None:
        raise FrameDecline("no stack allocation in the prologue")
    if size <= 0:
        raise FrameDecline("frame size is not positive")

    # Release: the last `add sp, sp, #n` before `ret`, if any. Not required --
    # a body may return with the frame still allocated in a shape this generator
    # declines later -- but if one is present it must not become a body statement.
    epi = 0
    for j in range(len(body) - 2, pro, -1):
        if re.match(r"^add\s+sp,\s*sp,\s*#(0x[0-9a-f]+|\d+)$", _full(body[j])):
            epi = len(body) - 1 - j
            break

    inner = body[pro:len(body) - 1 - epi]
    if not inner:
        raise FrameDecline("frame with no body")
    return size, inner


def _drop_spills(insns):
    """Remove callee-saved spill/restore pairs on sp; return (kept, dropped).

    A spill of x19 is invisible: the register already held that value, and the
    reload puts it back. Modelling it would require inventing locals whose only
    use is to reproduce register allocation.
    """
    kept = []
    dropped = 0
    for i in insns:
        regs = re.findall(r"\bx(\d+)\b", i.op_str)
        spilled = [int(r) for r in regs
                   if int(r) in CALLEE_SAVED and int(r) != 31]
        # Only drop a *pure* spill/restore: both registers callee-saved and sp as
        # the base. `stp x19, x20, [x0]` is a real store and is kept.
        if re.search(r"\[sp\b", i.op_str) and spilled and \
                len(regs) == len(spilled):
            dropped += 1
            continue
        kept.append(i)
    return kept, dropped


def _retarget_sp(insns, frame_reg):
    """Rewrite `sp`-relative operands to `frame_reg`.

    Offsets are preserved exactly, because the caller's wrapper declares a buffer
    of the same size and passes its address: `[sp, #0x10]` becomes
    `[x9, #0x10]` and the wrapper's `_fr` supplies the base.
    """
    out = []
    for i in insns:
        op = i.op_str
        if re.search(r"\[sp\b", op):
            op = re.sub(r"\[sp\b", "[%s" % frame_reg, op)
        out.append(_Fake(op, i))
    return out


class _Fake:
    """A disassembly with rewritten operands. Only what the translator reads."""
    __slots__ = ("op_str", "mnemonic", "address", "size")

    def __init__(self, op_str, src):
        self.op_str = op_str
        self.mnemonic = src.mnemonic
        self.address = src.address
        self.size = src.size


def translate(insns, ident="f_0", module=None):
    """-> (c_source, frame_size, n_extra_args). Raises FrameDecline."""
    size, inner = _split_frame(insns)
    kept, dropped = _drop_spills(inner)
    # Any surviving `sp` arithmetic is frame bookkeeping, not a body statement.
    kept = [k for k in kept
            if not re.match(r"^(add|sub)\s+sp,", _full(k))]
    if not kept:
        raise FrameDecline("body is entirely frame management")
    if any(i.mnemonic in ("bl", "blr") for i in kept):
        raise FrameDecline("body calls another function")
    if any(i.mnemonic in ("adrp", "adr") for i in kept):
        raise FrameDecline("body references a data address")
    if any(re.search(r"\b[vdqshb]\d+\b|\bv\d+\.", i.op_str) for i in kept):
        raise FrameDecline("body uses vector registers")
    if any(i.mnemonic.startswith(("b", "cb", "tb")) and
           i.mnemonic not in ("bl", "blr", "bic", "bfm", "bfi") for i in kept):
        raise FrameDecline("body branches")

    # Pick a register to carry the frame pointer that the body provably never
    # reads or writes, and that the translator will accept as an argument.
    #
    # The first version used x9. That is a scratch register the translator also
    # allocates, and the body used it too -- so `str w11, [sp, #8]` was rewritten
    # to `str w11, [x9, #8]` and resolved against whatever pointer the body had
    # *loaded* into x9. The output compiled, read like plausible decompiled code,
    # and computed something else entirely. Silent wrong C is the one failure mode
    # this project cannot afford, and it is exactly what a semantic matcher would
    # have to be trusted to catch.
    #
    # So: collect every register the body mentions, and choose an untouched one
    # from the argument range. If the body uses all eight, decline -- there is no
    # safe slot and guessing is what produced the wrong C.
    used = set()
    for i in kept:
        for r in re.findall(r"\b([xw]\d+)\b", i.op_str):
            used.add(int(r[1:]))
    free = [k for k in range(0, 8) if k not in used]
    if not free:
        raise FrameDecline("body uses every argument register; no slot for the "
                           "frame pointer")
    frame_reg = "x%d" % free[0]
    rewritten = _retarget_sp(kept, frame_reg)
    # The translator requires a body ending in `ret`; the epilogue was stripped
    # off, so put a terminating `ret` back. It is the same instruction the retail
    # body ends with, and the wrapper emits a real one -- this only tells the
    # translator it is looking at a complete body.
    rewritten = rewritten + [_Fake("", insns[-1])]

    # `translate` takes only the identifier: the `module` parameter belonged to the
    # reverted direct-call work, which measured zero and was removed.
    src, sig = SL.StraightLine(rewritten).translate(ident)
    # The frame register is returned rather than left for the caller to infer.
    # Guessing it from the emitted source picked a0 for a body whose frame was in
    # a3, and the wrapper then supplied the frame in the wrong slot -- the same
    # silent-wrong-C class this whole path exists to avoid.
    return src, size, sig, dropped, frame_reg
