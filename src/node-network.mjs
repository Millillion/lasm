import net from 'node:net';
import { numbers } from './node-host.mjs';

const empty = Buffer.alloc(0);
const failure = (code, message) => Object.assign(new Error(message), { code });
const cancelled = () => failure('ECANCELED', 'Operation cancelled');
function address(bytes) {
  return { host: bytes.subarray(16).toString(), port: Number(bytes.readBigUInt64LE(8)), ipv6Only: bytes.readBigUInt64LE(0) === 6n };
}
function encodeAddress(value) {
  if (!value || typeof value === 'string') throw failure('ENOTCONN', 'Socket has no address');
  return Buffer.concat([numbers(value.family === 'IPv6' ? 6 : 4, value.port), Buffer.from(value.address)]);
}

export function createNodeNetwork({ add, get, release }) {
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
    };
    return resource;
  }
  function receive(resource, count, peek) {
    if (resource.readWait) throw failure('EBUSY', 'Parallel reads on one socket are not allowed');
    const socket = resource.socket;
    if (!socket) throw failure('ENOTCONN', 'Socket is not connected');
    return new Promise((resolve, reject) => {
      const cleanup = () => {
        socket.off('readable', ready); socket.off('end', ready); socket.off('close', ready); socket.off('error', failed);
        resource.readWait = null;
      };
      const finish = value => { cleanup(); resolve(value); };
      const failed = err => { cleanup(); reject(err); };
      function ready() {
        if (resource.error) return failed(resource.error);
        if (socket.readableLength) {
          if (peek) return finish(numbers(1));
          const value = socket.read(Math.min(count, socket.readableLength, 16 * 1024 * 1024));
          if (value) return finish(value);
        }
        if (socket.readableEnded || socket.destroyed) return finish(peek ? numbers(0) : empty);
      }
      resource.readWait = { reject: failed };
      socket.on('readable', ready); socket.on('end', ready); socket.on('close', ready); socket.on('error', failed);
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
    case 51: { const t = get(id, 'tcp'); t.address = address(bytes); return empty; }
    case 52: {
      const t = get(id, 'tcp');
      if (t.server || t.socket) throw failure('EINVAL', 'Socket is already in use');
      t.server = net.createServer({ pauseOnConnect: true, allowHalfOpen: true }, socket => {
        socket.setNoDelay(t.noDelay);
        if (t.keepAlive) socket.setKeepAlive(...t.keepAlive);
        let client;
        try { client = add(tcp(socket)); } catch { socket.destroy(); return; }
        if (t.acceptWait) { const waiter = t.acceptWait; t.acceptWait = null; waiter.resolve(numbers(client)); }
        else t.accepted.push(client);
      });
      t.server.on('error', err => { t.error = err; t.acceptWait?.reject(err); t.acceptWait = null; });
      return new Promise((resolve, reject) => {
        const fail = err => { t.server.off('listening', ready); reject(err); };
        const ready = () => { t.server.off('error', fail); resolve(empty); };
        t.server.once('error', fail); t.server.once('listening', ready);
        t.server.listen({ ...(t.address ?? { host: '0.0.0.0', port: 0 }), backlog: n });
      });
    }
    case 53: {
      const t = get(id, 'tcp');
      if (t.error) throw t.error;
      if (!t.server?.listening) throw failure('EINVAL', 'Socket is not listening');
      if (t.acceptWait) throw failure('EBUSY', 'Parallel accepts are not allowed');
      if (t.accepted.length) return numbers(t.accepted.shift());
      return new Promise((resolve, reject) => { t.acceptWait = { resolve, reject }; });
    }
    case 54: { const t = get(id, 'tcp'); if (t.error) throw t.error; return numbers(t.accepted.shift() ?? 0); }
    case 55: { const t = get(id, 'tcp'); t.acceptWait?.reject(cancelled()); t.acceptWait = null; return empty; }
    case 56: if (!n) return empty; return receive(get(id, 'tcp'), n, false);
    case 57: return receive(get(id, 'tcp'), 0, true);
    case 58: get(id, 'tcp').readWait?.reject(cancelled()); return empty;
    case 59: {
      const t = get(id, 'tcp');
      if (!t.socket) throw failure('ENOTCONN', 'Socket is not connected');
      return new Promise((resolve, reject) => t.socket.write(bytes, err => err ? reject(err) : resolve(empty)));
    }
    case 60: {
      const t = get(id, 'tcp');
      if (!t.socket) throw failure('ENOTCONN', 'Socket is not connected');
      return new Promise((resolve, reject) => t.socket.end(err => err ? reject(err) : resolve(empty)));
    }
    case 61: { const s = get(id, 'tcp').socket; return encodeAddress(s?.remoteAddress && { address: s.remoteAddress, port: s.remotePort, family: s.remoteFamily }); }
    case 62: { const t = get(id, 'tcp'); return encodeAddress(t.server?.address() ?? t.socket?.address()); }
    case 63: { const t = get(id, 'tcp'); t.noDelay = true; t.socket?.setNoDelay(true); return empty; }
    case 64: { const t = get(id, 'tcp'); t.keepAlive = [(n & 1) !== 0, Math.floor(n / 2) * 1000]; t.socket?.setKeepAlive(...t.keepAlive); return empty; }
    case 65: {
      const t = get(id, 'tcp');
      if (t.socket || t.server) throw failure('EINVAL', 'Socket is already in use');
      t.socket = new net.Socket({ allowHalfOpen: true }); t.socket.pause();
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
