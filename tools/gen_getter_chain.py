#!/usr/bin/env python3
"""Generator for `getter-chain`: a load chain that ends in the return value.

190 unmatched bodies, and one family dominates:

    ldr ldr ret     139        ldr ldr ldr ret   28
    ldr ldr ldr ldr ret  3     plus ~20 singletons

The 139 are a two-level getter with an *indexed* final load:

    ldr x8, [x0, #0x30]        p = *(void **)((char *)a0 + 0x30)
    ldr w0, [x8, w1, uxtw #2]  return *(uint32_t *)((char *)p + (uintptr_t)a1 * 4)

and the 28 are a plain pointer chase returning a field:

    ldr x8, [x0, #0x10]        p = *(void **)((char *)a0 + 0x10)
    ldr x8, [x8, #0x60]        p = *(void **)((char *)p  + 0x60)
    ldr x0, [x8, #0x30]        return *(uint64_t *)((char *)p + 0x30)

## How the return value is recognised

The chain is whatever feeds the final load; the final load is the one whose
*destination* is `x0` or `w0`. That is a fact about the register, not about the
position, so it does not matter how long the chain is -- which is why the same
code handles the 139-body family and the 28-body one.

The return *type* comes from the destination's register class: `w0` is 32 bits,
`x0` is 64. It does not appear in the mangled name either way, because a builtin
return type is absent from Itanium mangling -- only the parameters are.

## Two rules carried over, each learned the hard way elsewhere

**A base register is usually a loaded pointer, not an argument.** `ldr x8,[x8,#0x60]`
chases a pointer. `gen_compare_pred` assumed otherwise and emitted a nine-parameter
function that compiled to reloading `x0` from the stack.

**The index register of an indexed load is an argument.** `w1, uxtw #2` is the
second parameter, zero-extended, scaled by 4 -- and the scale comes from the
instruction, not from the element type's size, so both are read from the operands.

Usage:
    python tools/gen_getter_chain.py            # report only
    python tools/gen_getter_chain.py --apply    # register the matches
"""

import argparse
import collections
import json
import os
import re
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH       # noqa: E402
import auto_match as AM          # noqa: E402
import straight_line as SL       # noqa: E402

MODULES = ["main", "sdk", "subsdk0", "subsdk1"]

LOADS = {"ldr": None, "ldrb": 1, "ldrh": 2, "ldrsb": 1, "ldrsh": 2,
         "ldrsw": 4, "ldur": None}
CT = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}

# A signed load needs a *signed* C type. `ldrsh` and `ldrh` have the same width
# and differ only in sign, so a width-keyed table emits `*(uint16_t*)` for both
# and Clang quite correctly compiles that to `ldrh` -- which then reads as a
# codegen mystery rather than a type error in the source.
SIGNED = {"ldrsb": "int8_t", "ldrsh": "int16_t", "ldrsw": "int32_t"}

# Signed types keyed by width. A signed load sign-extends to the *whole*
# destination register, so `ldrsw x8` holds an `int64_t`, not an `int32_t`: the
# value it produces has to be described by the destination's width or the next
# use zero-extends it. `ldrsw x8; ldr x0, [x8, x9, lsl #3]` is a *signed* index,
# and declaring `uint32_t t0` there silently made it unsigned.
SIGNED_W = {1: "int8_t", 2: "int16_t", 4: "int32_t", 8: "int64_t"}


def split_ops(s):
    return SL.split_ops(s)


def parse_int(tok):
    """`-0x18`, `#-4`, `12` -> int. The sign comes before the radix prefix, so a
    plain `startswith("0x")` test raises ValueError on every negative hex offset
    -- which is most of them."""
    t = tok.strip().lstrip("#")
    neg = t.startswith("-")
    if neg:
        t = t[1:]
    v = int(t, 16) if t.lower().startswith("0x") else int(t)
    return -v if neg else v


def parse_mem(op):
    """`[x8, w1, uxtw #2]`, `[x8, w1, sxtw #3]`, `[x8, x1, lsl #3]`, `[x0, #-0x18]`.

    The index forms all reduce to a byte scale taken from the instruction, not
    from the element size. `#n` here is a *shift amount*, so the multiplier is
    `1 << n`: `uxtw #2` and `lsl #2` scale by 4, `sxtw #3` and `lsl #3` by 8.
    Emitting the shift amount directly as the multiplier scales every indexed
    getter by 2x too little, which is wrong semantics rather than a failed
    match -- it has to be right in the source, not merely rejected by the
    compiler.

    The extension is returned too, because it decides the *signedness* of the
    index parameter: `sxtw` sign-extends a 32-bit index, so its parameter is
    `int32_t` and its mangled code is `i`, not `j`. Only `uxtw` was accepted at
    first, which declined 25 bodies differing only in the extension written on
    the instruction.
    """
    m = re.match(r"^\[\s*([A-Za-z0-9]+)"
                 r"(?:\s*,\s*([A-Za-z0-9]+)\s*,\s*(uxtw|sxtw|lsl)"
                 r"(?:\s*#(0x[0-9a-f]+|\d+))?)?"
                 r"(?:\s*,\s*#(-?(?:0x)?[0-9a-fA-F]+))?\s*\]$", op)
    if not m:
        return None
    base, index, ext, scale, off = m.group(1), m.group(2), m.group(3), m.group(4), m.group(5)
    if index and scale is None:
        return None
    s = None
    if index:
        s = 1 << (int(scale, 16) if scale.lower().startswith("0x") else int(scale))
    return base, index, (parse_int(off) if off else 0), s, ext


def reg_width(r):
    """Access width in bytes, from the *register class*.

    `s0` is a 32-bit float and `d0` a 64-bit double; both were missing, which
    declined the largest group in this shape -- 93 of the 139 `ldr ldr ret`
    bodies end in `ldr s0, [x8]`, i.e. a plain float field read.
    """
    r = r.strip()
    if r == "xzr":
        return 8
    if r == "wzr":
        return 4
    if re.match(r"^[xsvq][0-9]+$", r) or re.match(r"^[wdq][0-9]+$", r):
        if r[0] == "x":
            return 8
        if r[0] in "ws":
            return 4
        return 8
    return None


def fp_kind(r):
    """'float' / 'double' if `r` is an FP register, else None."""
    r = r.strip()
    if re.match(r"^s[0-9]+$", r):
        return "float"
    if re.match(r"^d[0-9]+$", r):
        return "double"
    return None


def build(body, ident):
    """Return (src, sig) or None."""
    state = {}        # register -> (expr, ctype) for loaded values
    args = {}         # argument number -> (name, ctype)
    reads = []        # emitted load statements, in the original's order
    ret = None
    nload = 0

    def base_of(base):
        if base == "sp":
            return None
        if base in state:
            return "(char*)(%s)" % state[base][0]
        if re.match(r"^[xw][0-9]+$", base) and int(base[1:]) <= 7:
            n = int(base[1:])
            args.setdefault(n, ("a%d" % n, "void*"))
            return "(char*)a%d" % n
        return None

    for ins in body:
        mn = ins.mnemonic
        if mn == "ret":
            continue
        if mn not in LOADS:
            return None
        ops = split_ops(ins.op_str)
        if len(ops) != 2:
            return None
        dst = ops[0]
        parsed = parse_mem(ops[1])
        if parsed is None:
            return None
        base, index, off, scale, ext = parsed
        b = base_of(base)
        if b is None:
            return None
        if index is not None:
            n = int(index[1:]) if index[1:].isdigit() else None
            if n is None or n > 7:
                return None
            # The extension fixes the index's signedness, and with it the
            # parameter type and therefore the mangled name: `w1, sxtw #3` is a
            # *signed* 32-bit index, so the parameter is int32_t (`i`), not
            # uint32_t (`j`). Getting this wrong yields a body that is
            # semantically different, not merely mismatched.
            if index[0] == "x":
                icy = "uint64_t"
            elif ext == "sxtw":
                icy = "int32_t"
            else:
                icy = "uint32_t"
            ix, _c = args.setdefault(n, ("a%d" % n, icy))
            ad = "(%s + (uintptr_t)(%s) * %d)" % (b, ix, scale)
        else:
            ad = "(%s + %d)" % (b, off) if off else b

        w = LOADS[mn]
        dw = reg_width(dst)
        if dw is None:
            return None
        if w is None:
            w = dw
        else:
            w = min(w, dw)

        if dst in ("x0", "w0") or fp_kind(dst):
            # The load into the return register. Its value is the result, so it
            # must not also become a chain link. An FP destination makes the
            # function's return type float/double, which is what carries the 93
            # `ldr s0, [x8]` bodies in this shape.
            fp = fp_kind(dst)
            # An FP destination makes the function's return type float/double,
            # which is what carries the 93 `ldr s0, [x8]` bodies in this shape.
            #
            # Otherwise the loaded type is signed for a signed opcode and the
            # *value* has the destination's width, because the instruction
            # extends into the whole register. Using the destination's width for
            # the return type also subsumes narrow-signed promotion: with
            # `int16_t` as the return type AAPCS64 leaves the upper half of w0
            # unspecified, so Clang may compile `return *(int16_t *)p;` to
            # `ldrh w0, [p]` -- it did, and the body then differed from the
            # original by exactly the sign extension. The C integer-promotion
            # rule says the return is `int32_t`, which makes `ldrsh` write a
            # correct 32-bit w0 in one instruction.
            if fp is not None:
                cty = rty = fp
            elif mn in SIGNED:
                cty = SIGNED[mn]              # what is read
                rty = SIGNED_W[dw]            # what ends up in the register
            else:
                cty = rty = CT[w]
            ret = ("*(%s*)%s" % (cty, ad), rty)
            continue
        local = "t%d" % nload
        nload += 1
        # A non-return load becomes a local of the destination's width, again so
        # that a later use of it extends the same way the original does.
        if mn in SIGNED:
            cty, lty = SIGNED[mn], SIGNED_W[dw]
        else:
            cty = lty = CT[w]
        reads.append("%s %s = *(%s*)%s;" % (lty, local, cty, ad))
        state[dst] = (local, lty)

    if ret is None:
        return None

    # Parameter slots are contiguous from 0 and assigned by position, not name,
    # so a body that reads no register below x1 still takes two parameters. See
    # the same note in `gen_store_chain.build`.
    if args:
        for n in range(0, min(args)):
            args.setdefault(n, ("a%d" % n, "void*"))

    decls, codes, ptrs = [], [], 0
    for n in sorted(args):
        name, cty = args[n]
        if cty == "void*":
            codes.append("S_" if ptrs else "Pv")
            ptrs += 1
            decls.append("void* %s" % name)
        elif cty == "int32_t":
            codes.append("i")
            decls.append("int32_t %s" % name)
        elif cty == "uint64_t":
            codes.append("m")
            decls.append("uint64_t %s" % name)
        else:
            codes.append("j")
            decls.append("uint32_t %s" % name)
    sig = "".join(codes) if codes else "v"

    body_txt = list(reads) + ["return %s;" % ret[0]]
    return ("%s %s(%s) {\n    %s\n}\n"
            % (ret[1], ident, ", ".join(decls), "\n    ".join(body_txt)), sig)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--shape", default="getter-chain")
    a = ap.parse_args()

    md = MH._md()
    have = {}
    for m in MODULES:
        p = os.path.join(ROOT, "data", "matched_%s.json" % m)
        have[m] = {int(r["addr"]) for r in
                   json.load(open(p, encoding="utf-8")).get("matched", [])}

    offered = matched = 0
    reasons = collections.Counter()
    samples = []
    recs = []
    for m in MODULES:
        blob = MH.text_blob(m)
        for addr, size, name, _d in MH.load_functions(m):
            if addr in have[m]:
                continue
            ins = list(md.disasm(blob[addr:addr + size], addr))
            end = MH.effective_end(ins, size)
            if AM.shape_of(ins, end) != a.shape:
                continue
            body = ins[:end]
            got = build(body, "f_%x" % addr)
            if got is None:
                reasons["declined"] += 1
                continue
            src, sig = got
            offered += 1
            want = MH.mangle("f_%x" % addr, sig)
            with tempfile.TemporaryDirectory() as td:
                obj, err = MH.compile_batch([(src, "")], td)
                if obj is None:
                    reasons["compile failed"] += 1
                    if len(samples) < 3:
                        samples.append((m, addr, "compile: %s" % (err or "")[:48]))
                    continue
                syms = MH.obj_symbols(obj)
                code = MH.obj_text_range(obj, syms, {want}).get(want, b"")
            if not code:
                reasons["symbol not found"] += 1
                continue
            v, why = MH.compare(ins, end, list(md.disasm(code, 0)))
            if v == "match":
                matched += 1
                recs.append((m, addr, size, name, src, sig, end))
            else:
                reasons["mismatch"] += 1
                if len(samples) < 3:
                    samples.append((m, addr, why[:72]))

    print("  shape            : %s" % a.shape)
    print("  population       : %d" % (offered + reasons["declined"]))
    print("  offered          : %d" % offered)
    print("  byte-for-byte    : %d" % matched)
    if offered:
        print("  yield on offered : %.1f%%" % (100.0 * matched / offered))
    for k, v in reasons.most_common():
        print("    %-22s %5d" % (k, v))
    for m, ad, why in samples:
        print("    %-8s %#-12x %s" % (m, ad, why))

    if matched and not a.apply:
        print("\nre-run with --apply to register %d match(es)" % matched)
    elif matched:
        for m in MODULES:
            mine = [r for r in recs if r[0] == m]
            if not mine:
                continue
            p = os.path.join(ROOT, "data", "matched_%s.json" % m)
            blob = json.load(open(p, encoding="utf-8"))
            known = {int(r["addr"]) for r in blob.get("matched", [])}
            added = 0
            for _mm, addr, size, name, src, sig, end in mine:
                if addr in known:
                    continue
                blob.setdefault("matched", []).append({
                    "addr": addr, "ident": "f_%x" % addr, "module": m,
                    "name": name, "shape": a.shape, "sig": sig, "src": src,
                    "size": size, "orig_insns": end, "new_insns": end,
                })
                added += 1
            if added:
                with open(p, "w", encoding="utf-8") as fh:
                    json.dump(blob, fh, indent=1)
            print("  %-8s registered %d" % (m, added))
    return 0


if __name__ == "__main__":
    sys.exit(main())
