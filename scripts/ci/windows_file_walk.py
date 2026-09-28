"""Enumerate CI prerequisite files without resolving every ordinary path.

On Windows Path.resolve opens the complete path to resolve junctions. Scandir
already supplies ordinary names and reparse metadata; only roots and reparse
entries need that additional work. Junction targets still share the visited set.
"""
import os
from pathlib import Path
import re
import stat

tool_names = {"lean.exe", "lake.exe", "leanc.exe", "leanchecker.exe", "leantar.exe",
    "cl.exe", "link.exe", "lld.exe", "lld-link.exe", "ld.lld.exe", "ld.exe", "llc.exe", "opt.exe",
    "wasm-ld.exe", "wasm-opt.exe", "ar.exe", "ranlib.exe", "gcc.exe", "g++.exe",
    "py.exe", "git.exe", "git-cmd.exe", "git-bash.exe", "git-lfs.exe", "cmake.exe", "ninja.exe",
    "make.exe", "mingw32-make.exe", "bash.exe", "sh.exe", "node.exe", "npm.cmd", "npx.cmd",
    "emcc.bat", "emcc.cmd", "emcc.py", "em++.py", "emar.py", "emranlib.py", "emsdk.bat"}


def developer_program(path):
    return path.name.lower() in tool_names or re.fullmatch(r"(?:clang.*|llvm-.*|python.*)\.exe", path.name, re.I)


def walk_files(root, *, developer=False, on_directory=None, on_permission=None):
    pending, seen = [Path(root).resolve()], set()
    while pending:
        directory = pending.pop()
        identity = os.path.normcase(str(directory))
        if identity in seen:
            continue
        seen.add(identity)
        if on_directory:
            on_directory(root, directory, len(seen))
        try:
            with os.scandir(directory) as entries:
                for entry in entries:
                    path = Path(entry.path)
                    reparse = entry.is_symlink() or (os.name == "nt" and
                        entry.stat(follow_symlinks=False).st_file_attributes & stat.FILE_ATTRIBUTE_REPARSE_POINT)
                    if entry.is_dir(follow_symlinks=True):
                        if developer and entry.name.lower() in ("windows defender", "windows defender advanced threat protection"):
                            continue
                        pending.append(path.resolve() if reparse else path)
                    elif not developer or developer_program(path):
                        yield path.resolve() if reparse else path
        except PermissionError:
            if not developer:
                raise
            if on_permission:
                on_permission(directory)
