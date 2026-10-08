# Robust heartbeat: each probe is independent and failure-tolerant, so a single
# error cannot kill the chain. The previous version exited 255 when one probe
# threw -- which is exactly the "ticks fail" mode we are trying to eliminate.
import json, os, subprocess, sys, time, datetime
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ENV = dict(os.environ, POKESWORD_CLANG=r"C:\llvm-5.0.1\bin")

def probe(label, argv, pick=None):
    try:
        r = subprocess.run([sys.executable] + argv, cwd=ROOT, env=ENV,
                           capture_output=True, text=True, timeout=1800)
        out = r.stdout or ""
        if pick:
            for ln in out.splitlines():
                if pick in ln:
                    return ln.strip()
        return "(no %s line; rc=%d)" % (pick or label, r.returncode)
    except Exception as e:
        return "probe %s raised %s: %s" % (label, type(e).__name__, e)

def tick(n):
    print("=== HEARTBEAT %s (beat %d) ===" % (datetime.datetime.now().strftime("%H:%M:%S"), n))
    print("  progress: " + probe("progress", ["tools/match_progress.py"], "TOTAL"))
    print("  git     : " + probe("git", ["-c","core.pager=cat"], None) if False else
          "  git     : HEAD %s remote %s ahead %s" % (
              subprocess.run(["git","rev-parse","--short","refs/heads/main"],cwd=ROOT,
                             capture_output=True,text=True).stdout.strip(),
              subprocess.run(["git","rev-parse","--short","refs/remotes/origin/main"],cwd=ROOT,
                             capture_output=True,text=True).stdout.strip(),
              subprocess.run(["git","rev-list","--count","refs/remotes/origin/main..refs/heads/main"],cwd=ROOT,
                             capture_output=True,text=True).stdout.strip()))
    print("  audit   : " + probe("audit", ["tools/audit.py"], "AUDIT"))
    try:
        st = json.load(open(os.path.join(ROOT, "work", "keepalive_state.json")))
        print("  loop    : tick %s harvest_idx %s" % (st.get("tick"), st.get("harvest_idx")))
    except Exception:
        print("  loop    : (keepalive state unreadable)")

n = 1
try:
    prev = json.load(open(os.path.join(ROOT, "work", "heartbeat_count.json")))
    n = int(prev) + 1
except Exception:
    n = 1
time.sleep(780)
tick(n)
try:
    json.dump({"beat": n}, open(os.path.join(ROOT, "work", "heartbeat_count.json"), "w"))
except Exception:
    pass
print("heartbeat %d complete" % n)
