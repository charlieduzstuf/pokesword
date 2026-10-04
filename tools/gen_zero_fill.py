#!/usr/bin/env python3
"""Generator for the zero-fill part of the `setter-chain` shape.

`setter-chain` is 227 unmatched bodies, and its largest groups are pure zero
stores:

    stp str ret      25        str str ret     10
    stp stp ret      19        str stp ret      9

A field clear, i.e. `*(uint64_t *)p = 0;`. No arithmetic, so the instruction
stream fully determines the source -- the only question is how to stop Clang
reordering the stores.

## Two levers, both measured

**A 16-byte struct type is what produces `stp`.** Clang will not pair
general-purpose registers for two scalar zero stores:

| source | result |
|---|---|
| two `*(uint64_t*)p = 0;` | `str xzr, [x0] ; str xzr, [x0, #8]` -- no pair |
| two 16-byte struct stores, no barrier | `stp [x0, #0x10] ; stp [x0]` -- **reversed** |
| two 16-byte struct stores, barrier between | `stp [x0] ; stp [x0, #0x10]` -- **as written** |

So the barrier is not decoration here: without it Clang emits the same two
instructions in the opposite order. The stores are emitted in the order the
original used, taken from the instruction stream, never sorted by offset.

This is the same two levers as `gen_struct_copy` and the 26 `setter-chain` bodies
repaired in `decomp/docs/flag_fidelity.md`. The difference there was the *flag set*
rather than the source form; here the source form was the whole problem.

## Base registers may be loaded pointers

`stp xzr, xzr, [x8, #8] ; str xzr, [x8]` has `x8` holding a pointer an earlier
`ldr` produced, not argument 8. Treating every base as an argument produces a body
that reloads the wrong thing -- the identical bug `gen_compare_pred` had. A base
already holding a loaded value is a loaded pointer; only a base that is not is an
argument.

## Declines rather than guesses

- Stores of a *loaded* register: that is a copy, and `gen_struct_copy` owns it.
- Floating-point stores (`str s0`): a different domain, and silently zeroing an
  `s` register would be wrong.
- Any prefix opcode outside the small load set, and stack traffic.

Usage:
    python tools/gen_zero_fill.py            # report only
    python tools/gen_zero_fill.py --apply    # register the matches
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

BARRIER = '__asm__ __volatile__("" ::: "memory");'
STRUCT_DECL = "struct u64x2 { uint64_t a, b; };"

# store mnemonic -> the zero register it uses. The *access width* comes from that
# register, not from the mnemonic: `str` with `wzr` clears four bytes and `str`
# with `xzr` clears eight, so both appear under the same opcode.
ZERO_STORES = {"str", "strb", "strh"}


def zero_store_width(mn, src):
    """Bytes cleared by `mn src, [..]`."""
    s = src.strip()
    if s == "xzr":
        return 8
    if s == "wzr":
        return {"str": 4, "strh": 2, "strb": 1}.get(mn)
    return None


LOADS = {"ldr": 8, "ldrb": 1, "ldrh": 2, "ldrsb": 1, "ldrsh": 2, "ldrsw": 4,
         "ldur": 8}
CT = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}


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


def is_zero(tok):
    return tok.strip() in ("xzr", "wzr", "0", "#0")


def build(body, ident):
    """Return (src, sig) or None."""
    state = {}        # register -> C expression holding a pointer
    ptr_args = set()
    writes = []       # emitted store statements, in the original's order

    for ins in body:
        mn = ins.mnemonic
        if mn == "ret":
            continue
        ops = split_ops(ins.op_str)

        if mn in LOADS:
            dst = ops[0]
            base, off = parse_mem(ops[1])
            if base is None or base not in ("sp",) and not re.match(r"^[xw]\d+$", base or ""):
                return None
            if base == "sp":
                return None                  # stack traffic is out of scope
            w = LOADS[mn]
            if base in state:
                ad = "(char*)(%s)" % state[base]
            else:
                n = int(base[1:])
                if n > 7:
                    return None
                ptr_args.add(n)
                ad = "(char*)a%d" % n
            if off:
                ad = "(%s + %d)" % (ad, off)
            state[dst] = "*(%s*)%s" % (CT[w], ad)
            continue

        if mn == "stp":
            s1, s2 = ops[0], ops[1]
            b, off = parse_mem(ops[2])
            if b is None or b == "sp":
                return None
            if not (is_zero(s1) and is_zero(s2)):
                return None                  # a copy, not a clear
            if b in state:
                ad = "(char*)(%s)" % state[b]
            else:
                n = int(b[1:])
                if n > 7:
                    return None
                ptr_args.add(n)
                ad = "(char*)a%d" % n
            if off:
                ad = "(%s + %d)" % (ad, off)
            writes.append("*(struct u64x2*)%s = (struct u64x2){ 0, 0 };" % ad)
            continue

        if mn in ZERO_STORES:
            src = ops[0]
            b, off = parse_mem(ops[1])
            if b is None or b == "sp":
                return None
            if not is_zero(src):
                return None                  # a copy, not a clear
            w = zero_store_width(mn, src)
            if w is None:
                return None
            if b in state:
                ad = "(char*)(%s)" % state[b]
            else:
                n = int(b[1:])
                if n > 7:
                    return None
                ptr_args.add(n)
                ad = "(char*)a%d" % n
            if off:
                ad = "(%s + %d)" % (ad, off)
            writes.append("*(%s*)%s = 0;" % (CT[w], ad))
            continue

        return None

    if not writes or not ptr_args:
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

    head = [STRUCT_DECL] if any("u64x2" in w for w in writes) else []
    stmts = head
    for i, w in enumerate(writes):
        if i:
            stmts.append(BARRIER)
        stmts.append(w)
    return ("void %s(%s) {\n    %s\n}\n"
            % (ident, ", ".join(decls), "\n    ".join(stmts)), sig)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--shape", default="setter-chain")
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
                    samples.append((m, addr, why[:74]))

    print("  shape              : %s" % a.shape)
    print("  population         : %d" % (offered + reasons["declined"]))
    print("  offered            : %d" % offered)
    print("  byte-for-byte      : %d" % matched)
    if offered:
        print("  yield on offered   : %.1f%%" % (100.0 * matched / offered))
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
                    "name": name, "shape": a.shape + "-zero", "sig": sig,
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
