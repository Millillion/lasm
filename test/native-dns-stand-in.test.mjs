// The resolver bridge (operations 115, 116 and address parsing) against a
// scripted getaddrinfo/getnameinfo for Linux, macOS and Windows: record layouts,
// family hints, result order and each platform's EAI_* numbers mapped to libuv's.
import test from 'node:test';
import assert from 'node:assert/strict';
import { getSystemErrorMessage } from 'node:util';
import { installKoffiStandIn, standInKoffi, freshImport } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const source = new URL('../src/native-dns.mjs', import.meta.url);
const family6 = { linux: 10, darwin: 30, win32: 23 };
const libraries = { linux: null, darwin: '/usr/lib/libSystem.B.dylib', win32: 'ws2_32.dll' };

function sockaddr(platform, ipv6, address, port) {
  const bytes = Buffer.alloc(ipv6 ? 28 : 16);
  bytes.writeUInt16BE(port, 2);
  Buffer.from(address).copy(bytes, ipv6 ? 8 : 4);
  return { bytes };
}
async function resolver(platform, { records = [], status = 0, errno = 0, nameStatus = 0, parse } = {}) {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: platform });
  let head = null;
  for (const record of [...records].reverse()) head = { entry: { ...record, next: head } };
  const state = { hints: [], freed: [], conventions: [] };
  const koffi = standInKoffi({
    getaddrinfo: (host, service, hints, result) => { state.hints.push({ host, service, ...hints }); result[0] = status ? null : head; koffi.state.errno = errno; return status; },
    freeaddrinfo: pointer => state.freed.push(pointer),
    getnameinfo: (address, size, host, hostLength, service, serviceLength, flags) => {
      state.name = { address: Buffer.from(address), size, hostLength, serviceLength, flags };
      host.write('localhost\0garbage'); service.write('http\0junk');
      koffi.state.errno = errno; return nameStatus;
    },
    inet_pton: parse ?? ((family, text, output) => {
      state.parsed = [family, text];
      if (text.includes(':')) { if (text === 'bad:') return 0; output[15] = 1; return 1; }
      const parts = text.split('.').map(Number);
      if (parts.length !== 4) return 0;
      output.set(parts); return 1;
    }),
    $decode: (pointer, type) => { state.layout = type.struct; return pointer.entry; },
    $view: (pointer, length) => pointer.bytes.subarray(0, length),
  });
  const original = koffi.ffi.load;
  koffi.ffi.load = path => {
    const library = original(path);
    const func = library.func;
    library.func = (...spec) => { state.conventions.push(spec[0]); return func(...spec); };
    return library;
  };
  koffi.install();
  try {
    const { nativeDns } = await freshImport(source);
    return { dns: nativeDns(), nativeDns, state, koffi, restore: () => Object.defineProperty(process, 'platform', saved) };
  } catch (error) { Object.defineProperty(process, 'platform', saved); throw error; }
}

for (const platform of ['linux', 'darwin', 'win32']) test(`${platform}: addresses keep their order, skip other families and free the list`, async t => {
  const v6 = family6[platform];
  const records = [
    { family: 2, length: 16, address: sockaddr(platform, false, [127, 0, 0, 1], 80) },
    { family: v6, length: 28, address: sockaddr(platform, true, Array(15).fill(0).concat(1), 80) },
    { family: 1, length: 110, address: { bytes: Buffer.alloc(110, 7) } },
    { family: 2, length: 16, address: sockaddr(platform, false, [10, 1, 2, 3], 443) },
  ];
  const { dns, nativeDns, state, koffi, restore } = await resolver(platform, { records });
  t.after(restore);
  assert.equal(nativeDns(), dns);
  assert.deepEqual(koffi.loads, [libraries[platform]]);
  assert.ok(state.conventions.every(convention => convention === (platform === 'win32' ? '__stdcall' : '__cdecl')));
  const result = await dns.getAddrInfo('localhost', 'http', 0);
  assert.deepEqual([...result], [4, 127, 0, 0, 1, ...Array(12).fill(0), 6, ...Array(15).fill(0), 1, 4, 10, 1, 2, 3, ...Array(12).fill(0)]);
  assert.equal(state.freed.length, 1);
  assert.equal(state.freed[0].entry.family, 2);
  for (const [family, hint] of [[0, 0], [1, 2], [2, v6], [3, 0]]) {
    await dns.getAddrInfo('h', 's', family);
    assert.deepEqual(state.hints.at(-1), { host: 'h', service: 's', flags: 0, family: hint, socktype: 0, protocol: 0, length: 0,
      canonical: null, address: null, next: null });
  }
  assert.equal((await dns.getAddrInfo('h', 's')).length, 51);
  // struct addrinfo: BSD and Windows put ai_canonname before ai_addr; Windows' ai_addrlen is a size_t.
  const pointers = platform === 'linux' ? { address: 'void *', canonical: 'void *' } : { canonical: 'void *', address: 'void *' };
  assert.deepEqual(Object.entries(state.layout), Object.entries({ flags: 'int', family: 'int', socktype: 'int', protocol: 'int',
    length: platform === 'win32' ? 'size_t' : 'uint32_t', ...pointers, next: 'void *' }));
  assert.equal(state.hints.at(-1).family, 0);
});

test('an empty result list is no addresses and frees nothing', async t => {
  const { dns, state, restore } = await resolver('linux');
  t.after(restore);
  assert.deepEqual(await dns.getAddrInfo('h', 's', 1), Buffer.alloc(0));
  assert.deepEqual(state.freed, []);
});

const libuv = { EAI_ADDRFAMILY: -3000, EAI_AGAIN: -3001, EAI_BADFLAGS: -3002, EAI_CANCELED: -3003, EAI_FAIL: -3004, EAI_FAMILY: -3005,
  EAI_MEMORY: -3006, EAI_NODATA: -3007, EAI_NONAME: -3008, EAI_OVERFLOW: -3009, EAI_SERVICE: -3010, EAI_SOCKTYPE: -3011,
  EAI_BADHINTS: -3013, EAI_PROTOCOL: -3014 };
const platformCodes = {
  // <netdb.h> EAI_* values of glibc/musl, macOS, and the Winsock errors getaddrinfo returns.
  linux: { EAI_BADFLAGS: -1, EAI_NONAME: -2, EAI_AGAIN: -3, EAI_FAIL: -4, EAI_NODATA: -5, EAI_FAMILY: -6, EAI_SOCKTYPE: -7,
    EAI_SERVICE: -8, EAI_ADDRFAMILY: -9, EAI_MEMORY: -10, EAI_OVERFLOW: -12, EAI_CANCELED: -101 },
  darwin: { EAI_ADDRFAMILY: 1, EAI_AGAIN: 2, EAI_BADFLAGS: 3, EAI_FAIL: 4, EAI_FAMILY: 5, EAI_MEMORY: 6, EAI_NODATA: 7,
    EAI_NONAME: 8, EAI_SERVICE: 9, EAI_SOCKTYPE: 10, EAI_BADHINTS: 12, EAI_PROTOCOL: 13, EAI_OVERFLOW: 14 },
  win32: { EAI_AGAIN: 11002, EAI_BADFLAGS: 10022, EAI_FAIL: 11003, EAI_FAMILY: 10047, EAI_MEMORY: 8, EAI_NONAME: 11001,
    EAI_SERVICE: 10109, EAI_SOCKTYPE: 10044 },
};

for (const [platform, codes] of Object.entries(platformCodes)) test(`${platform}: resolver errors become libuv's EAI errors`, async t => {
  for (const [name, status] of Object.entries(codes)) {
    const { dns, state, restore } = await resolver(platform, { status, records: [{ family: 2, length: 16, address: sockaddr(platform, false, [1, 1, 1, 1], 0) }] });
    t.after(restore);
    await assert.rejects(dns.getAddrInfo('h', 's', 0), error => error.errno === libuv[name] && error.code === name
      && error.message === getSystemErrorMessage(libuv[name]) && error.nativeMessage === true, `${platform} ${name}`);
    assert.deepEqual(state.freed, []);
    restore();
  }
  // An unlisted status keeps its magnitude, as a negative errno.
  const { dns, restore } = await resolver(platform, { status: 77 });
  t.after(restore);
  await assert.rejects(dns.getAddrInfo('h', 's', 0), { errno: -77 });
  restore();
});

test('EAI_SYSTEM reports the saved errno, or a resolver error without one', async t => {
  for (const [platform, status] of [['linux', -11], ['darwin', 11]]) {
    const { dns, restore } = await resolver(platform, { status, errno: 13 });
    t.after(restore);
    await assert.rejects(dns.getAddrInfo('h', 's', 0), { errno: -13, code: 'EACCES', message: getSystemErrorMessage(-13) });
    restore();
    const none = await resolver(platform, { status, errno: 0 });
    t.after(none.restore);
    await assert.rejects(none.dns.getAddrInfo('h', 's', 0), { errno: -0, code: 'EIO', message: `Resolver error ${status}` });
    none.restore();
  }
  // Windows has no EAI_SYSTEM: 11 is an ordinary unlisted status there, and -11 on macOS.
  const windows = await resolver('win32', { status: 11, errno: 13 });
  t.after(windows.restore);
  await assert.rejects(windows.dns.getAddrInfo('h', 's', 0), { errno: -11 });
  windows.restore();
});

for (const platform of ['linux', 'darwin', 'win32']) test(`${platform}: name lookup builds the native sockaddr and returns host NUL service`, async t => {
  const { dns, state, restore } = await resolver(platform);
  t.after(restore);
  const v4 = await dns.getNameInfo(4, '127.0.0.1', 8080);
  assert.deepEqual(v4, Buffer.from('localhost\0http'));
  const expected = Buffer.alloc(16);
  if (platform === 'darwin') { expected[0] = 16; expected[1] = 2; } else expected.writeUInt16LE(2);
  expected.writeUInt16BE(8080, 2); expected.set([127, 0, 0, 1], 4);
  assert.deepEqual(state.name, { address: expected, size: 16, hostLength: 1025, serviceLength: 32, flags: 0 });
  await dns.getNameInfo(6, '::1', 443);
  const expected6 = Buffer.alloc(28);
  if (platform === 'darwin') { expected6[0] = 28; expected6[1] = 30; } else expected6.writeUInt16LE(family6[platform]);
  expected6.writeUInt16BE(443, 2); expected6[23] = 1;
  assert.deepEqual(state.name.address, expected6);
  assert.equal(state.name.size, 28);
  assert.deepEqual(state.parsed, [family6[platform], '::1']);
  const invalid = -3002; // each platform's EAI_BADFLAGS
  await assert.rejects(dns.getNameInfo(4, 'nonsense', 1), { errno: invalid, code: 'EAI_BADFLAGS' });
});

test('a failing name lookup is its EAI error', async t => {
  const { dns, restore } = await resolver('linux', { nameStatus: -2 });
  t.after(restore);
  await assert.rejects(dns.getNameInfo(4, '127.0.0.1', 1), { errno: -3008, code: 'EAI_NONAME' });
});

for (const platform of ['linux', 'darwin', 'win32']) test(`${platform}: addresses parse to libuv's family-tagged form`, async t => {
  const { dns, state, restore } = await resolver(platform);
  t.after(restore);
  assert.deepEqual([...dns.parseAddress(4, '10.0.0.9')], [4, 10, 0, 0, 9, ...Array(12).fill(0)]);
  assert.deepEqual(state.parsed, [2, '10.0.0.9']);
  // A zone index is not part of the address.
  assert.deepEqual([...dns.parseAddress(6, '::1%eth0')], [6, ...Array(15).fill(0), 1]);
  assert.deepEqual(state.parsed, [family6[platform], '::1']);
  assert.throws(() => dns.parseAddress(6, 'bad:'), { errno: -3002, code: 'EAI_BADFLAGS', nativeMessage: true });
});
