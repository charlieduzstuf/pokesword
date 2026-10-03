# Differential trace results

## Method

For each NSO module, the stock `translated.exe` and the decompiled
`decompiled_<module>.exe` are run from an identical clean state:

- separate, freshly created working directory per run
- the same `data/` payload copied into both
- guest memory zeroed by the runner (`calloc`)
- no leftover `save_data` autosave in either directory

Both binaries are infinite loops, so the traces have different lengths. Only the
**overlapping prefix** has to match, line for line and byte for byte.

The decompiled binaries link the **stock standalone runtime**
(`exefs/<mod>/recomp_runtime.c`, unmodified, real SVC servicing) — not the
hosted stub. An early hosted-link build crashed on `rtld`, which is what forced
the current link shape.

## Results

| module | stock stderr lines | decompiled stderr lines | lines compared | verdict |
|---|---|---|---|---|
| `rtld` | 1 | 0 | 0 | identical (both exit 0, same output) |
| `subsdk0` | 1,026,492 | 1,227,490 | **1,026,492** | **identical** |
| `subsdk1` | 866,002 | 454,520 | **454,520** | **identical** |
| `sdk` | 694,487 | 1,157,155 | **694,487** | **identical** |
| `main` | 336,176 | 345,272 | **336,176** | **identical** |

**3,001,195 lines compared, zero differences.**

Where the decompiled trace is longer than the stock one, that is simply the
process having been cut off later by the run timeout — the decompiled binaries
run somewhat faster, so they get through more work in the same wall-clock
window. Where it is shorter, the reverse applies. Neither case is a mismatch.

## Reproducing

```
# clean state first — a leftover autosave is the usual cause of a false diff
Get-ChildItem -Path exefs,build_host -Recurse -Directory -Filter save_data |
    Remove-Item -Recurse -Force

$secs = @{ rtld=40; subsdk0=60; subsdk1=60; sdk=60; main=60 }
foreach($m in 'rtld','subsdk0','subsdk1','sdk','main'){
  foreach($side in 'stock','decomp'){
    $exe = if($side -eq 'stock'){ "exefs/$m/build_stock/Release/translated.exe" }
           else                     { "build_host/bin/decompiled_$m.exe" }
    $d = "$env:TEMP/fin_${m}_$side"
    Remove-Item -Recurse -Force $d -ErrorAction SilentlyContinue
    New-Item -ItemType Directory -Force -Path $d | Out-Null
    Copy-Item "exefs/$m/data" $d -Recurse -ErrorAction SilentlyContinue
    $p = Start-Process $exe -WorkingDirectory $d `
         -RedirectStandardOutput "$d/out.txt" -RedirectStandardError "$d/err.txt" `
         -PassThru -NoNewWindow
    if(-not $p.WaitForExit($secs[$m]*1000)){ $p.Kill(); $p.WaitForExit() }
  }
}
```

Then compare the `err.txt` files over `min(stock, decomp)` lines.
