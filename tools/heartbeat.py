# Always-on ping for this session.
#
# Two things it must never do: die, or report a number it did not measure.
#
#  * Every probe is isolated in its own try/except. An earlier version ran the
#    probes inline and exited 255 when one threw, which is exactly the "ticks
#    fail" mode that keeps getting the loop restarted by hand.
#  * The beat is short (~5 min) so a missed wake costs little. The chain is
#    self-sustaining: each wake relaunches this script.
#
# This is *this session's* heartbeat only. The unattended decompilation loop is
# the detached `tools/keepalive.py --work auto`, which does not depend on it.
import json, os, subprocess, sys, time, datetime

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ENV = dict(os.environ, POKESWORD_CLANG=r"C:\llvm-5.0.1\bin")
BEAT = 300  # seconds


def probe(label, argv, pick=None, timeout=2400):
    """Run a probe and return one informative line. Never raises."""
    try:
        r = subprocess.run([sys.executable] + argv, cwd=ROOT, env=ENV,
                           capture_output=True, text=True, timeout=timeout)
        out = r.stdout or ""
        if pick:
            for ln in out.splitlines():
                if pick in ln:
                    return ln.strip()
        return "(no %s line; rc=%d)" % (pick or label, r.returncode)
    except Exception as e:
        return "probe %s failed: %s: %s" % (label, type(e).__name__, e)


def git(*args):
    try:
        return subprocess.run(["git"] + list(args), cwd=ROOT,
                              capture_output=True, text=True, timeout=120).stdout.strip()
    except Exception as e:
        return "err:%s" % type(e).__name__


def beat(n):
    now = datetime.datetime.now().strftime("%H:%M:%S")
    print("=== BEAT %s (#%d) ===" % (now, n))
    print("  progress: " + probe("progress", ["tools/match_progress.py"], "TOTAL"))
    print("  audit   : " + probe("audit", ["tools/audit.py"], "AUDIT"))
    head, rem = git("rev-parse", "--short", "refs/heads/main"), \
                git("rev-parse", "--short", "refs/remotes/origin/main")
    ahead = git("rev-list", "--count", "refs/remotes/origin/main..refs/heads/main")
    dirty = "DIRTY" if git("status", "--porcelain") else "clean"
    print("  git     : HEAD %s remote %s ahead=%s tree=%s" % (head, rem, ahead, dirty))
    # Read the loop's state file rather than *running* the loop. A probe must not
    # trigger real work -- `keepalive --work auto` rewrites prog/ and the registry,
    # so calling it from the heartbeat would race the very audit printed above.
    # (`--dry-run` is not a keepalive option; do not invent one.)
    try:
        st = json.load(open(os.path.join(ROOT, "work", "keepalive_state.json")))
        print("  loop    : tick %s harvest_idx %s" % (st.get("tick"), st.get("harvest_idx")))
    except Exception as e:
        print("  loop    : state unreadable (%s)" % type(e).__name__)


def main():
    try:
        n = int(json.load(open(os.path.join(ROOT, "work", "beat_count.json")))["n"]) + 1
    except Exception:
        n = 1
    time.sleep(BEAT)
    try:
        beat(n)
        json.dump({"n": n, "at": datetime.datetime.now().isoformat()},
                  open(os.path.join(ROOT, "work", "beat_count.json"), "w"))
    except Exception as e:
        # Even a failure to *report* must not stop the next beat being scheduled.
        print("beat %d reporting problem: %s: %s" % (n, type(e).__name__, e))
    finally:
        print("beat %d done; exit 0 regardless" % n)


if __name__ == "__main__":
    main()
    sys.exit(0)
