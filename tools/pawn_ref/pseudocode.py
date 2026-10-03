import sys
from pathlib import Path
from opcodes import Opcode
from pawn_script import PawnDisassembler

script = sys.argv[1]
disassembler = PawnDisassembler(script)
path = Path(script)
disassembler.explore_blocks()

visited_blocks = set()


def print_with_indent(text, indent=0):
    print("    " * indent + text)

def get_stack_label(address):
    if address < 0:
        return f"var_{-address}"
    return f"arg_{(address-24)//8}"

def get_memory_label(address):
    if address < 32:
        return ("g_mode", "g_skip_point", "g_skip_point_end", "g_skip_point_max")[address//8]
    return f"mem[{address-32}]"

def print_block(block, indent=0, is_case=False):
    print(f"// {block.label}")
    is_case_table_block = block.instructions[0][1] == Opcode.OP_CASETBL
    is_function_block = block.instructions[0][1] == Opcode.OP_PROC
    visited_blocks.add(block.label.address)
    sp = 0
    # TODO: this is a hacky way of tracking the argument count of function calls
    last_stored_const = None
    for _, opcode, *args in block.instructions:
        match opcode:
            case Opcode.OP_PROC:
                print_with_indent(f"{block.label}() {{", indent=indent)
                indent += 1
            case Opcode.OP_PUSH_C | Opcode.OP_PUSH_P_C:
                sp -= 8
                print_with_indent(f"{get_stack_label(sp)} = {args[0]};", indent=indent)
                last_stored_const = args[0]
            case Opcode.OP_PUSH_PRI:
                sp -= 8
                print_with_indent(f"{get_stack_label(sp)} = pri;", indent=indent)
            case Opcode.OP_PUSH_ALT:
                sp -= 8
                print_with_indent(f"{get_stack_label(sp)} = alt;", indent=indent)
            case Opcode.OP_PUSH_P_S:
                sp -= 8
                print_with_indent(f"{get_stack_label(sp)} = {get_stack_label(args[0])};", indent=indent)
            case Opcode.OP_STACK_P:
                sp += args[0]
            case Opcode.OP_LOAD_P_PRI:
                print_with_indent(f"pri = {get_memory_label(args[0])};", indent=indent)
            case Opcode.OP_LOAD_P_S_PRI:
                print_with_indent(f"pri = {get_stack_label(args[0])};", indent=indent)
            case Opcode.OP_STOR_P_S_PRI:
                print_with_indent(f"{get_stack_label(args[0])} = pri;", indent=indent)
            case Opcode.OP_ZERO_PRI:
                print_with_indent("pri = 0;", indent=indent)
            case Opcode.OP_CONST_ALT | Opcode.OP_CONST_P_ALT:
                print_with_indent(f"alt = {args[0]};", indent=indent)
            case Opcode.OP_CONST_PRI | Opcode.OP_CONST_P_PRI:
                print_with_indent(f"pri = {args[0]};", indent=indent)
            case Opcode.OP_OR:
                print_with_indent("pri |= alt;", indent=indent)
            case Opcode.OP_RETN:
                print_with_indent("return pri;", indent=indent)
            case Opcode.OP_SWITCH:
                print_with_indent("switch (pri) {", indent=indent)
                print_block(disassembler.blocks[args[0].address], indent=indent + 1)
            case Opcode.OP_CASETBL:
                print_with_indent(f"case {args[0]}:", indent=indent)
                print_with_indent("{", indent=indent)
                print_block(
                    disassembler.blocks[args[1].address],
                    indent=indent + 1,
                    is_case=True,
                )
            case Opcode.OP_SYSREQ_N:
                print_with_indent(
                    f"pri = {args[0]}({', '.join(f'var_{-sp - arg * 8}' for arg in range(args[1]))})",
                    indent=indent,
                )
            case Opcode.OP_CALL:
                print_with_indent(
                    f"pri = {args[0]}({', '.join(f'var_{-sp - arg * 8 - 8}' for arg in range(last_stored_const // 8))})",
                    indent=indent,
                )
            case _:
                print_with_indent(
                    f"{opcode.name} {', '.join(map(str, args))}", indent=indent
                )
    for successor in block.successors:
        if not successor.label.address in visited_blocks:
            print_block(successor, indent=indent)
    if is_case:
        indent -= 1
        print_with_indent("}", indent=indent)
    if is_case_table_block:
        # this is ugly magical and assumes the last successor of a case is always the finally block
        indent -= 1
        print_with_indent("}", indent=indent)
        successors = disassembler.blocks[
            block.instructions[0][3].address
        ].successors
        if successors:
            finally_block = successors[-1]
            if not finally_block.label.address in visited_blocks:
                print_block(disassembler.blocks[finally_block.label.address], indent=indent)
    elif is_function_block:
        indent -= 1
        print_with_indent("}", indent=indent)


for block_addr, block in sorted(disassembler.blocks.items()):
    # exit block can be ignored
    if block_addr == 0:
        continue
    if not block_addr in visited_blocks:
        print_block(block)
