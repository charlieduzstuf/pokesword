#!/usr/bin/env python3
"""Keep-alive tick: do a slice of real work, then exit so the agent wakes.

Why this exists
---------------
The session drops when the agent goes idle, and restarting it loses the thread.
An agent cannot wake itself -- it wakes when a tool returns or the user writes.
But a *background command that completes* produces a notification, and that is
the same wake-up path. So an always-on loop is: launch a short job, get woken by
its completion, relaunch it.

The important part is that the job is not a sleep. A `ping` every minute would
wake the agent to find nothing changed and burn the remaining budget on
idempotent re-verification, which is worse than being idle. Each tick instead
takes the next unclaimed slice of real work and prints what it did, so a wake-up
always has something to show for itself.

What each tick does, in order, and why
--------------------------------------
1. **Re-verify** one module with `verify_matches`, rotating through the four.
   Cheap, and it is the only number that must never be stale. If a mismatch
   count moves, that is reported immediately -- a silent regression is worse than
   no tick at all.
2. **Report the current percentage** from the emitted-body count, never from a
   generator's hit rate. Two separate times this session a "N matched" line was
   read as a gain when the body count had not moved; the body count is the only
   figure that means anything.
3. **Run one slice of the remaining automated work** if any is queued -- see
   `--work`. Skipped when there is none.

The tick is idempotent and read-only apart from step 3. It never edits the
registry, never registers a body, and never writes `data/functions.csv`, so a
ticking agent cannot corrupt verified state by accident. Registration stays a
deliberate act.

Usage:
    python tools/keepalive.py                  # one tick
    python tools/keepalive.py --work harvest   # also run the next harvest slice
    python tools/keepalive.py --interval 60
"""

import argparse
import json
import os
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODULES = ("main", "sdk", "subsdk0", "subsdk1")
STATE = os.path.join(ROOT, "work", "keepalive_state.json")


def body_count():
    """The authoritative figure, read from `tools/match_progress.py`.

    This function used to reimplement the count by summing
    `len(blob["matched"])` over `data/matched_<mod>.json`. It reported a
    different number from `match_progress.py` -- 26,544 against 26,536 -- and
    its docstring confidently explained the gap as "records that do not emit a
    body". **That explanation was invented, not measured.** Counting bodies in
    `prog/matched/<mod>/source/*.cpp` directly was tried as the fix and returned
    149, because a naive line-prefix heuristic counts forward declarations as
    well as definitions.

    Two copies of a counting rule will drift, and the drift is invisible because
    both numbers look plausible. So there is now one: shell out to
    `match_progress.py`, which the project already treats as the only source of
    the percentage, and parse its TOTAL row. If that file cannot be read the
    tick says so rather than substituting a guess.
    """
    try:
        r = subprocess.run([sys.executable,
                            os.path.join(ROOT, "tools", "match_progress.py")],
                           capture_output=True, text=True, cwd=ROOT, timeout=300)
    except Exception as e:                                   # noqa: BLE001
        return None, "match_progress.py unreadable: %s" % e, {}
    for line in r.stdout.splitlines():
        f = line.split()
        if f and f[0] == "TOTAL" and len(f) >= 3:
            # TOTAL <population> <matched> <remaining> <pct>
            try:
                return int(f[2]), int(f[1]), {}
            except ValueError:
                continue
    return None, "no TOTAL row in match_progress output", {}


def population():
    p = os.path.join(ROOT, "data", "functions.csv")
    if not os.path.isfile(p):
        return 0
    with open(p, encoding="utf-8") as f:
        return sum(1 for _ in f) - 1


def load_state():
    if os.path.isfile(STATE):
        try:
            return json.load(open(STATE, encoding="utf-8"))
        except (ValueError, OSError):
            pass
    return {"tick": 0, "module": 0}


def save_state(s):
    os.makedirs(os.path.dirname(STATE), exist_ok=True)
    json.dump(s, open(STATE, "w", encoding="utf-8"))


def verify(module):
    """Re-verify one module. Returns the reported line, or None on failure."""
    env = dict(os.environ)
    clang = os.environ.get("POKESWORD_CLANG")
    if clang:
        env["POKESWORD_CLANG"] = clang
    try:
        r = subprocess.run(
            [sys.executable, os.path.join(ROOT, "tools", "verify_matches.py"),
             "--module", module],
            capture_output=True, text=True, env=env, cwd=ROOT, timeout=5400)
    except subprocess.TimeoutExpired:
        return "timeout"
    for line in r.stdout.splitlines():
        if line.startswith("VERIFIED"):
            return line.strip()
    return None


def one_tick(a, st):
    """Do one tick's work on `st`, then persist it. Returns nothing.

    Split out of what used to be `main` so that `--loop` can call it repeatedly.
    `st` is mutated in place, so the caller can simply keep passing the same dict
    and the tick counter keeps advancing.
    """
    st["tick"] += 1

    emitted, pop, per = body_count()
    print("=== keepalive tick %d ===" % st["tick"])
    if emitted is None:
        print("matching : UNAVAILABLE -- %s" % pop)
    else:
        pct = (100.0 * emitted / pop) if pop else 0.0
        print("matching : %d / %d  = %.2f%%   (from match_progress.py --"
              " the authoritative figure)" % (emitted, pop, pct))
    if per:
        print("per module: %s" % per)



    if a.fast:
        save_state(st)
        return 0

    mod = MODULES[st["module"] % len(MODULES)]
    st["module"] = (st["module"] + 1) % len(MODULES)

    v = verify(mod)
    print("verify %-8s %s" % (mod, v or "no verdict line"))

    if v and "mismatch=" in v:
        key = "last_mismatch_" + mod
        cur = v.split("mismatch=")[-1].split()[0]
        prev = st.get(key)
        if prev is not None and prev != cur:
            print("  !! %s mismatch moved: %s -> %s" % (mod, prev, cur))
        st[key] = cur

    if a.work == "harvest":
        print("\nharvest slice: re-running the registered shapes (no new "
              "generators are queued)")
        for m in MODULES:
            try:
                r = subprocess.run(
                    [sys.executable, os.path.join(ROOT, "tools",
                                                  "auto_match.py"),
                     "--module", m, "--shape", "strlit-ret",
                     "--limit", "5000", "--batch", "200"],
                    capture_output=True, text=True, cwd=ROOT, timeout=5400,
                    env=dict(os.environ))
                for line in r.stdout.splitlines():
                    if line.startswith("MATCH "):
                        print("  %-8s %s" % (m, line.strip()))
            except subprocess.TimeoutExpired:
                print("  %-8s timeout" % m)

    save_state(st)
    if not a.loop:
        print("\ntick complete. relaunch to continue the loop.")
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--work", default=None,
                    help="harvest: run the next automated slice")
    ap.add_argument("--interval", type=int, default=60)
    ap.add_argument("--sleep", action="store_true",
                    help="sleep interval seconds first (for chained relaunch)")
    ap.add_argument("--loop", action="store_true",
                    help="tick forever, sleeping interval seconds BETWEEN ticks. "
                         "This is the mode that actually keeps a ping alive; "
                         "without it one tick runs and the process exits.")
    ap.add_argument("--fast", action="store_true",
                    help="status only, no verify -- finishes in under a second")
    a = ap.parse_args()

    # `--sleep` was the original mechanism, but it only ever delayed a single
    # tick and then exited -- it assumed something would relaunch the process,
    # and nothing does. That made it not a keep-alive at all: it went silent
    # between ticks, which is exactly when a ping is needed. `--loop` is the
    # real fix; `--sleep` is kept for the chained-relaunch call sites.
    if a.sleep and not a.loop:
        time.sleep(a.interval)

    st = load_state()
    while True:
        one_tick(a, st)
        if not a.loop:
            return 0
        sys.stdout.flush()
        time.sleep(a.interval)


if __name__ == "__main__":
    sys.exit(main())