#!/usr/bin/env python3
"""Register every straight-line candidate that actually matches, in one pass.

Why this exists
---------------
`tools/sl_verify.py` measures a conversion rate and throws the winners away.
Running it to find out whether the translator works, then running something else
to collect the results, means measuring and harvesting twice -- and the two runs
can disagree, because anything fixed in between lands in one and not the other.

This does both at once: compile each batch, compare against the original, and
write the matching candidates straight into `data/matched_<mod>.json`. A
candidate is only registered if `match_harness.compare` returns a match, so the
registry cannot gain an entry that does not reproduce the original.

Registration is additive and idempotent. Existing entries are left alone, and a
function already present is skipped rather than rewritten, so this is safe to
re-run after a translator fix -- which is the point, since fixing the translator
changes what verifies.

The `ident` recorded is the one the translator used (`f_<addr>`), which
`decomp_project.load_matched` then qualifies with the module name to avoid the
duplicate-symbol collision that would otherwise occur between two NSO modules
both based at 0.

Usage:
    python tools/sl_register.py --limit 6000
    python tools/sl_register.py --module main --limit 2000 --dry-run
"""

import argparse
import collections
import json
import os
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402
import straight_line as SL  # noqa: E402

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]


def already(mod):
    """addr -> record, from the registry this writes into."""
    p = os.path.join(ROOT, "data", "matched_%s.json" % mod)
    out = {}
    if os.path.isfile(p):
        try:
            blob = json.load(open(p, encoding="utf-8"))
            for r in blob.get("matched", []):
                try:
                    out[int(r["addr"])] = r
                except (KeyError, TypeError, ValueError):
                    continue
        except (ValueError, OSError):
            pass
    return out


def candidates(mod, matched, limit, md):
    """Every function the translator emits a candidate for."""
    blob = MH.text_blob(mod)
    out = []
    for addr, size, name, _dec in MH.load_functions(mod):
        if addr in matched:
            continue
        ins = list(md.disasm(blob[addr:addr + size], addr))
        try:
            src, sig = SL.StraightLine(ins).translate("f_%x" % addr)
        except SL.Bail:
            continue
        except Exception:                       # noqa: BLE001
            continue
        out.append((addr, size, name, src, sig, ins))
        if limit and len(out) >= limit:
            break
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", action="append", default=None)
    ap.add_argument("--limit", type=int, default=4000)
    ap.add_argument("--batch", type=int, default=250)
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()

    mods = a.module or MODULES
    md = MH._md()

    grand_ok = grand_try = 0
    for mod in mods:
        reg_path = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        reg = already(mod)
        n_before = len(reg)
        pool = candidates(mod, reg, a.limit, md)
        if not pool:
            print("%-9s no new candidates" % mod)
            continue

        new_recs = []
        ok = tried = 0
        blob = MH.text_blob(mod)
        for k in range(0, len(pool), a.batch):
            chunk = pool[k:k + a.batch]
            with tempfile.TemporaryDirectory() as td:
                obj, err = MH.compile_batch([(c[3], "") for c in chunk], td)
                if obj is None:
                    tried += len(chunk)
                    continue
                names = {MH.mangle("f_%x" % c[0], c[4]) for c in chunk}
                dumped = MH.obj_text_range(obj, MH.obj_symbols(obj), names)
                for addr, size, name, src, sig, ins in chunk:
                    tried += 1
                    code = dumped.get(MH.mangle("f_%x" % addr, sig), b"")
                    if not code:
                        continue
                    mine = list(md.disasm(code, 0))
                    end = MH.effective_end(ins, size)
                    verdict, _why = MH.compare(ins, end, mine)
                    if verdict != "match":
                        continue
                    ok += 1
                    new_recs.append({
                        "module": mod,
                        "addr": addr,
                        "size": size,
                        "name": name,
                        "shape": "straight-line",
                        "ident": "f_%x" % addr,
                        "sig": sig,
                        "src": src,
                        "orig_insns": end,
                        "new_insns": len(mine),
                    })
            print("  %-9s %4d/%4d verified so far"
                  % (mod, ok, tried))
            sys.stdout.flush()

        rate = 100.0 * ok / max(1, tried)
        print("%-9s %d candidate(s), %d verified (%.1f%%); registry %d -> %d"
              % (mod, tried, ok, rate, n_before, n_before + len(new_recs)))

        if not a.dry_run and new_recs:
            blob_j = json.load(open(reg_path, encoding="utf-8"))
            blob_j.setdefault("matched", []).extend(new_recs)
            with open(reg_path, "w", encoding="utf-8") as f:
                json.dump(blob_j, f, indent=1)
            print("           wrote %d record(s) to %s"
                  % (len(new_recs), os.path.relpath(reg_path, ROOT)))
        grand_ok += ok
        grand_try += tried

    print()
    print("TOTAL %d verified of %d candidates (%.1f%%)"
          % (grand_ok, grand_try, 100.0 * grand_ok / max(1, grand_try)))
    if not a.dry_run and grand_ok:
        print("\nnext:")
        print("  python tools/decomp_project.py --all")
        print("  python tools/prog_cmake.py")
        print("  python tools/build_nx64.py")
    return 0


if __name__ == "__main__":
    sys.exit(main())
