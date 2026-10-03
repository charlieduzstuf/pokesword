#!/usr/bin/env python3
"""Exercise straight_line.py over every function in the binary, not a sample.

Why this exists
---------------
Three separate crashes turned up while running `tools/sl_diag.py`, each on a
different unmodelled input, all inside `straight_line.py`'s emit path:

    TypeError       expected string or bytes-like object, got 'NoneType'
                   (wreg reached with the None from an unparsed memory operand)
    UnboundLocalError cannot access local variable 'n'
                   (_render's "addr" branch read n from an enclosing scope)

None of them would have been caught by re-running the diagnostic, because the
diagnostic aborts at the first one and reports nothing. That is the problem with
using a sample to explore a translator: a crash is indistinguishable from a
hang, and the fix is to run the whole population with the failure isolated per
function rather than to find the next crash by hand.

So: every function in every module is pushed through `translate()`, each in its
own try/except, and the *distinct* failure signatures are reported with counts
and one example each. A signature that appears once is a data point; a signature
that appears forty thousand times is the thing to fix.

`Bail` is the expected outcome and is counted as a decline, not a failure --
that is the translator declining cleanly, which is correct behaviour. Anything
else is a bug in the translator and is reported separately, because conflating
the two would hide the bugs inside a large number of legitimate declines.

Usage:
    python tools/sl_sweep.py
    python tools/sl_sweep.py --module main --examples 3
"""

import argparse
import collections
import os
import sys
import traceback

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402
import straight_line as SL  # noqa: E402

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]


def signature(exc, tb):
    """A stable label for one failure mode.

    Uses the deepest frame's function and the exception type, not the message:
    the message varies per input (`got 'NoneType'` vs a different object) while
    the cause does not. The last line of the source line is appended because two
    distinct bugs can share a function and line count.
    """
    frames = traceback.extract_tb(tb)
    if not frames:
        return "%s: ?" % type(exc).__name__
    last = frames[-1]
    return "%s at %s:%d in %s()" % (
        type(exc).__name__, os.path.basename(last.filename),
        last.lineno, last.name)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", action="append", default=None)
    ap.add_argument("--examples", type=int, default=1,
                    help="example addresses to print per signature")
    a = ap.parse_args()

    mods = a.module or MODULES
    md = MH._md()

    declined = collections.Counter()
    failures = collections.Counter()
    examples = collections.defaultdict(list)
    emitted = 0
    total = 0

    for mod in mods:
        blob = MH.text_blob(mod)
        n_mod = emitted_mod = 0
        for addr, size, name, _dec in MH.load_functions(mod):
            n_mod += 1
            total += 1
            try:
                ins = list(md.disasm(blob[addr:addr + size], addr))
                src, _sig = SL.StraightLine(ins).translate("f_%x" % addr)
            except SL.Bail:
                declined[mod] += 1
                continue
            except RecursionError:
                failures["RecursionError (translator)"] += 1
                if len(examples["RecursionError (translator)"]) < \
                        a.examples:
                    examples["RecursionError (translator)"].append(
                        (mod, "0x%x" % addr, name))
                continue
            except Exception as exc:            # noqa: BLE001
                sig = signature(exc, exc.__traceback__)
                failures[sig] += 1
                if len(examples[sig]) < a.examples:
                    examples[sig].append((mod, "0x%x" % addr, name))
                continue
            emitted_mod += 1
            emitted += 1

        print("%-9s %7d functions, %6d declined, %6d emitted, %6d crashed"
              % (mod, n_mod, declined[mod], emitted_mod,
                 sum(v for k, v in failures.items() if examples.get(k))))
        sys.stdout.flush()

    print()
    print("=" * 74)
    print("TOTAL %d functions: %d declined cleanly, %d emitted, %d crashed"
          % (total, sum(declined.values()), emitted,
             sum(failures.values())))

    if failures:
        print()
        print("BUGS -- distinct failure signatures, most frequent first.")
        print("These are translator bugs, not declines. Each needs a fix.")
        for sig, n in failures.most_common():
            print("   %8d  %s" % (n, sig))
            for mod, ad, nm in examples.get(sig, []):
                print("            e.g. %s+%s  %s" % (mod, ad, nm))
    else:
        print()
        print("no crashes: every input either declined cleanly or emitted.")

    print()
    print("decline rate by module:")
    for mod in mods:
        print("   %-9s %7d declined" % (mod, declined[mod]))
    return 1 if failures else 0


if __name__ == "__main__":
    sys.exit(main())
