"""Add Linux Landlock file-access restrictions before executing a test command.

Unlike user namespaces, this works under the existing systemd resource guard.
It only removes permissions; it changes no host policy, user, or cgroup limit.
"""
import ctypes
import json
import os
import sys

if sys.platform != 'linux' or os.uname().machine not in ('x86_64', 'aarch64'):
    raise SystemExit('This control requires Linux x64 or ARM64')
if len(sys.argv) < 4 or sys.argv[2] != '--':
    raise SystemExit('Usage: restrict-filesystem.py RULES_JSON -- COMMAND [ARG...]')
with open(sys.argv[1]) as stream:
    config = json.load(stream)
libc = ctypes.CDLL(None, use_errno=True)
libc.syscall.restype = ctypes.c_long
create_ruleset, add_rule, restrict_self = 444, 445, 446
abi = libc.syscall(create_ruleset, ctypes.c_void_p(), ctypes.c_size_t(0), ctypes.c_uint(1))
if abi < 3:
    raise SystemExit(f'Landlock ABI 3 or newer is required, received {abi}')


class Ruleset(ctypes.Structure):
    _fields_ = [('handled_access_fs', ctypes.c_uint64)]


class PathBeneath(ctypes.Structure):
    _pack_ = 1
    _fields_ = [('allowed_access', ctypes.c_uint64), ('parent_fd', ctypes.c_int32)]


def checked(result, action):
    if result < 0:
        raise OSError(ctypes.get_errno(), action)
    return result


# All filesystem operations defined through ABI 3, plus device ioctl on ABI 5+.
# Network access is unchanged. The runtime controls exercise a permitted local
# network separately; installation requires HTTPS to the pinned upstream URLs.
handled = (1 << (16 if abi >= 5 else 15)) - 1
ruleset = Ruleset(handled)
descriptor = checked(libc.syscall(create_ruleset, ctypes.byref(ruleset), ctypes.sizeof(ruleset), 0), 'create Landlock ruleset')
try:
    for entry in config['allow']:
        path = os.path.realpath(entry['path'])
        permissions = {'read': 4 | 8, 'execute': 1 | 4 | 8, 'write': handled}[entry['access']]
        if not os.path.isdir(path):
            permissions &= 1 | 2 | 4 | (1 << 14) | (1 << 15)
        parent = os.open(path, os.O_PATH | os.O_CLOEXEC)
        try:
            rule = PathBeneath(permissions, parent)
            checked(libc.syscall(add_rule, descriptor, 1, ctypes.byref(rule), 0), f'allow {path}')
        finally:
            os.close(parent)
    checked(libc.prctl(38, 1, 0, 0, 0), 'set no_new_privs')
    checked(libc.syscall(restrict_self, descriptor, 0), 'restrict filesystem')
finally:
    os.close(descriptor)

environment = config.get('environment', {})
print(f'[lasm] Landlock ABI {abi}: filesystem access restricted before execution', file=sys.stderr, flush=True)
os.execve(sys.argv[3], sys.argv[3:], environment)
