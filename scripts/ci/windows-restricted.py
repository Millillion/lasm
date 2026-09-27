"""CI-only stock-Node prerequisite controls using a Windows restricted token.

Remove every privilege, including traversal bypass; deny development/source roots
with object-only ACL entries. This is not an adversarial sandbox. All descendants
retain the capped Job Object. AppContainer is unsuitable for pinned stock Node: its
libuv pipe-name retry loop predates the upstream AppContainer compatibility fix.
"""
import base64
import ctypes as C
from ctypes import wintypes as W
import json
import msvcrt
import os
from pathlib import Path
import subprocess
import sys
import time
import uuid

if sys.platform != "win32":
    raise SystemExit("Native Windows is required")

K = C.WinDLL("kernel32", use_last_error=True)
A = C.WinDLL("advapi32", use_last_error=True)
N = C.WinDLL("ntdll", use_last_error=True)
P = C.c_void_p
SIZE = C.c_size_t


class SID_ATTRIBUTES(C.Structure):
    _fields_ = [("sid", P), ("attributes", W.DWORD)]


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
current_process = fn(K, "GetCurrentProcess", [], W.HANDLE)
free = fn(K, "LocalFree", [P], P)
attr_init = fn(K, "InitializeProcThreadAttributeList", [P, W.DWORD, W.DWORD, C.POINTER(SIZE)])
attr_set = fn(K, "UpdateProcThreadAttribute", [P, W.DWORD, SIZE, P, SIZE, P, P])
attr_delete = fn(K, "DeleteProcThreadAttributeList", [P], None)
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


def object_acl(path, permissions=0x1200a8, mode=1):
    # SetSecurityInfo propagates existing inheritable ACEs across the volume.
    # Its MAXIMUM_ALLOWED escape also requests DELETE, conflicting with live
    # directory handles. Use the documented object-level setter with exactly
    # READ_CONTROL | WRITE_DAC; no data/delete access or inheritance tree walk.
    # https://learn.microsoft.com/windows-hardware/drivers/ddi/ntifs/nf-ntifs-ntsetsecurityobject
    handle = open_file(str(path), 0x60000, 7, None, 3, 0x02000000, None)
    if handle == C.c_void_p(-1).value and C.get_last_error() == 5:
        # TrustedInstaller owns Program Files. The administrative CI launcher
        # can obtain this narrowly scoped handle with backup/restore semantics;
        # restore its privilege immediately, before any consumer is created.
        # Do not take ownership or change any existing principal's permissions.
        privileged = W.HANDLE()
        check(open_token(current_process(), 0x28, C.byref(privileged)))
        previous, used = TOKEN_PRIVILEGES(), W.DWORD()
        try:
            luid = LUID()
            check(lookup_privilege(None, "SeRestorePrivilege", C.byref(luid)))
            enable = TOKEN_PRIVILEGES(1, (LUID_ATTRIBUTES * 1)(LUID_ATTRIBUTES(luid, 2)))
            check(adjust_privileges(privileged, False, C.byref(enable), C.sizeof(previous), C.byref(previous), C.byref(used)))
            if C.get_last_error() != 0:
                raise C.WinError(C.get_last_error())
            handle = open_file(str(path), 0x60000, 7, None, 3, 0x02000000, None)
            error = C.get_last_error()
        finally:
            try:
                if previous.count:
                    check(adjust_privileges(privileged, False, C.byref(previous), 0, None, None))
            finally:
                close(privileged)
        if handle == C.c_void_p(-1).value:
            raise OSError(f"Opening protected CI path {path}: {C.WinError(error)}")
    if handle == C.c_void_p(-1).value:
        raise OSError(f"Opening CI path {path}: {C.WinError(C.get_last_error())}")
    descriptor, old_acl, new_acl = P(), P(), P()

    def success(code):
        if code:
            raise C.WinError(code)
    try:
        success(get_security(handle, 1, 4, None, None, C.byref(old_acl), None, C.byref(descriptor)))
        assert old_acl.value, "Controlled object must retain a non-null DACL"
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
            raise OSError(f"Updating CI path {path}: {C.WinError(nt_error(status))}")
    finally:
        if new_acl:
            free(new_acl)
        if descriptor:
            free(descriptor)
        close(handle)


class TOKEN_GROUPS(C.Structure):
    _fields_ = [("count", W.DWORD), ("groups", SID_ATTRIBUTES * 1)]

restricted_token = fn(A, "CreateRestrictedToken", [W.HANDLE, W.DWORD, W.DWORD, P,
    W.DWORD, P, W.DWORD, P, C.POINTER(W.HANDLE)])
create_as_user = fn(A, "CreateProcessAsUserW", [W.HANDLE, W.LPCWSTR, W.LPWSTR, P, P,
    W.BOOL, W.DWORD, P, W.LPCWSTR, C.POINTER(STARTUP_EX), C.POINTER(PROCESS)])
parse_sid = fn(A, "ConvertStringSidToSidW", [W.LPCWSTR, C.POINTER(P)])
equal_sid = fn(A, "EqualSid", [P, P])
is_restricted = fn(A, "IsTokenRestricted", [W.HANDLE])
set_token_info = fn(A, "SetTokenInformation", [W.HANDLE, C.c_int, P, W.DWORD])


def info(handle, number):
    size = W.DWORD()
    token_info(handle, number, None, 0, C.byref(size))
    assert size.value
    buffer = C.create_string_buffer(size.value)
    check(token_info(handle, number, buffer, size, C.byref(size)))
    return buffer


def powershell(script):
    encoded = base64.b64encode(("$ErrorActionPreference = 'Stop'; " + script).encode("utf-16-le")).decode("ascii")
    return subprocess.run([str(Path(os.environ["SystemRoot"]) / "System32/WindowsPowerShell/v1.0/powershell.exe"),
        "-NoProfile", "-NonInteractive", "-EncodedCommand", encoded],
        check=True, capture_output=True, timeout=180, encoding="utf-8", errors="replace")


def literal(text):
    return "'" + str(text).replace("'", "''") + "'"


assert os.environ.get("GITHUB_ACTIONS") == "true" and os.environ.get("GITHUB_REPOSITORY") == "Millillion/lasm", \
    "CI ACL/firewall controls run only in this repository's disposable hosted VMs"
spec_file, report_file = map(Path, sys.argv[1:])
spec = json.loads(spec_file.read_text(encoding="utf-8"))
command, cwd, environment = spec["command"], spec["cwd"], spec["environment"]
assert command and all(isinstance(s, str) and "\0" not in s for s in command)
assert Path(command[0]).is_absolute() and Path(cwd).is_dir()
allowed_root = Path(spec["disposableRoot"]).resolve()
assert allowed_root.is_dir() and allowed_root.name.startswith("lasm ")
timeout = spec.get("timeoutSeconds", 3000)
assert 1 <= timeout <= 3600
startup_probe = spec.get("startupProbe")
if startup_probe:
    assert startup_probe in ("no-acls", "keep-traversal", "no-restricting-sids", "ordinary-token")
    assert len(command) == 3 and command[1] == "--eval" and not spec.get("offline")
    assert command[2] == 'console.error("pipe probe started"); process.stdout.write(require("node:child_process").execFileSync(process.execPath,["--version"]))'
report_file.parent.mkdir(parents=True, exist_ok=True)
with report_file.open("x", encoding="utf-8") as output:
    output.write("{}\n")
identity = uuid.uuid4()
sid_text = "S-1-5-21-" + "-".join(str(int.from_bytes(identity.bytes[i:i+4], "little")) for i in (0, 4, 8)) + "-1001"
sid, admin_sid = P(), P()
original = restricted = outer = inner = token = None
child = PROCESS()
attribute_buffer = None
files, changed = [], []
firewall_group = "Lasm.CI." + str(identity)
firewall_state = Path(str(report_file) + ".firewall.json")
firewall_attempted = False
evidence = {"mechanism": "Windows restricted token, explicit ACL denials and scoped outbound firewall rules",
    "scope": "CI prerequisite and copied-deployment checks, not an adversarial security sandbox",
    "sid": sid_text, "offline": bool(spec.get("offline")), "status": "starting", "startedAt": time.time()}
if startup_probe: evidence["startupProbe"] = startup_probe


def save():
    report_file.write_text(json.dumps(evidence, indent=2) + "\n", encoding="utf-8")


def deny(path, permissions):
    path = Path(path).resolve()
    object_acl(path, permissions, 3)
    if path not in changed:
        changed.append(path)


try:
    check(parse_sid(sid_text, C.byref(sid)))
    check(parse_sid("S-1-5-32-544", C.byref(admin_sid)))
    original = W.HANDLE()
    check(open_token(current_process(), 0x8b, C.byref(original)))
    user, groups, privileges = info(original, 1), info(original, 2), info(original, 3)
    user_sid = C.cast(user, C.POINTER(SID_ATTRIBUTES))[0].sid
    count = C.cast(groups, C.POINTER(W.DWORD))[0]
    entries = (SID_ATTRIBUTES * count).from_buffer(groups, TOKEN_GROUPS.groups.offset)
    # Preserve ordinary OS access checks, adding a unique restricting SID for
    # this invocation's explicit denials. Administrators cannot grant access.
    allowed = [user_sid, sid]
    allowed.extend(e.sid for e in entries if e.attributes & 4 and not e.attributes & 16 and not equal_sid(e.sid, admin_sid))
    restrictions = (SID_ATTRIBUTES * len(allowed))(*(SID_ATTRIBUTES(s, 0) for s in allowed))
    disabled = SID_ATTRIBUTES(admin_sid, 0)
    privilege_count = C.cast(privileges, C.POINTER(W.DWORD))[0]
    deleted = (LUID_ATTRIBUTES * privilege_count).from_buffer(privileges, TOKEN_PRIVILEGES.privileges.offset)
    restricted = W.HANDLE()
    ordinary = startup_probe == "ordinary-token"
    restricting = startup_probe not in ("no-restricting-sids", "ordinary-token")
    check(restricted_token(original, 1 if startup_probe == "keep-traversal" else 0,
        0 if ordinary else 1, None if ordinary else C.byref(disabled),
        0 if ordinary else privilege_count, None if ordinary else deleted,
        len(restrictions) if restricting else 0, restrictions if restricting else None, C.byref(restricted)))
    # An elevated runner's default object ACL can name only SYSTEM and
    # Administrators. Its non-admin child must still access its own newly
    # created process, thread and pipe objects. Update only the new token's
    # default ACL; existing filesystem denials are unaffected.
    default = info(restricted, 6)
    old_default = C.cast(default, C.POINTER(P))[0]
    new_default = P()
    defaults = (EXPLICIT_ACCESS * 2)(*(EXPLICIT_ACCESS(0x10000000, 1, 0,
        TRUSTEE(None, 0, 0, 0, s)) for s in (user_sid, sid)))
    error = acl_entries(2, defaults, old_default, C.byref(new_default))
    if error: raise C.WinError(error)
    try: check(set_token_info(restricted, 6, C.byref(new_default), C.sizeof(P)))
    finally: free(new_default)
    actual_privileges = C.cast(info(restricted, 3), C.POINTER(W.DWORD))[0]
    if not startup_probe:
        assert is_restricted(restricted) and actual_privileges == 0
    evidence["token"] = {"restricted": bool(is_restricted(restricted)), "privileges": actual_privileges,
        "traversalBypass": startup_probe in ("keep-traversal", "ordinary-token"), "privateObjectDacl": True}

    roots = [os.environ.get(k) for k in ("ProgramFiles", "ProgramFiles(x86)", "ProgramW6432", "RUNNER_TOOL_CACHE", "MSYS2_LOCATION")]
    roots.append(str(Path(os.environ["SystemRoot"]).anchor + "msys64"))
    developer_roots = sorted({str(Path(p).resolve()) for p in roots if p and Path(p).exists()})
    for path in ([] if startup_probe else [*developer_roots, *spec.get("denied", [])]):
        target = Path(path).resolve()
        assert target.exists() and target != allowed_root and target not in allowed_root.parents
        deny(target, 0x21)  # FILE_READ_DATA/LIST_DIRECTORY | FILE_EXECUTE/TRAVERSE
    evidence["blockedDevelopmentRoots"] = [] if startup_probe else developer_roots
    evidence["deniedInputs"] = [] if startup_probe else spec.get("denied", [])
    # Explicit write bits exclude SYNCHRONIZE and READ_CONTROL, which generic
    # FILE_GENERIC_WRITE also contains and would accidentally deny reads.
    read_only_start = len(changed)
    for value in ([] if startup_probe else spec.get("reads", [])):
        path = Path(value).resolve()
        assert path == allowed_root or allowed_root in path.parents
        deny(path, 0xd0156)
        if path.is_dir():
            for child_path in path.rglob("*"):
                assert not child_path.is_symlink() and not child_path.is_junction()
                deny(child_path, 0xd0156)
    evidence["readOnlyObjects"] = len(changed) - read_only_start
    save()

    if spec.get("offline"):
        # Cover stock Node and all provisioned executable children. No process
        # in the application environment receives PowerShell or firewall rights.
        programs = {str(Path(command[0]).resolve())}
        for value in [*spec.get("reads", []), *spec.get("writes", [])]:
            path = Path(value).resolve()
            if path.is_file() and path.suffix.lower() == ".exe": programs.add(str(path))
            elif path.is_dir(): programs.update(str(p.resolve()) for p in path.rglob("*.exe") if p.is_file())
        program_file = Path(str(report_file) + ".programs.json")
        program_file.write_text(json.dumps(sorted(programs)), encoding="utf-8")
        firewall_attempted = True
        powershell("$profiles = @(Get-NetFirewallProfile); $profiles | Select-Object Name,Enabled | ConvertTo-Json | Set-Content -LiteralPath " + literal(firewall_state) + " -Encoding utf8; "
            "Set-NetFirewallProfile -Profile Domain,Private,Public -Enabled True; "
            "$programs = Get-Content -Raw -LiteralPath " + literal(program_file) + " | ConvertFrom-Json; $index = 0; "
            "foreach ($program in $programs) { New-NetFirewallRule -Name (" + literal(firewall_group) + " + '.' + $index) -DisplayName 'Lasm disposable offline control' -Group " + literal(firewall_group) + " -Program $program -Direction Outbound -Action Block -Enabled True -Profile Any | Out-Null; $index++ }; "
            "if (@(Get-NetFirewallRule -Group " + literal(firewall_group) + ").Count -ne $programs.Count) { throw 'Missing offline rule' }")
        evidence["offlinePrograms"] = sorted(programs)
        save()

    length = SIZE()
    attr_init(None, 1, 0, C.byref(length))
    attribute_buffer = C.create_string_buffer(length.value)
    check(attr_init(attribute_buffer, 1, 0, C.byref(length)))
    files = [open(os.devnull, "rb"), open(str(report_file) + ".stdout", "xb"), open(str(report_file) + ".stderr", "xb")]
    handles = (W.HANDLE * 3)(*(msvcrt.get_osfhandle(f.fileno()) for f in files))
    for h in handles: os.set_handle_inheritable(h, True)
    check(attr_set(attribute_buffer, 0, 0x20002, handles, C.sizeof(handles), None, None))
    startup = STARTUP_EX()
    startup.startup.cb, startup.startup.flags = C.sizeof(startup), 0x100
    startup.startup.stdin, startup.startup.stdout, startup.startup.stderr = handles
    startup.attributes = C.cast(attribute_buffer, P)
    assert all("\0" not in k + v and "=" not in k for k, v in environment.items())
    env = C.create_unicode_buffer("\0".join(k + "=" + v for k, v in sorted(environment.items(), key=lambda x: x[0].upper())) + "\0\0")
    invocation = C.create_unicode_buffer(subprocess.list2cmdline(command))
    check(create_as_user(restricted, command[0], invocation, None, None, True,
        0x80000 | 0x400 | 0x4 | 0x08000000, env, cwd, C.byref(startup), C.byref(child)))
    outer_name = os.environ.get("LASM_RESOURCE_UNIT", "")
    assert outer_name.startswith("Local\\LasmResource-")
    outer = check(job_open(4, False, outer_name))
    member = W.BOOL()
    check(in_job(child.process, outer, C.byref(member)))
    assert member.value, "Consumer must inherit the capped outer Job Object"
    inner = check(job_create(None, None))
    limits = EXTENDED_LIMIT(); limits.basic.flags = 0x2000
    check(job_set(inner, 9, C.byref(limits), C.sizeof(limits)))
    check(job_assign(inner, child.process))
    token = W.HANDLE()
    check(open_token(child.process, 8, C.byref(token)))
    if not startup_probe:
        assert is_restricted(token) and C.cast(info(token, 3), C.POINTER(W.DWORD))[0] == 0
    assert C.cast(info(token, 29), C.POINTER(W.DWORD))[0] == 0, "Use ordinary Node pipe namespaces, not AppContainer"
    evidence.update(status="running", pid=child.pid, inheritedCappedJob=outer_name)
    save()
    assert resume(child.thread) != 0xffffffff
    started = time.monotonic()
    while wait(child.process, 200) == 258:
        if time.monotonic() - started > timeout:
            evidence["stoppedBecause"] = "time-limit"; check(terminate(child.process, 124))
        if any(Path(str(report_file) + ext).stat().st_size > 4 * 1024 ** 2 for ext in (".stdout", ".stderr")):
            evidence["stoppedBecause"] = "output-limit"; check(terminate(child.process, 125))
    code = W.DWORD(); check(exit_code(child.process, C.byref(code)))
    evidence.update(exitCode=code.value, status="passed" if code.value == 0 else "failed")
except BaseException as error:
    evidence.update(status="isolation-error", error=str(error))
    if child.process: terminate(child.process, 125)
    raise
finally:
    if inner: close(inner)
    for handle in (token, outer, child.thread, child.process, restricted, original):
        if handle: close(handle)
    for file in files: file.close()
    if attribute_buffer is not None: attr_delete(attribute_buffer)
    if firewall_attempted:
        try:
            powershell("Get-NetFirewallRule -Group " + literal(firewall_group) + " -ErrorAction SilentlyContinue | Remove-NetFirewallRule; "
                "if (Test-Path -LiteralPath " + literal(firewall_state) + ") { $previous = Get-Content -Raw -LiteralPath " + literal(firewall_state) + " | ConvertFrom-Json; "
                "foreach ($profile in $previous) { Set-NetFirewallProfile -Name $profile.Name -Enabled $profile.Enabled } }; "
                "if (@(Get-NetFirewallRule -Group " + literal(firewall_group) + " -ErrorAction SilentlyContinue).Count) { throw 'Offline rules not removed' }")
            evidence["firewallRestored"] = True
        except Exception as error: evidence.setdefault("cleanupErrors", []).append(str(error))
    for path in reversed(changed):
        try: object_acl(path, 0, 4)
        except Exception as error: evidence.setdefault("cleanupErrors", []).append(str(error))
    if sid: free(sid)
    if admin_sid: free(admin_sid)
    evidence.update(finishedAt=time.time(), descendantsReleased=bool(inner))
    save(); print(json.dumps(evidence), flush=True)
if evidence.get("cleanupErrors"): raise SystemExit(125)
raise SystemExit(evidence.get("exitCode", 125))
