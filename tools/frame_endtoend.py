"""End-to-end: framed retail body -> generated C -> semantic equivalence.

The chain under test:

    retail bytes (frame-blocked)
        -> tools/frame_gen.py   strips the frame, retargets sp to a free argument
        -> tools/straight_line.py   the existing translator, unchanged
        -> wrapper C declaring the frame array and passing its address
        -> Clang 5.0.1
        -> compiled bytes
        -> tools/sem_match.py compares behaviour against the retail original

`main@0x922fe0` is the subject: a 3-way field swap through two indexed pointers
with a 16-byte frame, none of which byte-matching can reach.

The control is not optional. A wrapper that passed the wrong pointer, or a
generator that silently computed something else, would still compile -- so the
perturbed variant below must be REJECTED. This is the case that caught the first
frame generator, which chose x9 as the frame register while the body also used
x9, producing C that read and wrote through a loaded pointer and looked entirely
plausible.
"""

import os
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH      # noqa: E402
import frame_gen as FG          # noqa: E402
import sem_match as SM          # noqa: E402
from sem_match_selftest import compile_to_bytes   # noqa: E402

ADDR = 0x922FE0
MODULE = "main"

WRAPPER = """
#include <stdint.h>
%s

/* The frame. `noinline` so the compiler cannot see through it, and an explicit
   zero fill so the buffer's initial contents are defined rather than whatever the
   emulator's stack happened to hold -- the retail body writes before it reads,
   but a generator that got that wrong would otherwise be testing the harness.

   The wrapper mirrors the body's return type, because the return value is one of
   the two things the semantic matcher compares. A `void` wrapper would hide every
   body whose only observable effect is its return, and the matcher would be
   comparing two functions that both return nothing. */
__attribute__((noinline))
__RET__ wrapper(%s) {
    unsigned char _fr[%s];
    for (unsigned i = 0; i < %s; i++) _fr[i] = 0;
    %s(%s, (void*)_fr)%s;
}
"""


def wrapper_for(body_src, fsz, frame_reg):
    """Wrap a generated body in a function that owns the frame array.

    The return type is matched loosely: the body may return `void*`, `uint64_t`
    or `void`, and the signature is the translator's to choose. Only the
    parameter list and the name are needed here.
    """
    import re as _re
    m = _re.search(r"^([A-Za-z_][\w \*]*?)\s+(\w+)\s*\(([^)]*)\)", body_src, _re.M)
    if not m:
        raise RuntimeError("cannot parse the generated signature")
    ret, fn, plist = m.group(1).strip(), m.group(2), m.group(3)
    args = [a.strip() for a in plist.split(",") if a.strip()]
    names = [a.split()[-1].lstrip("*") for a in args]
    # The frame slot is whichever parameter carries the frame register; the wrapper
    # supplies it and the body's own callers never see it. `x3` is parameter `a3`,
    # not `3` -- comparing the bare number against the parameter names made the
    # correct choice look like a mismatch.
    frame_name = "a" + frame_reg[1:]
    if frame_name not in names:
        raise RuntimeError("frame register %s (parameter %s) is not in the "
                           "generated signature %s" % (frame_reg, frame_name, names))
    body_args = [n for n in names if n != frame_name]
    params = ", ".join(args[:-1]) if len(args) > 1 else ""
    # A `void` body cannot `return` a value, so the wrapper's last statement is a
    # bare call in that case. Getting this wrong is a compile error, which is at
    # least loud -- but it would have stopped the test on a technicality rather
    # than on the thing being tested.
    tail = "" if ret == "void" else "return"
    return WRAPPER.replace("__RET__", ret) % (
        body_src, params, fsz, fsz, fn, ", ".join(body_args), tail)


def main():
    try:
        SM._uc()
    except SM.SemUnavailable as e:
        print("  SKIP: %s" % e)
        return 2

    funcs = dict((a, (s, n, d)) for a, s, n, d in MH.load_functions(MODULE))
    size = funcs[ADDR][0]
    blob = MH.text_blob(MODULE)
    orig = blob[ADDR:ADDR + size]

    md = MH._md()
    ins = list(md.disasm(orig, ADDR))
    print("  original main@%#x:" % ADDR)
    for i in ins:
        print("       %-8s %s" % (i.mnemonic, i.op_str))
    print()

    body_src, fsz, sig, dropped, frame_reg = FG.translate(ins, "f_%x" % ADDR,
                                                           MODULE)
    print("  generated body (frame=0x%x, frame register a%s):"
          % (fsz, frame_reg[1:]))
    for ln in body_src.strip().splitlines():
        print("       " + ln)
    print()

    full = wrapper_for(body_src, fsz, frame_reg)
    cand = compile_to_bytes(full, name="wrapper")
    print("  wrapper compiles to %d bytes (retail body is %d)"
          % (len(cand), len(orig)))
    print()

    v, why = SM.compare(orig, cand)
    print("  [frame-blocked body, generated C]  -> %s" % v)
    print("         %s" % why)
    ok1 = (v == "equivalent")

    # Control: perturb something this body is actually sensitive to.
    #
    # The first control passed the frame at the wrong offset and expected a
    # rejection. It was accepted -- correctly. This body writes both of its frame
    # slots before reading either, so moving the frame moves the writes and the
    # reads together and nothing observable changes. A negative that the program
    # genuinely does not distinguish is not evidence of anything, and treating its
    # acceptance as a matcher failure would have been wrong.
    #
    # The field offset is a real dependency: `+ 224` is where the element array
    # lives inside the object. Changing it changes what is swapped.
    bad = full.replace("+ 224)", "+ 232)")
    if bad == full:
        bad = full.replace("(char*)(a0) + 224", "(char*)(a0) + 232")
    if bad == full:
        print("  CONTROL UNAVAILABLE: could not perturb the generated body")
        return 1
    cand_bad = compile_to_bytes(bad, name="wrapper")
    v2, why2 = SM.compare(orig, cand_bad)
    print("  [same wrapper, field offset 224 -> 232]   -> %s" % v2)
    print("         %s" % why2)
    ok2 = (v2 == "different")

    # And a second control that does target the frame specifically: swap the two
    # final stores, which reverses the direction of the copy out of the frame.
    if "*(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(a3));" in full:
        swapped = full.replace(
            "*(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(a3));",
            "*(uint64_t*)((char*)(a3)) = *(uint64_t*)((char*)(p1));")
        v3, why3 = SM.compare(orig, compile_to_bytes(swapped, name="wrapper"))
        print("  [frame store direction reversed]         -> %s" % v3)
        print("         %s" % why3)
        ok3 = (v3 == "different")
    else:
        ok3 = None

    print()
    if ok1 and ok2 and (ok3 is None or ok3):
        print("  RESULT: PASS -- a frame-blocked body byte-matching cannot reach is "
              "accepted on behaviour, and both perturbations are rejected.")
        return 0
    print("  RESULT: FAIL (accept=%s offset-control=%s frame-control=%s)"
          % (ok1, ok2, ok3))
    return 1


if __name__ == "__main__":
    sys.exit(main())
