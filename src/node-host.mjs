import * as fsp from 'node:fs/promises';
import { getSystemErrorMessage } from 'node:util';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { randomBytes } from 'node:crypto';
import { createNodeNetwork } from './node-network.mjs';
import { nativeFiles } from './native-files.mjs';
import { nativeClock } from './native-clock.mjs';
import { nativeWindowsTimeZone } from './native-windows-timezone.mjs';
import { createNodeProcesses } from './node-process.mjs';
import { createNodeUdp } from './node-udp.mjs';
import { nativeDns } from './native-dns.mjs';
import { createNodeSystem } from './node-system.mjs';
import { createNodeSignals } from './node-signal.mjs';
import nativeThreadId from './thread-id.cjs';
import { HandleTable } from './handle-table.mjs';
import { createWorkingDirectory } from './working-directory.mjs';
import { checkLeanIOVersion, leanIOError } from './lean-io-errors.mjs';

const empty = Buffer.alloc(0);
export class LeanExit extends Error { constructor(code, force = false) { super(`Lean exited with status ${code}`); this.name = 'LeanExit'; this.code = code; this.force = force; } }
export function numbers(...values) {
  const result = Buffer.alloc(values.length * 8);
  values.forEach((value, i) => result.writeBigUInt64LE(BigInt.asUintN(64, BigInt(value)), i * 8));
  return result;
}
function error(code, message) { return Object.assign(new Error(message), { code }); }
export function encodeError(err, leanVersion = '4.32.0') {
  checkLeanIOVersion(leanVersion);
  // node:os wraps libuv errors in SystemError; preserve the underlying code.
  if (err.info?.code && typeof err.info.errno === 'number') err = { ...err, ...err.info };
  err = leanIOError(err, leanVersion);
  // Keep constructor families in sync with Lean's lean_decode_io_error and
  // lean_decode_uv_error. The selected release policy translates errno and
  // messages before classification; the older callable runtime keeps its ABI.
  const groups = [[], ['ENOENT'], ['EACCES', 'EPERM', 'EROFS', 'ECONNABORTED', 'EFBIG'], ['EEXIST', 'EINPROGRESS', 'EISCONN'],
    ['EINVAL', 'EBADF', 'ELOOP', 'ENAMETOOLONG', 'EDESTADDRREQ', 'EDOM', 'EILSEQ', 'ENOEXEC', 'ENOSTR', 'ENOTCONN', 'ENOTSOCK', 'ERR_INVALID_ARG_VALUE'],
    ['EISDIR', 'ENOTDIR', 'EBADMSG'], ['EBUSY', 'EADDRINUSE', 'EDEADLK', 'ETXTBSY'], ['ETIMEDOUT', 'ETIME'],
    ['ENOSYS', 'ENOTSUP', 'EOPNOTSUPP', 'EADDRNOTAVAIL', 'EAFNOSUPPORT', 'ENODEV', 'ENOPROTOOPT', 'ERANGE', 'ESPIPE', 'EXDEV'],
    ['EPIPE', 'ECONNRESET', 'EIDRM', 'ENETDOWN', 'ENETRESET', 'ENOLINK'], ['ECANCELED'],
    ['EMFILE', 'ENFILE', 'ENOSPC', 'E2BIG', 'EAGAIN', 'EMLINK', 'EMSGSIZE', 'ENOBUFS', 'ENOLCK', 'ENOMEM', 'ENOSR'],
    ['ENXIO', 'EHOSTUNREACH', 'ENETUNREACH', 'ECHILD', 'ECONNREFUSED', 'ENODATA', 'ENOMSG', 'ESRCH'],
    ['EIO'], ['ENOTEMPTY'], ['ENOTTY'], ['EPROTO', 'EPROTONOSUPPORT', 'EPROTOTYPE'], ['EINTR']];
  const kind = err.leanUserError ? 18 : Math.max(0, groups.findIndex(group => group.includes(err.code)));
  let message = String(err.message);
  if (err.errno < 0 && !err.nativeMessage) {
    try { message = getSystemErrorMessage(err.errno) ?? `Unknown system error ${err.errno}`; }
    catch { /* preserve non-system errors */ }
  }
  return { error: true, bytes: Buffer.concat([numbers(kind, err.errno ?? 0), Buffer.from(message)]) };
}

/** Private Node implementation of Lean's runtime primitives, not a Lean API. */
export function createNodeRuntimeHost({ cwd = process.platform === 'linux' ? '.' : process.cwd(), args = [], stdio = {}, appPath = process.execPath,
  applicationCommand, propagateCwd = false, processExit = false, leanVersion = '4.32.0' } = {}) {
  checkLeanIOVersion(leanVersion);
  if (!Array.isArray(args) || args.some(value => typeof value !== 'string' || !value.isWellFormed() || value.includes('\0')))
    throw new TypeError('Lean main arguments must be Unicode strings without NUL characters');
  const directory = createWorkingDirectory(cwd, propagateCwd);
  const resources = new HandleTable({ first: 10,
    entries: [0, 1, 2].map(fd => [fd, { type: 'file', fd, standardId: fd, tail: Promise.resolve() }]) });
  let closed = false, discardOutput = false;
  function closeResource(resource, asynchronous = false) {
    if (resource.type === 'file') {
      const close = () => {
        try {
          if (asynchronous) return nativeFiles().closeAsync(resource, discardOutput).catch(() => {});
          nativeFiles().close(resource, discardOutput);
        } catch { /* finalizers cannot report IO errors */ }
      };
      return resource.pending ? resource.tail.then(close) : close();
    } else return resource.close?.();
  }
  const add = resource => {
    if (closed) { closeResource(resource); throw error('ECANCELED', 'Lean runtime disposed'); }
    try { return resources.allocate(resource); }
    catch (failure) { closeResource(resource); throw failure; }
  };
  function get(id, type) {
    const resource = resources.get(id);
    if (!resource || type && resource.type !== type) throw error('EBADF', 'Invalid or closed resource');
    return resource;
  }
  function pathAt(bytes, state) {
    const value = new TextDecoder('utf-8', { fatal: true }).decode(bytes);
    if (value.includes('\0')) throw Object.assign(error('EINVAL', 'string contains NUL bytes'), { errno: 22, nativeMessage: true });
    // Leave dot segments and trailing separators for the OS to resolve. In
    // particular, link/../file is not equivalent to lexical path normalization.
    return directory.path(value, state);
  }
  async function createTemporary(isDirectory, state) {
    // uv_os_tmpdir checks presence, including empty values, in this order.
    // Avoid path.join: lexical normalization changes symlink/.. traversal.
    const base = nativeFiles().temporaryDirectory();
    if (!base.length) throw Object.assign(error('ENOENT', ''), { errno: -nativeFiles().errno('ENOENT') });
    const template = Buffer.concat([base, Buffer.from(base[base.length - 1] === 47 ? '' : '/'), Buffer.from('tmp.XXXXXXXX')]);
    const result = await nativeFiles().createTemporary(directory.path(template, state), isDirectory);
    // Creation uses the retained guest cwd; the returned name preserves the
    // original relative spelling rather than exposing the internal fd anchor.
    const name = Buffer.concat([template.subarray(0, -6), result.path.subarray(-6)]);
    return isDirectory ? name : Buffer.concat([numbers(add(result.file)), name]);
  }
  function serial(file, action) {
    file.pending = (file.pending ?? 0) + 1;
    const promise = file.tail.then(action).finally(() => file.pending--);
    file.tail = promise.catch(() => {});
    return promise;
  }
  async function fileRead(file, count) {
    return nativeFiles().read(nativeFile(file), count);
  }
  function nativeFile(file) {
    if (!file.stream) {
      const owned = nativeFiles().duplicateDescriptor(file.fd, file.fd === 0 ? 'r' : 'w');
      try { if (file.standardId === 2) nativeFiles().unbuffer(owned); }
      catch (error) { nativeFiles().close(owned); throw error; }
      file.fd = owned.fd; file.stream = owned.stream;
    }
    return file;
  }
  async function fileWrite(file, bytes) {
    const sink = file.standardId === 1 ? stdio.stdout : file.standardId === 2 ? stdio.stderr : undefined;
    if (sink) { await sink(bytes); return empty; }
    await nativeFiles().write(nativeFile(file), bytes);
    return empty;
  }
  function flushStandard(id) {
    const file = resources.get(id);
    return serial(file, async () => { if (file.stream) await nativeFiles().flush(file); });
  }
  function release(id, asynchronous = false) {
    if (id < 3) return;
    const resource = resources.get(id);
    if (!resource) return;
    resources.delete(id);
    // Normal Lean finalization runs after pending operations release the handle.
    // Fatal teardown may also close resources while host promises are settling.
    return closeResource(resource, asynchronous);
  }
  const network = createNodeNetwork({ add, get, release });
  const udp = createNodeUdp({ add, get });
  const processes = createNodeProcesses({ add, get, release, cwd: state => directory.spawn(state),
    applicationCommand: applicationCommand && { ...applicationCommand, path: appPath },
    flushStdout: () => flushStandard(1) });
  const system = createNodeSystem();
  const signals = createNodeSignals({ add, get });
  const pending = new HandleTable();
  function dispatch(op, id, arg, bytes, context, state) {
    const path = bytes => pathAt(bytes, state);
    if (op === 180) {
      const zone = nativeWindowsTimeZone().nextTransition(bytes, arg, id !== 0);
      return zone === null ? numbers(0) : Buffer.concat([
        numbers(1, zone.timestamp, zone.offset, Number(zone.isDST), zone.name.length), zone.name, zone.abbreviation,
      ]);
    }
    if (op === 181) return nativeWindowsTimeZone().localIdentifier(arg);
    if (op >= 160 && op <= 164) return signals.dispatch(op, id, arg);
    if (op >= 120 && op <= 144) return system.dispatch(op, id, arg, bytes);
    if (op === 115) {
      const split = bytes.indexOf(0);
      return nativeDns().getAddrInfo(bytes.subarray(0, split).toString(), bytes.subarray(split + 1).toString(), Number(arg));
    }
    if (op === 116) return nativeDns().getNameInfo(Number(bytes.readBigUInt64LE()), bytes.subarray(16).toString(), Number(bytes.readBigUInt64LE(8)));
    if (op >= 100 && op < 115) return udp.dispatch(op, id, arg, bytes, context);
    if (op >= 80 && op < 90) return processes.dispatch(op, id, arg, bytes, state);
    if (op >= 40) return network.dispatch(op, id, arg, bytes, context);
    const n = Number(arg);
    switch (op) {
    case 1: return (async () => {
      return numbers(add(await nativeFiles().open(path(bytes), n)));
    })();
    case 2: { const f = get(id, 'file'); return serial(f, () => fileRead(f, n)); }
    case 3: { const f = get(id, 'file'); return serial(f, () => fileWrite(f, bytes)); }
    case 4: { const f = get(id, 'file'); return serial(f, async () => { if (f.stream) await nativeFiles().flush(f); return empty; }); }
    case 5: { const f = get(id, 'file'); return serial(f, async () => { await nativeFiles().rewind(nativeFile(f)); return empty; }); }
    case 6: { const f = get(id, 'file'); return serial(f, async () => { await nativeFiles().truncate(nativeFile(f)); return empty; }); }
    case 7: { const f = get(id, 'file'); return serial(f, async () => {
      return nativeFiles().getLine(nativeFile(f));
    }); }
    case 9: return numbers(nativeFiles().isTty(get(id, 'file')));
    case 10: case 11: return (async () => {
      const stat = await (op === 11 && process.platform !== 'win32' ? fsp.lstat : fsp.stat)(path(bytes), { bigint: true });
      const time = ns => { const rest = (ns % 1_000_000_000n + 1_000_000_000n) % 1_000_000_000n; return [(ns - rest) / 1_000_000_000n, rest]; };
      return numbers(...time(stat.atimeNs), ...time(stat.mtimeNs), stat.size, stat.nlink,
        stat.isDirectory() ? 0 : stat.isFile() ? 1 : stat.isSymbolicLink() ? 2 : 3);
    })();
    case 12: return (process.platform === 'win32'
      ? fsp.realpath(path(bytes)).then(value => Buffer.from(value.replace(/^[A-Z]:/, x => x.toLowerCase())))
      : nativeFiles().realPath(path(bytes))).catch(() => {
      // Lean deliberately reports this constructor for every realpath failure.
      throw Object.assign(error('ENOENT', ''), { errno: 2, nativeMessage: true });
    });
    case 13: return (async () => {
      try {
        if (process.platform !== 'win32')
          return Buffer.concat((await nativeFiles().readDirectory(path(bytes))).flatMap(name => [name, Buffer.from([0])]));
        // Node defaults to 32 entries; Deno's Node-compatible API currently
        // requires that default explicitly when an options object is supplied.
        const dir = await fsp.opendir(path(bytes), { encoding: 'buffer', bufferSize: 32 });
        const names = [];
        for await (const entry of dir) names.push(Buffer.from(entry.name), Buffer.from([0]));
        return Buffer.concat(names);
      } catch (err) { if (err.nativeMessage) throw err; throw nativeFiles().fromNodeError(err); }
    })();
    case 14: return fsp.mkdir(path(bytes)).then(() => empty, err => { throw nativeFiles().fromNodeError(err); });
    case 15: return (process.platform === 'win32' ? fsp.unlink(path(bytes))
      : nativeFiles().removeFile(path(bytes))).then(() => empty);
    case 16: return fsp.rmdir(path(bytes)).then(() => empty, err => { throw nativeFiles().fromNodeError(err); });
    case 17: case 18: return (op === 17 ? fsp.rename : fsp.link)(path(bytes.subarray(0, n)), path(bytes.subarray(n + 1))).then(() => empty, err => {
      if (op === 17 && process.platform !== 'win32') throw nativeFiles().fromNodeError(err);
      throw err;
    });
    case 19: return fsp.chmod(path(bytes), n).then(() => empty, err => { throw nativeFiles().fromNodeError(err); });
    case 20: return (async () => {
      if (process.platform !== 'win32') return createTemporary(false, state);
      const name = join(tmpdir(), 'lean-' + randomBytes(16).toString('hex'));
      return Buffer.concat([numbers(add(await nativeFiles().open(name, 5, 0o600))), Buffer.from(name)]);
    })();
    case 21: return process.platform !== 'win32' ? createTemporary(true, state)
      : fsp.mkdtemp(join(tmpdir(), 'lean-')).then(name => Buffer.from(name));
    case 22: {
      // Lean returns none before consulting getenv when the name contains NUL.
      // Some engines truncate the key in process.env; others reject it.
      if (bytes.includes(0)) return empty;
      const value = nativeFiles().environmentValue(bytes.toString());
      return value === undefined ? empty : Buffer.concat([Buffer.from([1]), value]);
    }
    case 23: return directory.name(state).then(value => Buffer.from(value));
    case 24: return Buffer.from(appPath);
    case 25: return numbers(process.hrtime.bigint() / 1_000_000n);
    case 26: return numbers(process.hrtime.bigint());
    case 27: { const ns = nativeClock().now(); return numbers(ns / 1_000_000_000n, ns % 1_000_000_000n); }
    case 28: return randomBytes(n);
    case 29: {
      // Unlike IO.FS, native POSIX setCurrentDir uses a C string directly.
      const nul = process.platform !== 'win32' ? bytes.indexOf(0) : -1;
      const value = new TextDecoder('utf-8', { fatal: true }).decode(nul < 0 ? bytes : bytes.subarray(0, nul));
      if (value.includes('\0')) throw Object.assign(error('EINVAL', 'string contains NUL bytes'), { errno: 22, nativeMessage: true });
      return directory.change(value, state).then(() => empty);
    }
    case 30:
      if (processExit) return nativeFiles().exitProcess(n, id !== 0);
      throw new LeanExit(n, id !== 0);
    case 31: return Buffer.from(args.map(value => value + '\0').join(''));
    case 32: case 33: case 34: {
      const f = get(id, 'file');
      return serial(f, async () => numbers(await nativeFiles().lock(nativeFile(f), !!n, op === 33, op === 34)));
    }
    case 35: return new Promise((resolve, reject) => {
      let timer;
      let remaining = n;
      const token = add({ type: 'sleep', close() { clearTimeout(timer); reject(error('ECANCELED', 'Sleep cancelled')); } });
      const step = () => {
        const delay = Math.min(remaining, 2_147_483_647);
        timer = setTimeout(() => {
          remaining -= delay;
          if (remaining > 0) step();
          else { resources.delete(token); resolve(empty); }
        }, delay);
      };
      step();
    });
    case 36: throw nativeFiles().outOfMemory();
    case 37: return numbers(context.nativeThreadId ?? nativeThreadId());
    default: throw error('ENOSYS', `Unsupported Lean runtime operation ${op}`);
    }
  }
  function request(op, id, arg, bytes, context = {}) {
    if (op === 93) {
      // Some ordinary Lean IO actions can fail before returning a promise.
      // Inspect only the synchronous startup result: even an already-settled
      // JavaScript promise still belongs to Lean's asynchronous result layer.
      const result = pending.get(id);
      if (!result) throw new Error('Unknown asynchronous host request');
      if (!result.then && result.error) { pending.delete(id); return result; }
      return { error: false, bytes: empty };
    }
    if (op === 90) {
      const result = pending.get(id);
      if (!result) throw new Error('Unknown asynchronous host request');
      pending.delete(id); return result;
    }
    let state;
    try {
      if (closed) throw error('ECANCELED', 'Lean runtime disposed');
      // Only path-based operations need this lease. A long-lived socket read
      // or timer must not retain every directory that was current at startup.
      if (op === 1 || op >= 10 && op <= 21 || op === 23 || op === 29 || op === 80)
        state = directory.retain();
      const result = dispatch(op, id, arg, Buffer.from(bytes), context, state);
      if (result?.then) {
        const response = result.then(bytes => ({ error: false, bytes }), err => { if (err instanceof LeanExit) throw err; return encodeError(err, leanVersion); });
        return state ? response.finally(() => directory.release(state)) : response;
      }
      if (state) directory.release(state);
      state = undefined;
      return { error: false, bytes: result };
    } catch (err) {
      if (state) directory.release(state);
      if (err instanceof LeanExit) throw err;
      return encodeError(err, leanVersion);
    }
  }
  return { request, release, platform: process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0,
    // Normal main shutdown must finish these flushes without blocking the host
    // event loop that may itself be draining a redirected output pipe.
    flushStdIO() { return Promise.all([flushStandard(1), flushStandard(2)]); },
    // Internal full-runtime RPC: the Lean caller waits for this promise while
    // other threads can continue issuing host operations, including pipe reads.
    releaseAsync(id) { return release(id, true); },
    start(...args) {
      const id = pending.allocate(undefined);
      try { pending.set(id, request(...args)); return id; }
      catch (failure) { pending.delete(id); throw failure; }
    },
    whenReady(id) {
      if (!pending.has(id)) throw new Error('Unknown asynchronous host request');
      return Promise.resolve(pending.get(id));
    },
    close(reason) {
      if (closed) return;
      discardOutput = reason instanceof LeanExit && reason.force;
      closed = true;
      directory.close();
      for (const value of resources.values()) value.cancelled = true;
      for (const id of resources.keys()) release(id);
      for (const id of [0, 1, 2]) {
        const file = resources.get(id);
        if (file.stream || file.pending) closeResource(file, true);
      }
      pending.clear();
    },
    stats() { return { resources: resources.size - 3 }; },
  };
}
