import { lstatSync, readlinkSync } from 'node:fs';
import { join } from 'node:path';
import { hashFile } from '../../src/managed-artifacts.mjs';

export async function verifyMixedSources(directory, expected) {
  const modified = [];
  for (const [name, identity] of Object.entries(expected)) {
    try {
      const file = join(directory, name), info = lstatSync(file);
      if ('symlink' in identity ? !info.isSymbolicLink() || readlinkSync(file) !== identity.symlink
        : !info.isFile() || await hashFile(file) !== identity.sha256) modified.push(name);
    } catch { modified.push(name); }
  }
  return { checked: Object.keys(expected).length, modified };
}
