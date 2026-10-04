# `getter-chain`: the 106 overlap, and a lesson about measuring first

## The finding

`gen_indexed_load` (commit `d2962ee`) matches **106 of 110** bodies it is
offered, and the report line reads:

```
report: data/matched_main.json (106 matched, 21088 carried over)
```

The registry total does not move, and it is tempting to conclude the `--report`
merge is dropping verified matches. **It is not.** Measured directly:

```
candidates offered      : 110
already in registry     : 106
already counted matched : 106
genuinely new           :   4
```

So 106 of the 110 were *already recorded* — the merge correctly replaced them
with the new generator's source and the count legitimately stood still. The 4
genuinely new bodies are among the 4 that failed to match.

**There is no persist bug.** An earlier version of this file claimed there was
one, on the strength of `collect()` offering an address that was absent from the
registry (`0xe5810`). That inference was wrong: `0xe5810` is one of the 4 that
*fail*, and its absence from the registry is the correct outcome, not a dropped
write. The overlap was never measured before the bug claim was written down.

## The lesson, which is the same one every time

This is the fifth time this project a generator's match count was mistaken for a
gain, and the first time it was mistaken for a *bug*. Both are the same error:
**a count was read as a delta without measuring the population underneath it.**

The check that settles it in one command:

```python
import sys, csv; sys.path.insert(0, "tools")
import auto_match as A
csv.field_size_limit(2**31-1)
reg = {r["addr"] for r in json.load(open("data/matched_main.json")).get("matched", [])}
cands, _, _ = A.collect("main", ["getter-chain"], 9000)
addrs = [c["addr"] for c in cands]
print(len(addrs), sum(1 for a in addrs if a in reg))   # offered, already-done
```

Run that **before** writing a commit message, not after. A generator that
matches 106 bodies and adds 0 is not broken and is not a triumph; it is
redundant, and the honest report says so.

## What the generator is still worth

`gen_indexed_load` produces correct, readable C for a shape nothing else
expressed:

```c
uint32_t f_e5810(void* a0, uint32_t a1) { return ((uint32_t *)((char*)(a0) + 48))[a1]; }
```

Those bodies were previously matched by something less legible, so replacing
their source is a real improvement to the decompilation even at zero delta. The
`--report` merge replacing prior records for addresses it re-matched is exactly
what makes that possible, and it is worth keeping in mind before "optimising"
that behaviour away.

## The 4 that fail

Not diagnosed. `0xe5810` is one of them and is the example in the generator's own
docstring, which is misleading — it should be labelled as a known failure rather
than presented as a success. Likely candidates are the element-type and scale
agreement checks, which decline when `elem` and `scale` disagree; those are the
first thing to look at, but that is a guess and is recorded as one.