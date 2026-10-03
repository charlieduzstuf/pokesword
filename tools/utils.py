from colorama import Fore, Style
import csv
import cxxfilt
import enum
import os
from pathlib import Path
import sys
import typing as tp


class FunctionStatus(enum.Enum):
    Matching = 0
    Equivalent = 1  # semantically equivalent but not perfectly matching
    NonMatching = 2
    Wip = 3
    NotDecompiled = 4


class FunctionInfo(tp.NamedTuple):
    module: str  # which NSO module the function belongs to
    addr: int  # module-relative offset; every NSO is based at 0
    name: str
    size: int
    decomp_name: str
    status: FunctionStatus


MODULES = ("rtld", "main", "sdk", "subsdk0", "subsdk1")


def selected_module() -> str:
    """Module the tools should operate on.

    Each NSO module is an independent image with its own address space, so
    addresses repeat across modules and a module has to be chosen explicitly.
    """
    mod = os.environ.get("POKESWORD_MODULE", "main")
    return mod if mod in MODULES else "main"


_markers = {
    "?": FunctionStatus.Equivalent,
    "!": FunctionStatus.NonMatching,
    "|": FunctionStatus.Wip,
}


def parse_function_csv_entry(row) -> FunctionInfo:
    """data/functions.csv rows are module,addr,name,size,decomp_name."""
    module, ea, name, size, decomp_name = (row + ["", "", "", "", ""])[:5]
    if decomp_name:
        status = FunctionStatus.Matching

        for marker, new_status in _markers.items():
            if decomp_name[-1] == marker:
                status = new_status
                decomp_name = decomp_name[:-1]
                break
    else:
        status = FunctionStatus.NotDecompiled

    addr = int(ea, 16)  # NSO modules are based at 0, so this is already an RVA
    return FunctionInfo(module, addr, name, int(size, 0), decomp_name, status)


def get_functions(module: tp.Optional[str] = None) -> tp.Iterable[FunctionInfo]:
    """Yield the symbol table, restricted to one module by default.

    Addresses are only unique within a module, so the whole table is only
    meaningful when filtered.
    """
    if module is None:
        module = selected_module()
    with (Path(__file__).parent.parent / "data" / "functions.csv").open() as f:
        reader = csv.reader(f)
        header = next(reader, None)
        if header and header[0] != "module":
            # Single-module table without the module column.
            f.seek(0)
            reader = csv.reader(f)
            header = None
        for row in reader:
            if not row or (header and row[0] == "module"):
                continue
            info = parse_function_csv_entry(row if header else [""] + row)
            if info.module == module:
                yield info


def _find_cxxfilt():
    """Locate a native Itanium demangler.

    The cxxfilt package shells out to a system C++ demangler, which is absent
    on a plain Windows install. LLVM ships one, and the naming pipeline already
    used llvm-cxxfilt, so prefer it and keep cxxfilt as a fallback.
    """
    import shutil
    override = os.environ.get("CXXFILT")
    if override and os.path.isfile(override):
        return override
    for cand in (r"C:\Users\charl\scoop\apps\llvm\current\bin\llvm-cxxfilt.exe",
                 "llvm-cxxfilt", "llvm-cxxfilt.exe", "c++filt"):
        path = cand if os.path.isfile(cand) else shutil.which(cand)
        if path:
            return path
    return None


_NATIVE = _find_cxxfilt()
_demangle_cache: tp.Dict[str, str] = {}


def _demangle_batch(names):
    """Demangle many symbols in one subprocess.

    The demangler is a filter, so it reads one symbol per line. Calling it once
    per symbol would spawn ~150k processes over the whole symbol table and take
    hours; batching makes it a handful.
    """
    if not names or not _NATIVE:
        return {}
    out = {}
    try:
        import subprocess
        r = subprocess.run([_NATIVE], input="\n".join(names),
                           capture_output=True, text=True, timeout=120)
        if r.returncode == 0:
            lines = r.stdout.splitlines()
            for n, d in zip(names, lines):
                out[n] = d.strip() or n
    except Exception:
        pass
    return out


def demangle(name: str) -> str:
    """Demangle an Itanium C++ symbol, returning it unchanged on failure."""
    hit = _demangle_cache.get(name)
    if hit is not None:
        return hit
    out = _demangle_batch([name]).get(name, name)
    _demangle_cache[name] = out
    return out


def format_symbol_name(name: str) -> str:
    try:
        return f"{demangle(name)} {Style.DIM}({name}){Style.RESET_ALL}"
    except:
        return name


def format_symbol_name_for_msg(name: str) -> str:
    try:
        return f"{Fore.BLUE}{demangle(name)}{Fore.RESET} {Style.DIM}({name}){Style.RESET_ALL}{Style.BRIGHT}"
    except:
        return name


def are_demangled_names_equal(name1: str, name2: str):
    return demangle(name1) == demangle(name2)


def print_note(msg: str, prefix: str = ""):
    sys.stderr.write(f"{Style.BRIGHT}{prefix}{Fore.CYAN}note:{Fore.RESET} {msg}{Style.RESET_ALL}\n")


def warn(msg: str, prefix: str = ""):
    sys.stderr.write(f"{Style.BRIGHT}{prefix}{Fore.MAGENTA}warning:{Fore.RESET} {msg}{Style.RESET_ALL}\n")


def print_error(msg: str, prefix: str = ""):
    sys.stderr.write(f"{Style.BRIGHT}{prefix}{Fore.RED}error:{Fore.RESET} {msg}{Style.RESET_ALL}\n")


def fail(msg: str, prefix: str = ""):
    print_error(msg, prefix)
    sys.exit(1)
