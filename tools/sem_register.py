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
import re
import shutil
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

MODULES = ("main", "sdk", "subsdk0", "subsdk1")

# Branch mnemonics whose 26-bit immediate is a PC-relative word offset.
BRANCH_OPS = {0x14000000: "b", 0x94000000: "bl"}


def _branch_target(op, pc):
    """-> (mnemonic, absolute_target) for a `b`/`bl`, else (None, None).

    `op` is the already-unpacked 32-bit instruction word.
    """
    base = op & 0xFC000000
    if base not in BRANCH_OPS:
        return None, None
    imm26 = op & 0x03FFFFFF
    if imm26 & (1 << 25):                  # sign-extend
        imm26 -= 1 << 26
    return BRANCH_OPS[base], pc + imm26 * 4


def static_tailcall(orig, cand, body_addr, callee_addr):
    """Is this tail-call thunk correctly decompiled? -> (ok, proof)

    A one-instruction thunk whose whole meaning is "jump to function T" is
    correctly decompiled exactly when it names T. That is a *structural* fact,
    checkable by reading two branch targets, and it needs no emulation.

    This matters because the alternative loses all of them. Installing the callee's
    real bytes and emulating gives `unknown` on 115 of 125: the callee is a real
    200-800 byte body that dereferences retail data addresses, so both sides fault
    immediately and identically, and a run in which nothing was ever observed is
    honestly not a pass.

    But "both faulted identically" is not the question being asked of a thunk. The
    question is whether the thunk still calls the function it always called, and
    that is answered by the target address alone.

    What this claim rests on: that the *callee* is separately correct. That is not
    circular -- it is the ordinary contract for a thunk. `sub_1e0` is a correct
    decompilation when it tail-calls `main+0x210`, and whether `main+0x210` itself
    is correct is that function's own separate claim. The alternative reading --
    that nothing is verified until the entire call graph is -- would mean no thunk
    in any decompilation could ever be called correct, which is not how decompilers
    report thunks.

    `body_addr` is the thunk's real retail address, and it is load-bearing. The
    original's branch is PC-relative (`b #0x30` at `main+0x1e0` reaches
    `main+0x210`), so resolving it against a pc of 0 yields the raw displacement
    `0x30` instead of `0x210` and every thunk then looks like it targets the wrong
    function. That mistake rejected all 125.

    The candidate's own emitted bytes carry no target at all -- it is always
    `b #0`, a placeholder for a call the linker has yet to resolve -- so the
    candidate's intent is read from the name the source declares, which is what
    `tools/decomp_project.py` will rewrite the call to.
    """
    import struct
    if len(orig) != 4:
        return False, {"reason": "original is %d bytes, not a single thunk"
                               % len(orig)}
    o_op = struct.unpack("<I", orig)[0]
    o_mn, o_tgt = _branch_target(o_op, body_addr)
    if o_mn not in ("b", "bl"):
        return False, {"reason": "original is %s, not a branch"
                               % (o_mn or "something else")}
    if callee_addr is None:
        return False, {"reason": "candidate declares no callee"}
    if o_tgt != callee_addr:
        return False, {"reason": "original targets %s, candidate names %s"
                               % (hex(o_tgt), hex(callee_addr))}
    return True, {"reason": "original's branch target is the function the "
                            "candidate names",
                  "thunk_at": hex(body_addr),
                  "target": hex(o_tgt),
                  "branch": o_mn,
                  "cand_placeholder": cand.hex()}


def _relocate_branch(code, pc, target):
    """Rewrite code's single leading `b`/`bl` so it lands on `target`.

    Returns (new_bytes, found_target) or (None, None) if there is no branch to
    relocate.

    The retail body and the candidate both branch to the *same real callee*, but
    the candidate's branch is resolved by the linker to a stub while the
    original's points at retail code. Emulated naively, the original's target sits
    outside the mapped code page, so it faults while the candidate lands inside it
    and completes -- reported as

        original faulted but candidate completed

    which is `different`, on bodies that are one instruction long and obviously
    equivalent.

    So both sides get their immediate rewritten onto `CALLEE_BASE` and the real
    callee's bytes are installed there by `sem_match`. The two bodies then agree on
    where to jump, and the comparison is about behaviour rather than about link
    layout.

    Only a *leading* branch is handled. A body that branches from the middle would
    need every branch site rewritten, and silently rewriting only the first would
    compare two different programs -- so that case declines instead.
    """
    import struct
    if len(code) < 4:
        return None, None
    op = struct.unpack("<I", code[:4])[0]
    mn, here = _branch_target(op, pc)
    if mn is None:
        return None, None
    # Exactly one instruction, or a branch plus nothing. Anything longer may have
    # further branches this rewrite would miss.
    if len(code) != 4:
        return None, None
    delta = (target - pc) // 4
    if delta & ~0x03FFFFFF or (target - pc) % 4:
        return None, None
    new = (op & 0xFC000000) | (delta & 0x03FFFFFF)
    return struct.pack("<I", new) + code[4:], here


def load_queue(path):
    with io.open(os.path.join(ROOT, path), encoding="utf-8") as f:
        return json.load(f)


def _protos_for(chunk):
    """The batch prelude: prototypes for tail-call destinations.

    `collect` tags each tail-call candidate with `needs_proto`, naming the retail
    callee it branches to. Those callees are outside the batch and must be
    declared, or every tail-call candidate fails with "use of undeclared
    identifier".

    Declaring *every* ident instead is worse than declaring none: each prototype
    then collides with the candidate's own definition and C++ rejects it --

        uint64_t f_1b0();               <- head
        uint32_t f_1b0() { return 0; }  <- the candidate
        error: functions that differ only in their return type cannot be overloaded

    -- and a wrong prelude does not degrade, it annihilates the whole batch.
    """
    protos = sorted({c["needs_proto"] for c in chunk if c.get("needs_proto")})
    return "".join("uint64_t %s();\n" % p for p in protos)


JOURNAL = os.path.join(ROOT, "work", "sem_journal.jsonl")


def load_journal():
    """Semantic records already decided, so a re-run resumes instead of redoing.

    Deciding 7,158 bodies takes about three minutes. Two server restarts during
    this work each discarded a completed run, because the results lived only in
    memory until the very end -- and the expensive artifact (the census queue)
    survived while the three minutes of decisions did not.

    Appending each accepted record as it is decided makes the run resumable, and
    makes a killed run worth everything it managed before dying rather than
    nothing. The journal is append-only, so a crash mid-write costs at most the
    final line.
    """
    seen = set()
    if not os.path.exists(JOURNAL):
        return seen
    try:
        with io.open(JOURNAL, encoding="utf-8") as f:
            for line in f:
                line = line.strip()
                if not line:
                    continue
                try:
                    r = json.loads(line)
                except ValueError:
                    continue                      # a torn final line
                seen.add((r.get("module"), r.get("addr")))
    except OSError:
        pass
    return seen


def journal(rec):
    with io.open(JOURNAL, "a", encoding="utf-8") as f:
        f.write(json.dumps(rec, sort_keys=True) + "\n")
        f.flush()
        os.fsync(f.fileno())


def write_registry(won, already=()):
    """Merge decided records into data/matched_<module>.json. -> count added."""
    total = 0
    for mod, recs in won.items():
        path = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if not os.path.exists(path):
            continue
        reg = json.load(open(path, encoding="utf-8"))
        have = {r["addr"] for r in reg.get("matched", [])}
        add = [r for r in recs
               if r["addr"] not in have and (mod, r["addr"]) not in already]
        if not add:
            continue
        reg.setdefault("matched", []).extend(add)
        with io.open(path, "w", encoding="utf-8") as f:
            json.dump(reg, f, indent=1, sort_keys=True)
        print("  registered %d semantic records into data/matched_%s.json"
              % (len(add), mod))
        total += len(add)
    return total


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--queue", required=True)
    ap.add_argument("--batch", type=int, default=120,
                    help="candidates per compile+compare batch")
    ap.add_argument("--trials", type=int, default=12)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--static-tailcall", action="store_true",
                    help="accept a one-instruction thunk on branch-target "
                         "identity rather than emulation (see static_tailcall)")
    ap.add_argument("--fresh", action="store_true",
                    help="discard the journal and decide everything again")
    ap.add_argument("--dry-run", action="store_true",
                    help="decide every candidate but write nothing")
    ap.add_argument("--module", default=None)
    a = ap.parse_args()

    import match_harness as MH
    import sem_match as SM

    ver = MH.check_compiler()
    # `check_compiler()` returns the whole banner ("clang version 5.0.1
    # (tags/RELEASE_501/final)"), so compare on containment rather than equality.
    # Testing `ver != "5.0.1"` printed a warning on every run of a run that was
    # using the *right* compiler -- a false alarm in a tool whose whole job is to
    # be trusted about which compiler produced a verdict.
    if ver and MH.REQUIRED_CLANG not in ver:
        print("WARNING: verifying with %r, not clang %s. Semantic results "
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
    # Resume support. Records decided by an earlier run are reloaded from the
    # journal and folded into the registry at the end, so a re-run after a crash
    # keeps the earlier work instead of starting from nothing.
    resumed = load_journal()
    if resumed and not a.dry_run:
        print("journal: %d records already decided by an earlier run"
              % len(resumed))
    if a.fresh and os.path.exists(JOURNAL):
        os.remove(JOURNAL)
        print("--fresh: journal discarded")
    # (module, callee_addr) -> callee size, so the retail callee's own bytes can
    # be read. The tail-call name encodes the address (`t_main_210`); the size is
    # only in the registry.
    sizes = {}
    try:
        import csv
        for r in csv.DictReader(
                io.open(os.path.join(ROOT, "data/functions.csv"), encoding="utf-8")):
            sizes[(r["module"], int(r["addr"], 16))] = int(r["size"])
    except (OSError, ValueError) as e:
        print("WARNING: could not read callee sizes (%s); tail-call bodies "
              "will be skipped" % e)
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

        head = _protos_for(chunk)

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

            # A tail-call body is one `b` to a real retail callee. Relocate both
            # sides onto CALLEE_BASE and install that callee's bytes, so the two
            # agree on where they jump. Without this the original's target is
            # outside the mapped page and every such body reads as `different`.
            callee = None
            o_code, c_code = orig, cand
            tname = c.get("needs_proto")
            caddr = None
            if tname:
                try:
                    caddr = int(tname.rsplit("_", 1)[-1], 16)
                except ValueError:
                    caddr = None

            # Decide statically where the body's meaning is decidable statically.
            #
            # A thunk's decompilation is correct iff it still names the function it
            # named, and that is a fact about two branch targets -- no emulation,
            # no dependence on whether the callee's own body is judgeable. Tried
            # first because emulation answers a different question here and mostly
            # answers `unknown`.
            proof = None
            if a.static_tailcall and caddr is not None:
                ok, why = static_tailcall(orig, cand, addr, caddr)
                if ok:
                    proof = ("static branch-target identity",
                             {"target": why.get("target"),
                              "callee": tname,
                              "note": "thunk still names the function it named; "
                                      "the callee's own correctness is its own "
                                      "separate claim"})
                else:
                    tally["static-rejected"] += 1

            if proof is None:
                if tname and caddr is not None:
                    tsize = sizes.get((mod, caddr))
                    if tsize:
                        tbytes = blob[caddr:caddr + tsize]
                        ro = _relocate_branch(orig, SM.CODE_BASE, SM.CALLEE_BASE)
                        rc = _relocate_branch(cand, SM.CODE_BASE, SM.CALLEE_BASE)
                        if ro and rc and tbytes:
                            o_code, c_code, callee = ro[0], rc[0], tbytes
                            tally["relocated"] += 1
                        else:
                            tally["relocate-failed"] += 1
                            continue
            if proof is not None:
                verdict, reason = "equivalent", proof[0]
            else:
                try:
                    verdict, reason = SM.compare(o_code, c_code,
                                                 trials=a.trials, callee=callee)
                except Exception as e:                  # noqa: BLE001
                    # One body must never cost the batch. This is the guard the
                    # translator needs on every new construct for the same reason: a
                    # compile error costs 700 candidates, and a raised exception here
                    # would cost however many are in this chunk.
                    tally["compare-exception"] += 1
                    tally["exc:" + type(e).__name__] += 1
                    # Record where it happened. An exception tally with no
                    # traceback is a body count with no explanation, and "6
                    # TypeErrors" invites the reading that the tool is robust
                    # because it caught them -- when in fact nothing says which
                    # six, or why.
                    #
                    # To a file, not to stderr: this runs in the background under
                    # a harness that captures stdout only, so a stderr traceback is
                    # written and then lost, and the tally stands unexplained.
                    if not tally.get("_traced"):
                        tally["_traced"] = 1
                        import traceback
                        with io.open(os.path.join(ROOT, "work",
                                                  "sem_exceptions.txt"), "a",
                                     encoding="utf-8") as tf:
                            tf.write("first compare exception at %s (%s)\n"
                                     % (c["ident"], c["shape"]))
                            tf.write(traceback.format_exc())
                    continue
            tally[verdict] += 1
            if verdict == "equivalent":
                rec = dict(c)
                rec["verdict"] = "semantic"
                if proof is not None:
                    rec["proof"] = {"method": proof[0], "detail": proof[1]}
                else:
                    rec["proof"] = {
                        "method": "unicorn differential",
                        "trials": a.trials,
                        "layouts": list(SM.LAYOUTS),
                        "cand_insns": len(cand) // 4,
                        "orig_insns": size // 4,
                    }
                rec["src"] = c["src"]
                won[mod].append(rec)
                # Journal each acceptance as it happens, so a run killed part-way
                # keeps everything it decided before dying.
                if not a.dry_run:
                    journal(rec)

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

    written = write_registry(won)
    if resumed and not a.dry_run:
        # Fold in everything an earlier run decided. Done after this run's own
        # records so the newest verdicts are the ones already in the registry and
        # cannot be duplicated by the merge.
        prior = collections.defaultdict(list)
        with io.open(JOURNAL, encoding="utf-8") as f:
            for line in f:
                line = line.strip()
                if not line:
                    continue
                try:
                    r = json.loads(line)
                except ValueError:
                    continue
                prior[r.get("module")].append(r)
        for m in list(prior):
            if m in won:
                prior[m] = [r for r in prior[m]
                            if (m, r.get("addr")) not in
                            {(x["module"], x["addr"]) for x in won[m]}]
        extra = write_registry(prior)
        written += extra
        if extra:
            print("  plus %d from the journal" % extra)
    print()
    print("registered %d semantic records across %d modules"
          % (written, len(won)))
    print("next: python tools/decomp_project.py   (emit prog/)")
    print("      python tools/prog_cmake.py       (regenerate prog/CMakeLists.txt)")
    print("      python tools/match_progress.py   (reports both populations)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
