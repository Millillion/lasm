"""Maintainer CI guard: descendants stay in a capped, kill-on-close Job Object.

No breakaway flags, no throttling and no deliberate allocation failure tests.
Start suspended so no child can escape between creation and assignment.
Reference: https://learn.microsoft.com/en-us/windows/win32/procthread/job-objects
"""
import argparse
import ctypes as C
from ctypes import wintypes as W
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys
import time

if sys.platform != "win32":
    raise SystemExit("This guard requires native Windows Python")

K = C.WinDLL("kernel32", use_last_error=True)
SIZE = C.c_size_t
U64 = C.c_ulonglong


class BASIC_LIMIT(C.Structure):
    _fields_ = [("processTime", C.c_longlong), ("jobTime", C.c_longlong),
                ("flags", W.DWORD), ("minWorkingSet", SIZE), ("maxWorkingSet", SIZE),
                ("activeProcesses", W.DWORD), ("affinity", SIZE),
                ("priorityClass", W.DWORD), ("schedulingClass", W.DWORD)]


class IO_COUNTERS(C.Structure):
    _fields_ = [(name, U64) for name in ("readOps", "writeOps", "otherOps", "readBytes", "writeBytes", "otherBytes")]


class EXTENDED_LIMIT(C.Structure):
    _fields_ = [("basic", BASIC_LIMIT), ("io", IO_COUNTERS), ("processMemory", SIZE),
                ("jobMemory", SIZE), ("peakProcessMemory", SIZE), ("peakJobMemory", SIZE)]


class MEMORY(C.Structure):
    _fields_ = [("length", W.DWORD), ("load", W.DWORD)] + [
        (name, U64) for name in ("total", "available", "totalPage", "availablePage", "totalVirtual", "availableVirtual", "reserved")]


class STARTUP(C.Structure):
    _fields_ = [("cb", W.DWORD), ("reserved", W.LPWSTR), ("desktop", W.LPWSTR), ("title", W.LPWSTR)] + [
        (name, W.DWORD) for name in ("x", "y", "xSize", "ySize", "xCount", "yCount", "fill", "flags")] + [
        ("show", W.WORD), ("reservedSize", W.WORD), ("reservedBytes", C.POINTER(C.c_byte)),
        ("stdin", W.HANDLE), ("stdout", W.HANDLE), ("stderr", W.HANDLE)]


class PROCESS(C.Structure):
    _fields_ = [("process", W.HANDLE), ("thread", W.HANDLE), ("pid", W.DWORD), ("tid", W.DWORD)]


def function(name, arguments, result=W.BOOL):
    fn = getattr(K, name)
    fn.argtypes, fn.restype = arguments, result
    return fn


close = function("CloseHandle", [W.HANDLE])
mutex_create = function("CreateMutexW", [C.c_void_p, W.BOOL, W.LPCWSTR], W.HANDLE)
job_create = function("CreateJobObjectW", [C.c_void_p, W.LPCWSTR], W.HANDLE)
job_set = function("SetInformationJobObject", [W.HANDLE, C.c_int, C.c_void_p, W.DWORD])
job_query = function("QueryInformationJobObject", [W.HANDLE, C.c_int, C.c_void_p, W.DWORD, C.c_void_p])
assign = function("AssignProcessToJobObject", [W.HANDLE, W.HANDLE])
terminate = function("TerminateJobObject", [W.HANDLE, W.UINT])
terminate_process = function("TerminateProcess", [W.HANDLE, W.UINT])
create = function("CreateProcessW", [W.LPCWSTR, W.LPWSTR, C.c_void_p, C.c_void_p, W.BOOL, W.DWORD,
                                    C.c_void_p, W.LPCWSTR, C.POINTER(STARTUP), C.POINTER(PROCESS)])
resume = function("ResumeThread", [W.HANDLE], W.DWORD)
wait = function("WaitForSingleObject", [W.HANDLE, W.DWORD], W.DWORD)
exit_code = function("GetExitCodeProcess", [W.HANDLE, C.POINTER(W.DWORD)])
memory_status = function("GlobalMemoryStatusEx", [C.POINTER(MEMORY)])


def check(value):
    if not value:
        raise C.WinError(C.get_last_error())
    return value


def memory():
    value = MEMORY()
    value.length = C.sizeof(value)
    check(memory_status(C.byref(value)))
    return {"total": value.total, "available": value.available}


parser = argparse.ArgumentParser()
parser.add_argument("--memory-mib", type=int, default=8192)
parser.add_argument("--report", required=True)
parser.add_argument("command", nargs=argparse.REMAINDER)
args = parser.parse_args()
command = args.command[1:] if args.command[:1] == ["--"] else args.command
if not command or not 128 <= args.memory_mib <= 10240:
    parser.error("Supply -- COMMAND and a cap of 128..10240 MiB")
report = Path(args.report).resolve()
report.parent.mkdir(parents=True, exist_ok=True)
with report.open("x", encoding="utf-8") as output:
    output.write("{}\n")
initial = memory()
reserve = 2 * 1024**3
limit = min(args.memory_mib * 1024**2, initial["total"] // 2, initial["available"] - reserve)
if limit < 128 * 1024**2:
    raise SystemExit("Insufficient free memory for the Windows CI guard")
evidence = {"status": "starting", "command": command, "hostAtStart": initial,
            "limits": {"jobCommittedBytes": limit, "stopCommittedBytes": int(limit * .8), "hostReserveBytes": reserve},
            "peakCommittedBytes": 0, "minimumHostAvailable": initial["available"], "startedAt": time.time()}


def save():
    temporary = report.with_suffix(report.suffix + ".partial")
    temporary.write_text(json.dumps(evidence, indent=2) + "\n", encoding="utf-8")
    temporary.replace(report)


job = mutex = None
child = PROCESS()
try:
    root = str(Path(__file__).resolve().parents[2]).lower()
    mutex = check(mutex_create(None, True, "Local\\LasmHeavy-" + hashlib.sha256(root.encode()).hexdigest()[:20]))
    if C.get_last_error() == 183:
        raise RuntimeError("Another heavy workload already owns this checkout")
    job = check(job_create(None, None))
    limits = EXTENDED_LIMIT()
    # JOB_MEMORY, ACTIVE_PROCESS, KILL_ON_JOB_CLOSE; deliberately no BREAKAWAY.
    limits.basic.flags = 0x200 | 0x8 | 0x2000
    limits.basic.activeProcesses = 128
    limits.jobMemory = limit
    check(job_set(job, 9, C.byref(limits), C.sizeof(limits)))
    startup = STARTUP()
    startup.cb = C.sizeof(startup)
    invocation = C.create_unicode_buffer(subprocess.list2cmdline(command))
    check(create(None, invocation, None, None, True, 0x4, None, None, C.byref(startup), C.byref(child)))
    try:
        check(assign(job, child.process))
        if resume(child.thread) == 0xFFFFFFFF:
            raise C.WinError(C.get_last_error())
    except BaseException:
        terminate_process(child.process, 125)
        raise
    evidence.update(status="running", pid=child.pid)
    while True:
        sample = EXTENDED_LIMIT()
        check(job_query(job, 9, C.byref(sample), C.sizeof(sample), None))
        host = memory()
        evidence["peakCommittedBytes"] = max(evidence["peakCommittedBytes"], sample.peakJobMemory)
        evidence["minimumHostAvailable"] = min(evidence["minimumHostAvailable"], host["available"])
        evidence["lastSampleAt"] = time.time()
        reason = ("proactive-memory-stop" if sample.peakJobMemory >= evidence["limits"]["stopCommittedBytes"]
                  else "host-headroom-stop" if host["available"] < reserve else None)
        if reason:
            evidence["stoppedBecause"] = reason
            check(terminate(job, 125))
        save()
        state = wait(child.process, 200)
        if state == 0:
            break
        if state != 258:
            raise C.WinError(C.get_last_error())
    code = W.DWORD()
    check(exit_code(child.process, C.byref(code)))
    evidence["exitCode"] = code.value
    evidence["status"] = "resource-abort" if evidence.get("stoppedBecause") else "passed" if code.value == 0 else "failed"
except BaseException as error:
    evidence.update(status="guard-error", error=str(error))
    raise
finally:
    # Closing this supervisor's sole job handle also removes leftover children.
    if job:
        close(job)
    for handle in (child.thread, child.process, mutex):
        if handle:
            close(handle)
    evidence["finishedAt"] = time.time()
    save()
    print(json.dumps(evidence), flush=True)
raise SystemExit(125 if evidence.get("stoppedBecause") else evidence["exitCode"])
