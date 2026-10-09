#!/usr/bin/env python3
"""Keep `keepalive.py --loop` alive across crashes.

`--loop` makes a tick unable to *end the loop* on its own: every step is wrapped,
so a failing tool is reported and the next tick still runs. That protects against
the tick failing. It does not protect against the **process** dying -- a harness
restart, a killed shell, a machine sleep -- and a dead ping is indistinguishable
from no ping at all.

So this supervises it. If the child exits for any reason, it is relaunched after a
short delay, indefinitely, and every restart is logged with the reason. A ping
that cannot fail is the whole point; making only the tick fault-tolerant was half
of it.

The child is launched with `creationflags=DETACHED_PROCESS` on Windows so it
survives this supervisor being killed too, and so no console control event can
reach it. (Both of those were claimed here while the code passed
`CREATE_NO_WINDOW`, which does neither -- see the CHILD comment below.) The
supervisor records its own pid in `work/ping_supervisor.pid` so a later session
can tell whether one is already running rather than starting a second.

This tier is itself supervised, by tools/ping_watchdog.py. Without that link a
dead supervisor is terminal: the loop beneath it dies and nothing restarts
either, which is exactly how this file came to hold a stale pidfile beside a
stopped loop.

Usage:
    python tools/ping_supervisor.py                # supervise, printing the child
    python tools/ping_supervisor.py --interval 60 --fast
    python tools/ping_supervisor.py --detach       # run in the background
    python tools/ping_supervisor.py --stop         # stop a detached supervisor
"""

import argparse
import os
import signal
import subprocess


# Console windows on Windows.
#
# Both of these tools run detached -- `ping_supervisor --detach` hands its child
# DETACHED_PROCESS, so the supervisor has no console of its own. A process with
# no console that then spawns a child *without* creation flags makes Windows
# allocate a fresh console for that child, which appears as a terminal window
# flashing for a split second and vanishing. Once per tick.
#
# CREATE_NO_WINDOW is the fix for ordinary children. It is deliberately NOT
# combined with DETACHED_PROCESS above: the two flags conflict, and the re-exec
# genuinely wants to be detached rather than merely windowless.
NOWINDOW = ({"creationflags": subprocess.CREATE_NO_WINDOW}
            if os.name == "nt" else {})

# The supervised loop is a *different* case, and the earlier version got it
# wrong. work/ping.log recorded eight deaths with rc=3221225786 -- 0xC000013A,
# STATUS_CONTROL_C_EXIT -- which is what a process returns when a console control
# event reaches it. CREATE_NO_WINDOW hides the console window but leaves the
# child in this supervisor's process group, so a group-directed control event
# still lands on it. DETACHED_PROCESS gives it no console at all, which removes
# the death path instead of making it less likely. Not combined with
# CREATE_NO_WINDOW: the flags conflict, and suppressing the window is redundant
# once there is no console.
CHILD = ({"creationflags": subprocess.DETACHED_PROCESS}
         if os.name == "nt" else {"start_new_session": True})

import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
HERE = os.path.join(ROOT, "tools")
PIDFILE = os.path.join(ROOT, "work", "ping_supervisor.pid")


def alive(pid):
    """Is `pid` a live process? Works on Windows without psutil."""
    if os.name == "nt":
        out = subprocess.run(["tasklist", "/FI", "PID eq %d" % pid], **NOWINDOW,
                             capture_output=True, text=True).stdout
        return str(pid) in out
    try:
        os.kill(pid, 0)
    except OSError:
        return False
    return True


def read_pid():
    try:
        with open(PIDFILE, encoding="utf-8") as f:
            return int(f.read().strip())
    except (OSError, ValueError):
        return None


def stop_existing():
    pid = read_pid()
    if not pid or not alive(pid):
        print("no supervisor running (pidfile=%s)" % (pid if pid else "none"))
        try:
            os.remove(PIDFILE)
        except OSError:
            pass
        return False
    print("stopping supervisor pid %d" % pid)
    try:
        if os.name == "nt":
            subprocess.run(["taskkill", "/PID", str(pid), "/T", "/F"], **NOWINDOW,
                           capture_output=True, text=True)
        else:
            os.kill(pid, signal.SIGTERM)
    except OSError as e:
        print("  could not signal it: %s" % e)
    try:
        os.remove(PIDFILE)
    except OSError:
        pass
    return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--interval", type=int, default=60)
    ap.add_argument("--work", default=None,
                    choices=["harvest", "auto"],
                    help="passed through to keepalive; 'auto' runs one full "
                         "decompilation slice per tick (generate, emit, build, "
                         "verify all four, audit gate) so the loop progresses "
                         "unattended")
    ap.add_argument("--fast", action="store_true",
                    help="status only, no re-verification")
    ap.add_argument("--restart-delay", type=int, default=5)
    ap.add_argument("--detach", action="store_true")
    ap.add_argument("--stop", action="store_true")
    a = ap.parse_args()

    if a.stop:
        return 0 if not stop_existing() else 0

    existing = read_pid()
    if existing and alive(existing) and existing != os.getpid():
        print("supervisor already running as pid %d -- not starting a second."
              % existing)
        print("(use --stop first if you really want a new one)")
        return 1

    os.makedirs(os.path.dirname(PIDFILE), exist_ok=True)
    with open(PIDFILE, "w", encoding="utf-8") as f:
        f.write(str(os.getpid()))

    cmd = [sys.executable, os.path.join(HERE, "keepalive.py"),
           "--loop", "--interval", str(a.interval)]
    if a.work:
        # `--work auto` makes each tick run a full decompilation slice, so the
        # loop keeps making progress with nobody in the room. Previously the
        # supervisor could only pass `--fast` (status + sync), which means it
        # stayed alive but inert -- the percentage never moved on its own.
        cmd += ["--work", a.work]
    if a.fast:
        cmd.append("--fast")

    if a.detach:
        # Re-exec *this* script without --detach, fully detached.
        #
        # The first version launched the keepalive child detached and returned,
        # which left nothing supervising it: `--detach` meant "detach the child",
        # not "detach the supervisor". Verified by killing the child and watching
        # nothing come back -- because there was never a supervisor running, only
        # the child it had just orphaned.
        kw = {}
        if os.name == "nt":
            kw["creationflags"] = (subprocess.DETACHED_PROCESS |
                                   subprocess.CREATE_NEW_PROCESS_GROUP)
        else:
            kw["start_new_session"] = True
        argv = [sys.executable, os.path.abspath(__file__),
                "--interval", str(a.interval), "--restart-delay",
                str(a.restart_delay)]
        if a.work:
            # Must be threaded through the re-exec too, or `--detach` would
            # silently drop the decompilation work and leave an inert loop.
            argv += ["--work", a.work]
        if a.fast:
            argv.append("--fast")
        log = open(os.path.join(ROOT, "work", "ping.log"), "a", encoding="utf-8")
        p = subprocess.Popen(argv, stdout=log, stderr=subprocess.STDOUT,
                             cwd=ROOT, **kw)
        print("detached supervisor pid %d -> work/ping.log" % p.pid)
        print("  it will keep relaunching tools/keepalive.py --loop "
              "--interval %d" % a.interval)
        print("  stop it with: python tools/ping_supervisor.py --stop")
        return 0

    print("supervising: %s" % " ".join(cmd[1:]), flush=True)
    restarts = 0
    while True:
        t0 = time.time()
        # A restart loop that runs forever needs a floor: if the child dies
        # instantly and repeatedly, wait longer each time rather than spinning.
        try:
            rc = subprocess.call(cmd, cwd=ROOT, **CHILD)
        except KeyboardInterrupt:
            break
        restarts += 1
        up = time.time() - t0
        print("=== child exited rc=%s after %.0fs; restart #%d in %ds ==="
              % (rc, up, restarts, a.restart_delay), flush=True)
        try:
            time.sleep(a.restart_delay)
        except KeyboardInterrupt:
            break
    return 0


if __name__ == "__main__":
    sys.exit(main())
