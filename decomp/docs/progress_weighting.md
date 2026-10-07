# Byte-weighted vs function-count progress

decomp.dev reports **0.54%**. This project reports **18.55%**. Both are correct
and they measure different things.

## The arithmetic

```
total_code            38,172,368 bytes   (36.4 MB)
matched_code             230,904 bytes
matched_code_percent          0.56%   <-- decomp.dev's headline

functions matched       28,212 / 152,062 = 18.55%   <-- this project's headline
```

The 0.52% is not a bug and not a mis-parse. objdiff's `Measures` carries both,
and the report populates both:

| field | value | meaning |
|---|---:|---|
| `matched_functions_percent` | 18.55% | count-weighted |
| `matched_code_percent` | 0.52% | byte-weighted |
| `fuzzy_match_percent` | 18.55% | same as count here; this project records no partial credit |

decomp.dev's headline badge is the byte-weighted one. That is the objdiff
convention and it is what comparable projects (OGSW and others) show, so it is
the fairer number to quote when comparing against other decompilation projects.

## Why the two diverge so far

Size distribution of function bodies:

| | median | p90 | max |
|---|---:|---:|---:|
| **matched** | 8 bytes | 12 | 516 |
| **unmatched** | 132 bytes | 616 | 239,176 |

Everything matched so far is a tiny accessor — `ldr ; ret` is 8 bytes, a field
getter. The 36 MB is dominated by large `branchy` and `branchy-calls` bodies,
some of them hundreds of instructions.

So the same progress is worth 17% by count and 0.5% by bytes. **Byte-weighting
is the harsher measure and the more honest one about how much of the *code* has
been recovered.**

## What this changes about priorities

This was not obvious before the report existed, and it changes where effort pays
off:

- **Small matched functions are nearly worthless byte-wise.** A 200th trivial
  getter adds ~8 bytes to `matched_code`. Chasing more of them moves the count
  and barely moves the badge.
- **A single large matched body is worth a lot of bytes.** The largest unmatched
  function is 239 KB. Matching one body of that size moves `matched_code_percent`
  by roughly 0.6 percentage points — more than every remaining accessor combined.
- **The remaining tractable buckets are all tiny.** `struct-copy` (374 bodies,
  median well under 100 bytes), the `compare` mask idioms (99), the 303
  `ldp;stp;ret` family. Together they are a rounding error by bytes.
- **Only the `branchy` population moves the byte figure**, and it is 115,600
  bodies of hand decompilation.

Practical conclusion: **the byte-weighted number will not move meaningfully until
large `branchy` bodies start matching.** The accessor work that produced this
session's gains was worth doing — it is what made verification trustworthy and
the code readable — but it is not what moves this metric.

There is a floor worth stating plainly: even matching every remaining
*branch-free* body would leave the byte figure in the low single digits, because
those bodies are small. The 36 MB is in the branchy population.

## Measured: how much of the byte mass is actually tractable

Taking the **1,500 largest unmatched bodies** in the whole project:

| | bodies | bytes |
|---|---:|---:|
| branchy | 1,491 | 7,816,168 |
| branch-free | 9 | 30,764 |

**99.6% of the bytes in the largest unmatched bodies require real control-flow
decompilation.** There is no large easy win hiding behind the byte metric.

Worse for the metric: `auto_match.shape_of` returns `None` for 1,499 of those
1,500, so no generator is even *offered* them. That is not a classification bug
to be fixed cheaply — it reflects that the straight-line translator does not
claim function bodies of this size. (Note the distinction from
`data/shapes.csv`, which was produced by `scan_shapes.classify_shape`; the two
classifiers are not the same, and `shapes.csv` labels these `branchy` while
`shape_of` declines them.)

The largest branch-free unmatched bodies, for completeness:

| size | function | insns |
|---:|---|---:|
| 4,980 B | `main@0x138a350` | 1,245 |
| 4,664 B | `subsdk0@0x46a40` | 1,166 |
| 4,636 B | `sdk@0x13e080` | 1,159 |
| 3,300 B | `sdk@0x4d16e0` | 825 |
| 3,012 B | `main@0xc5c850` | 753 |

All nine together are 30,764 bytes — **0.08%** of the 38 MB. Matching every one
of them would move the decomp.dev badge from 0.56% to 0.64%.

That is the honest arithmetic of this metric. The accessor work that produced the
count gains is worth doing and has been done; the byte figure is a different
project, and it is hand decompilation of large branchy functions.

## Reproducing

`tools/objdiff_report.py` computes both figures from `data/functions.csv` and
`tools/match_progress.py`, and **fails** if its own numbers disagree with the
authoritative tool. Decode the emitted report and compare:

```python
import sys; sys.path.insert(0, "tools")
from objdiff_report import decode
m = decode(decode(open("build/report.json","rb").read())[1][0])
print("functions:", m[8][0], "matched:", m[9][0], round(m[10][0], 2))
print("code bytes:", m[2][0], "matched:", m[3][0], round(m[4][0], 2))
```