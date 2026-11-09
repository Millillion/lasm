// Network interfaces (operation 144) as libuv 1.48's uv_interface_addresses
// reports them, against a scripted getifaddrs for the Linux and macOS record
// layouts (test/native-interfaces-host.test.mjs checks this host's).
import test from 'node:test';
import assert from 'node:assert/strict';
import { networkInterfaces } from 'node:os';
import { installKoffiStandIn, standInKoffi, freshImport } from './helpers/koffi-stand-in.mjs';
import { decode, ip } from './helpers/interfaces.mjs';

installKoffiStandIn();

const source = new URL('../src/native-interfaces.mjs', import.meta.url);
// Scripted getifaddrs records: pointers are plain objects and sockaddrs are their bytes.
function sockaddr(darwin, family, fill) {
  const bytes = Buffer.alloc(family === 'inet6' ? 28 : family === 'link' ? 32 : 16);
  const number = { inet: 2, inet6: darwin ? 30 : 10, link: darwin ? 18 : 17, other: 99 }[family];
  if (darwin) { bytes[0] = bytes.length; bytes[1] = number; } else bytes.writeUInt16LE(number);
  fill(bytes);
  return { bytes };
}
function scripted(darwin, records, { status = 0, error } = {}) {
  let head = null;
  for (const record of [...records].reverse()) head = { entry: { ...record, next: head } };
  const freed = [];
  const koffi = standInKoffi({
    getifaddrs: output => { if (error) throw error; output[0] = head; return status; },
    freeifaddrs: pointer => { freed.push(pointer); },
    $decode: (pointer, offset, type) => {
      if (type === undefined) return pointer.entry;
      return type === 'uint8_t' ? pointer.bytes[offset] : pointer.bytes.readUInt16LE(offset);
    },
    $view: (pointer, length) => pointer.bytes.subarray(0, length),
  });
  return { koffi, freed, head };
}
const UP = 1, RUNNING = 64, LOOPBACK = 8;
const v4 = (darwin, a, b, c, d) => sockaddr(darwin, 'inet', bytes => bytes.set([a, b, c, d], 4));
const v6 = (darwin, last) => sockaddr(darwin, 'inet6', bytes => { bytes[8] = 0xfe; bytes[9] = 0x80; bytes[23] = last; });

for (const darwin of [false, true]) test(`${darwin ? 'macOS' : 'Linux'} records: filters, families, link addresses and aliases`, async t => {
  installKoffiStandIn();
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: darwin ? 'darwin' : 'linux' });
  t.after(() => Object.defineProperty(process, 'platform', saved));
  const mac = [0x02, 0x11, 0x22, 0x33, 0x44, 0x55];
  // macOS: the link address follows the interface name in sdl_data (sdl_nlen at byte 5).
  const link = name => sockaddr(darwin, 'link', bytes => {
    if (darwin) { bytes[5] = name.length; bytes[6] = 6; bytes.write(name, 8); bytes.set(mac, 8 + name.length); } else bytes.set(mac, 12);
  });
  const records = [
    { name: 'en0', flags: UP | RUNNING, address: link('en0') },
    { name: 'en0', flags: UP | RUNNING, address: v4(darwin, 10, 0, 0, 7), netmask: v4(darwin, 255, 255, 255, 0) },
    { name: 'en0', flags: UP | RUNNING, address: v6(darwin, 9), netmask: null },
    { name: 'en0:1', flags: UP | RUNNING, address: v4(darwin, 10, 0, 0, 8), netmask: v4(darwin, 255, 0, 0, 0) },
    { name: 'lo', flags: UP | RUNNING | LOOPBACK, address: v4(darwin, 127, 0, 0, 1), netmask: v4(darwin, 255, 0, 0, 0) },
    { name: 'down', flags: RUNNING, address: v4(darwin, 1, 1, 1, 1), netmask: null },
    { name: 'idle', flags: UP, address: v4(darwin, 2, 2, 2, 2), netmask: null },
    { name: 'none', flags: UP | RUNNING, address: null, netmask: null },
    { name: 'other', flags: UP | RUNNING, address: sockaddr(darwin, 'other', () => {}), netmask: null },
  ];
  const { koffi, freed, head } = scripted(darwin, records);
  koffi.install();
  const { nativeInterfaces } = await freshImport(source);
  const result = decode(await nativeInterfaces());
  const zero = Array(6).fill(0);
  assert.deepEqual(result, [
    { name: 'en0', physical: mac, loopback: 0, address: ip(4, '10.0.0.7'), netmask: ip(4, '255.255.255.0') },
    { name: 'en0', physical: mac, loopback: 0, address: ip(6, 'fe80::9'), netmask: Array(17).fill(0).map((_, i) => i ? 0 : 6) },
    // Linux aliases (en0:1) share their device's link address; macOS has no such aliases.
    { name: 'en0:1', physical: darwin ? zero : mac, loopback: 0, address: ip(4, '10.0.0.8'), netmask: ip(4, '255.0.0.0') },
    { name: 'lo', physical: zero, loopback: 1, address: ip(4, '127.0.0.1'), netmask: ip(4, '255.0.0.0') },
  ]);
  assert.deepEqual(freed, [head]);
  assert.deepEqual(koffi.loads, [darwin ? '/usr/lib/libSystem.B.dylib' : null]);
  // The bound functions are kept: a second query lists again without reloading.
  assert.equal(decode(await nativeInterfaces()).length, 4);
  assert.equal(koffi.loads.length, 1);
});

test('a failing getifaddrs is an error, and an empty list frees nothing', async t => {
  installKoffiStandIn();
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: 'linux' });
  t.after(() => Object.defineProperty(process, 'platform', saved));
  scripted(false, [], { status: -1 }).koffi.install();
  await assert.rejects((await freshImport(source)).nativeInterfaces(), { message: 'getifaddrs failed' });
  scripted(false, [], { error: new Error('ffi failure') }).koffi.install();
  await assert.rejects((await freshImport(source)).nativeInterfaces(), { message: 'ffi failure' });
  const empty = scripted(false, []);
  empty.koffi.install();
  assert.deepEqual(decode(await (await freshImport(source)).nativeInterfaces()), []);
  assert.deepEqual(empty.freed, []);
});

test('Windows lists the engine\'s interfaces with parsed addresses', async t => {
  installKoffiStandIn();
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: 'win32' });
  t.after(() => Object.defineProperty(process, 'platform', saved));
  // The Windows resolver bindings exist; parseAddress is replaced below.
  standInKoffi(Object.fromEntries(['getaddrinfo', 'freeaddrinfo', 'getnameinfo', 'inet_pton'].map(name => [name, () => 0]))).install();
  const { nativeInterfaces } = await freshImport(source);
  const { nativeDns } = await import('../src/native-dns.mjs');
  t.mock.method(nativeDns(), 'parseAddress', (family, text) => Buffer.from(ip(family, text.split('%')[0])));
  const expected = Object.entries(networkInterfaces()).flatMap(([name, addresses]) => addresses.map(address => ({
    name, physical: address.mac.split(':').map(part => parseInt(part, 16)), loopback: address.internal ? 1 : 0,
    address: ip(address.family === 'IPv6' ? 6 : 4, address.address.split('%')[0]), netmask: ip(address.family === 'IPv6' ? 6 : 4, address.netmask),
  })));
  assert.deepEqual(decode(await nativeInterfaces()), expected);
});
