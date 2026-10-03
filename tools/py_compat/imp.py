"""Compatibility shim for the long-removed `imp` module.

asm-differ pulls in `ansiwrap`, which loads `textwrap3` through `imp`:

    import imp
    a_textwrap = imp.load_module('a_textwrap', *imp.find_module('textwrap3'))

`imp` was deprecated in Python 3.4 and deleted in 3.12, so on a current
interpreter that import raises ModuleNotFoundError and asm-differ refuses to
start. Only those two functions are used, and both have direct importlib
equivalents, so this module provides just them.

Put this directory on PYTHONPATH ahead of the stdlib when invoking asm-differ;
tools/diff.py does that automatically. Nothing else in the project should
import it.
"""

import importlib.machinery
import importlib.util
import os
import sys

__all__ = ["find_module", "load_module", "load_source", "load_compiled",
           "acquire_lock", "release_lock", "get_suffixes"]


def find_module(name, path=None):
    """Locate `name` and return the (file, pathname, description) triple that
    the old `imp.find_module` produced."""
    spec = importlib.util.find_spec(name) if path is None else None
    if spec is None and path is not None:
        for entry in path:
            candidate = os.path.join(entry or os.curdir, name)
            for suffix in importlib.machinery.all_suffixes():
                if os.path.isfile(candidate + suffix):
                    base = candidate + suffix
                    return None, base, (suffix, "r", 1)
        return None
    if spec is None:
        raise ImportError("No module named %r" % (name,), name=name)

    origin = spec.origin
    if origin in (None, "built-in", "frozen"):
        # `None` for the file handle signals a built-in, as `imp` did.
        return None, origin, ("", "rb", 3)
    return None, origin, (os.path.splitext(origin)[1], "r", 1)


def load_module(name, file, pathname, description):
    """Load `name` from the location `find_module` reported.

    The real `imp.load_module` reuses an already-loaded module of that name, so
    a private alias like `a_textwrap` deliberately gets its own entry in
    sys.modules rather than shadowing `textwrap3`.
    """
    if name in sys.modules and file is None:
        return sys.modules[name]

    if pathname in ("built-in", "frozen"):
        return importlib.import_module(name)

    suffix, mode, _kind = description
    spec = importlib.util.spec_from_file_location(name, pathname)
    if spec is None or spec.loader is None:
        raise ImportError("Cannot load %r from %r" % (name, pathname), name=name)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    try:
        spec.loader.exec_module(module)
    except BaseException:
        sys.modules.pop(name, None)
        raise
    return module


def load_source(name, pathname, file=None):
    """Load a module from a source file."""
    spec = importlib.util.spec_from_file_location(name, pathname)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    spec.loader.exec_module(module)
    return module


def load_compiled(name, pathname, file=None):
    """Load a module from a .pyc/.so path."""
    loader = importlib.machinery.SourcelessFileLoader(name, pathname)
    spec = importlib.util.spec_from_loader(name, loader)
    module = importlib.util.module_from_spec(spec)
    sys.modules[name] = module
    loader.exec_module(module)
    return module


def get_suffixes():
    """Return the (source, bytecode, extension) suffix triples `imp` exposed."""
    import importlib.machinery as m
    ext = list(m.EXTENSION_SUFFIXES)
    src = list(m.SOURCE_SUFFIXES)
    bcd = list(m.BYTECODE_SUFFIXES)
    return [tuple(group) for group in (src, bcd, ext)]


# Present in `imp` but not meaningful here; kept so callers that import them
# for compatibility do not fail.
def acquire_lock():
    pass


def release_lock():
    pass


def lock_held():
    return False
