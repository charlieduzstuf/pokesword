# Where the remaining 119,530 unmatched functions are

Measured 2026-10-15 over every unmatched row in `data/functions.csv`, keyed by
`(module, addr)`. No sampling except where noted. The CSV has no `shape` column
for unmatched rows -- shapes are only recorded for functions that already
verified -- so this classifies by disassembly.

## First cut: control flow

    has bl                              53.4%
    tailcall (b is the last insn)       27.6%
    has a conditional branch            11.7%
    straight-line, no call               5.8%
    undecodable                          1.4%

## The real breakdown

    ends-in-ret x has-bl       bodies   share
    ret=True  bl=True          2936    45.6%
    ret=False bl=True          1860    28.9%
    ret=True  bl=False         1041    16.2%
    ret=False bl=False          599     9.3%

45.6% of unmatched functions end in `ret` and contain a `bl` -- the exact shape
`call_register` handles. That is roughly 54,500 bodies, and `candidates()`
surfaces **555** of them. So the question was always "what is `candidates()`
throwing away", and the answer is not what it looks like.

## Rejection reasons inside candidates()

    119,492 unmatched bodies, 555 accepted (0.5%)

    frame_of None                      101,906   85.3%
    <24 bytes                           14,535   12.2%
    bl count = 3                         1,566    1.3%
    bl count = 0 (none)                    331    0.3%
    has adrp/adr/blr                       277    0.2%
    bl count = 2                           160    0.1%

`frame_of` is the gate, at 24x the next filter. That looked like a 100,000-body
missed population. It is not, and the reason matters.

## Why frame_of is not a missed population

`frame_of` is all-or-nothing: it demands `stp x29,x30,[sp,#-N]!` + `mov x29,sp`
at the front and the post-indexed `ldp` at the back, and returns None otherwise.
For a body with NO frame at all it should arguably return `(0, 0)`. Breaking the
101,906 rejections down:

    NO FRAME AT ALL, ends in ret          62,248   61.1%
    no frame push, does not end in ret    37,591   36.9%
    frame push, no matching ldp             1,971    1.9%
    other                                      96    0.1%

62,248 frameless bodies ending in `ret` is 41% of the entire unmatched
population, so this was worth the check. It survives none of it:

    of the 62,248 frameless bodies, 0 pass the remaining filters

      bl count = 0                            20,063   <- leaves, no call at all
      has a BRANCH                            10,396
      bl count = 2                             8,196
      bl count = 3                             6,709
      bl count = 4                             3,419
      bl count = 5                             2,211

A frameless function that still calls something needs no callee-saved registers,
and retail's compiler still gives it the standard frame because the call forces
one. So "frameless AND exactly one call AND no branches" is close to
contradictory. The 8,196 two-call frameless bodies are real, but when passed to
the translator with every callee in the `calls` dict, **zero translate and zero
bail** -- they are excluded by the branch and adrp filters, not by the call count.

`len(bls) != 1` therefore looks like a cheap win and is not. Relaxing it to
`>= 1` changes nothing measurable.

## What is actually uncovered

  * 20,063 leaf bodies, no call. This IS the straight-line population:
    `sl_register` reports 3,154 candidates and 0 verified, measured twice.
  * 10,396 bodies with conditional branches. The translator is straight-line by
    construction and `BRANCH` includes `b.eq`, `cbz`, `tbz` and friends, so every
    one of these is declined by design. This is the largest genuinely uncovered
    shape and it needs CONTROL FLOW, not a filter change.
  * ~20,500 frameless bodies with 2+ calls, nearly all of which also branch.
  * 37,591 bodies that do not end in `ret` -- mostly the 27.6% tailcall
    population, which `decomp_project` does have a `tailcall` shape for, so part
    of this is reachable and part is not.

## So the honest summary of the remaining figure

21.39% is not 21.39% plus "a filter I have not relaxed". The reachable
populations are:

    straight-line, no control flow   ~3,154   0 verified, re-measured
    single-call, retail frame           555   28 blocked, rest translate and miss
    tailcall                            ?     partly covered by decomp_project

and the largest block -- conditional control flow, 10,396 sampled and
proportionally far more of the real 119,530 -- is a different kind of work
entirely. A control-flow extension to `straight_line.py` is the next structural
decision, not another handler.


## The tailcall population: 8,193 bodies with a straight-line prefix

The largest untouched class, and the first one that is not a control-flow problem.

    35,609 unverified tailcall bodies (the last instruction is `b <target>`)

But the `tailcall` shape only reaches 5,241 of them, all ALREADY REGISTERED:

    auto_match --shape tailcall
      main      5083 / 5083 = 100.0%
      sdk         72 /   72 = 100.0%
      subsdk0     28 /   28 = 100.0%
      subsdk1     58 /   58 = 100.0%
      registry +0 on every module

100% and nothing new, because the CLASSIFIER only claims a body when the whole
body is one `b`:

    if n == 1 and mn[0] == "b":
        return "tailcall"

Everything else that ends in `b` lands in the `branchy` bucket -- 61,774 bodies in
main alone, 76.8% of that module's unmatched. A straight-line argument setup
followed by a jump is not "branchy"; it is a tailcall that computes its arguments
first.

### Measured, and the prefix is the part that is already solved

    1,047  pure `b` thunks, already registered
  8,193  WITH a straight-line prefix

        sub                4,526
        ldr                  766
        add                  695
        mov                  456
        mov,mov              325
        mov,mov,mov          150

    main sub_12160@0x12160        main sub_12170@0x12170
      add  x2, x0, #0xec            ldr  w8, [x0, #0xb4]
      add  x3, x0, #0xe8            add  x8, x0, x8, lsl #4
      mov  w4, #1                  add  x1, x8, #0x18
      b    <target>                mov  w4, #1
                                    mov  x2, xzr
                                    mov  x3, xzr
                                    b    <target>

The C is

    uint64_t f(void *a0, ...) { return target(<prefix expressions>); }

and **the prefix expressions are what the general translator already computes** --
loads, adds, moves, all of it. The two things that are new are small:

  1. the classifier: a body ending in `b <target>` with a straight-line prefix is
     a tailcall, not `branchy`
  2. `gen_tailcall` forwards `a0..an` UNCHANGED, so it cannot express a prefix.
     It has to render the prefix and pass those expressions as the argument list.

Neither is a control-flow problem, which is what makes this the right next piece
after nine beats in one that was. 8,193 bodies is 5.4% of the figure -- more than
the last ten beats banked between them.


## The tail-call prefix, PROVEN byte-identical

The translator now has a `tail` mode. `translate(ident, tail=(name, arity))` takes a
body that ends in `b <target>` instead of `ret`, walks the prefix, and emits the
branch as the return:

    add  x2, x0, #0xec
    add  x3, x0, #0xe8
    mov  w4, #1
    b    target

becomes

    uint64_t f(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
        return g(((uintptr_t)(a0)), ((uintptr_t)(a1)),
                 ((uintptr_t)((char*)(a0) + 236)),
                 ((uintptr_t)((char*)(a0) + 232)), ((uintptr_t)(1)));
    }

and Clang's tail-call optimisation turns that `return` back into a branch:

    0:  add  x2, x0, #236
    4:  add  x3, x0, #232
    8:  orr  w4, wzr, #0x1
    c:  b    #0

Retail's four instructions, encodings included. The `b` is not a call -- it is
the RETURN, and the compiler produces it from the `return` alone.

### Four things that had to be right, and each was a silent failure

**1. The tail branch has to come BEFORE the `ret_val is None` early return.** A
tailcall whose prefix only sets up arguments has no stores and no call, so
`all_txt` is empty, and the early return produced `void f() {}` -- the body
silently dropped, with no error anywhere. The branch also has to come before the
`not all_txt` return. Two early returns, two times.

**2. The arity defines the parameters.** x0 and x1 are never READ by the prefix,
so the walk never marked them used and the signature came out with no parameters
for them:

    tail call argument x1 is neither written nor an incoming argument

A tail call FORWARDS argument registers, whether or not the body read them.

**3. The arguments are spelled like call arguments.** The prefix's pointer
arithmetic renders as `(char *)(a0) + 236` -- a `char *`, which does not convert
to `uintptr_t` in C++. `call_arg` already knows how to spell one; the tail path
has to use it.

**4. `b` is a terminator, not an instruction.** The body's last instruction is
the branch, so it is excluded from the walk, and the function has no `ret`.

### What is still needed, in auto_match

The translator is done and proven. Two things remain in `auto_match.py`:

  * the classifier: a body ending in `b <target>` with a straight-line prefix is
    a tailcall, not `branchy`
  * `gen_tailcall`: it forwards `a0..an` unchanged, so it has to render the
    prefix with the translator and pass those expressions as the argument list --
    and it needs the target's arity, which is the target's own signature

Neither is a control-flow problem, which is why this is the piece to pick after a
run of beats that were entirely about control flow and mostly about proving
things unreachable.


## The tail-call prefix: REACHED, generating, not yet verifying

Two beats ago the translator gained a `tail` mode and it was measured byte-identical
on one body. This beat the remaining plumbing is in and the population is counted:

    main         unmatched  80470   prefix tailcall  6487   pure thunk   8
    sdk           unmatched  20277   prefix tailcall   163   pure thunk   1
    subsdk0       unmatched   8794   prefix tailcall    28
    subsdk1       unmatched   9955   prefix tailcall   117
    TOTAL prefix tailcalls 6795, plus 1963 with a branch target that is not a
    recovered function (a further population, untouched)

`work/tail_why.py main` says where the 6,487 go in main:

    6467  GENERATED
      20  generator returned None
     108  target is not a recovered function

So the population is reachable and the generator expresses it. **Zero of them
verify yet**, and the reason is now named rather than guessed:

    MISS tailcall 0x1527c10  branch 0 goes to None, expected _Z15t_main_e7c4c0_1m

The expected symbol is right -- `t_main_e7c4c0` with arity 1, mangled with the
forwarded parameter. The relocation lookup on the compiled object misses, so the
candidate's branch list is empty and the comparison fails on the branch alone.
That is the last mile and it is a lookup question, not a codegen one.

### The per-arity target name

The target is declared in the batch head, and in C++ `uint64_t t_x();` means ZERO
parameters -- so a five-argument call is ill-formed. Two bodies tail-calling one
destination with different arities would also be two disagreeing declarations,
which is a redefinition and kills the whole translation unit. So the arity goes
into the symbol:

    t_<module>_<addr>        arity 0, the bare thunk, unchanged
    t_<module>_<addr>_<n>    arity n, declared `uint64_t t_x_n(uintptr_t, ...);`

`work/tail_population.py` shows the arity distribution: 1 dominates at 5,509,
then 2 (523), 3 (422), 4 (180), 5 (87), down to 8 (24). A one-argument tail call
is usually `add x0, x0, #imm ; b target` -- the single most common shape in the
whole unmatched set.

### The arity is a MENTION, not a write

`tail_arity` counts the highest argument register the prefix *mentions*, read or
written:

    add x2, x0, #0xec ; add x3, x0, #0xe8 ; mov w4, #1 ; b target

writes x2, x3, x4 and reads x0, so the call takes five. Counting only the written
registers would give three, and the incoming arguments would have nowhere to go --
which is the `tail call argument x1 is neither written nor an incoming argument`
bail, with no other explanation visible.


## The tail-call prefix: LANDED -- 5,322 bodies, +3.50% of the figure

The population that was unreachable for three beats is banked. What it needed was
never codegen. It was one index, one keyword, and an overload.

    32,531 / 21.39%   ->   37,853 / 24.89%
    356,232 bytes     ->   399,108 bytes

### 1. One index

`obj_relocations` is keyed by **offset within the function**, and the lookup asked
for offset 0 -- right for a bare thunk whose whole body is one `b`, wrong for a
prefix where the `b` is the last of several instructions:

    mine_t = [relocs.get(mangled, {}).get(0)]                   # before
    mine_t = [relocs.get(mangled, {}).get(4 * max(0, end - 1))]  # the branch

The expected symbol had been right all along. With the offset fixed: 10,543 of
11,550 verified, 91.28%, of which 5,460 were new.

### 2. One keyword

The report writes a **key whitelist**. `tail_nargs` and `tail_ret` were set on the
record and dropped on the way to disk, so `tail_target_ok` saw nothing and could
not tell a bare thunk from a prefixed one. A field that is computed, stored and
then filtered out is indistinguishable from a field that does not exist.

### 3. One overload

This was the real work, and it was not in the matcher. `retype_thunk` does not
rewrite the verified source -- it **synthesises** a bare thunk and discards the
argument setup the harness had verified byte-for-byte:

    verified   uint64_t main_f_13f40(void* a0)
                   { return main::sub_16ff0((char*)a0 + 784); }
    emitted    void      main_f_13f40()
                   { main::sub_16ff0(); }

Different parameter lists, so different mangled names: the CSV recorded
`_Z12main_f_13f40Pv` while the ELF had `_Z12main_f_13f40v`, and the audit failed
with **5,345 rows whose decomp_name does not exist in the built ELF**.

The destination cannot take the argument either -- it is a namespaced stub
declared `void main::sub_16ff0()`. So the fix is an OVERLOAD emitted beside the
stub, which leaves the canonical `void ns::f()` definition and its symbol exactly
as they were:

    void      sub_16ff0() { /* 0x16ff0 */ }
    uint64_t  sub_16ff0(uintptr_t a0) { /* 0x16ff0: 1-arg tail-call target */ return 0; }

and `proto_for` declares the same overload in the thunk's translation unit,
because a call in one file resolves against what THAT file says.

Measured first, which is why this was cheap: of the 5,460 prefixed tail calls in
main, **5,322 target a stub, every one at arity 1**, across 1,625 distinct
destinations, with **zero** destinations called at two arities. `work/stub_targets.py`
is the measurement. Had the arities been mixed, the per-arity symbol naming from
two beats ago would have been needed here too -- which is why it was built first.

### 4. The gate still refuses 138

A prefixed tail call whose destination is **emittable** stays declined: that
destination has a RECOVERED signature, and re-declaring it with a different arity
would put a name in the CSV that the build does not produce. 138 of 5,460 in main.
They unblock when their destinations are recovered, not before.

### The figure went DOWN 7 on the way here, and that was the gate working

Between 32,538 and 32,531, seven bodies were being emitted as bare thunks while
retail had a prefix in front of the branch -- one instruction short of retail and
counted as matching. `tail_target_ok` caught them. A gate that only ever goes up is
not a gate.

### The figure that was never allowed to stand

Letting all 5,460 through before the emit was fixed read **24.91%** and failed the
audit. It is worth recording that number, because it is what the figure looks like
when the only thing checked is that the harness compiled something.

### Still open

  * 138 prefixed tail calls with an emittable destination.
  * 1,963 tail calls whose branch target is not a recovered function at all --
    the branch leaves the module or lands mid-function, so there is no
    destination to overload. `work/tail_population.py` counts them.
  * 20 bodies in main whose prefix the translator declines (`mov str ldur ldur
    sub add mov` and similar).


## The 1,962 unreachable tail calls are PLT calls, and the blocker is dynsym

Measured, not assumed. `work/tail_unreachable.py` classifies every branch target
that resolves to no recovered function:

    1962  GAP      inside the module's text, in no function row
       0  INSIDE   lands mid-function in someone else
       0  OUTSIDE  past the end of text

All 1,962 are the same thing. `work/gap_what.py` disassembles them:

    main 0x17e8f50:
      adrp x16, #0x2494000
      ldr  x17, [x16, #0x9c0]
      add  x16, x16, #0x9c0
      br   x17

That is the aarch64 lazy-binding PLT entry, 16 bytes, `#off` being a GOT slot. So
these are not broken tail calls to a function we failed to recover -- they are
**tail calls to an EXTERNAL symbol**, and there is no callee in the module to name.

### Which is the blocker, precisely

The identity of the callee lives one level DOWN, at the GOT slot, in a relocation.
`data/main.elf` has no `.rela.plt`, no `.got`, no `.dynsym` and no `.dynstr` -- the
NSO-to-ELF conversion drops the dynamic segment, so `llvm-objdump -r` on it
returns nothing at all.

And the extractor that was supposed to recover the names has produced nothing,
**in every module, and nothing has noticed**:

    module      dynsym.txt    dynsym_count   dynamic entries
    main        0 B           0              1
    rtld        0 B           0              -
    sdk         0 B           0              1
    subsdk0     0 B           0              21
    subsdk1     0 B           0              1

`main`'s manifest says `"dynamic": {"0x0": "0x1"}` -- one entry, then it stops. A
Switch NSO's mod0 dynamic segment is an `NsoArray` of per-module pointers, not the
plain ELF dynamic array `tools/nso_parse.py:parse_dynsym` walks, and
`{"0x0": "0x1"}` is what reading one entry as if it were a module list looks like.

**A zero-byte file is the most dangerous output in this project.** It is
indistinguishable from a legitimate "there are no symbols here", it passes every
existence check, and it has been sitting there long enough to be believed.

### Why these are not simply banked on a weaker claim

For the 5,322 banked tail calls, the harness verifies the branch DESTINATION by
reading the relocation the compiler emitted and matching it against the expected
name. That is a real check. Here there is no name on either side: retail's `b`
carries an address, and our build's `b` carries a relocation to whatever we called
the stub. Comparing addresses cannot work -- the two images are laid out
differently -- and comparing names cannot work because neither side has one.

Banking them would mean verifying the prefix and the branch opcode while calling
the destination unverified. That is a weaker guarantee than the rest of the figure,
and the project's rule is byte-identical only. So they wait.

### What unblocked 1,962 bodies -- and did not

Kept as the record of what was tried, so the closure above is auditable rather
than asserted:

  1. ~~Walk the NSO mod0 NsoArray and recover .dynsym + .rela.dyn.~~ **Refuted.**
     No offset near the RVA parses as a dynamic array; the header-skip hypothesis
     was wrong.
  2. ~~Extract the missing segments.~~ **Refuted.** `flags = 0x3f` is
     boilerplate; the data segment runs to EOF and there is no fourth or fifth
     region to open.
  3. ~~Recover the names from the GOT.~~ **Refuted.** No dynamic array exists to
     carry the slot relocations, and GOT contents are filled at load time.
  4. Skip the missing segments by PLT offset -- name the stub by its GOT slot
     (`plt_24949c0`) and call it. **Rejected, not refuted:** it would produce
     correct bytes for the thunk, but the destination would be named by an address
     on our side and by nothing on retail's, so the branch destination would go
     unverified. That is exactly the weaker claim declined above.

## dynsym, measured properly: the RVA does not resolve, and my first hypothesis was wrong

Two beats of guessing at `parse_dynsym` produced two measurements and one dead
end. Recording both, because the dead end is the useful part.

### What is certain

    module      dynsym.txt    dynsym_count   mod0.dynamic      first d_tag
    main        0 B           0              0x24947f0         0 (DT_NULL)
    sdk         0 B           0              0xc01628          0 (DT_NULL)
    subsdk0     0 B           0              0x5f62d0          garbage

`read_dynamic` reads `Elf64_Dyn` starting at the mod0 `dynamic` RVA. For main and
sdk the FIRST tag is 0, which is DT_NULL, so the walk stops after one entry and
the manifest records `{"0x0": "0x1"}`. `parse_dynsym` needs DT_SYMTAB and
DT_STRTAB, gets neither, and returns nothing.

### The hypothesis I had, and why it is wrong

An NSO's mod0 dynamic section is not a bare `Elf64_Dyn` array -- it opens with an
`NsoDynamicHeader { u32 magic; }` whose magic is zero for the module object, and
followed by an `NsoArray` and then the real array. So reading from the RVA should
consume the magic as `d_tag = 0` and stop, and skipping 4 bytes should fix it.

`work/dyn_skip.py` tests that: it tries every plausible skip and demands a
SELF-CONSISTENT array -- tags in range, DT_SYMTAB and DT_STRTAB both present, and
a DT_NULL terminator.

    main mod0.dynamic = 0x24947f0
      +0   no DT_SYMTAB/DT_STRTAB (has [0])
      +4   out-of-range tags [4294967296, 4294967296, ...]
      +8   out-of-range tags [1879048185, 1879047925]
     ...   every offset to +40 fails

**No offset works for main or for sdk.** So it is not a header-skip. The RVA does
not point at a readable dynamic array at all, and the bytes there are something
else -- for main, `00000000 00000000 00000001 00000000 00000001 00000000 ...`,
which as 64-bit words is `0, 1, 1, 1`, not tags. For subsdk0 the first two words
are `00401404 00501405`, which is neither a tag nor a count.

`parse_mod0` reads six `u32` RVAs out of the MOD0 header (`dynamic`, `bss_start`,
`bss_end`, `eh_frame_hdr_start`, `eh_frame_hdr_end`, `module_object`). Whatever
basis those RVAs use is not the decompressed-segment basis the rest of the tool
works in, and that is where the bug is. `ssize`/image-base style rebasing is the
obvious thing to try next, but it is a guess and it will be measured the same way
this one was: read the bytes, demand a self-consistent array, and do not believe
a plausible-looking offset.

### The NSOs are on disk, and the segments are there too -- correction

Last beat said the source NSOs were gone and the route was input-blocked.
**That was wrong**, and checking cost one command:

    exefs/ exists: 1206 files, 5.58 GB
    exefs/nso/{rtld,main,sdk,subsdk0,subsdk1}   all five, magic NSO0

They are excluded by `.gitignore` as deliberate -- 5.7 GB of Nintendo binaries and
console keys must not be pushed -- which is right, but it made them *look* absent
to a recursive glob for `*.nso`, and the files have no extension at all. So the
1,962 PLT tail calls are NOT input-blocked.

And the header says the segments are there too:

    exefs/nso/main   20454852 B   flags = 0x3f   (bits 0-5 all set)

Six compressed segments. `tools/nso_parse.py:parse_header` extracts **three**:

    for i, n in enumerate(["text", "rodata", "data"]):

Segments 3, 4 and 5 -- `.bss`, `.dynstr`, `.dynsym` -- are compressed, flagged as
present, and **never decompressed and never written to disk**. That is the whole
reason `parse_dynsym` has nothing to point at. It is not a parsing-basis bug. The
bytes it was trying to read were never extracted.

### CLOSED: these NSOs carry no dynamic symbol metadata at all

The decisive measurement. `work/dyn_scan.py` and `work/dyn_scan_text.py` scan
every 8-byte-aligned offset in **all three decompressed segments**, and for text
the whole 25 MB rather than just the first 64 KiB. The acceptance rule is strict:
a run of 16-byte entries, tags in 0..35, terminated by DT_NULL, at least six
entries, carrying BOTH DT_STRTAB and DT_SYMTAB, with DT_STRSZ and DT_SYMENT sane.

    rodata   0 candidate dynamic arrays
    data     0 candidate dynamic arrays
    text     0 candidate dynamic arrays   (whole 25,084,512 bytes)

**Zero, everywhere.** And the segments are not hiding elsewhere: the data segment
runs from 20,357,185 to EOF (20,454,852), so there are no bytes after it, and
`flags = 0x3f` is boilerplate in a file that stores only three segments.

The MOD0 arithmetic, checked properly, is CORRECT -- I got this wrong once in this
same document and am correcting it rather than leaving it:

    0x08  "MOD0"
    0x0c  dynamic    = 0x24947f0    inside data (0x236d000 .. 0x24b9b10)
    0x10  bss_start  = 0x24b9ff8    data ends at 0x24b9b10 -- immediately after
    0x14  bss_end    = 0x27fdb40

So those RVAs are module-image-relative virtual addresses and they are
self-consistent. The address is real. There is simply no ELF dynamic section
there, or anywhere else in the module.

**Conclusion: the PLT symbol names are not recoverable from these NSOs.** Retail
Switch NSOs commonly ship the GOT and the PLT but strip `.dynstr` and `.dynsym`,
because nothing in the shipped module needs them -- there is no dynamic linker
involved, and imports resolve from the module name table instead.

That closes the 1,962. Not "we could not find it": measured across every
decompressed segment and the whole text, with an acceptance rule that rejects
plausible-looking offsets on purpose. Do not re-derive this.

### The weaker alternative stays declined

Banking these by verifying the prefix and the branch opcode while leaving the
destination unverified is weaker than every other row in the figure. The rule here
is byte-identical only. So the 1,962 stay unmatched, and the next population has
to be somewhere else.

### Why this NSO's header does not give the layout up cheaply

The segment table at 0x10 has a 0x10 stride and only three entries fit before
0x3C, which is the bss size:

    seg 0: fileoff=257        memoff=0          memsz=25084512
    seg 1: fileoff=12885139   memoff=25088000   memsz=12057832
    seg 2: fileoff=20357185   memoff=37146624   memsz=1362704
    0x3c = 3425520            <- bss size, inside seg 2's slot

and the usual NSO fields are not where they belong: `dynstr_size`/`dynsym_size`
should be at 0x30/0x34, but those hold the data segment's fileoff and memoff. So
this is an NSO header variant, and segments 4 and 5 have to be located
empirically rather than read out of a field.

### subsdk0 is a third thing

subsdk0's manifest records 21 dynamic entries and a first tag of 22540009848443908
-- not 0, and nonsense. So subsdk0's `dynamic` RVA lands on data that is not a
dynamic array either. All three modules are wrong in the same way, which points at
the RVAs rather than at three separate parse bugs.

### What changed in the tool anyway

The loud-failure work stands on its own merits, independent of the fix:

  * `read_dynamic` records the first tag it saw and how many entries it got, in
    the manifest.
  * `parse_dynsym` returns a REASON, not just an empty list.
  * `dynsym.txt` writes `# NO SYMBOLS RECOVERED` and the reason instead of being
    zero bytes, and the module line on stdout says `DYNSYM EMPTY -- ...`.

A zero-byte file is the most dangerous output in this project: indistinguishable
from a module that exports no symbols, it satisfies every existence check, and it
was produced for all five modules and believed. This change does not fix the
parse. It makes the parse fail out loud.

It is not exercised end to end: the source NSO is not on disk (`work/main` has
the extracted segments but no `.nso`), so `nso_parse.py` cannot be re-run here.
The change is `py_compile` clean and its two call paths are unit-checked, and that
is the honest claim.


## The conditional population: 85,758, and the largest shape had MACHINERY BUT NO ROUTE

`remaining_map.md` quoted 10,396 conditional-branch bodies. That was main only and
it understated the shape by 8x. `work/cond_pop.py` over all four modules:

    main       59363
    sdk        13790
    subsdk0     6478
    subsdk1     6127
                85758  TOTAL

Largest buckets, by (direction, conditional count, terminator):

    12124  fwd / cond=1 / ret     <- one-armed if: the whole population's centre
     8742  fwd / cond=2 / ret
     4731  fwd / cond=3 / ret
     2868  fwd / cond=4 / ret
     2647  fwd / cond=1 / b
     2082  fwd / cond=5 / ret
     1725  fwd / cond=6 / ret

### The centre of it: 6,418 bodies the guarded path already knows how to emit

`work/guard_kind.py` classifies the 12,217 `cond=1 / ret` bodies by what the guard
TESTS, which is what decides whether it can be expressed at all:

     6418  test a loaded field for zero or nonzero   <- the guarded path's shape
     2794  test a register NO load produced           <- the value is not in state
     1465  cmp a register against an immediate
      778  cmp two registers
      278  test a single BIT of a loaded field
      114  the guard is an `fcmp`, not a `cmp` or a test

6,418 bodies whose guard is a zero/non-zero test on a loaded field. And
`straight_line.translate` has taken `guard=` since the guarded path was built, and
is proven on five banked bodies.

### So why were none of them reached

Because the only caller that passes `guard=` is
`call_register.candidates_guarded`, and it requires **EXACTLY ONE `bl`**:

    * the body ends in `ret`
    * exactly one conditional branch, whose target IS the `ret`
    * exactly one `bl`                              <- this
    * no `adrp`/`adr`/`blr`

It is a call-body enumerator. A guarded body with no call in it never arrives, and
nothing else could produce one: `shape_of` returns `branchy` for any body with a
branch, and `gen_straight` calls `translate(ident)` with no guard.

**Machinery with no route.** In main that is 1,606 bodies classified, so the
route is worth having regardless of what happens next.

### What the route found the moment it was built: the guard is DELETED, not emitted

`shape_of` grew a `guarded` shape and `gen_guarded` passes the branch index, and
38 of the 1,606 produced source -- which looked like progress and was not:

    add  x8, x0, w1, uxtw #3
    ldr  x8, [x8, #0x350]
    cbz  x8, ret            <- the guard
    strh w2, [x8, #0x8a]
    ret

became

    void f_x(void* a0, uint32_t a1, uint64_t a2) {
        void* p0 = ...; void* p1 = ...;
        *(uint16_t *)((char *)p0 + 138) = (uint16_t)a2;      <- no `if`
    }

The guarded block is emitted UNCONDITIONALLY. The test and both of its outcomes
are gone, and that is a different function. No error is raised anywhere.

It cannot corrupt the figure -- retail has the branch and this does not, so the
comparison rejects it -- but it puts wrong C into `prog/` for every body that goes
this way, silently. So `gen_guarded` now ASSERTS THE ARTIFACT'S SHAPE AT
PRODUCTION: if `if (` is not in the emitted source, the body is declined. All 1,606
now decline, and the population stays mapped instead of shipping wrong code.

This is the second time in three beats that a translator path produced plausible
output with a whole instruction class missing. The rule is now: a generator that
cannot show the thing it is generating is not finished.

### What unblocks 6,418 bodies

The guarded emitter, not the classifier or the enumerator. It has to turn the
`cbz` into an `if` with both outcomes present. Two things are known to stand in
the way and both were measured on the SMALLER call-body guarded population, so they
have to be re-measured at this size:

  * 61 of 123 needed a frame INSIDE the branch, and Clang does not shrink-wrap
    for aarch64 at -O3 with these flags
  * 35 needed a genuine `sp` local, an out-parameter whose address is taken


## The diamond population: 958, found by fixing the probe three times

`work/switch_kind.py` labelled 2,926 bodies "b FORWARD into the body (diamond)"
using one test: a `b` whose target is forward of the branch. That is a LABEL, not
a shape -- the same instruction appears in code that is not an if/else at all. It
is the identical mistake to the one that made `guarded` claim 1,606 bodies when
there were 292.

So the structural test. A real diamond:

    <pre>
    <test>                 cmp / cbz / tbz
    b.cond  <ARM_B>        skip over ARM_A
    <ARM_A>
    b       <JOIN>         skip over ARM_B
    <ARM_B>
    <JOIN>                 often just the ret

and `work/diamond_shape.py` checks each requirement separately.

### Three probe bugs, and 41 -> 97 -> 958

**1. `tbz w2, #0, #0x16` has THREE operands.** `ins[k].op_str.strip()` is
`w2, #0, #0x16`, and parsing that as one `#hex` raised on every bit-test.
**2,151 bodies vanished into "branch target unparsed"** -- which reads as "these
are not diamonds" and is actually "this probe cannot read a three-operand branch".
41 diamonds.

**2. The structural test ran on the FRAME-STRIPPED body.** A branch target is an
address, turned into an index by `(target - addr) // 4` -- which is only the right
index if the list still starts at `addr`. Stripping the frame shifts every index
after the first, so every target resolved to the wrong instruction. 97 diamonds.
Stripping belongs to the translate step, not to the shape test.

**3.** (Fixed before the third run; recorded because the first two were not
caught by the number being implausible -- they were caught by reading the code.)

**958**, and that is a real population:

        main 563    sdk 132    subsdk0 121    subsdk1 142

The remaining 2,741 candidates fail for real reasons: 1,031 "the join is not the
end" (a forward `b` that skips to a block which is not the join), 732 "the `b` is
not forward" once the address basis is right, 14 that the conditional does not
target the instruction after the `b`.

Three successive confident small numbers, none of them about diamonds. The one
thing all three share is that they were small enough not to look wrong.

### What the generator has to do

The layout rule is known (see control_flow.md): Clang will not invert a
conditional branch to make a block fall through, so the polarity is fixed by which
arm is the layout successor, and the C gets the arm order the original has. The
translator already emits one arm plus a fallthrough; a diamond needs a second arm
and an `else`.


## The diamonds are NOT a splice -- they are a project, and they say what to build next

`work/diamond_arms.py` tests each diamond's regions against the translator's OWN
accepted vocabulary (LOADS, STORES, PAIR_LOADS, PAIR_STORES, add, mov, sub):

    897 diamonds found
      692  the prefix has an unsupported mnemonic      (77%)
      672  ARM_A  has an unsupported mnemonic          (75%)
      472  ARM_B  has an unsupported mnemonic          (53%)
        0  BOTH ARMS CLEAN

    the mnemonics that put a region outside it:

       2854  bl        calls
       1767  fmul      FP arithmetic
       1037  adrp      page anchors
        901  ret       (my ACCEPT set omits the terminator -- a probe bug, and
                       it is why "join" reads 0; the arms below are unaffected)
        625  fadd
        500  blr       indirect calls
        454  and
        425  cmp       (the test itself -- expected)
        394  orr
        352  fsub
        320  movk
        249  ext
        228  fmov

**FP ARITHMETIC IS THE MISSING CAPABILITY, not `else`.**

`fadd + fmul + fsub + faddp + fmov` account for roughly 3,200 mnemonics across
these 897 bodies -- more than any other single cause -- and the translator has no
handler for any of them. `bl` is the second cause, and it is not missing from the
translator so much as unreachable here: a call inside an `else` needs the call
path extended, which is the same shape of work.

The same FP gap shows up in the GUARDED population, where `work/guard_kind.py`
counted 114 bodies whose guard is an `fcmp` rather than a `cmp` or a test. Those
need the same arithmetic the diamond arms need. Two populations, one missing
capability.

### So: do not build the diamond generator next

The design from the last beat -- a second inner block spliced into the guarded
emit -- is still correct, and it is still small. But it would convert 897
candidates into 897 candidates the translator cannot translate. The `else` was
never the expensive part. Building it now would produce a generator whose yield is
0 for the same reason the previous one was: it would be claiming a population it
cannot express.

FP arithmetic first, then the `else`. That order is measured, not preferred.


## FP arithmetic landed: +85 bodies, 24.92% -> 24.97%

The previous beat concluded the diamonds were not worth building because their arms
are outside the translator's vocabulary, and that FP arithmetic was the missing
capability behind two populations at once. Both halves of that were right.

    37,890 / 24.92%   ->   37,975 / 24.97%
    399,896 bytes     ->   401,476 bytes

    main 24271/26589 = 91.28%     sdk 3220/3648 = 88.27%
    subsdk0 965/1021 = 94.52%    subsdk1 1329/1533 = 86.69%

### Measured before implemented, which is the rule this project keeps relearning

`work/fp_recipe.py`, before a handler was written:

    double a1, a2, r;  r = a1 + a2;   ->  fadd
    float  a1, a2, r;  r = a1 + a2;   ->  fadd       the SINGLE form
    double a1, a2, r;  r = a1 * a2;   ->  fmul
    double a1, a2, r;  r = a1 - a2;   ->  fsub
    float  a1;   double r;  r = a1;   ->  fcvt       already modelled as `fpun`
    double a1;   float  r;  r = a1;   ->  fcvt       ditto
    faddp d0, d1, d2                  ->  NOT PRODUCED

The load-bearing line is the second. `s0` and `d0` are the SAME STORAGE, so a
`float` local and a `double` local are a pun rather than two values, and `fadd` has
two distinct encodings. **The width of the local decides which** -- the same rule
as the store-width and register-class rules already in this file, found a third
time in a new place.

And `faddp` is NOT in the handler: pairwise addition is an operation on a VECTOR,
and scalar `a1 + a2` compiles to plain `fadd`. A vector form is a different value
kind and is not claimed.

### What is still not modelled

  * `faddp` / `fmul v.` / `fmla` -- VECTOR FP. Needs a `float64x2_t` value kind,
    and `faddp` is how a pairwise add of two doubles is spelled. `work/gap_what.py`
    style measurement first: how many of the remaining `faddp` bodies are a simple
    pairwise add of two doubles.
  * `bl` inside an `else` -- the second-largest cause in the diamond arms. The call
    path exists; it is the `else` that does not.
  * `adrp` in a diamond's prefix -- 1,037 of the mnemonics that put a region
    outside the vocabulary.

So the order is unchanged and now has one fewer item in front of it: FP arithmetic
done, the `else` next, and the vector FP form after both.


## Every unmatched body has a branch: the straight-line population is EMPTY

37,975 / 24.97%, unchanged. Last beat's `else` measured at zero, so this beat
looked for a new population -- the loop family (2,026 claimed) and the jump
table family (2,230 claimed) -- and got a stronger result than either.

### The claimed loop population is 3,532, and none of it is reachable today

`work/loop_basis.py` classifies every backward branch, not every backward branch's
owner:

        5,911  REAL CYCLE (a predecessor lies inside the target's span)
        6,559  convergence: shared epilogue, no cycle
        2,814  backward branch, single predecessor
        9,841  indirect `br` (jump table)

A backward `b` is not a loop. A **shared epilogue** -- several disjoint paths
converging on one factored-out block, typically a `ret` -- branches backward
without any cycle existing. The discriminator is whether the target has a
predecessor INSIDE the span between target and branch; if not, nothing loops.

Of the real cycles, **3,404 contain a call** and **128 do not**. The 128 are the
honest capability test, because a counted loop with no call is the simplest thing
that is still a loop:

        128 no-call cycles, and the translator handles 0 of them
          69  body does not end in ret
          59  over MAX_INSNS=32

So loops are not one capability away. They need an emitter that does not exist,
and the cheapest possible instance of it already fails -- 69 of 128 for a
precondition ("the body must end in `ret`") that a loop structurally cannot meet.

### The probe was wrong AGAIN, and I wrote the bug this time

`loop_basis.py` first reported **9,675 "target unparsed"**. That was one
character of mine:

        best = best or "target unparsed"     # keeps the FIRST verdict, forever

so a body whose first backward branch was unparseable kept that label even when
a later branch classified cleanly. 9,675 confident wrong labels, produced while
trying to keep a measurement honest. Re-measured per-branch: the real figure is
3,532 cycles, and 9,675 was nothing at all.

That is the sixth probe bug in this project, and the rule that catches them is now
the same each time: **classify per-item and count every stage**, never let one
item's verdict stand in for another's, and never report a remainder as a
population without reconciling it against a second, independent count.

### Reconciled against the authoritative figure

Two independent counts disagreed (113,003 vs 114,087) and the gap is where an
unmeasured population hides, so `work/acct.py` accounts for all of it:

        114,087  CSV unmatched, the authoritative figure
        113,905  reached by walking the four module registries
           902  disassembly produced nothing
           182  rows belonging to other CSV modules
        113,003  accounted for, and every one has a branch

**113,003 of 113,003 unmatched bodies contain a branch of some kind.** Not one is
a straight-line body.

### So the straight-line translator's vocabulary is at TOTAL COVERAGE

`work/vocab_gap.py` reads the accepted-mnemonic sets **out of `straight_line.py`**
rather than retyping them -- so the FP handlers added last week count without the
script knowing -- and asks how many unmatched branch-free bodies are within one
handler. The answer is zero, because there are no branch-free bodies at all.

That is the real finding of this beat. It is not "no new generator worked". It is:

  * the straight-line vocabulary covers 100% of the bodies that could use it;
  * every remaining body is control flow;
  * and all three control-flow shapes measured this beat are blocked by a
    capability that does not exist yet -- `else` for diamonds (30 translate, 0
    match), a loop emitter for cycles (0 of 128), a per-case body for jump tables.

The remaining population is not waiting for a better generator. It is waiting for
capabilities, and the next one should be chosen by size: **jump tables, 9,841.**

### What NOT to do

Do not re-run the existing generators expecting a different number. All four
module yields are unchanged and the vocabulary is saturated, so a fifth run of the
same generators returns the same 37,975 and the run is wasted. Measure first.


## The 9,841 "jump tables" are 102 jump tables, and 1,745 tail calls

37,975 / 24.97%, unchanged. Last beat said "jump tables, 9,841, by a factor of
three" and added "a 9,841 count has never yet implied a 9,841 yield". Measuring it
was the right call: **the 9,841 was a category error**, and the real population is
smaller than the count but far more reachable.

### `br` is doing four jobs and was counted as one

    work/jump_cost.py   10,456 bodies have an indirect `br`
                          39  adrp + add + ldr + br: a TEXTBOOK jump table
                       1,852  adrp but no add+ldr: partial dispatch
                       8,565  no adrp at all before the br

    work/br_tail.py     2,828 the `br` is the LAST instruction (a terminator)
                       7,628 code follows the `br`
                        102  ...and it is a table dispatch
                      2,726  ...and it is a TAIL CALL

Only **102** are jump tables. `work/switch_kind.py` put 9,841 "jump tables" in one
bucket, and `jump_cost.py` found 10,456 `br` bodies with 39 real jump tables
between them -- the same error in a new file, which is what happens when a
mnemonic is used as a category.

### The 2,726 are vtable tail calls, and the call path almost already speaks them

The deciding example, main 0x6080, 24 bytes:

    ldr x0, [x0, #0x140] ; ldr x8, [x0] ; ldr x3, [x8, #8] ; mov w1, #1 ; mov w2, #1 ; br x3

That is a tail call through a function pointer: the destination is a value, not
an address. It is blocked by ONE line:

    raise Bail("tail body does not end in b")

`tail=` demands a direct `b` because it renders `return callee(args)` and a callee
has a NAME. An indirect `br x3` has no name, so that form cannot express it.

Of the 2,726, **1,745 are inside the translator's vocabulary** -- straight line,
single `br`, no call, no conditional branch, every mnemonic known. They are one
condition away, and the condition is a string comparison.

### The recipe EXISTS, measured before implementing

The rule is to measure the minimal C compile before writing any handler, because a
plausible handler that has never been compiled produces plausible output that is
wrong in a new way. `work/tail_recipe.py`:

    ((struct T*)((char*)a0 + 0x140))->f(a0, 1, 1)   ->  br, NO blr   size 16
    ((struct T*)((char*)a0 + 8))->f(a0)             ->  br, NO blr   size 8
    ((struct T*)((char*)a0 + 8))->f(a0, 0x10)       ->  br, NO blr   size 12
    the same call twice (NOT in tail position)      ->  blr AND br   size 44

Clang 5.0.1 emits a genuine TAIL `br` for an indirect call, and falls back to
`blr` when the call is not in tail position. So the capability is Clang's, not
something to build.

**And `br` has a structural advantage over `b` that no direct branch has:**
`br` is a fixed 4-byte instruction with NO immediate, so there is no byte offset
to mismatch between differently-laid-out images. The tail-call prefix landed
5,322 bodies partly because of this; the diamonds' `b` can never match across
layouts for exactly the opposite reason.

### Probe bug #7, and it rejected the thing it was looking for

`work/br_simple.py` first reported 1,909 of the 1,990 "simple instances" as using
a mnemonic outside the vocabulary, and the top offender was `br` -- 1,896 of them.
The vocabulary test ran over every mnemonic in the body INCLUDING the terminator,
and `br` is not in the accepted set because `tail=` excludes it from the walk. The
check and the translator disagreed about what the body is, and the check lost.

That is the same class as the earlier six: a measurement that confidently rejects
the thing it is measuring. The cure is identical -- test the BODY, not the body
plus its terminator, and reconcile any remainder against a second count.

### What is left, stated as capability rather than population

    1,745  indirect tail calls, vocabulary OK, blocked on `tail=` accepting `br`
      102  real jump tables, need the `.rodata` table bytes and a per-case body
    3,404  loops containing a call, need a loop emitter (0 of 128 no-call
           cycles translate today, so the emitter does not exist)
     30  diamonds that translate, blocked on block LAYOUT not shape

The first is a string comparison and a measured recipe. That is the cheapest thing
on this list by an order of magnitude, and it is 58x the diamond population.


## The indirect tail call: recipe measured, and ONE divergence found

Last beat said the 1,745 were "a string comparison against a measured recipe".
The string comparison is still undone, but the RECIPE is now measured, and it is
one instruction class short rather than wrong.

### Four spellings, one shape, and retail's exact size

    work/ind_tail_recipe.py, against main 0x6080's 24 bytes

    A: cast void* local        24 bytes  ldr ; ldr ; ldr ; orr ; orr ; br
    B: pinned register         24 bytes  ldr ; ldr ; ldr ; orr ; orr ; br
    C: direct cast call        24 bytes  ldr ; ldr ; ldr ; orr ; orr ; br
    D: no local for t          24 bytes  ldr ; ldr ; ldr ; orr ; orr ; br
    retail                                ldr ; ldr ; ldr ; MOV ; MOV ; br

    ldr ; ldr ; ldr ; ... ; br  -- identical, including the load ORDER

So the tail call IS expressible and Clang 5.0.1 emits it. The load order that was
the thing to watch -- retail loads the function pointer BEFORE writing the argument
registers -- is preserved by every spelling.

### The divergence is `orr` where retail has `mov`, and it is not the type

`orr x1, xzr, #1` is `0x32000001`; `mov w1, #1` is `0x52800020`. Same value,
different encoding, 8 bytes of a 24-byte function.

    work/movz_probe.py  six argument-type variants, ALL identical
      uint32_t / uint64_t / int args      -> orr ; orr
      constants 1 / 0x100 / 0x10000       -> orr ; orr

    work/movz_locals.py  four more spellings, ALL identical
      literals into the call / assigned to parameters / plain locals / casts

    work/movz_direct.py  the direct-call control
      direct tail call, constants           -> orr
      so it is not specific to INDIRECT calls either

    work/movz_plain.py  the widest control of all
      store a constant, no call at all      -> orr

So the recipe does not choose MOVZ, and neither does the type, nor the constant,
nor the indirectness. **Something in the project's own generators is producing
MOVZ and that something has not been identified yet.**

### Reconciled against the matched corpus, which says it EXISTS

    work/movz_corpus.py
      MATCHED   bodies containing `mov wN, #imm`:  6,420
      UNMATCHED bodies containing `mov wN, #imm`: 65,497

6,420 verified byte-identical bodies contain MOVZ. Clang emits it. The 65,497
unmatched bodies containing the same instruction are capped by something, and that
something is worth naming on its own: **65,497 is 57% of the remaining population
and every one of them carries an instruction whose spelling is not yet known.**

### The next step is cheap and specific

`work/read_movz2.py` pulled the C for main 0x4e0, a matched body with `mov w9, #1`
-- and it turned out to be a HANDWRITTEN magic-static body from
`tools/magic_static.py`, not a straight-line generator's output. So it does not
answer the question.

The answer is one file read away: find a matched body containing `mov wN, #imm`
that came from the straight-line translator, and read its emitted C. The spelling
is in the registry right now. Until that is done the 1,745 stay blocked, and the
blocker is a spelling, not a capability.

### Probe bugs in this beat, both of which would have been believed

  * `work/ind_tail_recipe.py` filtered on a mangled symbol name it had spelled
    wrong twice, and printed "f() NOT EMITTED" for all four cases. That reads as
    "Clang will not emit an indirect tail call" and is actually "this probe
    measured nothing". A diagnostic that reports ABSENCE when it measured nothing
    is worse than a crash, because it is believed.
  * `work/read_movz.py` compared addresses as TEXT against "4e0" while the CSV
    stores zero-padded 16-digit hex, so it printed "no CSV row" for a body that is
    in the matched set. Any probe that compares addresses as strings can silently
    empty itself this way.


## The MOVZ spelling, read out of the registry: an empty `asm volatile` barrier

Last beat's next step was "read the MOVZ spelling out of the registry". Done.

    work/movz_truth.py, main 0x4c5b30, shape=call, VERIFIED

    retail: stp ; mov x29, sp ; bl ; mov w0, #1 ; ldp ; ret

    sub_4c4700();
    uint32_t r0 = 1;
    asm volatile("");
    return r0;

The empty `asm volatile` is load-bearing and not incidental: it is a BARRIER.
Without it Clang constant-folds `1` straight into the return and the instruction
disappears. With it the value must exist in a real register at that point, and the
backend materialises it as MOVZ.

**So the rule is not "use the right type". It is "put a barrier between the
assignment and the use".** Every spelling in `work/movz_plain.py` was
semantically equivalent to folding the constant into its use, and folding is
exactly what Clang prefers -- which is why all ten produced `orr`.

### But it does NOT rescue a call ARGUMENT

    work/movz_barrier.py, against retail's ldr;ldr;ldr;mov;mov;br

    A: no barrier                                  ldr;ldr;ldr;orr;orr;br
    B: asm barrier on the arguments                ldr;ldr;orr;orr;ldr;br
    C: barrier as a statement, then assign         ldr;ldr;ldr;orr;orr;br
    D: pointer loaded before the arguments         ldr;ldr;ldr;orr;orr;br

Clang 5.0.1 will not emit MOVZ for a constant CALL ARGUMENT. It will for a constant
RETURN -- which is exactly why the registry's 2,544 `call`-shaped bodies match:
their `mov w0, #1` is a return AFTER the call, not an argument to it. The two
populations look identical in the instruction stream and are not the same problem.

That is a compiler property, not a spelling. This is the first hard block in a
while, and it is worth naming as one: **there is no C that makes Clang 5.0.1 emit
MOVZ into an argument register of an opaque callee.**

### Which splits the 1,909 into 1,762 reachable and 147 dead

    work/tail_forward.py
      1,909  simple indirect tail calls (br terminator, no call, no cond branch)
      1,762  ...FORWARD their arguments: no constant to fold
        147  ...SET a constant argument: blocked by the MOVZ/ORR gap
              101  ...and that constant IS an argument register

    main 1475, sdk 223, subsdk0 69, subsdk1 142

The 1,762 look like this and need no MOVZ at all:

    main 0x2a890   ldr x8, [x0] ; ldr x2, [x8, #0x100] ; br x2
    main 0x33ad0   ldr x0, [x0, #0x118] ; ldr x8, [x0] ; ldr x1, [x8, #0x88] ; br x1

So the 1,745 from last beat were slightly over-counted AND mostly unblocked: the
real number is 1,762, and the 147 that are genuinely dead are dead for a compiler
reason that no amount of spelling will move.

## Three probes reported ZERO for this in a row, all for the same reason

`work/movz_source.py`, `work/movz_truth.py` and an earlier variant each reported
0 bodies with `mov wN, #imm` -- one of them across 151,132 disassembled bodies.

**Capstone's `op_str` does not contain the mnemonic.** It is the operands only,
"w1, #1". A regex anchored at `^mov\s+` can never match it, so the test was
unsatisfiable and the answer was zero by construction.

Zero out of 151,132 is not a finding, it is a regex that cannot match anything, and
it is indistinguishable from a result unless you look at the denominators. The one
probe that survived (`movz_corpus.py`, 6,420 / 65,497) did so only because it
tested `i.mnemonic == "mov"` FIRST and then fell back to a `#` substring test --
so the number that looked wrong last beat was the correct one, and the three that
disagreed with it were all broken.

**Count both the numerator and the denominator, and believe neither without them.**
A rate of 0.0% over 151,132 samples is a bug report, not a measurement.

The 6,420 / 65,497 split is confirmed and is real:

    REGISTERED   6,420 /  38,129   16.8%   carry `mov wN, #imm`
    NOT REG.    65,497 / 113,003   58.0%   carry `mov wN, #imm`

58% of the remaining population carries this instruction. That is NOT one blocker:
6,420 of those bodies already match. It is a mix, and the barrier rule above is
what separates them -- a constant that reaches a RETURN is fine, one that reaches a
call ARGUMENT is not.


## INDIRECT TAIL CALLS LANDED: +758 bodies, 24.97% -> 25.47%

    37,975 / 24.97%   ->   38,733 / 25.47%
    401,476 bytes     ->   412,948 bytes

    main 679/1174 = 57.84%     sdk 38/166 = 22.89%
    subsdk0 13/55 = 23.64%      subsdk1 46/113 = 40.71%

### What it took

The direct tail-call path has rendered `return callee(a0, ...)` since it matched
5,322 bodies. That needs a callee NAME, and a pointer loaded from memory has none,
so all 1,762 declined with `Bail("tail body does not end in b")` -- which reads as
"the translator cannot express this body" and is actually "the translator has one
spelling of a tail call and it assumes a name".

`br` is also structurally EASIER than `b` for byte identity: `b` carries a
byte-offset immediate, so two differently-laid-out images can never agree on it,
which is why the 30 diamonds that translate today are blocked on exactly that.
`br` is a fixed 4-byte instruction with no immediate at all. Nothing to disagree
about.

### A regression that READ like a different regression

The first working version cost 4,794 bodies:

    main --all-shapes        BASE 24272   NOW 19478
    main --shape tailcall    BASE 11550   NOW 5083   -6467

A 6,467 loss attributed to a shape that claims 1,174. The obvious reading is "the
new shape steals bodies from the old one". **That reading was wrong.**

The cause was one identifier in the emitter. The tail-call emit hardcoded
`"uint64_t"` as its return type, and it was changed to `rct` -- the type derived
from the body's last value. A tail-call body has NO last value, because the branch
IS the return, so `rct` is `void` for most thunks and the direct path stopped
compiling.

The fix is the conditional: an INDIRECT tail call must be `void` (the cast declares
the callee `void`, and a `uint64_t` wrapper cannot return a void call), a DIRECT
one keeps the literal. Return types are absent from the Itanium mangling, so the
literal costs nothing.

The lesson is the one this project keeps paying for: **a number that moves in the
wrong direction gets explained, and the explanation has to be the RIGHT one.** The
first explanation had a plausible mechanism and evidence pointing at it -- a shape
with a much smaller count -- and was wrong. The right one required stashing
`tools/` and measuring the baseline directly.

### Also: a batch compile error is not one failed candidate

    error: cannot initialize return object of type 'uint64_t'
           with an rvalue of type 'void'

All four modules reported it and NONE reported a match, because the harness
compiles in batches: one bad candidate takes every candidate sharing the
translation unit.

And the arity scan counted the BRANCH REGISTER as an argument, so

    ldr x8, [x0] ; ldr x2, [x8, #0x40] ; br x2

produced a three-argument call that passed the function pointer to itself as
argument three. Wrong, plausible, and caught by no shape assertion.

## Still blocked

  * 147 indirect tail calls that SET a constant argument. Clang 5.0.1 emits
    `orr xN, xzr, #imm` into an opaque callee's argument register and never `mov`,
    across four barrier placements and six argument types. No C moves it.
  * The 1,513 candidates this shape generates but does not match -- 58% overall
    miss rate on the shape.
  * 2,689 diamonds, 3,404 loops containing a call, 102 jump tables.


## Why the other 1,513 indirect tail calls miss: 56% of them differ by ONE register

The shape generated 1,508 candidates and matched 776. That is a 58% miss rate on
a shape that demonstrably works, so the loss is layout, not capability -- and
layout losses are found by finding the first instruction that differs.

    work/itail_diff.py, 497 main candidates compiled and diffed

    br=497                     every one IS a genuine tail call; TAILCC fires
      279  mnemonics equal, operands differ      56% of the misses
      135  diverges at the TERMINATOR only        27%   (mine is one insn longer)
       15  diverges mid-body
        7  diverges in the LOAD/STORE sequence
      ...  the rest are one-offs, all under 8

### And it is ONE register

    main 0x1e480, instruction for instruction:

    retail  ldr x0,[x0,#0x6e8] ; ldr x8,[x0] ; ldr x5,[x8,#0x18] ; and ; and ; br x5
    mine    ldr x0,[x0,#1768] ; ldr x8,[x0] ; ldr x3,[x8,#24]  ; and ; and ; br x3

Six instructions, identical offsets, identical masks. Retail keeps the callee in
**x5**; Clang puts it in **x3**.

### The register is POSITIONAL, so x5 is unreachable from C

    work/callee_reg.py

    A: nested inline cast (what we emit)            callee=x3
    B: callee bound to a named local                callee=x3
    C: callee local, arguments pre-bound            callee=x3
    D: arguments masked FIRST, then the callee      callee=x3
    E: FOUR-argument signature                      callee=x4   <- moves with arity

Variant E is the one that settles it. The callee register is the lowest free
caller-saved register AFTER the argument registers, so it tracks the arity: three
arguments in x0-x2 gives x3, four in x0-x3 gives x4. Four different spellings of
the same call all give x3, and changing only the arity moves it.

**Retail's x5 is therefore not reachable by any C.** It is the register Nintendo's
compiler chose, and Clang 5.0.1's allocator has an invariant that excludes it. This
is the same class of block as the MOVZ-into-an-argument finding, and unlike MOVZ
this one is provable rather than merely measured across spellings: the allocator
assigns positionally, and position is not a source-level property.

So the 279 are dead, and the honest total for this shape is:

    1,508 candidates
      776  matched
      279  unreachable: Clang allocates the callee register positionally
      135  mine is one instruction longer at the terminator
      318  the rest, and none of them has been diagnosed yet

## Three probe bugs in this beat, all the same species

Every one of these reported something that was not true, and every one was caught
by a denominator or an example rather than by the number:

  * `work/itail_diff.py` filtered nm on `_Z2f_t`. The mangled length prefix counts
    every character, so `f_t` is `_Z3f_t`, and all 497 candidates came back "NO
    SYMBOL (empty body)" -- a total-missage codegen report for functions that were
    emitted perfectly, one of them at exactly retail's byte count.
  * Then the operand field index was wrong, printing `ldr ` with no operands and
    making the largest bucket in the census unreadable -- the one thing the bucket
    exists to show.
  * Then `canon()` did not convert anything, because objdump writes `[x0, #1768]`
    with the closing bracket attached, so the token is `#1768]` and a pattern
    anchored at `$` after the digits never matched. 279 bodies were still reported
    as operand differences when the operands were identical.

The rule that catches all three: **read identifiers and field boundaries out of nm
and objdump's own output; never spell a mangled name or an index you have not
looked at**, and print an example for every bucket big enough to act on.

## Next

The 135 "one instruction longer at the terminator" bucket is the largest one that
is still diagnosed-but-unfixed, and it is a smaller, more tractable question than
either of the two dead populations.


## The 135 is not a terminator problem: it is a MISSING WRITEBACK, and it is 29,556 bodies

Last beat called the 135 "one instruction longer at the terminator". That label was
wrong, and reading the bodies instead of trusting the bucket name is what caught it.

    main 0x308690, four instructions each
    retail  ldr x8, [x0, #-0x30]!     <- PRE-INDEX, writes x0 back
            ldr x3, [x8, #0x188]
            and w1, w1, #1
            br x3
    mine    ldur x8, [x0, #-48]      <- UNSCALED, no writeback
            ldr x2, [x8, #392]
            and w1, w1, #0x1
            br x2

The C `(char *)a0 - 48` is a correct dereference of `a0 - 48` but never STORES the
decremented pointer back into x0. Retail's `!` does, and that is a different
program: any later use of x0 sees `a0 - 48` in retail and `a0` in mine. They are the
same length, the same mnemonics in the same order, and a different program.

### An indexed load with writeback produces TWO values, and the model has room for one

    ldr xD, [xN, #off]!     xD = *(T*)((char*)xN + off);  xN = (char*)xN + off;
    ldr xD, [xN], #off      xD = *(T*)xN;                 xN = (char*)xN + off;

The translator's value map is one register to one value, and the register kind
`load` records only the dereference. Both forms are unmodelled today -- the
pre-index form silently loses the writeback, and the POST-index form declines
outright, which is how this was first met:

    Bail("unhandled instruction 'ldr' 'x9, [x8], #8'")

A post-index load is the harder one for the model and the easier one for C: the
pointer has to be materialised into the local BEFORE the dereference, which the
existing `expr` kind already does.

### The population, measured with the frame stripped

    work/writeback.py, over 112,227 unmatched bodies

      82,671  no indexed load with update
      29,556  HAS ONE  (main 25,779  sdk 1,586  subsdk0 1,125  subsdk1 1,066)
       8,729  ...post-index instances
      98,202  ...pre-index instances

**29,556 bodies -- 26% of everything that remains -- are blocked on two
instructions that need one new value kind.**

The first version of this census reported 51,299 and its examples were

    str x21, [sp, #-0x30]! ; stp x20, x19, [sp, #0x10] ; ...

which is the standard PROLOGUE, not indexed loads on a pointer. Stripping the
frame -- which `call_register.is_frame_insn` has done for every generator input
since the guarded path was built -- drops it to 29,556, and excluding `sp`/`x29`
bases drops it again, because a spill restore is already declined as "memory base is
sp: a stack slot is not modelled" and belongs to a different blocker.

Two corrections to a population number inside one probe, both in the same
direction and both from the same mistake: counting something the translator had
already stripped. The frame is not the body.

## Where the remaining population now stands, as capability

    29,556  indexed load with writeback -- ONE value kind        NEW, largest
    51,299  sp/x29-relative -- already declined as stack slots   different blocker
      279  indirect tail calls whose callee register is positional   provably dead
      147  indirect tail calls that set a constant argument          provably dead
    18,051  bodies with no branch AND no writeback -- small enough to audit by hand
     2,689  diamonds, blocked on block LAYOUT
     3,404  loops containing a call, blocked on a missing emitter
       102  jump tables, blocked on the .rodata table bytes

## Next

Measure the recipe for `ldr xD, [xN, #off]!` before writing the handler, as with
every other one: if Clang cannot be made to emit the writeback form from C, then
29,556 is another population claimed and not reachable, and finding that out is
cheaper than writing the handler.


## WRITEBACK: the recipe EXISTS, the handler regresses, and it needs LIVENESS

Last beat named the next move: measure the recipe for `ldr xD, [xN, #off]!` before
writing the handler, because if Clang cannot be made to emit it then 29,556 is
another claimed-but-unreachable population. Measured:

    work/wb_recipe.py, clang 5.0.1 -O3

    pre: assign then update          ldr x8, [x0, #-48]!    <== WRITEBACK
    pre: array index then bump       ldr x8, [x0, #-48]!    <== WRITEBACK
    pre: update FIRST, then deref    sub x8, x0, #48 ; ldr x8, [x8]
    pre: pointer arithmetic with +=  sub x8, x0, #48 ; ldr x8, [x8]
    post: deref then advance         ldr x8, [x0], #8       <== WRITEBACK

    retail main 0x308690:  ldr x8, [x0, #-0x30]!

Both forms are reachable, and the spelling is the obvious one. Two of the five
produce the writeback and two do not, and WHICH of the two you picked is the whole
question: materialise the pointer first and Clang folds it into a separate `sub`,
which is a different instruction sequence. Dereference-and-then-update is the one
that keeps the addressing mode.

### The handler was written, and it cost 309 bodies

    straight_line.py: peel `!` / `], #off` off the operand before parsing, emit
    the load as before, then set the base register to an `expr` on its own
    previous value.

    all-shapes        BEFORE    AFTER     delta
      main             24951    24799      -152
      sdk               3255     3148      -107
      subsdk0            980      930       -50
      subsdk1           1375     1375         0
                   ------------------------------
                                 net        -309

**So the implementation was reverted and the baseline re-verified at exactly
24951 / 3255 / 980 / 1375.** Nothing is committed that loses bodies.

The cause is liveness, and it is a real requirement rather than a tuning knob. A
writeback writes the base register, so the base is no longer the value the walk
recorded for it -- every later read of that register now renders the `expr`
instead of the load it used to be. In a body where the base is READ AGAIN
afterwards, that is correct and is what retail does. In a body where the updated
value is never used, the old rendering was right and the new one forces a
materialisation that did not match.

Retail emits the `!` either way -- the writeback is in the ENCODING whether or not
the value is live -- so this cannot be fixed by dropping the update when it looks
dead. It needs a real liveness pass over the base register:

    for each indexed load with a writeback:
        if the base register is read by any LATER instruction   -> emit the update
        else                                                  -> emit the load in a
                                                               form that still carries
                                                               the `!` addressing mode

which is the same class of question as the `ldp` pair-position search and the
`mov` pin placement, and it is why those took a probe each rather than a guess.

### What is settled, and what is not

Settled: 29,556 bodies are REACHABLE. Clang 5.0.1 emits both writeback forms, and
retail's exact `ldr x8, [x0, #-0x30]!` is among them. This is not another dead
population like the MOVZ-into-an-argument finding and the positional callee
register; those were provably out of reach from C and this is not.

Not settled: the handler needs a liveness pass, and that is a larger piece of work
than the emit. It is the largest reachable population in the project, so it is
worth doing properly rather than shipping the emit alone and regressing 309 bodies
to find out.


## The README WAS stale, and the gate that missed it is now closed

This has been asserted every beat for seven beats and has been false every beat
until now. It was not false this time.

    README.md, the byte-weighted claim, in prose beside the generated block

        > **byte-weighted** (401476 / 38,172,368 bytes of code)

`401476` was two beats out of date. The true figure is **412948**, and the generated
status block above it said so correctly the whole time -- which is exactly why
nobody saw it: the block and the sentence state the same number in two formats, and
only one of them was generated.

### WHY the audit passed, which is the part that mattered

`audit.py`'s "quoted figures agree with the CSV" check compares the GENERATED block
against `progress_json.py`. It never looked at prose. So the gate covered a strict
subset of the thing it was named for, and printed

    AUDIT PASSED: every check green

while a figure in the document was wrong.

This is the failure the check's own comment warns about, one level up:

    when a check exists in two places, the local one must be the remote one or
    stricter. A weaker local approximation is worse than none, because it is
    believed.

The earlier instance of that comment was a status TABLE hand-corrected while the
rows above it were not. This one is worse: the weaker check was not an
approximation of the same thing, it was a check of a DIFFERENT SUBSET -- the block,
and not the prose stating the same figure in a different format. A subset that
looks like the whole thing is the most dangerous kind.

### The fix, and the part that makes it a fix

    README.md      401476 -> 412948
    audit.py       prose figures now gated on the SAME check as the block

The claims are matched as WHOLE PHRASES -- a numerator followed by the denominator
it is a fraction of:

    "<N> / 38,172,368 bytes of code"   ->  N must be the CSV's matched bytes
    "38,733 / 152,062"                 ->  N must be the CSV's matched functions

A bare number scan would flag the 152,062 total, the 38,172,368 code size, and
every historical number in the prose; matching the phrase is what separates "a
figure that is stale" from "a number that happens to be large".

**AND THE GATE WAS FALSIFIED, because a gate that only passes proves nothing.**
Putting the old figure back and running the audit:

    [FAIL] quoted figures agree with the CSV     1 stale
    README.md prose quotes 401476 matched bytes, CSV says 412948
    AUDIT FAILED: 1 check(s)

Restored, and green again. A check that has never been seen to fail has not been
tested; that is the same rule as "never register a body that does not verify",
applied to the audit instead of the registry.


## The flashing terminal: a comment that was wrong in both directions

The user reported a terminal window popping up and disappearing several times a
minute. It is the keepalive chain's own subprocess flags, and the comment that
"explained" them was wrong twice.

    tools/ping_watchdog.py, DETACHED, before:

        # Not combined with CREATE_NO_WINDOW -- the two are mutually exclusive, and
        # CREATE_NO_WINDOW is the flag that left the 0xC000013A deaths in place.

**Claim 1, "mutually exclusive":** MSDN says CREATE_NO_WINDOW "is ignored if the
application is not a console application, or if it is used with either
CREATE_NEW_CONSOLE or DETACHED_PROCESS." So passing both is not a conflict, it is a
silent no-op.

**Claim 2, "the flag that left the 0xC000013A deaths in place":** 0xC000013A is
STATUS_CONTROL_C_EXIT -- CTRL+C reaching a child. The flag for that is
CREATE_NEW_PROCESS_GROUP, whose documentation says "CTRL+C signals will be
disabled for all processes within the new process group." It had never been tried.

### And the conclusion was inverted in practice

    work/console_flags.py, 3 runs per case, a window counted as a conhost.exe
    that outlives the settle time

    DETACHED_PROCESS                            no window  3/3
    CREATE_NO_WINDOW                            WINDOW     3/3
    CREATE_NO_WINDOW|CREATE_NEW_PROCESS_GROUP   WINDOW     3/3
    DETACHED_PROCESS|CREATE_NEW_PROCESS_GROUP   no window  3/3

`CREATE_NO_WINDOW` is the flag whose NAME says "no window" and which produces one.
`DETACHED_PROCESS`, which the comment had rejected, suppresses it.

The long-lived chain used DETACHED and was already fine. **Every short-lived probe
in the tick used NOWINDOW -- which was CREATE_NO_WINDOW** -- and a tick runs
tasklist, git, audit.py and a full clang run. That is the flash.

### The fix

    tools/keepalive.py       NOWINDOW  -> DETACHED_PROCESS|CREATE_NEW_PROCESS_GROUP
    tools/ping_watchdog.py   NOWINDOW  -> DETACHED_PROCESS|CREATE_NEW_PROCESS_GROUP
    tools/ping_watchdog.py   DETACHED  -> DETACHED_PROCESS|CREATE_NEW_PROCESS_GROUP
                             plus STARTUPINFO STARTF_USESHOWWINDOW|SW_HIDE

The old reason for splitting them apart -- "detaching would strand their pipes" --
is wrong: DETACHED_PROCESS affects the CONSOLE, not inherited standard handles, so
`stdout=PIPE` still works. That assumption is what let the window survive.

### What nearly shipped

The first attempt replaced DETACHED with CREATE_NO_WINDOW on the strength of MSDN's
description of what CREATE_NO_WINDOW does, and the audit passed and the code was
clean and it would have made the flash **more frequent**, not less -- it had removed
the one flag that was working.

It was caught by measuring rather than by reading, and by counting the right thing.
`tasklist /V` reports "N/A" for every case and cannot tell a windowed process from
a windowless one; `MainWindowHandle` is unreliable for console applications. Only
a conhost.exe delta separates them. And a single run is worthless: the first
measurement read a leftover conhost from its own previous kill as a window and
would have "proved" that DETACHED_PROCESS causes one.

**Three runs per case, and count the object that appears on screen.** A measurement
that cannot come out the other way is not a measurement.

## The `orr` vs `mov` divergence was a DISASSEMBLER artifact, and the constant-argument decline is not proven

Corrected 2026-11-04, and this overturns two recorded conclusions.

capstone and LLVM 5.0.1 objdump BOTH print two different machine words as the
identical `mov wN, #imm`:

    0x52800020  MOVZ w0, #1
    0x320003e0  ORR w0, wzr, #1   (the ORR-immediate move-alias)

Every probe and every `MH.compare` before this beat ran capstone on both
sides, so a body whose compile produced the ORR alias compared equal against
a retail word encoded MOVZ, and the reverse. The recipe beats that recorded
"clang 5.0.1 emits `orr` and never `mov` for a constant call argument"
measured a PRINT, not a byte. `work/movz_probe.py`, `work/movz_locals.py`,
`work/movz_direct.py` and `work/movz_plain.py` all share that defect, and the
"147 constant-argument tail calls are provably dead" conclusion built on them
is NOT proven.

### The proof, both ways

    retail main +0x3c5b00   bytes 0x320003e0 0x14000003   (ORRimm alias + b)
    our  compile of the same C (standalone)  e0 03 00 32   = 0x320003e0

The banked body is byte-identical and always was; what differed was which
tool rendered each side. Because the two printers agree on the ALIAS text,
the dangerous direction is the reverse: a compile that lands on the OTHER
encoding (true MOVZ) against a retail ORRimm -- or any literal operand pair
the alias printers spell identically but encode differently -- was licensed
by name.

### The gate

`MH.compare` now byte-checks every instruction whose tuple prints as `mov`:
same mnemonic and operand string but different raw bytes is a mismatch.
Falsified three ways before landing: a synthetic MOVZ-vs-ORRimm pair is now
rejected (`mov encoding differs at insn 0`); same-encoding pairs still
match; the `--from-elf` FakeInsn path, which has no `.bytes`, skips the
check instead of crashing. The `mov xN, xR` register alias is safe without
the gate: the ORR-register encoding is the only one capstone prints as
`mov` for that operand string, and the ADD-immediate alias prints with a
different operand (`mov w0, wsp`), which the tuple compare already catches.

`POKESWORD_MOV_GATE=0` disables it, which is how the A/B was measured:

    module     gate OFF             gate ON              delta
    main       29179/29253  74 mm   29179/29253   74     0
    sdk         6347/6378   31 mm    6347/6378    31     0
    subsdk0     1068/1068  100%      1068/1068   100%    0
    subsdk1     1612/1642   30 mm    1612/1642    30     0

Every currently banked body survives the gate: the alias hole closed without
unbanking anything. The 74/31/30 residuals are the documented TU artefacts
(batched thunk destinations getting their call optimised away), not gate
rejections. `work/movz_byte_audit.py` recompiles all 2,822 MOVZ-bearing
banked bodies standalone and byte-compares; apart from branch immediates
(standalone artifacts; branch destinations are symbol-compared) the only
non-branch byte differences it finds evaporate under the batch compile.

### The narrow-constant argument, banked: +20 bodies, 25.47% -> 25.48%

The width-only miss class that the kinds breakdown exposed on the
indirect-tailcall shape (`work/itab_kinds.py`):

    subsdk0   16 matches (+1)   subsdk1   47 (+1)
    sdk       39 matches (+1)   main     694 (+15)

subsdk0 0x2fd0's retail is

    ldr x8, [x0] ; ldr x3, [x8, #0xd0] ; mov w2, wzr ; br x3

and the generated C wrote the third argument 64-bit wide, so Clang emitted
`mov x2, xzr`. The walk already records a `w`-form write as a 32-bit value
(`_narrow_dst`); the tail-argument render now casts the CONSTANT to it and
declares the indirect callee's parameter 32-bit, gated three ways --
constant literals only (`_IMM_RX`), 32-bit-type values only, indirect form
only (the direct path's target is declared elsewhere, all-uintptr_t, so
narrowing there would be widened right back). Measured on the exact body
first: the narrowed spelling compiles to `mov w2, wzr` byte-for-byte.

Banked end to end: registry +20 addresses, zero removals, decomp_project
--all, prog_cmake, fresh NX64 build, README/HANDOFF/progress_weighting
regenerated, audit PASSED at the new figure.

    38,733 / 152,062 = 25.47%   ->   38,753 / 152,062 = 25.48%
    412,948 -> 413,316 matched bytes

### Still the honest remainder of the indirect-tailcall shape

After the width fix, every remaining miss in the shape is the
positional-register class (subsdk0 43, subsdk1 62, sdk 124, main 464 --
693 bodies) or the reloaded-argument register, and the 2026-10-15
positional rejection stands: clang 5.0.1 takes the lowest free caller-saved
register and there is no C that moves it (re-measured this beat with local
register variables -- clang accepts the `__asm("x5")` but does not honour
it for a call operand, exactly as the LLC thread warned).

Note the 29,556 writeback population's "0 matches" verdict shares this
root cause and inherits this correction: the writeback frames matched
except the callee-register assignment, which is positional, so the
correction does NOT unblock them.

### What the corrected conclusion unblocks NEXT

`gen_indirect_tailcall` still declines a body whose prefix writes
`mov wN, #imm` into an argument register ("THE CONSTANT-ARGUMENT DECLINE").
That decline was built on the disproven encoding claim and should be
re-examined against the narrowed spelling this beat banked. subsdk0 0x2fd0
is the counter-example: the narrowed constant is exactly what retail
wants. The 147 recorded as dead may simply have been mis-spelled.
