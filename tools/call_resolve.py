"""Resolve direct call targets in unmatched bodies to recovered functions.

`data/functions.csv` is the complete symbol table for *targets*: 152,062 entries of
(module, addr, name, size, decomp_name). What was missing was resolving an
arbitrary `bl` immediate inside an untranslated body to one of those entries.

Measurement over every `bl` in every unmatched body, all four modules:

    bl sites                              514,305
      -> resolves in functions.csv        329,700   (64.1%)
      -> unresolved                       184,605   (35.9%)

The unresolved targets cluster at the very end of `.text` -- 0x17e8f10,
0x17e8f30 in `main`, against a `.text` ending at 0x17ed000. Those are import
thunks and PLT stubs for library code outside the module, so they have no entry
and cannot acquire one.

## A decoding trap worth recording

Capstone renders a branch operand as the **absolute target**: `bl #0x1c0`. Treating
that as a PC-relative displacement and adding it to the instruction address gives
0x254 + 0x1c0 = 0x414, which is not a function start -- so an implementation that
"decodes the 26-bit signed immediate and adds it to the address" (the obvious
description) resolves almost nothing: 2,398 of 514,305, a 0.5% rate that looks
like a damning verdict on the whole approach.

Both the naive `pc + imm` form and a correct one were measured here. The correct
one is `int(op_str after '#')`. Only one of the two is right, and the wrong one
produces a number bad enough to be believed.

Addresses are keyed by `(module, addr)`: every NSO is based at 0, so the same
address means different things in different modules.
"""
import csv, os, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


_TABLE = None


def load_table(csv_path=None):
    """(module, addr) -> (decomp_name, name).

    Cached process-wide: the CSV has 152,062 rows and the translator calls this
    once per body, so re-reading it each time would dominate runtime.
    """
    global _TABLE
    if _TABLE is not None and csv_path is None:
        return _TABLE
    path = csv_path or os.path.join(ROOT, "data", "functions.csv")
    tbl = {}
    with open(path, encoding="utf-8") as f:
        for r in csv.DictReader(f):
            tbl[(r["module"], int(r["addr"], 16))] = (r["decomp_name"], r["name"])
    if csv_path is None:
        _TABLE = tbl
    return tbl


def call_target(insn):
    """Absolute target of a direct `bl`/`b`, or None.

    Reads the operand text rather than capstone's `detail`: the shared
    disassembler does not enable it, and touching `.operands` raises
    CS_ERR_DETAIL.
    """
    txt = (insn.op_str or "").strip()
    if "#" not in txt:
        return None
    try:
        return int(txt.split("#")[1].strip(), 16)   # already absolute
    except ValueError:
        return None


def resolve(module, insn, tbl=None):
    tbl = tbl if tbl is not None else load_table()
    t = call_target(insn)
    if t is None:
        return None
    return tbl.get((module, t))


if __name__ == "__main__":
    import collections, json
    sys.path.insert(0, os.path.join(ROOT, "tools"))
    import match_harness as MH
    tbl = load_table()
    md = MH._md()
    stats = collections.Counter()
    for m in ("main", "sdk", "subsdk0", "subsdk1"):
        p = os.path.join(ROOT, "data", "matched_%s.json" % m)
        have = {int(r["addr"]) for r in
                json.load(open(p, encoding="utf-8")).get("matched", [])}
        funcs = MH.load_functions(m)
        blob = MH.text_blob(m)
        for addr, size, name, _d in funcs:
            if addr in have:
                continue
            ins = list(md.disasm(blob[addr:addr + size], addr))
            for i in ins[:MH.effective_end(ins, size)]:
                if i.mnemonic != "bl":
                    continue
                stats["bl sites"] += 1
                tgt = call_target(i)
                if tgt is None:
                    stats["  -> operand not a literal"] += 1
                elif (m, tgt) in tbl:
                    stats["  -> resolves"] += 1
                else:
                    stats["  -> unresolved"] += 1
    for k, v in stats.most_common():
        print("  %-32s %8d" % (k, v))
