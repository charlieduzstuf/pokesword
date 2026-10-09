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

LOADS = ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb", "ldursw", "ldur",
         "ldrsh", "ldursh")
STORES = ("str", "strb", "strh", "sturb", "sturh", "stur")

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
}
# Bitwise and bitfield value instructions, all handled by one block below.
# They are listed separately from the `add`/`mov`/`sub` group because they are
# the ones added in response to a measured decline census rather than by
# increment -- see the no-call/no-branch census in decomp/docs/remaining_pool.md.
BITWISE_MNEMONICS = ("and", "orr", "eor", "bic", "movk", "ubfx", "sbfx",
                     "ubfiz", "mvn", "neg", "lsl", "lsr", "asr")

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

SYNTH_BASE = 1000
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
    if k == "arg":
        return v[2] if len(v) > 2 else "void*"
    if k == "argval":
        return v[2]
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


def check_store_order(insns):
    """Refuse a body whose deferred stores would reorder a load.

    Stores are accumulated in a list and emitted after every load expression,
    because a load is a value the translator keeps symbolic while a store has
    nowhere to live until emit time. That is fine while no body reads an address
    it also writes, and *wrong* the moment one does:

        ldr w8, [x0, #0x2b8]     ; w8 = the OLD value
        str w9, [x0, #0x2b8]     ; overwrite it
        ...
        return w8                ; emitted after the store -> reads the NEW value

    That is not a codegen difference, it is a different program. Clang is entitled
    to emit the load after the store, because as written the two are independent,
    and it does -- so such a body cannot match, and could even be *registered* as
    matching if the bytes happened to coincide.

    Measured over every body the translator currently accepts: **0**. So this is a
    latent hazard rather than live corruption, and the right response is to
    decline rather than restructure the emit order -- which would touch every
    store path that currently works. A decline is honest; silently reordering a
    program is not.

    The memory operand is compared textually, which is exact for the `[base,
    #off]` and `[base, index]` forms these bodies use.
    """
    loaded = set()
    for i in insns:
        o = i.op_str
        if "[" not in o:
            continue
        # The memory operand is the bracketed span, taken whole.
        #
        # The first version split the operand text on the first comma to strip a
        # store's source register -- and that comma is frequently *inside* the
        # bracket, so `w9, [x0, #8]` yielded `#8]` while the load yielded
        # `[x0, #8]`. The two could never compare equal, so the guard never fired
        # and reported "safe" on exactly the bodies it exists to catch. Found by
        # testing it against a body it must reject, which is the only way to know.
        start = o.index("[")
        end = o.rindex("]") + 1
        mem = o[start:end].strip()
        if i.mnemonic.startswith("l"):
            loaded.add(mem)
        elif i.mnemonic.startswith("s") and mem in loaded:
            raise Bail("store to %s reorders an earlier load of the same address: "
                       "deferred stores make that unrepresentable" % mem)


class StraightLine:
    def __init__(self, insns):
        self.insns = insns

    def translate(self, ident):
        insns = self.insns
        if not insns or insns[-1].mnemonic != "ret":
            raise Bail("body does not end in ret")
        body = insns[:-1]
        if not body or len(body) > MAX_INSNS:
            raise Bail("empty body, or %d instructions > MAX_INSNS=%d" % (len(body), MAX_INSNS))
        for i in body:
            # This is a whole-body pre-filter, and it runs before any of the
            # per-instruction handlers below. Anything missing here is declined as
            # "unsupported mnemonic" no matter how much the handler underneath
            # could have done with it -- which is why adding the bitwise handlers
            # changed nothing at all until this list was widened.
            if (i.mnemonic not in LOADS and i.mnemonic not in STORES
                    and i.mnemonic not in ("add", "mov", "sub")
                    and i.mnemonic not in BITWISE_MNEMONICS
                    and i.mnemonic not in FLAG_MNEMONICS
                    and i.mnemonic not in COND_MNEMONICS
                    and i.mnemonic not in MUL_MNEMONICS):
                raise Bail("unsupported mnemonic %r" % (i.mnemonic,))

        state = {}
        ptr_args = set()      # argument registers used as a pointer
        used_args = set()      # every argument register the body reads
        stmts = []             # (width, base_reg, offset, value) deferred

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
                    return v[1], False
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
                if v[0] in ("arg", "argval", "expr", "shift", "load"):
                    key = SYNTH_BASE + len(synth)
                    synth.append((key, v))
                    synth_of[r] = key
                    return key, False
                raise Bail("memory base %r holds a %s, not a pointer" % (base, v[0]))
            return arg_reg(base), True

        idx_args = {}      # arg number -> C type, for indexed operands

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
        for i in body:
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
                    if _parts[0] != "lsl" or len(_parts) != 2:
                        raise Bail("%s extend %r is not supported" % (mn, ops[2]))
                    _sh = parse_imm(_parts[1])
                    if _sh is None:
                        raise Bail("%s shift %r is not a literal" % (mn, _parts[1]))
                    _shifted = (ops[1], _sh)
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

            if mn in LOADS and len(ops) == 2:
                dst = ops[0]
                base, index, ext, scale, off = parse_mem_idx(ops[1])
                if base is None:
                    base, off = mem_reg_offset(ops[1], state)
                    index = ext = scale = None
                if base is None:
                    raise Bail("load operand %r is not a [base] or [base, index, ext] form"
                               % (ops[1],))
                n, real = resolve_base(base)
                if real:
                    used_args.add(n)
                    ptr_args.add(n)
                if index is not None:
                    # An indexed access needs the base and the index separately;
                    # the `addr` value carries both as one expression.
                    ie = index_expr(index, ext, scale, n)
                    # Same 5-field shape as the indexed-add form: base, offset,
                    # index *value*, scale. Here the index is already a rendered
                    # expression string, so it is carried as an "imm"-free raw
                    # node -- `("raw", text)` renders verbatim.
                    state[wreg(dst)] = ("addr_i", n, off, ("raw", ie), 1)
                    continue
                w = access_width(mn, dst)
                # Signed loads. `ldrsh` was missing here as well as from LOADS,
                # and its absence is not neutral: an unsigned 16-bit load would
                # model `ldrsh` as `ldrh`, which drops the sign extension and
                # matches nothing.
                signed = mn in ("ldrsw", "ldursw", "ldrsh", "ldursh")
                state[wreg(dst)] = ("load", n, off, w, signed)
                continue

            if mn in STORES and len(ops) == 2:
                src, mem = ops[0], ops[1]
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
                w = access_width(mn, src)
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
                state[wreg(dst)] = state[wreg(src)]
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
                      "ubfiz", "mvn", "neg", "lsl", "lsr", "asr"):
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

            # Multiply family. See MUL_OPS for why these are nine operations and
            # not one.
            #
            # Every operand is resolved with the same rule as add/sub: a value in
            # `state` if there is one, otherwise `_value_arg`, because an incoming
            # argument has no state entry and requiring one declined every
            # `mul x8, x8, x1`-shaped body as "not a known register".
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
                        elif s[0] in ("load", "expr", "arg"):
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
                if s1[0] not in ("load", "expr", "arg", "argval", "imm"):
                    raise Bail("add/sub on a %r value is not value arithmetic" % (s1[0],))
                if s2[0] not in ("load", "expr", "arg", "argval", "imm"):
                    raise Bail("add/sub on a %r value is not value arithmetic" % (s2[0],))
                op = "+" if mn == "add" else "-"
                if len(ops) == 4 and ext_op is not None:
                    s2 = ("shift", ext_op, shift, s2)
                state[wreg(dst)] = ("expr", op, s1, s2, _rw(s1))
                continue

            raise Bail("unhandled instruction %r %r" % (mn, i.op_str))

        # Refuse a body whose stores would reorder its loads before emitting.
        # See `check_store_order` for why this is a decline and not a fix.
        check_store_order(body)

        return self._emit(ident, state, stmts, used_args, ptr_args, synth, idx_args)

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
        if kind == "addr":
            _, n, off = val
            return "void*", ptr_add(names[n], off)
        if kind == "expr":
            # An integer result of add/sub on loaded/argument values. The two
            # operands are themselves value tuples, rendered recursively with the
            # real names, so this only works in `_emit` -- which is exactly where
            # the result is needed.
            _, op, s1, s2, ct = val
            _ct1, _e1 = self._render(s1, names) if isinstance(s1, tuple) \
                else (None, s1)
            if isinstance(s2, tuple):
                if s2[0] == "shift":
                    _c2, _e2 = self._render(s2[3], names)
                    if s2[1] == "lsl":
                        _e2 = "(%s << %d)" % (_e2, s2[2])
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
                return _c2, "(%s << %d)" % (_e2, shift)
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
                    _ce2 = "(%s << %d)" % (_se, _fb[2])
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
        raise Bail("unknown value kind %r" % (kind,))

    def _emit(self, ident, state, stmts, used_args, ptr_args, synth=(), idx_args=()):
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
            pre.append("void* %s = (void*)(%s);" % (nm(key), init_txt))
        for stmt in stmts:
            w, n, off, val = stmt[:4]
            iexpr = stmt[4] if len(stmt) > 4 else None
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

        if ret_val is None:
            if not all_txt:
                return "void %s() {}\n" % ident, "v"
            return "void %s(%s) {\n    %s\n}\n" % (
                ident, plist, "\n    ".join(all_txt)), sig

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
        if not all_txt:
            return "%s %s(%s) { return %s; }\n" % (
                rct, ident, plist, rexpr), sig
        return "%s %s(%s) {\n    %s\n    return %s;\n}\n" % (
            rct, ident, plist, "\n    ".join(all_txt), rexpr), sig
