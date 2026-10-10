"""Claim semantic matches: bodies that are behaviourally identical to the
original without being byte-identical.

## The population

`tools/auto_match.py` generates C, compiles it with Clang 5.0.1, and compares the
compiled bytes against the original. Everything whose `verdict` is not `match` has
already been *expressed* and *compiled*; only the byte comparison failed. Those
candidates are the input here -- no new C generation is needed, which is why this
is the fastest available route to more functions.

`tools/sem_match.py` decides them by emulation rather than by inspection: both the
original bytes and the candidate's compiled bytes are run under Unicorn with the
same arguments, and the run is a match only if they agree on every observable --
return value, and every write to the argument scratch region.

## What a pass does and does not mean

A pass means "on 12 trials across 5 argument layouts these two agreed on
everything observable". It is a strong empirical claim and it is **not** a claim of
byte-identity, which is a different and much stronger statement. So:

  * semantic records are written with `"verdict": "semantic"` and a `proof`
    recording exactly what was tested;
  * `tools/match_progress.py` counts them on **their own line** and never adds
    them to the byte-identical headline.

Conflating the two would inflate the headline with bodies whose exact bytes are
still unknown, and the headline is the project's one authoritative number.

`compare` also returns `unknown` -- a real outcome meaning the original could not be
contained (typically an unresolved `bl`). That is reported, never counted.

Usage:
    python tools/sem_register.py --queue work/sem_queue.json
    python tools/sem_register.py --queue work/sem_queue.json --dry-run
"""

import argparse
import collections
import io
import json
import os
import shutil
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

MODULES = ("main", "sdk", "subsdk0", "subsdk1")


def load_queue(path):
    with io.open(os.path.join(ROOT, path), encoding="utf-8") as f:
        return json.load(f)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--queue", required=True)
    ap.add_argument("--batch", type=int, default=120,
                    help="candidates per compile+compare batch")
    ap.add_argument("--trials", type=int, default=12)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--dry-run", action="store_true",
                    help="decide every candidate but write nothing")
    ap.add_argument("--module", default=None)
    a = ap.parse_args()

    import match_harness as MH
    import sem_match as SM

    ver = MH.check_compiler()
    if ver and ver != MH.REQUIRED_CLANG:
        print("WARNING: verifying with clang %s, not %s. Semantic results "
              "measured against the wrong compiler are not comparable with the "
              "byte-identical ones." % (ver, MH.REQUIRED_CLANG))

    q = load_queue(a.queue)
    if a.module:
        q = [c for c in q if c["module"] == a.module]
    if a.limit:
        q = q[:a.limit]
    print("queue: %d candidates, %d trials each, batch %d"
          % (len(q), a.trials, a.batch))

    tally = collections.Counter()
    won = collections.defaultdict(list)
    workdir = os.path.join(ROOT, "work", "sem_tmp")
    blobs = {}
    t0 = time.time()

    for start in range(0, len(q), a.batch):
        chunk = q[start:start + a.batch]
        mod = chunk[0]["module"]
        if mod not in blobs:
            blobs[mod] = MH.text_blob(mod)
        blob = blobs[mod]

        if os.path.isdir(workdir):
            shutil.rmtree(workdir, ignore_errors=True)
        os.makedirs(workdir, exist_ok=True)

        protos = sorted({c["ident"] for c in chunk})
        head = "".join("uint64_t %s();\n" % p for p in protos)

        pairs = [(c["ident"], c["src"]) for c in chunk]
        good, dropped, hard = MH.compile_batch_isolated(pairs, workdir, head=head)
        tally["compile-dropped"] += len(dropped)
        for c in chunk:
            if (c["ident"], c["src"]) in dropped:
                tally["dropped:" + (c["shape"] or "?")] += 1

        if not good:
            continue
        obj, err = MH.compile_batch(good, workdir, head=head)
        if not obj:
            tally["batch-compile-error"] += 1
            continue

        syms = MH.obj_symbols(obj)
        want = {}
        for c in chunk:
            want[MH.mangle(c["ident"], c["sig"])] = c
        code = MH.obj_text_range(obj, syms, list(want))

        for mangled, c in want.items():
            cand = code.get(mangled) or b""
            if not cand:
                tally["no-candidate-bytes"] += 1
                continue
            addr = c["addr"]
            size = c["size"]
            orig = blob[addr:addr + size]
            if not orig:
                tally["no-original-bytes"] += 1
                continue
            try:
                verdict, reason = SM.compare(orig, cand, trials=a.trials)
            except Exception as e:                      # noqa: BLE001
                # One body must never cost the batch. This is the guard the
                # translator needs on every new construct for the same reason: a
                # compile error costs 700 candidates, and a raised exception here
                # would cost however many are in this chunk.
                tally["compare-exception"] += 1
                tally["exc:" + type(e).__name__] += 1
                continue
            tally[verdict] += 1
            if verdict == "equivalent":
                rec = dict(c)
                rec.pop("src", None)
                rec["verdict"] = "semantic"
                rec["proof"] = {
                    "method": "unicorn differential",
                    "trials": a.trials,
                    "layouts": list(SM.LAYOUTS),
                    "cand_insns": len(cand) // 4,
                    "orig_insns": size // 4,
                }
                rec["src"] = c["src"]
                won[mod].append(rec)

        done = min(start + a.batch, len(q))
        print("  %6d / %6d  %-11s %5.0fs  %s"
              % (done, len(q), mod, time.time() - t0,
                 " ".join("%s=%d" % (k, v) for k, v in tally.most_common(4))))

    print()
    print("=" * 74)
    print("semantic verdicts")
    print("=" * 74)
    for k, v in tally.most_common():
        print("  %-22s %7d" % (k, v))
    total_won = sum(len(v) for v in won.values())
    decided = tally["equivalent"] + tally["different"] + tally["unknown"]
    print()
    print("decided %d of %d queued; equivalent %d (%.1f%% of decided)"
          % (decided, len(q), total_won,
             100.0 * total_won / max(1, decided)))
    for m, v in sorted(won.items()):
        print("  %-8s %6d" % (m, len(v)))

    if a.dry_run:
        print("dry run: nothing written")
        return 0

    for mod, recs in won.items():
        path = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if not os.path.exists(path):
            continue
        reg = json.load(open(path, encoding="utf-8"))
        have = {r["addr"] for r in reg.get("matched", [])}
        add = [r for r in recs if r["addr"] not in have]
        reg.setdefault("matched", []).extend(add)
        with io.open(path, "w", encoding="utf-8") as f:
            json.dump(reg, f, indent=1, sort_keys=True)
        print("  registered %d semantic records into data/matched_%s.json"
              % (len(add), mod))
    print()
    print("next: python tools/decomp_project.py   (emit prog/)")
    print("      python tools/prog_cmake.py       (regenerate prog/CMakeLists.txt)")
    print("      python tools/match_progress.py   (reports both populations)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
