import { spawn } from 'node:child_process';
import { realpath } from 'node:fs/promises';
import { constants } from 'node:os';
import { resolve, isAbsolute, sep } from 'node:path';
import { nativeFiles } from './native-files.mjs';
import { numbers } from './node-host.mjs';

export function createNodeProcesses({ add, get, release, cwd }) {
  function decode(bytes) {
    let offset = 0;
    const number = () => { const n = Number(bytes.readBigUInt64LE(offset)); offset += 8; return n; };
    const string = () => {
      const length = number();
      const value = bytes.subarray(offset, offset += length).toString();
      if (value.includes('\0')) throw Object.assign(new Error('string contains NUL bytes'), { code: 'EINVAL', errno: 22, nativeMessage: true });
      return value;
    };
    const modes = [number(), number(), number()];
    const inherit = !!number(), setsid = !!number(), argc = number(), envc = number(), hasCwd = number();
    const command = string(), args = Array.from({ length: argc }, string);
    let directory = cwd();
    if (hasCwd) {
      const value = string();
      // POSIX chdir resolves symlinks before subsequent '..' components. Keep
      // that resolution in the OS, as for ordinary Lean filesystem paths.
      directory = process.platform === 'win32' ? resolve(directory, value)
        : isAbsolute(value) ? value : directory + sep + value;
    }
    const env = inherit ? { ...process.env } : {};
    for (let i = 0; i < envc; i++) {
      const key = string(), present = number();
      if (present) env[key] = string(); else delete env[key];
    }
    return { modes, command, args, directory, env, setsid };
  }
  async function start(bytes) {
    const options = decode(bytes), native = nativeFiles();
    // Deno's Node-compatible spawn normalizes cwd lexically. Resolve it with
    // the OS first so a symlink followed by '..' retains native Lean behavior.
    if (process.versions.deno && process.platform !== 'win32') options.directory = await realpath(options.directory);
    const ours = [], theirs = [];
    try {
      const stdio = options.modes.map((mode, index) => {
        if (mode !== 0) { ours.push(0); return mode === 1 ? 'inherit' : 'ignore'; }
        const fds = native.pipe();
        const parentFd = fds[index === 0 ? 1 : 0], childFd = fds[index === 0 ? 0 : 1];
        theirs.push(childFd);
        ours.push(add(native.openDescriptor(parentFd, index === 0 ? 'w' : 'r')));
        return childFd;
      });
      const child = spawn(options.command, options.args, { cwd: options.directory, env: options.env, stdio,
        detached: options.setsid && process.platform !== 'win32', windowsHide: false });
      const resource = { type: 'process', child, setsid: options.setsid, reaped: false };
      resource.exit = new Promise(resolve => {
        child.once('exit', (code, signal) => { resource.code = code ?? 128 + (constants.signals[signal] ?? 0); resolve(resource.code); });
      });
      await new Promise((resolve, reject) => { child.once('spawn', resolve); child.once('error', reject); });
      // Dropping a native Child does not kill its process. Its own exit listener
      // still reaps the OS child while the host is alive, but the dropped handle
      // must not prevent the JavaScript process from exiting.
      resource.close = () => child.unref();
      return numbers(add(resource), child.pid, ...ours);
    } catch (err) { for (const id of ours) if (id) release(id); throw err; }
    finally { for (const fd of theirs) native.closeDescriptor(fd); }
  }
  function reap(resource, code) {
    if (process.platform !== 'win32' && resource.reaped) throw nativeFiles().error(constants.errno.ECHILD);
    resource.reaped = true; return code;
  }
  return { dispatch(op, id, arg, bytes) {
    if (op === 80) return start(bytes);
    if (op === 85) return numbers(process.pid);
    const p = get(id, 'process');
    switch (op) {
    case 81: return numbers(p.child.pid);
    case 82: return p.exit.then(code => numbers(reap(p, code)));
    case 83: return p.code === undefined ? numbers(0) : numbers(1, reap(p, p.code));
    case 84:
      if (p.setsid && process.platform !== 'win32') {
        // A group can outlive its leader, even after wait reaps that leader.
        try { process.kill(-p.child.pid, 'SIGKILL'); }
        catch (error) { throw nativeFiles().fromNodeError(error); }
      }
      else if (process.platform !== 'win32' && p.reaped) {
        // ChildProcess.kill silently returns false after its exit event. Lean's
        // ordinary wait/tryWait consume the child and subsequent kill is ESRCH.
        throw nativeFiles().error(constants.errno.ESRCH);
      }
      else p.child.kill('SIGKILL');
      return Buffer.alloc(0);
    default: throw new Error(`Unknown process operation ${op}`);
    }
  } };
}
