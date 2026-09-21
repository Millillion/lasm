import { existsSync, createReadStream } from 'node:fs';
import { isAbsolute } from 'node:path';
import { createHash } from 'node:crypto';

export async function verifyDriverArtifacts(artifacts = {}) {
  if (!artifacts || Array.isArray(artifacts) || typeof artifacts !== 'object')
    throw new Error('Invalid driver artifact inventory');
  const entries = Object.entries(artifacts), modified = [];
  for (const [path, expected] of entries) {
    if (!isAbsolute(path) || typeof expected !== 'string' || !/^[a-f0-9]{64}$/.test(expected))
      throw new Error('Driver artifacts require absolute paths and SHA-256 digests');
    if (!existsSync(path)) { modified.push(path); continue; }
    const hash = createHash('sha256');
    for await (const bytes of createReadStream(path)) hash.update(bytes);
    if (hash.digest('hex') !== expected) modified.push(path);
  }
  return { checked: entries.length, modified };
}
