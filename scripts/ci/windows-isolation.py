"""CI-only Windows LPAC launcher; never an end-user Lasm prerequisite.

Explicit grants apply only to disposable test paths. All descendants retain the
outer capped Job Object, and a nested kill-on-close job cleans up each invocation.
Reference: learn.microsoft.com/windows/win32/secauthz/implementing-an-appcontainer
"""
import ctypes as C
from ctypes import wintypes as W
import json
import msvcrt
import os
from pathlib import Path
import re
import subprocess
import sys
import time
import uuid

if sys.platform != "win32":
    raise SystemExit("Native Windows is required")

K = C.WinDLL("kernel32", use_last_error=True)
A = C.WinDLL("advapi32", use_last_error=True)
U = C.WinDLL("userenv", use_last_error=True)
B = C.WinDLL("kernelbase", use_last_error=True)
N = C.WinDLL("ntdll", use_last_error=True)
P = C.c_void_p
SIZE = C.c_size_t


class SID_ATTRIBUTES(C.Structure):
    _fields_ = [("sid", P), ("attributes", W.DWORD)]


class CAPABILITIES(C.Structure):
    _fields_ = [("sid", P), ("capabilities", C.POINTER(SID_ATTRIBUTES)),
                ("count", W.DWORD), ("reserved", W.DWORD)]


class STARTUP(C.Structure):
    _fields_ = [("cb", W.DWORD), ("reserved", W.LPWSTR), ("desktop", W.LPWSTR), ("title", W.LPWSTR)] + [
        (name, W.DWORD) for name in ("x", "y", "xSize", "ySize", "xCount", "yCount", "fill", "flags")] + [
        ("show", W.WORD), ("reservedSize", W.WORD), ("reservedBytes", P),
        ("stdin", W.HANDLE), ("stdout", W.HANDLE), ("stderr", W.HANDLE)]


class STARTUP_EX(C.Structure):
    _fields_ = [("startup", STARTUP), ("attributes", P)]


class PROCESS(C.Structure):
    _fields_ = [("process", W.HANDLE), ("thread", W.HANDLE), ("pid", W.DWORD), ("tid", W.DWORD)]


class BASIC_LIMIT(C.Structure):
    _fields_ = [("processTime", C.c_longlong), ("jobTime", C.c_longlong),
                ("flags", W.DWORD), ("minWorkingSet", SIZE), ("maxWorkingSet", SIZE),
                ("activeProcesses", W.DWORD), ("affinity", SIZE),
                ("priorityClass", W.DWORD), ("schedulingClass", W.DWORD)]


class EXTENDED_LIMIT(C.Structure):
    _fields_ = [("basic", BASIC_LIMIT), ("io", C.c_ulonglong * 6), ("processMemory", SIZE),
                ("jobMemory", SIZE), ("peakProcessMemory", SIZE), ("peakJobMemory", SIZE)]


class TRUSTEE(C.Structure):
    _fields_ = [("multiple", P), ("operation", C.c_int), ("form", C.c_int), ("type", C.c_int), ("name", P)]


class EXPLICIT_ACCESS(C.Structure):
    _fields_ = [("permissions", W.DWORD), ("mode", C.c_int), ("inheritance", W.DWORD), ("trustee", TRUSTEE)]


class SECURITY_DESCRIPTOR(C.Structure):
    _fields_ = [("revision", W.BYTE), ("reserved", W.BYTE), ("control", W.WORD),
                ("owner", P), ("group", P), ("sacl", P), ("dacl", P)]


class LUID(C.Structure):
    _fields_ = [("low", W.DWORD), ("high", W.LONG)]


class LUID_ATTRIBUTES(C.Structure):
    _fields_ = [("luid", LUID), ("attributes", W.DWORD)]


class TOKEN_PRIVILEGES(C.Structure):
    _fields_ = [("count", W.DWORD), ("privileges", LUID_ATTRIBUTES * 1)]


def fn(lib, name, args, result=W.BOOL):
    value = getattr(lib, name)
    value.argtypes, value.restype = args, result
    return value


close = fn(K, "CloseHandle", [W.HANDLE])
free = fn(K, "LocalFree", [P], P)
free_sid = fn(A, "FreeSid", [P], P)
create_profile = fn(U, "CreateAppContainerProfile", [W.LPCWSTR, W.LPCWSTR, W.LPCWSTR,
    C.POINTER(SID_ATTRIBUTES), W.DWORD, C.POINTER(P)], C.c_long)
delete_profile = fn(U, "DeleteAppContainerProfile", [W.LPCWSTR], C.c_long)
string_sid = fn(A, "ConvertSidToStringSidW", [P, C.POINTER(P)])
derive = fn(B, "DeriveCapabilitySidsFromName", [W.LPCWSTR, C.POINTER(P), C.POINTER(W.DWORD),
    C.POINTER(P), C.POINTER(W.DWORD)])
attr_init = fn(K, "InitializeProcThreadAttributeList", [P, W.DWORD, W.DWORD, C.POINTER(SIZE)])
attr_set = fn(K, "UpdateProcThreadAttribute", [P, W.DWORD, SIZE, P, SIZE, P, P])
attr_delete = fn(K, "DeleteProcThreadAttributeList", [P], None)
create = fn(K, "CreateProcessW", [W.LPCWSTR, W.LPWSTR, P, P, W.BOOL, W.DWORD, P,
    W.LPCWSTR, C.POINTER(STARTUP_EX), C.POINTER(PROCESS)])
resume = fn(K, "ResumeThread", [W.HANDLE], W.DWORD)
wait = fn(K, "WaitForSingleObject", [W.HANDLE, W.DWORD], W.DWORD)
exit_code = fn(K, "GetExitCodeProcess", [W.HANDLE, C.POINTER(W.DWORD)])
open_token = fn(A, "OpenProcessToken", [W.HANDLE, W.DWORD, C.POINTER(W.HANDLE)])
token_info = fn(A, "GetTokenInformation", [W.HANDLE, C.c_int, P, W.DWORD, C.POINTER(W.DWORD)])
lookup_privilege = fn(A, "LookupPrivilegeValueW", [W.LPCWSTR, W.LPCWSTR, C.POINTER(LUID)])
adjust_privileges = fn(A, "AdjustTokenPrivileges", [W.HANDLE, W.BOOL, P, W.DWORD, P, P])
job_open = fn(K, "OpenJobObjectW", [W.DWORD, W.BOOL, W.LPCWSTR], W.HANDLE)
in_job = fn(K, "IsProcessInJob", [W.HANDLE, W.HANDLE, C.POINTER(W.BOOL)])
job_create = fn(K, "CreateJobObjectW", [P, W.LPCWSTR], W.HANDLE)
job_set = fn(K, "SetInformationJobObject", [W.HANDLE, C.c_int, P, W.DWORD])
job_assign = fn(K, "AssignProcessToJobObject", [W.HANDLE, W.HANDLE])
terminate = fn(K, "TerminateProcess", [W.HANDLE, W.UINT])
open_file = fn(K, "CreateFileW", [W.LPCWSTR, W.DWORD, W.DWORD, P, W.DWORD, W.DWORD, W.HANDLE], W.HANDLE)
get_security = fn(A, "GetSecurityInfo", [W.HANDLE, C.c_int, W.DWORD, P, P, C.POINTER(P), P, C.POINTER(P)], W.DWORD)
acl_entries = fn(A, "SetEntriesInAclW", [W.DWORD, C.POINTER(EXPLICIT_ACCESS), P, C.POINTER(P)], W.DWORD)
sd_init = fn(A, "InitializeSecurityDescriptor", [P, W.DWORD])
sd_dacl = fn(A, "SetSecurityDescriptorDacl", [P, W.BOOL, P, W.BOOL])
sd_get_control = fn(A, "GetSecurityDescriptorControl", [P, C.POINTER(W.WORD), C.POINTER(W.DWORD)])
sd_set_control = fn(A, "SetSecurityDescriptorControl", [P, W.WORD, W.WORD])
set_object_security = fn(N, "NtSetSecurityObject", [W.HANDLE, W.DWORD, P], C.c_long)
nt_error = fn(N, "RtlNtStatusToDosError", [C.c_long], W.DWORD)


def check(value):
    if not value:
        raise C.WinError(C.get_last_error())
    return value


def hresult(value):
    if value < 0:
        raise OSError(f"Windows HRESULT 0x{value & 0xffffffff:08x}")


def capability(name):
    groups, caps = P(), P()
    ng, nc = W.DWORD(), W.DWORD()
    check(derive(name, C.byref(groups), C.byref(ng), C.byref(caps), C.byref(nc)))
    try:
        if nc.value != 1:
            raise RuntimeError("Unexpected capability SID count")
        return C.cast(caps, C.POINTER(P))[0]
    finally:
        for i in range(ng.value):
            free(C.cast(groups, C.POINTER(P))[i])
        free(groups)
        free(caps)


spec_file, report_file = map(Path, sys.argv[1:])
spec = json.loads(spec_file.read_text(encoding="utf-8"))
report_file.parent.mkdir(parents=True, exist_ok=True)
with report_file.open("x", encoding="utf-8") as output:
    output.write("{}\n")
command, cwd, environment = spec["command"], spec["cwd"], spec["environment"]
assert command and all(isinstance(s, str) and "\0" not in s for s in command)
assert Path(command[0]).is_absolute() and Path(cwd).is_dir()
timeout = spec.get("timeoutSeconds", 3000)
assert 1 <= timeout <= 3600
name = spec.get("profile", "Lasm.CI." + str(uuid.uuid4()))
assert re.fullmatch(r"Lasm\.CI\.[0-9a-f]{8}(?:-[0-9a-f]{4}){3}-[0-9a-f]{12}", name)
sid, caps, attribute_buffer = P(), [], None
child = PROCESS()
inner = outer = token = None
files, grants, parents, blocked = [], [], [], []
evidence = {"mechanism": "Windows Less Privileged AppContainer", "profile": name,
            "offline": bool(spec.get("offline")), "status": "starting", "startedAt": time.time()}
less_privileged = spec.get("lessPrivileged", True)
assert less_privileged or spec.get("control") == "ordinary-appcontainer-sentinel"
evidence["allPackagesOptOut"] = less_privileged


def save():
    report_file.write_text(json.dumps(evidence, indent=2) + "\n", encoding="utf-8")


def acl(path, *args):
    subprocess.run([str(Path(os.environ["SystemRoot"]) / "System32/icacls.exe"),
                    str(path), *args], check=True, capture_output=True, timeout=180)


def directory_acl(path, permissions=0x1200a8, mode=1):
    # SetSecurityInfo propagates existing inheritable ACEs across the volume.
    # Its MAXIMUM_ALLOWED escape also requests DELETE, conflicting with live
    # directory handles. Use the documented object-level setter with exactly
    # READ_CONTROL | WRITE_DAC; no data/delete access or inheritance tree walk.
    # https://learn.microsoft.com/windows-hardware/drivers/ddi/ntifs/nf-ntifs-ntsetsecurityobject
    handle = open_file(str(path), 0x60000, 7, None, 3, 0x02000000, None)
    if handle == C.c_void_p(-1).value:
        raise OSError(f"Opening ancestor metadata {path}: {C.WinError(C.get_last_error())}")
    descriptor, old_acl, new_acl = P(), P(), P()

    def success(code):
        if code:
            raise C.WinError(code)
    try:
        success(get_security(handle, 1, 4, None, None, C.byref(old_acl), None, C.byref(descriptor)))
        assert old_acl.value, "Ancestor directory must retain a non-null DACL"
        # READ_ATTRIBUTES | READ_EA | TRAVERSE | READ_CONTROL | SYNCHRONIZE.
        entry = EXPLICIT_ACCESS(permissions, mode, 0, TRUSTEE(None, 0, 0, 0, sid))
        success(acl_entries(1, C.byref(entry), old_acl, C.byref(new_acl)))
        control, revision = W.WORD(), W.DWORD()
        check(sd_get_control(descriptor, C.byref(control), C.byref(revision)))
        updated = SECURITY_DESCRIPTOR()
        check(sd_init(C.byref(updated), revision.value))
        check(sd_dacl(C.byref(updated), True, new_acl, bool(control.value & 8)))
        check(sd_set_control(C.byref(updated), 0x1500, control.value & 0x1500))
        status = set_object_security(handle, 4, C.byref(updated))
        if status < 0:
            raise OSError(f"Updating ancestor metadata {path}: {C.WinError(nt_error(status))}")
    finally:
        if new_acl:
            free(new_acl)
        if descriptor:
            free(descriptor)
        close(handle)


try:
    # Registry reads provide ordinary Windows DLL/runtime configuration. No COM,
    # developer directory, clipboard, broad filesystem or privileged capability.
    names = ["registryRead"] + ([] if spec.get("offline") else ["internetClient"])
    caps = [capability(n) for n in names]
    values = (SID_ATTRIBUTES * len(caps))(*(SID_ATTRIBUTES(s, 4) for s in caps))
    hresult(create_profile(name, name, "Disposable Lasm native CI control", None, 0, C.byref(sid)))
    sid_text_pointer = P()
    check(string_sid(sid, C.byref(sid_text_pointer)))
    try:
        sid_text = C.wstring_at(sid_text_pointer)
    finally:
        free(sid_text_pointer)
    evidence.update(sid=sid_text, capabilities=names)
    allowed_root = Path(spec["disposableRoot"]).resolve()
    assert allowed_root.is_dir() and allowed_root.name.startswith("lasm ")
    # Node resolves every parent component before loading an absolute module.
    # Grant this disposable SID only attributes/traversal on ancestor directories:
    # no file data, listing, inheritance or write access. Remove non-recursively.
    if less_privileged:
        for path in [allowed_root, *allowed_root.parents]:
            directory_acl(path)
            parents.append(path)
        evidence["ancestorMetadata"] = [str(p) for p in parents]
        # Program Files commonly grants ALL RESTRICTED APPLICATION PACKAGES
        # access, including developer tools such as Git. A per-SID traversal
        # deny plus removal of bypass-traversal privilege closes those trees
        # without rewriting ACLs on their descendants. Ordinary OS files remain.
        roots = [os.environ.get(k) for k in ("ProgramFiles", "ProgramFiles(x86)", "ProgramW6432", "RUNNER_TOOL_CACHE", "MSYS2_LOCATION")]
        roots.append(str(Path(os.environ["SystemRoot"]).anchor + "msys64"))
        for path in dict.fromkeys(Path(p).resolve() for p in roots if p):
            if not path.is_dir():
                continue
            assert path != allowed_root and path not in allowed_root.parents and allowed_root not in path.parents
            directory_acl(path, 0x21, 3)  # DENY_ACCESS: list directory + traverse.
            blocked.append(path)
        evidence["blockedDevelopmentDirectories"] = [str(p) for p in blocked]
    # File data/execute/write grants stay inside the disposable test root.
    for mode in ("reads", "writes"):
        for item in spec.get(mode, []):
            path = Path(item).resolve()
            assert path == allowed_root or allowed_root in path.parents
            inheritance = "(OI)(CI)" if path.is_dir() else ""
            acl(path, "/grant:r", f"*{sid_text}:{inheritance}{'M' if mode == 'writes' else 'RX'}", "/T", "/Q")
            grants.append(path)
            if mode == "writes":
                acl(path, "/setintegritylevel", inheritance + "L", "/T", "/Q")
    evidence["grants"] = [str(p) for p in grants]
    length = SIZE()
    count = 3 if less_privileged else 2
    attr_init(None, count, 0, C.byref(length))
    attribute_buffer = C.create_string_buffer(length.value)
    check(attr_init(attribute_buffer, count, 0, C.byref(length)))
    security = CAPABILITIES(sid, values, len(caps), 0)
    policy = W.DWORD(1)  # PROCESS_CREATION_ALL_APPLICATION_PACKAGES_OPT_OUT
    check(attr_set(attribute_buffer, 0, 0x20009, C.byref(security), C.sizeof(security), None, None))
    if less_privileged:
        check(attr_set(attribute_buffer, 0, 0x2000f, C.byref(policy), C.sizeof(policy), None, None))
    files = [open(os.devnull, "rb"), open(str(report_file) + ".stdout", "xb"), open(str(report_file) + ".stderr", "xb")]
    handles = (W.HANDLE * 3)(*(msvcrt.get_osfhandle(f.fileno()) for f in files))
    for h in handles:
        os.set_handle_inheritable(h, True)
    check(attr_set(attribute_buffer, 0, 0x20002, handles, C.sizeof(handles), None, None))
    startup = STARTUP_EX()
    startup.startup.cb = C.sizeof(startup)
    startup.startup.flags = 0x100  # STARTF_USESTDHANDLES
    startup.startup.stdin, startup.startup.stdout, startup.startup.stderr = handles
    startup.attributes = C.cast(attribute_buffer, P)
    assert all("\0" not in k + v and "=" not in k for k, v in environment.items())
    env = C.create_unicode_buffer("\0".join(k + "=" + v for k, v in sorted(environment.items(), key=lambda x: x[0].upper())) + "\0\0")
    invocation = C.create_unicode_buffer(subprocess.list2cmdline(command))
    check(create(command[0], invocation, None, None, True, 0x80000 | 0x400 | 0x4 | 0x08000000,
                 env, cwd, C.byref(startup), C.byref(child)))
    outer_name = os.environ.get("LASM_RESOURCE_UNIT", "")
    assert outer_name.startswith("Local\\LasmResource-")
    outer = check(job_open(4, False, outer_name))
    member = W.BOOL()
    check(in_job(child.process, outer, C.byref(member)))
    assert member.value, "LPAC must inherit the capped outer Job Object"
    inner = check(job_create(None, None))
    limits = EXTENDED_LIMIT()
    limits.basic.flags = 0x2000
    check(job_set(inner, 9, C.byref(limits), C.sizeof(limits)))
    check(job_assign(inner, child.process))
    token = W.HANDLE()
    check(open_token(child.process, 8 | (0x20 if less_privileged else 0), C.byref(token)))
    if less_privileged:
        luid = LUID()
        check(lookup_privilege(None, "SeChangeNotifyPrivilege", C.byref(luid)))
        remove = TOKEN_PRIVILEGES(1, (LUID_ATTRIBUTES * 1)(LUID_ATTRIBUTES(luid, 4)))
        check(adjust_privileges(token, False, C.byref(remove), 0, None, None))
        privileges, used = C.create_string_buffer(4096), W.DWORD()
        check(token_info(token, 3, privileges, C.sizeof(privileges), C.byref(used)))
        count = C.cast(privileges, C.POINTER(W.DWORD))[0]
        assert count <= 128
        entries = C.cast(C.addressof(privileges) + TOKEN_PRIVILEGES.privileges.offset, C.POINTER(LUID_ATTRIBUTES))
        assert all((entries[i].luid.low, entries[i].luid.high) != (luid.low, luid.high) for i in range(count))
        evidence["traverseBypassRemoved"] = True
    actual = {}
    # GetTokenInformation does not implement the SDK's reserved LPAC enum on
    # these hosts. Verify AppContainer here; native controls independently prove
    # LPAC by denying a file readable by ALL APPLICATION PACKAGES, and run an
    # ordinary AppContainer positive control against the same unchanged file.
    for label, number in [("appContainer", 29)]:
        value, used = W.DWORD(), W.DWORD()
        check(token_info(token, number, C.byref(value), C.sizeof(value), C.byref(used)))
        assert value.value == 1, f"Missing {label} token restriction"
        actual[label] = True
    evidence.update(status="running", pid=child.pid, token=actual, inheritedCappedJob=outer_name)
    save()
    assert resume(child.thread) != 0xffffffff
    started = time.monotonic()
    while wait(child.process, 200) == 258:
        if time.monotonic() - started > timeout:
            evidence["stoppedBecause"] = "time-limit"
            check(terminate(child.process, 124))
        if any(Path(str(report_file) + ext).stat().st_size > 4 * 1024 ** 2 for ext in (".stdout", ".stderr")):
            evidence["stoppedBecause"] = "output-limit"
            check(terminate(child.process, 125))
    code = W.DWORD()
    check(exit_code(child.process, C.byref(code)))
    evidence.update(exitCode=code.value, status="passed" if code.value == 0 else "failed")
except BaseException as error:
    evidence.update(status="isolation-error", error=str(error))
    if child.process:
        terminate(child.process, 125)
    raise
finally:
    if inner:
        close(inner)  # Kill any descendant left after the command completes.
    for handle in (token, outer, child.thread, child.process):
        if handle:
            close(handle)
    for file in files:
        file.close()
    if attribute_buffer is not None:
        attr_delete(attribute_buffer)
    for path in reversed(grants):
        try:
            acl(path, "/remove:g", "*" + sid_text, "/T", "/Q")
        except Exception as error:
            evidence.setdefault("cleanupErrors", []).append(str(error))
    for path in reversed([*parents, *blocked]):
        try:
            directory_acl(path, 0, 4)
        except Exception as error:
            evidence.setdefault("cleanupErrors", []).append(str(error))
    if sid:
        value = delete_profile(name)
        if value < 0:
            evidence.setdefault("cleanupErrors", []).append(f"DeleteAppContainerProfile: {value}")
        free_sid(sid)
    for value in caps:
        free(value)
    evidence.update(finishedAt=time.time(), descendantsReleased=bool(inner))
    save()
    print(json.dumps(evidence), flush=True)
if evidence.get("cleanupErrors"):
    raise SystemExit(125)
raise SystemExit(evidence.get("exitCode", 125))
