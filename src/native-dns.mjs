// Use the host resolver's full getaddrinfo/getnameinfo contract, including
// service names, result order, and repeated addresses for distinct protocols.
// node:dns.lookup intentionally discards parts of that contract.
import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { getSystemErrorMessage, getSystemErrorName } from 'node:util';

const require = createRequire(import.meta.url);
let implementation;
export function nativeDns() {
  if (implementation) return implementation;
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const windows = process.platform === 'win32', darwin = process.platform === 'darwin';
  const library = ffi.load(windows ? 'ws2_32.dll' : darwin ? '/usr/lib/libSystem.B.dylib' : null);
  const family6 = windows ? 23 : darwin ? 30 : 10;
  // The ABI has different pointer order on BSD/Windows and Linux, and Windows
  // uses size_t rather than socklen_t. Koffi supplies the native alignment.
  const addressInfo = ffi.struct({
    flags: 'int', family: 'int', socktype: 'int', protocol: 'int', length: windows ? 'size_t' : 'uint32_t',
    ...(windows || darwin ? { canonical: 'void *', address: 'void *' } : { address: 'void *', canonical: 'void *' }),
    next: 'void *',
  });
  const bind = (name, result, args) => library.func(windows ? '__stdcall' : '__cdecl', name, result, args);
  const getInfo = bind('getaddrinfo', 'int', ['str', 'str', ffi.pointer(addressInfo), ffi.out(ffi.pointer('void *'))]);
  const freeInfo = bind('freeaddrinfo', 'void', ['void *']);
  const getName = bind('getnameinfo', 'int', ['void *', 'uint32_t', 'void *', 'uint32_t', 'void *', 'uint32_t', 'int']);
  const parseIp = bind(windows ? 'InetPtonA' : 'inet_pton', 'int', ['int', 'str', 'void *']);
  const linuxErrors = { '-1': -3002, '-2': -3008, '-3': -3001, '-4': -3004, '-5': -3007,
    '-6': -3005, '-7': -3011, '-8': -3010, '-9': -3000, '-10': -3006, '-12': -3009, '-101': -3003 };
  const darwinErrors = { 1: -3000, 2: -3001, 3: -3002, 4: -3004, 5: -3005, 6: -3006,
    7: -3007, 8: -3008, 9: -3010, 10: -3011, 12: -3013, 13: -3014, 14: -3009 };
  const windowsErrors = { 11002: -3001, 10022: -3002, 11003: -3004, 10047: -3005,
    8: -3006, 11001: -3008, 10109: -3010, 10044: -3011 };
  function failure(code, savedErrno) {
    const map = windows ? windowsErrors : darwin ? darwinErrors : linuxErrors;
    const errno = code === (darwin ? 11 : -11) ? -savedErrno : (map[code] ?? -Math.abs(code));
    let message, name;
    try { message = getSystemErrorMessage(errno); name = getSystemErrorName(errno); }
    catch { message = `Resolver error ${code}`; name = 'EIO'; }
    return Object.assign(new Error(message), { errno, code: name, nativeMessage: true });
  }
  const call = (fn, ...args) => new Promise((resolve, reject) => fn.async(...args, (error, result) => {
    const errno = ffi.errno();
    if (error) reject(error); else if (result) reject(failure(result, errno)); else resolve();
  }));
  implementation = {
    async getAddrInfo(host, service, family = 0) {
      const result = [null];
      const hints = { flags: 0, family: family === 1 ? 2 : family === 2 ? family6 : 0, socktype: 0,
        protocol: 0, length: 0, canonical: null, address: null, next: null };
      try {
        await call(getInfo, host, service, hints, result);
        const addresses = [];
        for (let pointer = result[0]; pointer; ) {
          const entry = ffi.decode(pointer, addressInfo);
          if (entry.family === 2 || entry.family === family6) {
            const ipv6 = entry.family === family6;
            const socket = Buffer.from(ffi.view(entry.address, Number(entry.length)));
            const encoded = Buffer.alloc(17); encoded[0] = ipv6 ? 6 : 4;
            socket.copy(encoded, 1, ipv6 ? 8 : 4, ipv6 ? 24 : 8);
            addresses.push(encoded);
          }
          pointer = entry.next;
        }
        return Buffer.concat(addresses);
      } finally { if (result[0]) freeInfo(result[0]); }
    },
    async getNameInfo(family, ip, port) {
      const ipv6 = family === 6, size = ipv6 ? 28 : 16;
      const address = Buffer.alloc(size), af = ipv6 ? family6 : 2;
      if (darwin) { address[0] = size; address[1] = af; } else address.writeUInt16LE(af);
      address.writeUInt16BE(port, 2);
      if (parseIp(af, ip, address.subarray(ipv6 ? 8 : 4)) !== 1)
        throw failure(windows ? 10022 : darwin ? 3 : -1, ffi.errno());
      const host = Buffer.alloc(1025), service = Buffer.alloc(32);
      await call(getName, address, size, host, host.length, service, service.length, 0);
      return Buffer.concat([host.subarray(0, host.indexOf(0) + 1), service.subarray(0, service.indexOf(0))]);
    },
  };
  return implementation;
}
