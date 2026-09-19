import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { networkInterfaces } from 'node:os';
import { nativeDns } from './native-dns.mjs';
import { numbers } from './node-host.mjs';

const require = createRequire(import.meta.url);
let readInterfaces;
export async function nativeInterfaces() {
  if (!readInterfaces) {
    if (process.platform === 'win32') {
      readInterfaces = async () => Object.entries(networkInterfaces()).flatMap(([name, addresses]) => addresses.map(address => ({
        name, physical: Buffer.from(address.mac.replaceAll(':', ''), 'hex'), loopback: address.internal,
        address: nativeDns().parseAddress(address.family === 'IPv6' ? 6 : 4, address.address),
        netmask: nativeDns().parseAddress(address.family === 'IPv6' ? 6 : 4, address.netmask),
      })));
    } else {
      const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
      const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
      const darwin = process.platform === 'darwin';
      const library = ffi.load(darwin ? '/usr/lib/libSystem.B.dylib' : null);
      const get = library.func('int getifaddrs(_Out_ void **interfaces)');
      const free = library.func('void freeifaddrs(void *interfaces)');
      const record = ffi.struct({ next: 'void *', name: 'str', flags: 'uint32_t', address: 'void *', netmask: 'void *', other: 'void *', data: 'void *' });
      const family6 = darwin ? 30 : 10, familyLink = darwin ? 18 : 17;
      const ip = (pointer, v6) => {
        const result = Buffer.alloc(17); result[0] = v6 ? 6 : 4;
        if (pointer) Buffer.from(ffi.view(pointer, v6 ? 28 : 16)).copy(result, 1, v6 ? 8 : 4, v6 ? 24 : 8);
        return result;
      };
      readInterfaces = async () => {
        const output = [null];
        await new Promise((resolve, reject) => get.async(output, (error, status) => {
          if (error || status) reject(error ?? new Error('getifaddrs failed')); else resolve();
        }));
        try {
          const addresses = [], physical = [];
          for (let pointer = output[0]; pointer;) {
            const entry = ffi.decode(pointer, record); pointer = entry.next;
            // These are the same UP/RUNNING filters used by pinned libuv 1.48.
            if (!(entry.flags & 1) || !(entry.flags & 64) || !entry.address) continue;
            const family = ffi.decode(entry.address, darwin ? 1 : 0, darwin ? 'uint8_t' : 'uint16_t');
            if (family === familyLink) {
              const start = darwin ? 8 + ffi.decode(entry.address, 6, 'uint8_t') : 12;
              const bytes = Buffer.from(ffi.view(entry.address, start + 6));
              physical.push({ name: entry.name, bytes: Buffer.from(bytes.subarray(start, start + 6)) });
            } else if (family === 2 || family === family6) {
              addresses.push({ name: entry.name, physical: Buffer.alloc(6), loopback: !!(entry.flags & 8),
                address: ip(entry.address, family === family6), netmask: ip(entry.netmask, family === family6) });
            }
          }
          for (const item of physical) for (const address of addresses)
            if (address.name === item.name || !darwin && address.name.startsWith(item.name + ':')) address.physical = item.bytes;
          return addresses;
        } finally { if (output[0]) free(output[0]); }
      };
    }
  }
  const interfaces = await readInterfaces();
  return Buffer.concat([numbers(interfaces.length), ...interfaces.flatMap(value => {
    const name = Buffer.from(value.name);
    return [numbers(name.length), name, value.physical, Buffer.from([value.loopback ? 1 : 0]), value.address, value.netmask];
  })]);
}
