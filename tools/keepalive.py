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

4. **Sync git.** Commit anything already tracked and modified, then push, retrying
   because the network here is intermittent ("Could not resolve host", then
   "Recv failure: Connection was reset" minutes later). Staged with `git add -u`,
   never `git add -A`: project tools rewrite tracked data files and a blanket add
   has already nearly shipped a wiped one. If `tools/audit.py` is red the commit is
   skipped and reported -- a keep-alive that bulldozes a failing audit is worse
   than one that does nothing.

The tick never edits the registry, never registers a body, and never writes
`data/functions.csv` itself, so a ticking agent cannot corrupt verified state by
accident. Registration stays a deliberate act.

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
import traceback

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODULES = ("main", "sdk", "subsdk0", "subsdk1")
STATE = os.path.join(ROOT, "work", "keepalive_state.json")

# Windowless subprocesses.
#
# Every child spawned here is a short-lived probe (git, audit.py, a harvest
# script). Without this flag each one allocates a console, which appears as a
# terminal window flashing for a split second -- once per probe, per tick.
#
# This constant was *referenced* six times and never defined. Commit f5d241ed
# ("stop the flashing windows") introduced the references; the definition was
# never added. Every tick then died in `run()` with NameError, the supervisor
# dutifully relaunched it, and the loop crash-looped indefinitely at
# `rc=1 after 0s` while reporting progress it had not made. The percentage froze
# at 19.03% and nothing said so, because the tick-failure path is designed to
# continue rather than stop -- correct in intent, and exactly what hid this.
#
# Long-lived children are a different case and must NOT use this: CREATE_NO_WINDOW
# leaves them in the parent's process group, so a console control event still
# reaches them and they die with 0xC000013A. tools/ping_watchdog.py and
# tools/ping_supervisor.py spawn theirs with DETACHED_PROCESS for that reason.
NOWINDOW = ({"creationflags": subprocess.CREATE_NO_WINDOW}
            if os.name == "nt" else {})


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
                           capture_output=True, text=True, cwd=ROOT, timeout=300, **NOWINDOW)
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
            capture_output=True, text=True, env=env, cwd=ROOT, timeout=5400, **NOWINDOW)
    except subprocess.TimeoutExpired:
        return "timeout"
    for line in r.stdout.splitlines():
        if line.startswith("VERIFIED"):
            return line.strip()
    return None


def git(*args, timeout=180):
    """Run a git command in ROOT. Returns (rc, combined output)."""
    r = subprocess.run(["git"] + list(args), capture_output=True, text=True, **NOWINDOW,
                       cwd=ROOT, timeout=timeout)
    return r.returncode, (r.stdout + r.stderr).strip()


def sync(a):
    """Commit anything tracked-and-dirty, then push. Returns a status line.

    The user asked for a push at the start and end of every ping. The tick had no
    git step at all, so a session that ended between ticks left verified work
    uncommitted -- which is the whole thing the keep-alive is supposed to prevent.

    Two deliberate limits:

    * **Never `git add -A`.** Project tools rewrite tracked data files, and a
      blanket add has already nearly shipped a wiped `functions.csv`. Only paths
      git already tracks are staged, via `git add -u`.
    * **Never push a failing tree.** If `tools/audit.py` is available and fails,
      the commit is skipped and the tick says so. A keep-alive that bulldozes a
      red audit is worse than one that does nothing.

    Network is intermittent here -- `git push` failed with "Could not resolve host"
      and later with "Recv failure: Connection was reset" -- so the push retries.
    """
    if getattr(a, "no_sync", False):
        return "sync: skipped (--no-sync)"

    rc, out = git("rev-parse", "--abbrev-ref", "HEAD")
    if rc != 0:
        return "sync: not a git repository (%s)" % out.splitlines()[-1][:60]

    rc, dirty = git("status", "--porcelain")
    lines = [l for l in dirty.splitlines() if l.strip()]
    if lines:
        # Audit first: never commit a tree whose own gates are red.
        audit = subprocess.run([sys.executable, os.path.join(ROOT, "tools", "audit.py")], **NOWINDOW,
                               capture_output=True, text=True, cwd=ROOT, timeout=900)
        if audit.returncode == 3:
            # Deferred, not failed: a harvest held the lock, so the audit examined
            # nothing. Committing here would mean committing an unverified tree --
            # exactly the failure this whole gate exists to prevent. Skip the tick.
            return ("sync: %d path(s) modified but audit was DEFERRED by an "
                    "in-progress harvest -- not committing this tick"
                    % len(lines))
        if audit.returncode != 0:
            return ("sync: %d path(s) modified but AUDIT FAILED -- not committing"
                    % len(lines))
        git("add", "-u")
        rc, msg = git("commit", "-q", "-m",
                      "keepalive tick %d: checkpoint verified state" % st_tick(a))
        if rc != 0:
            return "sync: commit failed (%s)" % (msg.splitlines()[-1][:60] if msg else "?")

    for attempt in range(1, 4):
        rc, msg = git("push", "origin", "HEAD")
        if rc == 0:
            head = git("rev-parse", "--short", "HEAD")[1]
            return "sync: pushed %s (attempt %d)%s" % (
                head, attempt, " [committed]" if lines else "")
        time.sleep(8 * attempt)
    return "sync: PUSH FAILED after 3 attempts -- work is committed locally only"


def st_tick(a):
    """Current tick number, for the commit message. Kept tiny and side-effect free."""
    st = load_state()
    return st.get("tick", 0)


MODULES_ALL = ("main", "sdk", "subsdk0", "subsdk1")

# Generators to sweep, in order. Each takes `--apply` and writes into
# `data/matched_<module>.json`. These are the shapes that still have unmatched
# bodies; the ones that reached 0% yield are simply no-ops when re-run, which is
# why the sweep is safe to repeat forever.
HARVEST = [
    ("gen_store_chain.py", ["--shape", "const-field-set"]),
    ("gen_store_chain.py", ["--shape", "copy-chain"]),
    ("gen_getter_chain.py", []),
    ("gen_struct_copy.py", []),
    ("gen_compare_pred.py", []),
    ("gen_zero_fill.py", []),
]


def run(cmd, timeout=3600):
    r = subprocess.run(cmd, capture_output=True, text=True, cwd=ROOT, timeout=timeout,
                     **NOWINDOW)
    return r.returncode, (r.stdout + "" + r.stderr)


def harvest(a, st):
    """One autonomous decompilation slice: generate, emit, build, verify.

    The user asked for the loop to keep decompiling with nobody in the room. That
    needs the *whole* chain in one tick, because every earlier step this session
    taught the hard way is that a body matching in isolation is not the same as a
    body that compiles in the real build:

        generators -> decomp_project --all -> prog_cmake -> build -> verify x4
        -> audit -> (only then) commit + push

    **Nothing is committed unless all four modules verify clean and the audit
    passes.** A generator that matches in isolation but breaks the real build --
    exactly what happened with the `uintptr_t` preamble gap -- is discarded
    rather than committed, and the tick says so.

    The body count is re-read before and after, so a slice that registers nothing
    is visible as such instead of being assumed to have worked.
    """
    before, _, _ = body_count()
    idx = st.get("harvest_idx", 0) % len(HARVEST)
    script, flags = HARVEST[idx]
    st["harvest_idx"] = (idx + 1) % len(HARVEST)
    label = "%s %s" % (script, " ".join(flags) if flags else "")

    # Hold the lock for the whole slice: prog/ and data/functions.csv are both
    # rewritten, and an audit running underneath reports failures that do not
    # exist. Released in `finally` so a crash here cannot wedge the audit forever
    # -- a stale lock is worse than a race, because it blocks silently.
    lock = os.path.join(ROOT, "work", "harvest.lock")
    os.makedirs(os.path.dirname(lock), exist_ok=True)
    try:
        fd = os.open(lock, os.O_CREAT | os.O_EXCL | os.O_WRONLY)
        os.write(fd, str(os.getpid()).encode())
        os.close(fd)
    except FileExistsError:
        print("  harvest: lock already held; skipping this slice")
        return "harvest: another harvest holds the lock"
    try:
        return _harvest_locked(a, st, before, label, script, flags)
    finally:
        try:
            os.unlink(lock)
        except OSError:
            pass


def _harvest_locked(a, st, before, label, script, flags):
    for m in MODULES_ALL:
        cmd = [sys.executable, os.path.join(ROOT, "tools", script)] + flags
        if "--apply" not in flags:
            cmd += ["--apply"]
        # The `gen_*` generators have no `--module` flag -- they already sweep
        # every module -- so passing one aborts argparse and every tick would
        # have failed. Only `auto_match.py` takes `--module`.
        if script == "auto_match.py":
            cmd += ["--module", m]
        rc, out = run(cmd)
        if rc != 0:
            print("  harvest %-34s FAILED (%s) rc=%d" % (label, m, rc))
            print("  " + out.strip().splitlines()[-1][:110] if out.strip() else "")
            return "harvest: %s failed on %s" % (label, m)

    rc, out = run([sys.executable, os.path.join(ROOT, "tools", "decomp_project.py"), "--all"])
    if rc != 0:
        return "harvest: decomp_project failed"
    rc, out = run([sys.executable, os.path.join(ROOT, "tools", "prog_cmake.py")])
    if rc != 0:
        return "harvest: prog_cmake failed (build would have no CMakeLists)"
    rc, out = run([sys.executable, os.path.join(ROOT, "tools", "build_nx64.py")])
    if rc != 0:
        return "harvest: BUILD FAILED -- nothing committed"
    for line in out.splitlines():
        if "prog.elf" in line:
            print("  build: %s" % line.strip())

    for m in MODULES_ALL:
        rc, vout = run([sys.executable, os.path.join(ROOT, "tools", "verify_matches.py"),
                        "--module", m], timeout=7200)
        verdict = next((l for l in vout.splitlines() if "VERIFIED" in l), "")
        print("  verify %-8s %s" % (m, verdict.strip() or "(no verdict line)"))
        if "mismatch=" in verdict:
            mm = verdict.split("mismatch=")[-1].split()[0]
            if mm != "0":
                return "harvest: %s MISMATCH (%s) in %s -- nothing committed" % (label, mm, m)
        elif not verdict:
            return "harvest: could not verify %s -- nothing committed" % m

    after, pop, _ = body_count()
    delta = (after - before) if (before is not None and after is not None) else None
    return "harvest: %-34s %s (%s -> %s)" % (
        label,
        ("+%d bodies" % delta) if (delta and delta > 0) else "no gain this slice",
        before, after)


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
    if a.work == "auto":
        print(harvest(a, st))
    print(sync(a))



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
                    env=dict(os.environ), **NOWINDOW)
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
                    choices=["harvest", "auto"],
                    help="auto: run one full decompilation slice "
                         "(generate -> emit -> build -> verify all four -> audit "
                         "gate), committing only if everything is clean. "
                         "harvest: the older report-only shape sweep.")
    ap.add_argument("--interval", type=int, default=60)
    ap.add_argument("--sleep", action="store_true",
                    help="sleep interval seconds first (for chained relaunch)")
    ap.add_argument("--loop", action="store_true",
                    help="tick forever, sleeping interval seconds BETWEEN ticks. "
                         "This is the mode that actually keeps a ping alive; "
                         "without it one tick runs and the process exits.")
    ap.add_argument("--fast", action="store_true",
                    help="status only, no verify -- finishes in under a second")
    ap.add_argument("--no-sync", action="store_true",
                    help="do not commit/push during the tick (for dry runs)")
    a = ap.parse_args()

    # `--sleep` was the original mechanism, but it only ever delayed a single
    # tick and then exited -- it assumed something would relaunch the process,
    # and nothing does. That made it not a keep-alive at all: it went silent
    # between ticks, which is exactly when a ping is needed. `--loop` is the
    # real fix; `--sleep` is kept for the chained-relaunch call sites.
    if a.sleep and not a.loop:
        time.sleep(a.interval)

    st = load_state()
    errors = 0
    while True:
        # A tick must never be able to end the loop. Every step in here shells
        # out to another tool, so any one of them failing -- a missing file, a
        # transient lock, a tool that raises -- used to propagate and kill the
        # process, which is exactly how a "keep-alive" stops keeping anything
        # alive. Report and carry on; the count is re-read next tick anyway.
        try:
            one_tick(a, st)
            errors = 0
        except KeyboardInterrupt:
            raise
        except BaseException as exc:                # noqa: BLE001
            errors += 1
            print("=== keepalive tick %d FAILED (%s: %s) -- continuing ==="
                  % (st.get("tick", 0), type(exc).__name__, exc))
            traceback.print_exc()
            if errors >= 5:
                # Repeated failure means something structural, not transient.
                # Say so loudly rather than spinning forever.
                print("=== 5 consecutive tick failures; giving up so the "
                      "cause is visible ===")
                return 1
        if not a.loop:
            return 0
        sys.stdout.flush()
        try:
            time.sleep(a.interval)
        except KeyboardInterrupt:
            raise


if __name__ == "__main__":
    sys.exit(main())