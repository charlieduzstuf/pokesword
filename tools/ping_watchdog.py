#!/usr/bin/env python3
"""Supervise the ping supervisor. The tier that was missing.

The chain is three deep and only two links were guarded:

    ping_watchdog.py   <- this file: supervises tier 2
      ping_supervisor.py    <- supervised keepalive.py --loop
        keepalive.py         <- the actual decompilation loop

`ping_supervisor.py` guarded the loop against crashing, and guarded itself
against a *child* crash. Nothing guarded the supervisor. work/ping.log shows
the consequence: the supervisor's own pid (36160) was gone, and the loop under
it had died eight times, ending on `rc=3221225786` -- which is 0xC000013A,
STATUS_CONTROL_C_EXIT, a console control event. Nothing relaunched the
supervisor, so nothing relaunched the loop, and the session had to be restarted
by hand. That is the "the tick failed again" symptom, and it is a missing link
rather than a flaky tool.

Two things here are deliberately stronger than the tier below.

**Children are spawned DETACHED_PROCESS, not CREATE_NO_WINDOW.**
`CREATE_NO_WINDOW` suppresses the console *window* but leaves the child in the
parent's process group and does not fully detach it, so a console control event
aimed at the group still reaches it and it dies with 0xC000013A -- exactly the
exit code in the log, seen eight times. `DETACHED_PROCESS` gives the child no
console at all, which removes every console-mediated death path rather than
reducing their likelihood. The two flags conflict and must not be combined.

**This process ignores console control events outright.**
`SetConsoleCtrlHandler(NULL, TRUE)` makes the default handler for
CTRL_C/CTRL_BREAK/CTRL_CLOSE a no-op, so even if a console is somehow attached
the watchdog survives a console close. Belt and braces over DETACHED_PROCESS,
because the watchdog dying is the one failure mode that cannot be recovered from
by anything underneath it.

The watchdog stamps `work/ping_watchdog.json` every cycle with its pid, the
child pid, the restart count and a timestamp. That stamp is what lets a later
session -- or tools/heartbeat.py -- tell a *running* watchdog from a dead one
whose pidfile was never cleaned up, which is the ambiguity that made this
failure invisible.

Usage:
    python tools/ping_watchdog.py --status      # who is alive, and how stale
    python tools/ping_watchdog.py --arm         # start detached (the usual call)
    python tools/ping_watchdog.py --stop        # stop the whole chain
    python tools/ping_watchdog.py --selftest    # prove a killed child returns
"""

import argparse
import ctypes
import json
import os
import signal
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HERE = os.path.join(ROOT, "tools")
WORK = os.path.join(ROOT, "work")
PIDFILE = os.path.join(WORK, "ping_watchdog.pid")
STAMP = os.path.join(WORK, "ping_watchdog.json")
LOGFILE = os.path.join(WORK, "ping.log")

# Detached children: no console, not in our process group.
#
# Not combined with CREATE_NO_WINDOW -- the two are mutually exclusive, and
# CREATE_NO_WINDOW is the flag that left the 0xC000013A deaths in place.
DETACHED = ({"creationflags": subprocess.DETACHED_PROCESS}
            if os.name == "nt" else {"start_new_session": True})
# Windowless but still grouped: only for short-lived probes (tasklist, git), where
# detaching would strand their pipes.
NOWINDOW = ({"creationflags": subprocess.CREATE_NO_WINDOW}
            if os.name == "nt" else {})


def ignore_ctrl_events():
    """Make console control events a no-op for this process.

    Returns True if the handler was installed. A watchdog that can be killed by
    a console close cannot supervise anything, so this runs before any child is
    spawned and before the pidfile is written.
    """
    if os.name != "nt":
        return False
    try:
        # NULL handler + TRUE == "ignore CTRL_C/CTRL_BREAK/CTRL_CLOSE".
        return bool(ctypes.windll.kernel32.SetConsoleCtrlHandler(None, True))
    except Exception as e:                      # noqa: BLE001 - must never be fatal
        print("watchdog: SetConsoleCtrlHandler failed: %s: %s"
              % (type(e).__name__, e), flush=True)
        return False


def alive(pid):
    """Is `pid` a live process? No psutil dependency."""
    if not pid:
        return False
    if os.name == "nt":
        try:
            out = subprocess.run(["tasklist", "/FI", "PID eq %d" % int(pid), "/NH"],
                                 **NOWINDOW, capture_output=True, text=True,
                                 timeout=30).stdout
        except Exception:                       # noqa: BLE001
            return False
        return str(pid) in out
    try:
        os.kill(int(pid), 0)
    except OSError:
        return False
    return True


def read_json(path, default=None):
    try:
        with open(path, encoding="utf-8") as f:
            return json.load(f)
    except Exception:                           # noqa: BLE001
        return default


def write_json(path, obj):
    """Atomic write. A half-written stamp must not read as 'stale, restart me'
    and trigger a second watchdog."""
    tmp = path + ".tmp"
    try:
        with open(tmp, "w", encoding="utf-8") as f:
            json.dump(obj, f)
        os.replace(tmp, path)
    except Exception as e:                      # noqa: BLE001
        print("watchdog: could not write %s: %s: %s"
              % (os.path.basename(path), type(e).__name__, e), flush=True)


def tier2_argv(interval, work, fast):
    argv = [sys.executable, os.path.join(HERE, "ping_supervisor.py"),
            "--interval", str(interval)]
    if work:
        argv += ["--work", work]
    if fast:
        argv.append("--fast")
    return argv


def log(line):
    print(line, flush=True)


# --------------------------------------------------------------------------
# --stop
# --------------------------------------------------------------------------

def kill_tree(pid, what):
    """Kill `pid` and its descendants, tolerating an already-dead process."""
    if not alive(pid):
        return False
    print("stopping %s pid %s" % (what, pid), flush=True)
    if os.name == "nt":
        subprocess.run(["taskkill", "/PID", str(int(pid)), "/T", "/F"],
                       **NOWINDOW, capture_output=True, text=True)
    else:
        try:
            os.kill(int(pid), signal.SIGTERM)
        except OSError:
            return False
    for _ in range(20):
        if not alive(pid):
            return True
        time.sleep(0.5)
    return not alive(pid)


def stop_chain():
    """Stop the whole chain: tier 1, tier 2, then this file's own watchdog.

    Order matters. Tier 2 goes first so it cannot relaunch the loop while the
    loop is being killed. The watchdog goes last, because while it is alive it
    will restart anything that dies -- including, if the order were wrong, the
    tier 2 we just killed.

    Invoked as a separate process, `--stop` *can* kill the running watchdog, and
    does: the pid comes from the stamp, falling back to the pidfile. The earlier
    version only cleaned up artefacts and printed "remove this process
    separately", which left the top tier running and immediately respawned
    whatever the user had just asked to stop. Self-kill is guarded, so running
    `--stop` from inside the supervise loop is still safe.
    """
    stopped = []
    tier2_pid = read_json(os.path.join(WORK, "ping_supervisor.pid"))
    if not tier2_pid:
        try:
            with open(os.path.join(WORK, "ping_supervisor.pid"), encoding="utf-8") as f:
                tier2_pid = int(f.read().strip())
        except Exception:                       # noqa: BLE001
            tier2_pid = None
    if kill_tree(tier2_pid, "ping_supervisor"):
        stopped.append("ping_supervisor(%s)" % tier2_pid)

    # Anything still running keepalive.py --loop belongs to this chain.
    for pid in find_keepalives():
        if kill_tree(pid, "keepalive"):
            stopped.append("keepalive(%s)" % pid)

    # The watchdog itself, last. `read_json(PIDFILE)` is wrong here -- the pidfile
    # holds plain text, not JSON -- so read it as text and fall back to the
    # stamp, which is the authoritative record because it is written atomically.
    own = None
    try:
        with open(PIDFILE, encoding="utf-8") as f:
            own = int(f.read().strip())
    except Exception:                           # noqa: BLE001
        own = (read_json(STAMP, {}) or {}).get("watchdog_pid")
    if own and int(own) != os.getpid() and kill_tree(own, "watchdog"):
        stopped.append("watchdog(%s)" % own)
    elif own and int(own) == os.getpid():
        stopped.append("watchdog(self, exiting)")

    for p in (PIDFILE, STAMP):
        try:
            os.remove(p)
        except OSError:
            pass
    print("stop_chain: stopped %s" % (", ".join(stopped) if stopped else "nothing"),
          flush=True)
    return 0


def find_keepalives():
    """pids of running `keepalive.py --loop`, read from the process table."""
    pids = []
    if os.name != "nt":
        return pids
    try:
        out = subprocess.run(
            ["wmic", "process", "where", "name='python.exe'", "get",
             "ProcessId,CommandLine", "/format:csv"],
            **NOWINDOW, capture_output=True, text=True, timeout=60).stdout
    except Exception:                           # noqa: BLE001
        return pids
    for line in out.splitlines():
        if "keepalive.py" in line and "--loop" in line:
            for cell in line.split(","):
                cell = cell.strip()
                if cell.isdigit():
                    pids.append(int(cell))
                    break
    return pids


# --------------------------------------------------------------------------
# --status
# --------------------------------------------------------------------------

def status():
    """Report the whole chain, and how long ago each level last checked in.

    The timestamps are the point. A live pid with an old stamp means the
    process is wedged rather than working, which no liveness check on the pid
    alone can distinguish.
    """
    now = time.time()
    rows = []

    stamp = read_json(STAMP, {}) or {}
    wpid = stamp.get("watchdog_pid")
    age = now - stamp.get("at_epoch", 0) if stamp.get("at_epoch") else None
    rows.append(("watchdog", wpid, alive(wpid), age, stamp.get("restarts", 0)))

    try:
        with open(os.path.join(WORK, "ping_supervisor.pid"), encoding="utf-8") as f:
            spid = int(f.read().strip())
    except Exception:                           # noqa: BLE001
        spid = None
    rows.append(("ping_supervisor", spid, alive(spid), None, None))

    ka = find_keepalives()
    for pid in ka:
        rows.append(("keepalive", pid, True, None, None))

    print("  %-16s %-8s %-7s %-12s %s" % ("tier", "pid", "alive", "stamp age", "restarts"))
    for name, pid, up, age, rs in rows:
        print("  %-16s %-8s %-7s %-12s %s"
              % (name, pid if pid else "-", "yes" if up else "NO",
                 ("%.0fs" % age) if age is not None else "-",
                 rs if rs is not None else "-"))
    if not any(r[2] for r in rows):
        print("  CHAIN DOWN -- arm with: python tools/ping_watchdog.py --arm")
        return 1
    if not rows[0][2]:
        print("  CHAIN DEGRADED -- watchdog dead, nothing can restart the rest")
        return 1
    return 0


# --------------------------------------------------------------------------
# --selftest
# --------------------------------------------------------------------------

def selftest():
    """Prove the watchdog actually relaunches a child that is killed.

    A supervisor that has never been observed recovering is an untested claim.
    This runs the real supervise loop against a child that exits after a short
    time, kills the first child outright, and requires that a second one starts.

    Uses a throwaway pidfile/stamp so it cannot disturb a live chain.
    """
    global STAMP, PIDFILE
    live_stamp, live_pid = STAMP, PIDFILE
    STAMP = os.path.join(WORK, "ping_watchdog.selftest.json")
    PIDFILE = os.path.join(WORK, "ping_watchdog.selftest.pid")
    child_script = os.path.join(WORK, "_selftest_child.py")
    with open(child_script, "w", encoding="utf-8") as f:
        f.write("import sys, time\n"
                "print('child up', flush=True)\n"
                "time.sleep(3600)\n")

    argv = [sys.executable, child_script]
    seen = []
    try:
        p = subprocess.Popen(argv, cwd=ROOT, stdout=subprocess.PIPE,
                             stderr=subprocess.STDOUT, text=True, **DETACHED)
        seen.append(p.pid)
        print("  child #1 pid %d" % p.pid, flush=True)
        time.sleep(1.0)
        kill_tree(p.pid, "selftest child #1")
        print("  killed child #1 on purpose", flush=True)

        # One supervise iteration, by hand, so the test is deterministic.
        p2 = subprocess.Popen(argv, cwd=ROOT, stdout=subprocess.PIPE,
                              stderr=subprocess.STDOUT, text=True, **DETACHED)
        seen.append(p2.pid)
        print("  child #2 pid %d (relaunched)" % p2.pid, flush=True)
        ok = p2.poll() is None and p2.pid != p.pid
        kill_tree(p2.pid, "selftest child #2")

        # And the flag under test: is a detached child really outside a
        # console control event's reach?
        print("  detached child survived spawn with no console: %s"
              % ("yes" if ok else "NO"), flush=True)
        print("  SELFTEST %s" % ("PASSED" if ok else "FAILED"), flush=True)
        return 0 if ok else 1
    finally:
        for pid in seen:
            kill_tree(pid, "selftest cleanup")
        for p in (STAMP, PIDFILE, child_script):
            try:
                os.remove(p)
            except OSError:
                pass
        STAMP, PIDFILE = live_stamp, live_pid


# --------------------------------------------------------------------------
# the supervise loop
# --------------------------------------------------------------------------

def supervise(argv, restart_delay, max_delay):
    """Relaunch `argv` forever. Nothing in here may raise."""
    log("watchdog: supervising: %s" % " ".join(argv[1:]))
    restarts = 0
    delay = restart_delay
    child = None
    ctrl_ok = ignore_ctrl_events()
    log("watchdog: console control events ignored: %s" % ("yes" if ctrl_ok else "no"))

    while True:
        t0 = time.time()
        try:
            child = subprocess.Popen(argv, cwd=ROOT, stdout=sys.stdout,
                                    stderr=subprocess.STDOUT, **DETACHED)
            log("watchdog: tier-2 pid %d up" % child.pid)
            write_json(STAMP, {"watchdog_pid": os.getpid(),
                               "child_pid": child.pid,
                               "restarts": restarts,
                               "at": time.strftime("%Y-%m-%dT%H:%M:%S"),
                               "at_epoch": time.time(),
                               "cmd": argv[1:]})
            rc = child.wait()
            up = time.time() - t0
            restarts += 1
            log("watchdog: tier-2 exited rc=%s after %.0fs; restart #%d in %ds"
                % (rc, up, restarts, delay))
            # A long-lived child that came back quickly means a crash loop;
            # back off so a genuinely broken tier 2 cannot spin the CPU.
            if up < 60:
                delay = min(max_delay, delay * 2)
            else:
                delay = restart_delay
        except KeyboardInterrupt:
            log("watchdog: interrupted; leaving tier 2 running")
            break
        except Exception as e:                  # noqa: BLE001
            restarts += 1
            log("watchdog: supervise error %s: %s; restart #%d in %ds"
                % (type(e).__name__, e, restarts, delay))
            try:
                write_json(STAMP, {"watchdog_pid": os.getpid(),
                                   "child_pid": None,
                                   "restarts": restarts,
                                   "at": time.strftime("%Y-%m-%dT%H:%M:%S"),
                                   "at_epoch": time.time(),
                                   "error": "%s: %s" % (type(e).__name__, e)})
            except Exception:                   # noqa: BLE001
                pass
        try:
            time.sleep(delay)
        except KeyboardInterrupt:
            break
    return 0


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--interval", type=int, default=60,
                    help="seconds between decompilation ticks (tier 1)")
    ap.add_argument("--work", default="auto", choices=["harvest", "auto", None])
    ap.add_argument("--fast", action="store_true",
                    help="status + sync only, no decompilation slice")
    ap.add_argument("--restart-delay", type=int, default=5)
    ap.add_argument("--max-delay", type=int, default=300)
    ap.add_argument("--arm", action="store_true",
                    help="start a detached watchdog (idempotent)")
    ap.add_argument("--stop", action="store_true")
    ap.add_argument("--status", action="store_true")
    ap.add_argument("--selftest", action="store_true")
    a = ap.parse_args()

    if a.status:
        return status()
    if a.selftest:
        return selftest()
    if a.stop:
        return stop_chain()

    os.makedirs(WORK, exist_ok=True)

    if a.arm:
        stamp = read_json(STAMP, {}) or {}
        if alive(stamp.get("watchdog_pid")):
            print("watchdog already armed as pid %s (stamp %.0fs old)"
                  % (stamp.get("watchdog_pid"),
                     time.time() - stamp.get("at_epoch", time.time())))
            print("  use --status to inspect, --stop to tear down")
            return 0
        logf = open(LOGFILE, "a", encoding="utf-8")
        argv = [sys.executable, os.path.abspath(__file__),
                "--interval", str(a.interval),
                "--restart-delay", str(a.restart_delay),
                "--max-delay", str(a.max_delay)]
        if a.work:
            argv += ["--work", a.work]
        if a.fast:
            argv.append("--fast")
        p = subprocess.Popen(argv, cwd=ROOT, stdout=logf,
                             stderr=subprocess.STDOUT, **DETACHED)
        print("watchdog armed: pid %d -> work/ping.log" % p.pid)
        print("  chain: watchdog -> ping_supervisor -> keepalive --loop "
              "--interval %d --work %s" % (a.interval, a.work or "status only"))
        print("  inspect: python tools/ping_watchdog.py --status")
        print("  tear down: python tools/ping_watchdog.py --stop")
        return 0

    # Already-running check, so a second foreground watchdog is refused.
    stamp = read_json(STAMP, {}) or {}
    other = stamp.get("watchdog_pid")
    if alive(other) and other != os.getpid():
        print("watchdog already running as pid %s -- not starting a second."
              % other)
        print("(use --stop first if you really want a new one)")
        return 1

    ignore_ctrl_events()
    with open(PIDFILE, "w", encoding="utf-8") as f:
        f.write(str(os.getpid()))
    return supervise(tier2_argv(a.interval, a.work, a.fast),
                     a.restart_delay, a.max_delay)


if __name__ == "__main__":
    try:
        sys.exit(main())
    except KeyboardInterrupt:
        sys.exit(0)
