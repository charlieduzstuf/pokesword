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

LOADS = ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb", "ldursw")
STORES = ("str", "strb", "strh", "sturb", "sturh")

MAX_INSNS = 14        # beyond this, hand decomp is the better use of time
MAX_ARG = 4           # x0..x3 are the only argument registers we will model


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
    m = re.search(r"\[([^,\]]+)(?:,\s*(#[^\]]+))?\]", op_str)
    if not m:
        return None, None
    off = parse_imm(m.group(2)) if m.group(2) else 0
    if off is None:
        return None, None
    return m.group(1).strip(), off


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


def ptr_add(base, off):
    b = "(char*)(%s)" % base
    if off == 0:
        return b
    if 0 < off < 4096:
        return "%s + %d" % (b, off)
    if -4096 < off < 0:
        return "%s - %d" % (b, -off)
    return "%s + %dL" % (b, off)


def arg_reg(base):
    """The argument-register number for a memory base, or raise Bail."""
    if base == "sp":
        raise Bail
    n = reg_num(wreg(base))
    if n is None or n > MAX_ARG:
        raise Bail
    return n


class StraightLine:
    def __init__(self, insns):
        self.insns = insns

    def translate(self, ident):
        insns = self.insns
        if not insns or insns[-1].mnemonic != "ret":
            raise Bail
        body = insns[:-1]
        if not body or len(body) > MAX_INSNS:
            raise Bail
        for i in body:
            if i.mnemonic not in LOADS and i.mnemonic not in STORES \
                    and i.mnemonic not in ("add", "mov", "sub"):
                raise Bail

        state = {}
        ptr_args = set()      # argument registers used as a pointer
        used_args = set()      # every argument register the body reads
        stmts = []             # (width, base_reg, offset, value) deferred

        for i in body:
            mn = i.mnemonic
            ops = split_ops(i.op_str)

            if mn in LOADS and len(ops) == 2:
                dst = ops[0]
                base, off = parse_mem(ops[1])
                if base is None:
                    raise Bail
                n = arg_reg(base)
                used_args.add(n)
                ptr_args.add(n)
                w = access_width(mn, dst)
                signed = mn in ("ldrsw", "ldursw")
                state[wreg(dst)] = ("load", n, off, w, signed)
                continue

            if mn in STORES and len(ops) == 2:
                src, mem = ops[0], ops[1]
                base, off = parse_mem(mem)
                if base is None:
                    raise Bail
                n = arg_reg(base)
                used_args.add(n)
                ptr_args.add(n)
                w = access_width(mn, src)
                if wreg(src) not in state:
                    raise Bail
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
                    raise Bail
                state[wreg(dst)] = state[wreg(src)]
                continue

            if mn in ("add", "sub") and len(ops) == 3:
                dst, src, immtxt = ops
                off = parse_imm(immtxt)
                if off is None:
                    raise Bail
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
                else:
                    raise Bail
                continue

            raise Bail

        return self._emit(ident, state, stmts, used_args, ptr_args)

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
        raise Bail

    def _emit(self, ident, state, stmts, used_args, ptr_args):
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
            elif k in used_args:
                codes.append("m")
                decls.append("uint64_t a%d" % k)
            else:
                codes.append("m")
                decls.append("uint64_t unused%d" % k)
            names[k] = "a%d" % k
        sig = "".join(codes)
        plist = ", ".join(decls)

        body_txt = []
        for w, n, off, val in stmts:
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
                raise Bail
            if ct != U[w]:
                expr = "(%s)(%s)" % (U[w], expr)
            body_txt.append("*(%s*)(%s) = %s;"
                            % (U[w], ptr_add(names[n], off), expr))

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

        if ret_val is None:
            if not body_txt:
                return "void %s() {}\n" % ident, "v"
            return "void %s(%s) {\n    %s\n}\n" % (
                ident, plist, "\n    ".join(body_txt)), sig

        rct, rexpr = self._render(ret_val, names)
        if not body_txt:
            return "%s %s(%s) { return %s; }\n" % (
                rct, ident, plist, rexpr), sig
        return "%s %s(%s) {\n    %s\n    return %s;\n}\n" % (
            rct, ident, plist, "\n    ".join(body_txt), rexpr), sig
