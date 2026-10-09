"""Does the semantic matcher actually help on the frame-blocked population?

`main@0x1279a90` is a 64-bit element swap whose frame uses the writeback `sp`
forms Clang 5.0.1 cannot emit:

    ldr  x8, [x0, #0xe0]
    add  x9, x8, w1, uxtw #4
    add  x8, x8, w2, uxtw #4
    ldp  x10, x11, [x9]
    stp  x10, x11, [sp, #-0x10]!      <- blocks byte-matching
    ldp  x10, x11, [x8]
    stp  x10, x11, [x9]
    ldp  x9, x10, [sp], #0x10          <- blocks byte-matching
    stp  x9, x10, [x8]
    ret

79.5% of what remains is blocked exactly this way, so if the matcher cannot
accept this, it cannot help where it is needed.

The control matters as much as the test: a matcher that accepts *everything*
would pass this too. So the same C is perturbed by one constant and must then be
rejected. A verdict of "equivalent" with no matching control is worth nothing.
"""

import os
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))
import match_harness as MH      # noqa: E402
import sem_match as SM          # noqa: E402
from sem_match_selftest import compile_to_bytes   # noqa: E402

ADDR = 0x1279A90
MODULE = "main"

# `add x9, x8, w1, uxtw #4` -- the `#4` after an extend is a *shift*, so the
# stride is 16, and the element is the 16 bytes `ldp x10, x11` loads. Indexing a
# `uint64_t*` gives a stride of 8, which is a different program: the original then
# reads addresses the candidate never touches, and the two disagree for reasons
# that have nothing to do with the frame. This was the first version, and it is
# recorded here because reading `#4` as a scale factor is the obvious mistake.
GOOD = """
#include <stdint.h>
typedef struct { uint64_t lo, hi; } Pair;
void f(void* base, uint32_t i, uint32_t j) {
    Pair* a = (Pair*)((char*)base + 0xe0);
    Pair t = a[i];
    a[i] = a[j];
    a[j] = t;
}
"""
# One constant changed: 0xe0 -> 0xe8. Still a plausible-looking decompilation, and
# wrong. If the matcher accepts this, it is not measuring anything.
BAD = GOOD.replace("0xe0", "0xe8")


def orig_bytes():
    funcs = dict((a, (s, n, d)) for a, s, n, d in MH.load_functions(MODULE))
    size = funcs[ADDR][0]
    blob = MH.text_blob(MODULE)
    return blob[ADDR:ADDR + size]


def main():
    try:
        SM._uc()
    except SM.SemUnavailable as e:
        print("  SKIP: %s" % e)
        return 2

    md = MH._md()
    ins = list(md.disasm(orig_bytes(), ADDR))
    print("  original (%d insns):" % len(ins))
    for i in ins:
        print("       %-8s %s" % (i.mnemonic, i.op_str))
    print()

    good = compile_to_bytes(GOOD)
    bad = compile_to_bytes(BAD)
    print("  candidate C compiles to %d bytes (retail body is %d)"
          % (len(good), len(orig_bytes())))
    print()

    v, why = SM.compare(orig_bytes(), good)
    print("  [frame-blocked body, equivalent C]  -> %s" % v)
    print("         %s" % why)
    ok1 = (v == "equivalent")

    v2, why2 = SM.compare(orig_bytes(), bad)
    print("  [same C, one constant wrong]        -> %s" % v2)
    print("         %s" % why2)
    ok2 = (v2 == "different")

    print()
    if ok1 and ok2:
        print("  RESULT: the matcher accepts a frame-blocked body byte-matching "
              "can never reach, and still rejects a near-miss.")
        return 0
    if not ok1:
        print("  RESULT: FAILED to accept the frame-blocked body. The matcher "
              "does not help on the population that needs it.")
    if not ok2:
        print("  RESULT: FAILED to reject the near-miss. The matcher is unsafe "
              "and must not be used to accept anything.")
    return 1


if __name__ == "__main__":
    sys.exit(main())
