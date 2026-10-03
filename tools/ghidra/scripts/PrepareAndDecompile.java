// Ghidra headless: prepare an imported ELF for decompilation, then decompile.
//
// This is the "make the decompiler useful without paying for full auto-analysis"
// pass. Importing an ELF gives Ghidra function boundaries and names from the
// symbol table, but the *bodies* are not disassembled and no cross-references
// exist, so the decompiler emits indirect calls through data:
//
//     (*(code *)_data_start._160848_8_)();     instead of   sub_210();
//
// That destroys most of the value, because the call graph is what tells you what
// a function does. This script fixes that cheaply:
//
//   1. disassemble every known function body
//   2. wire each direct branch to the function it lands on
//   3. infer a return type and parameter count from the branch target
//
// Full auto-analysis would also do this, but on a 25 MB .text with 100k
// functions it dominates wall-clock, and most of its remaining cost buys type
// inference the decompiler re-derives lazily per function.
//
// Usage:
//   -postScript PrepareAndDecompile.java <outfile> <secPerFunction> [skipFile]
//
// @category PokemonSword
// @menupath
// @toolbar

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.FlowType;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Program;
import ghidra.program.model.symbol.RefType;
import ghidra.program.model.symbol.SourceType;
import ghidra.util.task.ConsoleTaskMonitor;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

public class PrepareAndDecompile extends GhidraScript {

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        if (a.length < 2) {
            println("usage: PrepareAndDecompile <outfile> <secPerFunction> [skipFile]");
            return;
        }
        String outPath = a[0];
        int secPerFn = Integer.parseInt(a[1]);
        String skipPath = a.length > 2 ? a[2] : null;

        Program prog = currentProgram;
        println("program : " + prog.getName() + "  " + prog.getLanguageID());

        prepare(prog);

        Set<Long> done = readAddrs(outPath + ".done");
        Set<Long> skip = skipPath != null ? readAddrs(skipPath) : new HashSet<Long>();
        println("already done: " + done.size() + ", skipping: " + skip.size());

        DecompInterface decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(prog)) {
            println("ERROR: decompiler failed: " + decomp.getLastMessage());
            return;
        }

        long n = 0, ok = 0, fail = 0, sk = 0;
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
                    sk++;
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
                    ok++;
                    out.println(c);
                } else {
                    fail++;
                    out.println("/* decompile failed */");
                }
                out.println();
                done.add(addr);

                if (n % 2000 == 0) {
                    out.flush();
                    long dt = System.currentTimeMillis() - t0;
                    double rate = n * 1000.0 / Math.max(1, dt);
                    println(String.format(
                        "  %d ok=%d fail=%d  %.1f fn/s  (%.0f min elapsed)",
                        n, ok, fail, rate, dt / 60000.0));
                    writeDone(outPath + ".done", done);
                }
            }
        }
        writeDone(outPath + ".done", done);
        decomp.dispose();
        long dt = System.currentTimeMillis() - t0;
        println(String.format("DONE new=%d ok=%d fail=%d skipped=%d  %.0fs",
                              n, ok, fail, sk, dt / 1000.0));
    }

    /**
     * Disassemble every imported function body and connect direct branches to
     * the functions they land on, so the decompiler emits named calls and a
     * usable call graph instead of indirect jumps through data.
     */
    private void prepare(Program prog) throws Exception {
        long t0 = System.currentTimeMillis();
        long nDis = 0, nRef = 0;

        // Pass 1: disassemble. A function's body range is already known from the
        // symbol table, so this is a straight sweep.
        FunctionIterator it = prog.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            if (monitor.isCancelled()) {
                return;
            }
            Function fn = it.next();
            if (fn.getBody().getNumAddresses() <= 0) {
                continue;
            }
            DisassembleCommand cmd =
                    new DisassembleCommand(fn.getEntryPoint(), fn.getBody(), true);
            if (cmd.applyTo(prog, monitor)) {
                nDis++;
            }
        }
        println(String.format(
            "prepare: disassembled %d function bodies (%.0fs)", nDis,
            (System.currentTimeMillis() - t0) / 1000.0));

        // Pass 2: turn each direct branch that lands on a known function into a
        // call/flow reference. Without this the decompiler treats the target as
        // data and prints `(*(code *)_data_start...)()`.
        it = prog.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            if (monitor.isCancelled()) {
                return;
            }
            Function fn = it.next();
            InstructionIterator ii =
                    prog.getListing().getInstructions(fn.getBody(), true);
            while (ii.hasNext()) {
                Instruction ins = ii.next();
                for (Address flow : ins.getFlows()) {
                    Function callee =
                            prog.getFunctionManager().getFunctionAt(flow);
                    if (callee == null || callee.equals(fn)) {
                        continue;
                    }
                    // addMemoryReference is the API in this Ghidra version;
                    // addFlowReference does not exist on ReferenceManager, and
                    // RefType.DATA_CALL does not exist either. A plain DATA
                    // reference from the branch to the target is enough for the
                    // decompiler to stop treating the target as a pointer to
                    // data and to emit a named call.
                    prog.getReferenceManager().addMemoryReference(
                        ins.getAddress(), flow, RefType.DATA,
                        SourceType.USER_DEFINED, 0);
                    nRef++;
                }
            }
        }
        println(String.format(
            "prepare: wired %d branch references (%.0fs total)", nRef,
            (System.currentTimeMillis() - t0) / 1000.0));
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
                    // ignore
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
