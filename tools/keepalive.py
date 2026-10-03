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
    """Emitted verified bodies, from the registries.

    Read from `data/matched_<mod>.json` rather than by counting files in
    `prog/matched/`, because the two disagree by a few dozen records that do not
    emit a body, and only the registry total is what the build consumes.
    """
    total = 0
    per = {}
    for m in MODULES:
        p = os.path.join(ROOT, "data", "matched_%s.json" % m)
        if not os.path.isfile(p):
            continue
        blob = json.load(open(p, encoding="utf-8"))
        n = sum(1 for r in blob.get("matched", []) if isinstance(r, dict))
        per[m] = n
        total += n
    return total, per


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


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--work", default=None,
                    help="harvest: run the next automated slice")
    ap.add_argument("--interval", type=int, default=60)
    ap.add_argument("--sleep", action="store_true",
                    help="sleep interval seconds first (for chained relaunch)")
    ap.add_argument("--fast", action="store_true",
                    help="status only, no verify -- finishes in under a second "
                         "so it can be relaunched every few seconds")
    a = ap.parse_args()

    if a.sleep:
        time.sleep(a.interval)

    st = load_state()
    st["tick"] += 1

    total, per = body_count()
    pop = population()
    pct = (100.0 * total / pop) if pop else 0.0

    print("=== keepalive tick %d ===" % st["tick"])
    print("matching : %d / %d  = %.2f%%" % (total, pop, pct))
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
    print("\ntick complete. relaunch to continue the loop.")
    return 0


if __name__ == "__main__":
    sys.exit(main())