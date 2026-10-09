"""Falsification for tools/sem_match.py.

Three properties, all required. A matcher is only worth having if it can be shown
to fail in the ways a matcher must fail; asserting that it works proves nothing.

  1. ACCEPT a byte-identical pair.                 (no false negatives)
  2. ACCEPT a semantically identical pair that is NOT byte-identical.
     This is the load-bearing test. Without it, "semantic matcher" could just be
     byte comparison wearing a disguise, and would inherit the same 21% ceiling
     while claiming to be something else.
  3. REJECT a one-instruction near-miss.           (no false positives)

Everything is built by compiling C with the project's own Clang 5.0.1 and reading
the emitted bytes, so the test exercises the real path rather than a mock.
"""

import os
import subprocess
import sys
import tempfile

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__))))
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import sem_match as SM   # noqa: E402

CLANG = os.path.join(r"C:\llvm-5.0.1\bin", "clang.exe")
OBJDUMP = os.path.join(r"C:\llvm-5.0.1\bin", "llvm-objdump.exe")


def compile_to_bytes(src, name="f"):
    """Compile `src` to AArch64 and return (bytes, function offset).

    Uses the project's compiler so the emitted code is the same code the matcher
    will be asked to judge in anger.
    """
    td = tempfile.mkdtemp(prefix="semself")
    cpath = os.path.join(td, "t.c")
    opath = os.path.join(td, "t.o")
    with open(cpath, "w", encoding="utf-8") as f:
        f.write(src)
    r = subprocess.run([CLANG, "-target", "aarch64-none-elf", "-O3", "-c",
                        "-o", opath, cpath],
                       capture_output=True, text=True)
    if r.returncode != 0:
        raise RuntimeError("compile failed:\n%s" % r.stderr[:400])
    d = subprocess.run([OBJDUMP, "-d", "--section=.text", opath],
                       capture_output=True, text=True).stdout
    code = bytearray()
    started = False
    # A C symbol prints as `f:`, a C++ one as `<_Z1fv>:`. Both appear depending on
    # the source language, and matching only one silently extracted nothing.
    headers = ("%s:" % name, "<%s>:" % name)
    for raw in d.splitlines():
        line = raw.strip()
        if not line:
            continue
        if any(line == h or line.startswith(h) for h in headers):
            started = True
            continue
        if started:
            parts = raw.split("\t")
            if len(parts) < 2:
                break
            hexpart = parts[1].replace(" ", "").strip()
            if not hexpart:
                break
            try:
                code += bytes.fromhex(hexpart)
            except ValueError:
                break
    if not code:
        raise RuntimeError("no bytes extracted:\n%s" % d[:400])
    return bytes(code)


PREAMBLE = "#include <stdint.h>\n"

# --- 1. byte-identical: the same source compiled twice -------------------
# Self-contained on purpose. An unresolved external call compiles to `b #0`,
# which leaves the body during emulation and is reported as "unknown" rather
# than as a result -- correct behaviour, but it would test nothing here.
SRC_REF = PREAMBLE + """
void f(uint32_t a0, uint32_t* a1) { *a1 = a0 * 7u; }
"""

# --- 2. same meaning, different bytes ------------------------------------
# `a * 2 + 1` vs `a + a + 1`: identical value, different instruction sequence.
# If the matcher rejects this it is doing byte comparison.
SRC_A = PREAMBLE + "uint32_t f(uint32_t a0) { return a0 * 2u + 1u; }\n"
SRC_B = PREAMBLE + "uint32_t f(uint32_t a0) { return a0 + a0 + 1u; }\n"
# ... and a version with an extra live-but-unused computation, so the
# instruction streams differ in length as well as content.
SRC_C = PREAMBLE + """
uint32_t f(uint32_t a0) {
    uint32_t t = a0 * 2u + 1u;
    asm volatile("" ::: "memory");
    return t;
}
"""

# --- 3. near-miss: differs in exactly one constant ------------------------
SRC_BAD = PREAMBLE + "uint32_t f(uint32_t a0) { return a0 * 2u + 2u; }\n"

# --- memory-effect tests: same store vs a different store -----------------
SRC_ST = PREAMBLE + """
void f(uint32_t* p, uint32_t v) { *p = v * 3u; }
"""
SRC_ST_BAD = PREAMBLE + """
void f(uint32_t* p, uint32_t v) { *p = v * 4u; }
"""


def check(label, got, want):
    ok = got == want
    print("  [%s] %-46s got=%-11s want=%s"
          % ("PASS" if ok else "FAIL", label, got, want))
    return ok


def main():
    try:
        SM._uc()
    except SM.SemUnavailable as e:
        print("  SKIP: %s" % e)
        print("  The semantic matcher cannot be justified without an emulator.")
        return 2

    results = []

    # 1 -------------------------------------------------------------
    a = compile_to_bytes(SRC_REF)
    b = compile_to_bytes(SRC_REF)
    v, why = SM.compare(a, b)
    results.append(check("byte-identical pair is ACCEPTED", v, "equivalent"))
    print("         %s" % why)

    # 2 -------------------------------------------------------------
    a = compile_to_bytes(SRC_A)
    b = compile_to_bytes(SRC_B)
    v, why = SM.compare(a, b)
    results.append(check("equivalent but NOT byte-identical ACCEPTED",
                         v, "equivalent"))
    print("         %s" % why)

    a2 = compile_to_bytes(SRC_C)
    v, why = SM.compare(a, a2)
    results.append(check("  ...and differing instruction length too",
                         v, "equivalent"))
    print("         %s" % why)

    # 3 -------------------------------------------------------------
    bad = compile_to_bytes(SRC_BAD)
    v, why = SM.compare(a, bad)
    results.append(check("one-constant near-miss is REJECTED", v, "different"))
    print("         %s" % why)

    # 4 -------------------------------------------------------------
    st = compile_to_bytes(SRC_ST)
    st_bad = compile_to_bytes(SRC_ST_BAD)
    v, why = SM.compare(st, st_bad)
    results.append(check("memory-effect near-miss is REJECTED", v, "different"))
    print("         %s" % why)

    v, why = SM.compare(st, st)
    results.append(check("identical store body is ACCEPTED", v, "equivalent"))
    print("         %s" % why)

    print()
    if all(results):
        print("  SELFTEST PASSED: %d/%d -- the matcher accepts equivalences and "
              "rejects near-misses." % (len(results), len(results)))
        return 0
    print("  SELFTEST FAILED: %d/%d -- the matcher is not trustworthy and must "
          "not be used to accept a body." % (sum(results), len(results)))
    return 1


if __name__ == "__main__":
    sys.exit(main())
