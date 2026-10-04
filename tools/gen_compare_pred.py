#!/usr/bin/env python3
"""Generator for the `compare` shape: a field test returned as a bool.

257 of the 398 unmatched `compare` bodies share one skeleton -- some arithmetic,
then `cmp`, then `cset w0, COND`, then `ret`:

    sub  cmp cset ret            22      adrp ldr ldr cmp cset ret     18
    ldr ldrb cmp cset ret        16      ldr ldr cmp cset ret          16
    ...

That is 64.6% of the shape, and the shape is 0.3% of the project, so this is the
largest single pool still reachable without a relocated memory image.

## What it takes

The prefix is evaluated symbolically into a C expression, so `ldr`/`ldrb` become
dereferences and `sub`/`and`/`mov` become arithmetic. Then the AArch64 condition
code picks both the operator and the signedness, which is the part that cannot be
guessed:

| cset condition | C operator | operand type |
|---|---|---|
| `eq` `ne` | `==` `!=` | either; the instruction is identical |
| `lo` `hs` `hi` `ls` | `<` `>=` `>` `<=` | **unsigned** |
| `lt` `ge` `gt` `le` | `<` `>=` `>` `<=` | **signed** |

Getting the signedness wrong is not a near miss: `lo` after `cmp` means unsigned
lower-or-equal, so a signed `<` emits `cset lt` and a different condition code.

Uses the same conventions as the existing `gen_fp_compare`: return `bool`, and
return **parameter codes only** for the signature, because a builtin return type
does not appear in the Itanium mangling.

## Declines rather than guesses

- `adrp`-rooted prefixes, which need resolved globals (the relocated memory image
  is still missing).
- `movk`-partial constants, unless the full constant is already known.
- Branches in the prefix.
- Signed/unsigned conditions on floats, for the same NaN reason `gen_fp_compare`
  documents.

Usage:
    python tools/gen_compare_pred.py            # report only
    python tools/gen_compare_pred.py --apply    # register the matches
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

import match_harness as MH  # noqa: E402
import auto_match as AM     # noqa: E402
import straight_line as SL  # noqa: E402

MODULES = ["main", "sdk", "subsdk0", "subsdk1"]

UT = {4: "uint32_t", 8: "uint64_t"}
IT = {4: "int32_t", 8: "int64_t"}

# Load mnemonic -> (C type, access width in bytes)
LOADS = {
    "ldr": ("uint64_t", 8), "ldrb": ("uint8_t", 1), "ldrh": ("uint16_t", 2),
    "ldrsb": ("int8_t", 1), "ldrsh": ("int16_t", 2), "ldrsw": ("int32_t", 4),
    "ldur": ("uint64_t", 8),
}

BINOP = {"sub": "-", "add": "+", "and": "&", "orr": "|", "eor": "^"}

# cset condition -> (C operator, signedness)
CONDS = {
    "eq": ("==", None), "ne": ("!=", None),
    "lo": ("<", "unsigned"), "hs": (">=", "unsigned"),
    "hi": (">", "unsigned"), "ls": ("<=", "unsigned"),
    "lt": ("<", "signed"), "ge": (">=", "signed"),
    "gt": (">", "signed"), "le": ("<=", "signed"),
}


def split_ops(s):
    return SL.split_ops(s)


def parse_mem(op):
    m = re.match(r"^\[\s*([A-Za-z0-9]+)\s*(?:,\s*#(-?(?:0x)?[0-9a-fA-F]+)\s*)?\]$", op)
    if not m:
        return None, None
    off = m.group(2)
    if off is None:
        return m.group(1), 0
    return m.group(1), int(off, 16) if off.lower().startswith("0x") else int(off)


def reg_width(r):
    """8 for x*, 4 for w*, None otherwise."""
    r = r.strip()
    if r == "xzr":
        return 8
    if r == "wzr":
        return 4
    if re.match(r"^[xw][0-9]+$", r):
        return 8 if r[0] == "x" else 4
    return None


def is_imm(tok):
    return tok.strip().startswith("#")


def imm_value(tok):
    t = tok.strip().lstrip("#")
    if t.startswith("-"):
        return -int(t[1:], 16) if t[1:].lower().startswith("0x") else -int(t[1:])
    return int(t, 16) if t.lower().startswith("0x") else int(t)


def evaluate(body):
    """Prefix instructions -> (state, params); None to decline.

    `state` maps a register name to (expression, width).
    """
    state = {}
    ptr_args = set()
    for ins in body:
        mn = ins.mnemonic
        ops = split_ops(ins.op_str)

        if mn in LOADS:
            cty, _w = LOADS[mn]
            dst = ops[0]
            dw = reg_width(dst)
            if dw is None:
                return None
            base, off = parse_mem(ops[1])
            if base is None:
                return None
            # The base is either a pointer *argument* or a register holding a
            # value an earlier load put there.
            #
            # Getting this wrong produces plausible, wrong code rather than a
            # decline. The first version assumed every base was an argument, so
            # `ldr x8,[x0,#0x40] ; ldrh w8,[x8,#0x18] ; cmp ; cset` emitted a
            # nine-parameter function using `a8`, and compiled to a body that
            # reloaded `x0` from the stack:
            #
            #     bool f(void* a0, uint64_t unused1, ..., void* a8) {
            #       return (uint64_t)(*(uint16_t*)((char*)a8 + 24)) == 1; }
            #     ->  ldr x8, [sp] ; ldrh w8, [x8, #0x18] ; ...
            #
            # So: a base already in `state` is a loaded pointer, and only a
            # base that is not is an argument.
            if base in state:
                ad = "(char*)(%s)" % state[base][0]
            elif re.match(r"^[xw][0-9]+$", base):
                n = int(base[1:])
                if n > 7:
                    return None
                ptr_args.add(n)
                ad = "(char*)a%d" % n
            else:
                return None
            # Applied once, here. Doing it inside the argument branch as well
            # produced `((char*)a0 + 64) + 64` -- a doubled displacement, which
            # compiles cleanly to the wrong address and so matches nothing while
            # looking like a codegen problem.
            if off:
                ad = "(%s + %d)" % (ad, off)
            # Destination width follows the *register class*, not the access
            # width: `ldrh w8` yields a 32-bit value even though it read 2 bytes.
            state[dst] = ("*(%s*)%s" % (cty, ad), dw)

        elif mn in BINOP:
            dst = ops[0]
            dw = reg_width(dst)
            if dw is None:
                return None
            a_tok, b_tok = ops[1], ops[2]
            if is_imm(a_tok):
                lhs, lzero = str(imm_value(a_tok)), True
            elif a_tok in state:
                lhs, lzero = state[a_tok][0], False
            else:
                return None
            if is_imm(b_tok):
                rhs = str(imm_value(b_tok))
            elif b_tok in state:
                rhs = state[b_tok][0]
            else:
                return None
            # A 32-bit op on a 64-bit-loaded value narrows; keep it explicit.
            if lzero:
                state[dst] = ("((%s)(%s %s %s))" % (UT[dw], lhs, BINOP[mn], rhs), dw)
            else:
                state[dst] = ("(%s %s %s)" % (lhs, BINOP[mn], rhs), dw)

        elif mn == "mov":
            dst, src = ops[0], ops[1]
            dw = reg_width(dst)
            if dw is None:
                return None
            if is_imm(src):
                state[dst] = (str(imm_value(src)), dw)
            elif src in state:
                state[dst] = state[src]
            else:
                return None

        elif mn in ("movz", "movn"):
            dst = ops[0]
            dw = reg_width(dst)
            if dw is None:
                return None
            v = imm_value(ops[1])
            if mn == "movn":
                v = ~v & ((1 << (dw * 8)) - 1)
            state[dst] = (str(v), dw)

        else:
            return None

    return state, ptr_args


def build(body, ident):
    """Return (src, sig) or None."""
    if len(body) < 4:
        return None
    if body[-1].mnemonic != "ret":
        return None
    if body[-2].mnemonic != "cset":
        return None
    if body[-3].mnemonic != "cmp":
        return None

    cset_ops = split_ops(body[-2].op_str)
    if len(cset_ops) != 2 or cset_ops[0].strip() != "w0":
        return None
    cond = cset_ops[1].strip()
    if cond not in CONDS:
        return None
    op, signedness = CONDS[cond]

    got = evaluate(body[:-3])
    if got is None:
        return None
    state, ptr_args = got

    cmp_ops = split_ops(body[-3].op_str)
    if len(cmp_ops) != 2:
        return None

    def operand(tok):
        if is_imm(tok):
            return None
        if tok in state:
            return state[tok]
        return None

    la, lb = operand(cmp_ops[0]), operand(cmp_ops[1])
    width = None
    if la and lb:
        width = la[1] if la[1] == lb[1] else max(la[1], lb[1])
    elif la or lb:
        present = la or lb
        width = present[1]
        other = imm_value(cmp_ops[1] if present is la else cmp_ops[0])
        empty = (str(other), width)
        la, lb = (la, empty) if la else (empty, lb)
    else:
        return None

    if width not in UT:
        return None

    if not ptr_args:
        return None
    decls, codes, names, ptrs = [], [], {}, 0
    for k in range(max(ptr_args) + 1):
        if k in ptr_args:
            codes.append("S_" if ptrs else "Pv")
            ptrs += 1
            decls.append("void* a%d" % k)
        else:
            codes.append("m")
            decls.append("uint64_t unused%d" % k)
        names[k] = "a%d" % k
    sig = "".join(codes) if codes else "v"

    cty = (IT if signedness == "signed" else UT)[width]
    return ("bool %s(%s) { return (%s)(%s) %s (%s)(%s); }\n"
            % (ident, ", ".join(decls), cty, la[0], op, cty, lb[0]), sig)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
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
            if AM.shape_of(ins, end) != "compare":
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
                    if len(samples) < 4:
                        samples.append((m, addr, "compile: %s" % (err or "")[:50]))
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
                if len(samples) < 4:
                    samples.append((m, addr, why[:76]))

    print("  compare population : %d" % (offered + reasons["declined"]))
    print("  offered           : %d" % offered)
    print("  byte-for-byte     : %d" % matched)
    if offered:
        print("  yield on offered  : %.1f%%" % (100.0 * matched / offered))
    print()
    for k, v in reasons.most_common():
        print("    %-24s %5d" % (k, v))
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
                    "name": name, "shape": "compare-pred", "sig": sig,
                    "src": src, "size": size,
                    "orig_insns": end, "new_insns": end,
                })
                added += 1
            if added:
                with open(p, "w", encoding="utf-8") as fh:
                    json.dump(blob, fh, indent=1)
            print("  %-8s registered %d" % (m, added))
    return 0


if __name__ == "__main__":
    sys.exit(main())
