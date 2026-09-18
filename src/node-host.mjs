import * as fs from 'node:fs';
import * as fsp from 'node:fs/promises';
import { promisify } from 'node:util';
import { resolve, join } from 'node:path';
import { tmpdir } from 'node:os';
import { randomBytes } from 'node:crypto';
import { createNodeNetwork } from './node-network.mjs';

const open = promisify(fs.open), read = promisify(fs.read), write = promisify(fs.write);
const fstat = promisify(fs.fstat), fsync = promisify(fs.fsync), truncate = promisify(fs.ftruncate);
const empty = Buffer.alloc(0);
export class LeanExit extends Error { constructor(code) { super(`Lean exited with status ${code}`); this.name = 'LeanExit'; this.code = code; } }
export function numbers(...values) {
  const result = Buffer.alloc(values.length * 8);
  values.forEach((value, i) => result.writeBigUInt64LE(BigInt.asUintN(64, BigInt(value)), i * 8));
  return result;
}
function error(code, message) { return Object.assign(new Error(message), { code }); }
export function encodeError(err) {
  const groups = [[], ['ENOENT'], ['EACCES', 'EPERM', 'EROFS'], ['EEXIST'],
    ['EINVAL', 'EBADF', 'ELOOP', 'ENAMETOOLONG', 'ERR_INVALID_ARG_VALUE'], ['EISDIR', 'ENOTDIR'],
    ['EBUSY', 'EADDRINUSE'], ['ETIMEDOUT'], ['ENOSYS', 'ENOTSUP'], ['EPIPE', 'ECONNRESET'], ['ECANCELED']];
  const kind = Math.max(0, groups.findIndex(group => group.includes(err.code)));
  return { error: true, bytes: Buffer.concat([numbers(kind, Math.abs(err.errno ?? 0)), Buffer.from(String(err.message))]) };
}

/** Private Node implementation of Lean's runtime primitives, not a Lean API. */
export function createNodeRuntimeHost({ cwd = process.cwd(), args = [], stdio = {} } = {}) {
  if (!Array.isArray(args) || args.some(value => typeof value !== 'string' || !value.isWellFormed() || value.includes('\0')))
    throw new TypeError('Lean main arguments must be Unicode strings without NUL characters');
  let directory = resolve(cwd);
  const resources = new Map([0, 1, 2].map(fd => [fd, { type: 'file', fd, position: null, tail: Promise.resolve() }]));
  let nextId = 10;
  let closed = false;
  function closeResource(resource) {
    if (resource.type === 'file') {
      try { fs.closeSync(resource.fd); } catch { /* finalizers cannot report IO errors */ }
    } else resource.close?.();
  }
  const add = resource => {
    if (closed) { closeResource(resource); throw error('ECANCELED', 'Lean runtime disposed'); }
    const id = nextId++; resources.set(id, resource); return id;
  };
  function get(id, type) {
    const resource = resources.get(id);
    if (!resource || type && resource.type !== type) throw error('EBADF', 'Invalid or closed resource');
    return resource;
  }
  function path(bytes) {
    const value = new TextDecoder('utf-8', { fatal: true }).decode(bytes);
    if (value.includes('\0')) throw error('EINVAL', 'Path contains a NUL character');
    return resolve(directory, value);
  }
  function serial(file, action) {
    const promise = file.tail.then(action);
    file.tail = promise.catch(() => {});
    return promise;
  }
  async function fileRead(file, count) {
    const buffer = Buffer.alloc(Math.min(count, 16 * 1024 * 1024));
    const { bytesRead } = await read(file.fd, buffer, 0, buffer.length, file.position);
    if (file.position !== null) file.position += bytesRead;
    return buffer.subarray(0, bytesRead);
  }
  async function fileWrite(file, bytes) {
    const sink = file.fd === 1 ? stdio.stdout : file.fd === 2 ? stdio.stderr : undefined;
    if (sink) { await sink(bytes); return empty; }
    if (file.fd === 1 || file.fd === 2) {
      await new Promise((resolve, reject) => (file.fd === 1 ? process.stdout : process.stderr).write(bytes, err => err ? reject(err) : resolve()));
      return empty;
    }
    for (let offset = 0; offset < bytes.length;) {
      const { bytesWritten } = await write(file.fd, bytes, offset, bytes.length - offset, file.append ? null : file.position);
      if (!bytesWritten) throw error('EIO', 'File write made no progress');
      offset += bytesWritten;
      if (file.position !== null) file.position += bytesWritten;
    }
    if (file.append) file.position = (await fstat(file.fd)).size;
    return empty;
  }
  function release(id) {
    if (id < 3) return;
    const resource = resources.get(id);
    if (!resource) return;
    resources.delete(id);
    // Normal Lean finalization runs after pending operations release the handle.
    // Fatal teardown may also close resources while host promises are settling.
    closeResource(resource);
  }
  const network = createNodeNetwork({ add, get, release });
  const pending = new Map();
  let nextRequest = 1;
  function dispatch(op, id, arg, bytes, context) {
    if (op >= 40) return network.dispatch(op, id, arg, bytes, context);
    const n = Number(arg);
    switch (op) {
    case 1: return (async () => {
      const flags = [fs.constants.O_RDONLY, fs.constants.O_WRONLY | fs.constants.O_CREAT | fs.constants.O_TRUNC,
        fs.constants.O_WRONLY | fs.constants.O_CREAT | fs.constants.O_TRUNC | fs.constants.O_EXCL,
        fs.constants.O_RDWR, fs.constants.O_WRONLY | fs.constants.O_CREAT | fs.constants.O_APPEND][n];
      if (flags === undefined) throw error('EINVAL', 'Invalid open mode');
      const fd = await open(path(bytes), flags, 0o666);
      return numbers(add({ type: 'file', fd, position: 0, append: n === 4, tail: Promise.resolve() }));
    })();
    case 2: { const f = get(id, 'file'); return serial(f, () => fileRead(f, n)); }
    case 3: { const f = get(id, 'file'); return serial(f, () => fileWrite(f, bytes)); }
    case 4: { const f = get(id, 'file'); return serial(f, async () => { if (f.fd > 2) await fsync(f.fd); return empty; }); }
    case 5: { const f = get(id, 'file'); return serial(f, () => { f.position = 0; return empty; }); }
    case 6: { const f = get(id, 'file'); return serial(f, async () => { await truncate(f.fd, f.position ?? 0); return empty; }); }
    case 7: { const f = get(id, 'file'); return serial(f, async () => {
      const chunks = [];
      for (;;) { const byte = await fileRead(f, 1); if (!byte.length) break; chunks.push(byte); if (byte[0] === 10) break; }
      const result = Buffer.concat(chunks);
      try { new TextDecoder('utf-8', { fatal: true }).decode(result); }
      catch { throw error('EINVAL', 'File contains invalid UTF-8'); }
      return result;
    }); }
    case 9: get(id, 'file'); return numbers(id === 0 ? !!process.stdin.isTTY : id === 1 ? !!process.stdout.isTTY : id === 2 ? !!process.stderr.isTTY : false);
    case 10: case 11: return (async () => {
      const stat = await (op === 11 && process.platform !== 'win32' ? fsp.lstat : fsp.stat)(path(bytes), { bigint: true });
      const time = ns => [ns / 1_000_000_000n, ns % 1_000_000_000n];
      return numbers(...time(stat.atimeNs), ...time(stat.mtimeNs), stat.size, stat.nlink,
        stat.isDirectory() ? 0 : stat.isFile() ? 1 : stat.isSymbolicLink() ? 2 : 3);
    })();
    case 12: return fsp.realpath(path(bytes)).then(value => Buffer.from(value));
    case 13: return fsp.readdir(path(bytes)).then(names => Buffer.from(names.map(name => name + '\0').join('')));
    case 14: return fsp.mkdir(path(bytes)).then(() => empty);
    case 15: return fsp.unlink(path(bytes)).then(() => empty);
    case 16: return fsp.rmdir(path(bytes)).then(() => empty);
    case 17: case 18: return (op === 17 ? fsp.rename : fsp.link)(path(bytes.subarray(0, n)), path(bytes.subarray(n + 1))).then(() => empty);
    case 19: return fsp.chmod(path(bytes), n).then(() => empty);
    case 20: return (async () => {
      const name = join(tmpdir(), 'lean-' + randomBytes(16).toString('hex'));
      const fd = await open(name, 'wx+', 0o600);
      return Buffer.concat([numbers(add({ type: 'file', fd, position: 0, tail: Promise.resolve() })), Buffer.from(name)]);
    })();
    case 21: return fsp.mkdtemp(join(tmpdir(), 'lean-')).then(name => Buffer.from(name));
    case 22: { const value = process.env[bytes.toString()]; return value === undefined ? empty : Buffer.from('\x01' + value); }
    case 23: return Buffer.from(directory);
    case 24: return Buffer.from(process.execPath);
    case 25: return numbers(process.hrtime.bigint() / 1_000_000n);
    case 26: return numbers(process.hrtime.bigint());
    case 27: { const ms = BigInt(Date.now()); return numbers(ms / 1000n, ms % 1000n * 1_000_000n); }
    case 28: return randomBytes(n);
    case 29: return fsp.stat(path(bytes)).then(stat => {
      if (!stat.isDirectory()) throw error('ENOTDIR', 'Working directory must be a directory');
      directory = path(bytes); return empty;
    });
    case 30: throw new LeanExit(n);
    case 31: return Buffer.from(args.map(value => value + '\0').join(''));
    case 32: case 33: case 34: throw error('ENOTSUP', 'Native file locking is not supported by this Node runtime');
    case 35: return new Promise(resolve => setTimeout(() => resolve(empty), n));
    default: throw error('ENOSYS', `Unsupported Lean runtime operation ${op}`);
    }
  }
  function request(op, id, arg, bytes, context = {}) {
    if (op === 90) {
      const result = pending.get(id);
      if (!result) throw new Error('Unknown asynchronous host request');
      pending.delete(id); return result;
    }
    try {
      const result = dispatch(op, id, arg, Buffer.from(bytes), context);
      if (result?.then) return result.then(bytes => ({ error: false, bytes }), err => { if (err instanceof LeanExit) throw err; return encodeError(err); });
      return { error: false, bytes: result };
    } catch (err) { if (err instanceof LeanExit) throw err; return encodeError(err); }
  }
  return { request, release,
    start(...args) { const id = nextRequest++; pending.set(id, request(...args)); return id; },
    close() { closed = true; for (const id of resources.keys()) release(id); pending.clear(); },
    stats() { return { resources: resources.size - 3 }; },
  };
}
