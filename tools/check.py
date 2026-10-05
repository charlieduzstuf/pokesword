#!/usr/bin/env python3

import capstone as cs
from elftools.elf.elffile import ELFFile
import diff_settings
from pathlib import Path
import sys
from typing import Any, Dict, Set
import utils

config: Dict[str, Any] = {}
diff_settings.apply(config, {})

base_elf = ELFFile((Path(__file__).parent.parent / config["baseimg"]).open("rb"))
my_elf = ELFFile((Path(__file__).parent.parent / config["myimg"]).open("rb"))
my_symtab = my_elf.get_section_by_name(".symtab")
if not my_symtab:
    utils.fail(f'{config["myimg"]} has no symbol table')


def get_file_offset(elf, addr: int) -> int:
    for seg in elf.iter_segments():
        if seg.header["p_type"] != "PT_LOAD":
            continue
        if seg["p_vaddr"] <= addr < seg["p_vaddr"] + seg["p_filesz"]:
            return addr - seg["p_vaddr"] + seg["p_offset"]
    assert False


def get_symbol_file_offset(elf, table, name: str) -> int:
    syms = table.get_symbol_by_name(name)
    if not syms or len(syms) != 1:
        raise KeyError(name)
    return get_file_offset(elf, syms[0]["st_value"])


def get_fn_from_base_elf(addr: int, size: int) -> bytes:
    offset = get_file_offset(base_elf, addr)
    base_elf.stream.seek(offset)
    return base_elf.stream.read(size)


def get_fn_from_my_elf(name: str, size: int) -> bytes:
    offset = get_symbol_file_offset(my_elf, my_symtab, name)
    my_elf.stream.seek(offset)
    return my_elf.stream.read(size)


def check_function(addr: int, size: int, name: str, quiet: bool = False) -> bool:
    """Byte-compare one function. `quiet` silences the explanatory notes.

    `quiet` exists because the two callers care about opposite things. For a
    function we claim matches, any difference is a defect worth printing. For one
    we have *not* claimed, a difference is the expected case — unmatched
    functions get a short stub against a real body — so the only thing worth
    saying is "this actually matches". Without this, a length or comparability
    note fired for all 31,230 unmatched functions in `main` and buried the one
    finding that mattered.
    """
    def note(msg: str) -> None:
        if not quiet:
            utils.print_note(msg)

    try:
        base_fn = get_fn_from_base_elf(addr, size)
    except KeyError:
        utils.print_error(f"couldn't find base function 0x{addr:016x} for {utils.format_symbol_name_for_msg(name)}")
        return False

    my_fn = get_fn_from_my_elf(name, size)

    md = cs.Cs(cs.CS_ARCH_ARM64, cs.CS_MODE_ARM)
    md.detail = True
    adrp_pair_registers: Set[int] = set()

    # Trim the original's trailing padding before comparing.
    #
    # Symbol-table sizes include inter-function alignment padding, which the
    # original fills with `nop`/`udf` and no C++ can reproduce. `main` 0x32ec80
    # is 16 bytes of which only the leading `ret` is real; the other three words
    # are padding. Reading `size` bytes from *our* ELF for that symbol therefore
    # runs past the 4-byte body we actually emit and pairs the original's
    # padding against whatever follows in our binary.
    #
    # This is why five functions used to be reported here as "marked as matching
    # but does not match" while `verify_matches.py` called the same module
    # 100.00% clean. `verify_matches.py` compares through `MH.effective_end`,
    # which cuts at the first padding word after the last real instruction; this
    # tool did not, so the two disagreed and this one was wrong. The padding
    # words trimmed here are exactly the ones `MH.effective_end` ignores.
    base_insns = list(md.disasm(base_fn, addr))
    my_insns = list(md.disasm(my_fn, addr))

    def trim(insns: list) -> int:
        """Index just past the last real instruction.

        Applied to *both* sides. The original is trimmed because `size` includes
        alignment padding; ours must be trimmed identically or the padding shows
        up as extra instructions and every padded body reports a length
        difference. Doing it to one side only is what made four padding-case
        functions (`main_f_32ec80` and friends) look like real mismatches.
        """
        n = len(insns)
        while n > 0 and insns[n - 1].mnemonic in ("udf", "brk", "nop"):
            n -= 1
        return n

    eff = trim(base_insns)
    eff_mine = trim(my_insns)

    # A comparison of nothing is not a comparison.
    #
    # The loop below `return True`s when it never runs, so an empty instruction
    # list silently reports a *match*. That is not hypothetical: 332 functions in
    # `main` were reported "marked as non-matching but matches" purely because
    # their bytes (`fedeffe7`, at addresses like 0x33e30) decode to nothing --
    # `eff` is 0, `zip` is empty, and the verdict is vacuously positive. Those
    # 332 are unmatchable by any C, so the note was both wrong and a standing
    # invitation to register 332 phantom bodies.
    #
    # Only the padding trim above is allowed to empty the list; if the *original*
    # has no real instruction, or if our side decodes to nothing where the
    # original has some, the bodies are not equal.
    if eff == 0 or eff_mine == 0:
        note(
            f"function {utils.format_symbol_name_for_msg(name)} is not comparable: "
            f"original decodes to {eff} real instruction(s), ours to {eff_mine}"
        )
        return False

    # Same real-instruction count required. `zip` would silently drop the tail of
    # the longer one, so a body that was one instruction short still compared
    # equal -- a body that stops early is a real difference.
    if eff != eff_mine:
        note(
            f"function {utils.format_symbol_name_for_msg(name)} differs in length: "
            f"{eff} vs {eff_mine} real instruction(s)"
        )
        return False

    for i1, i2 in zip(base_insns[:eff], my_insns[:eff_mine]):
        if i1.bytes == i2.bytes:
            continue

        if i1.mnemonic != i2.mnemonic:
            return False

        # Ignore some address differences until a fully matching executable can be generated.

        if i1.mnemonic == 'bl':
            continue

        if i1.mnemonic == 'b':
            # Needed for tail calls.
            branch_target = int(i1.op_str[1:], 16)
            if not (addr <= branch_target < addr + size):
                continue

        if i1.mnemonic == 'adrp':
            if i1.operands[0].reg != i2.operands[0].reg:
                return False
            adrp_pair_registers.add(i1.operands[0].reg)
            continue

        if i1.mnemonic == 'ldr':
            if i1.operands[0].reg != i2.operands[0].reg:
                return False
            if i1.operands[1].value.mem.base != i2.operands[1].value.mem.base:
                return False
            reg = i1.operands[1].value.mem.base
            if reg not in adrp_pair_registers:
                return False
            adrp_pair_registers.remove(reg)
            continue

        if i1.mnemonic == 'ldp':
            if i1.operands[0].reg != i2.operands[0].reg:
                return False
            if i1.operands[1].reg != i2.operands[1].reg:
                return False
            if i1.operands[2].value.mem.base != i2.operands[2].value.mem.base:
                return False
            reg = i1.operands[2].value.mem.base
            if reg not in adrp_pair_registers:
                return False
            adrp_pair_registers.remove(reg)
            continue

        if i1.mnemonic == 'add':
            if i1.operands[0].reg != i2.operands[0].reg:
                return False
            if i1.operands[1].reg != i2.operands[1].reg:
                return False
            reg = i1.operands[1].reg
            if reg not in adrp_pair_registers:
                return False
            adrp_pair_registers.remove(reg)
            continue

        return False

    return True


def main() -> None:
    failed = False
    module = utils.selected_module()
    utils.print_note(f"checking module {module} ({config['baseimg']})")
    checked = 0
    for func in utils.get_functions(module):
        if not func.decomp_name:
            continue

        try:
            get_fn_from_my_elf(func.decomp_name, 0)
        except KeyError:
            utils.warn(f"couldn't find {utils.format_symbol_name_for_msg(func.decomp_name)}")
            continue

        if func.status == utils.FunctionStatus.Matching:
            if not check_function(func.addr, func.size, func.decomp_name):
                utils.print_error(
                    f"function {utils.format_symbol_name_for_msg(func.decomp_name)} is marked as matching but does not match")
                failed = True
        elif func.status == utils.FunctionStatus.Equivalent or func.status == utils.FunctionStatus.NonMatching:
            # quiet=True: a non-match is the expected case here, so only a
            # genuine match is worth reporting.
            if check_function(func.addr, func.size, func.decomp_name, quiet=True):
                utils.print_note(
                    f"function {utils.format_symbol_name_for_msg(func.decomp_name)} is marked as non-matching but matches")
        checked += 1

    utils.print_note(f"checked {checked} functions in {module}")
    if failed:
        sys.exit(1)


if __name__ == "__main__":
    main()
