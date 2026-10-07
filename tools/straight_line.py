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

LOADS = ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb", "ldursw", "ldur")
STORES = ("str", "strb", "strh", "sturb", "sturh", "stur")

MAX_INSNS = 32        # beyond this, hand decomp is the better use of time
MAX_ARG = 4           # x0..x3 are the only argument registers we will model
# Synthetic base ids for loaded pointers. Kept far above any real argument
# number so `id < SYNTH_BASE` distinguishes them without a second type.
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
    if mn in ("ldrh", "strh", "ldurh", "sturh"):
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
    return "uint64_t"  # arg and anything else: pointer-sized is the safe default


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
    """The argument-register number for a memory base, or raise Bail."""
    if base == "sp":
        raise Bail("memory base is sp: a stack slot is not modelled")
    n = reg_num(wreg(base))
    if n is None or n > MAX_ARG:
        raise Bail("memory base %r is not an argument register (x0-x%d)" % (base, MAX_ARG))
    return n


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
            if i.mnemonic not in LOADS and i.mnemonic not in STORES \
                    and i.mnemonic not in ("add", "mov", "sub"):
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
            elif ext == "sxtw":
                icy = "int32_t"
            else:
                icy = "uint32_t"
            n = arg_reg(index)
            idx_args[n] = icy
            return "(uintptr_t)%s * %d" % (nm(n), scale)

        for i in body:
            mn = i.mnemonic
            ops = split_ops(i.op_str)

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
                    state[wreg(dst)] = ("addr_i", n, ie, off)
                    continue
                w = access_width(mn, dst)
                signed = mn in ("ldrsw", "ldursw")
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
                        state[wreg(src)] = ("arg", an)
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
                    raise Bail("mov source %r is neither an immediate nor a known register" % (src,))
                state[wreg(dst)] = state[wreg(src)]
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
                    if ext_op not in ("lsl", "uxtw", "sxtw"):
                        raise Bail("add/sub extend %r is not supported" % (ext,))
                    src_r = src2
                    # The `#n` after an extend is a *shift*, so the byte scale is
                    # `1 << n`; `uxtw #2` is a 4-byte stride, not 2. Using `n`
                    # directly scales every indexed address by half.
                    scale = 1 << shift if ext_op == "lsl" else 0
                    if scale == 0 and ext_op in ("uxtw", "sxtw"):
                        scale = 1 << shift
                    if scale:
                        # `src` is a pointer here. It is an *argument* far more
                        # often than a previously computed address, and an
                        # argument has no `state` entry at all -- so this must
                        # test for "is this a pointer" rather than "is this an
                        # addr value", or every `add x8, x0, w1, uxtw #2` is
                        # missed.
                        base_val = state.get(wreg(src))
                        if base_val is not None and base_val[0] == "addr":
                            bid, boff = base_val[1], base_val[2]
                        else:
                            bid = arg_reg(src)      # raises Bail if not x0-x4
                            used_args.add(bid)
                            ptr_args.add(bid)
                            boff = 0
                        idx = arg_reg(src2)
                        idx_args[idx] = ("uint32_t" if ext_op == "uxtw"
                                         else "int32_t")
                        state[wreg(dst)] = (
                            "addr_i", bid, boff,
                            "(uintptr_t)a%d * %d" % (idx, scale))
                        continue
                    off = 0
                else:
                    raise Bail("add/sub with %d operands is not modelled" % (len(ops),))

                # Value arithmetic on two registers.
                s1 = state.get(wreg(src))
                s2 = state.get(wreg(src_r))
                if s1 is None or s2 is None:
                    raise Bail("add/sub operand is not a known register")
                if s1[0] not in ("load", "expr", "arg", "imm"):
                    raise Bail("add/sub on a %r value is not value arithmetic" % (s1[0],))
                if s2[0] not in ("load", "expr", "arg", "imm"):
                    raise Bail("add/sub on a %r value is not value arithmetic" % (s2[0],))
                op = "+" if mn == "add" else "-"
                if len(ops) == 4 and ext_op is not None:
                    s2 = ("shift", ext_op, shift, s2)
                state[wreg(dst)] = ("expr", op, s1, s2, _rw(s1))
                continue

            raise Bail("unhandled instruction %r %r" % (mn, i.op_str))

        return self._emit(ident, state, stmts, used_args, ptr_args, synth, idx_args)

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
            _ct1, _e1 = self._render(s1, names)
            if isinstance(s2, tuple):
                if s2[0] == "shift":
                    _c2, _e2 = self._render(s2[3], names)
                    if s2[1] == "lsl":
                        _e2 = "(%s << %d)" % (_e2, s2[2])
                    elif s2[1] == "uxtw":
                        _e2 = "((uint32_t)(%s))" % _e2
                    elif s2[1] == "sxtw":
                        _e2 = "((int32_t)(%s))" % _e2
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
            _, n, iexpr, off = val
            return "void*", "((char *)%s + %s)" % (ptr_add(names[n], off), iexpr)
        if kind == "arg":
            # An incoming argument stored straight through. `_emit` applies the
            # store-width cast, so handing back the bare name is enough.
            return "void*", names[val[1]]
        raise Bail("unknown value kind %r" % (kind,))

    def _emit(self, ident, state, stmts, used_args, ptr_args, synth=(), idx_args=()):
        # Parameter list: one entry per argument register from x0 up to the
        # highest the body reads. Gaps are real unused parameters -- a body that
        # reads x2 but not x0/x1 belongs to a function whose first two arguments
        # it ignores, and collapsing them would shift every argument down a
        # register.
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
                codes.append({"int32_t": "i", "uint32_t": "j",
                              "uint64_t": "m"}[_c])
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
            pre.append("void* %s = (void*)(%s);" % (nm(key), init))
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
            if val[0] == "addr" and w != 8:
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
        if not all_txt:
            return "%s %s(%s) { return %s; }\n" % (
                rct, ident, plist, rexpr), sig
        return "%s %s(%s) {\n    %s\n    return %s;\n}\n" % (
            rct, ident, plist, "\n    ".join(all_txt), rexpr), sig
