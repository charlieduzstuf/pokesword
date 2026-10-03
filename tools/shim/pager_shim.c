/* Pager stand-in for asm-differ on Windows.
 *
 * asm-differ spawns its output pipeline as:
 *
 *     BUFFER_CMD = ["tail", "-c", 10**9]   ->   LESS_CMD = ["less"]
 *
 * Neither exists on Windows, and Windows' CreateProcess only auto-appends
 * ".exe" (not ".cmd"), so tail.cmd / less.cmd are not found by
 * subprocess.Popen(["tail", ...]). This is the same behaviour as the Python
 * shims, as a real executable. The role is selected by argv[0], so one binary
 * copied to tail.exe and less.exe covers both.
 *
 *   tail -c N : read all of stdin, keep the last N bytes, write to stdout
 *   less      : copy stdin to stdout
 *
 * Build (from the directory holding this file):
 *   cl /nologo /O2 pager_shim.c
 *   copy pager_shim.exe tail.exe
 *   copy pager_shim.exe less.exe
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define CHUNK 65536

static int running_as_tail(void) {
    char path[MAX_PATH];
    DWORD n = GetModuleFileNameA(NULL, path, (DWORD)sizeof path);
    if (n == 0 || n >= sizeof path) {
        return 0;
    }
    path[n] = '\0';
    const char *base = strrchr(path, '\\');
    base = base ? base + 1 : path;
    return strncmp(base, "tail", 4) == 0;
}

/* -c N / -cN selects the trailing byte count; -n and -f are accepted and
 * ignored, matching the subset asm-differ ever uses. */
static long long parse_count(int argc, char **argv) {
    long long n = -1;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-c") == 0 && i + 1 < argc) {
            n = atoll(argv[++i]);
        } else if (strncmp(argv[i], "-c", 2) == 0 && argv[i][2] != '\0') {
            n = atoll(argv[i] + 2);
        } else if (strcmp(argv[i], "-n") == 0 && i + 1 < argc) {
            atoll(argv[++i]); /* parsed but unused: byte mode only */
        }
    }
    return n;
}

static int run_tail(int argc, char **argv) {
    long long keep = parse_count(argc, argv);

    /* The buffer stage only ever feeds a few MB of disassembly through, so
     * holding it in memory is simpler than a ring buffer. */
    size_t cap = 1u << 20, len = 0;
    unsigned char *buf = (unsigned char *)malloc(cap);
    if (!buf) {
        return 1;
    }
    for (;;) {
        if (len == cap) {
            if (cap > (size_t)1 << 31) {
                return 1;
            }
            cap *= 2;
            unsigned char *bigger = (unsigned char *)realloc(buf, cap);
            if (!bigger) {
                return 1;
            }
            buf = bigger;
        }
        size_t got = fread(buf + len, 1, cap - len, stdin);
        if (got == 0) {
            break;
        }
        len += got;
    }
    const unsigned char *out = buf;
    size_t out_len = len;
    if (keep >= 0 && (size_t)keep < len) {
        out = buf + (len - (size_t)keep);
        out_len = (size_t)keep;
    }
    fwrite(out, 1, out_len, stdout);
    free(buf);
    return 0;
}

static int run_less(void) {
    unsigned char *buf = (unsigned char *)malloc(CHUNK);
    if (!buf) {
        return 1;
    }
    for (;;) {
        size_t got = fread(buf, 1, CHUNK, stdin);
        if (got == 0) {
            break;
        }
        fwrite(buf, 1, got, stdout);
        fflush(stdout);
    }
    free(buf);
    return 0;
}

int main(int argc, char **argv) {
    return running_as_tail() ? run_tail(argc, argv) : run_less();
}
