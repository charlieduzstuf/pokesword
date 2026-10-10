"""Census the compile-but-not-byte-identical population, and queue it for
semantic matching.

## Why this population is the fast road

`tools/auto_match.py` already generates C for every candidate, compiles it with
Clang 5.0.1, and then compares the result byte-for-byte against the original.
`verify()` returns the generated `src` alongside a `verdict`. Everything with a
verdict other than `match` is therefore a body we have *already* expressed in C
and *already* compiled -- the only thing that failed was Clang's instruction
choice.

That is exactly the population `tools/sem_match.py` is built for. It emulates both
the original bytes and the candidate's compiled bytes under Unicorn with the same
arguments and asks whether they agree on observable behaviour. So claiming a
semantic match needs no new C generation at all: it reuses candidates that already
exist.

This is the shortest available route to a larger number, and it is deliberately
chosen over generating C for the big blocked shapes (`call/3br/1ret` and friends,
43,831 bodies). Those need call lowering and structured control flow before a
single candidate can be written. This population needs neither.

## What this does NOT do

It does not count anything. Semantic matches are recorded under a separate marker
(`~` on `decomp_name`) and reported on their own line by `match_progress.py`. The
headline figure stays byte-identical, because a semantic match and a byte-identical
one are not the same claim and averaging them would overstate what has been
achieved.

Usage:
    python tools/sem_census.py                  # histogram only
    python tools/sem_census.py --queue work/sem_queue.json
"""

import argparse
import collections
import io
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

MODULES = ("main", "sdk", "subsdk0", "subsdk1")

# Verdicts that mean "we have compilable C in hand". `compile-error` and `nocode`
# do not: there is nothing to compare.
HAVE_CODE = ("mismatch",)


def verify_isolated(cands, module, batch=350):
    """Compile + byte-compare candidates, keeping every batch that partly works.

    `AM.verify` is not usable here, and the reason is worth recording.

    It compiles a batch of ~350. One candidate whose generated C is ill-formed
    makes the whole batch fail, and `AM.verify` then returns `None` -- so the
    census for that module reads *zero*. That is exactly what happened to `main`:
    19,658 candidates collected, no verdicts at all, because of one body that
    emitted

    return ... + (((((char *)(char*)(p0) + ...) << 4));
    error: invalid operands to binary expression ('char *' and 'int')

    and verify labelled it `collision across 350 candidates`, which is a
    misdiagnosis: the diagnostic belongs to a single body, not to a collision
    between two of them.

    `compile_batch_isolated` already bisects a failing batch and returns the
    *survivors*. Calling it and using its return value instead of the original
    list keeps the ~95% that compile, so one bad body costs one body. That is the
    same guard the translator needs on every new construct, and it is why the
    batch size here is deliberately not larger.
    """
    import match_harness as MH
    import shutil

    out = []
    workdir = os.path.join(ROOT, "work", "census_tmp")
    blob = MH.text_blob(module)
    lost = 0
    for i in range(0, len(cands), batch):
        chunk = cands[i:i + batch]
        if os.path.isdir(workdir):
            shutil.rmtree(workdir, ignore_errors=True)
        os.makedirs(workdir, exist_ok=True)
        head = "".join("uint64_t %s();\n" % c["ident"] for c in chunk)
        pairs = [(c["ident"], c["src"]) for c in chunk]
        good, dropped, hard = MH.compile_batch_isolated(pairs, workdir, head=head)
        lost += len(dropped)
        if hard and not good:
            continue
        if not good:
            continue
        obj, err = MH.compile_batch(good, workdir, head=head)
        if not obj:
            lost += len(good)
            continue
        syms = MH.obj_symbols(obj)
        want = {MH.mangle(c["ident"], c["sig"]): c for c in good}
        code = MH.obj_text_range(obj, syms, list(want))
        for mangled, c in want.items():
            cand = code.get(mangled) or b""
            orig = blob[c["addr"]:c["addr"] + c["size"]]
            r = dict(c)
            r["new_insns"] = len(cand) // 4
            if not cand or not orig:
                r["verdict"] = "nocode"
                r["reason"] = "no bytes for %s" % mangled
            elif cand == orig:
                r["verdict"] = "match"
                r["reason"] = ""
            else:
                r["verdict"] = "mismatch"
                r["reason"] = "%d vs %d insns" % (len(cand) // 4,
                                                  len(orig) // 4)
            out.append(r)
        print("    %-8s %6d/%6d verified (dropped %d)"
              % (module, len(out), min(i + batch, len(cands)), lost))
    return out, lost


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default=None)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--batch", type=int, default=700)
    ap.add_argument("--queue", default=None,
                    help="write every compilable non-match here for the "
                         "semantic matcher to consume")
    ap.add_argument("--max-src", type=int, default=4096,
                    help="skip candidates whose C is longer than this; a very "
                         "large body is slow to emulate and rarely worth it")
    a = ap.parse_args()

    import auto_match as AM
    import match_harness as MH

    mods = (a.module,) if a.module else MODULES
    queue = []
    per_shape = collections.defaultdict(collections.Counter)
    grand = collections.Counter()
    blobs = {}

    for mod in mods:
        blobs[mod] = MH.text_blob(mod)
        shapes = None                      # None = every shape
        cands, counts, skipped = AM.collect(mod, shapes, a.limit)
        if not cands:
            print("%-8s no candidates collected" % mod)
            continue
        print("%-8s %6d candidates (skipped %s)"
              % (mod, len(cands), skipped if skipped is not None else "?"))
        results, lost = verify_isolated(cands, mod, a.batch)
        if lost:
            print("%-8s %d candidates dropped as ill-formed" % (mod, lost))
        if not results:
            print("%-8s nothing verified" % mod)
            continue
        for r in results:
            v = r.get("verdict")
            grand[v] += 1
            per_shape[r.get("shape")][v] += 1
            if v in HAVE_CODE:
                src = r.get("src") or ""
                if len(src) > a.max_src:
                    grand["too-long"] += 1
                    continue
                queue.append({
                    "module": mod,
                    "addr": r["addr"],
                    "size": r["size"],
                    "ident": r["ident"],
                    "name": r.get("name"),
                    "shape": r.get("shape"),
                    "sig": r.get("sig"),
                    "verdict": v,
                    "reason": r.get("reason", ""),
                    "src": src,
                })

    print()
    print("=" * 74)
    print("verdicts across every shape")
    print("=" * 74)
    for v, n in grand.most_common():
        print("  %-16s %7d" % (v, n))

    queued = len(queue)
    print()
    print("semantic-match candidates available: %d" % queued)
    if grand.get("match"):
        print("  (%.2f%% of all candidates already byte-match; those are not "
              "queued)" % (100.0 * grand["match"] / max(1, sum(grand.values()))))

    if a.queue and queue:
        # Group by module so the matcher can reuse one disassembly blob per pass.
        os.makedirs(os.path.dirname(os.path.join(ROOT, a.queue)), exist_ok=True)
        with io.open(os.path.join(ROOT, a.queue), "w", encoding="utf-8") as f:
            json.dump(queue, f)
        print("  queued to %s" % a.queue)
        by_mod = collections.Counter(q["module"] for q in queue)
        for m, n in by_mod.most_common():
            print("    %-8s %6d" % (m, n))

    return 0


if __name__ == "__main__":
    sys.exit(main())
