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
