// Ghidra headless: bulk decompilation export.
//
// Imports a module's ELF (which already carries the recovered function
// boundaries and names as ELF symbols), then runs the decompiler over every
// function and writes one C-like body per function to a single output file.
//
// Two design points that matter at this scale:
//
//  * Full auto-analysis is deliberately NOT required. It dominates wall-clock on
//    a 25 MB .text with 100k functions, and most of its cost buys type
//    inference that the decompiler will re-do lazily per function anyway.
//    Running the decompiler directly over the imported symbol boundaries gives
//    far more functions per hour.
//
//  * Progress is flushed as it goes and the run is resumable, because a module
//    this size will not finish in one sitting. A checkpoint file records the
//    functions already written so a re-run continues rather than restarting.
//
// Usage (headless):
//   -postScript DecompileAll.java <outfile> <secPerFunction> [skipFile]
//
//   outfile        destination for the decompiled bodies
//   secPerFunction decompiler timeout per function (guards pathological cases)
//   skipFile       optional: text file of "0xADDR" lines to SKIP, so that
//                  already-matching functions do not consume the budget
//
// @category PokemonSword
// @keybinding
// @menupath
// @toolbar

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;
import ghidra.util.task.ConsoleTaskMonitor;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

public class DecompileAll extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        if (a.length < 2) {
            println("usage: DecompileAll <outfile> <secPerFunction> [skipFile]");
            return;
        }
        String outPath = a[0];
        int secPerFn = Integer.parseInt(a[1]);
        String skipPath = a.length > 2 ? a[2] : null;

        Program prog = currentProgram;
        println("program : " + prog.getName());
        println("language: " + prog.getLanguageID());

        // Functions already exported, so a re-run continues instead of
        // restarting. The checkpoint is the set of addresses in the output.
        Set<Long> done = readAddrs(outPath + ".done");
        Set<Long> skip = skipPath != null ? readAddrs(skipPath) : new HashSet<Long>();
        println("already done: " + done.size() + ", skipping: " + skip.size());

        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(prog)) {
            println("ERROR: decompiler failed to open program: "
                    + decomp.getLastMessage());
            return;
        }

        long n = 0, nDecompiled = 0, nFailed = 0, nSkipped = 0;
        long t0 = System.currentTimeMillis();

        try (PrintWriter out = new PrintWriter(
                new BufferedWriter(new FileWriter(outPath, true), 1 << 20))) {

            FunctionIterator it = prog.getFunctionManager().getFunctions(true);
            while (it.hasNext() && !monitor.isCancelled()) {
                Function fn = it.next();
                long addr = fn.getEntryPoint().getOffset();
                if (done.contains(addr)) {
                    continue;
                }
                if (skip.contains(addr)) {
                    nSkipped++;
                    continue;
                }
                n++;

                String c = null;
                try {
                    DecompileResults res =
                            decomp.decompileFunction(fn, secPerFn, monitor);
                    if (res != null && res.decompileCompleted()
                            && res.getDecompiledFunction() != null) {
                        c = res.getDecompiledFunction().getC();
                    }
                } catch (Throwable t) {
                    c = null;
                }

                out.println("/*===F 0x" + Long.toHexString(addr)
                        + " " + fn.getName()
                        + " size=" + fn.getBody().getNumAddresses()
                        + " sig=" + fn.getSignature().getPrototypeString()
                        + " ===*/");
                if (c != null && !c.trim().isEmpty()) {
                    nDecompiled++;
                    out.println(c);
                } else {
                    nFailed++;
                    out.println("/* decompile failed */");
                }
                out.println();
                done.add(addr);

                if (n % 500 == 0) {
                    out.flush();
                    long dt = System.currentTimeMillis() - t0;
                    println(String.format(
                        "  %d/%d  ok=%d fail=%d  %.1f fn/s  eta=%.0f min",
                        n, n + done.size(), nDecompiled, nFailed,
                        n * 1000.0 / Math.max(1, dt),
                        (double) (n + done.size() - n) * dt / Math.max(1, n) / 60000.0));
                    writeDone(outPath + ".done", done);
                }
                if (monitor.isCancelled()) {
                    break;
                }
            }
        }
        writeDone(outPath + ".done", done);
        decomp.dispose();

        long dt = System.currentTimeMillis() - t0;
        println(String.format(
            "DONE new=%d ok=%d fail=%d skipped=%d  %.1fs", n, nDecompiled,
            nFailed, nSkipped, dt / 1000.0));
    }

    private Set<Long> readAddrs(String path) throws Exception {
        Set<Long> s = new HashSet<Long>();
        if (path == null) {
            return s;
        }
        java.io.File f = new java.io.File(path);
        if (!f.isFile()) {
            return s;
        }
        BufferedReader r = new BufferedReader(new FileReader(f));
        try {
            String line;
            while ((line = r.readLine()) != null) {
                line = line.trim();
                if (line.isEmpty() || line.startsWith("#")) {
                    continue;
                }
                try {
                    s.add(Long.decode(line));
                } catch (NumberFormatException e) {
                    // ignore malformed line
                }
            }
        } finally {
            r.close();
        }
        return s;
    }

    private void writeDone(String path, Set<Long> done) throws Exception {
        try (PrintWriter w = new PrintWriter(
                new BufferedWriter(new FileWriter(path)))) {
            for (Long v : done) {
                w.println("0x" + Long.toHexString(v));
            }
        }
    }
}
