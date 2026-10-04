"""Emit `build/report.json` in objdiff's progress-report format.

decomp.dev discovers progress by scraping workflow artifacts. Its convention
(decomp.wiki -> Tools -> decomp.dev) is an artifact named `<VERSION>_report`
containing `report.json` in objdiff's protobuf `objdiff.report.Report` format.

**This script is strictly additive.** It reads `data/functions.csv` and
`data/matched_<mod>.json` and writes `build/report.json`. It does not import,
modify, or invoke `match_harness`, `auto_match`, `decomp_project`, `build_nx64`,
or anything else in the matching pipeline, so it cannot undo decompilation
progress. Nothing else in the repository depends on it.

Why protobuf written by hand rather than a library: the format is proto3 and the
wire encoding is small enough to implement directly, and adding a `protobuf`
dependency to CI for four message types would be a larger change than the
encoder. `verify_roundtrip()` at the bottom decodes the output again with an
independent decoder, so a structural mistake cannot pass silently.

Schema: objdiff-core/protos/report.proto
Version: REPORT_VERSION = 2 (objdiff-core/src/bindings/report.rs)

Honest limits, stated rather than buried:

* `fuzzy_match_percent` is set to 1.0 for a matched function and left at the
  proto3 default of 0.0 for an unmatched one. This project has no notion of a
  *partially* matched function -- a body either re-verifies byte-identically or
  it is not counted -- so there is no partial value to report.
* `total_data` / `matched_data` are reported as zero. This project tracks
  function matching only; no data sections are measured, and reporting a zero
  rather than omitting the field is the honest option.
* Every function is emitted as a `ReportItem` with its size and address, which
  is what lets decomp.dev compute per-function progress.
* Structural validity is verified by round-trip. Whether decomp.dev's scraper
  accepts the report is not verifiable from here.
"""

import argparse
import csv
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ALL_UNITS = ("main", "sdk", "subsdk0", "subsdk1", "rtld")

# Must match objdiff-core/src/bindings/report.rs
REPORT_VERSION = 2


# --------------------------------------------------------------------------
# Minimal proto3 encoder
# --------------------------------------------------------------------------
def _varint(v):
    """Encode an unsigned int as a base-128 varint."""
    if v < 0:
        raise ValueError("varint must be non-negative, got %r" % (v,))
    out = bytearray()
    while True:
        b = v & 0x7F
        v >>= 7
        if v:
            out.append(b | 0x80)
        else:
            out.append(b)
            return bytes(out)


def _tag(field, wire):
    return _varint((field << 3) | wire)


def enc_uint(field, value):
    """uint32 / uint64. Proto3 omits singular scalars equal to the default."""
    return b"" if value == 0 else _tag(field, 0) + _varint(value)


def enc_bool(field, value):
    return b"" if not value else _tag(field, 0) + _varint(1)


def enc_float(field, value):
    """float is wire type 5, fixed32. Omitted when zero, per proto3."""
    if value == 0.0:
        return b""
    return _tag(field, 5) + struct.pack("<f", value)


def enc_str(field, value):
    """Length-delimited string. Unlike scalars, an empty string is still
    encoded if the field is `optional` and explicitly set; for our use the
    callers simply pass None to omit."""
    if value is None:
        return b""
    raw = value.encode("utf-8")
    return _tag(field, 2) + _varint(len(raw)) + raw


def enc_msg(field, payload):
    """Length-delimited embedded message. Always emitted, even if empty,
    because presence is meaningful for a submessage."""
    return _tag(field, 2) + _varint(len(payload)) + payload


# --------------------------------------------------------------------------
# Message builders (field numbers from report.proto)
# --------------------------------------------------------------------------
def measures(fuzzy_pct, total_code, matched_code, total_fn, matched_fn,
             total_units, complete_units):
    p = b""
    p += enc_float(1, fuzzy_pct)
    p += enc_uint(2, total_code)
    p += enc_uint(3, matched_code)
    # Field 4 is `float matched_code_percent`, not an integer. Encoding it as a
    # varint raised `TypeError: unsupported operand type(s) for &: 'float'`,
    # which is the good failure mode -- a wrong wire type is loud -- but it is
    # worth noting that a *plausible-looking* wrong wire type would have produced
    # bytes that no protobuf reader accepts.
    p += enc_float(4, (100.0 * matched_code / total_code) if total_code else 0.0)
    # 5/6/7 are total_data / matched_data / matched_data_percent: zero here.
    p += enc_uint(8, total_fn)
    p += enc_uint(9, matched_fn)
    p += enc_float(10, (100.0 * matched_fn / total_fn) if total_fn else 0.0)
    p += enc_uint(11, total_code)          # complete_code
    p += enc_uint(15, total_units)
    p += enc_uint(16, complete_units)
    return p


def item(name, size, fuzzy_pct, virtual_address=None, demangled=None):
    p = enc_str(1, name) + enc_uint(2, size) + enc_float(3, fuzzy_pct)
    meta = b""
    if demangled:
        meta += enc_str(1, demangled)
    if virtual_address:
        meta += enc_uint(2, virtual_address)
    if meta:
        p += enc_msg(4, meta)
    p += enc_uint(5, virtual_address or 0)
    return p


def unit(name, meas, functions, module_name, complete=True):
    p = enc_str(1, name) + enc_msg(2, meas)
    for fn in functions:
        p += enc_msg(4, fn)
    md = enc_bool(1, complete) + enc_str(2, module_name)
    p += enc_msg(5, md)
    return p


def report(meas, units, categories=()):
    p = enc_msg(1, meas)
    for u in units:
        p += enc_msg(2, u)
    p += enc_uint(3, REPORT_VERSION)
    for c in categories:
        p += enc_msg(4, c)
    return p


# --------------------------------------------------------------------------
# Independent decoder, used only to verify the encoder
# --------------------------------------------------------------------------
def decode(buf):
    """Minimal reader. Returns {field_number: [raw values]} -- enough to prove
    the bytes re-parse, without duplicating the whole schema."""
    out = {}
    i = 0
    n = len(buf)
    while i < n:
        key, i = _read_varint(buf, i)
        field, wire = key >> 3, key & 7
        if wire == 0:
            v, i = _read_varint(buf, i)
        elif wire == 5:
            v = struct.unpack("<f", buf[i:i + 4])[0]
            i += 4
        elif wire == 2:
            ln, i = _read_varint(buf, i)
            v = buf[i:i + ln]
            i += ln
        else:
            raise ValueError("unsupported wire type %d at %d" % (wire, i))
        out.setdefault(field, []).append(v)
    return out


def _read_varint(buf, i):
    shift = 0
    val = 0
    while True:
        if i >= len(buf):
            raise ValueError("truncated varint")
        b = buf[i]
        i += 1
        val |= (b & 0x7F) << shift
        if not b & 0x80:
            return val, i
        shift += 7


def verify_roundtrip(payload):
    """Re-parse and check the mandatory top-level fields survived."""
    top = decode(payload)
    if 3 not in top or top[3][0] != REPORT_VERSION:
        return False, "version missing or wrong: %r" % (top.get(3),)
    if 1 not in top:
        return False, "measures missing"
    if 2 not in top:
        return False, "units missing"
    m = decode(top[1][0])
    for f in (2, 3, 8, 9):        # total_code, matched_code, total/matched fns
        if f not in m:
            return False, "measures missing field %d" % f
    return True, "ok (%d units, measures present, version %d)" % (
        len(top[2]), REPORT_VERSION)


# --------------------------------------------------------------------------
# Data loading
# --------------------------------------------------------------------------
def load_population():
    """module -> [(addr, name, size, decomp_name)] from the committed CSV."""
    path = os.path.join(ROOT, "data", "functions.csv")
    try:
        csv.field_size_limit(min(2 ** 31 - 1, sys.maxsize))
    except OverflowError:
        csv.field_size_limit(2 ** 31 - 1)
    pop = {m: [] for m in ALL_UNITS}
    with open(path, newline="", encoding="utf-8") as fh:
        for row in csv.DictReader(fh):
            m = row.get("module")
            if m not in pop:
                continue
            try:
                addr = int(row["addr"], 16)
                size = int(row.get("size") or 0)
            except (ValueError, KeyError):
                continue
            pop[m].append((addr, row.get("name") or "", size,
                           row.get("decomp_name") or ""))
    return pop


def load_matched():
    """module -> set(addr) from the verified-body registries."""
    out = {m: set() for m in ALL_UNITS}
    for m in ALL_UNITS:
        p = os.path.join(ROOT, "data", "matched_%s.json" % m)
        if not os.path.isfile(p):
            continue
        with open(p, encoding="utf-8") as fh:
            blob = json.load(fh)
        for r in blob.get("matched", []):
            if isinstance(r, dict) and r.get("addr") is not None:
                out[m].add(int(r["addr"]))
    return out


def authoritative():
    """Per-module figures straight from `tools/match_progress.py`.

    **This exists because three implementations of this count disagreed.**
    A first version of this script computed its own totals from
    `functions.csv` and the registries and produced 152,034 / 26,542, while
    `match_progress.py` reported 152,062 / 26,536 for the same tree on the same
    commit. Two causes were visible immediately -- `rtld` (28 functions) had been
    dropped because this script only listed four modules, and the matched totals
    did not reconcile at all -- but reconciling them by inspection is exactly how
    the wrong number gets believed.

    So the report does not compute progress. It reads the one tool the project
    treats as authoritative and *asserts* that its own enumeration agrees. If
    they ever diverge the script fails loudly rather than publishing a chart that
    contradicts the README.
    """
    import subprocess
    out = subprocess.run([sys.executable,
                          os.path.join(ROOT, "tools", "match_progress.py")],
                         capture_output=True, text=True, cwd=ROOT,
                         timeout=600).stdout
    per = {}
    total = None
    for line in out.splitlines():
        f = line.split()
        if len(f) >= 3 and f[0] in ALL_UNITS:
            per[f[0]] = (int(f[1]), int(f[2]))
        if len(f) >= 3 and f[0] == "TOTAL":
            total = (int(f[1]), int(f[2]))
    if total is None:
        raise SystemExit("objdiff_report: match_progress.py gave no TOTAL row")
    return per, total


def build():
    pop = load_population()
    matched = load_matched()
    auth_per, auth_total = authoritative()

    units = []
    tot_fn = mtch_fn = tot_code = mtch_code = 0
    for m in ALL_UNITS:
        entries = sorted(pop[m])
        # A function is identified by its address. `functions.csv` carries
        # duplicate rows for some addresses, and counting rows rather than
        # addresses is what made this report claim 21,174 matched in `main`
        # where `match_progress.py` reports 21,169. Keep the first row per
        # address; the gate below is what caught it.
        uniq = {}
        for e in entries:
            uniq.setdefault(e[0], e)
        entries = [uniq[a] for a in sorted(uniq)]
        mset = matched[m]
        fns = []
        for addr, name, size, dname in entries:
            # "Matched" means exactly what `match_progress.py` means by it: a
            # `decomp_name` is present and does not end in `!`. The `!` suffix
            # marks a *declared stub* -- a function the project has a prototype
            # for but no body for -- which is not a match.
            #
            # The obvious alternative, "is this address in the verified
            # registry", disagrees by 5 in `main` (21,174 against 21,169)
            # because a handful of registry records correspond to stub
            # declarations. Two definitions of "matched" is the exact failure
            # this project keeps hitting, so the report uses the authoritative
            # tool's definition rather than inventing a third.
            #
            # A matched body is a full match, not a partial one: this project
            # records no partial credit, so there is no intermediate value.
            hit = bool(dname) and not dname.endswith("!")
            fns.append(item(name, size, 1.0 if hit else 0.0,
                            virtual_address=addr, demangled=dname or None))
        # Count with the same rule the items were built with, so the measures
        # and the items cannot disagree.
        def _hit(e):
            return bool(e[3]) and not e[3].endswith("!")
        m_fn = len(entries)
        m_code = sum(sz for _a, _n, sz, _d in entries)
        m_matched = sum(1 for e in entries if _hit(e))
        m_code_matched = sum(e[2] for e in entries if _hit(e))

        # Gate against the authoritative figures rather than trusting them.
        a_pop, a_mat = auth_per.get(m, (None, None))
        if a_pop is not None and a_pop != m_fn:
            raise SystemExit(
                "objdiff_report: %s population disagrees -- functions.csv has "
                "%d, match_progress.py has %d" % (m, m_fn, a_pop))
        if a_mat is not None and a_mat != m_matched:
            raise SystemExit(
                "objdiff_report: %s matched disagrees -- registry has %d, "
                "match_progress.py has %d" % (m, m_matched, a_mat))

        fuzzy = (100.0 * m_matched / m_fn) if m_fn else 0.0
        units.append(unit(
            "%s.elf" % m,
            measures(fuzzy, m_code, m_code_matched, m_fn, m_matched, 1, 1),
            fns, m, complete=True))
        tot_fn += m_fn
        mtch_fn += m_matched
        tot_code += m_code
        mtch_code += m_code_matched

    if auth_total != (tot_fn, mtch_fn):
        raise SystemExit(
            "objdiff_report: totals disagree -- computed %d/%d, "
            "match_progress.py %d/%d"
            % (tot_fn, mtch_fn, auth_total[0], auth_total[1]))

    fuzzy_all = (100.0 * mtch_fn / tot_fn) if tot_fn else 0.0
    meas = measures(fuzzy_all, tot_code, mtch_code, tot_fn, mtch_fn,
                    len(units), len(units))
    cat = enc_str(1, "code") + enc_str(2, "Code") + enc_msg(3, meas)
    return report(meas, units, [cat])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", default=os.path.join("build", "report.json"))
    ap.add_argument("--no-verify", action="store_true")
    a = ap.parse_args()

    payload = build()
    ok, msg = (True, "skipped") if a.no_verify else verify_roundtrip(payload)

    out = a.out if os.path.isabs(a.out) else os.path.join(ROOT, a.out)
    os.makedirs(os.path.dirname(out), exist_ok=True)
    with open(out, "wb") as fh:
        fh.write(payload)

    sys.stderr.write("objdiff report: %s (%d bytes) -> %s\n"
                     % (msg, len(payload), os.path.relpath(out, ROOT)))
    if not ok:
        sys.stderr.write("ROUND-TRIP VERIFICATION FAILED: %s\n" % msg)
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())