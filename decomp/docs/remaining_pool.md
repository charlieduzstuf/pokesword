# The remaining pool is 98.2% unnamed, and that is a measured ceiling

Measured over every unmatched body in all four modules, using
`auto_match.shape_of` -- the same classifier `auto_match` and the registries use:

    unmatched bodies        123757
    shape None              121544   (98.2%)

    main       80668 of  81418
    sdk        22147 of  23307
    subsdk0     8736 of   8886
    subsdk1     9993 of  10146

Every *named* shape across all modules combined:

    tailcall 1037   straight 374   compare 327   setter-chain 98
    struct-copy 97  copy2 89       copy-chain 46  getter 31
    indexed-getter 30  setter 24   fp-compare 15  float_const 8
    getter-chain 8   const-field-set 6  fp-conv-store 6  strlit-flag-ret 5
    mov_ret 5        ptr_add 4     strlit-ret 2    const-ret 1

That is 2,213 bodies -- 1.8% of what is left. **Every shape a generator can name
has been drained.** The `None` pool is what remains.

## What `None` actually is

It is not a bucket of oddities. `None` means the classifier found no linearisable
form: these are functions with **control flow and calls into other functions**.
`tools/scan_shapes.py` labels the same bodies `branchy-calls` (61,990 in `main`,
76%) and `branchy` (15,374) -- it is a *different* classifier, and conflating the
two cost an hour: querying `auto_match` for `branchy-calls` returns 0, which looks
like the pool does not exist.

Two measurements that close off the easy escapes:

  * **`branchy` with zero calls: 0 bodies.** Every branchy body contains a call.
    So the 30,657 zero-call bodies are all *linear* shapes, already handled --
    there is no "branchy but simple" sub-population hiding.
  * **Short `branchy-calls`: none under 12 instructions.** The pool has no
    short-function head to mine.

## The largest remaining named pool is not addressable either

`tailcall` is 1,037 bodies, the biggest named shape. Previously measured: 1,035 of
them branch *inside* `main`'s last 13,184-byte function. They are interior entry
points, not standalone functions -- a bare `b` cannot forward register arguments,
which is why they have no body by design and appear in the audit as
"declined tail-call thunks, no body by design".

## So what does the remaining work look like

Not templates. The options are:

  1. **Per-function hand decompilation**, prioritised by size and call count.
     Honest but linear in effort: 121,544 bodies is not reachable this way in any
     useful timeframe.
  2. **New shape detectors** for common function idioms in the `None` pool --
     switch dispatch, vtable-style indirect calls, init/fini pairs. Each would be
     a real generator, and each is a research task rather than a patch.
  3. **Semantic recovery** -- recovering the actual Pokemon Sword structures and
     rewriting at that level, so whole families collapse at once. The largest
     lever by far and the largest effort.

Until one of those is started, reporting a per-batch gain from new shape rules is
the only automated progress available, and the shape rules are nearly exhausted.

## `adrp` is unreachable by construction, not for want of a handler

`adrp` is the largest single decline reason in the no-call/no-branch census, at
~1,450 bodies. It is not a missing instruction handler. Two independent
blockers, both verified rather than assumed:

**1. `adrp` needs a symbol.** Clang will not emit `adrp` for a bare integer
constant, because `adrp` is page-relative *to a symbol*. Compiled four ways --
`*(void**)((char*)0x2496400)`, a two-step `void* p = (void*)0x2496000; ... + 0x400`,
and pointer-typed variants -- every one produced:

    mov  w8, #0x6400
    movk w8, #0x249, lsl #16
    ldr  x0, [x8]
    ret

where the original is:

    adrp x0, #0x2496000
    ldr  x0, [x0, #0x400]
    ret

To get `adrp` the address has to be *named*. There is no recovered data symbol
table in this project: `data/vtables_*.csv` and `data/vfunc_names*.csv` are
29- and 41-byte headers with no rows.

**2. Even with a symbol, the harness could not verify it.** `auto_match.verify`
compiles candidates to a **`.o`** and compares the object's `.text` against the
original. In a relocatable object an `adrp` is unresolved -- it carries
`R_AARCH64_ADR_PG_HI21` with a page addend, and disassembles as `adrp x0, #0`.
`MH.obj_relocations` is consulted only for tail-call branch targets.

So an `adrp` candidate cannot byte-match in an object file even when it is
correct. Matching these bodies needs *link-time* verification: declare a symbol
per referenced address, place it at its true address via the linker script, link,
and compare. That is data-symbol recovery -- option 3 in the list above -- and it
is a harness change as much as a translator change.

Until then, `adrp` is a hard ceiling for the object-file harness, and no amount of
instruction coverage will move it.
