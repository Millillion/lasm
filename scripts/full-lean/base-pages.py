"""Use base pages for a guarded Linux build and its descendants."""
from pathlib import Path
import ctypes
import os
import sys

if len(sys.argv) < 2:
    raise SystemExit("Usage: run-bounded.mjs -- python3 base-pages.py COMMAND [ARGS...]")
if sys.platform != "linux":
    raise SystemExit("This maintainer build wrapper requires Linux")

unit = os.environ.get("LASM_RESOURCE_UNIT")
group = Path("/sys/fs/cgroup") / Path("/proc/self/cgroup").read_text().strip().split("::", 1)[1].lstrip("/")
if not unit or group.name != unit:
    raise SystemExit("Run this command through scripts/full-lean/run-bounded.mjs")
limit = int((group / "memory.max").read_text())
if not (0 < limit <= 10 * 1024 ** 3) or (group / "memory.high").read_text().strip() != "max" or (group / "memory.oom.group").read_text().strip() != "1":
    raise SystemExit("The required memory guard is not active")

libc = ctypes.CDLL(None, use_errno=True)
prctl = libc.prctl
prctl.argtypes = [ctypes.c_int, ctypes.c_ulong, ctypes.c_ulong, ctypes.c_ulong, ctypes.c_ulong]
prctl.restype = ctypes.c_int
# Linux prctl.h: disable transparent huge pages for this process. The setting
# survives exec and is inherited by descendants; no system-wide setting changes.
if prctl(41, 1, 0, 0, 0) != 0 or prctl(42, 0, 0, 0, 0) != 1:
    raise OSError(ctypes.get_errno(), "Could not disable build-process huge pages")
print("[lasm] Build process uses base pages; memory and pressure guards remain active", file=sys.stderr, flush=True)
os.execvp(sys.argv[1], sys.argv[1:])
