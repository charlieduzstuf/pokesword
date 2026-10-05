# `check.py` reported 332 matches that did not exist

`tools/check.py` compares our linked ELF against the original module. One of its
two jobs is to notice functions we have *not* registered as matching that in fact
do match — a free win if any exist. It reported 332 of them.

None of them matched. All 332 were the same bug.

## The bug

```python
base_insns = list(md.disasm(base_fn, addr))
eff = len(base_insns)
while eff > 0 and base_insns[eff - 1].mnemonic in ("udf", "brk", "nop"):
    eff -= 1
my_insns = list(md.disasm(my_fn, addr))

for i1, i2 in zip(base_insns[:eff], my_insns[:eff]):
    ...
return True          # <- reached when the loop body never ran
```

When the original's bytes decode to **no** instructions, `eff` is 0, `zip` is
empty, the loop never executes, and the function returns `True`. The verdict is
vacuous: a comparison of nothing reported as a comparison that succeeded.

The 332 functions sit at addresses like `0x33e30` whose bytes are `fedeffe7`,
which decodes to nothing under either capstone mode. They are unmatchable by any
C, because there are no instructions to match.

This is the "a check that cannot fail" trap in its purest form, and it was
pointing straight at a fake +332: 18.11% would have become 18.29% on evidence
that did not exist. `match_progress.py` counts emitted bodies and does not
re-verify byte identity, so nothing downstream would have caught it.

## Two more holes in the same loop

`zip` silently drops the tail of the longer sequence, so a body that was one
instruction short compared equal. Requiring equal length closed that.

That immediately produced **370 false failures in `main` and 7,843 in
`subsdk1`** — and four genuine-looking mismatches, `main_f_1f4640`,
`main_f_32ec80`, `main_f_c53800`, `main_f_c53810`. Those four are precisely the
padding cases the trim above was written for, per the comment already in the
file: `size` includes inter-function alignment padding, the original pads with
`nop`/`udf`, and no C can reproduce that.

The length check was comparing a **trimmed** original against an **untrimmed**
ours, so every padded body looked one instruction too long. Both sides now go
through the same `trim()`.

That is why the count was so large in `subsdk1` and tiny in `sdk`: it is a
function of how much alignment padding each module happens to carry, not of how
much code matches.

## Verifying the fix can fail

A check that has never been observed failing is not known to work. Two
observations after the fix, both from `work/check_<module>.out`:

- the 332 phantom matches became `is not comparable` notes, and the
  `marked as non-matching but matches` count went to **0** in every module;
- `main` exits **1** with four real mismatches while that padding bug was
  present — the instrument demonstrably reports failures, so its silences are
  informative.

Per module: `main` 332 not comparable, `sdk` 262, `subsdk0` 307, `subsdk1` 1.
Zero `marked as matching but does not match` once both sides were trimmed.

## Standing rule

A verdict of "matches" must be reachable only from having compared at least one
instruction. If the comparison set is empty the correct answer is "cannot
compare", never "equal".