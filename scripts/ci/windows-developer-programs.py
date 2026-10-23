"""Discover the hosted Windows runner's preinstalled developer programs once.

windows-restricted.py denies these programs to every restricted consumer. The
walk over Program Files (including the Android SDK) and the tool cache has taken
more than 20 minutes on slow hosted VMs, so it runs as its own CI step, before
the time-limited isolation controls, and the list is reused by every later
restricted run (scripts/ci/windows-isolation.mjs). Same roots and walker as
windows-restricted.py.
    python -I -B windows-developer-programs.py OUTPUT.json
"""
import importlib.util
import json
import os
import sys
import time
from pathlib import Path

assert os.environ.get("GITHUB_ACTIONS") == "true" and os.name == "nt"
spec = importlib.util.spec_from_file_location("lasm_ci_file_walk", Path(__file__).with_name("windows_file_walk.py"))
walker = importlib.util.module_from_spec(spec)
spec.loader.exec_module(walker)
output = Path(sys.argv[1])
roots = [os.environ.get(k) for k in ("ProgramFiles", "ProgramFiles(x86)", "ProgramW6432", "RUNNER_TOOL_CACHE", "MSYS2_LOCATION")]
roots.append(str(Path(os.environ["SystemRoot"]).anchor + "msys64"))
developer_roots = sorted({str(Path(p).resolve()) for p in roots if p and Path(p).exists()})
started = time.monotonic()
last = [started]
def on_directory(root, directory, count):
    if time.monotonic() - last[0] >= 30:
        last[0] = time.monotonic()
        print(f"discovering developer tools: {count} directories under {root}", flush=True)
inaccessible = []
programs = sorted({str(p) for root in developer_roots
    for p in walker.walk_files(root, developer=True, on_directory=on_directory, on_permission=lambda d: inaccessible.append(str(d)))})
assert programs, "No preinstalled developer programs were found"
output.parent.mkdir(parents=True, exist_ok=True)
output.write_text(json.dumps({"roots": developer_roots, "programs": programs, "inaccessibleDirectories": inaccessible,
    "seconds": round(time.monotonic() - started, 1)}, indent=2) + "\n", encoding="utf-8")
print(json.dumps({"roots": developer_roots, "programs": len(programs), "seconds": round(time.monotonic() - started, 1)}))
