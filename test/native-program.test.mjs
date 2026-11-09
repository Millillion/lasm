import test from 'node:test';
import assert from 'node:assert/strict';
import { programArchitectures, verifyNativeProgram } from '../src/native-program.mjs';

test('ELF, PE and Mach-O headers distinguish native x64 from ARM64', () => {
  for (const [arch, elf, pe, macho] of [['x64', 62, 0x8664, 0x01000007], ['arm64', 183, 0xaa64, 0x0100000c]]) {
    const linux = Buffer.alloc(64); linux.set([127, 69, 76, 70, 2, 1]); linux.writeUInt16LE(elf, 18);
    assert.deepEqual(programArchitectures(linux), { platform: 'linux', architectures: [arch] });
    const windows = Buffer.alloc(256); windows.write('MZ'); windows.writeUInt32LE(128, 60);
    windows.writeUInt32LE(0x4550, 128); windows.writeUInt16LE(pe, 132);
    assert.deepEqual(programArchitectures(windows), { platform: 'win32', architectures: [arch] });
    const mac = Buffer.alloc(64); mac.writeUInt32LE(0xfeedfacf); mac.writeUInt32LE(macho, 4);
    assert.deepEqual(programArchitectures(mac), { platform: 'darwin', architectures: [arch] });
  }
});
test('universal Mach-O records available native slices', () => {
  const bytes = Buffer.alloc(64); bytes.writeUInt32BE(0xcafebabe); bytes.writeUInt32BE(2, 4);
  bytes.writeUInt32BE(0x01000007, 8); bytes.writeUInt32BE(0x0100000c, 28);
  assert.deepEqual(programArchitectures(bytes), { platform: 'darwin', architectures: ['x64', 'arm64'] });
  bytes.writeUInt32BE(1000, 4);
  assert.throws(() => programArchitectures(bytes), /Invalid universal/);
});
test('the current Node executable has the selected host architecture', async () => {
  await verifyNativeProgram(process.execPath);
  await assert.rejects(verifyNativeProgram(process.execPath, process.platform, 'unsupported'), /architecture mismatch/);
  assert.throws(() => programArchitectures(Buffer.alloc(3)), /Truncated/);
  assert.throws(() => programArchitectures(Buffer.alloc(64)), /Unsupported/);
});

const elf = (machine, { klass = 2, order = 1, length = 64 } = {}) => {
  const bytes = Buffer.alloc(length); bytes.set([127, 69, 76, 70, klass, order]); bytes.writeUInt16LE(machine, 18); return bytes;
};
const pe = (machine, { offset = 128, length = 256, signature = 0x4550 } = {}) => {
  const bytes = Buffer.alloc(length); bytes.write('MZ'); bytes.writeUInt32LE(offset, 60);
  if (offset + 6 <= length) { bytes.writeUInt32LE(signature, offset); bytes.writeUInt16LE(machine, offset + 4); }
  return bytes;
};
test('headers need 24 bytes, a 64-bit little-endian ELF and a complete PE signature', () => {
  assert.throws(() => programArchitectures(Buffer.alloc(23)), /Truncated native executable header/);
  assert.deepEqual(programArchitectures(elf(62, { length: 24 })), { platform: 'linux', architectures: ['x64'] });
  // 32-bit or big-endian ELF is not a supported executable.
  for (const options of [{ klass: 1 }, { order: 2 }]) assert.throws(() => programArchitectures(elf(62, options)), /Unsupported native executable header/);
  assert.throws(() => programArchitectures(Buffer.concat([Buffer.from([127, 69, 76, 0, 2, 1]), Buffer.alloc(58)])), /Unsupported/);
  // An unknown machine is a recognised platform with no supported architecture.
  assert.deepEqual(programArchitectures(elf(3)), { platform: 'linux', architectures: [] });
  assert.deepEqual(programArchitectures(pe(0x14c)), { platform: 'win32', architectures: [] });
  assert.deepEqual(programArchitectures(pe(0x8664, { offset: 64, length: 70 })), { platform: 'win32', architectures: ['x64'] });
  for (const options of [{ offset: 65, length: 70 }, { offset: 1000 }, { signature: 0x4551 }])
    assert.throws(() => programArchitectures(pe(0x8664, options)), /Invalid PE executable header/, JSON.stringify(options));
  // MZ shorter than a DOS header is not PE.
  const short = Buffer.alloc(63); short.write('MZ');
  assert.throws(() => programArchitectures(short), /Unsupported native executable header/);
  const mac = Buffer.alloc(24); mac.writeUInt32LE(0xfeedfacf); mac.writeUInt32LE(18, 4);
  assert.deepEqual(programArchitectures(mac), { platform: 'darwin', architectures: [] });
});

test('universal headers of both layouts list their slices within the header', () => {
  for (const [magic, stride] of [[0xcafebabe, 20], [0xcafebabf, 32]]) {
    const universal = count => {
      const bytes = Buffer.alloc(8 + count * stride); bytes.writeUInt32BE(magic); bytes.writeUInt32BE(count, 4);
      for (let i = 0; i < count; i++) bytes.writeUInt32BE([0x01000007, 0x0100000c, 7][i % 3], 8 + i * stride);
      return bytes;
    };
    assert.deepEqual(programArchitectures(universal(3)).architectures, ['x64', 'arm64']);
    assert.deepEqual(programArchitectures(universal(32)).architectures.length, 22);
    const tooMany = Buffer.concat([universal(32), Buffer.alloc(stride)]); tooMany.writeUInt32BE(33, 4);
    assert.throws(() => programArchitectures(tooMany), /Invalid universal executable header/);
    const truncated = universal(2).subarray(0, 8 + 2 * stride - 1);
    if (truncated.length >= 24) assert.throws(() => programArchitectures(truncated), /Invalid universal executable header/);
    const padded = Buffer.alloc(8 + 2 * stride); universal(2).copy(padded);
    assert.equal(programArchitectures(padded).architectures.length, 2);
  }
});

test('a program for another platform is refused even with a matching architecture', async () => {
  const other = process.platform === 'linux' ? 'darwin' : 'linux';
  await assert.rejects(verifyNativeProgram(process.execPath, other, process.arch),
    error => error.message.startsWith(`Native tool architecture mismatch for ${other}-${process.arch}: ${process.execPath} (`)
      && JSON.parse(error.message.slice(error.message.indexOf('(') + 1, -1)).platform === process.platform);
  assert.equal((await verifyNativeProgram(process.execPath)).platform, process.platform);
});
