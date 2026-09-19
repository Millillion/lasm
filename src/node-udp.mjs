import dgram from 'node:dgram';
import { numbers } from './node-host.mjs';

const empty = Buffer.alloc(0);
const error = (code, message) => Object.assign(new Error(message), { code });
const decodeAddress = bytes => ({ family: Number(bytes.readBigUInt64LE()),
  port: Number(bytes.readBigUInt64LE(8)), address: bytes.subarray(16).toString() });
const encodeAddress = value => Buffer.concat([
  numbers(value.family === 'IPv6' ? 6 : 4, value.port), Buffer.from(value.address),
]);

export function createNodeUdp({ add, get }) {
  function socket(resource, family = 4) {
    if (resource.socket) {
      if (resource.family !== family) throw error('EAFNOSUPPORT', 'Address family does not match socket');
      return resource.socket;
    }
    const result = resource.socket = dgram.createSocket({ type: family === 6 ? 'udp6' : 'udp4', reuseAddr: true });
    resource.family = family;
    result.on('error', failure => {
      if (resource.waiter) { const waiter = resource.waiter; resource.waiter = undefined; waiter.reject(failure); }
      else resource.error = failure;
    });
    result.on('message', (bytes, peer) => {
      resource.messages.push({ bytes, peer });
      ready(resource);
    });
    return result;
  }
  function ready(resource) {
    const waiter = resource.waiter;
    if (!waiter) return;
    if (resource.error) {
      resource.waiter = undefined;
      const failure = resource.error; resource.error = undefined;
      waiter.reject(failure); return;
    }
    if (!resource.messages.length) return;
    resource.waiter = undefined;
    if (waiter.peek) { waiter.resolve(empty); return; }
    const message = resource.messages.shift();
    const peer = encodeAddress(message.peer);
    waiter.resolve(Buffer.concat([numbers(peer.length), peer, message.bytes.subarray(0, waiter.count)]));
  }
  function eventCall(resource, event, action) {
    return new Promise((resolve, reject) => {
      const cleanup = () => { resource.socket.off(event, done); resource.socket.off('error', failed); };
      const done = () => { cleanup(); resolve(empty); };
      const failed = failure => { cleanup(); if (resource.error === failure) resource.error = undefined; reject(failure); };
      resource.socket.once(event, done); resource.socket.once('error', failed);
      try { action(); } catch (failure) { failed(failure); }
    });
  }
  function receive(resource, count, peek) {
    if (resource.waiter) throw error('EALREADY', 'A receive is already pending');
    socket(resource, resource.family);
    return new Promise((resolve, reject) => {
      resource.waiter = { count, peek, resolve, reject };
      try {
        if (!resource.bound) {
          resource.bound = true;
          resource.socket.bind({ port: 0, address: resource.family === 6 ? '::' : '0.0.0.0' });
        }
        ready(resource);
      } catch (failure) { resource.waiter = undefined; reject(failure); }
    });
  }
  function dispatch(op, id, arg, bytes) {
    if (op === 100) {
      const resource = { type: 'udp', messages: [], family: 4, bound: false };
      resource.close = () => {
        resource.waiter?.reject(error('ECANCELED', 'Operation cancelled'));
        resource.waiter = undefined; resource.messages.length = 0;
        if (resource.socket) {
          try { resource.socket.close(); } catch (failure) { if (failure.code !== 'ERR_SOCKET_DGRAM_NOT_RUNNING') throw failure; }
        }
      };
      return numbers(add(resource));
    }
    const resource = get(id, 'udp');
    const n = Number(arg);
    if (op === 101 || op === 102) {
      const target = decodeAddress(bytes);
      const handle = socket(resource, target.family);
      return eventCall(resource, op === 101 ? 'listening' : 'connect', () => {
        if (op === 101) {
          handle.bind({ port: target.port, address: target.address }); resource.bound = true;
        } else { handle.connect(target.port, target.address); resource.bound = true; resource.connected = true; }
      });
    }
    if (op === 103) {
      if (n === 0) return empty; // Native Lean's empty vector sends no datagram.
      const addressLength = Number(bytes.readBigUInt64LE());
      const target = addressLength ? decodeAddress(bytes.subarray(8, 8 + addressLength)) : undefined;
      const handle = socket(resource, target?.family ?? resource.family);
      const data = bytes.subarray(8 + addressLength);
      return new Promise((resolve, reject) => {
        const done = failure => failure ? reject(failure) : resolve(empty);
        if (target) handle.send(data, target.port, target.address, done);
        else handle.send(data, done);
        resource.bound = true;
      });
    }
    if (op === 104) return receive(resource, n, false);
    if (op === 105) return receive(resource, 0, true);
    if (op === 106) {
      resource.waiter?.reject(error('ECANCELED', 'Operation cancelled'));
      resource.waiter = undefined; return empty;
    }
    if (op === 107) {
      if (!resource.connected) throw error('ENOTCONN', 'Socket is not connected');
      return encodeAddress(resource.socket.remoteAddress());
    }
    if (op === 108) {
      if (!resource.bound) throw error('EBADF', 'Socket has not been bound');
      return encodeAddress(resource.socket.address());
    }
    const handle = socket(resource, resource.family);
    switch (op) {
    case 109: handle.setBroadcast(n !== 0); break;
    case 110: handle.setMulticastLoopback(n !== 0); break;
    case 111: handle.setMulticastTTL(n); break;
    case 112: {
      const [group, network] = bytes.toString().split('\0');
      if (n === 1) handle.addMembership(group, network || undefined);
      else if (n === 0) handle.dropMembership(group, network || undefined);
      else throw error('EINVAL', 'Invalid multicast membership');
      break;
    }
    case 113: handle.setMulticastInterface(bytes.toString()); break;
    case 114: handle.setTTL(n); break;
    default: throw error('ENOSYS', `Unknown UDP operation ${op}`);
    }
    return empty;
  }
  return { dispatch };
}
