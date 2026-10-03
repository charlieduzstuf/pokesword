#!/usr/bin/env python3
"""Minimal `less` stand-in for asm-differ's pager pipeline.

asm-differ spawns `less` with no arguments and feeds it the disassembly
difference on stdin. There is no `less` on Windows, and an interactive pager is
not useful for a captured diff anyway, so this copies stdin straight to stdout.

Flags asm-differ might pass are accepted and ignored.
"""

import sys


def main(argv):
    # Honour the usual "quit if output fits on one screen" flags, then stream.
    for chunk in iter(lambda: sys.stdin.buffer.read(65536), b""):
        sys.stdout.buffer.write(chunk)
        sys.stdout.buffer.flush()
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
