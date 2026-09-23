import { open } from 'node:fs/promises';

const architecture = type => ({ 62: 'x64', 183: 'arm64', 0x8664: 'x64', 0xaa64: 'arm64',
  0x01000007: 'x64', 0x0100000c: 'arm64' })[type];

/** Inspect the executable header, not an emulated process's reported target. */
export function programArchitectures(bytes) {
  if (bytes.length < 24) throw new Error('Truncated native executable header');
  if (bytes.subarray(0, 4).equals(Buffer.from([127, 69, 76, 70])) && bytes[4] === 2 && bytes[5] === 1)
    return { platform: 'linux', architectures: [architecture(bytes.readUInt16LE(18))].filter(Boolean) };
  if (bytes.toString('ascii', 0, 2) === 'MZ' && bytes.length >= 64) {
    const offset = bytes.readUInt32LE(60);
    if (offset + 6 > bytes.length || bytes.readUInt32LE(offset) !== 0x00004550) throw new Error('Invalid PE executable header');
    return { platform: 'win32', architectures: [architecture(bytes.readUInt16LE(offset + 4))].filter(Boolean) };
  }
  if (bytes.readUInt32LE(0) === 0xfeedfacf)
    return { platform: 'darwin', architectures: [architecture(bytes.readUInt32LE(4))].filter(Boolean) };
  const fat = bytes.readUInt32BE(0);
  if ([0xcafebabe, 0xcafebabf].includes(fat)) {
    const count = bytes.readUInt32BE(4), stride = fat === 0xcafebabf ? 32 : 20;
    if (count > 32 || 8 + count * stride > bytes.length) throw new Error('Invalid universal executable header');
    return { platform: 'darwin', architectures: Array.from({ length: count }, (_, i) => architecture(bytes.readUInt32BE(8 + i * stride))).filter(Boolean) };
  }
  throw new Error('Unsupported native executable header');
}

export async function verifyNativeProgram(path, platform = process.platform, arch = process.arch) {
  const file = await open(path, 'r');
  let identity;
  try {
    const bytes = Buffer.alloc(64 * 1024);
    const read = await file.read(bytes, 0, bytes.length, 0);
    identity = programArchitectures(bytes.subarray(0, read.bytesRead));
  } finally { await file.close(); }
  if (identity.platform !== platform || !identity.architectures.includes(arch))
    throw new Error(`Native tool architecture mismatch for ${platform}-${arch}: ${path} (${JSON.stringify(identity)})`);
  return identity;
}
