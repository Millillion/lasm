// A small in-memory server speaking the Redis protocol (RESP2), so a Redis
// client library can be checked end to end over TCP on every platform without
// installing Redis. It implements only the commands the ecosystem projects use.
import { createServer } from 'node:net';

const encode = value => {
  if (value === null) return '$-1\r\n';
  if (typeof value === 'number') return `:${value}\r\n`;
  if (value instanceof Error) return `-${value.message}\r\n`;
  if (Array.isArray(value)) return `*${value.length}\r\n` + value.map(encode).join('');
  if (typeof value === 'object' && value.simple) return `+${value.simple}\r\n`;
  return `$${Buffer.byteLength(value)}\r\n${value}\r\n`;
};

/** Parse complete RESP arrays of bulk strings from `buffer`; returns [commands, rest]. */
function parse(buffer) {
  const commands = [];
  let offset = 0;
  for (;;) {
    const start = offset;
    const line = () => {
      const end = buffer.indexOf('\r\n', offset);
      if (end < 0) return undefined;
      const text = buffer.subarray(offset, end).toString(); offset = end + 2; return text;
    };
    const header = line();
    if (header === undefined) { offset = start; break; }
    if (!header.startsWith('*')) { commands.push(header.trim().split(/\s+/)); continue; }
    const count = Number(header.slice(1)), args = [];
    let complete = true;
    for (let i = 0; i < count; i++) {
      const size = line();
      if (size === undefined) { complete = false; break; }
      const length = Number(size.slice(1));
      if (buffer.length < offset + length + 2) { complete = false; break; }
      args.push(buffer.subarray(offset, offset + length).toString()); offset += length + 2;
    }
    if (!complete) { offset = start; break; }
    commands.push(args);
  }
  return [commands, buffer.subarray(offset)];
}

export async function startRespServer() {
  let store = new Map();
  const ok = { simple: 'OK' };
  const handle = ([name = '', ...args]) => {
    switch (name.toUpperCase()) {
    case 'PING': return args.length ? args[0] : { simple: 'PONG' };
    case 'HELLO': return new Error('NOPROTO this server speaks RESP2 only');
    case 'SELECT': case 'AUTH': case 'CLIENT': return ok;
    case 'SET': store.set(args[0], args[1]); return ok;
    case 'GET': { const value = store.get(args[0]); return typeof value === 'string' ? value : null; }
    case 'INCR': { const value = Number(store.get(args[0]) ?? '0') + 1; store.set(args[0], String(value)); return value; }
    case 'DEL': return args.reduce((count, key) => count + (store.delete(key) ? 1 : 0), 0);
    case 'EXISTS': return args.filter(key => store.has(key)).length;
    case 'HSET': {
      const hash = store.get(args[0]) instanceof Map ? store.get(args[0]) : new Map();
      let added = 0;
      for (let i = 1; i + 1 < args.length; i += 2) { if (!hash.has(args[i])) added++; hash.set(args[i], args[i + 1]); }
      store.set(args[0], hash); return added;
    }
    case 'HGET': { const hash = store.get(args[0]); return hash instanceof Map ? hash.get(args[1]) ?? null : null; }
    case 'HGETALL': { const hash = store.get(args[0]); return hash instanceof Map ? [...hash].flat() : []; }
    case 'QUIT': return ok;
    default: return new Error(`ERR unknown command '${name}'`);
    }
  };
  const sockets = new Set();
  const server = createServer(socket => {
    sockets.add(socket);
    let pending = Buffer.alloc(0);
    socket.on('data', chunk => {
      const [commands, rest] = parse(Buffer.concat([pending, chunk]));
      pending = rest;
      for (const command of commands) socket.write(encode(handle(command)));
    });
    socket.on('error', () => {});
    socket.on('close', () => sockets.delete(socket));
  });
  await new Promise((resolve, reject) => { server.once('error', reject); server.listen(0, '127.0.0.1', resolve); });
  return { port: server.address().port, reset() { store = new Map(); },
    close() { for (const socket of sockets) socket.destroy(); server.close(); } };
}
