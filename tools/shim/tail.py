#!/usr/bin/env python3
"""Minimal `tail` stand-in for asm-differ's pager pipeline.

asm-differ spawns `tail -c <N>` as a buffer stage before `less`:

    BUFFER_CMD = ["tail", "-c", str(10 ** 9)]

Neither `tail` nor `less` exists on Windows, so tools/shim/ provides both. This
implements only the form asm-differ uses: read all of stdin, keep the last N
bytes, write them to stdout.
"""

import sys


def main(argv):
    n = None
    i = 0
    while i < len(argv):
        a = argv[i]
        if a == "-c" and i + 1 < len(argv):
            n = int(argv[i + 1])
            i += 2
            continue
        if a.startswith("-c") and len(a) > 2:
            n = int(a[2:])
            i += 1
            continue
        if a in ("-n", "-f", "-q"):
            # Not used by asm-differ; accept and ignore.
            i += 1
            continue
        i += 1

    data = sys.stdin.buffer.read()
    if n is not None:
        data = data[-n:]
    sys.stdout.buffer.write(data)
    sys.stdout.buffer.flush()
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
