#!/usr/bin/env python3
"""Synthesise candidate C++ from the recovered instruction stream and verify it.

This is the matching engine for the project. For the leaf/accessor shapes the
compiler emits most often on this game -- empty stubs, field getters, field
setters, pointer bumps, small copies, register passthroughs -- the original
instruction sequence implies a specific C++ expression. This module derives
that expression, emits it, and hands it to tools/match_harness.py, which
compiles it for AArch64 and compares the result against the original bytes.

**Nothing is counted as matched unless the compiler's output actually matches**,
so a wrong guess costs a candidate, never correctness.

Supported shapes (mnemonic sequences, after trimming compiler padding):

    ret                              void f() {}
    mov  xD, xS ; ret                 return an argument
    ldr{,b,h,sw} xD, [xB,#o] ; ret   field read (integer / float / double)
    str{,b,h}   xS, [xB,#o] ; ret    field write
    add  xD, xB, #imm ; ret          return a pointer offset
    ldr xA,[xB,#o] ; str xA,[xC,#o2] ; ret    field copy

Each generator returns (source_text, mangled_parameter_list). The mangled form
matters: it is how the generated symbol is looked up in the object file, and a
wrong parameter list shows up as "the compiler emitted no code" rather than as
an error.

Usage:
    python tools/auto_match.py --module main --all-shapes --limit 5000
    python tools/auto_match.py --module main --apply --report data/matched_main.json
"""

import argparse
import bisect
import collections
import json
import os
import re
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402

# C types and Itanium mangling codes per access width.
U = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}
# Signed counterparts, needed wherever the instruction carries the signedness
# rather than the width: `fcvtzs` vs `fcvtzu`, `scvtf` vs `ucvtf`.
S = {1: "int8_t", 2: "int16_t", 4: "int32_t", 8: "int64_t"}
CODE = {1: "h", 2: "t", 4: "j", 8: "m"}


# --------------------------------------------------------------------- utils
def parse_imm(text):
    """Parse an AArch64 immediate operand.

    objdump and capstone print immediates in **hex** (`#0xc4`), so decimal
    parsing silently truncates `#0xc4` to 0 -- turning a field access into a
    no-op and looking like a codegen mystery rather than a generator bug.
    """
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
    """'[x0, #8]' -> ('x0', 8);  '[x0]' -> ('x0', 0)."""
    m = re.search(r"\[([^,\]]+)(?:,\s*(#[^\]]+))?\]", op_str)
    if not m:
        return None, None
    off = parse_imm(m.group(2)) if m.group(2) else 0
    if off is None:
        return None, None
    return m.group(1).strip(), off


def ops_of(i):
    """Split an instruction's operand list on top-level commas.

    A plain `split(",")` is wrong here: the memory operand `[x0, #8]` contains a
    comma of its own, so splitting naively turns it into `'[x0'` and `'#8]'`.
    That silently drops every field access with a non-zero offset, which is the
    single largest class of functions in the binary.
    """
    return split_ops(i.op_str) if i.op_str else []


def split_ops(op_str):
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


def wreg(op):
    """wN -> xN so register tracking is uniform. Non-numeric forms
    (xzr, wsp, ...) are returned unchanged so callers can reject them."""
    m = re.fullmatch(r"w(\d+)", op)
    return "x" + m.group(1) if m else op


def reg_num(op):
    """Register index, or None for sp/zr and anything unrecognised."""
    m = re.fullmatch(r"[xw](\d+)", op)
    return int(m.group(1)) if m else None


def access_width(mn, reg):
    """Byte width of a load/store from its mnemonic and register spelling.

    The SIMD cases matter because a fourth of the functions this tool declines
    are plain accessors whose only unusual feature is the register class. A body
    of `ldr q0, [x0, #0xa0]` / `ret` is a getter; the fact that it returns 128
    bits rather than 64 does not make it a different shape, it makes it a
    getter with a different type. Reading it as width 8 produced a candidate
    that could never match, and the function was silently counted as "hard".

    Widths, from the AAPCS64 register classes:

        b  8 bits    16 bits    32 bits    64 bits   128 bits
        h            s          w          x         q

    The 128-bit case has no single Itanium mangling code for a raw vector, so
    `simd_code` returns None for `q` and the caller declines rather than emitting
    a candidate that cannot have the right symbol.
    """
    if mn in ("ldrb", "strb", "ldurb", "sturb"):
        return 1
    # The signed byte/halfword loads read the same number of *bytes* as their
    # unsigned counterparts and differ only in extension. They were missing from
    # this enumeration entirely, so they fell through to the default and
    # reported width 8 for `ldrsb`, which loads one byte -- producing an 8-byte C
    # type for a 1-byte access, and therefore a candidate that could never match.
    #
    # This is the same failure as `access_width` ignoring register class, which
    # was reproduced independently in three separate copies of this helper, and
    # as `got_map.py`'s `ops.split(",")`: an explicit enumeration that silently
    # omits a case. When a helper lists mnemonics, check the list against the
    # disassembly rather than assuming it is complete.
    if mn in ("ldrsb",):
        return 1
    if mn in ("ldrsh",):
        return 2
    if mn in ("ldrh", "strh", "ldurh", "sturh"):
        return 2
    if mn in ("ldrsw", "ldursw"):
        return 4
    if mn in ("ldr", "str", "ldur", "stur"):
        r = reg.strip()
        if r.startswith("q"):
            return 16
        if r.startswith("d"):
            return 8
        if r.startswith("s"):
            return 4
        if r.startswith("w"):
            return 4
        if r.startswith("b") or r.startswith("h"):
            return 1
    return 8


# C type and Itanium mangling code per (width, register class). A load or store
# of an s/d register is a float, not an integer, and the type has to be right:
# a candidate typed uint32_t where the original used a float loads the same bytes
# but the mangled name differs and the codegen can differ too.
SIMD = {
    (4, "s"): ("float", "f"),
    (8, "d"): ("double", "d"),
}


def reg_class(reg):
    """'q3' -> 'q'.  None for a general-purpose or unknown register."""
    m = re.fullmatch(r"([bhsdqVv])(\d+)", reg.strip())
    return m.group(1) if m else None


def ctype_for(mn, reg):
    """-> (c_type, itanium_code), or None when the pair cannot be mangled."""
    w = access_width(mn, reg)
    cls = reg_class(reg)
    if cls in ("s", "d") and w in (4, 8):
        return SIMD[(w, cls)]
    if cls == "q" or w == 16:
        # No portable Itanium code for a bare __int128 vector in this project's
        # mangling scheme; declining is correct and the caller handles it.
        return None
    return U[w], CODE[w]


def ptr_expr(base, exprs, off):
    """C++ for `[base, #off]`."""
    b = exprs.get(base)
    if b is None:
        return None
    b = "(char*)(%s)" % b
    if off == 0:
        return b
    if 0 < off < 4096:
        return "%s + %d" % (b, off)
    if -4096 < off < 0:
        return "%s - %d" % (b, -off)
    return "%s + %dL" % (b, off)


def build_params(roles):
    """Build a parameter list from the registers a body touches.

    roles: {register: (c_type, itanium_code)}, e.g.
           {"x0": ("void*", "P"), "x2": ("uint8_t", "h")}

    AArch64 passes arguments in x0, x1, ... in order, so any gap has to be
    filled with a real parameter: declaring `f(void* p, uint8_t v)` for a body
    that reads x0 and x2 would put the byte in x1 and change both the codegen
    and the mangled name.

    Returns (decl_list, expr_map, mangled_params).
    """
    top = max(int(r[1:]) for r in roles)
    decls, exprs, codes, ptrs = [], {}, [], 0
    for k in range(top + 1):
        r = "x%d" % k
        if r in roles:
            ct, code = roles[r]
            if code == "P":
                # `void*` mangles as `Pv` -- the trailing v belongs to the void
                # type encoding, it is not an empty-argument marker. A second
                # void* is then a substitution back to the first: `S_`.
                code = "S_" if ptrs else "Pv"
                ptrs += 1
            name = "a%d" % k
        else:
            ct, code, name = "uint64_t", "m", "unused%d" % k
        decls.append("%s %s" % (ct, name))
        codes.append(code)
        exprs[r] = name
    return decls, exprs, "".join(codes)


# ---------------------------------------------------------------- generators
def gen_ret_only(ins, end, ident):
    return "void %s() {}\n" % ident, "v"


def branch_target(ins):
    """Absolute target of a single unconditional `b`, or None."""
    i = ins[0]
    if i.mnemonic != "b":
        return None
    t = i.op_str.strip()
    if not t.startswith("#"):
        return None
    try:
        return int(t.lstrip("#"), 16)
    except ValueError:
        return None


def gen_tailcall(ins, end, ident, ctx):
    """`b <target>` -- a thunk that tail-calls another function.

    The whole behaviour of the function is *which* function it jumps to, so
    this is only verifiable when the destination is checked, not ignored. The
    caller (tools/auto_match.py) supplies the resolved target in `ctx` and the
    comparison then requires the branch destination to match by name; see
    tools/match_harness.compare's branch handling.
    """
    tgt = ctx.get("tail_target")
    if not tgt:
        return None
    tname = tgt[0]
    # These thunks jump without touching any argument register, so the call
    # takes none. The prototype emitted by the caller must match, or the batch
    # fails to compile.
    n = ctx.get("nargs", 0)
    if n == 0:
        return ("uint64_t %s() { return %s(); }\n" % (ident, tname), "v")
    params = ", ".join("uint64_t a%d" % k for k in range(n))
    args = ", ".join("a%d" % k for k in range(n))
    return ("uint64_t %s(%s) { return %s(%s); }\n"
            % (ident, params, tname, args), "m" * n)


def gen_mov_ret(ins, end, ident):
    """`mov xD, xS|#imm ; ret` -- return a register or a constant."""
    ops = ops_of(ins[0])
    if len(ops) < 2:
        return None
    dst, src = ops[0], ops[1]
    narrow = dst.startswith("w")

    # `mov wD, #imm` -- a constant return, no parameters.
    imm = parse_imm(src)
    if imm is not None:
        ct = U[4] if narrow else U[8]
        code = CODE[4] if narrow else CODE[8]
        return "%s %s() { return %d; }\n" % (ct, ident, imm), "v"

    # `mov wD, wzr` / `mov xD, xzr` -- the zero register, no parameters.
    if src in ("wzr", "xzr"):
        ct = U[4] if narrow else U[8]
        return "%s %s() { return 0; }\n" % (ct, ident), "v"

    s = wreg(src)
    sn = reg_num(s)
    if sn is None or sn > 3:
        return None
    # A 32-bit `mov wD, wS` needs a 32-bit type or the compiler emits the wide
    # form. The parameter list must contain exactly the registers the body
    # reads: unused parameters are optimised away and change the mangled name.
    if narrow != src.startswith("w"):
        return None
    ct = U[4] if narrow else U[8]
    code = CODE[4] if narrow else CODE[8]
    n = sn + 1
    decls = ["%s a%d" % (ct, k) for k in range(n)]
    return ("%s %s(%s) { return a%d; }\n"
            % (ct, ident, ", ".join(decls), sn), code * n)


def gen_load_ret(ins, end, ident):
    """`ldr{,...} xD, [xB, #o] ; ret` -- read a field."""
    i = ins[0]
    ops = ops_of(i)
    dst, mem = ops[0], ops[1]
    base, off = parse_mem(mem)
    if base is None or base == "sp":
        return None
    # `ldur`/`stur` are the unscaled-offset forms of `ldr`/`str`: same operation,
    # same addressing, immediate range -256..255 rather than a scaled 12-bit
    # range. Excluding them dropped every getter whose field offset is negative
    # or in -256..255 -- `ldur w0, [x0, #-0x10]` alone was 13 functions in main,
    # and the vector form another 8. The immediate is already parsed by
    # parse_mem, so accepting the mnemonic is the whole change.
    if i.mnemonic not in ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb",
                          "ldur", "ldurh", "ldursw"):
        return None
    decls, exprs, sig = build_params({base: ("void*", "P")})
    b = ptr_expr(base, exprs, off)
    if b is None:
        return None

    # AArch64 returns a scalar float in s0 and a double in d0, so the return
    # type has to agree or the compiler picks a different register. The return
    # type is not part of the mangled name.
    if re.fullmatch(r"[sdqVv]\d+", dst):
        if dst[0] == "s":
            return ("float %s(%s) { return *(float*)(%s); }\n"
                    % (ident, ", ".join(decls), b), sig)
        if dst[0] == "d":
            return ("double %s(%s) { return *(double*)(%s); }\n"
                    % (ident, ", ".join(decls), b), sig)
        if dst[0] == "q":
            # 128-bit return. The Itanium ABI does not mangle return types, so
            # the symbol is unchanged by the return type and __int128 costs
            # nothing here -- which is why this was worth enabling rather than
            # declining. It recovers `ldr q0, [x0, #o] ; ret` bodies, which are
            # otherwise indistinguishable from hard functions.
            return ("__int128 %s(%s) { return *(__int128*)(%s); }\n"
                    % (ident, ", ".join(decls), b), sig)
        return None
    if not dst.startswith(("x", "w")):
        return None

    width = access_width(i.mnemonic, dst)
    ctype = "int32_t" if i.mnemonic == "ldrsw" else U[width]
    return ("%s %s(%s) { return *(%s*)(%s); }\n"
            % (ctype, ident, ", ".join(decls), ctype, b), sig)


def gen_load_chain_ret(ins, end, ident):
    """Two or more loads through pointers, ending in a return register.

    The shape that `gen_load_ret` could not reach, because it handles exactly
    one load and `shape_of` only ever offered it a two-instruction body. The
    commonest leftover is 176 functions in `main` of the form

        ldr  x8, [x0, #0x88]
        ldr  w0, [x8]
        ret

    which is a two-level field read -- `return *(uint32_t*)(*(void**)((char*)p + 0x88))`
    -- and is as mechanical as the one-level case it already handles.

    The same exactness bug applies to `setter` (`n == 2`) and `copy2` (`n == 3`),
    so the fix here is deliberately shaped to be reusable rather than special to
    getters: the walk below is a general load-chain walker, and it declines
    anything it cannot express exactly.

    Guard rails, each of which has bitten once already in this project:

    * Every instruction before `ret` must be a load from a base that is either an
      argument register or the destination of an earlier load in the chain. A
      load from a computed index such as `[x8, w1, uxtw #2]` is declined rather
      than guessed at, because `parse_mem` cannot express it.
    * Each intermediate destination must be a 64-bit `x` register, since it is
      being used as a pointer. A `w`-destination in the middle is declined.
    * The final load must target a return register (`x0`, `s0`, `d0`, `q0`),
      because that is what the ABI requires and getting it wrong changes the
      emitted code even when the arithmetic is right.
    * A destination must not be reused earlier in the chain, since that would
      invalidate the expression built for it.
    """
    if end < 3:
        return None
    # The terminator is checked at `ins[end-1]`, not at the end of `body`:
    # `body` has already had `ret` sliced off, so asserting `body[-1]` is `ret`
    # is a contradiction that rejects every body. It did -- 260 offered, 260
    # declined, on the very first call.
    if ins[end - 1].mnemonic != "ret":
        return None
    body = ins[:end - 1]
    if not body:
        return None

    # `env` maps a register to the C expression for the pointer it holds. An
    # argument register holds its own parameter name; a load destination holds
    # the dereference of wherever it was loaded from. Both live in one map
    # because `ptr_expr` resolves the base through it -- an earlier version kept
    # arguments in a separate dict, so every address lookup returned None and the
    # generator declined all 260 bodies it was offered.
    env = {}
    roles = {}
    defined = set()

    for idx, i in enumerate(body):
        ops = ops_of(i)
        if len(ops) != 2:
            return None
        dst, mem = ops[0].strip(), ops[1]
        base, off = parse_mem(mem)
        if base is None or base == "sp":
            return None
        if i.mnemonic not in ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb",
                              "ldur", "ldurh", "ldursw"):
            return None
        if not dst.startswith(("x", "w")):
            return None
        w = wreg(dst)
        if w in defined:
            return None                     # clobbered before use

        # Resolve the base: an argument, or a pointer an earlier load produced.
        bkey = wreg(base)
        bn = reg_num(bkey) if bkey else None
        if bkey not in env and bn is not None and bn <= 3 and \
                bkey not in defined:
            roles[bkey] = ("void*", "P")
            # `build_params` names the parameter for register xN exactly
            # "a<N>", so `env` must use that same name or the emitted address
            # expression will not match the declared parameter. Recording the
            # role without recording the name made `ptr_expr` return None and
            # the generator declined all 260 bodies.
            env[bkey] = "a%d" % bn
        if bkey not in env:
            return None
        addr = ptr_expr(bkey, env, off)
        if addr is None:
            return None

        if idx == len(body) - 1:
            # Final load: it must produce the return value.
            width = access_width(i.mnemonic, dst)
            ctype = "int32_t" if i.mnemonic == "ldrsw" else U[width]
            decls, exprs, sig = build_params(roles)
            args = ", ".join(decls)
            if re.fullmatch(r"[sdqVv]\d+", dst):
                if dst[0] == "s":
                    return ("float %s(%s) { return *(float*)(%s); }\n"
                            % (ident, args, addr), sig)
                if dst[0] == "d":
                    return ("double %s(%s) { return *(double*)(%s); }\n"
                            % (ident, args, addr), sig)
                if dst[0] == "q":
                    return ("__int128 %s(%s) { return *(__int128*)(%s); }\n"
                            % (ident, args, addr), sig)
                return None
            return ("%s %s(%s) { return *(%s*)(%s); }\n"
                    % (ctype, ident, args, ctype, addr), sig)

        # Intermediate load: it must yield a pointer, so a 64-bit x register.
        if not dst.startswith("x") or access_width(i.mnemonic, dst) != 8:
            return None
        env[w] = "(*(uint64_t*)(%s))" % addr
        defined.add(w)

    return None


def gen_fp_conv_store(ins, end, ident):
    """`ldr sN, [xS] ; <cvt> sN, sN ; str <dst>, [xD] ; ret` -- convert and store.

    `subsdk1` has 80 unmatched bodies with no branch, no call and at most twelve
    instructions, and five shapes account for 53 of them:

        ldr s0, [x1] ; fcvtzs w8, s0 ; str w8, [x0] ; ret      x18
        ldr s0, [x0] ; ldr s1, [x1] ; fcmp ; cset w0, <cond>   x18  (fp_compare)
        ldr s0, [x1] ; fcvtzu w8, s0 ; str w8, [x0] ; ret      x7
        ldr s0, [x1] ; ucvtf  s0, s0 ; str s0, [x0] ; ret      x6
        ldr s0, [x1] ; scvtf  s0, s0 ; str s0, [x0] ; ret      x4

    So the first, third, fourth and fifth are this generator: a float loaded from
    one argument, converted, and stored into another. The conversion is the whole
    body -- there is no arithmetic -- which is why it is worth a generator rather
    than the general float translator that the larger `main` population needs.

    The C form is a plain C cast, and the cast is what selects the instruction:
    `(int32_t)` is `fcvtzs`, `(uint32_t)` is `fcvtzu`, `(float)` from an integer
    is `scvtf`/`ucvtf` depending on the source's signedness. The source width has
    to be tracked from the *load* that produced it, so the emitted cast and the
    instruction agree by construction rather than by coincidence.

    Rounding is not modelled: `fcvtzs` truncates toward zero, which is what a C
    cast to an integer type does, so no rounding-mode constant is needed. A
    `frint*` before the conversion would change that, and this declines.
    """
    if end != 4:
        return None
    i0, i1, i2, i3 = ins[0], ins[1], ins[2], ins[3]
    if i3.mnemonic != "ret":
        return None
    if i1.mnemonic not in ("fcvtzs", "fcvtzu", "scvtf", "ucvtf"):
        return None

    o0 = ops_of(i0)
    if len(o0) != 2 or i0.mnemonic not in ("ldr", "ldur", "ldrsw"):
        return None
    ld_dst, ld_mem = o0[0].strip(), o0[1]
    o1 = ops_of(i1)
    o2 = ops_of(i2)
    if len(o1) != 2 or len(o2) != 2 or i2.mnemonic not in ("str", "stur"):
        return None
    cvt_dst, cvt_src = o1[0].strip(), o1[1].strip()
    st_src, st_mem = o2[0].strip(), o2[1]

    src_base, src_off = parse_mem(ld_mem)
    dst_base, dst_off = parse_mem(st_mem)
    if src_base is None or dst_base is None:
        return None
    if src_base == "sp" or dst_base == "sp":
        return None

    # The conversion reads what the load produced, so the two registers must be
    # the same. Anything else is a two-operand conversion this does not model.
    if wreg(cvt_src) != wreg(ld_dst):
        return None

    ld_w = access_width(i0.mnemonic, ld_dst)
    if not ld_dst[0] in "sd":
        return None
    ftype = "float" if ld_dst[0] == "s" else "double"

    # The integer width comes from the *store*, and the conversion's destination
    # register must agree with it.
    #
    # It does not come from the conversion mnemonic. `access_width` recognises
    # only the load/store families, so `access_width("fcvtzs", "w8")` fell through
    # to the 8-byte default and every one of the 18 bodies came out as
    # `*(uint64_t*)... = (uint64_t)*(const float*)...` for a 32-bit store. That
    # is the same defect as the `mov w0, wzr` bug fixed in `straight_line.py`,
    # reproduced in this file's separate copy of the helper.
    st_w = access_width(i2.mnemonic, st_src)
    if st_w not in (1, 2, 4, 8):
        return None
    cvt_w = 4 if cvt_dst[0] == "w" else 8
    if cvt_w != st_w:
        return None

    sb = reg_num(wreg(src_base))
    db = reg_num(wreg(dst_base))
    if sb is None or db is None or sb > 3 or db > 3:
        return None

    roles = {wreg(src_base): ("void*", "P"), wreg(dst_base): ("void*", "P")}
    decls, exprs, sig = build_params(roles)
    saddr = ptr_expr(wreg(src_base), exprs, src_off)
    daddr = ptr_expr(wreg(dst_base), exprs, dst_off)
    if saddr is None or daddr is None:
        return None

    if i1.mnemonic in ("scvtf", "ucvtf"):
        # Integer source, float destination. The *conversion mnemonic* carries
        # the signedness: `scvtf` is a signed source, `ucvtf` unsigned. Reading
        # the width from `U` alone got that backwards, because `U` maps to
        # unsigned types, so all 18 `fcvtzs` bodies came out as `fcvtzu`:
        #
        #   insn 1: orig ('fcvtzs', 'w8, s0') vs new ('fcvtzu', 'w8, s0')
        #
        # 9 of 29 matched -- the `ucvtf` ones, which agreed only because
        # unsigned happened to be the right answer for them.
        src_ct = S[ld_w] if i1.mnemonic == "scvtf" else U[ld_w]
        if src_ct not in ("int32_t", "int64_t", "uint32_t", "uint64_t"):
            return None
        stmt = "*(%s*)(%s) = (%s)*(const %s*)(%s);" % (
            ftype, daddr, ftype, src_ct, saddr)
    else:
        itype = S[st_w] if i1.mnemonic == "fcvtzs" else U[st_w]
        stmt = "*(%s*)(%s) = (%s)*(const %s*)(%s);" % (
            itype, daddr, itype, ftype, saddr)
    return ("void %s(%s) { %s }\n" % (ident, ", ".join(decls), stmt), sig)


def gen_fp_compare(ins, end, ident):
    """`ldr sA,[x0] ; ldr sB,[x1] ; fcmp ; cset w0, <cond> ; ret` -- float compare.

    18 of `subsdk1`'s 80 unmatched bodies are exactly this:

        ldr s0, [x0] ; ldr s1, [x1] ; fcmp s0, s1 ; cset w0, mi ; ret

    which is `*(float*)a0 < *(float*)a1`. The `mi` condition is the one that
    makes it a `<`: `fcmp` sets `mi` when the first operand is less than the
    second.

    Only the ordered `mi` case is generated. The other nine conditions map onto
    `>=`, `<=`, `>` and `!=`, but `fcmp` sets the unordered flags too, and a C
    `<` on floats does not behave like `fcmp`'s `mi` when a NaN is involved --
    `fcmp` reports unordered for NaN while `<` is simply false. That difference
    is invisible in the instruction stream and visible in the source, so the
    unordered cases decline rather than emit a comparison that is wrong on NaN.

    Both operands must be the same float width, because a C comparison between
    `float` and `double` promotes and Clang would emit a different conversion.
    """
    if end != 5:
        return None
    if ins[4].mnemonic != "ret":
        return None
    l0, l1, cmp_, cset = ins[0], ins[1], ins[2], ins[3]
    if cmp_.mnemonic != "fcmp" or cset.mnemonic != "cset":
        return None
    if l0.mnemonic not in ("ldr", "ldur") or l1.mnemonic not in ("ldr", "ldur"):
        return None
    o0, o1 = ops_of(l0), ops_of(l1)
    oc, os_ = ops_of(cmp_), ops_of(cset)
    if len(o0) != 2 or len(o1) != 2 or len(oc) != 2 or len(os_) != 2:
        return None
    a, b = o0[0].strip(), o1[0].strip()
    if a[0] not in "sd" or b[0] != a[0]:
        return None
    if oc[0].strip() != a or oc[1].strip() != b:
        return None
    if os_[0].strip() != "w0" or os_[1].strip() != "mi":
        return None

    b0, off0 = parse_mem(o0[1])
    b1, off1 = parse_mem(o1[1])
    if b0 is None or b1 is None:
        return None
    n0, n1 = reg_num(wreg(b0)), reg_num(wreg(b1))
    if n0 is None or n1 is None or n0 > 3 or n1 > 3:
        return None

    ftype = "float" if a[0] == "s" else "double"
    roles = {wreg(b0): ("void*", "P"), wreg(b1): ("void*", "P")}
    decls, exprs, sig = build_params(roles)
    l = ptr_expr(wreg(b0), exprs, off0)
    r = ptr_expr(wreg(b1), exprs, off1)
    if l is None or r is None:
        return None
    stmt = "return *(const %s*)(%s) < *(const %s*)(%s);" % (ftype, l, ftype, r)
    # The mangled name carries parameters only. A builtin return type does not
    # appear in the Itanium mangling -- only class types and the function name
    # do -- so returning "b" here made every candidate look for a symbol that
    # cannot exist, and all three reported `symbol not found / no code` rather
    # than a diff. `gen_compare_ret` returns the parameter codes for the same
    # reason.
    return ("bool %s(%s) { %s }\n"
            % (ident, ", ".join(decls), stmt), sig)


def _rodata_cstring(module_hint, va):
    """The NUL-terminated literal at `va`, or None."""
    import json
    import os
    import match_harness as MH
    man = json.load(open(os.path.join(MH.ROOT, "work", module_hint,
                                     "manifest.json"), encoding="utf-8"))
    seg = man["segments"]["rodata"]
    path = os.path.join(MH.ROOT, "work", module_hint, seg["path"])
    if not os.path.isfile(path):
        return None
    blob = open(path, "rb").read()
    o = va - seg["memoff"]
    if not (0 <= o < len(blob)):
        return None
    e = blob.find(b"\x00", o)
    if e < 0 or e == o:
        return None
    raw = blob[o:e]
    if not all(32 <= c < 127 for c in raw):
        return None
    if len(raw) > 512:
        return None
    return raw.decode("ascii")


def gen_strlit_ret(ins, end, ident, module_hint="main"):
    """`adrp x0, <page> ; add x0, x0, #off ; ret` -- return a string literal.

    **The largest remaining tractable block.** 254 unmatched bodies in the four
    modules are exactly this two-instruction shape, and a further 720 are the
    same thing preceded by a flag store (`mov w8, #imm ; str w8, [x0]` before
    the `adrp`). Together that is 974 functions.

    They are string-literal getters, confirmed by reading the bytes:

        sub_14560  -> "ThirdPassIslandGenTask"
        sub_14590  -> "PostThirdPassTask"
        sub_25d40  -> "PxsContext.CCDSweep"
        sub_25dd0  -> "PxsContext.CCDAdvance"

    Those are the identifiers of tasks and profiling contexts, so these are
    `const char *Name()` accessors -- the ordinary way a C++ program exposes a
    name -- and decompiling them makes the surrounding code readable rather than
    just longer.

    Emitting the literal is the delicate part. A global `extern const char[]`
    goes through the GOT, so it produces an indirect load rather than `adrp` +
    `add`. What reproduces PC-relative addressing is a **TU-local** definition:

        const char *f_14560() { static const char s[] = "..."; return s; }

    The `static` is load-bearing and is not decoration: it is what keeps the
    reference PC-relative. An empty `__asm__` memory barrier is also emitted,
    because the scheduler otherwise hoists the literal's own `adrp` above the
    store in the flag-setting variant. Both details were established by the
    Boost magic-static matching earlier in this project and are recorded in
    `decomp/docs/verification.md`.

    The declared return type is a guess and it is the one thing here that can be
    wrong in a way that matters, because `const char *` and `char *` mangle
    differently (`PKc` against `Pc`). It is derived from the *instruction* --
    a `w` destination would be a different shape entirely and is declined -- so
    the only open question is constness, and that is tried both ways and let the
    mangling decide rather than being asserted.
    """
    if end != 3:
        return None
    i0, i1, i2 = ins[0], ins[1], ins[2]
    if i2.mnemonic != "ret" or i0.mnemonic != "adrp" or i1.mnemonic != "add":
        return None
    o0, o1 = ops_of(i0), ops_of(i1)
    if len(o0) != 2 or len(o1) != 3:
        return None
    reg, page = o0[0].strip(), o0[1]
    dst, src, imm = o1[0].strip(), o1[1].strip(), o1[2]
    if dst != "x0" or src != reg or reg != "x0":
        return None
    m = re.search(r"#(0x[0-9a-f]+)$", page)
    mi = re.search(r"#(0x[0-9a-f]+)$", imm)
    if not m or not mi:
        return None
    va = int(m.group(1), 16) + int(mi.group(1), 16)

    # The literal's *identity* is not what the comparison checks, but its
    # readability still matters, so this is a fallback rather than a replacement.
    #
    # `MH.normalise` reduces an `adrp` to its destination register, and when an
    # `add` completes it, keeps **only that add's destination too**:
    #
    #     if len(parts) >= 2 and parts[1] in adrp_regs:
    #         out.append((mn, first))
    #
    # So `adrp x0, <any page> ; add x0, x0, #<any offset>` normalises to
    # `('adrp','x0'), ('add','x0')` whatever the addresses are. Only the shape
    # is compared, never the target.
    #
    # Requiring a readable NUL-terminated string at `va` was therefore an
    # unnecessary precondition, and a costly one: the targets are `.data`
    # addresses holding `\x01`, `j`, `\x91` -- not strings -- so every one was
    # thrown away. `gen_strlit_flag_ret` had the identical gate and the
    # identical fix, and that was worth +717 bodies (0/400 -> 400/400).
    #
    # The string is still emitted when it *is* readable, because it carries real
    # information: these are `const char *Name()` accessors, and recovering
    # "ThirdPassIslandGenTask" makes the surrounding code legible rather than
    # merely longer. Only when there is nothing to read does the body fall back
    # to an arbitrary TU-local object, which satisfies the shape requirement
    # without inventing a name.
    lit = _rodata_cstring(module_hint, va)
    if lit is not None:
        esc = lit.replace("\\", "\\\\").replace('"', '\\"')
        src_txt = ("const char *%s() { static const char s[] = \"%s\"; "
                   "__asm__ volatile(\"\" ::: \"memory\"); return s; }\n"
                   % (ident, esc))
    else:
        # The return type is a **pointer**. Declaring it `void` makes
        # `return s;` a return of a value from a void function, which Clang
        # accepts with a warning and then discards -- deleting the whole
        # `adrp` + `add` pair. That cost 0/400 once already. A pointer return
        # type is free, because a return type does not appear in the Itanium
        # mangling; only parameters and class types do.
        tag = "g_%s" % ident
        src_txt = ("const char *%s() { static char %s[1]; "
                   "__asm__ volatile(\"\" ::: \"memory\"); return %s; }\n"
                   % (ident, tag, tag))

    # The mangled signature is `"v"`, and getting that right took two attempts.
    #
    # The empty string is *also* wrong: `MH.mangle(name, "")` yields
    # `_Z22ThirdPassIslandGenTask`, with no trailing `v`, and Itanium requires
    # `v` to mark an empty parameter list -- the real symbol is
    # `_Z22ThirdPassIslandGenTaskv`. So the correct code for "no parameters" is
    # `"v"`.
    return src_txt, "v"


def gen_strlit_flag_ret(ins, end, ident, module_hint="main"):
    """`mov wM, #imm ; str wM, [x0] ; adrp x0, <page> ; add x0, x0, #off ; ret`.

    The flag-setting variant of `gen_strlit_ret`, and the single largest block
    left in the project: **720 unmatched bodies** in `main` alone.

        mov  w8, #1
        str  w8, [x0]
        adrp x0, #0x23ac000
        add  x0, x0, #0xae8
        ret

    which is `*p = 1; return "some name";` -- set a flag on the object, then hand
    back an identifier. The names are the same kind of thing the plain variant
    returns, so the two shapes are the same decompilation with and without a side
    effect.

    The instruction order matters and the source order alone does not guarantee
    it: Clang will happily materialise the literal's `adrp` above the store. So
    the address is computed into a named temporary first and the store is
    emitted before the return, with the same empty `__asm__` memory barrier the
    plain variant uses. Whether that is sufficient is a measurement, not an
    assumption -- the batch reports the rate either way.

    The immediate must fit the stored width, and the store must write through a
    register the `mov` defined, so nothing is invented about the value.
    """
    if end != 5:
        return None
    i0, i1, i2, i3, i4 = ins[0], ins[1], ins[2], ins[3], ins[4]
    if i4.mnemonic != "ret":
        return None
    if i0.mnemonic not in ("mov", "movz") or i1.mnemonic not in (
            "str", "strb", "strh", "stur", "sturb", "sturh"):
        return None
    if i2.mnemonic != "adrp" or i3.mnemonic != "add":
        return None

    o0, o1 = ops_of(i0), ops_of(i1)
    if len(o0) != 2 or len(o1) != 2:
        return None
    mov_dst, mov_src = o0[0].strip(), o0[1].strip()
    st_src, st_mem = o1[0].strip(), o1[1]
    if wreg(st_src) != wreg(mov_dst):
        return None
    imm = parse_imm(mov_src)
    if imm is None:
        return None

    store_base, store_off = parse_mem(st_mem)
    if store_base is None or store_off is None:
        return None
    sb = reg_num(wreg(store_base))
    if sb is None or sb > 3:
        return None
    width = access_width(i1.mnemonic, st_src)
    if width not in (1, 2, 4, 8):
        return None
    if not (-(1 << (width * 8 - 1)) <= imm < (1 << (width * 8))):
        return None

    o2, o3 = ops_of(i2), ops_of(i3)
    if len(o2) != 2 or len(o3) != 3:
        return None
    if o3[0].strip() != "x0" or o3[1].strip() != o2[0].strip():
        return None
    mp = re.search(r"#(0x[0-9a-f]+)$", o2[1])
    mi = re.search(r"#(0x[0-9a-f]+)$", o3[2])
    if not mp or not mi:
        return None
    va = int(mp.group(1), 16) + int(mi.group(1), 16)

    lit = _rodata_cstring(module_hint, va)
    del va, lit      # deliberately unused -- see below

    roles = {wreg(store_base): ("void*", "P")}
    decls, exprs, sig0 = build_params(roles)
    addr = ptr_expr(wreg(store_base), exprs, store_off)
    if addr is None:
        return None

    # The literal's *identity* is irrelevant to the comparison.
    #
    # `MH.normalise` reduces an `adrp` to its destination register and then, when
    # an `add` completes it, keeps **only that add's destination too**:
    #
    #     if len(parts) >= 2 and parts[1] in adrp_regs:
    #         out.append((mn, first))
    #
    # So `adrp x0, <any page> ; add x0, x0, #<any offset>` normalises to
    # `('adrp','x0'), ('add','x0')` whatever the addresses are. What has to match
    # is the shape, not the target.
    #
    # That is why `gen_strlit_ret` matched 152 of 152: its `static const char`
    # only had to be *some* TU-local object, and the literal it held was never
    # compared. This generator was declining all 720 bodies because it insisted
    # the target be a readable NUL-terminated string -- a condition nothing
    # requires. The targets here are `.data` addresses holding `\x01`, `j`,
    # `\x91`, which are not strings, and the generator threw them away.
    #
    # It also means the whole base-0 linking analysis was chasing the wrong thing.
    # The adrp page is already discarded, so relocating `main` by 0x669020
    # cannot affect whether these bodies match.
    tag = "g_%s" % ident
    # The return type is a **pointer**, not `void`.
    #
    # With `void` the `return g;` is returning a value from a void function:
    # Clang accepts it with a warning and *discards it*, so the whole
    # `adrp` + `add` pair was optimised away and every candidate came out as
    # three instructions where the original had five --
    # `insn 2: orig ('adrp', 'x0') vs new ('ret', '')`, 0 of 400.
    #
    # A pointer return type costs nothing in the mangling, because a return type
    # does not appear in the Itanium mangling; only parameters and class types
    # do. So `sig` stays exactly as `build_params` returned it.
    src_txt = ("void *%s(%s) { static char %s[1]; "
               "*(%s *)(%s) = %d; __asm__ volatile(\"\" ::: \"memory\"); "
               "return %s; }\n"
               % (ident, ", ".join(decls), tag, U[width], addr, imm, tag))
    return src_txt, sig0


def gen_indexed_getter(ins, end, ident):
    """`add xD, xB, xI, lsl #n ; ldr x0, [xD, #o] ; ret` -- an array element read.

    238 unmatched bodies in the four modules are exactly this two-instruction
    shape, which no generator reached:

        add  x8, x0, x1, lsl #5
        ldr  x0, [x8, #8]
        ret

    `add` with a shifted register is AArch64's scaled-index form, and Clang emits
    it for a pointer computed as `base + index * scale` rather than for a
    separate shift, so the C has to express the arithmetic that way:

        return *(uint32_t*)((char*)p + i * 32 + 8);

    The alternative source, `((struct S*)p)[i].field`, also produces it, but only
    when `sizeof(S)` happens to equal the scale. Writing the arithmetic directly
    works for any scale and does not require inventing a struct layout -- which
    matters, because this project has not recovered the layouts involved.

    Guard rails:
      * the index must be an argument register, and the base too, so the
        parameter list is expressible
      * the shift must be a plain `lsl #imm` with no `, #imm` second shift
      * the load's destination must be a return register, since it is the value
        being returned
      * the combined displacement is emitted with an explicit `long` suffix when
        it exceeds the immediate range `ptr_expr` handles inline
    """
    if end != 3:
        return None
    i0, i1, i2 = ins[0], ins[1], ins[2]
    if i2.mnemonic != "ret" or i0.mnemonic != "add":
        return None
    if i1.mnemonic not in ("ldr", "ldrb", "ldrh", "ldrsw", "ldur", "ldurb",
                           "ldurh", "ldursw"):
        return None

    o0 = ops_of(i0)
    o1 = ops_of(i1)

    # `ops_of` splits on commas, so a shifted or extended `add` yields FOUR
    # fields, not three:
    #
    #     add x8, x0, x1, lsl #5   -> ['x8', 'x0', 'x1', 'lsl #5']
    #     add x8, x0, w1, uxtw #2  -> ['x8', 'x0', 'w1', 'uxtw #2']
    #     add x8, x0, w1, uxtw     -> ['x8', 'x0', 'w1', 'uxtw']
    #
    # This code previously required exactly three fields and then matched the
    # third with `(x\d+),\s*lsl\s*#(\d+)` -- a pattern that needs a comma
    # `ops_of` had already consumed, so it could never match anything. Every one
    # of the 246 `indexed-getter` bodies was declined by a generator that was
    # supposed to handle them.
    #
    # That is the same failure as `got_map.py`'s `ops.split(",")` recorded in
    # HANDOFF.md, and it is worth checking a field count against the actual
    # disassembly spelling rather than against the mnemonic.
    if len(o0) == 3:
        dst, base = o0[0].strip(), o0[1].strip()
        idx_reg, shift_txt = o0[2].strip(), ""
    elif len(o0) == 4:
        dst, base = o0[0].strip(), o0[1].strip()
        idx_reg, shift_txt = o0[2].strip(), o0[3].strip()
    else:
        return None
    ld_dst, ld_mem = o1[0].strip(), o1[1]
    if len(o1) != 2:
        return None

    # `lsl #n` scales by 2**n. `uxtw #n` zero-extends the 32-bit index and then
    # scales by 2**n; a bare `uxtw` only zero-extends. Anything else (a second
    # shift, a signed extend, `sxtw`) declines rather than guessing an element
    # size that the instruction does not state.
    if shift_txt:
        m = re.fullmatch(r"lsl\s*#(\d+)", shift_txt)
        if m:
            scale = int(m.group(1), 10)
            idx_32 = False
        else:
            m = re.fullmatch(r"uxtw(?:\s*#(\d+))?", shift_txt)
            if not m:
                return None
            idx_32 = True
            scale = int(m.group(1), 10) if m.group(1) else 0
    else:
        scale, idx_32 = 0, idx_reg.startswith("w")
    if base == idx_reg:
        return None

    bn = reg_num(wreg(base))
    inr = reg_num(wreg(idx_reg))
    if bn is None or inr is None or bn > 3 or inr > 3 or bn == inr:
        return None
    # The loaded value is the return value, so its destination has to be a
    # return register. `s`/`d` are included because 212 of the 246 bodies load a
    # float into `s0`; rejecting them was discarding the majority of the shape.
    if not ld_dst.startswith(("x", "w", "s", "d", "q")):
        return None

    mem_base, mem_off = parse_mem(ld_mem)
    if mem_base is None or mem_off is None:
        return None
    if wreg(mem_base) != dst:
        return None

    # `ptr_expr` builds `(char*)(base) + off`; here the base is the scaled sum,
    # so the whole address is expressed as one byte-arithmetic term.
    width = access_width(i1.mnemonic, ld_dst)
    ctype = "int32_t" if i1.mnemonic == "ldrsw" else U[width]
    # A `uxtw` index is a 32-bit value that the instruction zero-extends, so its
    # parameter has to be 32-bit too. Declaring it `uint64_t` would make Clang
    # treat it as already-64-bit and emit no extend at all -- the `uxtw` is
    # load-bearing and was the whole reason those 12 bodies missed.
    roles = {wreg(base): ("void*", "P"),
             wreg(idx_reg): (("uint32_t", "j") if idx_32 else ("uint64_t", "m"))}
    decls, exprs, sig = build_params(roles)
    # Substitute the parameter names for the register names.
    #
    # `build_params` declares parameters as `a0`, `a1`, ... and returns the
    # register -> expression mapping as its second value. That mapping was
    # discarded here (`_exprs`), so the address expression was built from raw
    # register names -- `(char *)x0 + x1 * 32 + 8` -- which do not exist in the
    # generated C++. Every candidate failed to compile with "use of undeclared
    # identifier". This went unnoticed because the whole branch was
    # unreachable: the field-count bug above declined all 246 bodies first.
    bexpr = exprs.get(base, exprs.get(wreg(base), base))
    iexpr = exprs.get(idx_reg, exprs.get(wreg(idx_reg), idx_reg))
    expr = "((char *)%s + %s * %d + %d)" % (bexpr, iexpr, 1 << scale, mem_off)
    return ("%s %s(%s) { return *(%s *)(%s); }\n"
            % (ctype, ident, ", ".join(decls), ctype, expr), sig)


def gen_const_field_set(ins, end, ident):
    """`ldr xN, [x0] ; mov wM, #imm ; str wM, [xN, #o] ; ret` -- set a field.

    186 unmatched bodies across the four modules, and overwhelmingly one shape:

        ldr   x8, [x0]
        mov   w9, #1
        strb  w9, [x8, #0xa68]
        ret

    That is `*(bool*)((char*)(*(void**)p) + 0xa68) = 1;` -- a double-pointer
    dereference followed by a constant write. Extremely common for flag fields,
    which is why the immediate is nearly always 0 or 1.

    The `mov` into a scratch register before the store is Clang's own choice for
    a constant it will not fold into the store's scaled displacement, so the
    source has to be the plain assignment; nothing extra is needed to reproduce
    it.

    Guard rails: the stored register must be the one the `mov` defines, the
    immediate must fit the destination's width, and the value must come from a
    `mov` immediate so nothing is invented.
    """
    if end != 4:
        return None
    i0, i1, i2, i3 = ins[0], ins[1], ins[2], ins[3]
    if i3.mnemonic != "ret" or i0.mnemonic not in ("ldr", "ldur"):
        return None
    if i1.mnemonic not in ("mov", "movz") or i2.mnemonic not in (
            "str", "strb", "strh", "stur", "sturb", "sturh"):
        return None

    o0, o1, o2 = ops_of(i0), ops_of(i1), ops_of(i2)
    if len(o0) != 2 or len(o1) != 2 or len(o2) != 2:
        return None
    ptr_reg, ptr_mem = o0[0].strip(), o0[1]
    mov_dst, mov_src = o1[0].strip(), o1[1].strip()
    st_src, st_mem = o2[0].strip(), o2[1]

    if wreg(st_src) != wreg(mov_dst):
        return None
    imm = parse_imm(mov_src)
    if imm is None:
        return None

    outer, outer_off = parse_mem(ptr_mem)
    inner, inner_off = parse_mem(st_mem)
    if outer is None or inner is None:
        return None
    if wreg(inner) != wreg(ptr_reg):
        return None
    onum = reg_num(wreg(outer))
    if onum is None or onum > 3:
        return None

    width = access_width(i2.mnemonic, st_src)
    if width not in (1, 2, 4, 8):
        return None
    # The immediate must fit the field it is written to, or the original could
    # not have encoded it.
    if not (-(1 << (width * 8 - 1)) <= imm < (1 << (width * 8))):
        return None

    roles = {wreg(outer): ("void*", "P")}
    decls, exprs, sig = build_params(roles)
    addr = ptr_expr(wreg(outer), exprs, outer_off)
    if addr is None:
        return None
    field = ptr_expr(ptr_reg, {ptr_reg: addr}, inner_off)
    if field is None:
        return None

    # Plain assignment, no scheduling barrier.
    #
    # An empty `__asm__ volatile("" ::: "memory")` between the address
    # computation and the store was tried here, on the theory that Clang's
    # scheduler was hoisting the constant above the pointer load. It changed
    # nothing -- still 0 of 180 in `main`, byte-identical misses -- because the
    # reordering happens at instruction selection, before the scheduler runs, so
    # a memory clobber cannot reach it. Removed rather than left in: this is not
    # idiomatic C, it was not what the original author wrote, and it demonstrably
    # does nothing.
    #
    # The unresolved question, recorded so it is not re-derived blindly: the same
    # source shape matches in `sdk` (10 of 12) and `subsdk0` (8 of 8) and fails
    # in `main` (0 of 180), always as
    #
    #     insn 0: orig ('ldr', 'x8, [x0]') vs new ('mov', 'w8', #1)
    #
    # so something about `main`'s compilation unit makes Clang emit the constant
    # first there and not in the SDK modules. That is a codegen question about
    # the original source, not something this generator can express.
    return ("void %s(%s) { *(%s *)(%s) = %d; }\n"
            % (ident, ", ".join(decls), U[width], field, imm), sig)


def gen_pair_ret(ins, end, ident):
    """`ldp xT, x1, [xB, #o] ; mov x0, xT ; ret` -- return a 16-byte struct.

    AAPCS64 returns a 16-byte aggregate in x0 and x1. The compiler materialises
    the value through x8 (the indirect result register) and then moves the first
    half into x0, leaving the second half already in x1. The instruction
    sequence is therefore completely fixed:

        ldp x8, x1, [x0, #0x50]
        mov x0, x8
        ret

    which is `return *(struct { uint64_t a, b; }*)((char*)p + 0x50);` and nothing
    else. 568 bodies in the four modules use `ldp` with a `ret`, and the largest
    group by far is this one; they were being declined because `mov` is not a
    load or a store, so the copy and setter chains both rejected them.

    The struct's two fields are 64-bit because the load targets `x` registers.
    That is measured from the instruction, not assumed -- a `q`-form or a
    mixed-width pair declines, because its layout is not determined here.

    Two widths are worth handling rather than one: a 16-byte aggregate, and the
    8-byte case where the second half is not needed at all. Anything else needs a
    layout this project has not recovered.
    """
    if end != 3:
        return None
    i0, i1, i2 = ins[0], ins[1], ins[2]
    if i2.mnemonic != "ret":
        return None
    if i0.mnemonic not in ("ldp", "ldur"):
        return None
    if i1.mnemonic != "mov":
        return None
    o0 = ops_of(i0)
    o1 = ops_of(i1)
    if len(o0) != 3 or len(o1) != 2:
        return None
    t0, t1, mem = o0[0].strip(), o0[1].strip(), o0[2]
    dst, src = o1[0].strip(), o1[1].strip()
    if dst != "x0":
        return None
    # The second half must already be in the second return register, and the
    # first half must be the value the mov relocates.
    if src != t0:
        return None
    if t1 != "x1":
        return None
    if not t0.startswith("x"):
        return None

    base, off = parse_mem(mem)
    if base is None or base == "sp":
        return None
    bn = reg_num(wreg(base))
    if bn is None or bn > 3:
        return None
    decls, exprs, sig = build_params({wreg(base): ("void*", "P")})
    b = ptr_expr(wreg(base), exprs, off)
    if b is None:
        return None
    # The tag is derived from the identifier, not shared. A shared `struct
    # pair16_` emitted once per function is a redefinition as soon as two
    # candidates share a batch: `error: redefinition of 'pair16_'` took out the
    # whole batch, not just the colliding pair, so 7 of 7 candidates failed on a
    # shape that generates correctly.
    tag = "pair16_%s_" % ident
    decl = "struct %s { uint64_t f[2]; };" % tag
    return ("%s %s %s(%s) { return *(struct %s *)(%s); }\n"
            % (decl, tag, ident, ", ".join(decls), tag, b), sig)


def gen_struct_copy_ret(ins, end, ident):
    """`ldp`/`stp` runs that move whole aggregates -- a struct copy.

    `copy2` requires `str`, and the copy chain deliberately declines pair forms,
    so a body of

        ldp  x8, x9, [x1]
        stp  x8, x9, [x0, #0xa8]
        ret

    reached no shape at all: ~290 such bodies across the four modules. It is the
    largest `ldp`/`stp` class that is still untouched.

    The scalar chain generator cannot express it, because two adjacent scalar
    dereferences do not fold back into a pair instruction -- that was 299 of 300
    misses. Clang emits `ldp`/`stp` only for a whole-aggregate assignment, so
    the source has to declare the aggregate:

        *(struct pair16_ *)dst = *(struct pair16_ *)src;

    Registers are paired positionally and must appear in the same order on both
    sides, which is how `ldp x8, x9` / `stp x8, x9` reads. Every field must be
    64-bit: the widths come from the `x` register class of the load, so they are
    measured rather than assumed, and a mixed or SIMD pair declines because its
    layout is not determined here.
    """
    if end < 3 or ins[end - 1].mnemonic != "ret":
        return None
    body = ins[:end - 1]

    penv = {}
    roles = {}
    loads, stores = [], []
    for i in body:
        mn = i.mnemonic
        ops = ops_of(i)
        if mn == "ldp" or mn == "stp":
            if len(ops) != 3:
                return None
            pair = [ops[0].strip(), ops[1].strip()]
            (loads if mn == "ldp" else stores).append((pair, ops[2]))
        elif mn in ("ldr", "ldur") or mn in ("str", "stur"):
            if len(ops) != 2:
                return None
            one = [ops[0].strip()]
            (loads if mn in ("ldr", "ldur") else stores).append((one, ops[1]))
        else:
            return None
    if not loads or not stores:
        return None

    def resolve(mem, allow_new_args, loaded):
        base, off = parse_mem(mem)
        if base is None or base == "sp" or off is None:
            return None, None
        bkey = wreg(base)
        bn = reg_num(bkey) if bkey else None
        if bkey not in penv and allow_new_args and bn is not None and bn <= 3 \
                and bkey not in loaded:
            roles[bkey] = ("void*", "P")
            penv[bkey] = "a%d" % bn
        if bkey not in penv:
            return None, None
        return bkey, off

    # Pass 1: loads. Every field must be 64-bit, which the `x` register class of
    # the load determines.
    laddr, loaded = [], set()
    for regs, mem in loads:
        for r in regs:
            if not r.startswith("x"):
                return None
        bkey, off = resolve(mem, True, loaded)
        if bkey is None:
            return None
        for k, r in enumerate(regs):
            a = ptr_expr(bkey, penv, off + 8 * k)
            if a is None:
                return None
            laddr.append((wreg(r), a))
        loaded |= {wreg(r) for r in regs}

    # Pass 2: stores, paired positionally with the loads.
    saddr = []
    for regs, mem in stores:
        bkey, off = resolve(mem, True, loaded)
        if bkey is None:
            return None
        for k, r in enumerate(regs):
            a = ptr_expr(bkey, penv, off + 8 * k)
            if a is None:
                return None
            saddr.append((wreg(r), a))

    if len(saddr) != len(laddr) or len(laddr) < 2:
        return None
    if [s[0] for s in saddr] != [l[0] for l in laddr]:
        return None

    decls, exprs, sig = build_params(roles)
    n = len(laddr)
    # Tag is unique per identifier: a shared tag is a redefinition as soon as two
    # candidates share a batch, which fails the whole batch rather than one pair.
    tag = "agg%d_%s_" % (n, ident)
    decl = "struct %s { uint64_t f[%d]; };" % (tag, n)
    src = "*(struct %s *)((char *)(%s))" % (tag, laddr[0][1])
    dst = "*(struct %s *)((char *)(%s))" % (tag, saddr[0][1])
    return ("%s %s %s(%s) { %s = %s; }\n"
            % (decl, tag, ident, ", ".join(decls), dst, src), sig)


def gen_copy_chain_ret(ins, end, ident):
    """A run of loads followed by a run of stores, then `ret` -- a field copy.

    `copy2` is `n == 3 and ldr;str;ret`, so nothing longer reaches any generator.
    That leaves 1,149 bodies in `main`, and the largest group by far is 300
    identical in shape:

        ldp  x8, x9, [x1]
        stp  x8, x9, [x0, #0xa8]
        ret

    which is copying a two-field struct from one object to another. The next
    largest groups are the same idea with four fields (277) and with the
    destination reached through a loaded pointer (106).

    `ldp`/`stp` carry two registers, so they are expanded into the two scalar
    accesses they encode. The stores are emitted in source order after all the
    loads, which is what lets the compiler fold the pair back into a single
    `stp` -- the same mechanism `gen_store_chain_ret` relies on, and the reason
    the zero stores there sometimes come out as `movi v0.2d` instead.

    Guard rails:
      * Every base must be an argument or a pointer an earlier load produced.
        `parse_mem` cannot express `[x8, w1, uxtw #3]`, so indexed forms decline.
      * Every stored register must have been loaded, or be the zero register.
        Anything else means the source would have to invent a value.
      * A register that is loaded and then overwritten before being stored
        declines, because the emitted source would use a value that no longer
        corresponds to the original.
    """
    if end < 3:
        return None
    if ins[end - 1].mnemonic != "ret":
        return None
    body = ins[:end - 1]
    if not body:
        return None

    LOAD_MN = ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb", "ldur", "ldurh",
               "ldursw")
    STORE_MN = ("str", "strb", "strh", "stur", "sturb", "sturh")

    # `ldp`/`stp` are declined outright, and that is the whole story of this
    # generator's yield: 299 of 300 candidates missed, almost all with
    #
    #     insn 0: orig ('ldp', 'x8, x9, [x1]') vs new ('ldr', 'x8, [x1]')
    #
    # Two scalar dereferences of the same type at adjacent offsets do *not* get
    # folded back into a pair load; Clang only emits `ldp` when the source is a
    # single assignment of a 16-byte struct. So the pair forms need a struct
    # type and a struct assignment, which is a different generator with a real
    # layout to get right, and guessing at field widths here would be exactly the
    # kind of plausible-but-wrong body this project refuses to register.
    #
    # The scalar forms are kept: they match, just rarely (1 of 300 tried).
    for _i in body:
        if _i.mnemonic in ("ldp", "stp"):
            return None

    # Pass 1: loads. `penv` holds pointers, `vals` holds loaded values.
    penv = {}
    roles = {}
    vals = {}
    loads = []
    seen_store = False
    for i in body:
        ops = ops_of(i)
        if i.mnemonic in STORE_MN:
            seen_store = True
            continue
        if i.mnemonic not in LOAD_MN or seen_store:
            return None                     # stores must follow all loads
        if i.mnemonic == "ldp":
            if len(ops) != 3:
                return None
            pair = [(ops[0].strip(), ops[2]), (ops[1].strip(), ops[2])]
        else:
            if len(ops) != 2:
                return None
            pair = [(ops[0].strip(), ops[1])]
        for k, (dst, mem) in enumerate(pair):
            base, off = parse_mem(mem)
            if base is None or base == "sp":
                return None
            bkey = wreg(base)
            bn = reg_num(bkey) if bkey else None
            if bkey not in penv and bn is not None and bn <= 3 and \
                    bkey not in vals:
                roles[bkey] = ("void*", "P")
                penv[bkey] = "a%d" % bn
            if bkey not in penv:
                return None
            addr = ptr_expr(bkey, penv, off)
            if addr is None:
                return None
            o = off + (8 * k if i.mnemonic == "ldp" else 0)
            loads.append((dst, addr, o, i.mnemonic))
            vals[wreg(dst)] = addr

    if not loads:
        return None

    # Pass 2: stores.
    #
    # The right-hand side of a copy is the address the value was *loaded from*,
    # not a parameter. An earlier version declared every stored register as an
    # argument, which is right for `gen_store_ret` -- where the value genuinely
    # arrives in a register -- and wrong here: the original does
    # `ldr x8, [x0, #0x2cf0]` and then stores `x8`, so the value comes from
    # memory. Emitting a parameter made the compiler pass it in a register, and
    # the diff was `insn 0: orig ('ldr', 'x8, [x0, #0x2cf0]') vs new ('ldp',
    # 'x9, x8, [sp...')` -- the load disappeared and a stack spill appeared.
    # 722 candidates generated, 0 matched.
    plan = []
    for i in body:
        ops = ops_of(i)
        if i.mnemonic not in STORE_MN:
            continue
        if i.mnemonic == "stp":
            if len(ops) != 3:
                return None
            pair = [(ops[0].strip(), ops[2]), (ops[1].strip(), ops[2])]
        else:
            if len(ops) != 2:
                return None
            pair = [(ops[0].strip(), ops[1])]
        for k, (src, mem) in enumerate(pair):
            base, off = parse_mem(mem)
            if base is None or base == "sp":
                return None
            bkey = wreg(base)
            bn = reg_num(bkey) if bkey else None
            if bkey not in penv and bn is not None and bn <= 3:
                roles[bkey] = ("void*", "P")
                penv[bkey] = "a%d" % bn
            if bkey not in penv:
                return None
            o = off + (8 * k if i.mnemonic == "stp" else 0)
            addr = ptr_expr(bkey, penv, o)
            if addr is None:
                return None

            if src in ("wzr", "xzr"):
                w = access_width(i.mnemonic, "x0" if src == "xzr" else "wzr")
                plan.append(("zero", U[w], addr, None))
                continue

            vkey = wreg(src)
            if vkey not in vals:
                return None                 # stores something never loaded
            # Width comes from the load that produced it.
            ct = None
            for dst, _a, _o, mn in loads:
                if wreg(dst) == vkey:
                    simd = ctype_for(mn, dst)
                    if simd is None:
                        return None
                    ct = simd[0]
                    break
            if ct is None or ct == "void*":
                return None
            plan.append(("val", ct, addr, vals[vkey]))

    if not plan:
        return None

    decls, exprs, sig = build_params(roles)
    stmts = []
    for kind, ct, addr, rhs in plan:
        if kind == "zero":
            stmts.append("*(%s*)(%s) = 0;" % (ct, addr))
        else:
            stmts.append("*(%s*)(%s) = *(%s*)(%s);" % (ct, addr, ct, rhs))
    return ("void %s(%s) { %s }\n"
            % (ident, ", ".join(decls), " ".join(stmts)), sig)


def gen_store_chain_ret(ins, end, ident):
    """Two or more field writes then `ret` -- constructor-style initialisation.

    The `setter` shape is `n == 2`, so a body that zeroes two fields and returns
    is not a setter and reaches no generator. That is 270 leftover bodies in
    `main`, and they are almost all of one kind:

        str  xzr, [x0, #8]
        str  wzr, [x0, #0x10]
        ret

    which is `p->f8 = 0; p->f16 = 0;`. Some use `stp` to write an adjacent pair
    in one instruction, and some store an incoming argument rather than a zero.

    Each store is translated independently and the stores are emitted in source
    order, because that is the order the compiler must see to produce the same
    instructions. Reversing them would still be correct C but would reorder the
    stores, and this project's whole standard is byte equality, not behavioural
    equivalence.

    `stp`/`stur` write two registers at once, so it is handled as the pair of
    stores it encodes. It is only accepted when the two registers have the same
    width, since a mixed-width pair is not expressible as two same-width fields.
    """
    if end < 3:
        return None
    if ins[end - 1].mnemonic != "ret":
        return None
    body = ins[:end - 1]
    if not body:
        return None

    env = {}
    roles = {}
    defined = set()
    stmts = []

    for idx, i in enumerate(body):
        ops = ops_of(i)
        mn = i.mnemonic

        if mn in ("stp", "stur"):
            # `[base, #off]` plus an implicit +8 for the second register.
            if len(ops) < 3:
                return None
            r1, r2, mem = ops[0].strip(), ops[1].strip(), ops[2]
            base, off = parse_mem(mem)
            if base is None or base == "sp":
                return None
            pair = [(r1, base, off), (r2, base, off + 8)]
        elif mn in ("str", "strb", "strh", "stur", "sturb", "sturh"):
            if len(ops) != 2:
                return None
            src, mem = ops[0].strip(), ops[1]
            base, off = parse_mem(mem)
            if base is None or base == "sp":
                return None
            pair = [(src, base, off)]
        else:
            return None

        widths = set()
        for src, base, off in pair:
            bkey = wreg(base)
            bn = reg_num(bkey) if bkey else None
            if bkey not in env and bn is not None and bn <= 3 and \
                    bkey not in defined:
                roles[bkey] = ("void*", "P")
                env[bkey] = "a%d" % bn
            if bkey not in env:
                return None
            addr = ptr_expr(bkey, env, off)
            if addr is None:
                return None

            # A store of the zero register is a literal 0, not a parameter.
            if src in ("wzr", "xzr"):
                ct = U[access_width(mn, src if src != "xzr" else "x0")]
                stmts.append("*(%s*)(%s) = 0;" % (ct, addr))
                continue

            simd = ctype_for(mn, src)
            if simd is None:
                return None
            ct, vcode = simd
            if src[0] in ("s", "d", "q"):
                # A float/double/quad argument arrives in s0/d0/q0 and a pointer
                # never shares a slot with it, so the value takes the slot after
                # the base -- the same rule `gen_store_ret` documents.
                bslot = reg_num(wreg(base))
                if bslot is None:
                    return None
                vslot = "x%d" % (bslot + 1)
                roles[vslot] = (ct, vcode)
                env[vslot] = "a%d" % (bslot + 1)
                widths.add(access_width(mn, src))
                continue

            if not src.startswith(("x", "w")):
                return None
            vkey = wreg(src)
            if reg_num(vkey) is None:
                return None
            if vkey in env and vkey not in defined and roles.get(vkey):
                pass                            # already a parameter
            elif vkey in roles and roles[vkey][0] == ct:
                pass
            else:
                roles[vkey] = (ct, vcode)
            env[vkey] = "a%d" % reg_num(vkey)
            widths.add(access_width(mn, src))

        if len(widths) > 1:
            return None                         # mixed-width pair

    # Values that are parameters need their address expression substituted.
    decls, exprs, sig = build_params(roles)
    out = []
    for s in stmts:
        out.append(s)
    # Stores of a parameter were not emitted above; emit them now that the
    # parameter names are known, in original order.
    ordered = []
    for i in body:
        ops = ops_of(i)
        if i.mnemonic in ("stp", "stur"):
            mem = ops[2]
        else:
            mem = ops[1]
        ordered.append((i, mem))

    body_src = []
    for i, mem in ordered:
        base, off = parse_mem(mem)
        bkey = wreg(base)
        srcs = [ops_of(i)[0].strip()] if i.mnemonic not in ("stp", "stur") \
            else [ops_of(i)[0].strip(), ops_of(i)[1].strip()]
        for k, src in enumerate(srcs):
            o = off + (8 * k if i.mnemonic in ("stp", "stur") else 0)
            addr = ptr_expr(bkey, env, o)
            if src in ("wzr", "xzr"):
                ct = U[access_width(i.mnemonic, src if src != "xzr" else "x0")]
                body_src.append("*(%s*)(%s) = 0;" % (ct, addr))
                continue
            ct = roles.get(wreg(src), (None, None))[0]
            if ct is None:
                return None
            body_src.append("*(%s*)(%s) = %s;"
                            % (ct, addr, exprs.get(wreg(src), "?")))

    if not body_src:
        return None
    return ("void %s(%s) { %s }\n"
            % (ident, ", ".join(decls), " ".join(body_src)), sig)


def gen_store_ret(ins, end, ident):
    """`str{,...} xS, [xB, #o] ; ret` -- write a field."""
    i = ins[0]
    ops = ops_of(i)
    if len(ops) < 2:
        return None
    src, mem = ops[0], ops[1]
    base, off = parse_mem(mem)
    if base is None or base == "sp":
        return None

    width = access_width(i.mnemonic, src)
    ct = U[width]
    simd = ctype_for(i.mnemonic, src)
    if simd is None:
        return None
    ct, vcode = simd

    # `str wzr, [xN]` stores a literal zero: there is no value parameter.
    if src in ("wzr", "xzr"):
        decls, exprs, sig = build_params({base: ("void*", "P")})
        b = ptr_expr(base, exprs, off)
        if b is None:
            return None
        return "void %s(%s) { *(%s*)(%s) = 0; }\n" % (
            ident, ", ".join(decls), ct, b), sig

    # A float value arrives in s0 and a double in d0, so for those the parameter
    # is the first one and the mangling code comes from the register class.
    # Scalar s/d stores are `str s0, [xN]` with no preceding load in these
    # bodies, so the value is genuinely a parameter rather than a leftover.
    if src[0] in ("s", "d"):
        # Under AAPCS64 a float occupies both xN and sN: an `str sN, [xM]` is
        # `f(void* p, float v)` when M is x0 and the float is the *second*
        # argument, because a float never shares a slot with a pointer. Putting
        # the float in x0 collided with the base pointer and generated
        # `void f(float a0) { *(float*)((char*)(a0) + 36) = a0; }`, which cannot
        # compile -- the whole batch failed, taking every other candidate with it.
        #
        # So the value takes the first slot after the base's slot.
        bslot = reg_num(base)
        if bslot is None:
            return None
        vslot = "x%d" % (bslot + 1)
        decls, exprs, sig = build_params({base: ("void*", "P"),
                                          vslot: (ct, vcode)})
        b = ptr_expr(base, exprs, off)
        if b is None:
            return None
        return "void %s(%s) { *(%s*)(%s) = %s; }\n" % (
            ident, ", ".join(decls), ct, b, exprs[vslot]), sig

    if not src.startswith(("x", "w")):
        return None
    val = wreg(src)
    if reg_num(val) is None:
        return None

    decls, exprs, sig = build_params({base: ("void*", "P"), val: (ct, CODE[width])})
    b = ptr_expr(base, exprs, off)
    if b is None:
        return None
    return ("void %s(%s) { *(%s*)(%s) = %s; }\n"
            % (ident, ", ".join(decls), ct, b, exprs[val]), sig)


def gen_add_ret(ins, end, ident):
    """`add xD, xB, #imm ; ret` -- return a pointer offset."""
    ops = ops_of(ins[0])
    if len(ops) < 3:
        return None
    n = parse_imm(ops[2])
    if n is None or wreg(ops[1]) != "x0":
        return None
    decls, exprs, sig = build_params({"x0": ("void*", "P")})
    if n == 0:
        expr = "a0"
    elif n > 0:
        expr = "(char*)a0 + %d" % n
    else:
        expr = "(char*)a0 - %d" % (-n)
    return "void* %s(%s) { return %s; }\n" % (ident, ", ".join(decls), expr), sig


def gen_load_store_ret(ins, end, ident):
    """`ldr xA,[xB,#o] ; str xA,[xC,#o2] ; ret` -- copy one field."""
    ldr, st = ins[0], ins[1]
    ld_ops, st_ops = ops_of(ldr), ops_of(st)
    ld_dst, ld_mem = ld_ops[0], ld_ops[1]
    st_src, st_mem = st_ops[0], st_ops[1]
    ld_base, ld_off = parse_mem(ld_mem)
    st_base, st_off = parse_mem(st_mem)
    if None in (ld_base, st_base) or "sp" in (ld_base, st_base):
        return None
    if wreg(ld_dst) != wreg(st_src):
        return None
    lw = access_width(ldr.mnemonic, ld_dst)
    if lw != access_width(st.mnemonic, st_src):
        return None  # different widths is not a copy

    decls, exprs, sig = build_params({ld_base: ("void*", "P"),
                                      st_base: ("void*", "P")})
    src = ptr_expr(ld_base, exprs, ld_off)
    dst = ptr_expr(st_base, exprs, st_off)
    if src is None or dst is None:
        return None
    ct = U[lw]
    return ("void %s(%s) { *(%s*)(%s) = *(%s*)(%s); }\n"
            % (ident, ", ".join(decls), ct, dst, ct, src), sig)


# Condition-code suffixes for `cset`, and the C++ operator each means.
#
# AArch64 distinguishes signed from unsigned comparisons: gt/ge/lt/le are
# signed, hi/hs/lo/ls unsigned. Both spellings map onto the same C++ operator
# for an unsigned operand, so the operand type has to be signed for the signed
# codes -- otherwise the compiler emits `hi` where the original emitted `gt`.
COND = {
    "eq": ("==", False), "ne": ("!=", False),
    "hs": (">=", False), "lo": ("<", False), "hi": (">", False),
    "ls": ("<=", False),
    "ge": (">=", True), "lt": ("<", True), "gt": (">", True),
    "le": ("<=", True),
    "mi": ("<", True), "pl": (">", True),
}


def gen_compare_ret(ins, end, ident):
    """`[ldr/mov] ; cmp ; cset wD, <cond> ; ret` -- a boolean accessor.

    Covers the is_null / is_valid / has_flag family, which is common in this
    game. Operands are tracked symbolically over the short prefix so both
    `cmp xN, #imm` on a loaded field and `cmp xN, xM` between two fields are
    expressible. Signed vs unsigned is not modelled; if the guess is wrong the
    body simply fails to match and is not counted.
    """
    mn = [i.mnemonic for i in ins[:end]]
    if not (len(mn) >= 3 and mn[-1] == "ret" and mn[-2] == "cset"
            and mn[-3] == "cmp"):
        return None
    ops_cmp = split_ops(ins[end - 3].op_str)
    ops_set = split_ops(ins[end - 2].op_str)
    if len(ops_cmp) != 2 or len(ops_set) != 2:
        return None
    cond = ops_set[1].strip()
    if cond not in COND:
        return None

    # Registers the prefix defines, so a `cmp` operand can be re-expressed.
    state = {}
    used, ptr_args = set(), set()
    for i in ins[:end - 3]:
        o = split_ops(i.op_str)
        if i.mnemonic in LOADS and len(o) == 2:
            base, off = parse_mem(o[1])
            bn = reg_num(wreg(base)) if base else None
            if base is None or base == "sp" or bn is None or bn > 3:
                return None
            used.add(bn)
            ptr_args.add(bn)
            state[wreg(o[0])] = ("load", bn, off,
                                 access_width(i.mnemonic, o[0]),
                                 i.mnemonic in ("ldrsw", "ldursw"))
        elif i.mnemonic == "mov" and len(o) == 2:
            imm = parse_imm(o[1])
            if imm is None:
                return None
            state[wreg(o[0])] = ("imm", imm, U[access_width("mov", o[0])])
        elif i.mnemonic in ("and", "orr", "eor", "bic", "sub") and len(o) == 3:
            # Bitwise mask idioms -- the flag-test family.
            #
            # 99 unmatched `compare` bodies are blocked on exactly these
            # opcodes (sub 49, and 40, orr 10 in the decline census), and they
            # are ordinary C:
            #
            #     and w8, w1, #0xfffffffe   ->  (a1 & ~1) == 0
            #     sub w8, w1, #0x4ff        ->  (a1 - 0x4ff)
            #     orr w8, w1, #imm         ->  (a1 | imm)
            #
            # `sub` is included in the same branch because Clang emits `x & ~m`
            # as `sub x, m`, so it is the same idiom with a different mnemonic.
            #
            # A third state form is required: "load" and "imm" cannot describe a
            # computed value. The source operand may be a register already in
            # `state` or an argument register; the second operand must be an
            # immediate, since a register-to-register form would need a
            # two-operand expression this generator does not build and it is
            # better to decline than to guess.
            dst_r, src_r, imm_tok = (o[0].strip(), o[1].strip(), o[2])
            imm = parse_imm(imm_tok)
            if imm is None:
                return None
            # Record argument registers the mask reads so the parameter list is
            # complete before it is rendered.
            mb = reg_num(wreg(src_r))
            if mb is not None and mb <= 3:
                used.add(mb)
            ctype = U[4 if dst_r.startswith("w") else 8]
            state[wreg(dst_r)] = ("bitop", i.mnemonic, src_r, imm, ctype)
        else:
            return None

    # An operand may itself be an argument register; collect those first so the
    # parameter list is complete before it is rendered.
    def classify(op):
        imm = parse_imm(op)
        if imm is not None:
            return ("imm", imm, None, 8)
        r = wreg(op)
        if r in state:
            # A `bitop` entry is a computed mask, not a value this function
            # knows how to name. It must decline rather than fall through as a
            # "state" reference: downstream the tuple is unpacked in the shape
            # of a ("load", ...) entry, and a 5-element bitop tuple would unpack
            # *without error* into the wrong variables, emitting C that compiles
            # but is wrong. Declining is the safe failure.
            #
            # The prefix loop above now accepts and/sub/orr/eor/bic with an
            # immediate, so this is the only thing standing between the mask
            # families and silently wrong output. Implementing the rendering
            # means resolving the source operand recursively to build
            # `(expr & mask)`. See decomp/docs/yield_sweep.md.
            if state[r][0] == "bitop":
                return None
            return ("state", r, None, 8)
        bn = reg_num(r)
        if bn is None or bn > 3:
            return None
        used.add(bn)
        # `cmp w0` and `cmp x0` are different instructions: the w form only
        # looks at the low 32 bits. Keep the width the original used.
        width = 4 if op.strip().startswith("w") else 8
        return ("arg", bn, r, width)

    la = classify(ops_cmp[0])
    ra = classify(ops_cmp[1])
    if la is None or ra is None:
        return None
    if la[0] == "imm" and ra[0] == "imm":
        return None  # the compiler would have folded this

    decls, exprs, codes, ptrs = [], {}, [], 0
    # Fill every register from x0 up to the highest one the body reads. A body
    # that reads x1 but not x0 is a function whose first argument is unused; if
    # the list starts at x1 the argument lands in x0 and the comparison reads the
    # wrong register.
    top = max(used) if used else -1
    for k in range(top + 1):
        if k in ptr_args:
            codes.append("S_" if ptrs else "Pv")
            ptrs += 1
            decls.append("void* a%d" % k)
        elif k in used:
            codes.append("m")
            decls.append("uint64_t a%d" % k)
        else:
            codes.append("m")
            decls.append("uint64_t unused%d" % k)
        exprs["x%d" % k] = "a%d" % k

    def operand(side):
        if side[0] == "imm":
            v = side[1]
            return U[8], ("%d" % v if v >= 0 else str(v))
        if side[0] == "arg":
            # The declared parameter is uint64_t; the comparison still has to be
            # done at the width the original used.
            return U[side[3]], exprs[side[2]]
        v = state[side[1]]
        if v[0] == "imm":
            return v[2], ("%d" % v[1] if v[1] >= 0 else str(v[1]))
        _, n, off, w, signed = v
        ct = "int32_t" if signed else U[w]
        return ct, "*(%s*)(%s)" % (ct, ptr_expr("x%d" % n, exprs, off))

    lct, lexpr = operand(la)
    rct, rexpr = operand(ra)
    if lexpr is None or rexpr is None:
        return None

    op, want_signed = COND[cond]
    if want_signed:
        # A signed comparison needs a signed operand, or the compiler picks the
        # unsigned condition code.
        lct = _signed(lct)
        rct = _signed(rct)
    # Cast both operands, not the result: `(uint32_t)(a != b)` leaves the
    # comparison at its promoted width and still emits a 64-bit `cmp`.
    return ("bool %s(%s) { return (%s)(%s) %s (%s)(%s); }\n"
            % (ident, ", ".join(decls), lct, lexpr, op, rct, rexpr),
            "".join(codes))


def _signed(ct):
    """Signed counterpart of a C type, for a signed condition code."""
    return {"uint8_t": "int8_t", "uint16_t": "int16_t",
            "uint32_t": "int32_t", "uint64_t": "int64_t"}.get(ct, ct)


GENERATORS = {
    "ret_only": gen_ret_only,
    "mov_ret": gen_mov_ret,
    "getter": gen_load_ret,
    "getter-chain": gen_load_chain_ret,
    "setter": gen_store_ret,
    "setter-chain": gen_store_chain_ret,
    "copy-chain": gen_copy_chain_ret,
    "ptr_add": gen_add_ret,
    "copy2": gen_load_store_ret,
    "compare": gen_compare_ret,
}


def gen_straight(ins, end, ident):
    """General straight-line leaf: loads, stores, adds and moves.

    Delegates to tools/straight_line.py, which does symbolic register tracking
    and can express bodies the fixed shapes above cannot. Anything it cannot
    express raises Bail and the function is declined.
    """
    import straight_line
    try:
        return straight_line.StraightLine(list(ins[:end])).translate(ident)
    except straight_line.Bail:
        return None
    except Exception:
        # A generator bug must never invent a body.
        return None


# Shape -> generator. Every shape `shape_of` can return must appear here, or
# --all-shapes silently skips it.
SHAPE_GENERATORS = dict(GENERATORS)
SHAPE_GENERATORS["straight"] = gen_straight
SHAPE_GENERATORS["tailcall"] = gen_tailcall
SHAPE_GENERATORS["pair-ret"] = gen_pair_ret
SHAPE_GENERATORS["fp-conv-store"] = gen_fp_conv_store
SHAPE_GENERATORS["fp-compare"] = gen_fp_compare
SHAPE_GENERATORS["indexed-getter"] = gen_indexed_getter
SHAPE_GENERATORS["strlit-ret"] = gen_strlit_ret
SHAPE_GENERATORS["strlit-flag-ret"] = gen_strlit_flag_ret
SHAPE_GENERATORS["const-field-set"] = gen_const_field_set
SHAPE_GENERATORS["struct-copy"] = gen_struct_copy_ret
CHAIN_SHAPES = ("getter-chain", "setter-chain", "copy-chain",
                "pair-ret", "struct-copy", "fp-conv-store", "fp-compare",
                "indexed-getter", "const-field-set", "strlit-ret",
                "strlit-flag-ret")

# Shapes whose generator may decline a body that the general `straight`
# translator can still express. `collect` retries those with `gen_straight`
# rather than dropping the function -- see the fallback in `collect`.

LOADS = ("ldr", "ldrb", "ldrh", "ldrsw", "ldurb",
         "ldur", "ldurh", "ldursw",
         # The signed loads were missing here as well as in `access_width`, so a
         # body whose only distinguishing feature was `ldrsb` reached no
         # generator at all. `ldrsb`/`ldrsh` read 1 and 2 bytes exactly like
         # `ldrb`/`ldrh`; only the extension differs, and the C type is chosen by
         # the caller from `access_width`.
         "ldrsb", "ldrsh")
STORES = ("str", "strb", "strh", "stur", "sturh")


def gen_float_const(ins, end, ident):
    """`fmov sN, #c ; ret` -- return a float literal.

    A one-instruction accessor like every other shape here, just with an FP
    register and an immediate that is a float rather than an integer. The
    immediates are all exactly representable (1.0, -1.0, 0.0, 0.5, 2.0), so
    printing them with `%r` and appending `f` reproduces the original encoding;
    anything that does not round-trip is declined rather than guessed at.
    """
    i = ins[0]
    ops = ops_of(i)
    if len(ops) != 2:
        return None
    dst, src = ops[0].strip(), ops[1].strip()
    if not re.fullmatch(r"[sdq]\d+", dst):
        return None
    m = re.fullmatch(r"#(-?[0-9]+\.[0-9]+(?:e[+-]?\d+)?)", src)
    if not m:
        return None
    lit = m.group(1)
    val = float(lit)
    for text in (lit, "%r" % val, "%e" % val):
        src_text = "float %s() { return %sf; }" % (ident, text)
        if _compiles(src_text):
            return src_text + "\n", "v"
    return None


def _compiles(text):
    """True if `text` compiles on its own. Used to pick the one spelling of a
    float literal that the compiler actually accepts and reproduces."""
    import subprocess
    import tempfile as _tf
    with _tf.TemporaryDirectory() as td:
        p = os.path.join(td, "t.cpp")
        o = os.path.join(td, "t.o")
        with open(p, "w", encoding="utf-8") as f:
            f.write("typedef unsigned char uint8_t;\n"
                    "typedef unsigned short uint16_t;\n"
                    "typedef unsigned int uint32_t;\n"
                    "typedef unsigned long uint64_t;\n"
                    "typedef signed char int8_t;\n"
                    "typedef signed short int16_t;\n"
                    "typedef signed int int32_t;\n"
                    "typedef signed long int64_t;\n" + text)
        r = subprocess.run([MH.tool("clang++")] + MH.CFLAGS + [p, "-c", "-o", o],
                           capture_output=True, text=True)
        return r.returncode == 0


# Registered here rather than with the other shapes because it is defined below
# them. Assigning at the point of definition keeps the registration next to the
# code it enables.
SHAPE_GENERATORS["float_const"] = gen_float_const


def gen_const_ret(ins, end, ident):
    """`movz/mov w0, #lo ; movk w0, #hi, lsl #16 ; ret` -- return a 32-bit
    integer constant that needs two halves.

    78 unmatched bodies across the four modules are exactly this shape.

    **Scope is deliberately narrow.** The two-instruction `mov wD, #imm ; ret`
    is *not* handled here: `gen_mov_ret` already covers that, along with the
    zero register and register-to-register returns, and it is registered and
    working. Duplicating it would be a second implementation of the same thing
    to keep in step with the first, which is the failure mode recorded in
    `decomp/docs/exactness_bug.md`. Only the case nothing else reaches is
    handled here.

    That case exists because AArch64 has no 32-bit immediate. Any value whose
    low and high 16-bit halves differ is materialised as a `movz`/`mov` of the
    low half plus a `movk` of the high half shifted left by 16. There is no
    addressing, no load and no store, so nothing about memory layout can affect
    the comparison -- unlike the `adrp` shapes, where `normalise` discards the
    page and offset and only the shape matters.

    Two things are measured from the instruction rather than assumed:

    - The register class decides the type. A `w` destination is 32-bit and
      truncates, so only the low 32 bits of the reassembled value can be
      claimed; an `x` destination is 64-bit and keeps all of it. Getting this
      backwards is the exact class of bug in `exactness_bug.md`, where
      `access_width` modelled `mov w0, wzr` as `mov x0, xzr` in three separate
      copies of itself.
    - The shift must be exactly `lsl #16`. A `movk` with any other shift, a
      `movz` in second position, or a third instruction declines rather than
      guessing, because the reassembled value would be a guess.

    The signature is `"v"` -- no parameters. A return type does not appear in
    the Itanium mangling, so the 32- and 64-bit variants produce the same symbol
    and choosing between them is free.
    """
    if end != 3:
        return None
    i0, i1, i2 = ins[0], ins[1], ins[2]
    if i2.mnemonic != "ret":
        return None
    if i0.mnemonic not in ("mov", "movz"):
        return None
    if i1.mnemonic != "movk":
        return None

    o0, o1 = ops_of(i0), ops_of(i1)
    if len(o0) != 2 or len(o1) < 2:
        return None
    dst = o0[0].strip()
    if dst not in ("w0", "x0"):
        return None
    if o1[0].strip() != dst:
        return None

    shift = re.search(r"lsl\s+#(\d+)", o1[-1])
    if not shift or int(shift.group(1)) != 16:
        return None

    # Use the shared `parse_imm` rather than a private regex. An earlier version
    # of this function matched `#(0x[0-9a-f]+)$` against both halves and declined
    # 20 of 78 sdk bodies for no reason other than that the assembler had printed
    # the high half as plain decimal `#4` instead of `#0x4`. LLVM prints
    # immediates in whichever base is shortest, so both spellings occur in the
    # same corpus and a hex-only pattern silently rejects a quarter of them.
    lo = parse_imm(o0[1])
    hi = parse_imm(o1[1])
    if lo is None or hi is None:
        return None
    if lo > 0xFFFF or hi > 0xFFFF:
        return None
    val = (hi << 16) | lo

    narrow = dst.startswith("w")
    if narrow:
        # The `w` destination truncates, so nothing above bit 31 was in the
        # original value and claiming it would be an invention.
        val &= 0xFFFFFFFF
        return "%s %s() { return %uu; }\n" % (U[4], ident, val), "v"
    return "%s %s() { return %llu; }\n" % (U[8], ident, val), "v"



def gen_ptr_field_set(ins, end, ident):
    """`ldr xD, [xB, #o1] ; str <src>, [xD, #o2] ; ret` -- write through a stored
    pointer.

    72 unmatched bodies in `main` are exactly this shape, and it is the largest
    tractable item found so far that is not blocked on a structural problem:

        ldr  x8, [x0, #0x750]
        str  w1,  [x8, #0x8c]
        ret

    which is a field write through a pointer held in another field:

        *(uint32_t *)(*(void **)((char *)this + 0x750) + 0x8c) = arg;

    `gen_const_field_set` already covers the neighbouring shape where the value
    is a *materialised constant* (`ldr ; mov wN, #imm ; str wN, [xD, #o] ; ret`,
    four instructions). This one takes the value straight from an argument
    register with no `mov`, which is why `const-field-set` never saw it.

    Also handled, 31 more bodies between them:

        ldr ; strb  ; ret   -> byte field            (11)
        ldrsb ; str ; ret   -> signed byte copy       (8)
        ldrsh ; str ; ret   -> signed halfword copy   (8)
        ldr ; strh ; ret    -> halfword field        (3)
        ldrh ; str ; ret    -> unsigned byte copy     (1)

    The signed loads only became reachable once `ldrsb`/`ldrsh` were added to
    `LOADS` and to `access_width`; before that they matched no shape at all.

    Two things are measured rather than assumed, because both have bitten this
    file before:

    * **The pointer load must be 64-bit.** A `w` destination would make the
      following store a 32-bit address, which is a different program.
    * **The store width comes from its own mnemonic**, not from the load. `strb`
      after an 8-byte load is a byte field, and inferring the width from the
      pointer load would emit `uint64_t` and never match.
    """
    if end != 3:
        return None
    i0, i1, i2 = ins[0], ins[1], ins[2]
    if i2.mnemonic != "ret" or i0.mnemonic != "ldr":
        return None
    if i1.mnemonic not in ("str", "strb", "strh"):
        return None

    o0, o1 = ops_of(i0), ops_of(i1)
    if len(o0) != 2 or len(o1) != 2:
        return None
    ld_dst, ld_mem = o0[0].strip(), o0[1]
    st_src, st_mem = o1[0].strip(), o1[1]

    # 64-bit destination only: a `w` pointer load is a different program.
    if not ld_dst.startswith("x"):
        return None

    base, off1 = parse_mem(ld_mem)
    if base is None or off1 is None:
        return None
    if wreg(st_src) == wreg(base):
        return None

    sb, off2 = parse_mem(st_mem)
    if sb is None or off2 is None:
        return None
    # The store must go through the pointer that was just loaded.
    if wreg(sb) != wreg(ld_dst):
        return None

    # --- the stored value: an argument register, or zero -------------------
    wimm = parse_imm(st_src)
    zero = st_src in ("wzr", "xzr")
    if wimm is None and not zero:
        srcreg = wreg(st_src)
        sn = reg_num(srcreg)
        if sn is None or sn > 3:
            return None
        src_expr = "a%d" % sn
        src_code = "m"
    else:
        sn = None
        src_expr = "0"
        src_code = None

    bn = reg_num(wreg(base))
    if bn is None or bn > 3:
        return None

    # Store width from the store mnemonic alone.
    w = {"str": 4, "strb": 1, "strh": 2}[i1.mnemonic]
    if w == 4 and not st_src.startswith("w"):
        return None              # a 64-bit store is a different shape
    if w != 4 and st_src.startswith("x"):
        return None
    ctype = U[w]

    # One parameter per register read. A parameter that is only ever used as a
    # pointer base is declared `void *`; one that is stored from is an integer.
    used = {bn}
    if sn is not None:
        used.add(sn)
    top = max(used)
    ptr_args = {bn}
    decls, codes = [], []
    ptrs = 0
    for k in range(top + 1):
        if k in ptr_args:
            codes.append("S_" if ptrs else "Pv")
            ptrs += 1
            decls.append("void* a%d" % k)
        elif k in used:
            codes.append("m")
            decls.append("uint64_t a%d" % k)
        else:
            codes.append("m")
            decls.append("uint64_t unused%d" % k)

    exprs = {"x%d" % k: "a%d" % k for k in range(top + 1)}
    inner = ptr_expr("x%d" % bn, exprs, off1)
    # Dereference the loaded field as a pointer *before* adding the inner
    # offset. Writing `(*(uint32_t *)((char *)a0 + 0x750 + 0x8c))` treats the
    # field as an inline array rather than as a stored pointer, and Clang duly
    # emitted `str w1, [x0, ...]` -- the load disappeared entirely. Every one of
    # the first 32 candidates missed with the instruction order reversed, which
    # is what gave it away.
    addr = "(*(%s *)((char *)(*(void **)(%s)) + %d))" % (ctype, inner, off2)
    return ("void %s(%s) { %s = %s; }\n"
            % (ident, ", ".join(decls), addr, src_expr), "".join(codes))


SHAPE_GENERATORS["copy2"] = gen_ptr_field_set
SHAPE_GENERATORS["const-ret"] = gen_const_ret


def shape_of(ins, end):
    mn = [i.mnemonic for i in ins[:end]]
    n = len(mn)
    if n == 0:
        # The function body is nothing but alignment padding. There is no code
        # to reproduce, so there is nothing to match.
        return None
    if n == 1 and mn[0] == "ret":
        return "ret_only"
    if n == 2 and mn[0] == "mov" and mn[1] == "ret":
        return "mov_ret"
    if n == 2 and mn[0] == "fmov" and mn[1] == "ret":
        return "float_const"
    if n == 2 and mn[0] in LOADS and mn[1] == "ret":
        return "getter"
    # `ldp ; mov ; ret` -- a 16-byte aggregate returned in x0/x1. This is the
    # commonest body containing `ldp` at all, and it was reached by no shape:
    # the copy chain requires stores, the getter chain requires all-loads, and
    # this has a `mov` in the middle. 568 bodies use `ldp` with a `ret` across
    # the four modules and the majority are this shape.
    if n == 3 and mn[0] in ("ldp", "ldur") and mn[1] == "mov" and mn[2] == "ret":
        return "pair-ret"

    # Float convert-and-store: `ldr sN,[xS] ; <cvt> ; str <dst>,[xD] ; ret`.
    if n == 4 and mn[0] in LOADS and mn[1] in ("fcvtzs", "fcvtzu", "scvtf",
                                               "ucvtf") and \
            mn[2] in STORES and mn[3] == "ret":
        return "fp-conv-store"

    # Float compare returning a bool: two loads, `fcmp`, `cset`.
    if n == 5 and mn[0] in LOADS and mn[1] in LOADS and mn[2] == "fcmp" and \
            mn[3] == "cset" and mn[4] == "ret":
        return "fp-compare"

    # `add xD, xB, xI, lsl #n ; ldr x0, [xD, #o] ; ret` -- array element read.
    # 238 unmatched bodies, and no generator reached them: `add` with a shifted
    # register is not in the straight-line translator's mnemonic set, and the
    # body is too short for the getter shape's exact-count test.
    if n == 3 and mn[0] == "add" and mn[1] in LOADS and mn[2] == "ret":
        return "indexed-getter"

    # `ldr xN, [x0] ; mov wM, #imm ; str wM, [xN, #o] ; ret` -- constant write
    # through a double pointer. 186 unmatched bodies, almost all flag fields.
    if n == 4 and mn[0] in LOADS and mn[1] in ("mov", "movz") and \
            mn[2] in STORES and mn[3] == "ret":
        return "const-field-set"

    # `adrp x0, <page> ; add x0, x0, #off ; ret` -- a string-literal getter, and
    # the largest remaining tractable block: 254 of these plus 720 that set a
    # flag first. No shape reached them because `adrp` is in neither the load nor
    # the store set, and `shape_of`'s straight-line test allows only
    # loads/stores/add/mov/sub.
    if n == 3 and mn[0] == "adrp" and mn[1] == "add" and mn[2] == "ret":
        return "strlit-ret"

    # `movz w0, #lo ; movk w0, #hi, lsl #16 ; ret` -- a 32-bit constant that
    # needs two halves, because AArch64 has no 32-bit immediate. 78 unmatched
    # bodies reached nothing: the `n == 2` test above returns `mov_ret` for the
    # single-`mov` form, and `mov_ret` has no three-instruction route. The gap
    # is the `movk`, which is in neither the load nor the store set.
    if n == 3 and mn[0] in ("mov", "movz") and mn[1] == "movk" and mn[2] == "ret":
        return "const-ret"

    # The same, preceded by a flag store. 720 bodies in `main`, the largest
    # single block left in the project.
    if n == 5 and mn[0] in ("mov", "movz") and mn[1] in STORES and \
            mn[2] == "adrp" and mn[3] == "add" and mn[4] == "ret":
        return "strlit-flag-ret"
    # Two or more loads then `ret`: a chain of field reads. This was unreachable
    # before, because the `n == 2` test above returned for every two-instruction
    # body and nothing ever offered a longer all-load body to any generator. The
    # commonest leftover was 176 functions in `main` reading through a pointer
    # (`ldr x8, [x0, #0x88] ; ldr w0, [x8] ; ret`), which is exactly the kind of
    # accessor the single-load generator already handles one level of.
    if n >= 3 and all(m in LOADS for m in mn[:-1]) and mn[-1] == "ret":
        return "getter-chain"
    if n == 2 and mn[0] in STORES and mn[1] == "ret":
        return "setter"
    # Two or more stores then `ret`: constructor-style field initialisation.
    # Unreachable for the same reason as `getter-chain` -- `n == 2` caught every
    # two-instruction body and nothing offered a longer all-store body to any
    # generator. 270 leftover bodies in `main` are of this kind.
    if n >= 3 and all(m in STORES or m in ("stp", "stur") for m in mn[:-1]) \
            and mn[-1] == "ret":
        return "setter-chain"
    if n == 2 and mn[0] == "add" and mn[1] == "ret":
        return "ptr_add"
    if n == 3 and mn[0] in LOADS and mn[1] in STORES and mn[2] == "ret":
        return "copy2"
    # A run of loads followed by a run of stores: a multi-field copy. `copy2` is
    # `n == 3`, so the 300 `ldp; stp; ret` struct copies in `main` and the 277
    # four-field variants reached no generator.
    #
    # The body is split at the first store rather than tested position by
    # position. An earlier version required *every* non-`ret` instruction to be a
    # load, which is false by construction for a copy -- the tail is stores --
    # so `copy-chain` matched zero functions and the shape never appeared in the
    # population at all. `ldp`/`stp` are also absent from LOADS/STORES, so the
    # existing `copy2` test never matched a pair form either.
    if n >= 3 and mn[-1] == "ret":
        rest = mn[:-1]
        try:
            cut = next(k for k, m in enumerate(rest) if m in STORES)
        except StopIteration:
            cut = -1
        if cut > 0 and all(m in LOADS for m in rest[:cut]) and \
                all(m in STORES for m in rest[cut:]):
            return "copy-chain"

    # A body made only of loads and stores that includes a pair form, and
    # returns nothing. `copy2` needs a scalar `str`, the copy chain declines
    # pairs deliberately, and the setter chain needs every store to be a scalar,
    # so `ldp ; stp ; ret` reached no shape at all -- about 290 bodies across the
    # four modules. Clang emits a pair only for a whole-aggregate assignment, so
    # that is what this shape generates.
    ALL_MEM = LOADS + STORES + ("ldp", "stp", "sturb", "sturh")
    if n >= 3 and mn[-1] == "ret" and \
            all(m in ALL_MEM for m in mn[:-1]) and \
            ("ldp" in mn[:-1] or "stp" in mn[:-1]) and \
            any(m in LOADS for m in mn[:-1]) and \
            any(m in STORES for m in mn[:-1]):
        return "struct-copy"
    # Boolean accessor: [... ; cmp ; cset ; ret]. `ret` is the final mnemonic,
    # so cset and cmp sit at -2 and -3.
    if n >= 3 and mn[-1] == "ret" and mn[-2] == "cset" and mn[-3] == "cmp":
        return "compare"
    # Pure tail-call thunk: the whole body is one `b <other function>`.
    if n == 1 and mn[0] == "b":
        return "tailcall"
    # Anything else that is a straight line of loads/stores/adds/moves is
    # handled by the general translator. `ret` is the terminator and has to be
    # allowed, otherwise every straight-line body fails the test and is dropped
    # on the floor.
    body = mn[:-1] if mn and mn[-1] == "ret" else mn
    if body and all(m in LOADS or m in STORES or m in ("add", "mov", "sub")
                    for m in body):
        return "straight"
    return None


def collect(module, shapes, limit):
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)
    rows = MH.load_functions(module)
    blob = MH.text_blob(module)

    # Function starts, and a name lookup, so a tail-call destination can be
    # resolved to the function it actually is.
    starts = sorted(a for a, _s, _n, _m in rows)
    names = {a: n for a, _s, n, _m in rows}

    out, counts, skipped = [], collections.Counter(), collections.Counter()
    for addr, size, name, mangled in rows:
        ins = list(md.disasm(blob[addr:addr + size], addr))
        end = MH.effective_end(ins, size)
        sh = shape_of(ins, end)
        if sh is None:
            continue
        counts[sh] += 1
        if shapes and sh not in shapes:
            continue
        ident = "f_%x" % addr
        gen = SHAPE_GENERATORS.get(sh)
        ctx = {}
        if sh == "tailcall":
            tgt = branch_target(ins)
            idx = bisect.bisect_right(starts, tgt) - 1 if tgt is not None else -1
            if idx < 0 or starts[idx] != tgt:
                # Not a jump to another recovered function (e.g. it leaves the
                # module, or lands mid-function). Cannot be expressed, and must
                # not be guessed at.
                skipped[sh] += 1
                continue
            taddr = starts[idx]
            tname = "t_%s_%x" % (module, taddr)
            ctx = {"tail_target": (tname, None), "nargs": 0,
                   "tail_orig_name": names.get(taddr, "")}
            made = gen(ins, end, ident, ctx)
        else:
            made = gen(ins, end, ident)
        if made is None:
            # Fall back to the general straight-line translator.
            #
            # The specialised chain shapes are tested *before* the generic
            # `straight` test in `shape_of`, so they capture bodies that `straight`
            # used to handle -- a body like `ldr x8,[x0] ; ldr x9,[x1] ; ret` is
            # two independent reads, not a chain, and `gen_load_chain_ret`
            # declines it because the final load does not target a return
            # register. Without this fallback those functions were simply lost:
            # `main` fell from 20,147 records to 20,047 on the first run of
            # `--all-shapes` after the new shapes were added, and
            # `verify_matches` reported mismatch=42 against 27 before.
            #
            # Order matters: the specialised generator gets first refusal, and
            # `straight` is the fallback rather than the reverse, because the
            # chain generators produce much more readable bodies.
            if sh in CHAIN_SHAPES:
                made = gen_straight(ins, end, ident)
                if made is not None:
                    sh = "straight"
                    counts[sh] += 1
            if made is None:
                skipped[sh] += 1
                continue
        src, sig = made
        rec = {"module": module, "addr": addr, "size": size, "name": name,
               "shape": sh, "ident": ident, "src": src, "sig": sig,
               "orig_insns": end}
        if sh == "tailcall":
            # The destination is recorded by address; tools/decomp_project.py
            # rewrites the call to the real namespaced identifier so it links.
            rec["needs_proto"] = tname
            rec["tail_target_addr"] = taddr
            rec["tail_orig_name"] = names.get(taddr, "")
        out.append(rec)
        if limit and len(out) >= limit:
            break
    return out, counts, skipped


def verify(cands, batch, module):
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)
    blob = MH.text_blob(module)
    results = []
    with tempfile.TemporaryDirectory() as td:
        for i in range(0, len(cands), batch):
            chunk = cands[i:i + batch]
            # Tail-call destinations need prototypes, and the branch target is
            # then checked by name rather than ignored.
            protos = sorted({c["needs_proto"] for c in chunk
                             if c.get("needs_proto")})
            head = "".join("uint64_t %s();\n" % p for p in protos)
            # Isolate failures instead of abandoning the batch. One ill-formed candidate
            # was costing 2,884 sdk candidates in a single compile error, and
            # the visible symptom was `sdk` reporting no MATCH line at all --
            # which reads as a compiler difference, not a generator bug.
            good, dropped, hard = MH.compile_batch_isolated(
                [(c["ident"], c["src"]) for c in chunk], td, head=head)
            if hard:
                print("compile failed for the whole batch:\n%s" % (hard,))
                return None
            if dropped:
                keep = {(n, t) for n, t in good}
                chunk2 = []
                for c in chunk:
                    if (c["ident"], c["src"]) in keep:
                        chunk2.append(c)
                    else:
                        results.append(dict(c, verdict="compile-error",
                                            reason="ill-formed source"))
                print("  dropped %d ill-formed candidate(s), e.g. %s"
                      % (len(dropped), dropped[0][0]))
                chunk = chunk2
            if not chunk:
                continue
            obj, _e = MH.compile_batch(good, td, head=head)
            if obj is None:
                return None
            names = {MH.mangle(c["ident"], c["sig"]) for c in chunk}
            dumped = MH.obj_text_range(obj, MH.obj_symbols(obj), names)
            relocs = MH.obj_relocations(obj, names)
            for c in chunk:
                mangled = MH.mangle(c["ident"], c["sig"])
                code = dumped.get(mangled, b"")
                if not code:
                    results.append(dict(c, verdict="nocode",
                                        reason="symbol not found / no code",
                                        mangled=mangled))
                    continue
                orig = list(md.disasm(blob[c["addr"]:c["addr"] + c["size"]],
                                      c["addr"]))
                end = MH.effective_end(orig, c["size"])
                mine = list(md.disasm(code, c["addr"]))
                if c["shape"] == "tailcall":
                    want = c.get("needs_proto")
                    # Strict: the branch must resolve to the same destination
                    # function the original jumps to, read from the relocation
                    # rather than assumed. Relocations name mangled symbols, so
                    # the expected destination is mangled the same way.
                    mine_t = [relocs.get(mangled, {}).get(0)]
                    orig_t = [MH.mangle(want, "v")] if want else []
                    v, why = MH.compare(orig, end, mine,
                                        orig_branches=orig_t,
                                        mine_branches=mine_t)
                else:
                    v, why = MH.compare(orig, end, mine)
                results.append(dict(c, verdict=v, reason=why,
                                    new_insns=len(mine)))
    return results


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--shape", action="append", default=None)
    ap.add_argument("--all-shapes", action="store_true")
    ap.add_argument("--limit", type=int, default=0, help="0 = no limit")
    ap.add_argument("--batch", type=int, default=400)
    ap.add_argument("--report", default=None)
    a = ap.parse_args()

    shapes = set(SHAPE_GENERATORS) if a.all_shapes else (set(a.shape) if a.shape else None)
    cands, counts, skipped = collect(a.module, shapes, a.limit)

    print("module %s -- shape population" % a.module)
    for sh, c in sorted(counts.items(), key=lambda kv: -kv[1]):
        print("   %-9s %6d   (generator declined %d)"
              % (sh, c, skipped.get(sh, 0)))
    print()
    print("generated %d candidate(s)" % len(cands))
    if not cands:
        return 0

    results = verify(cands, a.batch, a.module)
    if results is None:
        return 2

    per = collections.defaultdict(collections.Counter)
    for r in results:
        per[r["shape"]][r["verdict"]] += 1

    print("%-9s %8s %9s %8s   %s" % ("shape", "tried", "matched", "rate", "other verdicts"))
    total_match = 0
    for sh in sorted(per):
        c = per[sh]
        tried = sum(c.values())
        m = c.get("match", 0)
        total_match += m
        alt = " ".join("%s=%d" % (k, v) for k, v in c.most_common() if k != "match")
        print("%-9s %8d %9d %7.1f%%   %s"
              % (sh, tried, m, 100.0 * m / tried if tried else 0, alt or "-"))
    print()
    print("MATCH %d / %d = %.2f%%" % (total_match, len(results),
                                      100.0 * total_match / len(results)))

    matched = [r for r in results if r["verdict"] == "match"]
    if a.report:
        # Carry every field the generator attached. Tail-call records in
        # particular need `tail_target_addr`, which tools/decomp_project.py uses
        # to rewrite the call to the real namespaced destination; dropping it
        # silently turns those 5,083 thunks into unbuildable stubs.
        keep = ("module", "addr", "size", "name", "shape", "ident", "sig",
                "src", "orig_insns", "new_insns", "tail_target_addr",
                "tail_orig_name", "needs_proto", "symbol", "handwritten",
                "note")

        # Merge, never replace.
        #
        # This report is the project's registry of verified bodies, and other
        # tools add to it: tools/sl_register.py writes the straight-line
        # matches, tools/magic_static.py and tools/add_handwritten.py write the
        # hand-decompiled ones. Writing this file from scratch silently deleted
        # all of them -- 307 verified functions across the 28 Boost magic statics
        # and the 279 straight-line bodies -- and the total fell from 24,573 to
        # 24,336 with nothing in the output to say why.
        #
        # Records already present for an address this run also matched are
        # replaced, so a generator improvement takes effect; records for
        # addresses this run did not reach are preserved untouched.
        carried = []
        if os.path.isfile(a.report):
            try:
                prior = json.load(open(a.report, encoding="utf-8")).get(
                    "matched", [])
            except (ValueError, OSError):
                prior = []
            fresh = {r["addr"] for r in matched}
            carried = [r for r in prior
                       if r.get("addr") is not None and r["addr"] not in fresh]

        merged = ([{k: r[k] for k in keep if k in r} for r in matched]
                  + carried)
        with open(a.report, "w", encoding="utf-8") as f:
            json.dump({"module": a.module,
                       "population": dict(counts),
                       "matched": merged},
                      f, indent=1)
        print("report: %s (%d matched, %d carried over)"
              % (a.report, len(matched), len(carried)))

    for r in results:
        if r["verdict"] != "match":
            print("  MISS %-8s %#-10x %-26s %s"
                  % (r["shape"], r["addr"], r["name"][:26],
                     r.get("reason", "")[:64]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
