"""Emit the project status as JSON: percentage, per-module counts, and the
build/verify verdict.

Consumed by `.github/workflows/progress.yml`, which turns it into a
shields.io endpoint badge, and printed as a Markdown table for the README.

The percentage here is deliberately the *same* figure `tools/match_progress.py`
prints, parsed rather than recomputed. Two implementations of a counting rule
drift, and the drift is invisible because both numbers look plausible -- which
is exactly what happened in this project: `tools/keepalive.py` reimplemented the
count and reported 26,544 where `match_progress.py` reported 26,536, with a
docstring that confidently invented a reason for the gap.

Usage:
    python tools/progress_json.py                 # human-readable summary
    python tools/progress_json.py --format json   # shields.io endpoint payload
    python tools/progress_json.py --format markdown
"""

import argparse
import collections
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODULES = ("main", "sdk", "subsdk0", "subsdk1")

# Shields.io colours: red -> yellow -> yellowgreen -> green.
def _colour(pct):
    if pct >= 99.0:
        return "brightgreen"
    if pct >= 90.0:
        return "green"
    if pct >= 50.0:
        return "yellowgreen"
    if pct >= 25.0:
        return "yellow"
    return "orange"


def run_match_progress():
    """Parse the authoritative TOTAL row from match_progress.py."""
    exe = sys.executable
    script = os.path.join(ROOT, "tools", "match_progress.py")
    try:
        r = subprocess.run([exe, script], capture_output=True, text=True,
                           cwd=ROOT, timeout=600)
    except Exception as e:                                        # noqa: BLE001
        return None, "match_progress.py failed: %s" % e
    per = {}
    total = matched = population = None
    for line in r.stdout.splitlines():
        f = line.split()
        if len(f) >= 4 and f[0] in MODULES:
            try:
                per[f[0]] = {"population": int(f[1]), "matched": int(f[2]),
                            "remaining": int(f[3])}
            except ValueError:
                pass
        if len(f) >= 5 and f[0] == "TOTAL":
            try:
                population, matched = int(f[1]), int(f[2])
            except ValueError:
                pass
    if matched is None or not population:
        return None, "no TOTAL row in match_progress.py output"
    return {"population": population, "matched": matched,
            "remaining": population - matched,
            "pct": 100.0 * matched / population,
            "per_module": per}, None


def run_verify():
    """Re-verify every module. Needs the project toolchain (Clang 5.0.1).

    Returns (ok, total_verified, total_functions, detail_lines).
    """
    exe = sys.executable
    script = os.path.join(ROOT, "tools", "verify_matches.py")
    env = dict(os.environ)
    if os.environ.get("POKESWORD_CLANG"):
        env["POKESWORD_CLANG"] = os.environ["POKESWORD_CLANG"]
    ok_v = ok_f = 0
    detail = []
    for m in MODULES:
        try:
            r = subprocess.run([exe, script, "--module", m],
                               capture_output=True, text=True, cwd=ROOT,
                               timeout=7200, env=env)
        except Exception as e:                                    # noqa: BLE001
            return None, 0, 0, ["%s: %s" % (m, e)]
        txt = r.stdout + r.stderr
        mm = re.search(r"VERIFIED\s+(\d+)\s*/\s*(\d+)", txt)
        if mm:
            ok_v += int(mm.group(1))
            ok_f += int(mm.group(2))
            detail.append("%s %s/%s" % (m, mm.group(1), mm.group(2)))
        else:
            detail.append("%s: no verdict line" % m)
    return True, ok_v, ok_f, detail


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--format", default="text",
                    choices=("text", "json", "markdown", "objdiff"))
    ap.add_argument("--verify", action="store_true",
                    help="also re-verify every module (needs Clang 5.0.1)")
    ap.add_argument("--out", default=None, help="write to this path")
    a = ap.parse_args()

    prog, err = run_match_progress()
    if prog is None:
        msg = {"schemaVersion": 1, "label": "matching",
               "message": "error", "color": "red"}
        if a.format == "json":
            print(json.dumps(msg))
        else:
            print("progress unavailable: %s" % err)
        return 1

    if a.verify:
        v_ok, vv, vf, vdetail = run_verify()
    else:
        v_ok, vv, vf, vdetail = None, 0, 0, []

    pct = prog["pct"]
    if a.format == "objdiff":
        # decomp.dev expects `report.json` inside a `<VERSION>_report` artifact,
        # in objdiff's protobuf progress-report format. This is NOT that format.
        #
        # objdiff produces it by diffing the built object against the target, and
        # this project does not build through objdiff -- it has its own matching
        # harness (tools/match_harness.py) whose verdict is authoritative. So
        # this file carries the same information in this project's own JSON
        # shape, which is enough for a human reading the artifact but not enough
        # for decomp.dev to chart.
        #
        # Producing a real one means either building the project under objdiff,
        # or emitting its protobuf from these registries using objdiff's published
        # schema. Both are real work; neither is guessed at here.
        # See decomp/docs/decomp_dev.md.
        text = json.dumps({
            "format": "pokesword-progress",
            "note": ("NOT objdiff protobuf. decomp.dev will not chart this "
                     "until a real objdiff-format report is produced."),
            "version": "build562",
            "matching": {
                "total": prog["population"],
                "matched": prog["matched"],
                "percent": round(pct, 2),
                "modules": {m: {"matched": d["matched"],
                                 "total": d["population"]}
                            for m, d in prog["per_module"].items()},
            },
        }, indent=2)
    elif a.format == "json":
        payload = {
            "schemaVersion": 1,
            "label": "matching",
            "message": "%.2f%%" % pct,
            "color": _colour(pct),
        }
        if v_ok is not None:
            payload["namedLogo"] = "clang"
            payload["label"] = ("build" if (v_ok and vv == vf) else "verify")
            payload["message"] = ("%d/%d" % (vv, vf)) if v_ok else "error"
            payload["color"] = "brightgreen" if (v_ok and vv == vf) else "red"
        text = json.dumps(payload)
    elif a.format == "markdown":
        rows = ["| module | matched | total | % |",
                "|---|---:|---:|---:|"]
        for m in MODULES:
            d = prog["per_module"].get(m)
            if d:
                rows.append("| `%s` | %d | %d | %.2f%% |"
                            % (m, d["matched"], d["population"],
                               100.0 * d["matched"] / d["population"]))
        rows.append("| **total** | **%d** | **%d** | **%.2f%%** |"
                    % (prog["matched"], prog["population"], pct))
        text = "\n".join(rows)
        if v_ok is not None:
            text += "\n\nVerification: **%d / %d** %s\n" % (
                vv, vf, "clean" if (v_ok and vv == vf) else "MISMATCH")
    else:
        text = ("matching : %d / %d = %.2f%%\n"
                % (prog["matched"], prog["population"], pct))
        for m in MODULES:
            d = prog["per_module"].get(m)
            if d:
                text += ("  %-8s %7d / %7d  %6.2f%%\n"
                         % (m, d["matched"], d["population"],
                            100.0 * d["matched"] / d["population"]))
        if v_ok is not None:
            text += ("verify   : %d / %d  %s\n"
                     % (vv, vf, "clean" if (v_ok and vv == vf) else "MISMATCH"))
            for d in vdetail:
                text += "  %s\n" % d

    if a.out:
        os.makedirs(os.path.dirname(os.path.abspath(a.out)), exist_ok=True)
        with open(a.out, "w", encoding="utf-8") as fh:
            fh.write(text + "\n")
        print(text)
    else:
        print(text)
    return 0


if __name__ == "__main__":
    sys.exit(main())