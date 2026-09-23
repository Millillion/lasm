import { spawn } from 'node:child_process';
import { constants } from 'node:os';
import { resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { nativeFiles } from './native-files.mjs';
import { spawnInheritedProcess } from './native-process.mjs';
import { numbers } from './node-host.mjs';

export function createNodeProcesses({ add, get, release, cwd, flushStdout = async () => {} }) {
  function decode(bytes, state) {
    let offset = 0;
    const number = () => { const n = Number(bytes.readBigUInt64LE(offset)); offset += 8; return n; };
    const string = () => {
      const length = number();
      const value = bytes.subarray(offset, offset += length).toString();
      const nul = value.indexOf('\0');
      if (nul >= 0) {
        // Lean's POSIX process implementation passes these strings directly to
        // chdir/execvp/setenv. Keep their C-string semantics; IO.FS separately
        // rejects embedded NULs and must retain that behavior.
        if (process.platform !== 'win32') return value.slice(0, nul);
        throw Object.assign(new Error('string contains NUL bytes'), { code: 'EINVAL', errno: 22, nativeMessage: true });
      }
      return value;
    };
    const modes = [number(), number(), number()];
    const inherit = !!number(), setsid = !!number(), argc = number(), envc = number(), hasCwd = number();
    const command = string(), args = Array.from({ length: argc }, string);
    let { directory, directoryFd, inheritProcessCwd } = cwd(state), requestedCwd;
    if (hasCwd) {
      const value = string();
      // Retain even an empty path: native chdir("") fails in the child. The
      // OS also resolves symlinks and '..', without JS path normalization.
      if (process.platform === 'win32') directory = resolve(directory, value);
      else requestedCwd = value;
    }
    const env = Object.assign(Object.create(null), inherit ? process.env : {});
    const rawEnvironment = process.platform === 'win32' ? undefined
      : inherit ? nativeFiles().environmentEntries() : [];
    for (let i = 0; i < envc; i++) {
      const key = string(), present = number();
      const value = present ? string() : undefined;
      if (present) env[key] = value; else delete env[key];
      // Native Lean ignores failed setenv/unsetenv for invalid keys. Compare
      // valid keys as bytes so malformed inherited names are never decoded.
      if (rawEnvironment && key && !key.includes('=')) {
        const name = Buffer.from(key);
        const index = rawEnvironment.findIndex(([entry]) => entry.equals(name));
        if (present) {
          const pair = [name, Buffer.from(value)];
          if (index < 0) rawEnvironment.push(pair); else rawEnvironment[index] = pair;
        } else {
          for (let j = rawEnvironment.length - 1; j >= 0; j--)
            if (rawEnvironment[j][0].equals(name)) rawEnvironment.splice(j, 1);
        }
      }
    }
    // This private payload travels over an inherited pipe, never argv/logs.
    const envBytes = rawEnvironment?.map(pair => pair.map(bytes => bytes.toString('base64')));
    return { modes, command, args, directory, directoryFd, inheritProcessCwd, requestedCwd, env, envBytes, setsid };
  }
  async function start(bytes, state) {
    const options = decode(bytes, state), native = nativeFiles();
    // Native Lean flushes std::cout only when the child inherits stdin. A
    // failed implicit flush does not stop it from attempting the spawn.
    if (options.modes[0] === 1) await flushStdout().catch(() => {});
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
      const posix = process.platform !== 'win32';
      const stdioFlags = posix ? stdio.map((fd, index) => fd === 'ignore' ? 0
        : native.descriptorFlags(typeof fd === 'number' ? fd : index)) : undefined;
      const helper = fileURLToPath(new URL('./process-exec.mjs', import.meta.url));
      const inheritedNative = process.platform === 'linux' && !!process.versions.deno;
      const child = inheritedNative
        ? spawnInheritedProcess(undefined, [],
          [...stdio, ...(options.directoryFd === undefined ? [] : [options.directoryFd])], { ...options, stdioFlags }, true)
        : posix
        ? spawn(process.execPath, [...(process.versions.deno ? ['run', '--no-config', '-A'] : []), helper],
          { cwd: options.inheritProcessCwd ? undefined : '/', env: {},
            stdio: [...stdio, 'pipe', ...(options.directoryFd === undefined ? [] : [options.directoryFd])] })
        : spawn(options.command, options.args, { cwd: options.directory, env: options.env, stdio, windowsHide: false });
      const resource = { type: 'process', child, setsid: options.setsid, reaped: false };
      resource.exit = inheritedNative ? child.exit.then(code => resource.code = code) : new Promise(resolve => {
        child.once('exit', (code, signal) => { resource.code = code ?? 128 + (constants.signals[signal] ?? 0); resolve(resource.code); });
      });
      resource.exit.catch(error => { resource.waitError = error; });
      if (!inheritedNative)
        await new Promise((resolve, reject) => { child.once('spawn', resolve); child.once('error', reject); });
      if (posix && !inheritedNative) {
        // A killed/exited child may close the transport before consuming it.
        // The ordinary exit status remains observable through Child.wait.
        child.stdio[3].on('error', () => {});
        child.stdio[3].end(JSON.stringify({ ...options, stdioFlags }));
      }
      // Dropping a native Child does not kill its process. Its own exit listener
      // still reaps the OS child while the host is alive, but the dropped handle
      // must not prevent the JavaScript process from exiting.
      resource.close = () => child.unref();
      return numbers(add(resource), child.pid, ...ours);
    } catch (err) {
      for (const id of ours) if (id) release(id);
      throw process.platform === 'win32' ? err : native.fromNodeError(err);
    }
    finally { for (const fd of theirs) native.closeDescriptor(fd); }
  }
  function reap(resource, code) {
    if (process.platform !== 'win32' && resource.reaped) throw nativeFiles().error(constants.errno.ECHILD);
    resource.reaped = true; return code;
  }
  return { dispatch(op, id, arg, bytes, state) {
    if (op === 80) return start(bytes, state);
    if (op === 85) return numbers(process.pid);
    const p = get(id, 'process');
    switch (op) {
    case 81: return numbers(p.child.pid);
    case 82: return p.exit.then(code => numbers(reap(p, code)));
    case 83:
      if (p.waitError) throw p.waitError;
      return p.code === undefined ? numbers(0) : numbers(1, reap(p, p.code));
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
