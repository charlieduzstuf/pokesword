"""Utility to disassemble & infodump a Pawn .amx file"""

from io import BufferedReader
import json
from dataclasses import dataclass
from fnv import fnv1_32
from opcodes import Opcode

with open("known_strings.json", "r", encoding="utf-8") as f:
    KNOWN_STRINGS = json.load(f)

HASH_MAP = {fnv1_32(string): string for string in KNOWN_STRINGS}


def read_int(
    reader: BufferedReader, size: int, offset: int = None, signed: bool = True
) -> int:
    """Read an int from a BufferedReader"""
    if offset is not None:
        reader.seek(offset)
    return int.from_bytes(reader.read(size), "little", signed=signed)

@dataclass
class BasicBlock:
    """A basic block of instructions"""
    successors: list["BasicBlock"]
    label: "Label"
    instructions: list[tuple[int, Opcode, ...]]

@dataclass
class Label:
    """A string-address pair representing a label for a code block"""
    address: int
    name: str

    def __str__(self):
        return self.name

class PawnDisassembler:
    """Utility to disassemble & infodump a Pawn .amx file"""

    def __init__(self, file_path: str) -> None:
        with open(file_path, "rb") as f:
            self.size = read_int(f, 4)
            self.magic = read_int(f, 2, signed=False)
            self.file_version = read_int(f, 1)
            self.amx_version = read_int(f, 1)
            self.flags = read_int(f, 2)
            self.defsize = read_int(f, 2)
            self.cod = read_int(f, 4)
            self.dat = read_int(f, 4)
            self.hea = read_int(f, 4)
            self.stp = read_int(f, 4)
            self.stack_size = (self.stp - self.hea) // 8
            self.cip = read_int(f, 4)
            self.publics = read_int(f, 4)
            self.natives = read_int(f, 4)
            self.libraries = read_int(f, 4)
            self.pubvars = read_int(f, 4)
            self.tags = read_int(f, 4)
            self.nametable = read_int(f, 4)
            self.overlays = read_int(f, 4)
            assert self.magic == 0xF1E1  # 64-bit magic
            assert self.file_version == 10
            assert self.amx_version == 10
            assert self.defsize in (
                28,
                12,
            )  # (sizeof(AMX_FUNCSTUB), sizeof(AMX_FUNCSTUBNT))
            if self.defsize == 12:
                assert read_int(f, 2, self.nametable) < 64  # nametable max
            assert self.stp > 0
            assert self.flags & 0x4  # compact
            self.num_publics = (self.natives - self.publics) // self.defsize
            f.seek(self.publics)
            self.public_functions = {}
            for _ in range(self.num_publics):
                address = read_int(f, 8)
                hash_ = read_int(f, 4, signed=False)
                self.public_functions[address] = "public " + HASH_MAP.get(
                    hash_, f"fun_{hash_:X}"
                )
            f.seek(self.natives)
            self.num_natives = (self.libraries - self.natives) // self.defsize
            self.native_functions = []
            for _ in range(self.num_natives):
                assert read_int(f, 8) == 0
                hash_ = read_int(f, 4, signed=False)
                fn_name = HASH_MAP.get(hash_, f"fun_{hash_:X}")
                self.native_functions.append(fn_name)
            f.seek(self.libraries)
            self.num_libraries = (self.pubvars - self.libraries) // self.defsize
            self.library_names = []
            for _ in range(self.num_libraries):
                assert read_int(f, 8) == 0
                hash_ = read_int(f, 4, signed=False)
                lib_name = HASH_MAP.get(hash_, f"lib_{hash_:X}")
                self.library_names.append(lib_name)
            f.seek(self.pubvars)
            self.num_pubvars = (self.tags - self.pubvars) // self.defsize
            self.pubvar_syms = []
            for i in range(self.num_pubvars):
                addr = read_int(f, 8)
                hash_ = read_int(f, 4, signed=False)
                # pubvars are stored in alphabetical order so attempt to match this
                pubvar_sym = (
                    addr,
                    HASH_MAP.get(hash_, f"{chr(ord('a') + i)}_x{hash_:X}"),
                )
                self.pubvar_syms.append(pubvar_sym)
            f.seek(self.tags)
            self.num_tags = (self.nametable - self.tags) // self.defsize
            self.tag_syms = []
            for _ in range(self.num_tags):
                tag_flags = read_int(f, 8)
                hash_ = read_int(f, 4, signed=False)
                tag_sym = (tag_flags, HASH_MAP.get(hash_, f"tag_{hash_:X}"))
                self.tag_syms.append(tag_sym)
            f.seek(self.cod)
            self.code = bytearray(f.read(self.dat - self.cod))
        self.memsize = self.hea - self.cod
        self.codesize = self.dat - self.cod
        self.code += b"\x00" * (self.memsize - len(self.code))
        self.expand(self.size - self.cod, self.memsize)
        assert len(self.code) == self.memsize
        self.labels = {
            0: Label(0, "exit")
        }
        self.blocks = None

        self.explore()

    def dump_code(self, file_path: str):
        with open(file_path, "wb") as f:
            f.write(self.code[: self.codesize])

    def dump_data(self, file_path: str):
        with open(file_path, "wb") as f:
            f.write(self.code[self.codesize :])

    def explore(self):
        """Run through opcodes to find labels"""
        for addr, name in self.public_functions.items():
            self.labels[addr] = Label(addr, name)
        cip = 0
        while cip < self.codesize:
            instr_cip = cip
            opcode = int.from_bytes(self.code[cip : cip + 4], "little", signed=True)
            assert opcode in Opcode._value2member_map_, f"Invalid opcode {opcode}"
            opcode = Opcode(opcode)
            match opcode:
                case Opcode.OP_CASETBL:
                    cip += 8
                    num = int.from_bytes(self.code[cip : cip + 8], "little")
                    cip += 8
                    self.labels[instr_cip] = Label(instr_cip, f"switch_{instr_cip:04X}")
                    for i in range(num + 1):
                        target = (
                            int.from_bytes(
                                self.code[cip : cip + 8], "little", signed=True
                            )
                            + cip
                            - 8
                        )
                        case = (
                            "default"
                            if i == 0
                            else hex(int.from_bytes(self.code[cip - 8 : cip], "little"))
                        )
                        self.labels[target] = Label(target, f"switch_{instr_cip:04X}_case_{case}")
                        cip += 8
                        cip += 8
                        assert 0 <= target <= self.memsize
                    cip -= 8
                case (
                    Opcode.OP_LOAD_I
                    | Opcode.OP_STOR_I
                    | Opcode.OP_LIDX
                    | Opcode.OP_IDXADDR
                    | Opcode.OP_MOVE_PRI
                    | Opcode.OP_MOVE_ALT
                    | Opcode.OP_XCHG
                    | Opcode.OP_PUSH_PRI
                    | Opcode.OP_PUSH_ALT
                    | Opcode.OP_POP_PRI
                    | Opcode.OP_POP_ALT
                    | Opcode.OP_RET
                    | Opcode.OP_RETN
                    | Opcode.OP_SHL
                    | Opcode.OP_SHR
                    | Opcode.OP_SSHR
                    | Opcode.OP_SMUL
                    | Opcode.OP_SDIV
                    | Opcode.OP_SDIV_ALT
                    | Opcode.OP_UMUL
                    | Opcode.OP_UDIV
                    | Opcode.OP_UDIV_ALT
                    | Opcode.OP_ADD
                    | Opcode.OP_SUB
                    | Opcode.OP_SUB_ALT
                    | Opcode.OP_AND
                    | Opcode.OP_OR
                    | Opcode.OP_XOR
                    | Opcode.OP_NOT
                    | Opcode.OP_NEG
                    | Opcode.OP_INVERT
                    | Opcode.OP_ZERO_PRI
                    | Opcode.OP_ZERO_ALT
                    | Opcode.OP_SIGN_PRI
                    | Opcode.OP_SIGN_ALT
                    | Opcode.OP_EQ
                    | Opcode.OP_NEQ
                    | Opcode.OP_LESS
                    | Opcode.OP_LEQ
                    | Opcode.OP_GRTR
                    | Opcode.OP_GEQ
                    | Opcode.OP_SLESS
                    | Opcode.OP_SLEQ
                    | Opcode.OP_SGRTR
                    | Opcode.OP_SGEQ
                    | Opcode.OP_INC_PRI
                    | Opcode.OP_INC_ALT
                    | Opcode.OP_INC_I
                    | Opcode.OP_DEC_PRI
                    | Opcode.OP_DEC_ALT
                    | Opcode.OP_DEC_I
                    | Opcode.OP_SYSREQ_PRI
                    | Opcode.OP_SWAP_PRI
                    | Opcode.OP_SWAP_ALT
                    | Opcode.OP_NOP
                    | Opcode.OP_BREAK
                    | Opcode.OP_LOAD_P_S_PRI
                    | Opcode.OP_LOAD_P_S_ALT
                    | Opcode.OP_LREF_P_S_PRI
                    | Opcode.OP_LREF_P_S_ALT
                    | Opcode.OP_STOR_P_S_PRI
                    | Opcode.OP_STOR_P_S_ALT
                    | Opcode.OP_SREF_P_S_PRI
                    | Opcode.OP_SREF_P_S_ALT
                    | Opcode.OP_INC_P_S
                    | Opcode.OP_DEC_P_S
                    | Opcode.OP_LOAD_P_PRI
                    | Opcode.OP_LOAD_P_ALT
                    | Opcode.OP_LREF_P_PRI
                    | Opcode.OP_LREF_P_ALT
                    | Opcode.OP_STOR_P_PRI
                    | Opcode.OP_STOR_P_ALT
                    | Opcode.OP_SREF_P_PRI
                    | Opcode.OP_SREF_P_ALT
                    | Opcode.OP_INC_P
                    | Opcode.OP_DEC_P
                    | Opcode.OP_LODB_P_I
                    | Opcode.OP_CONST_P_PRI
                    | Opcode.OP_CONST_P_ALT
                    | Opcode.OP_ADDR_P_PRI
                    | Opcode.OP_ADDR_P_ALT
                    | Opcode.OP_STRB_P_I
                    | Opcode.OP_LIDX_P_B
                    | Opcode.OP_IDXADDR_P_B
                    | Opcode.OP_ALIGN_P_PRI
                    | Opcode.OP_ALIGN_P_ALT
                    | Opcode.OP_PUSH_P_C
                    | Opcode.OP_PUSH_P
                    | Opcode.OP_PUSH_P_S
                    | Opcode.OP_STACK_P
                    | Opcode.OP_HEAP_P
                    | Opcode.OP_SHL_P_C_PRI
                    | Opcode.OP_SHL_P_C_ALT
                    | Opcode.OP_SHR_P_C_PRI
                    | Opcode.OP_SHR_P_C_ALT
                    | Opcode.OP_ADD_P_C
                    | Opcode.OP_SMUL_P_C
                    | Opcode.OP_ZERO_P
                    | Opcode.OP_ZERO_P_S
                    | Opcode.OP_EQ_P_C_PRI
                    | Opcode.OP_EQ_P_C_ALT
                    | Opcode.OP_MOVS_P
                    | Opcode.OP_CMPS_P
                    | Opcode.OP_FILL_P
                    | Opcode.OP_HALT_P
                    | Opcode.OP_BOUNDS_P
                    | Opcode.OP_PUSH_P_ADR
                ):
                    cip += 8
                case (
                    Opcode.OP_PUSH5_C
                    | Opcode.OP_PUSH5
                    | Opcode.OP_PUSH5_S
                    | Opcode.OP_PUSH5_ADR
                ):
                    cip += 8
                    cip += 8
                    cip += 8
                    cip += 8
                    cip += 8
                    cip += 8
                case (
                    Opcode.OP_PUSH4_C
                    | Opcode.OP_PUSH4
                    | Opcode.OP_PUSH4_S
                    | Opcode.OP_PUSH4_ADR
                ):
                    cip += 8
                    cip += 8
                    cip += 8
                    cip += 8
                    cip += 8
                case (
                    Opcode.OP_PUSH3_C
                    | Opcode.OP_PUSH3
                    | Opcode.OP_PUSH3_S
                    | Opcode.OP_PUSH3_ADR
                ):
                    cip += 8
                    cip += 8
                    cip += 8
                    cip += 8
                case (
                    Opcode.OP_SYSREQ_N
                    | Opcode.OP_LOAD_S_BOTH
                    | Opcode.OP_PUSH2_C
                    | Opcode.OP_PUSH2
                    | Opcode.OP_PUSH2_S
                    | Opcode.OP_PUSH2_ADR
                    | Opcode.OP_CONST
                    | Opcode.OP_CONST_S
                    | Opcode.OP_LOAD_BOTH
                ):
                    cip += 8
                    cip += 8
                    cip += 8
                case (
                    Opcode.OP_LODB_I
                    | Opcode.OP_CONST_PRI
                    | Opcode.OP_CONST_ALT
                    | Opcode.OP_ADDR_PRI
                    | Opcode.OP_ADDR_ALT
                    | Opcode.OP_STRB_I
                    | Opcode.OP_LIDX_B
                    | Opcode.OP_IDXADDR_B
                    | Opcode.OP_ALIGN_PRI
                    | Opcode.OP_ALIGN_ALT
                    | Opcode.OP_LCTRL
                    | Opcode.OP_SCTRL
                    | Opcode.OP_PICK
                    | Opcode.OP_PUSH_C
                    | Opcode.OP_PUSH
                    | Opcode.OP_PUSH_S
                    | Opcode.OP_STACK
                    | Opcode.OP_HEAP
                    | Opcode.OP_JREL
                    | Opcode.OP_SHL_C_PRI
                    | Opcode.OP_SHL_C_ALT
                    | Opcode.OP_SHR_C_PRI
                    | Opcode.OP_SHR_C_ALT
                    | Opcode.OP_ADD_C
                    | Opcode.OP_SMUL_C
                    | Opcode.OP_ZERO
                    | Opcode.OP_ZERO_S
                    | Opcode.OP_EQ_C_PRI
                    | Opcode.OP_EQ_C_ALT
                    | Opcode.OP_MOVS
                    | Opcode.OP_CMPS
                    | Opcode.OP_FILL
                    | Opcode.OP_HALT
                    | Opcode.OP_BOUNDS
                    | Opcode.OP_PUSH_ADR
                    | Opcode.OP_LOAD_S_PRI
                    | Opcode.OP_LOAD_S_ALT
                    | Opcode.OP_LREF_S_PRI
                    | Opcode.OP_LREF_S_ALT
                    | Opcode.OP_STOR_S_PRI
                    | Opcode.OP_STOR_S_ALT
                    | Opcode.OP_SREF_S_PRI
                    | Opcode.OP_SREF_S_ALT
                    | Opcode.OP_INC_S
                    | Opcode.OP_DEC_S
                    | Opcode.OP_LOAD_PRI
                    | Opcode.OP_LOAD_ALT
                    | Opcode.OP_LREF_PRI
                    | Opcode.OP_LREF_ALT
                    | Opcode.OP_STOR_PRI
                    | Opcode.OP_STOR_ALT
                    | Opcode.OP_SREF_PRI
                    | Opcode.OP_SREF_ALT
                    | Opcode.OP_INC
                    | Opcode.OP_DEC
                ):
                    cip += 8
                    cip += 8
                # relocation
                case (
                    Opcode.OP_CALL
                    | Opcode.OP_JUMP
                    | Opcode.OP_JZER
                    | Opcode.OP_JNZ
                    | Opcode.OP_JEQ
                    | Opcode.OP_JNEQ
                    | Opcode.OP_JLESS
                    | Opcode.OP_JLEQ
                    | Opcode.OP_JGRTR
                    | Opcode.OP_JGEQ
                    | Opcode.OP_JSLESS
                    | Opcode.OP_JSLEQ
                    | Opcode.OP_JSGRTR
                    | Opcode.OP_JSGEQ
                    | Opcode.OP_SWITCH
                ):
                    cip += 8
                    target = (
                        int.from_bytes(self.code[cip : cip + 8], "little", signed=True)
                        + cip
                        - 8
                    )
                    if target not in self.labels:
                        self.labels[target] = (
                            Label(target, f"{'fun' if opcode == Opcode.OP_CALL else 'lab'}_{target:04X}")
                        )
                    cip += 8
                # function prologue
                case Opcode.OP_PROC:
                    if cip not in self.labels:
                        self.labels[cip] = Label(cip, f"fun_{cip:04X}")
                    cip += 8
                # Local patch (sword-decomp): Game Freak scripts use
                # SYSREQ.C (native call, one index param) pervasively.
                case Opcode.OP_SYSREQ_C:
                    cip += 8
                    cip += 8
                case Opcode.OP_NONE:
                    cip += 8
                case _:
                    cip += 8
                    assert False, f"{opcode.name} unimplemented"

    def explore_blocks(self):
        """Run through opcodes to generate basic blocks"""
        self.blocks = {
            label.address: BasicBlock(
                [],
                label,
                [],
            ) for label in self.labels.values()
        }
        current_block = None
        cip = 0
        while cip < self.codesize:
            instr_cip = cip
            opcode = int.from_bytes(self.code[cip : cip + 4], "little", signed=True)
            assert opcode in Opcode._value2member_map_, f"Invalid opcode {opcode}"
            opcode = Opcode(opcode)
            packed_param = int.from_bytes(
                self.code[cip + 4 : cip + 8], "little", signed=True
            )
            label = self.labels.get(instr_cip, None)
            if label is not None:
                current_block = self.blocks[instr_cip]
            match opcode:
                case Opcode.OP_PROC:
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode)
                    )
                case Opcode.OP_CASETBL:
                    cip += 8
                    num = int.from_bytes(self.code[cip : cip + 8], "little")
                    cip += 8
                    for i in range(num + 1):
                        target = (
                            int.from_bytes(
                                self.code[cip : cip + 8], "little", signed=True
                            )
                            + cip
                            - 8
                        )
                        case = (
                            "default"
                            if i == 0
                            else hex(int.from_bytes(self.code[cip - 8 : cip], "little"))
                        )
                        current_block.successors.append(self.blocks[target])
                        current_block.instructions.append(
                            (instr_cip, opcode, case, self.labels[target])
                        )
                        cip += 8
                        cip += 8
                        assert 0 <= target <= self.memsize
                    cip -= 8
                case Opcode.OP_SYSREQ_N:
                    cip += 8
                    index = int.from_bytes(
                        self.code[cip : cip + 8], "little", signed=True
                    )
                    cip += 8
                    stack_frame_size = int.from_bytes(
                        self.code[cip : cip + 8], "little", signed=True
                    )
                    assert stack_frame_size % 8 == 0
                    arg_count = stack_frame_size // 8
                    assert index < len(self.native_functions)
                    current_block.instructions.append(
                        (instr_cip, opcode, self.native_functions[index], arg_count)
                    )
                    cip += 8
                # 1 param packed
                case (
                    Opcode.OP_LODB_P_I
                    | Opcode.OP_CONST_P_PRI
                    | Opcode.OP_CONST_P_ALT
                    | Opcode.OP_ADDR_P_PRI
                    | Opcode.OP_ADDR_P_ALT
                    | Opcode.OP_STRB_P_I
                    | Opcode.OP_LIDX_P_B
                    | Opcode.OP_IDXADDR_P_B
                    | Opcode.OP_ALIGN_P_PRI
                    | Opcode.OP_ALIGN_P_ALT
                    | Opcode.OP_PUSH_P_C
                    | Opcode.OP_PUSH_P
                    | Opcode.OP_PUSH_P_S
                    | Opcode.OP_STACK_P
                    | Opcode.OP_HEAP_P
                    | Opcode.OP_SHL_P_C_PRI
                    | Opcode.OP_SHL_P_C_ALT
                    | Opcode.OP_SHR_P_C_PRI
                    | Opcode.OP_SHR_P_C_ALT
                    | Opcode.OP_ADD_P_C
                    | Opcode.OP_SMUL_P_C
                    | Opcode.OP_ZERO_P
                    | Opcode.OP_ZERO_P_S
                    | Opcode.OP_EQ_P_C_PRI
                    | Opcode.OP_EQ_P_C_ALT
                    | Opcode.OP_MOVS_P
                    | Opcode.OP_CMPS_P
                    | Opcode.OP_FILL_P
                    | Opcode.OP_HALT_P
                    | Opcode.OP_BOUNDS_P
                    | Opcode.OP_PUSH_P_ADR
                ):
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, packed_param)
                    )
                # data 1 param packed
                case (
                    Opcode.OP_LOAD_P_PRI
                    | Opcode.OP_LOAD_P_ALT
                    | Opcode.OP_LREF_P_PRI
                    | Opcode.OP_LREF_P_ALT
                    | Opcode.OP_STOR_P_PRI
                    | Opcode.OP_STOR_P_ALT
                    | Opcode.OP_SREF_P_PRI
                    | Opcode.OP_SREF_P_ALT
                    | Opcode.OP_INC_P
                    | Opcode.OP_DEC_P
                ):
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, packed_param)
                    )
                # stack 1 param packed
                case (
                    Opcode.OP_LOAD_P_S_PRI
                    | Opcode.OP_LOAD_P_S_ALT
                    | Opcode.OP_LREF_P_S_PRI
                    | Opcode.OP_LREF_P_S_ALT
                    | Opcode.OP_STOR_P_S_PRI
                    | Opcode.OP_STOR_P_S_ALT
                    | Opcode.OP_SREF_P_S_PRI
                    | Opcode.OP_SREF_P_S_ALT
                    | Opcode.OP_INC_P_S
                    | Opcode.OP_DEC_P_S
                ):
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, packed_param)
                    )
                # 5 param
                case (
                    Opcode.OP_PUSH5_C
                    | Opcode.OP_PUSH5
                    | Opcode.OP_PUSH5_S
                    | Opcode.OP_PUSH5_ADR
                ):
                    cip += 8
                    params = []
                    for _ in range(5):
                        param = int.from_bytes(
                            self.code[cip : cip + 8], "little", signed=True
                        )
                        params.append(param)
                        cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, *params)
                    )
                # 4 param
                case (
                    Opcode.OP_PUSH4_C
                    | Opcode.OP_PUSH4
                    | Opcode.OP_PUSH4_S
                    | Opcode.OP_PUSH4_ADR
                ):
                    cip += 8
                    params = []
                    for _ in range(4):
                        param = int.from_bytes(
                            self.code[cip : cip + 8], "little", signed=True
                        )
                        params.append(param)
                        cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, *params)
                    )
                # 3 param
                case (
                    Opcode.OP_PUSH3_C
                    | Opcode.OP_PUSH3
                    | Opcode.OP_PUSH3_S
                    | Opcode.OP_PUSH3_ADR
                ):
                    cip += 8
                    params = []
                    for _ in range(3):
                        param = int.from_bytes(
                            self.code[cip : cip + 8], "little", signed=True
                        )
                        params.append(param)
                        cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, *params)
                    )
                # 2 param
                case (
                    Opcode.OP_LOAD_S_BOTH
                    | Opcode.OP_PUSH2_C
                    | Opcode.OP_PUSH2
                    | Opcode.OP_PUSH2_S
                    | Opcode.OP_PUSH2_ADR
                    | Opcode.OP_CONST
                    | Opcode.OP_CONST_S
                    | Opcode.OP_LOAD_BOTH
                ):
                    cip += 8
                    params = []
                    for _ in range(2):
                        param = int.from_bytes(
                            self.code[cip : cip + 8], "little", signed=True
                        )
                        params.append(param)
                        cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, *params)
                    )
                # 1 param
                case (
                    Opcode.OP_LODB_I
                    | Opcode.OP_CONST_PRI
                    | Opcode.OP_CONST_ALT
                    | Opcode.OP_ADDR_PRI
                    | Opcode.OP_ADDR_ALT
                    | Opcode.OP_STRB_I
                    | Opcode.OP_LIDX_B
                    | Opcode.OP_IDXADDR_B
                    | Opcode.OP_ALIGN_PRI
                    | Opcode.OP_ALIGN_ALT
                    | Opcode.OP_LCTRL
                    | Opcode.OP_SCTRL
                    | Opcode.OP_PICK
                    | Opcode.OP_PUSH_C
                    | Opcode.OP_PUSH
                    | Opcode.OP_PUSH_S
                    | Opcode.OP_STACK
                    | Opcode.OP_HEAP
                    | Opcode.OP_JREL
                    | Opcode.OP_SHL_C_PRI
                    | Opcode.OP_SHL_C_ALT
                    | Opcode.OP_SHR_C_PRI
                    | Opcode.OP_SHR_C_ALT
                    | Opcode.OP_ADD_C
                    | Opcode.OP_SMUL_C
                    | Opcode.OP_ZERO
                    | Opcode.OP_ZERO_S
                    | Opcode.OP_EQ_C_PRI
                    | Opcode.OP_EQ_C_ALT
                    | Opcode.OP_MOVS
                    | Opcode.OP_CMPS
                    | Opcode.OP_FILL
                    | Opcode.OP_HALT
                    | Opcode.OP_BOUNDS
                    | Opcode.OP_PUSH_ADR
                ):
                    cip += 8
                    param_1 = int.from_bytes(
                        self.code[cip : cip + 8], "little", signed=True
                    )
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, param_1)
                    )
                case (
                    Opcode.OP_LOAD_PRI
                    | Opcode.OP_LOAD_ALT
                    | Opcode.OP_LREF_PRI
                    | Opcode.OP_LREF_ALT
                    | Opcode.OP_STOR_PRI
                    | Opcode.OP_STOR_ALT
                    | Opcode.OP_SREF_PRI
                    | Opcode.OP_SREF_ALT
                    | Opcode.OP_INC
                    | Opcode.OP_DEC
                ):
                    cip += 8
                    param_1 = int.from_bytes(
                        self.code[cip : cip + 8], "little", signed=True
                    )
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, param_1)
                    )
                case (
                    Opcode.OP_LOAD_S_PRI
                    | Opcode.OP_LOAD_S_ALT
                    | Opcode.OP_LREF_S_PRI
                    | Opcode.OP_LREF_S_ALT
                    | Opcode.OP_STOR_S_PRI
                    | Opcode.OP_STOR_S_ALT
                    | Opcode.OP_SREF_S_PRI
                    | Opcode.OP_SREF_S_ALT
                    | Opcode.OP_INC_S
                    | Opcode.OP_DEC_S
                ):
                    cip += 8
                    param_1 = int.from_bytes(
                        self.code[cip : cip + 8], "little", signed=True
                    )
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode, param_1)
                    )
                # 0 param
                case (
                    Opcode.OP_LOAD_I
                    | Opcode.OP_STOR_I
                    | Opcode.OP_LIDX
                    | Opcode.OP_IDXADDR
                    | Opcode.OP_MOVE_PRI
                    | Opcode.OP_MOVE_ALT
                    | Opcode.OP_XCHG
                    | Opcode.OP_PUSH_PRI
                    | Opcode.OP_PUSH_ALT
                    | Opcode.OP_POP_PRI
                    | Opcode.OP_POP_ALT
                    | Opcode.OP_RET
                    | Opcode.OP_RETN
                    | Opcode.OP_SHL
                    | Opcode.OP_SHR
                    | Opcode.OP_SSHR
                    | Opcode.OP_SMUL
                    | Opcode.OP_SDIV
                    | Opcode.OP_SDIV_ALT
                    | Opcode.OP_UMUL
                    | Opcode.OP_UDIV
                    | Opcode.OP_UDIV_ALT
                    | Opcode.OP_ADD
                    | Opcode.OP_SUB
                    | Opcode.OP_SUB_ALT
                    | Opcode.OP_AND
                    | Opcode.OP_OR
                    | Opcode.OP_XOR
                    | Opcode.OP_NOT
                    | Opcode.OP_NEG
                    | Opcode.OP_INVERT
                    | Opcode.OP_ZERO_PRI
                    | Opcode.OP_ZERO_ALT
                    | Opcode.OP_SIGN_PRI
                    | Opcode.OP_SIGN_ALT
                    | Opcode.OP_EQ
                    | Opcode.OP_NEQ
                    | Opcode.OP_LESS
                    | Opcode.OP_LEQ
                    | Opcode.OP_GRTR
                    | Opcode.OP_GEQ
                    | Opcode.OP_SLESS
                    | Opcode.OP_SLEQ
                    | Opcode.OP_SGRTR
                    | Opcode.OP_SGEQ
                    | Opcode.OP_INC_PRI
                    | Opcode.OP_INC_ALT
                    | Opcode.OP_INC_I
                    | Opcode.OP_DEC_PRI
                    | Opcode.OP_DEC_ALT
                    | Opcode.OP_DEC_I
                    | Opcode.OP_SYSREQ_PRI
                    | Opcode.OP_SWAP_PRI
                    | Opcode.OP_SWAP_ALT
                    | Opcode.OP_NOP
                    | Opcode.OP_BREAK
                ):
                    cip += 8
                    current_block.instructions.append(
                        (instr_cip, opcode,)
                    )
                # relocation
                case (
                    Opcode.OP_CALL
                    | Opcode.OP_JUMP
                    | Opcode.OP_JZER
                    | Opcode.OP_JNZ
                    | Opcode.OP_JEQ
                    | Opcode.OP_JNEQ
                    | Opcode.OP_JLESS
                    | Opcode.OP_JLEQ
                    | Opcode.OP_JGRTR
                    | Opcode.OP_JGEQ
                    | Opcode.OP_JSLESS
                    | Opcode.OP_JSLEQ
                    | Opcode.OP_JSGRTR
                    | Opcode.OP_JSGEQ
                    | Opcode.OP_SWITCH
                ):
                    cip += 8
                    target = (
                        int.from_bytes(self.code[cip : cip + 8], "little", signed=True)
                        + cip
                        - 8
                    )

                    assert 0 <= target <= self.memsize, hex(target)
                    # function calls dont end blocks
                    if opcode != Opcode.OP_CALL:
                        current_block.successors.append(self.blocks[target])
                    target = self.labels.get(target, None) or target
                    current_block.instructions.append(
                        (instr_cip, opcode, target)
                    )
                    cip += 8
                case Opcode.OP_NONE:
                    cip += 8
                # Local patch (sword-decomp): render SYSREQ.C like SYSREQ.N
                # but with a single native-index param.
                case Opcode.OP_SYSREQ_C:
                    cip += 8
                    index = int.from_bytes(
                        self.code[cip : cip + 8], "little", signed=True
                    )
                    cip += 8
                    assert index < len(self.native_functions)
                    current_block.instructions.append(
                        (instr_cip, opcode, self.native_functions[index])
                    )
                case _:
                    cip += 8
                    assert False, f"{opcode} unimplemented"
        return self.blocks

    def infodump(self) -> str:
        """Generate an info dump of the script"""
        info = ""
        info += f"// stack size: {self.stack_size}\n"
        info += f"// {self.cod=:X}\n"
        info += f"// {self.dat=:X}\n"
        info += f"// {self.hea=:X}\n"
        info += f"// {self.stp=:X}\n"
        info += f"// {self.cip=:X}\n"
        info += f"// {self.publics=:X}\n"
        info += f"// {self.natives=:X}\n"
        info += f"// {self.libraries=:X}\n"
        info += f"// {self.pubvars=:X}\n"
        info += f"// {self.tags=:X}\n"
        info += f"// {self.nametable=:X}\n"
        info += f"// {self.overlays=:X}\n"
        for lib in self.library_names:
            info += f"#pragma library {lib}\n"
        info += "\n"
        for native_function in self.native_functions:
            info += f"native {native_function}();\n"
        for addr, name in self.public_functions.items():
            info += f"{name}();\n"
        info += "\n"
        for flags, tag in self.tag_syms:
            info += f"#pragma <> {tag} // {'fixed' if flags & 0x40000000 != 0 else ''} ({flags & 0x3FFFFFFF})\n"
        info += "\n"
        for addr, name in sorted(self.pubvar_syms):
            pubvar_value = int.from_bytes(
                self.code[self.dat - self.cod + addr : self.dat - self.cod + addr + 8],
                "little",
                signed=True,
            )
            info += f"#pragma unused {name}\n"
            info += f"public {name} = {pubvar_value};\n"

        return info

    def disasm(self) -> str:
        """Generate a disassembly of the script"""
        if self.blocks is None:
            self.explore_blocks()
        disassembly = ""
        for block_addr, block in sorted(self.blocks.items()):
            disassembly += f"\n// {block_addr:04X}\n"
            disassembly += f"{self.labels[block_addr]}\n"
            for address, opcode, *args in block.instructions:
                disassembly += f"{opcode.name} {', '.join(map(str, args))} // {address:04X}\n"
        return disassembly

    def expand(self, codesize: int, memsize: int):
        """Expand packed script"""
        assert memsize % 8 == 0
        while codesize > 0:
            c = 0
            shift = 0
            while shift == 0 or (codesize > 0 and self.code[codesize - 1] & 0x80):
                codesize -= 1
                assert shift < 8 * 8
                assert shift > 0 or self.code[codesize] & 0x80 == 0
                c |= (self.code[codesize] & 0x7F) << shift
                shift += 7
            if self.code[codesize] & 0x40:
                while shift < 8 * 8:
                    c |= 0xFF << shift
                    c &= 0xFFFFFFFFFFFFFFFF
                    shift += 8
            # ... (store)
            memsize -= 8
            assert memsize >= 0
            if memsize > codesize or (memsize == codesize and memsize == 0):
                self.code[memsize : memsize + 8] = c.to_bytes(8, "little")
            else:
                pass
                # ... (more store)
        assert memsize == 0
