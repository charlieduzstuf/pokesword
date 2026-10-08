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
