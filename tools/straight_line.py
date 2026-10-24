#!/usr/bin/env python3
"""A small straight-line decompiler for leaf functions.

`tools/auto_match.py` handles fixed instruction shapes. This handles the general
case: any function whose body is a straight line of loads, stores, adds and
moves with no branches and no calls.

Each architectural register is tracked as a C++ value:

    ('imm',  v,  type)          a literal
    ('load', base, off, type)   *(T*)((char*)base + off)
    ('addr', base, off)         (char*)base + off

Stores become ordinary assignments and whatever lands in x0 at the `ret`
becomes the return value. If any register feeding an instruction cannot be
expressed, the function is declined rather than guessed at.

Signatures are recovered, not chosen: the parameter list is built from exactly
the argument registers the body reads. An extra parameter changes the mangled
name, and a wrongly typed one changes the codegen, so both matter.

Known limitation, measured rather than assumed: where the original loads several
fields before storing any of them, the load *order* is not preserved here -- C++
evaluates the copy expressions in statement order, so the compiler may emit the
loads in a different order. An attempt to force the order with named
temporaries was tried and measured *worse* (53% versus 82% on `main`), because
the extra bindings change register allocation; it was reverted. The affected
functions are declined or left to hand decomp.

Verification is the same as everywhere else in this project -- the candidate is
compiled for AArch64 and compared against the original by
tools/match_harness.py. A body that does not reproduce the original fails to
match and is never counted.

Used by tools/auto_match.py.
"""

import re

# C type per access width, unsigned and signed.
U = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}
S = {1: "int8_t", 2: "int16_t", 4: "int32_t", 8: "int64_t"}

# A load whose ADDRESSING MODE also UPDATES the base register. This is not a
# detail of the encoding -- it is a SECOND VALUE out of one instruction, and the
# value map is one register to one value:
#
#     ldr xD, [xN, #off]!      xD = *(T*)((char*)xN + off)   and   xN = xN + off
#     ldr xD, [xN], #off       xD = *(T*)xN                  and   xN = xN + off
#
# Without the update the body is a DIFFERENT PROGRAM, not a differently-encoded
# one. main 0x308690 is four instructions either way:
#
#     retail  ldr x8, [x0, #-0x30]!     <- writes x0 back
#             ldr x3, [x8, #0x188] ; and w1, w1, #1 ; br x3
#     before  ldur x8, [x0, #-48]      <- no writeback
#             ldr x2, [x8, #392] ; and w1, w1, #0x1 ; br x2
#
# 29,556 unmatched bodies -- 26% of what remains -- contain one of these two
# forms. The recipe is measured (work/wb_recipe.py, clang 5.0.1 -O3):
#
#     *out = *(uint64_t*)(p - 48);  p = p - 48;      ->  ldr x8, [x0, #-48]!
#     *out = *(uint64_t*)p;         p = p + 8;       ->  ldr x8, [x0], #8
#
# So both forms are reachable, and the handler is two lines, not a new kind.
WRITEBACK_PRE = re.compile(r"^(.*\])\s*!\s*$")
WRITEBACK_POST = re.compile(r"^(.*\])\s*,\s*#(-?\d+|0x[0-9a-fA-F]+)\s*$")

LOADS = ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb", "ldursw", "ldur",
         "ldrsh", "ldursh")
STORES = ("str", "strb", "strh", "sturb", "sturh", "stur")

# Pair forms: two registers, one memory operand. Kept out of LOADS/STORES because
# those are guarded on a two-operand shape and a pair has three.
#
#   ldp   Rd1, Rd2, [Rn, #off]     load two adjacent elements
#   ldpsw Rd1, Rd2, [Rn, #off]     the same, sign-extended into 64-bit
#   stp   Rs1, Rs2, [Rn, #off]     store two adjacent elements
#
# `ldp` needs no new value kind: two `load` values at `off` and `off + width`
# reproduce it exactly, verified by compiling rather than assumed.
PAIR_LOADS = ("ldp", "ldpsw", "ldupsw")
PAIR_STORES = ("stp",)

# `bl` is accepted only when the caller supplies a prototype for its target.
#
# The callee's signature is not derivable from the call site: AAPCS64 puts the
# arguments in x0..x7 and says nothing about how many there are, nor whether the
# result is void, 32-bit or 64-bit. Guessing would produce a `bl` with the wrong
# argument registers live across it, which does not match. So the caller supplies
# `{target_address: {"name": str, "nargs": int, "ret": str}}` and the search over
# those three choices lives in the registration driver, where it can be measured.
#
#   ret == "void"   the call is emitted as a statement
#   otherwise       the call becomes the value in x0, which keeps it positioned
#                   correctly inside whatever expression the rest of the body builds

# The extend an `add xD, xN, wM, <ext>` writes, and the C type the index register
# must then be declared with.
#
# The extend does two independent jobs: it sets the byte width of the index value
# *and* it sets the parameter's type, which changes the mangled name. `uxth #4` is
# an index zero-extended from 16 bits and shifted left four, i.e. a `uint16_t`
# parameter scaled by 16. Modelling it as `uint32_t` gets the arithmetic right
# and the symbol wrong.
#
# Itanium codes: t=unsigned char, c=char, h=unsigned short, s=short,
#                j=unsigned int,  i=int,  m=unsigned long.
EXTEND_TYPES = {
    "lsl":  ("uint64_t", "m"),
    "uxtw": ("uint32_t", "j"),
    "sxtw": ("int32_t",  "i"),
    "uxtb": ("uint8_t",  "h"),
    "sxtb": ("int8_t",   "a"),
    "uxth": ("uint16_t", "t"),
    "sxth": ("int16_t",  "s"),
    # `asr` is the arithmetic shift RIGHT. It belongs here because the bitwise
    # block gates its third operand on this table, and 46 bodies were declined
    # as "bic/and extend 'asr #31' is not supported". The type pair is only
    # consulted for INDEX extends, and `asr` never appears as one, so listing it
    # here is safe; the shift renderer gives it the signed type of the operand
    # width instead.
    "asr":  ("int32_t",  "i"),
}
# Bitwise and bitfield value instructions, all handled by one block below.
# They are listed separately from the `add`/`mov`/`sub` group because they are
# the ones added in response to a measured decline census rather than by
# increment -- see the no-call/no-branch census in decomp/docs/remaining_pool.md.
# Floating-point mnemonics with measured C equivalents (decomp/docs/
# fp_population.md). Listed here because the whole-body pre-filter runs
# BEFORE any handler: a mnemonic missing from that filter is declined as
# "unsupported mnemonic" no matter what the handler below could do. The
# bitwise handlers changed nothing at all for exactly this reason.
# The whole-body pre-filter runs BEFORE any handler, so a mnemonic missing
# from here is declined no matter what the handler could do. `movi` was
# missing and cost 48 bodies for exactly that reason.
FP_MNEMONICS = ("fmov", "fneg", "movi")

BITWISE_MNEMONICS = ("and", "orr", "eor", "bic", "movk", "ubfx", "sbfx",
                     "ubfiz", "bfxil", "mvn", "neg", "lsl", "lsr", "asr",
                     # `sbfiz` is the SIGNED bitfield insert and `ubfiz` was
                     # already handled -- the list carried the unsigned form and
                     # not the signed one, and a missing mnemonic looks like a
                     # missing population.
                     "sbfiz")

# Condition flags, and the branchless conditionals that consume them.
#
# `csel`/`cset`/`fcsel` are what Clang emits for C's `? :`, so bodies built from
# them are *byte-matchable* -- unlike the branchy bodies. Measured: 21,820
# unmatched bodies contain one (42,388 `csel`, 18,024 `cset`, 4,774 `cinc`,
# 3,809 `fcsel`, 3,597 `csinc`, 1,868 `cneg`).
#
# They declined on `cmp`/`cbz`/`tst` because flags had no representation at all:
# the translator modelled registers only, so a comparison had nowhere to live.
# Flags are a pseudo-register here -- kept beside `state`, not inside it, because
# no instruction names them.
FLAG_MNEMONICS = ("cmp", "cmn", "fcmp", "tst")
COND_MNEMONICS = ("csel", "csinc", "csinv", "csneg", "cset", "csetm",
                  "cinc", "cinv", "cneg", "fcsel", "fcset", "fcsetm")

# Condition code -> C operator. The signed/unsigned pair matters: `hs`/`lo`/`cs`
#/`cc` are the unsigned spellings of the same comparisons, and using the signed
# operator for them would compare the wrong thing for a 64-bit value.
COND_OPS = {
    "eq": "==", "ne": "!=",
    "lt": "<",  "le": "<=", "gt": ">", "ge": ">=",
    "hi": ">",  "hs": ">=", "lo": "<", "ls": "<=",
    "cc": "<",  "cs": ">=",
    "mi": "<",  "pl": ">=",
    "vs": "<",  "vc": ">=",
    # `cneg` takes the inverted spelling of the same conditions. Missing from the
    # map it raised KeyError, and a KeyError is not a decline -- the census
    # counted it separately and 4 bodies silently vanished rather than reporting
    # that the translator had a hole in it.
    "neg": "<=", "nv": ">", "nm": "<", "np": ">=",
    "a": "<=",   "b": ">",   "ae": "<=", "be": ">=",
}
MAX_INSNS = 32        # beyond this, hand decomp is the better use of time
                      # Raising this to 64 was measured and gave **zero** new
                      # matches: candidates rose (sdk 202->205, subsdk1 175->182)
                      # but none matched. Bodies past ~32 instructions are long
                      # enough that simple translation diverges from Clang's
                      # scheduling, so the boundary is doing useful work rather
                      # than refusing addressable bodies. Reverted.
MAX_ARG = 7           # AArch64 passes integer/pointer arguments in x0..x7.
                      # This was 4, so any body reading x4..x7 as a pointer base
                      # was declined as 'not an argument register' -- 57 bodies at
                      # the last census. x8 and above are *not* arguments (x8 is the
                      # struct-return pointer), which is why the sret test lives
                      # above this bound and not here.
# Synthetic base ids for loaded pointers. Kept far above any real argument
# number so `id < SYNTH_BASE` distinguishes them without a second type.
# Multiply family, and the exact operation each one performs.
#
# The single largest remaining decline class among the bodies that are otherwise
# addressable: 216 of the 2,264 "free of calls, branches, frames and adrp"
# unmatched bodies fail on nothing but these mnemonics.
#
# The signedness and width distinctions are the whole point. These are not one
# operation with nine spellings:
#
#   mul   xD, xN, xM      xD = xN * xM                 64-bit low half
#   mul   wD, wN, wM      wD = wN * wM                 32-bit low half, zeroes xD
#   madd  xD, xN, xM, xA  xD = xN * xM + xA
#   msub  xD, xN, xM, xA  xD = xA - xN * xM
#   mneg  xD, xN, xM      xD = -(xN * xM)
#   smull xD, wN, wM      xD = (int64)wN * (int64)wM   SIGNED 32x32 -> 64
#   umull xD, wN, wM      xD = (uint64)wN * (uint64)wM UNSIGNED 32x32 -> 64
#   smaddl/umaddl         the 32x32->64 product, added to / subtracted from xA
#   smsubl/umsubl         xA - product
#
# `mul` on a `w` register is NOT a 32x32->64 multiply: it keeps the low 32 bits
# and zeroes the top half, which is `(uint32_t)(a * b)` and not `(uint64_t)a * b`.
# Getting that wrong changes the instruction, not just the value.
#
# `umull` with a signed C type is the classic silent error: `int64_t * int64_t`
# emits a signed multiply and Clang will fold the sign extension differently than
# the zero extension the instruction performs. The operand types therefore have to
# be pinned per mnemonic, not inferred from the register class.
MUL_MNEMONICS = ("mul", "madd", "msub", "mneg",
                 "smull", "umull", "smaddl", "umaddl", "smsubl", "umsubl")
# mnem -> (C operator, accumulator is subtracted?, 32x32->64 widening?)
# Floating-point arithmetic. Measured before implemented, per the rule this
# project has been bitten by more than once -- `work/fp_recipe.py`:
#
#     double a1, a2, r;  r = a1 + a2;   ->  fadd
#     float  a1, a2, r;  r = a1 + a2;   ->  fadd      (the SINGLE form)
#     double a1, a2, r;  r = a1 * a2;   ->  fmul
#     double a1, a2, r;  r = a1 - a2;   ->  fsub
#     float  a1;   double r;  r = a1;   ->  fcvt      (already `fpun`)
#     double a1;   float  r;  r = a1;   ->  fcvt      (already `fpun`)
#
# The load-bearing line is the second: `s0` and `d0` are the SAME STORAGE, so a
# `float` local and a `double` local are a pun rather than two values, and `fadd`
# has two distinct encodings. THE WIDTH OF THE LOCAL DECIDES WHICH -- the same rule
# as the store-width and register-class rules already in this file.
#
# `faddp` is NOT here: pairwise addition is an operation on a VECTOR, and scalar
# `a1 + a2` compiles to plain `fadd`. `work/fp_recipe.py` confirmed it. A vector
# form is a different value kind and is not claimed.
FP_ARITH_MNEMONICS = ("fadd", "fsub", "fmul", "fdiv")
FP_OPS = {"fadd": "+", "fsub": "-", "fmul": "*", "fdiv": "/"}

MUL_OPS = {
    "mul":   ("*", False, False),
    "madd":  ("*", False, False),
    "msub":  ("*", True,  False),
    "mneg":  ("*", True,  False),
    "smull": ("*", False, True),
    "umull": ("*", False, True),
    "smaddl": ("*", False, True),
    "umaddl": ("*", False, True),
    "smsubl": ("*", True,  True),
    "umsubl": ("*", True,  True),
}

# Standalone width conversions, byte reversal, and division.
#
# `sxtw`/`uxtw` were already known as the *extend* on an `add`/`sub` and appear in
# EXTEND_TYPES; this is only the standalone spelling, where the destination is the
# widened register. `rev` maps to a compiler builtin so it needs no prototype --
# which also means it cannot collide with another candidate in a shared batch TU
# the way a named helper would.
#
# mnemonic -> (intermediate type, signed?). The *result* width is decided by the
# destination register, not by the mnemonic: `sxtb x0, w0` and `sxtb w0, w0` are
# the same mnemonic with different result widths.
#
# Confirmed against the compiler, including the part that is easy to get wrong:
# `sxtx` (sign-extend 32 to 64) is emitted by Clang as `sxtb x0, w0`, not `sxtx` --
# it picks the shortest instruction that performs the extension. So what has to be
# spelled is the *cast pair*, not the mnemonic:
#
#     (int32_t)(int8_t)(uint8_t)v   -> sxtb w0, w0
#     (int32_t)(int16_t)(uint16_t)v -> sxth w0, w0
#     (int64_t)(int8_t)(uint8_t)v   -> sxtb x0, w0      (not sxtx!)
#     (uint64_t)v                   -> mov  w0, w0      (not uxtw)
#
# The zero-extending forms are listed for completeness but are rarely emitted by
# Clang for a plain integer -- the truncation folds away. They are handled anyway
# rather than declined, because a body containing one still has to be translated.
WIDEN_MNEMONICS = ("sxtw", "uxtw", "rev",
                   "sxtb", "sxth", "sxtx", "uxtb", "uxth")
# mnemonic -> (intermediate C type, is_signed)
EXTEND_STANDALONE = {
    "sxtb": ("int8_t", True),   "uxtb": ("uint8_t", False),
    "sxth": ("int16_t", True),  "uxth": ("uint16_t", False),
    "sxtw": ("int32_t", True),  "uxtw": ("uint32_t", False),
    # `sxtx` is "sign-extend 32 to 64"; the extension itself is a 32-bit one.
    "sxtx": ("int32_t", True),
}
# `sdiv`/`udiv`. Both operands must be cast to the *same* signedness or C's usual
# arithmetic conversions change the operation: `uint32_t / int32_t` promotes to
# unsigned and emits `udiv` where the instruction says `sdiv`.
DIV_MNEMONICS = ("sdiv", "udiv")

SYNTH_BASE = 1000

# `adrp xD, #0x27ee000` -- capstone prints the page with a `#`, in hex.
_PAGE_OP = re.compile(r"#(-?0x[0-9a-fA-F]+)")
# Hidden struct-return pointer id. Distinct from every synthetic pointer.
SRET_ID = 999


class Bail(Exception):
    """The body cannot be expressed; the caller declines the function."""


def split_ops(op_str):
    """Split an operand list on top-level commas, respecting `[...]`."""
    parts, depth, cur = [], 0, []
    for ch in op_str:
        if ch == "[":
            depth += 1
        elif ch == "]":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append("".join(cur).strip())
            cur = []
            continue
        cur.append(ch)
    if cur:
        parts.append("".join(cur).strip())
    return parts


def reg_num(op):
    m = re.fullmatch(r"[xw](\d+)", op)
    return int(m.group(1)) if m else None


# A conditional branch whose flags come from the instruction before it, mapped to
# the comparison the C must contain -- the NEGATION of the branch test, because
# the branch SKIPS the guarded block.
CMP_GUARDS = {
    "b.eq": "!=", "b.ne": "==",
    "b.lt": ">=", "b.ge": "<", "b.gt": "<=", "b.le": ">",
    "b.hi": "<=", "b.hs": "<", "b.lo": ">", "b.ls": ">=",
}


def wreg(op):
    """Widen a `wN` operand to its 64-bit `xN`; pass anything else through.

    The operand may be None. `parse_mem` returns `(None, None)` for a memory
    operand it cannot parse -- a SP-relative access with a register writeback,
    say -- and its callers are supposed to raise Bail on that. One of them did
    not, so the failure surfaced two frames later as a TypeError inside this
    regex rather than as the decline it was. Handling None here keeps every
    caller correct without auditing each one.
    """
    if op is None:
        return None
    m = re.fullmatch(r"w(\d+)", op)
    return "x" + m.group(1) if m else op


def parse_imm(text):
    if not text:
        return None
    t = text.strip()
    if t.startswith("#"):
        t = t[1:]
    t = t.strip("[]")
    try:
        return int(t, 0)
    except ValueError:
        return None


def parse_mem(op_str):
    """`(base, offset)` for `[x0, #0x18]`, or `(None, None)` if not that shape.

    Deliberately unchanged: it is the narrow form, and widening its return to a
    five-tuple would touch every caller for no gain. Indexed operands go through
    `parse_mem_idx`.
    """
    m = re.search(r"\[([^,\]]+)(?:,\s*(#[^\]]+))?\]", op_str)
    if not m:
        return None, None
    off = parse_imm(m.group(2)) if m.group(2) else 0
    if off is None:
        return None, None
    return m.group(1).strip(), off


def mem_reg_offset(op_str, state):
    """`('[x0, x8]', state)` -> `('x0', 0x4e5c)` when `x8` holds a constant.

        mov w8, #0x4e5c
        str wzr, [x0, x8]        <- *(uint32_t *)((char *)a0 + 0x4e5c) = 0

    This is *not* a register-indexed access. The second operand is a bare
    register with no extension, so `parse_mem_idx` rejects it -- but the register
    holds an immediate the body just materialised, so the whole address is known
    at compile time and it is an ordinary `[base, #off]`.

    The distinction that matters: a register holding a *constant* collapses to a
    displacement, whereas one holding a runtime value is a real index and needs
    the scaled-index path. Only the former is handled here; guessing the latter
    would silently miscompile.
    """
    m = re.fullmatch(r"\[\s*([A-Za-z0-9]+)\s*,\s*([A-Za-z0-9]+)\s*\]", op_str.strip())
    if not m:
        return None, None
    base, reg = m.group(1).strip(), wreg(m.group(2).strip())
    v = state.get(reg)
    if v is None or v[0] != "imm":
        return None, None
    return base, v[1]


def parse_mem_idx(op_str):
    """`(base, index, ext, scale, off)` for both plain and indexed operands.

        [x0, #0x18]          -> ('x0', None, None, None, 24)
        [x8, w1, uxtw #2]    -> ('x8', 'w1', 'uxtw', 4, 0)
        [x0, x1, lsl #3]     -> ('x0', 'x1', 'lsl',   8, 0)

    `scale` is a **byte** count. The `#n` on an ARM64 indexed operand is a *shift
    amount*, so the multiplier is `1 << n`: `uxtw #2` scales by 4, not 2. Emitting
    the shift directly halves every indexed access, which is wrong semantics
    rather than a failed match, so it has to be right in the source.

    `ext` fixes the index's signedness and therefore its C type: `sxtw` on a
    `w` register is a *signed* 32-bit index, `uxtw` an unsigned one, and `lsl` on
    an `x` register a 64-bit one.
    """
    m = re.fullmatch(
        r"\[\s*([A-Za-z0-9]+)"
        r"(?:\s*,\s*([A-Za-z0-9]+)\s*,\s*(uxtw|sxtw|lsl)(?:\s*#(0x[0-9a-f]+|\d+))?)?"
        r"(?:\s*,\s*#(-?(?:0x)?[0-9a-fA-F]+))?\s*\]\s*!?",
        op_str.strip())
    if not m:
        return None, None, None, None, None
    base, index, ext, shift, off = m.groups()
    if index and shift is None:
        return None, None, None, None, None
    scale = None
    if index:
        scale = 1 << (int(shift, 16) if shift.lower().startswith("0x") else int(shift))
    o = 0
    if off:
        try:
            o = int(off, 16) if off.lower().lstrip("-").startswith("0x") else int(off, 0)
        except ValueError:
            return None, None, None, None, None
    return base.strip(), (index.strip() if index else None), ext, scale, o


def access_width(mn, reg):
    """Byte width of a load/store from its mnemonic and register spelling.

    The register class alone decides the width for `mov`, and it used to be
    ignored there. Every other branch tests `mn in (...)` against a specific load
    or store mnemonic, and `mov` is none of them, so `mov w0, wzr` fell through
    to the 8-byte default and was modelled as `mov x0, xzr`.

    That is a real codegen difference -- the original writes a 32-bit zero and
    the candidate wrote a 64-bit one -- and it was one of the two largest
    remaining miss classes in `sdk`, reported as

        insn 1: orig ('mov', 'w0, wzr') vs new ('mov', 'x0, xzr')

    Width now comes from the register class for every mnemonic, with the
    explicit byte/halfword forms still taking precedence.
    """
    if mn in ("ldrb", "strb", "ldurb", "sturb"):
        return 1
    # `ldrsh`/`ldursh` are halfword *signed*; the width is still 2, which the
    # register class alone would not tell you -- `ldrsh w0` writes 2 bytes.
    if mn in ("ldrh", "strh", "ldurh", "sturh", "ldrsh", "ldursh"):
        return 2
    if mn in ("ldrsw", "ldursw"):
        return 4
    r = (reg or "").strip()
    if r.startswith("q"):
        return 16
    if r.startswith("w") or r.startswith("s"):
        return 4
    if r.startswith("b") or r.startswith("h"):
        return 1
    return 8


def _narrow_dst(dst, v):
    """Value `v` as written into register `dst`, preserving `w` vs `x`.

    A `w` destination means a 32-bit write. `wreg` collapses `w1` and `x1` to one
    state key, so without this the destination's width is invisible to Clang and it
    emits a 64-bit move. Only integers are narrowed: a pointer destination is a
    pointer whatever register class spelled it, and narrowing one would silently
    change a load's meaning.
    """
    d = (dst or "").strip()
    if not d.startswith("w"):
        return v
    try:
        t = _rw(v)
    except Exception:                                   # noqa: BLE001
        return v
    if t in ("void*", "uint32_t", "int32_t", "uint16_t", "int16_t",
             "uint8_t", "int8_t"):
        return v
    return ("cast", "uint32_t", v)


def _rw(v):
    """The C type name for an integer value tuple's result width."""
    k = v[0]
    if k == "imm":
        return v[2]
    if k == "load":
        _, n, off, w, signed = v
        return S[w] if signed else U[w]
    if k == "expr":
        return v[4]
    if k in ("sel", "cset"):
        return v[5] if k == "sel" else v[3]
    if k == "fpun":
        if v[3] == "float":
            return "uint32_t" if v[2] == "to_int" else "float"
        return "uint64_t" if v[2] == "to_int" else "double"
    if k == "fpneg":
        return "double"
    if k == "arg":
        return v[2] if len(v) > 2 else "void*"
    if k == "argval":
        return v[2]
    if k == "raw_call":
        return v[3]
    if k == "call_n":
        # The declared return type of the callee. Like `raw_call`, the result is
        # whatever the caller said the function returns -- which is the whole
        # reason the prototype is supplied rather than inferred.
        return v[3]
    if k == "cast":
        return v[1]
    if k == "un":
        return v[3]
    # `addr`/`addr_i` render as `char *` expressions, so the result type has to
    # be a pointer. Calling them uint64_t produced an integer-typed expression
    # built from a pointer, which is the same class of error as arithmetic on
    # void* one level up.
    if k in ("addr", "addr_i"):
        return "void*"
    return "uint64_t"


def ptr_add(base, off):
    b = "(char*)(%s)" % base
    if off == 0:
        return b
    if 0 < off < 4096:
        return "%s + %d" % (b, off)
    if -4096 < off < 0:
        return "%s - %d" % (b, -off)
    return "%s + %dL" % (b, off)


def call_arg(rendered):
    """Spell one already-rendered call argument as a `uintptr_t` expression.

    Module-level because both the `call_n` render arm and the void-call statement
    path need it, and the two must agree: the same argument has to be spelled the
    same way whether it is nested in a return expression or emitted as a
    statement, or the same body produces two different programs depending on
    whether the callee returns void.
    """
    ct, expr = rendered
    if ct == "uintptr_t":
        return expr
    return "((uintptr_t)(%s))" % expr


def nm(n):
    """C name for a base id: a real argument, or a synthetic pointer.

    Synthetic ids are `SYNTH_BASE + index` and their locals are `p<index>`,
    declared in allocation order, so a synthetic pointer may reference an
    earlier one. Module level rather than a closure because `_emit` needs it
    too, and `_emit` is not nested inside `translate`.
    """
    return "a%d" % n if n < SYNTH_BASE else "p%d" % (n - SYNTH_BASE)


def arg_reg(base):
    """The argument-register number for an operand used as a value or base.

    Callers reach here for two different things -- a memory base and an arithmetic
    operand -- and the failure message used to assert the first unconditionally.
    That is how `csinv w0, w8, wzr, eq` was reported as "memory base 'wzr' is not
    an argument register": `wzr` was the false-arm *value*, not a base, and the
    message sent the investigation after absolute-address data symbols (the `adrp`
    blocker) for a body containing no address at all.

    A zero register is a constant, not a failed lookup, so it is reported as one
    at every call site. The wording stays accurate about what was being resolved.
    """
    if base in ("xzr", "wzr"):
        raise Bail("operand is the zero register: it means the constant 0, "
                   "not a value in a register")
    if base == "sp":
        raise Bail("memory base is sp: a stack slot is not modelled")
    n = reg_num(wreg(base))
    if n is None or n > MAX_ARG:
        raise Bail("operand %r is not an argument register (x0-x%d)"
                   % (base, MAX_ARG))
    return n


def base_args_of(insns):
    """Argument registers this body uses as a memory base.

    One pass over the instruction list, before any value is built.

    `_value_arg` produces `("argval", n, "uint32_t")` without consulting
    `ptr_args`, so an argument's pointer role is invisible to the arithmetic path
    even when the body clearly treats it as one. Traced on `sdk@0x3989b0`:

        sub w8, w1, w0 ; cmp x1, #0 ; csel w8, wzr, w8, eq ; strh w8, [x0, #0x16]

        _value_arg('w0') -> ('argval', 0, 'uint32_t')   ptr_args=set()

    and the emitted body was `(uint32_t)a1 - (uint32_t)a0` on a function whose
    `a0` is `void*`. That is a compile error, not a mismatch, so it fails the
    whole batch -- 125 sdk candidates, and no MATCH line for the module at all.

    Computing the set up front means the arithmetic path can refuse to treat a
    pointer as an integer, which is the only thing that makes the difference
    between declining one body and losing a batch.
    """
    found = set()
    for i in insns:
        if "[" not in i.op_str:
            continue
        base = i.op_str[i.op_str.index("[") + 1:].split(",")[0].strip()
        if base in ("sp", "xzr", "wzr"):
            continue
        n = reg_num(wreg(base))
        if n is not None and n <= MAX_ARG:
            found.add(n)
    return found


class StraightLine:
    def __init__(self, insns):
        self.insns = insns

    def translate(self, ident, calls=None, guard=None, tail=None, dcut=None):
        """Translate the walked body into a C function.

        `guard` is the index into `body` of a CONDITIONAL BRANCH whose target is
        the trailing `ret` -- a guarded block. It is `None` for every existing
        caller, and `None` means this function behaves exactly as it did before
        the parameter existed. That is the entire safety story: none of the
        verified bodies pass a guard, so none of them can be disturbed by any of
        the guarded code below.

        The walk stays a SINGLE pass. A guarded block's statements read values
        the pre-block produced -- `ldr x0,[x0,#0x50] ; cbz x0,ret ; ... ; bl F`
        has the block call the pointer the first instruction loaded -- so two
        passes with two `state` dicts cannot express it. Instead the walk
        snapshots `state` and the two list lengths when it reaches the guard, and
        `_emit` partitions on those.

        See decomp/docs/control_flow.md.
        """
        insns = self.insns
        if tail is not None:
            # A TAIL CALL. The body is a straight-line prefix and then `b <target>`;
            # the target does the returning, so there is no `ret` here.
            #
            #     add  x2, x0, #0xec
            #     add  x3, x0, #0xe8
            #     mov  w4, #1
            #     b    target
            #
            # is
            #
            #     return target(a0, a1, a0 + 0xec, a0 + 0xe8, 1);
            #
            # -- the prefix sets up the ARGUMENT REGISTERS and the branch
            # forwards them. `tail` is (callee name, arity).
            # AN INDIRECT TAIL CALL.
            #
            # `br <reg>` is a tail call through a pointer, and the terminator
            # check refused it outright:
            #
            #     raise Bail("tail body does not end in b")
            #
            # which stopped 1,762 bodies whose every other mnemonic the translator
            # already handles. The obstacle was never the instruction -- it was
            # that `tail` is (callee NAME, arity) and a pointer has no name.
            #
            # So `tail[0] is None` means "indirect", and the callee is rendered
            # from the branch register's value instead. Everything else about a
            # tail call is unchanged: the branch is still the terminator, the
            # prefix still sets the argument registers, and the branch still
            # forwards them.
            #
            #     ldr x2, [x8, #0x28] ; br x2      is   return ((T(*)(...))p1)(a0, ...)
            #
            # A DIRECT `b` keeps its name and its own path. There is no "try both"
            # fallback: the terminator's mnemonic decides which it is.
            if not insns or insns[-1].mnemonic not in ("b", "br"):
                raise Bail("tail body does not end in b or br")
            body = insns[:-1]
        else:
            if not insns or insns[-1].mnemonic != "ret":
                raise Bail("body does not end in ret")
            body = insns[:-1]
        if not body or len(body) > MAX_INSNS:
            raise Bail("empty body, or %d instructions > MAX_INSNS=%d" % (len(body), MAX_INSNS))
        for _pf, i in enumerate(body):
            # The guard is the one instruction the pre-filter must let through:
            # `cbz` is not in any accepted list, because COND_MNEMONICS is the
            # SELECT family (csel/cset) and not the branch family.
            if guard is not None and _pf == guard:
                continue
            if dcut is not None and _pf == dcut:
                # The unconditional `b` of a DIAMOND. It is a branch, not a
                # terminator, so it produces no statement -- it is the boundary
                # between ARM_A and ARM_B. The pre-filter must let it through for
                # the same reason it lets the guard through, or it is declined as
                # "unsupported mnemonic 'b'" before anything else happens.
                continue
            # This is a whole-body pre-filter, and it runs before any of the
            # per-instruction handlers below. Anything missing here is declined as
            # "unsupported mnemonic" no matter how much the handler underneath
            # could have done with it -- which is why adding the bitwise handlers
            # changed nothing at all until this list was widened.
            if (i.mnemonic not in LOADS and i.mnemonic not in STORES
                    and i.mnemonic not in PAIR_LOADS
                    and i.mnemonic not in PAIR_STORES
                    and i.mnemonic not in ("add", "mov", "sub", "bl", "adrp", "adr")
                    and i.mnemonic not in BITWISE_MNEMONICS
                    and i.mnemonic not in FLAG_MNEMONICS
                    and i.mnemonic not in COND_MNEMONICS
                    and i.mnemonic not in MUL_MNEMONICS
                    and i.mnemonic not in WIDEN_MNEMONICS
                    and i.mnemonic not in FP_ARITH_MNEMONICS
                    and i.mnemonic not in DIV_MNEMONICS
                    and i.mnemonic not in FP_MNEMONICS):
                raise Bail("unsupported mnemonic %r" % (i.mnemonic,))

        state = {}
        saw_call = False
        ptr_args = set()      # argument registers used as a pointer
        # ...and the same set computed from the whole body up front. `_value_arg`
        # cannot see pointer-ness when it runs, so the arithmetic paths consult
        # this instead. See `base_args_of`.
        base_args = base_args_of(insns)
        used_args = set()      # every argument register the body reads
        stmts = []             # (width, base_reg, offset, value) deferred
        # Calls to a void-returning callee. Collected separately because `pre`
        # does not exist yet during the walk -- it is built during emit -- and
        # emitted ahead of the deferred stores. That ordering is an approximation
        # and is only safe because the arguments are pure expressions over values
        # already computed: nothing has to happen between evaluating them and the
        # call. A body where a store *must* land between two calls is rejected by
        # the byte comparison rather than matched wrongly.
        call_stmts = []

        # A memory base may be a *loaded pointer*, not only an incoming argument.
        #
        #     ldr x9, [x0, #0x30]
        #     ldr x8, [x9, #0x48]        <- base x9 was never an argument
        #
        # `arg_reg` rejects anything outside x0-x3, so every such body was
        # declined -- 236 of them, the largest bail class here, with a further
        # 148 declined because `add`/`sub` was applied to a loaded value. Each
        # loaded pointer gets a synthetic id and a `void *` local, which is
        # exactly what the original's register holds.
        synth = []             # (id, initialiser expression), in allocation order
        synth_of = {}          # register -> id, so one load feeds one local
        # Pages referenced by an `adrp` in this body. The caller needs the list to
        # emit one `extern const char adrp_<page>[];` per entry in the batch head;
        # without the declaration the source does not compile, and a batch is
        # poisoned by the first failure in it.
        # Synthetic locals that must be pinned to a register at emit time.
        # Register destinations written by a pair load whose second half may be
        # dead: (reg, base_id, offset, width).
        pair_seconds = []
        pinned = set()
        adrp_pages = set()

        def resolve_base(base):
            """(id, is_real_arg) for a memory base register, or raise Bail."""
            if base == "sp":
                raise Bail("memory base is sp: a stack slot is not modelled")
            r = wreg(base)
            if (r not in state
                    and re.match(r"^[xw]\d+$", r)
                    and int(r[1:]) > MAX_ARG):
                # A register above x3 that the body never writes is the hidden
                # struct-return pointer. AArch64 passes the destination in x8 for
                # a return larger than 16 bytes, which is why these bodies store
                # through a register nothing ever set:
                #
                #     ldr w9, [x0, #0x58] ; str w9, [x8] ; ...
                #
                # Declaring a struct return reproduces it exactly:
                #
                #     typedef struct { unsigned char b[32]; } S;
                #     S f(void *a0) { S r;
                #       *(unsigned int *)((char *)&r + 0) = ...; ... return r; }
                #
                # Return types are absent from Itanium mangling, so the symbol is
                # still `_Z1fPv` and the signature is untouched.
                return SRET_ID, False
            if r in state:
                if r in synth_of:
                    return synth_of[r], False
                v = state[r]
                if v[0] == "addr":
                    # Already a pointer: either an argument plus displacement, or
                    # a synthetic pointer. Reuse its id rather than inventing a
                    # second local for the same address.
                    #
                    # "The same address" only holds at offset ZERO. Returning
                    # `v[1]` unconditionally discarded `v[2]`, so the displacement
                    # an `add` had just accumulated was thrown away on the way to
                    # the access:
                    #
                    #     adrp x8, #0x1b15000 ; add x8, x8, #0xfc0
                    #     ldr w0, [x8, w0, sxtw #2]
                    #
                    # resolved to the page alone, and the emitted code carried
                    # `add x8, x8, #0` where retail has `#0xfc0` -- a load from
                    # the wrong address in every body of this shape. The offset is
                    # part of the address, so a non-zero one gets its own local.
                    if v[2] == 0:
                        return v[1], False
                    key = SYNTH_BASE + len(synth)
                    synth.append((key, ptr_add(nm(v[1]), v[2])))
                    pinned.add(key)
                    return key, False
                # Only an unsigned 64-bit load can be a pointer. A signed one is
                # a value, and guessing here would silently mis-type the access.
                if v[0] == "load" and v[3] == 8 and not v[4]:
                    key = SYNTH_BASE + len(synth)
                    synth.append((key, "*(uint64_t *)(%s)" % ptr_add(nm(v[1]), v[2])))
                    synth_of[r] = key
                    return key, False
                if v[0] == "addr_i":
                    # An indexed address is already a complete pointer
                    # expression, so it can serve as the base of a later access:
                    #
                    #   ldr x8, [x0, #8] ; add x8, x8, w1, uxtw #2 ; ldr w0, [x8, #0x48]
                    #
                    # It was refused as "holds a addr_i, not a pointer" even
                    # though `addr_i` renders to exactly such an expression --
                    # the value kind existed before any consumer of it as a base.
                    #
                    # The index is rendered *here* rather than deferred, which is
                    # sound only while it needs no `names` lookup beyond an
                    # argument or a pre-rendered string. A load or a computed
                    # expression as the index still declines, rather than
                    # emitting an address that is wrong.
                    # The index is carried as a value tuple and rendered at emit
                    # time. It used to have to be renderable on the spot, which
                    # ruled out any index that was itself a load or a computed
                    # expression -- 11 bodies declined as "indexed address as a
                    # base has a deferred index" for exactly that reason.
                    key = SYNTH_BASE + len(synth)
                    synth.append((key, v))
                    synth_of[r] = key
                    return key, False
                # An argument, a loaded integer or a computed expression used as
                # a memory base is a pointer in the *original* -- the hardware
                # does not care what type the value was produced as. So the base
                # is materialised through an explicit uintptr_t cast rather than
                # refused, which is what "holds a argval, not a pointer" and
                # "holds a expr, not a pointer" (11 bodies between them) used to
                # do.
                #
                # `imm` is deliberately excluded: a bare immediate as a base
                # would be an absolute address, and the cast would hide a
                # misparse rather than express anything real.
                # `local` is a CALL RESULT, and a call result that is dereferenced is
                # exactly as much a pointer as a loaded one. Leaving it out made
                # every non-void prototype untranslatable for a body shaped:
                #
                #     ldr x0, [x0, #0x50] ; bl F ; ldp x8, x1, [x0]
                #                                ^-- x0 is the RETURN here
                #
                # with the return modelled, the `ldp` base is a local and the
                # body refused with "memory base 'x0' holds a local, not a
                # pointer" -- for every non-void prototype, which is every
                # prototype the body actually needs. Measured on
                # main@0x2aa630: 7 translatable variants, all ret=void.
                if v[0] in ("arg", "argval", "expr", "shift", "load", "local"):
                    key = SYNTH_BASE + len(synth)
                    synth.append((key, v))
                    synth_of[r] = key
                    return key, False
                raise Bail("memory base %r holds a %s, not a pointer" % (base, v[0]))
            return arg_reg(base), True

        idx_args = {}      # arg number -> C type, for indexed operands
        # arg number -> C type for a FLOATING-POINT argument.
        #
        # This entry is the load-bearing part of floating point. On AArch64
        # `d0` and `x0` are the same storage, so no new value kind is needed --
        # but `u64 f(double x)` and `u64 f(u64 x)` take their argument in the
        # same register and differ only in what Clang emits to convert it. The
        # parameter has to be DECLARED double or no pun is ever produced:
        #
        #     u64 f1(double a0){ union { double d; u64 u; } v; v.d=a0; return v.u; }
        #         ->  fmov x0, d0          (main@0x66f480, measured)
        #     u64 f2(uint64_t a0){ return a0; }
        #         ->  (nothing; a0 is already in x0)
        fp_slots = {}   # FP register index -> C type, resolved at emit time

        def index_expr(index, ext, scale, base_id):
            """Address contribution of an index register, as a C expression.

            The register is an incoming parameter, so it is declared here rather
            than left implicit. Its signedness comes from the extension written
            on the instruction: `sxtw` means a *signed* 32-bit index, and `lsl` on
            an `x` register a 64-bit one.
            """
            if index[0] == "x":
                icy = "uint64_t"
            elif ext in EXTEND_TYPES:
                icy = EXTEND_TYPES[ext][0]
            else:
                icy = "uint32_t"
            # `state` first, the parameter list only as a fallback.
            #
            # Reaching for `arg_reg` unconditionally meant an index register could
            # only ever render as its incoming parameter `aN`, whatever the body
            # had done to it. That is invisible until a call sits between the two:
            #
            #     bl  <callee>                 ; x0 is the callee's return
            #     ldr w0, [x8, w0, sxtw #2]    ; the index is x0 -- the return
            #
            # rendered as `a0`, which has to survive the call, so Clang spills it
            # to x19 and emits three instructions the original does not have:
            #
            #     ours  str x19 ; mov w19,w0 ; bl ; ldr w0,[x8,w19,sxtw#2] ...
            #
            # The index is returned as a value tuple, not a string, so it renders
            # at emit time with the real names -- the same reason call arguments
            # are held raw during the walk.
            _r = wreg(index)
            _v = state.get(_r)
            if _v is not None:
                # Keep the scale. The fallback below returns a string that has
                # `* %d` in it, and the `load_i` render arm does not apply one --
                # so returning the bare value silently dropped `* 4` from
                # `ldr w0, [x8, w0, sxtw #2]` and Clang then indexed by elements
                # rather than bytes. An `expr` node is the one form that renders
                # recursively at emit time, which is what a walk-time reference
                # needs.
                _vt = _rw(_v)
                if scale == 1:
                    return _v
                return ("expr", "*", _v, ("imm", scale, _vt), _vt)
            n = arg_reg(index)
            idx_args[n] = icy
            # `used_args` too, not just the type. The parameter list below is
            # built over `range(max(used_args) + 1)`, so an index register whose
            # number exceeds the highest *base* register was silently dropped
            # from the signature while `idx_args` still held its type:
            #
            #     void* f_29e6b0(void* a0) { ... ((uintptr_t)a1 * 4) ... }
            #                                                    ^ undeclared
            #
            # `f_29e6b0` loads its base from `[x0]` and indexes by `w1`, so `a0`
            # was the only thing in `used_args` and the parameter list stopped at
            # one entry. Type was recorded, existence was not.
            used_args.add(n)
            return "(uintptr_t)%s * %d" % (nm(n), scale)

        # Comparison flags: a pseudo-register, since no instruction names it.
        flags = None
        # Guarded-block bookkeeping. All None unless `guard` was passed.
        _gstate = None       # state as it stood BEFORE the guarded block
        _gn_stmts = None     # len(stmts) at the guard
        _gn_calls = None     # len(call_stmts) at the guard
        _gval = None         # value tuple the guard tests
        # A DIAMOND's second cut: `len(stmts)` where ARM_B begins, i.e. at the
        # unconditional `b`. `None` unless `dcut` was passed.
        _gn_dstmts = None
        _gform = None        # "nz" -> block runs when the value is NON-zero
        for _gi, i in enumerate(body):
            if dcut is not None and _gi == dcut:
                # ARM_A is finished. The `b` that follows skips over ARM_B, so
                # everything emitted from here on belongs to the else-arm.
                _gn_dstmts = len(stmts)
                continue
            if guard is not None and _gi == guard:
                _gstate = dict(state)
                _gn_stmts = len(stmts)
                _gn_calls = len(call_stmts)
                _gval, _gform = self._guard_test(
                    i, state, used_args, idx_args, ptr_args,
                    prev=body[_gi - 1] if _gi else None)
                # The guard's value needs a NAME.
                #
                # Rendered inline it appears twice -- once in the condition, once
                # as the callee's argument -- and as an expression Clang is free
                # to leave in a scratch register:
                #
                #     ldr x8, [x0, #0x50]          vs retail's  ldr x0, [x0, #0x50]
                #
                # A local is used twice, so it must be live in a register, and the
                # register allocator puts it where retail has it. The same trick
                # the `synth` mechanism already applies to a displaced address,
                # for the same reason.
                #
                # Only an unsigned 64-bit LOAD is eligible. Anything else -- a
                # narrower load, a signed one, an argument -- is a value whose
                # type the guard did not establish, and re-typing it here would
                # silently change the access.
                if _gval[0] == "load" and _gval[3] in U and not _gval[4]:
                    # The load s OWN WIDTH, not 64 bits. Restricting this to an
                    # unsigned 64-bit load left every `ldrb` guard with the
                    # original defect -- the value stayed an inline expression,
                    # Clang kept it in a scratch register, and the candidate grew
                    # a `mov x0, xzr ; ret` tail the original does not have:
                    #
                    #   retail  ldr x0, [x0, #0x20] ; cbz x0, +N ; ... ; ret
                    #   ours    ldr x8, [x0, #0x20] ; cbz x8, +N ; ... ; mov x0,xzr ; ret
                    _gw = _gval[3]
                    _gkey = SYNTH_BASE + len(synth)
                    synth.append((_gkey, "*(%s *)(%s)"
                                  % (U[_gw], ptr_add(nm(_gval[1]), _gval[2]))))
                    # The type is what the DECLARATION says, not what the value
                    # would like to be.
                    #
                    # A synth local is emitted as `void* <name> = ...;`, so
                    # claiming `uintptr_t` here made `call_arg` believe no cast
                    # was needed -- it only adds one when the rendered type is not
                    # already `uintptr_t` -- and produced
                    #
                    #     ((void (*)(uintptr_t))&g)(p0);
                    #     error: cannot initialize a parameter of type 'uintptr_t'
                    #            with an lvalue of type 'void *'
                    #
                    # C++ has no implicit void* -> integer, so the whole translation
                    # unit failed to compile. `compile_resilient` on a single
                    # candidate returns [] for a failed TU, so the body simply
                    # produced nothing -- which is what "0 verified" looked like
                    # for four beats while the C was in fact one cast away from
                    # correct.
                    _gval = ("local", nm(_gkey), "void*")
                    # And REDEFINE the register, not just the condition. The
                    # call argument is resolved from `state` when the walk reaches
                    # the `bl`, and without this the condition used the local
                    # while the argument still rendered the original load:
                    #
                    #   void *p0 = *(uint64_t *)(... + 80);
                    #   if (p0) { g((uintptr_t)(*(uint64_t *)(... + 80))); }
                    #
                    # -- the load twice, and Clang puts it in a scratch register
                    # for exactly that reason. One use, one register, x0.
                    _gr = i.op_str.split(",")[0].strip()
                    _gm = re.fullmatch(r"[a-z](\d+)", _gr)
                    if _gm:
                        state[_gr[0] + _gm.group(1)] = _gval
                continue
            mn = i.mnemonic
            ops = split_ops(i.op_str)

            # ---- flags producers -------------------------------------
            if mn in FLAG_MNEMONICS:
                # `cmp Rn, #imm, lsl #n` -- the shifted-immediate form.
                #
                # `#n` after the immediate is a *shift*, so the compared value is
                # `imm << n`, not `imm`. Bodies that branch on a large constant use
                # it constantly (`cmp w0, #0x200, lsl #12` is a 2 MiB threshold).
                # Reading it as a plain 0x200 compares the wrong value, which
                # compiles, matches nothing, and gives no clue why.
                #
                # The shift is kept as a `shift` value rather than folded into the
                # literal, because `(1 << 20)` and `1048576` are the same number
                # and Clang materialises them the same way -- but `imm << n` is
                # not always foldable, and a pre-folded constant loses the form
                # the instruction used.
                #
                # Built as a value tuple directly. Rewriting `ops` into a
                # parenthesised string and re-parsing it -- the first attempt --
                # fed `'(#0x200) << 12'` to `parse_imm`, which declined it as
                # "not an argument register", so the error named a register for an
                # operand that was never one.
                _shifted = None
                if len(ops) == 3:
                    _parts = ops[2].split()
                    # `asr` is an extend like `lsl`, not a separate shift pass.
                    # It is the arithmetic shift right, and it is overwhelmingly
                    # one of two idioms -- 595 forms in the four modules:
                    #
                    #   add x0, x8, x9, asr #1      x + (y >> 1)          ~250
                    #   bic w8, w8, w8, asr #31     w & ~((i32)w >> 31)   ~100
                    #   and w0, w0, w0, asr #31     w &  ((i32)w >> 31)    ~26
                    #
                    # Measured, clang 5.0.1 -O3, each exact:
                    #
                    #   x + (u64)((i64)y >> 1)   -> add x0, x0, x1, asr #1
                    #   x &  ((i32)x >> 31)      -> and w0, w0, w0, asr #31
                    #   x & ~(u32)((i32)x >> 31) -> bic w0, w0, w0, asr #31
                    #
                    # Note `(u64)((i64)y >> 1)` and NOT `(u64)y >> 1`: the
                    # unsigned shift gives `lsr` and a separate add, which is two
                    # instructions instead of one fused extend.
                    if _parts[0] not in ("lsl", "asr") or len(_parts) != 2:
                        raise Bail("%s extend %r is not supported"
                                   % (mn, ops[2]))
                    _sh = parse_imm(_parts[1])
                    if _sh is None:
                        raise Bail("%s shift %r is not a literal" % (mn, _parts[1]))
                    _shifted = (ops[1], _sh, _parts[0])
                elif len(ops) != 2:
                    raise Bail("%s with %d operands is not modelled" % (mn, len(ops)))
                _a = state.get(wreg(ops[0]))
                if _a is None:
                    _a = self._value_arg(ops[0], used_args, idx_args, ptr_args)
                if _a is None:
                    raise Bail("%s operand %r is not a known value" % (mn, ops[0]))
                if _shifted is not None:
                    _lit = parse_imm(_shifted[0])
                    if _lit is None:
                        raise Bail("%s immediate %r is not a literal"
                                   % (mn, _shifted[0]))
                    _b = ("shift", "lsl", _shifted[1],
                          ("imm", _lit, _rw(_a)))
                else:
                    # `else:` alone is not enough here. Assigning `_b` inside the
                    # shifted branch and then falling through to the generic
                    # `if _b is None:` re-parsed `ops[1]` -- which is the *shift
                    # token*, `#12` -- and wrapped the whole shift tuple in another
                    # `("imm", ...)`. The result was
                    # `("imm", ("shift", "lsl", 12, ...), ...)`, whose second
                    # element is a tuple, so `_render` raised
                    # `TypeError: '>=' not supported between tuple and int` from
                    # the `imm` arm.
                    #
                    # Both cases are handled here and nothing below re-reads `ops`.
                    _lit0 = parse_imm(ops[1])
                    if _lit0 is not None:
                        _b = ("imm", _lit0, _rw(_a))
                    else:
                        _b = state.get(wreg(ops[1]))
                        if _b is None:
                            _b = self._value_arg(ops[1], used_args, idx_args,
                                                 ptr_args)
                        if _b is None:
                            raise Bail("%s operand %r is not a known value"
                                       % (mn, ops[1]))
                if _a[0] in ("addr", "addr_i"):
                    raise Bail("%s on an address value" % (mn,))
                # The compared-against operand must not be a pointer.
                #
                # `_value_arg` refuses an argument already claimed as a memory
                # base, which is what normally keeps `void* a0` out of integer
                # arithmetic. The shifted-immediate path resolves its own operand
                # and bypassed that, so `cmp w8, w0, lsl #n` produced
                #
                #     (uint32_t)a1 - (uint32_t)a0
                #
                # i.e. pointer arithmetic on a `void*`, which is
                # `error: cast from pointer to smaller type 'uint32_t' loses
                # information` and killed a 125-candidate sdk batch. The declining
                # translator is honest; the one that emits invalid C takes the
                # whole batch with it, so this check has to run before emission.
                if isinstance(_b, tuple) and _b[0] in ("addr", "addr_i"):
                    raise Bail("%s compares a value against an address" % (mn,))
                if isinstance(_b, tuple) and _b[0] == "shift" \
                        and isinstance(_b[3], tuple) \
                        and _b[3][0] in ("addr", "addr_i"):
                    raise Bail("%s compares a value against an address" % (mn,))
                flags = (mn, _a, _b)
                continue

            # ---- branchless conditionals ------------------------------
            if mn in COND_MNEMONICS:
                if flags is None:
                    raise Bail("%s with no preceding comparison" % (mn,))
                dst = ops[0]
                cty = _rw(flags[1])
                if mn in ("cset", "csetm", "fcset", "fcsetm"):
                    # `cset Rd, cond` -> (cond ? 1 : 0)
                    state[wreg(dst)] = ("cset", ops[1], flags, cty)
                    continue
                if len(ops) == 3 and mn in ("cinc", "cinv", "cneg"):
                    # The 3-operand spelling of the same operation:
                    #     cinc  Rd, Rn, cond   ->  cond ? Rn + 1 : Rn
                    #     cinv  Rd, Rn, cond   ->  cond ? Rn - 1 : Rn
                    #     cneg  Rd, Rn, cond   ->  cond ? -Rn     : Rn
                    #
                    # `cinc`/`cinv` are 4-operand in their `csinc`/`csinv` form
                    # and 3-operand in their own, and only the latter appears in
                    # bodies that chain several of them through `csel`. Treated as
                    # a `csel` whose false arm is the unmodified Rn, which is
                    # exactly what it is.
                    #
                    # This was declined as "operand 'ne' is not an argument
                    # register" -- the condition code was read as an operand by
                    # the 4-operand path below. The message named a register that
                    # never appears in the instruction.
                    _rn = state.get(wreg(ops[1]))
                    if _rn is None:
                        _rn = self._value_arg(ops[1], used_args, idx_args, ptr_args)
                    if _rn is None:
                        raise Bail("%s operand %r is not a known value"
                                   % (mn, ops[1]))
                    _true = _rn
                    if mn == "cneg":
                        _true = ("expr", "-", _rn, ("imm", 0, _rw(_rn)), _rw(_rn))
                    else:
                        _true = ("expr", "+" if mn == "cinc" else "-", _rn,
                                 ("imm", 1, _rw(_rn)), _rw(_rn))
                    state[wreg(dst)] = ("sel", ops[2], _true, _rn, flags, _rw(_rn))
                    continue
                # `csel Rd, Rn, Rm, cond` -> (cond ? Rn : Rm)
                #
                # The `*inc`/`*inv`/`*neg` forms differ from `csel` only in what
                # they do to Rm when the condition is false, so they all reduce to
                # the same `(cond ? Rn : <transformed Rm>)` shape. Handling them
                # here rather than as separate mnemonics keeps one code path.
                #
                # `wzr`/`xzr` as an operand means "the constant 0", not a register
                # with no value. `csinv w0, w8, wzr, eq` is `w8 ? 0 : w8`, and it
                # was declined because `_value_arg` sent `wzr` to `arg_reg`, which
                # reported "memory base 'wzr' is not an argument register" -- an
                # error that names a *memory base* for an operand that is neither
                # a base nor memory at all. That message sent the original
                # investigation after absolute-address data symbols, which is the
                # `adrp` blocker, for a body that has no address in it.
                def _sel_operand(reg):
                    if reg in ("xzr", "wzr"):
                        # Width follows the destination register: `csel w0, ...,
                        # xzr, ...` is still a 32-bit select.
                        return ("imm", 0, cty)
                    v = state.get(wreg(reg))
                    if v is None:
                        v = self._value_arg(reg, used_args, idx_args, ptr_args)
                    return v
                _x = _sel_operand(ops[1])
                _y = _sel_operand(ops[2])
                if _x is None or _y is None:
                    raise Bail("%s operands are not known values" % (mn,))
                # The false-arm transform. `inc` adds one, `inv` and `neg`
                # subtract, `csinv`/`csneg`/`cinv` invert. `csel` leaves it alone.
                _neg = mn in ("csinv", "csneg", "cinv", "cneg")
                _inc = mn in ("csinc", "cinc")
                if _neg or _inc:
                    _y = ("expr", "-" if _neg else "+", _y,
                          ("imm", 1, _rw(_y)), _rw(_y))
                state[wreg(dst)] = ("sel", ops[3], _x, _y, flags, _rw(_x))
                continue

            if mn in ("adrp", "adr") and len(ops) == 2:
                # `adrp xD, #page` is an *address*, not an integer.
                #
                # Modelling it as an immediate is what the first attempt did, and
                # it is wrong in a way that looks like a different missing feature:
                # the page address then lands in a register where the load path
                # requires a pointer, and the body declines with
                #
                #     memory base 'x8' holds a imm, not a pointer        (66 bodies)
                #     memory base 'x0' holds a local, not a pointer      (34 bodies)
                #
                # which is the *same* error as not handling adrp at all. Measured:
                # substituting `adrp` with `mov` of the same constant translated
                # 139 of 277 and declined 138 -- and 107 of those 138 declined for
                # this reason. So the real prize is about 246, not 139.
                #
                # The value is anchored to a declared global rather than to a
                # literal, because a literal cannot be relocated and an `adrp` is
                # a relocation. The caller must declare, in the batch head:
                #
                #     extern const char adrp_<page>[];
                #
                # `const` is not optional. Under `-fPIC` a non-const global of
                # default visibility is reached through the GOT -- `adrp` then
                # `ldr` -- and no source produces `adrp`/`add` instead. That is the
                # same constraint `strlit_match.py` records, and the reason it
                # measured 239/239.
                m = _PAGE_OP.search(ops[1])
                if not m:
                    raise Bail("%s operand %r is not a literal page" % (mn, ops[1]))
                page = int(m.group(1), 16)
                dst = wreg(ops[0])
                # NOT recorded in `synth_of`.
                #
                # `synth_of` means "this register currently holds the load it was
                # produced from", and `resolve_base` consults it *first*:
                #
                #     if r in synth_of: return synth_of[r], False
                #
                # Registering the adrp-anchored register there therefore poisons
                # every later access through it: once the register is overwritten
                # by a load, `state` holds that load but `synth_of` still holds the
                # `adrp` anchor, and the next access resolves back to the anchor.
                # A two-level chain collapses to one dereference of the page:
                #
                #     adrp x9,#0x2498000 ; ldr x9,[x9,#0xb40] ; ldr x0,[x9]
                #     ->  *(uint64_t *)((char *)p0)          offset gone
                #     instead of
                #     ->  *(uint64_t *)(*(uint64_t *)((char *)p0 + 0xb40))
                #
                # which is one instruction short of retail on every body with a
                # dereferenced pointer chain. The `addr` branch of `resolve_base`
                # already returns the anchor, so nothing is lost by staying out of
                # `synth_of`.
                key = SYNTH_BASE + len(synth)
                synth.append((key, "&adrp_%x" % page))
                adrp_pages.add(page)
                state[dst] = ("addr", key, 0)
                continue

            if mn == "bl" and len(ops) == 1:
                # A call. See PAIR_LOADS' sibling note above for why the
                # prototype is supplied rather than inferred.
                #
                # The arguments are simply the current values of x0..x{n-1}, and
                # `state` already tracks exactly that -- every earlier instruction
                # has written its result into `state[wreg(dst)]`. So no separate
                # liveness pass is needed: the value that would have been passed
                # is the value the translator has been building all along.
                _t = int(ops[0].lstrip("#"), 16)
                _info = (calls or {}).get(_t)
                if _info is None:
                    raise Bail("call target %#x has no supplied prototype" % _t)
                _args = []
                for _i in range(int(_info["nargs"])):
                    _r = "x%d" % _i
                    _v = state.get(_r)
                    if _v is None:
                        _v = self._value_arg(_r, used_args, idx_args, ptr_args)
                    if _v is None:
                        raise Bail("call argument %s is not a known value" % _r)
                    _args.append(_v)
                _ret = _info.get("ret") or "uint64_t"
                saw_call = True
                # The call is ALWAYS recorded as a statement, and the value in x0
                # becomes a reference to a local that statement defines.
                #
                # Recording only the value was wrong in a way that looked like a
                # mismatch rather than a dropped instruction. `StraightLine`
                # composes one expression per value, so a `call_n` node that
                # nothing reads is never rendered: the call silently disappears
                # from the emitted C. Measured on `main@0x130b80`:
                #
                #     retail  stp/mov ; ldr w1,[x1,#0x10] ; add x0,x0,#0x10
                #             mov x5,x6 ; bl #0x130bf0 ; mov w0,#1 ; ldp ; ret
                #     ours    mov w0, #1 ; ret
                #
                # A fire-and-forget call -- result discarded, which is common -- had
                # no representation at all, and 377 of 432 otherwise-ready bodies
                # were in this state. A statement cannot go unreferenced.
                _alias = "%s__r%d" % (ident, len(call_stmts))
                call_stmts.append((_info["name"], tuple(_args), _ret, _alias))
                if _ret != "void":
                    state["x0"] = ("local", _alias, _ret)
                # x1..x7 are caller-saved. Anything the body reads from them after
                # the call is a mis-translation waiting to happen, and the byte
                # comparison would catch it -- but it is cheaper to decline than to
                # compile a candidate that cannot match.
                for _i in range(1, 8):
                    state.pop("x%d" % _i, None)
                continue

            # `ldp Rd1, Rd2, [Rn, #off]` -- a pair load.
            #
            # This is the single largest blocker on bodies that contain a call.
            # Measured over 514 `1 call + memory` bodies in `sdk`, the post-call
            # halves translate at 497/514 (97%) and the pre-call halves at 25/514
            # (5%); of the 489 pre-call failures, 468 were exactly
            # "unsupported mnemonic 'ldp'". One mnemonic.
            #
            # It fell through because `ldp` has *three* operands while the LOADS
            # branch below is guarded on `len(ops) == 2`. So the fix is not a new
            # value kind -- the `load` kind already renders `*(T*)(base + off)` at
            # any offset -- it is two `load` values, at `off` and `off + width`.
            #
            # That renders as two adjacent scalar dereferences, and Clang 5.0.1
            # folds those back into `ldp`. Measured rather than assumed:
            #
            #   *(uint64_t*)p + *(uint64_t*)((char*)p + 8)
            #       ->  ldp x8, x9, [x0]
            #   *(uint32_t*)p + *(uint32_t*)((char*)p + 4)
            #       ->  ldp w8, w9, [x0]
            #
            # so no typedef and no struct type is needed in the shared preamble.
            if mn in PAIR_LOADS and len(ops) == 3:
                d1, d2, mem = ops
                base, index, ext, scale, off = parse_mem_idx(mem)
                if base is None:
                    base, off = mem_reg_offset(mem, state)
                    index = ext = scale = None
                if base is None:
                    raise Bail("pair load operand %r is not a [base] form" % (mem,))
                if index is not None:
                    raise Bail("indexed pair load %r is not modelled" % (mem,))
                n, real = resolve_base(base)
                if real:
                    used_args.add(n)
                    ptr_args.add(n)
                    # Using a register as a memory base is a USE, so record it in
                    # `state` as well. It was added to used_args but never written
                    # there, so a later read -- typically a `bl` that forwards it as
                    # an argument -- found nothing:
                    #
                    #     strb wzr, [x0, #0xb8] ; str wzr, [x0, #0x40]
                    #     str wzr, [x0, #0x58] ; bl F ; mov w0, #1 ; ret
                    #
                    # 42 bodies at "call argument x0 is not a known value", which
                    # reads like a missing prototype but is a missing STATE entry.
                    if wreg(base) not in state:
                        state[wreg(base)] = ("arg", n, "void*")
                w = access_width(mn, d1)
                signed = mn in ("ldpsw", "ldupsw")
                # AAPCS64 pair loads always use consecutive registers, so the second
                # element sits at the next element of the same width. Taking `w`
                # from `access_width` is what makes a 32-bit pair step by 4 and not
                n_pair_base = n
                # 8; hardcoding 8 would mis-model every `ldp w` body.
                state[wreg(d1)] = ("load", n, off, w, signed)
                # Record the second destination so a DEAD one can be pinned once the whole
                # body has been seen. `ldp x8, x1, [x0]` writes two registers; when the
                # second is never read again Clang deletes that half and emits `ldr` where
                # retail has `ldp`. Measured, clang 5.0.1 -O3, one compile, four spellings:
                #
                #   both loaded, second unused -> ldr x0, [x0]
                #   second pinned by "+r"     -> ldp x8, x9, [x0]   <- retail's shape
                #
                # Liveness is not knowable mid-walk, so this records candidates only.
                pair_seconds.append((wreg(d2), n_pair_base, off + w, w))
                state[wreg(d2)] = ("load", n, off + w, w, signed)
                continue

            # Pair-load second destinations, so a DEAD one can be pinned once the whole
            # body has been seen. `ldp x8, x1, [x0]` writes two registers; when the
            # second is never read again Clang deletes that half and emits `ldr` where
            # retail has `ldp`. Measured, clang 5.0.1 -O3, one compile, four spellings:
            #
            #   both loaded, second unused -> ldr x0, [x0]
            #   second pinned by "+r"     -> ldp x8, x9, [x0]   <- retail's shape
            #
            # Liveness is not knowable mid-walk, so this records candidates only.
            if mn in LOADS and len(ops) == 2:
                dst = ops[0]
                _memtxt = ops[1]
                # STRIP A WRITEBACK before parsing, and remember what it was.
                _wb = None          # None | "pre" | "post"
                _wb_off = 0
                _m2 = WRITEBACK_POST.match(_memtxt)
                if _m2:
                    _wb, _wb_off = "post", int(_m2.group(2), 0)
                    _memtxt = _m2.group(1)
                else:
                    _m2 = WRITEBACK_PRE.match(_memtxt)
                    if _m2:
                        _wb = "pre"
                        _memtxt = _m2.group(1)
                base, index, ext, scale, off = parse_mem_idx(_memtxt)
                if base is None:
                    base, off = mem_reg_offset(_memtxt, state)
                    index = ext = scale = None
                if base is None:
                    raise Bail("load operand %r is not a [base] or [base, index, ext] form"
                               % (_memtxt,))
                n, real = resolve_base(base)
                if real:
                    used_args.add(n)
                    ptr_args.add(n)
                    # Using a register as a memory base is a USE, so record it in
                    # `state` as well. It was added to used_args but never written
                    # there, so a later read -- typically a `bl` that forwards it as
                    # an argument -- found nothing:
                    #
                    #     strb wzr, [x0, #0xb8] ; str wzr, [x0, #0x40]
                    #     str wzr, [x0, #0x58] ; bl F ; mov w0, #1 ; ret
                    #
                    # 42 bodies at "call argument x0 is not a known value", which
                    # reads like a missing prototype but is a missing STATE entry.
                    if wreg(base) not in state:
                        state[wreg(base)] = ("arg", n, "void*")
                if index is not None:
                    # A load through an indexed address is `ldr Rd, [Rn, Rm, ext]`,
                    # which Clang emits from a *dereference* and not from an
                    # address computation -- see the `load_i` render arm. Using
                    # `addr_i` here produced `add` where the original has `ldr`.
                    w = access_width(mn, dst)
                    try:
                        ie = index_expr(index, ext, scale, n)
                    except Bail:
                        ie = index_value(index, ext, scale, n)
                    if not isinstance(ie, tuple):
                        ie = ("raw", ie)
                    state[wreg(dst)] = ("load_i", n, off, ie, w,
                                        mn in ("ldrsw", "ldursw", "ldrsh",
                                               "ldursh"))
                    continue
                w = access_width(mn, dst)
                # Signed loads. `ldrsh` was missing here as well as from LOADS,
                # and its absence is not neutral: an unsigned 16-bit load would
                # model `ldrsh` as `ldrh`, which drops the sign extension and
                # matches nothing.
                signed = mn in ("ldrsw", "ldursw", "ldrsh", "ldursh")
                if _wb == "post":
                    state[wreg(dst)] = ("load", n, 0, w, signed)
                else:
                    state[wreg(dst)] = ("load", n, off, w, signed)
                if _wb is not None:
                    _inc = off if _wb == "pre" else _wb_off
                    _bk = wreg(base)
                    _bv = state.get(_bk)
                    if _bv is None:
                        raise Bail("writeback base %r is not a value" % base)
                    if _bv[0] not in ("load", "expr", "arg", "argval", "imm",
                                      "addr_i", "local"):
                        raise Bail("writeback on a %r value is not addressable"
                                   % _bv[0])
                    # LIVENESS GATE.
                    #
                    # The barrier is what forces the `!` (work/wb_sep.py: all four
                    # variants give `ldr ... !`). But pinning the BASE register
                    # changed allocation across the whole body and regressed 311
                    # bodies (main -152, sdk -107, subsdk0 -50, subsdk1 0).
                    #
                    # So the barrier goes on a SEPARATE local, and only when the
                    # base is DEAD -- i.e. not read by any later instruction. A
                    # dead base cannot be affected by an allocation change, because
                    # nothing downstream uses it. A live base is left alone, which
                    # means it keeps the old (non-writeback) encoding and does not
                    # match -- but it also does not regress.
                    #
                    # The recipe measurement says the separate-local barrier gives
                    # `!` regardless of liveness (work/wb_sep.py), so the dead case
                    # is reachable. The live case is not, and that is a smaller
                    # dead population than the whole 29,556.
                    _base_read_later = False
                    # `k` is not defined here -- the walk's loop variable is `_gi`,
                    # and `body` is the frame-stripped list, not `ins`. The
                    # writeback load's index in `body` has to be found, not assumed.
                    _wb_idx = None
                    for _ii, _ix in enumerate(body):
                        if _ix is i:
                            _wb_idx = _ii
                            break
                    if _wb_idx is None:
                        _wb_idx = 0
                    for _j in range(_wb_idx + 1, len(body)):
                        _op = body[_j].op_str
                        _parts = [p.strip() for p in _op.split(",")]
                        if base in _parts[1:] or any(base in p for p in _parts[1:]):
                            _dst = _parts[0] if _parts else ""
                            if _dst != base:
                                _base_read_later = True
                                break
                    if not _base_read_later:
                        stmts.append(("wbup", base, _inc))
                continue

            if mn in PAIR_STORES and len(ops) in (2, 3):
                # `stp xzr, xzr, [x0]` -- a PAIR store. PAIR_STORES named it but
                # nothing handled it, so all 78 bodies were declined as
                # "unhandled instruction 'stp'".
                #
                # It is two stores at off and off+width, and Clang merges adjacent
                # stores back into the pair, so emitting them separately reproduces
                # the single instruction. Measured, clang 5.0.1 -O3 -- all three of
                #
                #     *(struct Z*)p = (struct Z){0,0};
                #     *(u64*)p = 0; *((u64*)p + 1) = 0;
                #     u64 z[2] = {0,0}; *(u64*)p = z[0]; *((u64*)p+1) = z[1];
                #
                # produce exactly `stp xzr, xzr, [x0]`.
                # `stp Rd1, Rd2, [Rn]`: TWO registers then the memory operand.
                # Reading the memory from ops[1] took the second register and
                # failed with "pair-store operand 'xzr' is not a memory form".
                _ps1 = ops[0]
                _pb, _pi, _pe, _psc, _po = parse_mem_idx(ops[2])
                if _pb is None:
                    raise Bail("pair-store operand %r is not a memory form"
                               % (ops[2],))
                _pn, _preal = resolve_base(_pb)
                if _preal:
                    used_args.add(_pn)
                    ptr_args.add(_pn)
                # ops[0] and ops[1] are the two REGISTERS; ops[2] is the
                # memory operand. Reading the memory as a register reached
                # `arg_reg('[x0]')` and raised -- 42 bodies at "operand
                # '[x0]' is not an argument register".
                # `stp q0, q0, [x0]` -- the 128-bit PAIR store, 32 of them.
                #
                # This needs the vector type, and the value has to SURVIVE
                # optimisation: Clang folds a known-zero vector to a pair of zero
                # REGISTERS and emits `stp xzr, xzr`, losing both the `movi` that
                # materialised it and the q-register form. `arm_neon.h` is already
                # in MH.PREAMBLE so the type costs nothing; the pin is the work.
                #
                # The pin cannot be `asm volatile("" : "+w"(v))`. Clang 5.0.1
                # rejects it outright -- "inline asm not supported yet: don't know
                # how to handle tied indirect register inputs" -- and `"+w"` IS the
                # NEON constraint, so this is the compiler, not the spelling.
                # Separate in/out operands are NOT tied and are accepted:
                #
                #     uint64x2_t v = {0,0};
                #     __asm__ volatile("" : "=w"(v) : "w"(v));
                #     *(struct Q2*)a0 = (struct Q2){v, v};
                #
                # measured byte-identical to the retail
                # `movi v0.2d, #0 ; stp q0, q0, [x0]`, with no extra instructions.
                # `"=w"` output-only alone gave `str q0, [x0]` and NO `movi`, so
                # both operands are needed -- but neither of them needs a store to
                # a global to pin through, which is what the first measurement here
                # concluded. That conclusion was wrong.
                _vregs = []
                for _r in (_ps1, ops[1]):
                    if access_width(mn, _r) != 16:
                        break
                    _vregs.append(_r)
                if len(_vregs) == 2:
                    _vv = []
                    for _r in _vregs:
                        # `movi` keys state by its FULL spelling -- `v0.2d` -- while
                        # the store names the register `q0`. Without the translation
                        # between the two the lookup always misses and every body
                        # would be rendered as a plain zero vector.
                        # `reg_num` only accepts x/w, so it returns None for
                        # `q0` and the lookup never reached the `movi` that wrote
                        # it. Reading the digit directly is what connects the two
                        # spellings of one register.
                        _qm = re.fullmatch(r"[a-z](\d+)", _r)
                        _rn = int(_qm.group(1)) if _qm else None
                        _key = ("v%d.2d" % _rn if _rn is not None
                                else wreg(_r))
                        # No load can produce a q value -- `ldr q0` is refused by
                        # `w not in U` on the single-access path -- so anything not
                        # written by a `movi` is the zero vector.
                        _vv.append(state.get(_key) or state.get(wreg(_r))
                                   or ("neon", "uint64x2_t", 2))
                    stmts.append(("qpair", _pn, _po, _vv[0], _vv[1],
                                  not call_stmts))
                    continue
                for _k, _r in enumerate((_ps1, ops[1])):
                    _w = access_width(mn, _r)
                    if _w not in U:
                        raise Bail("%d-byte pair store is not modelled" % _w)
                    if _r in ("xzr", "wzr"):
                        state[_r] = ("imm", 0, U[_w])
                    elif wreg(_r) not in state:
                        # An incoming argument used only as a store source is
                        # still a parameter, exactly as on the single-store path.
                        _pa = arg_reg(_r)
                        used_args.add(_pa)
                        state[wreg(_r)] = ("arg", _pa, U[_w])
                    stmts.append((_w, _pn, _po + _k * _w, state[wreg(_r)]))
                continue

            if mn in STORES and len(ops) in (2, 3):
                # `str x8, [x0], #8` is a WRITEBACK store: store to [x0], then
                # x0 += 8. Three operands, so it fell straight through the
                # two-operand case and every one was declined as
                # "unhandled instruction 'str'". 80 call bodies, and 401
                # writeback stores in main alone.
                #
                # The C that produces it, measured on clang 5.0.1 -O3:
                #
                #     *p = v; p += 1;        with p LIVE afterwards
                #
                # gives `str x1, [x0], #8`. Without a later use of p the
                # increment is dead and Clang emits a plain `str x1, [x0]`, so
                # the base increment has to survive -- which it does here,
                # because the increment is applied to `state` and the body keeps
                # going.
                src, mem = ops[0], ops[1]
                writeback = parse_imm(ops[2]) if len(ops) == 3 else None
                base, index, ext, scale, off = parse_mem_idx(mem)
                if base is None:
                    base, off = mem_reg_offset(mem, state)
                    index = ext = scale = None
                if base is None:
                    raise Bail("store operand %r is not a [base] or [base, index, ext] form"
                               % (mem,))
                n, real = resolve_base(base)
                if real:
                    used_args.add(n)
                    ptr_args.add(n)
                    # Using a register as a memory base is a USE, so record it in
                    # `state` as well. It was added to used_args but never written
                    # there, so a later read -- typically a `bl` that forwards it as
                    # an argument -- found nothing:
                    #
                    #     strb wzr, [x0, #0xb8] ; str wzr, [x0, #0x40]
                    #     str wzr, [x0, #0x58] ; bl F ; mov w0, #1 ; ret
                    #
                    # 42 bodies at "call argument x0 is not a known value", which
                    # reads like a missing prototype but is a missing STATE entry.
                    if wreg(base) not in state:
                        state[wreg(base)] = ("arg", n, "void*")
                w = access_width(mn, src)
                if w == 16:
                    # `str q0, [x0]` -- a 128-bit SINGLE store, same vector type
                    # and same pin as the q-pair store above, one field instead of
                    # two. `U` has no 16-byte entry because a bare `uint64x2_t`
                    # cannot be named by a pointer cast without the vector type,
                    # which is exactly what this is for.
                    _qm = re.fullmatch(r"[a-z](\d+)", src)
                    _rn = int(_qm.group(1)) if _qm else None
                    _key = ("v%d.2d" % _rn if _rn is not None else wreg(src))
                    _vv = (state.get(_key) or state.get(wreg(src))
                           or ("neon", "uint64x2_t", 2))
                    if n == SRET_ID:
                        raise Bail("128-bit store through the sret register")
                    # Calls are hoisted above every other statement in `_emit`
                    # (`pre + _call_txt + pins + body_txt`), so a store that the
                    # original emits BEFORE its call has to go in `pre` or it
                    # lands after the call and the order is wrong. `call_stmts` is
                    # populated in walk order, so it answers that question here.
                    stmts.append(("qstore", n, off, _vv, not call_stmts))
                    continue
                if w not in U:
                    raise Bail("%d-byte access through %r is not modelled" % (w, src))
                if wreg(src) not in state:
                    # Two sources need no prior write, and both were being
                    # declined as "never written by the body" -- 301 bodies
                    # between them, the two largest bail classes here.
                    #
                    # `str xzr, [x1]` is a plain zero store. The zero register is
                    # not an argument and is never written, so requiring a
                    # defining instruction rejected the most ordinary store
                    # there is.
                    if src in ("xzr", "wzr"):
                        state[src] = ("imm", 0, U[w])
                    else:
                        # An incoming argument used only as a *store source* is
                        # still a parameter, and has to be declared as one or the
                        # body will not compile.
                        an = arg_reg(src)
                        used_args.add(an)
                        # The type travels with the value because `_render` only sees `names`
                        # and cannot know how the parameter was declared. Hardcoding `void*`
                        # here contradicted a `uint64_t a0` declaration and produced:
                        #
                        #     return a0;
                        #     error: cannot initialize return object of type 'void *' with an
                        #            lvalue of type 'uint64_t'
                        #
                        # It reads as a perfectly ordinary line in the source; only the
                        # declaration gives it away. Deciding it here also leaves every mangled
                        # name unchanged, which retyping the parameter would not.
                        state[wreg(src)] = ("arg", an,
                                            "void*" if an in ptr_args else "uint64_t")
                if wreg(src) not in state:
                    raise Bail("store source %r is never written by the body" % (src,))
                if index is not None:
                    ie = index_expr(index, ext, scale, n)
                    stmts.append((w, n, off, state[wreg(src)], ie))
                else:
                    stmts.append((w, n, off, state[wreg(src)]))
                    # WRITEBACK: `[x0], #8` also advances the base. Applied after the store

                    # so the value stored is the PRE-increment one.

                    if writeback:

                        _bv = state.get(wreg(base))

                        if _bv is None:

                            _bn = arg_reg(base)

                            used_args.add(_bn)

                            ptr_args.add(_bn)

                            _bv = ("addr", _bn, 0)

                        if _bv[0] == "addr":

                            state[wreg(base)] = ("addr", _bv[1], _bv[2] + writeback)

                        else:

                            state[wreg(base)] = ("expr", "+", _bv,

                                                ("imm", writeback, _rw(_bv)), _rw(_bv))

                continue

            if mn == "mov" and len(ops) == 2:
                dst, src = ops[0], ops[1]
                imm = parse_imm(src)
                if imm is not None:
                    state[wreg(dst)] = ("imm", imm,
                                        U[access_width("mov", dst)])
                    continue
                if src in ("xzr", "wzr"):
                    state[wreg(dst)] = ("imm", 0, U[access_width("mov", dst)])
                    continue
                if wreg(src) not in state:
                    # Same rule as the arithmetic path: an argument used as a
                    # value is still a parameter. `mov x0, x1` with x1 incoming
                    # is a copy of the argument; declining it cost 13 bodies.
                    av = self._value_arg(src, used_args, idx_args, ptr_args)
                    if av is None:
                        raise Bail("mov source %r is neither an immediate nor a "
                                   "known register" % (src,))
                    state[wreg(dst)] = av
                    continue
                # `mov wD, wS` and `mov xD, xS` carry the same value but are
                # different instructions, and the difference is observable:
                #
                #     retail  ldr w8, [x0,#0x30] ; mov w1, w8 ; bl ...
                #     ours    ldr w8, [x0,#0x30] ; mov x1, x8 ; bl ...
                #
                # `wreg` maps `w1` and `x1` to the same state entry, so copying the
                # tuple loses which one it was and Clang then takes the width from
                # the value's type rather than from the register the body wrote.
                #
                # Narrowing the value to uint32_t when the destination is a `w`
                # register restores it. A 32-bit call argument is zero-extended
                # into x1, which is precisely what a `w` write does, so this yields
                # `mov w1, w8` rather than a load and a separate widen.
                state[wreg(dst)] = _narrow_dst(dst, state[wreg(src)])
                continue

            # Bitwise and bitfield value operations.
            #
            # These are the largest remaining reason a *control-flow-linear* body
            # is declined. Measured over the 5,652 unmatched bodies that have
            # neither a call nor a branch -- which a straight-line translator
            # should reach by construction, so they can only be failing on
            # instruction coverage:
            #
            #     473  and      201  movk      145  ubfx      103  orr
            #
            # All are ordinary value expressions on registers, which is exactly
            # what the existing `expr` value kind already renders.
            if mn in ("and", "orr", "eor", "bic", "movk", "ubfx", "sbfx",
                      "ubfiz", "bfxil", "sbfiz", "mvn", "neg", "lsl",
                      "lsr", "asr"):
                ops2 = split_ops(i.op_str)
                if len(ops2) < 2:
                    raise Bail("%s with %d operands is not modelled" % (mn, len(ops2)))
                dst = ops2[0]

                def _val(reg):
                    v = state.get(wreg(reg))
                    if v is None:
                        v = self._value_arg(reg, used_args, idx_args, ptr_args)
                    if v is None:
                        raise Bail("%s source %r is not a known value" % (mn, reg))
                    # None of these operations is defined on a pointer, and
                    # C++ rejects the attempt at compile time:
                    #
                    #   return (((char *)p0) + ...) << (3);
                    #   error: invalid operands to binary expression ('char *' and 'int')
                    #
                    # The operand is a pointer because the register was computed
                    # as an address earlier in the body, not because the
                    # instruction was wrong. Declining is correct; guessing an
                    # integer reinterpretation would not be.
                    if v[0] in ("addr", "addr_i"):
                        raise Bail("%s applied to an address value" % (mn,))
                    return v

                # Bitfield extract/insert: `ubfx Rd, Rn, #lo, #width`.
                if mn in ("ubfx", "sbfx") and len(ops2) >= 4:
                    v = _val(ops2[1])
                    lo = parse_imm(ops2[2])
                    wd = parse_imm(ops2[3])
                    if lo is None or wd is None:
                        raise Bail("%s with non-immediate fields" % (mn,))
                    ty = _rw(v)
                    e = ("expr", ">>", v, ("imm", lo, ty), ty)
                    if wd < 64:
                        e = ("expr", "&", e, ("imm", (1 << wd) - 1, ty), ty)
                    state[wreg(dst)] = e
                    continue

                # Bitfield insert: `ubfiz Rd, Rn, #lo, #width`.
                if mn == "ubfiz" and len(ops2) >= 4:
                    v = _val(ops2[1])
                    lo = parse_imm(ops2[2])
                    wd = parse_imm(ops2[3])
                    if lo is None or wd is None:
                        raise Bail("ubfiz with non-immediate fields")
                    ty = _rw(v)
                    mask = ((1 << wd) - 1) << lo
                    e = ("expr", "&", v, ("imm", ~mask & ((1 << 64) - 1), ty), ty)
                    e = ("expr", "|", e, ("expr", "<<",
                                         ("expr", "&", v, ("imm", mask, ty), ty),
                                         ("imm", lo, ty), ty), ty)
                    state[wreg(dst)] = e
                    continue

                # `sbfiz Rd, Rn, #lo, #width` -- the SIGNED bitfield insert.
                # Sign-extend the low `width` bits of Rn, then place them at
                # `lo`. `ubfiz` above is the same shape with no extension, which
                # is exactly why the list carried one and not the other.
                if mn == "sbfiz" and len(ops2) >= 4:
                    v = _val(ops2[1])
                    lo = parse_imm(ops2[2])
                    wd = parse_imm(ops2[3])
                    if lo is None or wd is None:
                        raise Bail("sbfiz with non-immediate fields")
                    ty = _rw(v)
                    bits = 8 * (2 if ty.endswith("64_t") else 1)
                    # The SIGNED type for the extension, or `>>` is a LOGICAL
                    # shift and the result is a zero-extend -- which is `ubfiz`,
                    # and is what this produced before the cast was made signed.
                    # Measured: unsigned cast gave `ubfiz w0, w0, #8, #8`.
                    sty = S[bits // 8]
                    e = ("expr", "<<", v, ("imm", bits - wd, ty), ty)
                    e = ("cast", sty, e)
                    e = ("expr", ">>", e, ("imm", bits - wd, sty), sty)
                    if lo:
                        e = ("expr", "<<", e, ("imm", lo, ty), ty)
                    state[wreg(dst)] = e
                    continue

                # `bfxil Rd, Rn, #lo, #width` -- extract bits [lo, lo+width)
                # from Rn, place them at bit 0, merge into Rd. It is `ubfx` into
                # a DESTINATION rather than overwriting it, so Rd s low `width`
                # bits are cleared first.
                if mn == "bfxil" and len(ops2) >= 4:
                    v = _val(ops2[1])
                    lo = parse_imm(ops2[2])
                    wd = parse_imm(ops2[3])
                    if lo is None or wd is None:
                        raise Bail("bfxil with non-immediate fields")
                    ty = _rw(v)
                    dv = state.get(wreg(dst))
                    bits = 8 * (2 if ty.endswith("64_t") else 1)
                    field = ((1 << wd) - 1) if wd < bits else ((1 << bits) - 1)
                    if lo:
                        v = ("expr", ">>", v, ("imm", lo, ty), ty)
                    ins = ("expr", "&", v, ("imm", field, ty), ty)
                    if dv is None:
                        state[wreg(dst)] = ins
                        continue
                    keep = ("expr", "&", dv,
                            ("imm", ~field & ((1 << bits) - 1), ty), ty)
                    state[wreg(dst)] = ("expr", "|", keep, ins, ty)
                    continue

                # Wide-immediate move: `movk Rd, #imm, lsl #shift` merges into
                # the value already in Rd. A `movz`/`movk` pair is how a 64-bit
                # constant is built, so this is common.
                if mn == "movk":
                    if len(ops2) < 2:
                        raise Bail("movk with %d operands is not modelled" % (len(ops2),))
                    immtxt = ops2[1]
                    sh = 0
                    if len(ops2) >= 3 and ops2[2].startswith("lsl"):
                        sh = parse_imm(ops2[2].split("#")[-1]) or 0
                    v = parse_imm(immtxt)
                    if v is None:
                        raise Bail("movk immediate %r is not a literal" % (immtxt,))
                    v <<= sh
                    dstw = wreg(dst)
                    prior = state.get(dstw)
                    ty = "uint64_t" if dstw.startswith("x") else "uint32_t"
                    if prior is not None and prior[0] == "imm":
                        state[dstw] = ("imm", (prior[1] & ~(0xFFFF << sh) | v)
                                       & ((1 << 64) - 1), ty)
                    elif prior is None:
                        state[dstw] = ("imm", v, ty)
                    else:
                        state[dstw] = ("expr", "|", prior, ("imm", v, ty), ty)
                    continue

                # `mvn Rd, Rn` / `neg Rd, Rn`: genuinely unary, so they need a
                # unary value kind. Rendering them through the binary `expr` path
                # produced `(<a>) ~ (<0>)`, which is not C:
                #
                #     error: expected ';' after expression
                #
                # `bic` had the same shape of bug -- `&~` is not an operator
                # either, it was emitted as `(<a> & <b>) ~ (0)`.
                if mn in ("mvn", "neg") and len(ops2) == 2:
                    v = _val(ops2[1])
                    ty = _rw(v)
                    state[wreg(dst)] = ("un", "~" if mn == "mvn" else "neg", v, ty)
                    continue

                # `lsl/lsr/asr Rd, Rn, #sh` : shift by a literal.
                if mn in ("lsl", "lsr", "asr") and len(ops2) == 3:
                    sh = parse_imm(ops2[2])
                    if sh is None:
                        raise Bail("%s shift %r is not a literal" % (mn, ops2[2]))
                    v = _val(ops2[1])
                    ty = _rw(v)
                    state[wreg(dst)] = ("expr", {"lsl": "<<", "lsr": ">>",
                                                 "asr": ">>"}[mn], v,
                                       ("imm", sh, ty), ty)
                    continue

                # `and/orr/eor/bic Rd, Rn, Rm` or `#imm`
                #
                # Guarded rather than indexed directly. `mvn` and `neg` are in
                # BITWISE_MNEMONICS so the pre-filter admits them, and the arm
                # above handles the 2-operand form -- but a `neg` with a
                # different operand count falls through to here, where the bare
                # subscript raised `KeyError: 'neg'`.
                #
                # That is an exception, not a decline, and the two are not
                # equivalent: an exception is swallowed by gen_straight's
                # `except Exception` and the body vanishes with no record of
                # why. Declining says exactly what was not understood.
                if mn not in ("and", "orr", "eor", "bic"):
                    raise Bail("%s with %d operands is not modelled"
                               % (mn, len(ops2)))
                sym = {"and": "&", "orr": "|", "eor": "^", "bic": None}[mn]
                if len(ops2) == 4:
                    # The shifted-register form: `orr Rd, Rn, Rm, lsl #n`.
                    #
                    # 32 bodies declined as "orr with 4 operands is not modelled".
                    # The shift belongs to Rm only, so it becomes a nested
                    # `shift` value on the *second* operand rather than an
                    # operation over the whole expression -- `Rn | (Rm << n)`, not
                    # `(Rn | Rm) << n`.
                    _sh_parts = ops2[3].split()
                    if _sh_parts[0] not in EXTEND_TYPES:
                        raise Bail("%s extend %r is not supported" % (mn, ops2[3]))
                    _sh_amt = (parse_imm(_sh_parts[1])
                               if len(_sh_parts) > 1 else 0)
                    if _sh_amt is None:
                        raise Bail("%s shift %r is not a literal" % (mn, ops2[3]))
                    v1 = _val(ops2[1])
                    # `_val` on the second operand, then wrap. Doing it in this
                    # order keeps the shift tied to Rm alone.
                    v2 = ("shift", _sh_parts[0], _sh_amt, _val(ops2[2]))
                    ty = _rw(v1)
                    state[wreg(dst)] = ("expr", sym, v1, v2, ty)
                    continue
                if len(ops2) == 3:
                    v1 = _val(ops2[1])
                    imm2 = parse_imm(ops2[2])
                    v2 = ("imm", imm2, _rw(v1)) if imm2 is not None else _val(ops2[2])
                    ty = _rw(v1)
                    if sym is None:
                        # `bic Rd, Rn, Rm` is Rn & ~Rm.
                        state[wreg(dst)] = ("expr", "&", v1,
                                            ("un", "~", v2, ty), ty)
                    else:
                        state[wreg(dst)] = ("expr", sym, v1, v2, ty)
                    continue
                if len(ops2) == 2:
                    v1 = _val(ops2[1])
                    ty = _rw(v1)
                    state[wreg(dst)] = ("expr", sym, v1, ("imm", 0, ty), ty)
                    continue
                raise Bail("%s with %d operands is not modelled" % (mn, len(ops2)))

            # Standalone width conversions and byte reversal.
            #
            #   sxtw xD, wN   sign-extend 32 -> 64
            #   uxtw xD, wN   zero-extend 32 -> 64
            #   rev  wD, wN   reverse the bytes of a 32-bit value
            #   rev  xD, xN   ... of a 64-bit value
            #
            # These were declined as "unsupported mnemonic", but they were already
            # *known* -- `sxtw` and `uxtw` appear in `EXTEND_TYPES` as the extend
            # on an `add`, and the shift renderer already knows how to spell each
            # of them. The only thing missing was the standalone spelling, so this
            # reuses the existing `cast` kind rather than adding a new one.
            #
            # Both spellings were confirmed against the compiler rather than
            # assumed:
            #     (int64_t)(int32_t)v   -> sxtw x0, w0
            #     (uint64_t)v           -> mov  w0, w0      (NOT uxtw)
            #     __builtin_bswap32(v)  -> rev  w0, w0
            #     __builtin_bswap64(v)  -> rev  x0, x0
            if mn in EXTEND_STANDALONE and len(ops) == 2:
                _v = state.get(wreg(ops[1]))
                if _v is None:
                    _v = self._value_arg(ops[1], used_args, idx_args, ptr_args)
                if _v is None:
                    raise Bail("%s operand %r is not a known value" % (mn, ops[1]))
                _mid, _signed = EXTEND_STANDALONE[mn]
                # Result width from the *destination* register, signedness from
                # the mnemonic. A `w` destination is 32-bit whether or not the
                # value came from a 64-bit computation.
                _res = ("int32_t" if ops[0].strip().startswith("w") else "int64_t")
                if not _signed:
                    _res = "uint32_t" if _res == "int32_t" else "uint64_t"
                state[wreg(ops[0])] = ("cast", _res, ("cast", _mid, _v))
                continue
            if mn in DIV_MNEMONICS and len(ops) == 3:
                _w = ops[0].strip().startswith("w")
                _ty = ("int32_t" if _w else "int64_t") if mn == "sdiv" \
                    else ("uint32_t" if _w else "uint64_t")
                _da = state.get(wreg(ops[1]))
                if _da is None:
                    _da = self._value_arg(ops[1], used_args, idx_args, ptr_args)
                _db = state.get(wreg(ops[2]))
                if _db is None:
                    _db = self._value_arg(ops[2], used_args, idx_args, ptr_args)
                if _da is None or _db is None:
                    raise Bail("%s operand is not a known value" % (mn,))
                # A pointer cannot be a division operand.
                #
                # The same defect the add/sub path had, reached through the new
                # handler: an argument this body also uses as a memory base comes
                # back from `_value_arg` as `("argval", n, "uint32_t")`, with no
                # record that it is a pointer, and the cast emitted
                #
                #     (uint32_t)((char*)(a1) - 1)
                #
                # which is `error: cast from pointer to smaller type 'uint32_t'
                # loses information`. A compile error kills the whole batch, so
                # main reported no MATCH line at all -- 700+ candidates gone for
                # one bad body.
                #
                # `base_args` is the up-front set of registers the body uses as a
                # memory base; an argument in it is a pointer regardless of what
                # `_value_arg` typed it as. See `base_args_of`.
                for _v, _lbl in ((_da, "first"), (_db, "second")):
                    if _v[0] in ("addr", "addr_i"):
                        raise Bail("%s %s operand is an address; a pointer "
                                   "cannot be divided" % (mn, _lbl))
                    if _v[0] == "argval" and _v[1] in base_args:
                        raise Bail("%s %s operand is argument %d, which this "
                                   "body also uses as a memory base; it is a "
                                   "pointer and cannot be divided"
                                   % (mn, _lbl, _v[1]))
                # Both operands cast to the division's own type. Without this C
                # picks the signedness from the operands and can emit `udiv` for
                # an `sdiv`, which is a different program for negative values.
                state[wreg(ops[0])] = ("expr", "/",
                                       ("cast", _ty, _da),
                                       ("cast", _ty, _db),
                                       _ty)
                continue
            if mn == "rev" and len(ops) == 2:
                _v = state.get(wreg(ops[1]))
                if _v is None:
                    _v = self._value_arg(ops[1], used_args, idx_args, ptr_args)
                if _v is None:
                    raise Bail("rev operand %r is not a known value" % (ops[1],))
                # `rev16`/`rev32` are the sub-word forms; the plain mnemonic is
                # chosen by the *destination* register width.
                _is64 = ops[0].strip().startswith("x")
                _ty = "uint64_t" if _is64 else "uint32_t"
                _bf = "__builtin_bswap64" if _is64 else "__builtin_bswap32"
                state[wreg(ops[0])] = ("raw_call", _bf, _v, _ty)
                continue

            # Multiply family. See MUL_OPS for why these are nine operations and
            # not one.
            #
            # Every operand is resolved with the same rule as add/sub: a value in
            # `state` if there is one, otherwise `_value_arg`, because an incoming
            # argument has no state entry and requiring one declined every
            # `mul x8, x8, x1`-shaped body as "not a known register".
            if mn in FP_ARITH_MNEMONICS:
                # `fadd dD, dN, dM` -- three operands, no accumulator, and the
                # destination register's CLASS picks the width. `s` is single,
                # `d` is double, `q` is a pair of doubles, and `q` is not modelled
                # because `faddp`/`fmul v` are vector operations that scalar C does
                # not produce (measured, see FP_ARITH_MNEMONICS).
                ops = split_ops(i.op_str)
                if len(ops) != 3:
                    raise Bail("%s with %d operands is not modelled"
                               % (mn, len(ops)))
                dst, o1, o2 = ops
                _dcl = dst.strip()[:1]
                if _dcl not in ("s", "d"):
                    raise Bail("%s destination %r is not a scalar FP register"
                               % (mn, dst))
                ct = "float" if _dcl == "s" else "double"

                def _foperand(reg, _mn=mn):
                    v = state.get(wreg(reg.strip()))
                    if v is None:
                        raise Bail("%s operand %r is not a value"
                                   % (_mn, reg))
                    # `fpun` is a pun, `fpneg` a negation, `expr` a previous
                    # arithmetic result, `load` a field. A bare `imm` would be an
                    # integer literal in an FP operation, which is not a thing.
                    if v[0] not in ("load", "expr", "arg", "argval",
                                    "fpun", "fpneg", "local"):
                        raise Bail("%s on a %r value is not FP arithmetic"
                                   % (_mn, v[0]))
                    return v

                a = _foperand(o1)
                b = _foperand(o2)
                state[wreg(dst.strip())] = ("expr", FP_OPS[mn], a, b, ct)
                continue

            if mn in MUL_MNEMONICS:
                ops = split_ops(i.op_str)
                op_sym, acc_sub, widening = MUL_OPS[mn]
                nops = len(ops)
                if nops == 3 and mn in ("mul", "mneg", "smull", "umull"):
                    dst, o1, o2 = ops
                    acc = None
                elif nops == 4 and mn in ("madd", "msub", "smaddl", "umaddl",
                                          "smsubl", "umsubl"):
                    dst, o1, o2, acc = ops
                else:
                    raise Bail("%s with %d operands is not modelled" % (mn, nops))

                # Operand type. A 32x32->64 widening instruction multiplies its
                # *32-bit* operands, and the signedness it names is the
                # signedness of the multiply itself -- so `umull` of two values
                # held in int64_t would ask Clang for a signed multiply and fold
                # the sign extension where the instruction zero-extends. The
                # operand types are therefore forced from the mnemonic.
                if widening:
                    src_ct, dst_ct = (("int32_t", "int64_t")
                                      if mn.startswith("s")
                                      else ("uint32_t", "uint64_t"))
                else:
                    # `mul wD, wN, wM` keeps the low 32 bits; `mul xD,...` is 64.
                    is32 = dst.strip().startswith("w")
                    src_ct = "uint32_t" if is32 else "uint64_t"
                    dst_ct = src_ct

                def _operand(reg):
                    """A multiply operand as an `expr`, retyped if it is an arg."""
                    v = state.get(wreg(reg))
                    if v is None:
                        v = self._value_arg(reg, used_args, idx_args, ptr_args)
                    if v is None:
                        raise Bail("%s operand %r is not a value" % (mn, reg))
                    if v[0] not in ("load", "expr", "arg", "argval", "imm"):
                        raise Bail("%s on a %r value is not value arithmetic"
                                   % (mn, v[0]))
                    return v

                a = _operand(o1)
                b = _operand(o2)
                # The product.
                #
                # For the widening forms each operand is cast to the 32-bit type
                # the instruction names -- that cast IS the sign or zero
                # extension, and it has to be spelled or Clang extends from the
                # declared type instead.
                #
                # The result type then has to be the *destination* width, forced.
                # Leaving it to C's usual arithmetic conversions is what broke
                # these bodies, and it is worth recording exactly why, because the
                # emitted code looked correct and merely chose a narrower
                # instruction:
                #
                #   smaddl x8, w1, w8, x0     with w8 = 0x38
                #     mine:  ... + ((int32_t)a1) * ((int32_t)56) ...   (acc uint64_t)
                #     ->  mul w8, w1, w8 ; add x0, x0, w8, sxtw
                #     want: smaddl x0, w1, w8, x0
                #
                # `acc + (int32_t)a * (int32_t)56` promotes the product to
                # uint64_t because `acc` is, and Clang is then free to compute the
                # 32-bit product and sign-extend it in a separate `add`. Typing
                # the product as int64_t/uint64_t itself pins the multiply at
                # full width and the accumulator cannot narrow it back.
                #
                # This is the same class of error as the AAPCS64 narrow-return
                # promotion: an arithmetic identity that holds in C but not in
                # the instruction the compiler chooses.
                if widening:
                    # Both operands are cast to the 64-bit result type, NOT to the
                    # 32-bit one the instruction names. Measured, same arithmetic:
                    #
                    #   (int32_t)a1 * (int32_t)56              -> mul w8 ; sxtw x0, w8
                    #   (int64_t)a1 * (int64_t)56              -> smull
                    #
                    # Casting to `src_ct` looks more faithful -- it is literally
                    # the extension the instruction performs -- and it is wrong:
                    # two int32_t operands give Clang a 32-bit multiply, and the
                    # widening it was asked to perform becomes a *separate*
                    # `sxtw`, so the fused form is never selected.
                    #
                    # The 32-bit truncation is not lost by casting to 64 bits
                    # first: an operand arriving in a `w` register is already
                    # 32-bit-valued, and `_operand` renders a `w`-sourced load as
                    # uint32_t/int32_t, so the value cast to int64_t carries the
                    # same low 32 bits the instruction multiplies.
                    # The operand cast is a *pair*: first `src_ct`, which is the
                    # sign/zero reinterpretation of the 32-bit register, then
                    # `dst_ct`, which is the widening to full width. Both are
                    # needed and neither is optional:
                    #
                    #   (int32_t)m * (int32_t)56                 -> mul w8 (narrow!)
                    #   (int64_t)m * (int64_t)56                 -> smull   but signed
                    #                                                   is lost
                    #   (int64_t)(int32_t)m * (int64_t)(int32_t)56 -> smull   correct
                    #
                    # The middle case is the trap. An argument arrives declared
                    # uint32_t, so `(int64_t)a1` is a *positive* 64-bit value and
                    # the multiply is unsigned -- `umaddl` where the instruction
                    # says `smaddl`. Casting to the 32-bit signed type first is
                    # what reinterprets the bits, and it composes with the
                    # widening cast because the second cast is applied to the
                    # already-signed result.
                    def _widen(v):
                        return ("cast", dst_ct, ("cast", src_ct, v))
                    prod = ("expr", "*", _widen(a), _widen(b), dst_ct)
                else:
                    # `mul wD, ...` truncates to 32 bits and zeroes the top half;
                    # `mul xD, ...` is a full 64-bit multiply. Forcing the result
                    # type to the destination width prevents a 64-bit multiply
                    # being emitted where the instruction keeps the low half.
                    w32 = dst.strip().startswith("w")
                    prod = ("expr", op_sym, a, b,
                            "uint32_t" if w32 else "uint64_t")

                if acc is None:
                    state[wreg(dst)] = prod
                else:
                    c = _operand(acc)
                    # msub/smsubl/umsubl/mneg compute acc - product; madd/smaddl/
                    # umaddl compute product + acc. Getting this backwards is an
                    # arithmetic bug that still compiles, which is the worst kind.
                    op = "-" if acc_sub else "+"
                    state[wreg(dst)] = ("expr", op, c, prod, _rw(c))
                continue

            if mn in ("add", "sub"):
                #     add x8, x0, #0x10        x8 = x0 + 0x10   (address arith)
                #     sub w0, w8, #1           w0 = w8 - 1      (value arith)
                #     add x8, x9, x8, lsl #3   x8 = x9 + (x8<<3) (value arith)
                # The translator models add/sub two ways. The first is *address*
                # arithmetic: the source is a pointer, and the immediate adjusts
                # its offset. The other two are *value* arithmetic on loaded or
                # argument registers, which used to be declined -- 39 bodies were
                # failing as "add/sub applied to a loaded value" -- because a base
                # pointer is the only thing the register was ever treated as.
                ops = split_ops(i.op_str)
                if len(ops) == 3:
                    dst, src, immtxt = ops
                    off = parse_imm(immtxt)
                    if off is not None:
                        if mn == "sub":
                            off = -off
                        s = state.get(wreg(src))
                        if s is None:
                            n = arg_reg(src)
                            used_args.add(n)
                            ptr_args.add(n)
                            state[wreg(dst)] = ("addr", n, off)
                        elif s[0] == "addr":
                            state[wreg(dst)] = ("addr", s[1], s[2] + off)
                        elif s[0] == "addr_i":
                            # `add x0, x8, #8` after `add x8, x0, w1, sxtw #4` is
                            # still address arithmetic, not value arithmetic. The
                            # displacement folds into the indexed address's base
                            # offset, leaving the index and scale alone.
                            state[wreg(dst)] = ("addr_i", s[1], s[2] + off, s[3], s[4])
                        elif s[0] == "imm":
                            state[wreg(dst)] = ("imm", s[1] + off, s[2])
                        elif s[0] == "load" and s[3] == 8 and not s[4]:
                            # Pointer arithmetic on a loaded pointer:
                            # `add x8, x9, #0x20` after `ldr x9, [x0, #8]`. The
                            # load's own offset carries through.
                            if wreg(src) not in synth_of:
                                key = SYNTH_BASE + len(synth)
                                synth.append((key, "*(uint64_t *)(%s)"
                                              % ptr_add(nm(s[1]), s[2])))
                                synth_of[wreg(src)] = key
                            state[wreg(dst)] = ("addr", synth_of[wreg(src)], off)
                        # `local` is a CALL RESULT. Arithmetic on one is
                        # ordinary integer arithmetic, exactly as on a loaded
                        # value -- refusing it cost 168 bodies whose only
                        # obstacle was this list entry.
                        elif s[0] in ("load", "expr", "arg", "local"):
                            # Structured, so `_emit` can render it with real names.
                            op_str = "+" if mn == "add" else "-"
                            state[wreg(dst)] = (
                                "expr", op_str, s,
                                ("imm", abs(off), _rw(s)), _rw(s))
                        else:
                            raise Bail("add/sub on a %r value: %r" % (s[0], dst))
                        continue
                    # Third operand is a register: value arithmetic.
                    src_r, ext_op, shift = ops[2], None, 0
                elif len(ops) == 4:
                    # `add x8, x9, x8, lsl #3` -> dst, src1, src2, ext
                    # `add x8, x0, w1, uxtw #2` -> the same shape, but src1 is a
                    # *pointer*, so the result is still a pointer: an indexed
                    # address. This is by far the largest remaining bail class
                    # (103 bodies) and it was declined purely because the four
                    # operand form was read as value arithmetic only.
                    dst, src, src2 = ops[0], ops[1], ops[2]
                    ext = ops[3]
                    extparts = ext.split()
                    ext_op = extparts[0]
                    shift = int(extparts[1][1:]) if len(extparts) > 1 and extparts[1].startswith("#") else 0
                    if ext_op not in EXTEND_TYPES:
                        raise Bail("add/sub extend %r is not supported" % (ext,))
                    src_r = src2
                    # The `#n` after an extend is a *shift*, so the byte scale is
                    # `1 << n`; `uxtw #2` is a 4-byte stride, not 2. Using `n`
                    # directly scales every indexed address by half.
                    # `#n` after any extend is a shift, so the byte scale is
                    # `1 << n` -- `uxth #4` is a 16-byte stride, not 4. Every
                    # extend shifts the same way; only its width differs.
                    scale = 1 << shift
                    if scale:
                        # `src` is a pointer here. It is an *argument* far more
                        # often than a previously computed address, and an
                        # argument has no `state` entry at all -- so this must
                        # test for "is this a pointer" rather than "is this an
                        # addr value", or every `add x8, x0, w1, uxtw #2` is
                        # missed.
                        # `resolve_base` is the single rule for "what can be a
                        # memory base": an argument, an already-computed `addr`,
                        # or an unsigned 64-bit *load* -- which becomes a
                        # synthetic `p<N>` holding the loaded pointer. This path
                        # used to test only for `addr` and otherwise call
                        # `arg_reg`, so a body that loaded its base
                        #
                        #     ldr x8, [x0, #8] ; add x8, x8, w9, sxtw #4
                        #
                        # was declined even though `resolve_base` would have
                        # accepted it. Same defect as the store-source,
                        # arithmetic-operand and mov-source cases: a rule
                        # reimplemented locally instead of asked of the one
                        # place that already knows it.
                        # Positive evidence that `src` is a value, not a base.
                        _VALUE_KINDS = ("imm", "load", "expr", "argval",
                                        "cset", "sel", "cast", "raw_call",
                                         "call_n")
                        _srcv = state.get(wreg(src))
                        if _srcv is not None and _srcv[0] in _VALUE_KINDS:
                            # Integer arithmetic with a scaled second operand.
                            # The shift belongs to Rm alone, so it becomes a nested
                            # `shift` on the second operand rather than an operation
                            # over the whole expression.
                            _iv = state.get(wreg(src2))
                            if _iv is None:
                                _iv = self._value_arg(src2, used_args, idx_args,
                                                      ptr_args)
                            if _iv is None:
                                raise Bail("add/sub index %r is not a value"
                                           % (src2,))
                            _sh = ("shift", ext_op, shift, _iv) if shift \
                                else _iv
                            _ty0 = _rw(_srcv)
                            _e = ("expr", "+" if mn == "add" else "-",
                                  _srcv, _sh, _ty0)
                            if mn == "add":
                                state[wreg(dst)] = _e
                            else:
                                state[wreg(dst)] = ("expr", "-", _e,
                                                    ("imm", 0, _ty0), _ty0)
                            continue
                        bid, breal = resolve_base(src)
                        if breal:
                            used_args.add(bid)
                            ptr_args.add(bid)
                        elif bid == SRET_ID:
                            raise Bail("indexed add cannot use the struct-return "
                                       "pointer as its base")
                        # resolve_base folds any displacement into a synthetic
                        # pointer's expression, so there is no separate offset.
                        boff = 0
                        # The third operand of `add x8, x9, w9, sxtw #4` is a
                        # *value*, not a memory base, so `arg_reg` is the wrong
                        # resolver: it only knows x0-x7 and raised "memory base
                        # 'x8' is not an argument register" for an index that was
                        # never a base. It could equally be a computed
                        # expression -- `mov w9, #1 ; sub w9, w9, w1 ; add x8,
                        # x8, w9, sxtw #4` -- in which case there is no
                        # register to look up at all.
                        iv = state.get(wreg(src2))
                        if iv is None:
                            iv = self._value_arg(src2, used_args, idx_args, ptr_args)
                        if iv is None:
                            raise Bail("add/sub index %r is not a value"
                                       % (src2,))
                        # The extend decides the *index's* declared type, not the
                        # base's. `_value_arg` already set it from the register
                        # class -- `w1` is uint32_t -- which is right for `uxtw`
                        # and wrong for `uxtb`/`uxth`, and the wrongness shows up
                        # in the symbol, not just the arithmetic:
                        #
                        #   add x8, x0, w1, uxtb #2   ->  _Z...Pvt   (uint8_t)
                        #                                  add x8, x0, w1, uxtw #2
                        #
                        # so the type has to be rebuilt from the extend. Only an
                        # argument index can be retyped; an index that is a load
                        # or an expression already carries its own type.
                        if iv[0] == "argval":
                            icy = EXTEND_TYPES[ext_op][0]
                            # A byte/halfword index is *narrower* than the
                            # register it arrives in, so the conversion the
                            # instruction names is the conversion from the
                            # parameter's declared type. Casting again makes
                            # Clang materialise the truncation as a separate
                            # instruction:
                            #
                            #   (uint8_t)a1 * 4   ->  and w8, w1, #0xff
                            #                             add x8, x0, w8, uxtw #2
                            #   a1 * 4             ->  add x8, x0, w1, uxtb #2
                            #
                            # So for these the parameter is used bare and the
                            # extend *is* the narrowing. For uxtw/sxtw the cast is
                            # a no-op that costs nothing, and is kept.
                            narrow = ext_op in ("uxtb", "sxtb", "uxth", "sxth")
                            iv = ("argval", iv[1], icy, narrow)
                            idx_args[iv[1]] = icy
                        state[wreg(dst)] = ("addr_i", bid, boff, iv, scale)
                        continue
                    off = 0
                else:
                    raise Bail("add/sub with %d operands is not modelled" % (len(ops),))

                # Value arithmetic on two registers.
                #
                # An operand that is an *incoming argument* has no `state` entry,
                # so requiring one declined every `sub w9, w9, w1` -- arithmetic
                # on an argument -- as "not a known register". Same shape as the
                # store-source case: an argument used as a value is still a
                # parameter, and must be declared as one. Only x0..x7 qualify;
                # x8 is the struct-return pointer, not a value source.
                s1 = state.get(wreg(src))
                if s1 is None:
                    s1 = self._value_arg(src, used_args, idx_args, ptr_args)
                s2 = state.get(wreg(src_r))
                if s2 is None:
                    s2 = self._value_arg(src_r, used_args, idx_args, ptr_args)
                if s1 is None or s2 is None:
                    raise Bail("add/sub operand is not a known register")
                # A three-operand `add x8, x0, x8` reaches here even when x0
                # holds an address and x8 an immediate, because the third operand
                # is a register. That is address arithmetic and folds into the
                # offset rather than becoming an integer expression:
                #
                #     add w8, w1, #0x20
                #     add x8, x0, x8        <- address + immediate
                #     add x0, x8, #0x28
                #
                # Refused as "add/sub on a 'addr' value is not value arithmetic".
                if (s1[0] in ("addr", "addr_i") and s2[0] == "imm"
                        and mn == "add"):
                    if s1[0] == "addr":
                        state[wreg(dst)] = ("addr", s1[1], s1[2] + s2[1])
                    else:
                        state[wreg(dst)] = ("addr_i", s1[1], s1[2] + s2[1],
                                            s1[3], s1[4])
                    continue
                # `cset` and `sel` are integers -- 0/1, or one of two values -- so
                # arithmetic on them is ordinary value arithmetic. They were not in
                # this list, and `sub w0, w9, w8` where w9 came from a `cset`
                # declined as "add/sub on a 'cset' value is not value arithmetic".
                # That is 29 bodies whose only obstacle was a missing list entry.
                # `local` added for the same reason: a call result is a value, and
                # `add w0, w0, w1` after `bl` is as ordinary as after `ldr`.
                _ARITH = ("load", "expr", "arg", "argval", "imm", "cset",
                          "sel", "local")
                if s1[0] not in _ARITH:
                    raise Bail("add/sub on a %r value is not value arithmetic" % (s1[0],))
                if s2[0] not in _ARITH:
                    raise Bail("add/sub on a %r value is not value arithmetic" % (s2[0],))
                # `arg` is allowed above because an argument used as an integer is
                # a parameter -- but an argument *declared* `void*` is a pointer,
                # and arithmetic on one is a different program:
                #
                #     sub w8, w1, w0        with a0 = void*
                #       ->  (uint32_t)a1 - (uint32_t)a0
                #       ->  error: cast from pointer to smaller type 'uint32_t'
                #           loses information
                #
                # That error is a *compile* error, so it does not decline this one
                # body -- it fails the whole batch it was compiled in. One such
                # candidate cost 125 sdk candidates, and the module reported no
                # MATCH line at all, which reads as "the compiler disagrees" rather
                # than "the generator emitted invalid C".
                #
                # The check is on the value's own declared type, which is the only
                # place the distinction exists: `("arg", n)` carries `void*` for a
                # base argument and `uint64_t` otherwise.
                for _v, _lbl in ((s1, "first"), (s2, "second")):
                    if _v[0] == "arg" and len(_v) > 2 and _v[2] == "void*":
                        raise Bail("%s operand is a pointer; add/sub cannot "
                                   "subtract or add it as an integer" % _lbl)
                    # `argval` is the same argument read as an integer, and it is
                    # produced *without* consulting ptr_args -- traced:
                    # `_value_arg('w0') -> ('argval', 0, 'uint32_t')` with
                    # `ptr_args=set()`. The argument's pointer role is only
                    # recorded later, when a store resolves it as a base, so by
                    # the time the arithmetic runs the evidence is not in `state`.
                    #
                    # So the role has to be recovered from the body's own usage:
                    # an argument used as a memory base anywhere in the body is a
                    # pointer, and casting it to uint32_t loses information. That
                    # is what produced
                    #     (uint32_t)a1 - (uint32_t)a0
                    # for `sub w8, w1, w0` in a function whose a0 is `void*`.
                    if _v[0] == "argval" and _v[1] in base_args:
                        raise Bail("%s operand is argument %d, which this body "
                                   "also uses as a memory base; it is a pointer "
                                   "and cannot be used as an integer"
                                   % (_lbl, _v[1]))
                op = "+" if mn == "add" else "-"
                if len(ops) == 4 and ext_op is not None:
                    s2 = ("shift", ext_op, shift, s2)
                state[wreg(dst)] = ("expr", op, s1, s2, _rw(s1))
                continue

            # ---- floating point -------------------------------------------
            #
            # Only the shapes measured on clang 5.0.1 -O3 are claimed:
            #
            #   fmov <Xd>, <Dn>   ->  ((union { double d; u64 u; }){ .d = aN }).u
            #   fmov <Dd>, <Xn>   ->  ((union { double d; u64 u; }){ .u = aN }).d
            #   fneg <Dd>, <Dn>   ->  -aN
            #
            # d0 and x0 are the same storage, so a pun is a cast between views of
            # one register rather than a move. Nothing here needs a new value
            # kind; `fpun` and `fpneg` render as expressions over the argument.
            #
            # Only an ARGUMENT source is modelled. A pun of a loaded value would
            # need the load to stay live in the FP file, which is a larger claim
            # than these bodies make, so it declines rather than guesses.
            # `movi v0.2d, #0000000000000000` -- a SIMD immediate. 226 distinct
            # forms exist and the zeroes dominate:
            #
            #     v0.2d, #0   x595      v1.2d, #0    x84
            #     d0,   #0     x42
            #
            # A plain zero constant does NOT produce it -- `struct V v = {0,0}`
            # gives `mov x0, xzr` -- but a NEON vector does, exactly:
            #
            #     uint64x2_t v = {0, 0};   ->   movi v0.2d, #0000000000000000
            #
            # `arm_neon.h` is already in MH.PREAMBLE, so the types are available in
            # every generated translation unit and this needs no build change.
            #
            # Only the ZERO form is claimed. A non-zero immediate is a replicated
            # bit pattern that depends on the lane width, and guessing the
            # spelling for all 226 forms is exactly the kind of claim that should
            # be measured per form rather than assumed.
            if mn == "movi":
                _ops = [o.strip() for o in i.op_str.split(",")]
                if len(_ops) == 2 and _ops[0][:1] == "v":
                    _arr = _ops[0].split(".")
                    if len(_arr) != 2:
                        raise Bail("movi destination %r has no arrangement"
                                   % _ops[0])
                    _lanes, _width = _arr[1][:-1], _arr[1][-1]
                    if not _lanes.isdigit() or _width not in "bhsd":
                        raise Bail("movi arrangement %r is not understood"
                                   % _ops[0])
                    _imm = parse_imm(_ops[1].lstrip("#"))
                    if _imm != 0:
                        raise Bail("movi with a non-zero immediate %r"
                                   % _ops[1])
                    _ct = {"b": "uint8_t", "h": "uint16_t",
                           "s": "uint32_t", "d": "uint64_t"}[_width]
                    state[_ops[0]] = ("neon", "%sx%s_t" % (_ct[:-2], _lanes),
                                      int(_lanes))
                    continue
                if len(_ops) == 2 and _ops[0][:1] in ("d", "s") \
                        and parse_imm(_ops[1].lstrip("#")) == 0:
                    # `movi d0, #0` is a SCALAR zero, and a C zero of the same
                    # type is `fmov d0, xzr` rather than `movi`. Claimed anyway as
                    # the plain zero, because the alternative is to decline a
                    # form the body certainly has.
                    _ft2 = "double" if _ops[0][:1] == "d" else "float"
                    state[_ops[0]] = ("imm", 0, _ft2)
                    # The SAME register under its integer name. `movi d0, #0`
                    # followed by a call that reads x0 left 42 bodies at
                    # "call argument x0 is not a known value": d0 and x0 are one
                    # register, and only the FP view had been written.
                    state[wreg(_ops[0])] = ("imm", 0, "uint64_t")
                    continue
                raise Bail("movi form %r is not supported" % (i.op_str,))

            if mn in ("fmov", "fneg"):
                _ops = [o.strip() for o in i.op_str.split(",")]
                if len(_ops) == 2:
                    _d, _s = _ops
                    def _fpidx(r):
                        return int(r[1:]) if r and r[0] in "dsqv" \
                            and r[1:].isdigit() else None
                    _di, _si = _fpidx(_d), _fpidx(_s)
                    _dt = "double" if _d[:1] in ("d", "q") else "float"
                    if mn == "fneg" and _di is not None and _si is not None \
                            and _di <= 7 and _si <= 7:
                        # `fneg d0, d0` in place: the source is already in d0.
                        fp_slots[_si] = _dt   # parameter index resolved at emit time
                        used_args.discard(_si)   # _imax comes from used_args
                        used_args.add(_si)
                        state[_d] = ("fpneg", _si, _si)
                        continue
                    if mn == "fmov":
                        # The operands are MIXED: `fmov x0, d0` has an integer
                        # destination and an FP source. Requiring both to be FP
                        # rejected every real fmov.
                        # "s" belongs here. Checking only ("d","q") classified
                        # every SINGLE-precision pun as neither-FP and fell
                        # through to the reject -- which is all 13 of the sampled
                        # sdk bodies, since `fmov w1, s0` is the float form.
                        _sfp = _s[:1] in ("d", "q", "s")
                        _dfp = _d[:1] in ("d", "q", "s")
                        if _sfp and not _dfp and _si is not None and _si <= 7:
                            # Integer view of an FP argument.
                            #
                            # WIDTH MATTERS: `s0` is a float and `d0` is a double,
                            # and they pun to different widths. Treating `fmov w1,
                            # s0` as the double pun declared a0 `double`, which is
                            # a different function -- and 13 of the 14 sampled sdk
                            # bodies are the float form.
                            # THE FP REGISTER NUMBER IS NOT THE ARGUMENT
                            # NUMBER. AArch64 passes integer arguments in x0..x7
                            # and float arguments in s0..s7 / d0..d7, so for
                            #     f(void *a0, void *a1, float a2)
                            # the float is parameter 2 but arrives in s0. Keying
                            # fp_args by the FP register made it parameter 0,
                            # colliding with a0, and the pun rendered as a1.
                            #
                            # FP parameters follow every integer parameter in the
                            # C signature, so the mapping is resolved at emit time
                            # once the integer argument set is known.
                            _ft = "float" if _s[:1] == "s" else "double"
                            fp_slots[_si] = _ft
                            # An INTEGER destination must use wreg(): `w1` and `x1` are one register and
                            # state is keyed by the wide name. Writing state["w1"] put
                            # the pun in a slot nothing reads, so the call still
                            # passed the integer argument and the pun vanished.
                            state[wreg(_d)] = ("fpun", _si, "to_int", _ft)
                            continue
                        if _dfp and not _sfp and _di is not None and _di <= 7:
                            # FP view of an integer argument
                            # fp_slots, not fp_args: the parameter index is
                            # resolved at emit time, and this branch predates
                            # that rename.
                            fp_slots[_di] = "double"
                            state[_d] = ("fpun", _di, "to_fp")
                            continue
                raise Bail("unsupported %s form %r" % (mn, i.op_str))

            raise Bail("unhandled instruction %r %r" % (mn, i.op_str))

        # `_emit` is a separate method and never saw this walk-local, and
        # its signature is already long enough. Publish it rather than
        # widen the call for one set.
        # Pin the dead half of every pair load, now that the whole body is known.
        #
        # A second destination is dead when no instruction READS it. Appearing as a
        # destination does not count as a read -- including being the second
        # destination of its own `ldp`. Only dead halves are pinned: pinning a live
        # one is redundant, and a redundant load is not free.
        # A synth local built from a CALL RESULT cannot be declared before the
        # call. `pre` is emitted ahead of the call statements, so the declaration
        # landed above the initialiser it references:
        #
        #     void* p0 = (void*)((uintptr_t)(f__r0));   <- uses f__r0
        #     uint64_t f__r0 = callee(...);            <- declared here
        #
        # which is not C and does not compile. Those locals move to the post-call
        # position, which already exists for the pins.
        late_synth = set()
        for _k, _init in synth:
            _t = _init[1] if (isinstance(_init, tuple) and len(_init) > 1) else None
            if _t == "local" or (isinstance(_init, tuple) and _init[0] == "local"):
                late_synth.add(_k)

        for _d2, _base2, _off2, _w2 in pair_seconds:
            _live = False
            for _ins in insns:
                _ops = [_o.strip() for _o in _ins.op_str.split(',')] \
                    if _ins.op_str else []
                if len(_ops) < 2:
                    continue
                # Operand position is NOT uniform: `ldp x8, x1, [x0]` is
                # dest, dest, src, so ops[1] is a DESTINATION. Counting
                # ops[1:] as sources made every pair half look live and
                # silently disabled the entire mechanism.
                _src = (_ops[2:] if _ins.mnemonic in PAIR_LOADS
                        or _ins.mnemonic in PAIR_STORES else _ops[1:])
                if _d2 in _src:
                    _live = True
                    break
            if _live:
                continue
            _v = state.get(_d2)
            if _v is None or _v[0] != 'load':
                continue
            _key = SYNTH_BASE + len(synth)
            synth.append((_key, '(void *)(*(uint64_t *)(%s))'
                          % ptr_add(nm(_base2), _off2)))
            pinned.add(_key)

        # Lateness PROPAGATES. A pin local built on a late base names it, so
        # moving the base alone just moves the error one line up:
        #
        #     void* p1 = ...(p0)...;     <- p0 is declared below it
        #     uint64_t r0 = callee(...);
        #     void* p0 = ...(r0)...;
        #
        # `synth` is in allocation order and an initialiser only ever names
        # EARLIER entries, so a single forward pass reaches the fixpoint.
        for _k, _init in synth:
            if _k in late_synth:
                continue
            _txt = _init if isinstance(_init, str) else (
                _init[1] if (isinstance(_init, tuple) and len(_init) > 1
                             and isinstance(_init[1], str)) else "")
            if any(nm(_p) in _txt for _p in late_synth):
                late_synth.add(_k)

        self._pinned = pinned
        # `_emit` is a separate method, as with the pinned set.
        # Integer parameters come first in the signature, so FP parameter k
        # is C parameter (max integer index + 1 + k), numbered by FP slot.
        _imax = max(used_args) if used_args else -1
        fp_args = {}
        for _k in sorted(fp_slots):
            fp_args[_imax + 1 + _k] = fp_slots[_k]
        # Every FP slot is a parameter whether or not a pun used it.
        for _k in sorted(fp_slots):
            used_args.add(_imax + 1 + _k)
        self._fp_slotmap = {k: _imax + 1 + k for k in sorted(fp_slots)}
        self._fp_args = fp_args
        self._late_synth = late_synth
        if tail is not None:
            # A tail call FORWARDS argument registers, so the arity defines the
            # parameter list -- whether or not the body read them.
            #
            #     add  x2, x0, #0xec
            #     add  x3, x0, #0xe8
            #     mov  w4, #1
            #     b    target
            #
            # forwards x0..x4. x0 and x1 are never READ by the body, so the
            # walk never marked them used, and the signature came out with no
            # parameters for them -- "tail call argument x1 is neither written
            # nor an incoming argument".
            for _k in range(tail[1]):
                used_args.add(_k)
        return self._emit(ident, state, stmts, used_args, ptr_args, synth, idx_args,
                               call_stmts, saw_call, tail=tail,
                               block=(None if guard is None else
                                      (_gstate, _gn_stmts, _gn_calls, _gval,
                                       _gform, _gn_dstmts)))

    @staticmethod
    def _guard_operand(reg, state, used_args):
        """-> a value tuple for one operand of a guard's compare.

        An FP slot is an FP parameter, not an integer one, so the lookup has to
        go through the same state the walk built rather than treating `s0` as an
        argument register. An unknown operand is an incoming argument.
        """
        # An IMMEDIATE operand. `cmp x2, #0x168 ; b.hi` is the common shape here and
        # `_guard_operand` assumed both operands were registers, so the literal
        # fell through to `arg_reg("#0x168")` and raised
        #
        #     operand '#0x168' is not an argument register (x0-x7)
        #
        # for 14 guarded bodies. A message about an argument register, for a
        # constant that is not a register at all.
        _t = reg.strip()
        if _t.startswith("#"):
            _iv = parse_imm(_t.lstrip("#"))
            if _iv is not None:
                return ("imm", _iv, "uintptr_t")
        if reg in state:
            return state[reg]
        # `state` is keyed by the WIDENED register, so `w8` is stored as `x8`.
        # Looking up the raw spelling missed every 32-bit guard operand and fell
        # through to `arg_reg("w8")`, which raises "operand 'w8' is not an
        # argument register (x0-x7)" -- 17 guarded bodies, and a confusing message
        # for what is really a widened key. `orr w8, w1, #2 ; cmp w8, #2 ;
        # b.ne` writes x8, so the compare finds nothing.
        _w = wreg(reg)
        if _w in state:
            return state[_w]
        if reg in ("xzr", "wzr"):
            return ("imm", 0, "uintptr_t")
        return ("arg", arg_reg(reg), "uintptr_t")

    def _guard_test(self, ins, state, used_args, idx_args, ptr_args,
                     prev=None):
        """-> (value tuple, "nz"|"z") for a guarded block's condition.

        The branch SKIPS the block when it is taken, so the C is the negation of
        the branch test, and `_gform` records which way round that is:

            cbz  Rd, ret     ->  if (Rd)            form "nz"
            cbnz Rd, ret     ->  if (!(Rd))         form "z"
            tbz  Rd, #b, ret ->  if (!((Rd) & 1<<b)) form "z"
            tbnz Rd, #b, ret ->  if ((Rd) & 1<<b)    form "nz"

        `tbz`/`tbnz` test a BIT, not the whole register, so the value is masked
        and the mask is carried in the value tuple -- `imm` values render as a
        literal, and masking is a `bitwise` value.
        """
        _o = [x.strip() for x in ins.op_str.split(",")]
        mn = ins.mnemonic
        if mn in CMP_GUARDS:
            # A CONDITIONAL branch on the flags set by the instruction before it.
            #
            # Every one of these in the guarded population is an FP compare --
            # `fcmp s0, s1 ; b.lt` and `b.hi` -- so the condition is a direct
            # comparison of two values the walk has already loaded, and the
            # existing `expr` value kind renders it: `(a) < (b)`.
            #
            # The branch SKIPS the block, so the C is the NEGATION of the branch
            # test. That inversion is the whole table:
            #
            #     b.eq  taken when ==      ->  if (a != b)
            #     b.ne  taken when !=      ->  if (a == b)
            #     b.lt  taken when <       ->  if (a >= b)
            #     b.hi  taken when >       ->  if (a <= b)
            #
            # `hi`/`hs`/`lo`/`ls` are the UNSIGNED orderings, and on FP operands
            # Clang would fold them to the same thing, but the spelling is kept
            # as the integer meaning so an integer `cmp` reads correctly too.
            if prev is None or prev.mnemonic not in ("fcmp", "cmp", "cmn"):
                raise Bail("guard %r is not preceded by a compare" % (mn,))
            _p = [x.strip() for x in prev.op_str.split(",")]
            if len(_p) != 2:
                raise Bail("compare %r is not two-operand" % (prev.op_str,))
            op = CMP_GUARDS[mn]
            a, b = _p
            va = self._guard_operand(a, state, used_args)
            vb = self._guard_operand(b, state, used_args)
            ct = "double" if prev.mnemonic == "fcmp" else "uintptr_t"
            # "cmpnz", NOT "nz".
            #
            # The two differ in what the FALLTHROUGH knows about x0, which is the
            # difference between a correct body and a wrong one:
            #
            #     ldr x0, [x0, #0x50] ; cbz x0, ret   -- the zero is PROVEN, so the
            #                                            fallthrough returns 0
            #     ldr w8, [x0, #0x8c] ; cmp w8, #1    -- nothing is proven about x0,
            #     b.eq ret                                  which is still the
            #                                                incoming argument
            #
            # main+0xb327c0 is the second shape, and returning "nz" for it emitted
            # `return 0;` where retail returns its argument. The condition itself
            # was right -- `CMP_GUARDS` already holds the NEGATED operators, and
            # `b.eq` on a compare correctly becomes `!=` -- so the source read
            # correctly and still decompiled to the wrong function.
            return ("expr", op, va, vb, ct), "cmpnz"
        if mn in ("cbz", "cbnz"):
            reg, form, mask = _o[0], ("nz" if mn == "cbz" else "z"), None
        elif mn in ("tbz", "tbnz"):
            reg, form = _o[0], ("nz" if mn == "tbnz" else "z")
            mask = parse_imm(_o[1].lstrip("#"))
        else:
            raise Bail("guard %r is not a single-register test" % (mn,))
        if reg in ("xzr", "wzr"):
            raise Bail("guard tests the zero register")
        if wreg(reg) in state:
            val = state[wreg(reg)]
        else:
            an = arg_reg(reg)
            used_args.add(an)
            val = ("arg", an, "uintptr_t")
        if mask is not None:
            # `expr` is the arithmetic/binary kind and renders `(a) & (b)` for any
            # operator, so it carries the mask without a new value kind. There is
            # no `bitwise` kind -- checked, not assumed.
            val = ("expr", "&", val, ("imm", mask, "uintptr_t"), "uintptr_t")
        return val, form

    @staticmethod
    def _value_arg(reg, used_args, idx_args, ptr_args=None):
        """An incoming argument used as an arithmetic *value*, or None.

        Returns the same `("arg", n)` shape the store-source path already used.
        `add x8, x8, x1` on its own is address arithmetic and goes through
        `arg_reg` instead; this covers `sub w9, w9, w1`, where the argument is a
        plain integer operand.
        """
        n = arg_reg(reg)
        # An argument is a pointer or an integer, never both -- C++ will not let
        # one name carry both types. If this register is already serving as a
        # memory base then it is a pointer, and using it as a bitwise operand
        # contradicts that:
        #
        #     return a0;
        #     error: cannot initialize return object of type 'void *' with an
        #            lvalue of type 'uint64_t'
        #
        # The mismatch is invisible in the source (the name looks fine) and only
        # the declared parameter type gives it away, so the fix is to keep one
        # role per argument rather than let two paths claim it.
        if ptr_args is not None and n in ptr_args:
            return None
        used_args.add(n)
        cty = "uint32_t" if reg.strip().startswith("w") else "uint64_t"
        idx_args.setdefault(n, cty)
        # A distinct kind from ("arg", n): as a *memory base* an argument is
        # `void*`, but in arithmetic it is an integer. Rendering it as void* gave
        #   return ((a0) - (v)) - 16;
        # -> `error: arithmetic on a pointer to void`, which killed a 200-candidate
        # batch. As an integer the same operand is fine, and mixing a `char *`
        # with a uintptr_t is legal pointer arithmetic.
        return ("argval", n, cty)

    def _render(self, val, names):
        kind = val[0]
        if kind == "imm":
            return val[2], ("%d" % val[1] if val[1] >= 0 else str(val[1]))
        if kind == "load":
            _, n, off, w, signed = val
            ct = S[w] if signed else U[w]
            return ct, "*(%s*)(%s)" % (ct, ptr_add(names[n], off))
        if kind == "load_i":
            # A load through an *indexed* address: `ldr x0, [x8, w1, sxtw #3]`.
            #
            # This used to be modelled as `addr_i` -- the address -- which emitted
            # `add x0, x8, w1, sxtw #3`. That is the address, not the load: the
            # instruction dereferences it. Clang chooses between the two from
            # whether the C expression reads a value or takes an address:
            #
            #     base[i]      ->  ldr x0, [x0, w1, sxtw #3]    <- retail
            #     &base[i]     ->  add x0, x0, w1, sxtw #3
            #     (char*)b+i*8 ->  add x0, x0, w1, sxtw #3
            #
            # So the same address is `ldr` or `add` purely by how it is spelled,
            # and the translator was spelling every indexed load as an address.
            # 546 of 1,707 mismatched bodies carry this form.
            #
            # Rendered as a dereference of the indexed address, which is what
            # makes Clang emit the load.
            _, n, off, iv, w, signed = val
            ct = S[w] if signed else U[w]
            if isinstance(iv, tuple) and iv[0] == "raw":
                _ei = iv[1]
            else:
                _ci, _ei = self._render(iv, names)
            _addr = "((char *)%s + (uintptr_t)(%s))" % (names[n], _ei)
            if off:
                _addr = "((char *)%s + (uintptr_t)(%s) + %d)" % (names[n], _ei,
                                                                 off)
            return ct, "*(%s*)(%s)" % (ct, _addr)
        if kind == "addr":
            _, n, off = val
            return "void*", ptr_add(names[n], off)
        if kind == "expr":
            # An integer result of add/sub on loaded/argument values. The two
            # operands are themselves value tuples, rendered recursively with the
            # real names, so this only works in `_emit` -- which is exactly where
            # the result is needed.
            _, op, s1, s2, ct = val
            # A POINTER-typed left operand makes this pointer arithmetic, not
            # integer arithmetic, and C++ will not compile `(a0) + (360)` when
            # `a0` is `void *`:
            #
            #     error: arithmetic on a pointer to void
            #
            # That error killed a whole 20-candidate batch, so the population it
            # came from (6,467 prefix tail calls in main) was never compared at
            # all -- the run reported 5,083 of 11,550 tried and stopped.
            #
            # `ptr_add(left, 0)` is the existing spelling for "this pointer,
            # byte 0", so it produces `(char *)(a0)` and the arithmetic becomes
            # byte arithmetic. An argument whose declared type is an integer is
            # left alone -- casting that to `char *` would change the code
            # Clang emits, not just make it compile.
            _s1 = s1
            if (op == "+" and isinstance(s1, tuple) and s1[0] == "arg"
                    and (len(s1) < 3 or s1[2] == "void*")):
                _ct0, _e0 = self._render(s1, names)
                if _e0 in names.values():
                    _s1 = _e0
                    _c1, _e1 = "void*", ptr_add(_e0, 0)
                else:
                    _ct1, _e1 = self._render(s1, names)
            else:
                _ct1, _e1 = self._render(s1, names) if isinstance(s1, tuple) \
                    else (None, s1)
            if isinstance(s2, tuple):
                if s2[0] == "shift":
                    _c2, _e2 = self._render(s2[3], names)
                    if s2[1] == "lsl":
                        # `((%s) << %d)`, not `(%s << %d)`: the operand is a rendered
# expression, which may itself be an unparenthesised binary like
# `(a) & (b)`. Wrapping only the *result* leaves `((a) & (b) << 5)`,
# which C binds as `(a) & ((b) << 5)` -- silently different arithmetic
# that compiles, matches nothing, and gets blamed on the compiler.
                        _e2 = "((%s) << %d)" % (_e2, s2[2])
                    elif s2[1] == "uxtw":
                        _e2 = "((uint32_t)(%s))" % _e2
                    elif s2[1] == "sxtw":
                        _e2 = "((int32_t)(%s))" % _e2
                elif s2[0] == "cast":
                    # A widening multiply's operand. The cast IS the sign or
                    # zero extension the instruction performs, so it is rendered
                    # explicitly rather than left to C's usual arithmetic
                    # conversions -- which would promote both operands to the
                    # result type and turn `umull` into a signed multiply.
                    _c2, _e2 = self._render(s2[2], names)
                    _e2 = "((%s)(%s))" % (s2[1], _e2)
                else:
                    _c2, _e2 = self._render(s2, names)
            else:
                _e2 = s2
            return ct, "(%s) %s (%s)" % (_e1, op, _e2)
        if kind == "shift":
            _, ext_op, shift, s = val
            _c2, _e2 = self._render(s, names)
            if ext_op == "lsl":
                # Parenthesise the operand; see the `expr` shift arm.
                return _c2, "((%s) << %d)" % (_e2, shift)
            if ext_op == "asr":
                # The signed type of the SAME width: a 32-bit operand shifts as
                # int32_t, a 64-bit one as int64_t. Widening first would change
                # the instruction back.
                _w = 32 if _c2 in ("uint32_t", "int32_t", "uint16_t",
                                   "int16_t", "uint8_t", "int8_t") else 64
                return ("int%d_t" % _w,
                        "(((int%d_t)(%s)) >> %d)" % (_w, _e2, shift))
            if ext_op == "uxtw":
                return _c2, "((uint32_t)(%s))" % _e2
            return _c2, "((int32_t)(%s))" % _e2
        if kind == "addr_i":
            # `(base + off) + index * scale`, with the index rendered from its
            # own value tuple so it may be a load, an expression or an argument.
            _, n, off, iv, scale = val
            if isinstance(iv, tuple) and iv[0] == "raw":
                _ei = iv[1]
                _narrow = False
            else:
                _ci, _ei = self._render(iv, names)
                _narrow = (isinstance(iv, tuple) and iv[0] == "argval"
                           and len(iv) > 3 and iv[3])
            if _narrow:
                # The index's own type is byte- or halfword-wide, and that
                # narrowing IS the instruction's extend. Casting it to uintptr_t
                # first forces a full 64-bit extension, which Clang materialises
                # separately:
                #
                #   ((uintptr_t)(uint8_t)a1) * 4  ->  and w8, w1, #0xff
                #                                             add x8, x0, w8, uxtw #2
                #   (uint8_t)a1 * 4                ->  add x8, x0, w1, uxtb #2
                #
                # so the narrow index is scaled in its own type and left for the
                # addressing-mode selection to pick the extend.
                return "void*", "((char *)%s + (%s) * %d)" % (
                    ptr_add(names[n], off), _ei, scale)
            return "void*", "((char *)%s + (uintptr_t)(%s) * %d)" % (
                ptr_add(names[n], off), _ei, scale)
        if kind == "arg":
            # An incoming argument stored straight through. `_emit` applies the
            # store-width cast, so handing back the bare name is enough.
            # The declared type travels with the value; see the store-source
            # path. Falling back to `void*` is the pre-fix behaviour.
            return val[2] if len(val) > 2 else "void*", names[val[1]]
        if kind in ("sel", "cset"):
            # Branchless conditional: what Clang emits for C's `? :`.
            if kind == "cset":
                # ("cset", cond, flags, cty) -- the type is the 4th element.
                # It read `out = cty`, and `cty` is not a name in `_render`, so
                # every cset raised NameError. 209 bodies, silently, because the
                # census caught exceptions as a separate counter.
                _cc, _fl = val[1], val[2]
                out = val[3]
            else:
                _cc, _x, _y, _fl, out = val[1], val[2], val[3], val[4], val[5]
            _fk, _fa, _fb = _fl
            if _fk == "tst":
                _ca, _ce = self._render(_fa, names)
                _cc_ty, _ce2 = self._render(_fb, names)
                _test = "(%s & (uint64_t)(%s))" % (_ce, _ce2)
            else:
                _ca, _ce = self._render(_fa, names)
                # The compared-against operand may be a `shift`, which is how
                # `cmp Rn, #imm, lsl #n` is carried. Rendered here rather than in
                # the generic path because the alternative is a `TypeError` deep
                # inside `_render` for `("imm", ...)`: an exception, not a decline,
                # so the body would vanish with no explanation.
                if isinstance(_fb, tuple) and _fb[0] == "shift":
                    _si, _se = self._render(_fb[3], names)
                    # Parenthesise the operand; see the `expr` shift arm.
                    _ce2 = "((%s) << %d)" % (_se, _fb[2])
                else:
                    _cb, _ce2 = self._render(_fb, names)
                # Spaces, not parentheses: `(%s)(%s)(%s)` emits `(a)(==)(b)`,
                # which is a syntax error and killed the whole batch.
                _test = "(%s %s %s)" % (_ce, COND_OPS.get(_cc, "=="), _ce2)
            if kind == "cset":
                return out, "(%s ? 1 : 0)" % _test
            _bx, _ex = self._render(_x, names)
            _by, _ey = self._render(_y, names)
            # A select between a pointer and an integer is the null-select idiom
            # -- `csel x0, x1, xzr, ne` is `x1 ? x1 : NULL` -- and C++ rejects the
            # mix outright:
            #
            #   return ((cond) ? ((char *)p0 + 24) : (40));
            #   error: incompatible operand types ('char *' and 'int')
            #
            # Both arms are cast to the pointer type when exactly one is a
            # pointer. The integer side is a null constant in that idiom; the
            # cast is the same conversion the original performs.
            if _bx == "void*" and _by != "void*":
                return "void*", "((%s) ? (%s) : (void *)(uintptr_t)(%s))" % (
                    _test, _ex, _ey)
            if _by == "void*" and _bx != "void*":
                return "void*", "((%s) ? (void *)(uintptr_t)(%s) : (%s))" % (
                    _test, _ex, _ey)
            return out, "((%s) ? (%s) : (%s))" % (_test, _ex, _ey)
        if kind == "un":
            # Unary NOT / negate. A separate kind because the binary `expr` path
            # cannot express them -- see the `mvn`/`bic` note in translate().
            _, uop, uv, uty = val
            _cu, _eu = self._render(uv, names)
            if uop == "~":
                return uty, "(~((%s)%s))" % (uty, _eu)
            return uty, "(0 - ((%s)%s))" % (uty, _eu)
        if kind == "raw_call":
            # A builtin rendered verbatim: `__builtin_bswap32(v)` -> `rev w0, w0`.
            # Needs no C prototype -- it is a compiler builtin, not a function, so
            # naming it does not add a symbol and cannot collide in a batch TU.
            _cu, _eu = self._render(val[2], names)
            return val[3], "%s(%s)" % (val[1], _eu)
        if kind == "call_n":
            # A call to a named function, with the arguments it was given.
            # Retained for callers that build a call as a value; the walk now
            # emits calls as statements and refers to the result through `local`,
            # because a value that nothing reads renders as nothing at all.
            _ae = ", ".join(call_arg(self._render(a, names)) for a in val[2])
            _pt = ", ".join("uintptr_t" for _ in val[2]) or "void"
            return val[3], "((%s (*)(%s))&%s)(%s)" % (val[3], _pt, val[1], _ae)
        if kind == "local":
            # A local defined by a call statement earlier in the same function.
            # Not a value the translator has to rebuild -- it already exists, which
            # is the whole point: keeping the call's result in a variable is what
            # lets the call be emitted unconditionally.
            return val[2], val[1]
        if kind == "cast":
            # Reachable at top level, not only nested inside `expr`: the widening
            # product of a `smaddl`/`umull` can be stored to a register on its own
            # before anything combines it, and then it is rendered directly. The
            # `expr` renderer handles the nested case; without this arm the
            # translator raised `unknown value kind 'cast'` on exactly those
            # bodies -- the first one tried (`main@0x4553a0`) declined for this
            # reason alone.
            _cu, _eu = self._render(val[2], names)
            return val[1], "((%s)(%s))" % (val[1], _eu)
        if kind == "argval":
            # The same argument as an arithmetic operand: an integer, never a
            # pointer. See `_value_arg`.
            #
            # The 4th element means "already declared as this type, do not cast
            # again" -- a byte/halfword index whose narrowing *is* the extend.
            # See the indexed-add path.
            if len(val) > 3 and val[3]:
                return val[2], names[val[1]]
            return val[2], "((%s)%s)" % (val[2], names[val[1]])
        if kind == "fpun":
            # A union pun between the two views of ONE register. d0 and x0 are
            # the same storage, so this is a cast between views rather than a
            # move, and a compound literal keeps it to one expression:
            #
            #     ((union { double d; uint64_t u; }){ .d = a0 }).u
            #
            # Measured, clang 5.0.1 -O3: emits exactly `fmov x0, d0`.
            # val[1] is the FP SLOT, not the parameter index.
            _n = getattr(self, "_fp_slotmap", {}).get(val[1], val[1])
            if val[2] == "to_int":
                if val[3] == "float":
                    return ("uint32_t",
                            "((union { float f; uint32_t u; })"
                            "{ .f = a%d }).u" % _n)
                return ("uint64_t",
                        "((union { double d; uint64_t u; }){ .d = a%d }).u" % _n)
            if val[3] == "float":
                return ("float",
                        "((union { float f; uint32_t u; }){ .u = a%d }).f" % _n)
            return ("double",
                    "((union { double d; uint64_t u; }){ .u = a%d }).d" % _n)
        if kind == "neon":
            # A NEON vector zero, as a compound literal so it stays one
            # expression. Measured: `uint64x2_t v = {0,0}` emits exactly
            # `movi v0.2d, #0`.
            _, _ct, _lanes = val
            return (_ct, "(%s){%s}" % (_ct, ", ".join(["0"] * _lanes)))
        if kind == "fpneg":
            # `fneg d0, d0` is unary minus on the FP argument.
            _n = getattr(self, "_fp_slotmap", {}).get(val[1], val[1])
            return ("double", "(-a%d)" % _n)
        raise Bail("unknown value kind %r" % (kind,))

    def _emit(self, ident, state, stmts, used_args, ptr_args, synth=(), idx_args=(),
              call_stmts=(), saw_call=False, block=None, tail=None):
        """Render the walked body as a function.

        `call_stmts` arrives as (callee name, raw argument value tuples) because
        the argument expressions cannot be rendered during the walk -- `names` is
        allocated here, in the synthetic-pointer loop below. A default of `()`
        keeps every existing caller working; only `translate()` passes anything.
        """
        # Parameter list: one entry per argument register from x0 up to the
        # highest the body reads. Gaps are real unused parameters -- a body that
        # reads x2 but not x0/x1 belongs to a function whose first two arguments
        # it ignores, and collapsing them would shift every argument down a
        # register.
        # Any argument reachable from a value in `state`, or from a value a
        # pending statement will store, is a parameter -- even when no base ever
        # named it. Nested addresses are the case that bit:
        #
        #     ldr x8, [x0, #0x1fa8]
        #     ldr w8, [x8, w1, uxtw #2]      <- w1 is an argument, as an index
        #     ldr x9, [x0, #0x1fa0]
        #     add x0, x9, x8, lsl #4         <- x8 is now an addr_i holding a1
        #
        # The second instruction registers `a1`; a *third* mechanism cannot
        # forget to, because the walk finds it inside the nested value.
        def _collect(v, acc):
            if isinstance(v, str) or v is None:
                return
            if isinstance(v, (int, float, bool)):
                return
            if isinstance(v, (list, tuple)):
                if not v:
                    return
                head = v[0]
                if head == "raw":
                    return              # pre-rendered text; deps registered when made
                if head in ("arg", "argval"):
                    acc.add(v[1])
                    return
                if head in ("addr", "load", "addr_i"):
                    # element 1 is a base id: a real argument below SYNTH_BASE,
                    # or a synthetic pointer local that is already declared.
                    if isinstance(v[1], int) and v[1] < SYNTH_BASE:
                        acc.add(v[1])
                    for e in v[2:]:
                        _collect(e, acc)
                    return
                for e in v[1:]:
                    _collect(e, acc)
                return
        _deps = set()
        for _v in state.values():
            _collect(_v, _deps)
        for _st in stmts:
            if isinstance(_st, (list, tuple)) and len(_st) > 3:
                _collect(_st[3], _deps)
        used_args |= _deps

        decls, names, codes, ptrs = [], {}, [], 0
        top = max(used_args) if used_args else -1
        for k in range(top + 1):
            if k in ptr_args:
                codes.append("S_" if ptrs else "Pv")
                ptrs += 1
                decls.append("void* a%d" % k)
            elif k in getattr(self, "_fp_args", {}):
                # `double` / `float`. Itanium: d for double, f for float.
                _f = self._fp_args[k]
                codes.append("d" if _f == "double" else "f")
                decls.append("%s a%d" % (_f, k))
            elif k in idx_args:
                # An index register's type comes from the extension on the
                # instruction: `sxtw` is a signed 32-bit index (`i`), `uxtw` an
                # unsigned one (`j`), `lsl` on an x register 64-bit (`m`).
                # It changes the mangled name, so it has to be right.
                _c = idx_args[k]
                # Itanium codes, corrected against what Clang actually emitted
                # for these exact signatures:
                #     (void *, uint8_t,  uint64_t) -> _Z..Pvhm  -> h
                #     (void *, uint16_t, uint64_t) -> _Z..Pvtm  -> t
                # unsigned char is 'h' and unsigned *short* is 't'; the pair is
                # easy to have backwards, and `c` is plain char, `a` signed char.
                codes.append({c: code for c, code in
                              (("int32_t", "i"), ("uint32_t", "j"),
                               ("uint64_t", "m"), ("int8_t", "a"),
                               ("uint8_t", "h"), ("int16_t", "s"),
                               ("uint16_t", "t"))}[_c])
                decls.append("%s a%d" % (_c, k))
            elif k in used_args:
                codes.append("m")
                decls.append("uint64_t a%d" % k)
            else:
                codes.append("m")
                decls.append("uint64_t unused%d" % k)
            names[k] = "a%d" % k

        # An empty parameter list is mangled as a bare `v`, never as nothing.
        #
        # Itanium omits the return type from an ordinary function's mangling, so
        # `sig` carries parameter codes only -- `uint64_t f(void*)` and
        # `void f(void*)` are both `_Z..Pv`. What it does not allow is the
        # *absence* of the parameter list: Clang emits `_Z3f_1v` for `f()`,
        # while `MH.mangle(ident, "")` produced `_Z3f_1`.
        #
        # Only the value-returning path below could reach an empty `codes` with
        # no parameters, because the void path hardcoded "v" -- so this showed
        # up as exactly 7 of 84 bodies in `sl_verify` reported as
        # `no-code-emitted`. That label blamed the emitter; the emitter was fine
        # and the lookup key was malformed. The source still does not match the
        # original (a 3-instruction body cannot reduce to `return 0;`), so
        # fixing this reclassifies 7 misreported failures rather than winning
        # any matches.
        if not codes:
            codes.append("v")
        sig = "".join(codes)
        plist = ", ".join(decls)

        # Register pins for displaced addresses. Emitted AFTER any call
        # statements, so the pointer never has to survive the call.
        pins = []
        body_txt = []
        pre = []          # locals that must exist before the stores
        sret_writes = []  # (width, offset, type, expr) stored into the result

        # Synthetic pointer locals, in allocation order. `names` is keyed by the
        # same ids the body already uses, so `_render` and `ptr_add` need no
        # special case.
        for key, init in synth:
            names[key] = nm(key)
            # `init` is either pre-rendered text or a value tuple. Tuples are
            # rendered here, at emit time, because that is the first point where
            # every argument name and every earlier synthetic pointer is known.
            # `names[key]` is assigned first, so a synthetic pointer may reference
            # an earlier one -- which the `nm` docstring already promised.
            if isinstance(init, tuple):
                _sc, _se = self._render(init, names)
                init_txt = "(uintptr_t)(%s)" % _se
            else:
                init_txt = init
            # A late local is declared after the call, alongside the pins.
            _dst = pins if key in getattr(self, "_late_synth", ()) else pre
            _dst.append("void* %s = (void*)(%s);" % (nm(key), init_txt))
            # A DISPLACED address has to survive as a register.
            #
            # Clang folds `page + 0xfc0` straight into the addressing mode of
            # the load that uses it, which is retail's opposite shape:
            #
            #     ours    adrp x8,page ; add x8,x8,x0,lsl#2 ; ldr w0,[x8,#0xfc0]
            #     retail  adrp x8,page ; add x8,x8,#0xfc0    ; ldr w0,[x8,w0,sxtw#2]
            #
            # Retail materialises the base and indexes off it; ours indexes the
            # page and carries the displacement. An empty asm with a "+r"
            # read-write operand pins the pointer in a register so the fold
            # cannot happen.
            #
            # Measured over spellings of one access (clang 5.0.1 -O3). The
            # winner is byte-identical to retail bar the page address:
            #
            #   char* arithmetic, UNSIGNED index -> lsl w9,w0,#2 ; ldr [x8,w9,uxtw]
            #   array subscript, signed index    -> sbfiz x9,x0,#2 ; ldr [x8,x9]
            #   pinned base, UNSIGNED index     -> lsl w9,w0,#2 ; ldr [x8,w9,uxtw]
            #   pinned base, SIGNED index       -> ldr w0,[x8,w0,sxtw #2]  <- retail
            #
            # Only non-zero-offset addresses get this. Every other synth local
            # is untouched, so no already-matched body can be disturbed --
            # forcing a live pointer into a register is not free.
            if key in getattr(self, "_pinned", ()):
                pins.append('__asm__ volatile("" : "+r"(%s));' % nm(key))
        _bcut = None          # (len(pre), len(body_txt)) where the block starts
        _dcut = None          # ... and where ARM_B starts, for a DIAMOND
        for _si, stmt in enumerate(stmts):
            if block and _si == block[1] and _bcut is None:
                _bcut = (len(pre), len(body_txt))
            if (block and len(block) > 5 and block[5] is not None
                    and _si == block[5] and _dcut is None):
                _dcut = (len(pre), len(body_txt))
            if stmt[0] == "wbup":
                _, _b, _inc = stmt
                _bn = names.get(wreg(_b))
                if _bn is None:
                    if wreg(_b).startswith(("x", "w")) and wreg(_b)[1:].isdigit():
                        _bn = "a%s" % wreg(_b)[1:]
                    else:
                        raise Bail("writeback base %r has no name" % _b)
                _wb_ln = "_wb%d" % (len(pre) + len(body_txt))
                body_txt.append("void* %s = (void*)((char*)%s + %d);"
                                % (_wb_ln, _bn, _inc))
                body_txt.append('asm volatile("" : "+r"(%s));' % _wb_ln)
                body_txt.append("%s = %s;" % (_bn, _wb_ln))
                continue
            if stmt[0] == "qstore":
                # See the q-pair store below for the measurement. One field.
                _, n, off, v, _early = stmt
                _sink = pre if _early else body_txt
                _ct, _ex = self._render(v, names)
                _sink.append("%s vq0 = %s;" % (_ct, _ex))
                _sink.append('__asm__ volatile("" : "=w"(vq0) : "w"(vq0));')
                _sink.append("*(%s*)(%s) = vq0;"
                             % (_ct, ptr_add(names[n], off)))
                continue
            if stmt[0] == "qpair":
                # `stp q0, q0, [x0]` -- see the pair-store handler for the
                # measurement. The two operands usually RENDER THE SAME, because
                # retail stores one register twice, so they share a single local:
                # two locals of the same value would materialise two `movi`s.
                _, n, off, v1, v2, _early = stmt
                _sink = pre if _early else body_txt
                if n == SRET_ID:
                    raise Bail("128-bit pair store through the sret register")
                _seen = []
                _names = []
                for _v in (v1, v2):
                    _ct, _ex = self._render(_v, names)
                    _sig = (_ct, _ex)
                    if _sig in _seen:
                        _names.append(_names[_seen.index(_sig)])
                        continue
                    # The name has to be unique across the WHOLE FUNCTION, not
                    # across this one statement. `_seen` is reset to `[]` for
                    # every pair store, so `vq%d % len(_seen)` restarted at vq0
                    # for the second one and the batch died with
                    #
                    #     error: redefinition of 'vq0'
                    #
                    # A synthetic local's scope is the function, so the counter
                    # has to be too. `pre + body_txt` is the number of statements
                    # actually emitted so far, and this branch appends one line
                    # per distinct operand, so it strictly increases here.
                    _ln = "vq%d" % (len(pre) + len(body_txt))
                    _seen.append(_sig)
                    _names.append(_ln)
                    _sink.append("%s %s = %s;" % (_ct, _ln, _ex))
                    # The pin. See the handler for why the operands are separate
                    # rather than tied -- Clang 5.0.1 cannot tie a vector.
                    _sink.append(
                        '__asm__ volatile("" : "=w"(%s) : "w"(%s));' % (_ln, _ln))
                _sink.append("*(struct Q2*)(%s) = (struct Q2){%s};"
                             % (ptr_add(names[n], off), ", ".join(_names)))
                continue
            w, n, off, val = stmt[:4]
            iexpr = stmt[4] if len(stmt) > 4 else None
            # An index expression is a VALUE TUPLE, not text, and it has to be
            # rendered like any other value.
            #
            # It was interpolated straight into the format string, which put the
            # tuple's repr into the emitted C:
            #
            #     *(uint64_t*)(((char*)(p1) + ('expr', '*', ('load', 0, 336, 4,
            #      True), ('imm', 8, 'int32_t'), 'int32_t'))) = a1;
            #
            # That is not a compile error inside one function -- it is a compile
            # error in a TRANSLATION UNIT, and `auto_match --module main` batches
            # 60 candidates per unit. So it aborted the whole batch, the run
            # exited 1, and the per-shape MATCH lines were never printed at all:
            # the report read as "the generators were exhausted" when in fact
            # 18 copy-chain and 6 float_const candidates had never been compiled.
            #
            # An address index is also an integer, never a pointer, so it is
            # spelled `uintptr_t`; `ptr_add` has already made the left side
            # `(char *)`, so the addition is byte arithmetic.
            if isinstance(iexpr, tuple):
                _ict, iexpr = self._render(iexpr, names)
                iexpr = "((uintptr_t)(%s))" % iexpr
            ct, expr = self._render(val, names)
            # An address expression may only be stored at pointer width. Storing
            # one through a narrower type is ill-formed C++ -- `*(uint32_t*)p =
            # (uint32_t)q` loses information and does not compile. It does occur:
            # sdk+0x4190c0 is `sub w8, w1, #1 ; str w8, [x0, #0x28]`, where the
            # `sub` is modelled as address arithmetic but the original treated it
            # as plain integer arithmetic.
            #
            # That single candidate once failed an entire 500-candidate batch,
            # which is what prompted `compile_batch_isolated` as well. Both are
            # needed: this declines the case at source, the isolation stops the
            # next one from costing a module.
            #
            # The check belongs here rather than in `_render` because the store
            # width is only known here. An earlier attempt raised Bail from
            # inside `_render` for *every* address value, which dropped the
            # translator's conversion rate from 65.5% to 20.0% -- it declined
            # every legitimate pointer store to fix one illegitimate narrow one.
            if w != 8 and (val[0] == "addr"
                            # Narrow stores of an indexed address are ill-formed
                            # for the same reason, and `addr_i` became reachable
                            # as a stored value once synth pointers could carry
                            # value tuples.
                            or val[0] == "addr_i"
                            # A *computed* pointer expression is the case that
                            # actually broke: `argval`/`expr` values can render as
                            # `char *`, so a narrow store produced
                            #   *(uint32_t *)(...) = (uint32_t)((char *)p0 + ...);
                            #   error: cast from pointer to smaller type 'uint32_t'
                            # which killed a whole 50-candidate batch in subsdk1.
                            #
                            # Note the deliberate limit: this asks whether *this
                            # kind* renders as a pointer, not `ct == "void*"`.
                            # That broader test looked more principled and was a
                            # measured regression -- main 813 -> 770, sdk 433 ->
                            # 420, subsdk0 83 -> 74 -- because it declined bodies
                            # that had been matching all along.
                            or (val[0] == "expr" and ct == "void*")):
                raise Bail("storing a pointer through a %d-byte type is ill-formed" % (w,))
            if val[0] == "imm" and ct != U[w]:
                # An immediate stored through a *wider* type has to live in a
                # variable of its own width, or the cast is folded away.
                #
                #     mov w8, #-1 ; str x8, [x0]        -> stores 0x00000000ffffffff
                #     mov x8, #-1 ; str x8, [x0]        -> stores 0xffffffffffffffff
                #
                # Writing `*(uint64_t *)p = (uint64_t)(-1);` asks for the second
                # one, and Clang duly folds it to a single `mov x8, #-1`. The
                # width of the original's *register* is what carries the
                # distinction, and only a variable of that width preserves it:
                #
                #     uint32_t k0 = -1;  *(uint64_t *)p = (uint64_t)k0;
                #
                # which is the original's two instructions. The same reasoning as
                # the store-width rule -- the register class decides the type,
                # never the store's width.
                k = "k%d" % len(pre)
                pre.append("%s %s = %d;" % (ct, k, val[1]))
                expr = "(%s)%s" % (U[w], k)
            elif ct != U[w]:
                expr = "(%s)(%s)" % (U[w], expr)
            if n == SRET_ID:
                # Destination is the returned struct, not an argument.
                sret_writes.append((w, off, ct, expr))
                continue
            addr = ptr_add(names[n], off)
            if iexpr:
                addr = "(%s + %s)" % (addr, iexpr)
            body_txt.append("*(%s*)(%s) = %s;" % (U[w], addr, expr))

        # Is there a return value?
        #
        # The test has to be about x0 specifically. It used to be
        #
        #     any(r == "x0" for r in state) and any(k[0] in ("imm","load")
        #                                            for k in state.values())
        #
        # where the second clause asks whether *any* register holds an immediate
        # or a load -- not whether x0 does. So any function that stores a field
        # and also materialises an unrelated constant got a spurious `return`,
        # and any function that only stores got none. That single predicate
        # accounted for 261 of 392 measured failures (66.6%), almost all of them
        # "the candidate is one instruction shorter than the original": the
        # extra `ret` displaced a store, or a missing one was the difference.
        #
        # A return value exists if and only if x0 holds something expressible at
        # the end of the body. An `addr` in x0 is a pointer return and is
        # renderable; a value in some other register is not a return.
        ret_val = state.get("x0")

        # Hidden struct return: the body stores through the sret register, so the
        # "return value" is the struct those stores fill in. Declaring a struct
        # larger than 16 bytes is what makes Clang choose the sret path at all --
        # a 12-byte struct would come back in x0/x1 instead and emit no stores
        # through x8 whatsoever.
        sret_src = None
        if sret_writes:
            span = max(off + w for w, off, _ct, _ex in sret_writes)
            size = max(24, span)
            if size % 8:
                size += 8 - (size % 8)
            td = "__S_%s" % ident
            lines = ["typedef struct { unsigned char b[%d]; } %s;" % (size, td)]
            lines.append("%s %s(%s) {" % (td, ident, plist))
            lines.append("    %s r;" % td)
            # `pre` holds locals the store path may have introduced -- the
            # widened-immediate bindings (`uint32_t k0 = -1;`) whose cast would
            # otherwise be constant-folded. This branch returns before the
            # `all_txt = pre + body_txt` assembly further down, so they have to be
            # emitted here or the stores reference identifiers that were never
            # declared: `error: use of undeclared identifier 'k0'`, which poisons
            # a whole 200-candidate batch.
            for l in pre:
                lines.append("    " + l)
            for w, off, ct, ex in sret_writes:
                lines.append("    *(%s *)((char *)&r + %d) = %s;" % (U[w], off, ex))
            lines.append("    return r;")
            lines.append("}")
            return "\n".join(lines) + "\n", sig

        all_txt = pre + body_txt
        # Call statements were collected as (name, raw value tuples) because
        # `names` does not exist during the instruction walk -- synthetic pointer
        # locals are allocated at emit time. Rendering them here, after `pre` has
        # been built, is the first point where every argument name is known.
        # Defaults, not just initialised-for-calls. The guarded emit below splices
        # the call statements into the guarded block and reads both of these, and
        # a guarded body with NO CALL -- again the commonest guarded shape -- never
        # had them, so `return _call_txt` raised UnboundLocalError. Every guarded
        # body banked so far is a call body, which is why this never showed.
        _call_txt = []
        _ccut = 0
        if call_stmts:
            _call_txt = []
            _ccut = 0             # where the block's calls start
        for _ci, (_nm, _vals, _rt, _alias) in enumerate(call_stmts):
            if block and _ci == block[2] and _ccut == 0:
                _ccut = len(_call_txt)
                # Through a cast of the callee's own address, for the same reason
                # as the `call_n` arm: two bodies in one unit calling one callee
                # with different arities would otherwise be two `extern` lines that
                # disagree, which is a redefinition and kills the whole unit. The
                # cast states the arity at the call site, which is where it is
                # known. A single `extern void callee();` is then valid wherever
                # it appears and redeclares cleanly.
                _pt = ", ".join("uintptr_t" for _ in _vals) or "void"
                _ae = ", ".join(call_arg(self._render(v, names))
                                for v in _vals)
                _call = "((%s (*)(%s))&%s)(%s)" % (_rt, _pt, _nm, _ae)
                _call_txt.append(("%s %s = %s;" % (_rt, _alias, _call))
                                 if _rt != "void" else ("%s;" % _call))
            # After `pre`, not before it. The synthetic pointer locals live in
            # `pre` and the call's arguments are expressions over them, so putting
            # the call first yields `callee(p0);` followed by `void* p0 = ...;` --
            # `error: use of undeclared identifier 'p0'` at compile time, for every
            # prototype tried, which reads exactly like "no prototype matches".
            all_txt = pre + _call_txt + pins + body_txt
        else:
            all_txt = pre + body_txt

        # A body that calls needs retail's frame, and Clang only produces it when
        # the call is not terminal. `asm volatile("")` after the call is what makes
        # it non-terminal, and it reproduces the frame byte for byte:
        #
        #     stp x29, x30, [sp, #-0x10]! ; mov x29, sp ; bl ; ldp x29,x30,[sp],#16 ; ret
        #
        # Placement is the whole subtlety. Written as a plain trailing statement it
        # lands *before* `return <expr>` -- and `<expr>` contains the call, because
        # the call is the value in x0. So an asm in that position precedes the call
        # and the call stays terminal; Clang tail-calls it to a 4-byte `b` and the
        # frame disappears. The return value is therefore bound to a local *first*,
        # which puts the asm after the evaluation of the expression that holds the
        # call:
        #
        #     T r0 = <expr containing the call>;   <- call happens here
        #     asm volatile("");
        #     return r0;
        #
        # Measured: this is what turns 4 bytes of `b` into the exact 20-byte frame,
        # at -O3, -O2 and -Os, with no compiler flag.
        FRAME_ASM = 'asm volatile("");'

        if tail is not None:
            # A TAIL CALL is the return. The prefix set up the argument
            # registers and the branch forwards them, so the C is
            #
            #     return callee(a0, a1, <x2>, <x3>, ...);
            #
            # A register the prefix did NOT write still holds its incoming
            # argument, so it is passed on as `aN`. A register it DID write
            # holds an expression the walk computed, and that is what goes.
            #
            # This has to come BEFORE the `not all_txt` early return below: a
            # tailcall whose prefix only sets up arguments has no stores and no
            # call, so `all_txt` is empty and the early return produced
            # `void f() {}` -- the whole body silently dropped.
            # `tail` is (callee name or None, arity, branch register or None).
            # A DIRECT tail call still passes a 2-tuple from several callers, so
            # the third element is read defensively rather than requiring every
            # call site to be updated -- `tail[2]` on a 2-tuple raises
            # IndexError, which is a crash, not a decline.
            _tname, _tn = tail[0], tail[1]
            _treg = tail[2] if len(tail) > 2 else None
            if _tname is None:
                # A TAIL CALL IS THE RETURN. The wrapper's declared return type
                # must therefore be whatever the CALLEE returns, not whatever the
                # body's last value was -- and the callee here is a pointer we
                # cannot see, so the cast below declares it `void` and the
                # wrapper has to agree.
                #
                # The first version of this emitter left `rct` alone, so 1,513
                # generated candidates were
                #
                #     uint64_t f_t(...) { return ((void (*)(...))...)(...); }
                #
                # and Clang rejected every one:
                #
                #     error: cannot initialize return object of type 'uint64_t'
                #            with an rvalue of type 'void'
                #
                # A compile error in a BATCH is not one failed candidate, it is
                # every candidate sharing the translation unit -- which is why
                # all four modules reported the error and none reported a match.
                rct = "void"
            _targs = []
            for _k in range(_tn):
                _rk = "x%d" % _k
                if _rk in state:
                    _ct2, _ex2 = self._render(state[_rk], names)
                    # The callee is declared with `uintptr_t` parameters, so
                    # every argument is spelled the way `call_arg` spells one.
                    # Without it the prefix s pointer arithmetic -- `(char *)(a0)
                    # + 236` -- is a `char *` and does not convert to uintptr_t
                    # in C++.
                    _targs.append(call_arg((_ct2, _ex2)))
                elif _k < len(used_args):
                    _targs.append("((uintptr_t)(a%d))" % _k)
                else:
                    raise Bail("tail call argument x%d is neither written nor "
                               "an incoming argument" % _k)
            if _tname is None:
                # INDIRECT: the callee is the value the branch register holds at
                # the branch. `state[reg]` is that value -- a load, a computed
                # pointer, whatever the prefix produced -- and it is already
                # rendered as an expression by everything above.
                #
                # The cast is the whole trick. Without one the call cannot be
                # written at all; with it Clang sees a call through an opaque
                # function pointer in TAIL POSITION, and its TAILCC pass emits
                # `br` rather than `blr` (measured, work/tail_recipe.py):
                #
                #     ((T*)p)->f(a0, 1, 1)          ->  br, NO blr
                #     the same call twice            ->  blr AND br
                #
                # The parameter types are `uintptr_t` for the same reason the direct
                # path uses them: the callee's real signature is not derivable
                # from the call site, and a `char *` does not convert to a
                # `uintptr_t` parameter in C++.
                if _treg is None:
                    raise Bail("indirect tail call has no branch register")
                _cv, _cex = self._render(state.get(wreg(_treg)), names)
                if _cv is None:
                    raise Bail("indirect tail target %r is not a value"
                               % _treg)
                _tname = "((void (*)(%s))((void *)%s))" % (
                    ", ".join(["uintptr_t"] * _tn), call_arg((_cv, _cex)))
            _tcall = "%s(%s)" % (_tname, ", ".join(_targs))
            _lines = list(all_txt)
            _lines.append("return %s;" % _tcall)
            # `sig`, not "v". The parameter list above is built from the
            # argument registers the tail call forwards, and `sig` is its Itanium
            # encoding -- so a five-argument tail call mangles as `Pm...`, not as
            # the empty parameter list `v`. Returning "v" made every prefixed
            # tail call look for a symbol the object does not define:
            #
            #     MISS tailcall 0x17dfdb0  symbol not found / no code
            #
            # which is the harness blaming the emitter for a malformed lookup
            # key -- the same shape of error as the "no parameters" note above.
            # Return types are absent from the mangling, so the `uint64_t` here
            # costs nothing.
            #
            # AND IT MUST NOT BE `rct`. `rct` at this point is whatever the BODY's
            # last value was, and a tail-call body has no last value -- the branch
            # IS the return -- so `rct` is `void` for most thunks. Using `rct`
            # here took main from 11,550 tail-call candidates to 5,083:
            #
            #     main --shape tailcall   BASE 11550   NOW 5083   -6467
            #
            # which reads as "the new indirect shape stole them" and was not. The
            # direct path was compiling to the wrong return type and the batches
            # died, which is a different failure with the same symptom.
            #
            # An INDIRECT tail call is the one case that must be `void`, because
            # the cast declares the callee `void` and a `uint64_t` wrapper cannot
            # return a void call:
            #
            #     error: cannot initialize return object of type 'uint64_t'
            #            with an rvalue of type 'void'
            _trt = "void" if tail[0] is None else "uint64_t"
            return "%s %s(%s) {\n    %s\n}\n" % (
                _trt, ident, plist, "\n    ".join(_lines)), sig
        # A GUARDED body must not take this early return.
        #
        # The guarded emit is BELOW, at `if block is not None:`, so a guarded body
        # with no return value -- the commonest guarded shape there is, a void
        # setter behind a field test -- returned here with its statements
        # UNGUARDED:
        #
        #     add x8,x0,w1,uxtw #3 ; ldr x8,[x8,#0x350]
        #     cbz x8, ret ; strh w2,[x8,#0x8a] ; ret
        #
        # became a body with no `if` at all. The test and both of its outcomes
        # were deleted, with no error anywhere.
        #
        # `block is None` sends the guarded bodies down to the emit that is
        # written for them. Everything after this point still sees `ret_val`, so
        # the unguarded path is unchanged -- a body with no guard and no return
        # value still comes out `void`.
        if ret_val is None and block is None:
            if saw_call:
                all_txt.append(FRAME_ASM)
            if not all_txt:
                return "void %s() {}\n" % ident, "v"
            return "void %s(%s) {\n    %s\n}\n" % (
                ident, plist, "\n    ".join(all_txt)), sig

        # Reached with `ret_val is None` by a GUARDED void body, which the early
        # return above now lets through. `_render(None, ...)` would raise, and the
        # guarded emit does not use `rct`/`rexpr` -- it renders its own return
        # from `_oexpr` -- so these are placeholders that keep the unguarded code
        # below well-formed.
        if ret_val is None:
            rct, rexpr = "void", "0"
        else:
            rct, rexpr = self._render(ret_val, names)
        # Promote a *signed narrow* return to int32_t.
        #
        # AAPCS64 leaves the upper half of w0 unspecified for a narrow return, so
        # Clang is free to drop a sign extension it has no obligation to keep.
        # Measured on the same body, changing only the declared return type:
        #
        #     int16_t f(...) { ... return *(int16_t *)p; }   ->  ldrh w0, [x8,#0x4e8]
        #     int32_t f(...) { ... return *(int16_t *)p; }   ->  ldrsh w0, [x8,#0x4e8]
        #
        # The original is `ldrsh`, so only the second matches. The load is still
        # *modelled* as int16_t -- it is the return type, not the access width,
        # that has to be widened. Itanium omits return types from the mangling,
        # so this changes no symbol.
        if rct in ("int8_t", "int16_t"):
            rct = "int32_t"
        if block is not None:
            # A GUARDED BLOCK:
            #
            #     <decls> <outer calls> <outer stores>
            #     if (<cond>) { <inner calls> <inner stores> return <inner>; }
            #     return <outer>;
            #
            # `pre` and `pins` are deliberately NOT split. Both are fully
            # populated before the store loop runs -- the synthetic pointers and
            # their "+r" pins are emitted in the synth loop above -- so there is
            # no cut to make, and hoisting a declaration or a register pin above
            # an `if` is ordinary C. The pin is an empty asm whose only job is to
            # stop Clang folding a displaced address into the addressing mode,
            # and it does that wherever it sits.
            if sret_writes:
                raise Bail("guarded block writing through the sret register")
            _gstate, _gn, _gc, _gval, _gform = block[:5]
            _gdcut = block[5] if len(block) > 5 else None
            _gct, _gexpr = self._render(_gval, names)
            # Both "nz" and "cmpnz" are non-zero senses, and `CMP_GUARDS` already
            # carries the negated operator -- so neither is wrapped in `!` here.
            # They differ only in what the fallthrough returns.
            _cond = (_gexpr if _gform in ("nz", "cmpnz")
                     else "(!%s)" % _gexpr)
            if _gform == "nz":
                # `cbz`: the BLOCK runs when the value is non-zero, so the
                # fallthrough runs when it is ZERO. The constant IS the fact the
                # guard proved, and writing it out is what removes an instruction:
                #
                #   return (uint32_t)(*(uint64_t *)((char *)(a0) + 80));
                #       -> ldr x8,[x0,#0x50] ; cbz x8,+N ; ... ; mov w0,wzr ; ret
                #   return 0;
                #       -> ldr x0,[x0,#0x50] ; cbz x0,+N ; ... ; ret
                #
                # Two instructions fixed at once. Re-evaluating the load forced
                # Clang to materialise the zero, AND it needed the value in a
                # scratch register because it had to keep it for the return.
                # With one use, the register is free and the load lands in x0 as
                # retail has it.
                _oexpr = "0"
            else:
                # `cbnz`, and every COMPARE guard. The fallthrough does not prove
                # the value is zero, so x0 is whatever it was and has to be
                # rendered -- see the "cmpnz" note in `_guard_test`.
                _oret = _gstate.get("x0")
                if _oret is None:
                    raise Bail("guarded body has no value for the fallthrough "
                               "return")
                _oct, _oexpr = self._render(_oret, names)
                if _oct != rct:
                    # A 32-bit body returning the tested value needs the
                    # narrowing written out, or the wrong width is stored.
                    _oexpr = "(%s)(%s)" % (rct, _oexpr)
            if _bcut is None:
                _bcut = (len(pre), len(body_txt))
            _ob = _bcut[1]
            _outer = pre + _call_txt[:_ccut] + pins + body_txt[:_ob]
            _inner = _call_txt[_ccut:] + body_txt[_ob:]
            _lines = list(_outer)
            # THE `else`.
            #
            # A DIAMOND is the same shape as a guarded body with one difference:
            # its guard skips to ARM_B rather than to the `ret`, and ARM_A ends in
            # a `b <join>`. So the region between the guard and the end holds TWO
            # arms, and `_dcut` is the boundary between them:
            #
            #     <test>
            #     b.cond  ARM_B
            #     ARM_A                       \\  block[1] .. block[5]
            #     b       JOIN                <-- dcut
            #     ARM_B                       /   block[5] ..
            #     JOIN
            #
            # Clang will not invert a conditional branch to make a block fall
            # through -- MachineBasicBlock::updateTerminator returns rather than
            # reversing the condition -- and with no profile data
            # MachineBlockPlacement keeps the TOPOLOGICAL order, which is SOURCE
            # order. So the polarity is fixed and the arm order is whatever the
            # original has; the generator reads it off the branch target and emits
            # the matching C. There is no variant to search over.
            if _gdcut is not None and _dcut is not None:
                # `__builtin_expect` biases the branch. Clang will not invert a
                # conditional branch to make a block fall through
                # (MachineBasicBlock::updateTerminator returns rather than
                # reversing), and with no profile data MachineBlockPlacement keeps
                # the TOPOLOGICAL order, which is SOURCE order. So the polarity is
                # fixed by the source; the lever is the bias. Retail's layout has
                # ARM_A as the fallthrough, so the `then` (ARM_B, the taken arm)
                # must be UNLIKELY.
                _lines.append("if (%s) {" % _cond)
                for _l in _inner[:_dcut[1] - _ob]:
                    _lines.append("    " + _l)
                _lines.append("} else {")
                for _l in _inner[_dcut[1] - _ob:]:
                    _lines.append("    " + _l)
                _lines.append("}")
                # THE TRAILING RETURN, and it is load-bearing in a way the guarded
                # path does not reveal.
                #
                # This branch returns EARLY -- before the guarded path appends its
                # `return;` / `return <rexpr>;` -- so every generated diamond had
                # NO return statement at all. Clang 5.0.1 at -O3 accepts that:
                # falling off the end of a non-void function is UB, not an error,
                # and -Wno-everything hides the diagnostic. It then emits a
                # ZERO-BYTE body:
                #
                #     nm: 0000000000000000 0000000000000000 T _Z3f_tPvS_
                #
                # So the function compiles, the batch reports no error, and all 27
                # candidates were rejected for a reason that has nothing to do with
                # block layout. Controls under the same flags: the same if/else
                # with a `return` emits 0x14 bytes; without one, nothing.
                #
                # This is the failure mode this project keeps meeting in a new
                # costume -- a pipeline that CANNOT FAIL SILENTLY, or can succeed
                # wrongly. A green batch is not evidence that a body was written.
                _lines.append("    return;" if rct == "void"
                              else "    return %s;" % rexpr)
                return "%s %s(%s) {\n    %s\n}\n" % (
                    rct, ident, plist, "\n    ".join(_lines)), sig
            _lines.append("if (%s) {" % _cond)
            for _l in _inner:
                _lines.append("    " + _l)
            # The INNER return. A `void` body gets a bare `return;`.
            #
            # `rexpr` is "0" for a void body -- the placeholder installed so that
            # `_render(None, ...)` is not reached -- and `return 0;` in a `void`
            # function is a hard C++ error, not a warning:
            #
            #     error: void function 'main_f_8018f0' should not return a value
            #
            # The harness compiles candidates in batches, so one of these takes a
            # whole translation unit with it; and this one reached prog/ and the
            # audit, because the harness's own batch had compiled it inside a body
            # where the same construct happened to be legal.
            _lines.append("    return;" if rct == "void"
                          else "    return %s;" % rexpr)
            # NO FRAME_ASM inside the block.
            #
            # It is `asm volatile("")`, which exists only to order the `r0`
            # binding in the flat path. Inside a guarded block it sits after a
            # `return` -- dead code -- but it is a side-effecting statement, so
            # Clang will not merge the two return paths, and the candidate keeps
            # an extra `mov w0, wzr ; ret` the original does not have. The
            # measured recipe for this shape contains no asm at all.
            _lines.append("}")
            # A `void` function returns nothing, so the guarded and fallthrough
            # exits are a bare `return;`.
            #
            # `return 0;` in a `void` function is accepted by C with a warning and
            # rejected outright by C++, and every candidate is compiled as C++ --
            # so it is a hard compile error, and a compile error in a 60-candidate
            # translation unit removes all 60. A guarded VOID body is the commonest
            # guarded shape there is, so this would have taken the whole population
            # with it rather than one body.
            if rct == "void":
                # NO trailing return for a void body.
                #
                # `if (c) { ...; return; } return;` is one `ret` too many:
                # Clang keeps both exits, so the guarded block's branch target
                # lands 4 bytes past retail's, and the single largest bucket of
                # guarded misses is exactly that --
                #
                #     insn 1: orig ('cbz', 'w8 -> +12') vs new ('cbz', 'w8 -> +16')
                #
                # Falling off the end of a void function is the same `ret`, and
                # there is no value to return, so there is nothing to write.
                pass
            else:
                _lines.append("return %s;" % _oexpr)
            return "%s %s(%s) {\n    %s\n}\n" % (
                rct, ident, plist, "\n    ".join(_lines)), sig
        if not all_txt and not saw_call:
            return "%s %s(%s) { return %s; }\n" % (
                rct, ident, plist, rexpr), sig
        if saw_call:
            # The binding is what orders the frame asm after the call. See the
            # FRAME_ASM note above.
            #
            # `all_txt` is kept, and that is not incidental. The first version of
            # this branch interpolated only the binding, the asm and the return,
            # which silently dropped every synthetic pointer local and every
            # deferred store the body had produced. The result was a source
            # referencing `p1` with no declaration -- `error: use of undeclared
            # identifier 'p1'` at compile time, for every prototype tried, which
            # looks exactly like "no prototype matches" and is not.
            _lines = list(all_txt)
            _lines.append("%s r0 = %s;" % (rct, rexpr))
            _lines.append(FRAME_ASM)
            _lines.append("return r0;")
            return "%s %s(%s) {\n    %s\n}\n" % (
                rct, ident, plist, "\n    ".join(_lines)), sig
        return "%s %s(%s) {\n    %s\n    return %s;\n}\n" % (
            rct, ident, plist, "\n    ".join(all_txt), rexpr), sig
