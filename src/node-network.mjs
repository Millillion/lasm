import net from 'node:net';
import { getSystemErrorMap } from 'node:util';
import { numbers } from './node-host.mjs';
import { nativeTcp } from './native-tcp.mjs';

const empty = Buffer.alloc(0);
const failure = (code, message) => Object.assign(new Error(message), { code });
const cancelled = () => failure('ECANCELED', 'Operation cancelled');
const uvErrors = new Map([...getSystemErrorMap()].map(([errno, [code, message]]) => [code, { errno, message }]));
const tcpFailure = code => {
  const value = uvErrors.get(code);
  return Object.assign(new Error(value?.message ?? code), { code, errno: value?.errno });
};
function address(bytes) {
  // Lean calls uv_tcp_bind with flags=0, permitting IPv4-mapped connections on
  // an IPv6 wildcard listener where the host supports dual-stack sockets.
  return { host: bytes.subarray(16).toString(), port: Number(bytes.readBigUInt64LE(8)), ipv6Only: false };
}
function encodeAddress(value) {
  if (!value || typeof value === 'string') throw failure('ENOTCONN', 'Socket has no address');
  return Buffer.concat([numbers(value.family === 'IPv6' ? 6 : 4, value.port), Buffer.from(value.address)]);
}

export function createNodeNetwork({ add, get, release }) {
  function getTcp(id) {
    const resource = get(id, 'tcp');
    // destroy() can close the fd before its deferred 'close' event. Never run a
    // native query/option on that number after the OS may have reused it.
    if (resource.socket?.destroyed) resource.bound?.forget();
    return resource;
  }
  function tcp(socket) {
    const resource = { type: 'tcp', socket, accepted: [], readWait: null, acceptWait: null, noDelay: false };
    if (socket) {
      socket.pause();
      socket.on('error', err => { resource.error = err; });
    }
    resource.close = () => {
      resource.readWait?.reject(cancelled());
      resource.acceptWait?.reject(cancelled());
      for (const id of resource.accepted.splice(0)) release(id);
      resource.socket?.destroy();
      resource.server?.close();
      resource.bound?.close();
    };
    return resource;
  }
  function receive(resource, count, peek) {
    if (resource.readWait) throw tcpFailure('EALREADY');
    const socket = resource.socket;
    if (!socket) throw tcpFailure('ENOTCONN');
    return new Promise((resolve, reject) => {
      const resumeImported = Boolean(process.versions.deno && resource.bound);
      const cleanup = () => {
        if (resumeImported) socket.pause();
        socket.off('readable', ready); socket.off('end', ready); socket.off('close', ready); socket.off('error', failed);
        resource.readWait = null;
      };
      const finish = value => { cleanup(); resolve(value); };
      const failed = err => { cleanup(); reject(err); };
      function ready() {
        if (resource.error) return failed(resource.error);
        if (socket.readableLength) {
          if (peek) return finish(numbers(1));
          // libuv reports a zero-capacity read buffer when data is ready;
          // it neither consumes the bytes nor reports EOF for that buffer.
          if (!count) return failed(tcpFailure('ENOBUFS'));
          const value = socket.read(Math.min(count, socket.readableLength, 16 * 1024 * 1024));
          if (value) return finish(value);
        }
        if (socket.readableEnded || socket.destroyed) {
          // POSIX libuv requests a buffer before reading an EOF-ready fd.
          // A zero-sized receive therefore still fails with ENOBUFS, and
          // waitReadable observes readiness without consuming that EOF.
          if (process.platform !== 'win32') {
            if (peek) return finish(numbers(1));
            if (!count) return failed(tcpFailure('ENOBUFS'));
          }
          return finish(peek ? numbers(0) : empty);
        }
      }
      resource.readWait = { reject: failed };
      socket.on('readable', ready); socket.on('end', ready); socket.on('close', ready); socket.on('error', failed);
      // Deno's imported TCP stream can remain stopped when only a readable
      // listener is added. Resume for this read, then pause before detaching
      // that listener so data cannot flow away between Lean receive calls.
      if (resumeImported) socket.resume();
      ready();
    });
  }
  function timer(timeout, repeating) {
    timeout = BigInt(timeout);
    if (timeout < 0n || timeout > 0xffffffffffffffffn) throw failure('EINVAL', 'Timer interval is outside UInt64');
    const t = { type: 'timer', timeout, repeating, phase: 'initial', generation: 0 };
    t.fresh = () => {
      t.generation++;
      t.done = false;
      t.promise = new Promise((resolve, reject) => { t.resolve = resolve; t.reject = reject; });
      t.promise.catch(() => {});
    };
    t.arm = delay => {
      clearTimeout(t.handle);
      let remaining = BigInt(delay);
      const step = () => {
        const chunk = remaining > 2_147_483_647n ? 2_147_483_647n : remaining;
        t.handle = setTimeout(() => {
          remaining -= chunk;
          if (remaining > 0n) return step();
          if (t.promise && !t.done) { t.done = true; t.resolve(empty); }
          if (repeating && timeout > 0n) t.arm(timeout);
          else t.phase = 'finished';
        }, Number(chunk));
      };
      step();
    };
    t.start = () => {
      t.fresh();
      t.phase = 'running';
      t.arm(repeating ? 0 : timeout);
    };
    t.drop = () => {
      if (t.promise && !t.done) t.reject(cancelled());
      t.promise = undefined;
      t.generation++;
    };
    t.close = () => { clearTimeout(t.handle); t.drop(); t.phase = 'finished'; };
    return t;
  }
  function mutex(recursive) {
    const m = { type: 'mutex', owner: null, depth: 0, queue: [], recursive };
    m.take = (owner, attempt = false) => {
      if (m.owner === null || recursive && m.owner === owner) { m.owner = owner; m.depth++; return attempt ? numbers(1) : empty; }
      if (attempt) return numbers(0);
      return new Promise((resolve, reject) => m.queue.push({ owner, resolve, reject }));
    };
    m.unlock = owner => {
      if (m.owner !== owner) throw failure('EINVAL', 'Unlock by a task that does not own the mutex');
      if (--m.depth) return empty;
      const next = m.queue.shift();
      m.owner = next?.owner ?? null; m.depth = next ? 1 : 0;
      next?.resolve(empty); return empty;
    };
    m.close = () => { for (const waiter of m.queue.splice(0)) waiter.reject(cancelled()); };
    return m;
  }
  function dispatch(op, id, arg, bytes, { fiber }) {
    const n = Number(arg);
    switch (op) {
    case 40: return numbers(add(mutex(n !== 0)));
    case 41: return get(id, 'mutex').take(fiber);
    case 42: return get(id, 'mutex').unlock(fiber);
    case 43: return get(id, 'mutex').take(fiber, true);
    case 44: return numbers(add({ type: 'condvar', waiters: [] }));
    case 45: {
      const c = get(id, 'condvar'), m = get(n, 'mutex');
      const promise = new Promise(resolve => c.waiters.push(resolve));
      m.unlock(fiber);
      return promise.then(() => m.take(fiber));
    }
    case 46: get(id, 'condvar').waiters.shift()?.(); return empty;
    case 47: for (const wake of get(id, 'condvar').waiters.splice(0)) wake(); return empty;
    case 50: return numbers(add(tcp()));
    case 51: {
      const t = getTcp(id), target = address(bytes), native = nativeTcp();
      if (native) {
        if (!t.bound && (t.socket || t.server)) throw tcpFailure('EINVAL');
        t.bound ??= native.create(target, t);
        t.bound.bind(target);
      } else t.address = target;
      return empty;
    }
    case 52: {
      const t = getTcp(id);
      if (t.socket) throw tcpFailure('EINVAL');
      const native = nativeTcp();
      if (native) {
        t.bound ??= native.create({ host: '0.0.0.0', port: 0 }, t);
        t.bound.listen(n);
        if (t.server) return empty; // libuv permits updating the listen backlog.
      } else if (t.server) throw tcpFailure('EINVAL');
      t.server = net.createServer({ pauseOnConnect: true, allowHalfOpen: true }, socket => {
        socket.setNoDelay(t.noDelay);
        if (!t.bound && t.keepAlive) socket.setKeepAlive(...t.keepAlive);
        let client;
        try { client = add(tcp(socket)); } catch { socket.destroy(); return; }
        if (t.acceptWait) { const waiter = t.acceptWait; t.acceptWait = null; waiter.resolve(numbers(client)); }
        else t.accepted.push(client);
      });
      t.server.once('close', () => t.bound?.forget());
      t.server.on('error', err => { t.error = err; t.acceptWait?.reject(err); t.acceptWait = null; });
      return new Promise((resolve, reject) => {
        const fail = err => { t.server.off('listening', ready); reject(err); };
        const ready = () => { t.server.off('error', fail); resolve(empty); };
        t.server.once('error', fail); t.server.once('listening', ready);
        t.server.listen(t.bound ? { fd: t.bound.transfer(), backlog: n }
          : { ...(t.address ?? { host: '0.0.0.0', port: 0 }), backlog: n });
      });
    }
    case 53: {
      const t = getTcp(id);
      if (t.error) throw t.error;
      if (!t.server?.listening) throw failure('EINVAL', 'Socket is not listening');
      if (t.acceptWait) throw failure('EBUSY', 'Parallel accepts are not allowed');
      if (t.accepted.length) return numbers(t.accepted.shift());
      return new Promise((resolve, reject) => { t.acceptWait = { resolve, reject }; });
    }
    case 54: { const t = getTcp(id); if (t.error) throw t.error; return numbers(t.accepted.shift() ?? 0); }
    case 55: { const t = getTcp(id); t.acceptWait?.reject(cancelled()); t.acceptWait = null; return empty; }
    case 56: return receive(getTcp(id), n, false);
    case 57: return receive(getTcp(id), 0, true);
    case 58: getTcp(id).readWait?.reject(cancelled()); return empty;
    case 59: {
      const t = getTcp(id);
      // Lean resolves an empty vector before consulting the socket. A vector
      // containing one empty ByteArray still invokes uv_write. Old callers
      // supplied zero for nonempty payloads, which remain ordinary writes.
      if (!n && !bytes.length) return empty;
      if (!t.socket) throw tcpFailure(process.platform === 'win32' || t.bound || t.server ? 'EPIPE' : 'EBADF');
      if (t.socket.writableEnded || t.socket.writableFinished || t.shutdownPending) throw tcpFailure('EPIPE');
      return new Promise((resolve, reject) => t.socket.write(bytes, err => err ? reject(err) : resolve(empty)));
    }
    case 60: {
      const t = getTcp(id);
      if (t.shutdownPending) throw tcpFailure('EALREADY');
      if (!t.socket || t.socket.destroyed || t.socket.writableEnded || t.socket.writableFinished) throw tcpFailure('ENOTCONN');
      t.shutdownPending = true;
      return new Promise((resolve, reject) => t.socket.end(err => err ? reject(err) : resolve(empty)))
        .finally(() => { t.shutdownPending = false; });
    }
    case 61: {
      const t = getTcp(id), s = t.socket;
      if (t.bound) return encodeAddress(t.bound.name(true));
      if (!s && !t.server || s?.destroyed) throw tcpFailure('EBADF');
      if (!s?.remoteAddress) throw tcpFailure('ENOTCONN');
      return encodeAddress({ address: s.remoteAddress, port: s.remotePort, family: s.remoteFamily });
    }
    case 62: {
      const t = getTcp(id);
      if (t.bound) return encodeAddress(t.bound.name());
      if (!t.socket && !t.server || t.socket?.destroyed) throw tcpFailure('EBADF');
      return encodeAddress(t.server?.address() ?? t.socket?.address());
    }
    case 63: {
      const t = getTcp(id);
      if (t.bound) t.bound.noDelay(); else t.socket?.setNoDelay(true);
      t.noDelay = true;
      return empty;
    }
    case 64: {
      const t = getTcp(id), enabled = (n & 1) !== 0, delay = Math.floor(n / 2);
      if (t.bound) t.bound.keepAlive(enabled, delay);
      else if (t.socket) {
        if (enabled && !delay && nativeTcp()) throw nativeTcp().error(1);
        t.socket.setKeepAlive(enabled, delay * 1000);
      }
      t.keepAlive = [enabled, delay * 1000];
      return empty;
    }
    case 65: {
      const t = getTcp(id);
      if (t.socket || t.server) throw tcpFailure('EINVAL');
      if (t.bound) return t.bound.connect(address(bytes)).then(async () => {
        // Complete the connection before importing it. Bun's constructor only
        // validates TCP fds; its pinned node:net implementation imports them in
        // connect({fd}), also used internally for cluster-accepted sockets.
        t.socket = process.versions.bun ? new net.Socket({ allowHalfOpen: true })
          : new net.Socket({ fd: t.bound.transfer(), allowHalfOpen: true, readable: true, writable: true });
        t.socket.pause();
        t.socket.on('error', err => { t.error = err; });
        t.socket.once('close', () => t.bound.forget());
        if (process.versions.bun) await new Promise((resolve, reject) => {
          const failed = error => { t.socket.off('connect', ready); reject(error); };
          const ready = () => { t.socket.off('error', failed); resolve(); };
          t.socket.once('error', failed);
          t.socket.once('connect', ready);
          t.socket.connect({ fd: t.bound.transfer(), fdIsRawSocket: true, pauseOnConnect: true });
        });
        return empty;
      });
      t.socket = new net.Socket({ allowHalfOpen: true }); t.socket.pause();
      t.socket.setNoDelay(t.noDelay);
      if (t.keepAlive) t.socket.setKeepAlive(t.keepAlive[0], nativeTcp() ? 60_000 : t.keepAlive[1]);
      t.socket.on('error', err => { t.error = err; });
      return new Promise((resolve, reject) => {
        const failed = err => reject(err);
        t.socket.once('error', failed);
        t.socket.connect(address(bytes), () => { t.socket.off('error', failed); resolve(empty); });
      });
    }
    case 70: return numbers(add(timer(arg, id !== 0)));
    case 71: {
      const t = get(id, 'timer');
      if (t.phase === 'initial') t.start();
      else if (t.repeating && t.phase === 'running' && (t.done || !t.promise)) t.fresh();
      return numbers(t.generation);
    }
    case 72: { const t = get(id, 'timer'); return t.promise ?? new Promise(() => {}); }
    case 73: { const t = get(id, 'timer'); if (t.phase === 'running') t.arm(t.timeout); return empty; }
    case 74: get(id, 'timer').close(); return numbers(1);
    case 75: {
      const t = get(id, 'timer');
      if (t.phase !== 'running' || !t.promise) return numbers(0);
      t.drop();
      if (!t.repeating) { clearTimeout(t.handle); t.phase = 'initial'; }
      return numbers(1);
    }
    default: throw failure('ENOSYS', `Unsupported Lean async operation ${op}`);
    }
  }
  return { dispatch };
}
