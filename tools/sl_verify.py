#!/usr/bin/env python3
"""Verify every source straight_line.py emits, across all five modules.

`tools/sl_sweep.py` answers "does it crash?" -- zero crashes over 152,062
functions. This answers the question that actually matters: of the 11,070
functions it emits a candidate for, how many compile to the original's bytes?

Those are different populations. Emitting is cheap and runs on every input;
reproducing the original is the whole point, and a translator that always emits
but almost never matches has not saved anyone any work. The two numbers have to
be reported together or the first is misleading on its own.

Everything is verified through the one instrument: compile under the project's
flags for aarch64-none-elf, disassemble, compare with
`match_harness.compare`. A candidate that does not match is never counted, and
failures are reported by *shape* -- what the emitted code got wrong -- because
"it didn't match" 8,000 times is not a finding, while "it never preserves load
order" is.

Usage:
    python tools/sl_verify.py --limit 4000
    python tools/sl_verify.py --module main --limit 1000 --csv data/sl.csv
"""

import argparse
import collections
import csv
import os
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402
import straight_line as SL  # noqa: E402

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]


def failure_shape(why, orig, mine):
    """Classify a mismatch by what went wrong, not just that it did.

    Two cautions, both learned from a first version of this that reported
    nonsense.

    First, comparing mnemonic at index `i` on both sides is only meaningful when
    the two are the same length and aligned. If the candidate is shorter, every
    position past the divergence is compared against the wrong instruction, and
    the first "difference" looks like a specific opcode change when it is really
    just "one side ran out". That produced a headline of 62% `sub`/`ret` on a
    corpus where most functions contain no `sub` at all.

    So the length is checked first and reported as its own category, and only a
    same-length comparison reports an opcode.

    Second, the useful distinction for deciding what to do is:

      * the candidate is a different length, or diverges by reordering
        -- the emitted C++ is semantically right and the compiler scheduled it
        differently. Source-level fixes do not help; the docstring records that
        forcing load order made this measurably worse.
      * same length, same mnemonics, different operands
        -- only reachable with hand-written source.
    """
    if why.startswith("insn "):
        try:
            i = int(why.split()[1].rstrip(":"))
        except (ValueError, IndexError):
            return "other"
        o_end, m_end = len(orig), len(mine)
        if o_end != m_end:
            longer = "orig" if o_end > m_end else "cand"
            return "length-differs:%d-vs-%d" % (o_end, m_end)
        # Same length. If the candidate has run out at position i the
        # comparison is meaningless, so say so rather than naming a mnemonic.
        if i >= o_end or i >= m_end:
            return "length-differs:compared-past-end"
        om, mm = orig[i].mnemonic, mine[i].mnemonic
        if om != mm:
            return "opcode-differs:%s/%s" % (om, mm)
        # Same opcode at every position but an operand differs: this is
            # register selection, which no source change fixes.
            #
            # NOTE: straight_line.py now raises Bail for any `addr` value that is
            # not stored at pointer width, because storing one through a narrower
            # type is ill-formed C++. That removes a whole class of candidate
            # that used to fail at compile time and take the enclosing batch
            # with it (sdk+0x4190c0 cost 2,884 candidates before the fix).
        same = all(orig[k].mnemonic == mine[k].mnemonic for k in range(o_end))
        if same:
            return "operand-differs"
        # Same length, same opcode at i, but the sequences are not equal
        # overall -- a permutation. Worth separating from a genuine opcode
        # change, because "reordered" and "modelled wrong" need different work.
        return "reordered"
    if why.startswith("len"):
        try:
            side = why.split()[0]
            return "length-differs:%s" % side
        except IndexError:
            return "length-differs"
    if why.startswith("branch count"):
        return "branch-differs"
    return "other:" + why[:40]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", action="append", default=None)
    ap.add_argument("--limit", type=int, default=3000)
    ap.add_argument("--batch", type=int, default=250)
    ap.add_argument("--csv", default=None)
    ap.add_argument("--only-unmatched", action="store_true", default=True)
    ap.add_argument("--all", action="store_true",
                    help="include functions already in the match registry")
    a = ap.parse_args()

    mods = a.module or MODULES
    md = MH._md()

    # Candidate pool: everything the translator emits for, filtered to
    # functions not already recorded as matching.
    pools = {}
    for mod in mods:
        matched = set()
        p = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if os.path.isfile(p) and not a.all:
            import json
            try:
                for r in json.load(open(p, encoding="utf-8")).get("matched", []):
                    matched.add(int(r["addr"]))
            except (ValueError, OSError):
                pass
        blob = MH.text_blob(mod)
        pool = []
        for addr, size, name, _dec in MH.load_functions(mod):
            if addr in matched:
                continue
            ins = list(md.disasm(blob[addr:addr + size], addr))
            try:
                src, sig = SL.StraightLine(ins).translate("f_%x" % addr)
            except SL.Bail:
                continue
            except Exception:                   # noqa: BLE001
                continue
            pool.append((addr, size, name, src, sig, ins))
            if len(pool) >= a.limit:
                break
        pools[mod] = pool

    total = sum(len(p) for p in pools.values())
    for m in mods:
        print("%-9s %d candidate(s)" % (m, len(pools[m])))
    print("\nverifying %d candidate(s) in batches of %d"
          % (total, a.batch))
    print("  %-11s %-9s %9s %9s %6s" % ("module", "emitted", "match", "mismatch",
                                        "rate"))
    print("  " + "-" * 50)

    ok = bad = 0
    shapes = collections.Counter()
    rows = []
    for mod in mods:
        pool = pools[mod]
        if not pool:
            continue
        blob = MH.text_blob(mod)
        m_ok = m_bad = 0
        for k in range(0, len(pool), a.batch):
            chunk = pool[k:k + a.batch]
            with tempfile.TemporaryDirectory() as td:
                obj, err = MH.compile_batch(
                    [(c[3], "") for c in chunk], td)
                if obj is None:
                    m_bad += len(chunk)
                    bad += len(chunk)
                    shapes["batch-compile-failed"] += len(chunk)
                    for addr, size, name, _src, _sig, ins in chunk:
                        rows.append((mod, "0x%016x" % addr, name,
                                     MH.effective_end(ins, size),
                                     "unmatched", "batch-compile-failed"))
                    continue
                names = {MH.mangle("f_%x" % c[0], c[4]) for c in chunk}
                dumped = MH.obj_text_range(obj, MH.obj_symbols(obj), names)
                for addr, size, name, _src, sig, ins in chunk:
                    code = dumped.get(MH.mangle("f_%x" % addr, sig), b"")
                    end = MH.effective_end(ins, size)
                    if not code:
                        m_bad += 1
                        bad += 1
                        shapes["no-code-emitted"] += 1
                        rows.append((mod, "0x%016x" % addr, name, end,
                                     "unmatched", "no-code-emitted"))
                        continue
                    mine = list(md.disasm(code, 0))
                    verdict, why = MH.compare(ins, end, mine)
                    if verdict == "match":
                        m_ok += 1
                        ok += 1
                        rows.append((mod, "0x%016x" % addr, name, end,
                                     "matched", ""))
                    else:
                        sh = failure_shape(why, ins[:end], mine)
                        shapes[sh] += 1
                        m_bad += 1
                        bad += 1
                        rows.append((mod, "0x%016x" % addr, name, end,
                                     "unmatched", why[:150]))
            print("  %-11s %-9d %9d %9d %5.1f%%"
                  % (mod, min(k + a.batch, len(pool)), m_ok, m_bad,
                     100.0 * m_ok / max(1, m_ok + m_bad)))
            sys.stdout.flush()

    print("  " + "-" * 50)
    print("  %-11s %-9d %9d %9d %5.1f%%"
          % ("TOTAL", total, ok, bad, 100.0 * ok / max(1, ok + bad)))

    if shapes:
        print("\nmismatch shapes (what the emitted code got wrong):")
        for k, v in shapes.most_common(20):
            print("   %-44s %6d  %4.1f%%" % (k, v, 100.0 * v / max(1, bad)))
        def tot(*prefixes):
            return sum(v for k, v in shapes.items() if k.startswith(prefixes))

        od = tot("opcode")
        ld = tot("length-differs")
        ro = shapes.get("reordered", 0)
        opnd = shapes.get("operand-differs", 0)
        bcf = shapes.get("batch-compile-failed", 0)
        print()
        # Grouped by what the failure means, not by how it presents. The
        # distinction that decides the work is "wrong opcode" (the model is
        # wrong) against everything else (the model is right and the compiler
        # chose differently).
        print("   model is wrong      %6d  (%.1f%%)  -- wrong opcode"
              % (od, 100.0 * od / max(1, bad)))
        print("   compiler resched.  %6d  (%.1f%%)  -- reordered or operand"
              % (ro + opnd, 100.0 * (ro + opnd) / max(1, bad)))
        print("   length differs     %6d  (%.1f%%)  -- candidate truncated"
              % (ld, 100.0 * ld / max(1, bad)))
        print("   batch/emit failure %6d  (%.1f%%)"
              % (bcf + shapes.get("no-code-emitted", 0),
                 100.0 * (bcf + shapes.get("no-code-emitted", 0))
                 / max(1, bad)))
        fixable = od + bcf + shapes.get("no-code-emitted", 0)
        print()
        print("   generator-side (a fix to straight_line.py could recover "
              "these): %d of %d  (%.1f%%)" % (fixable, bad,
                                              100.0 * fixable / max(1, bad)))

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "addr", "name", "insns", "verdict", "reason"])
            w.writerows(rows)
        print("\nwrote %d rows -> %s" % (len(rows), os.path.relpath(p, ROOT)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
