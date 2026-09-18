import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { createHash } from 'node:crypto';
import { root } from '../../src/toolchain.mjs';

export function compilerIdentity() {
  const hash = createHash('sha256');
  function visit(path) {
    for (const entry of readdirSync(path, { withFileTypes: true }).sort((a,b)=>a.name.localeCompare(b.name))) {
      const child = join(path, entry.name);
      if (entry.isDirectory()) visit(child);
      else hash.update(child).update(readFileSync(child));
    }
  }
  for (const name of ['src', 'runtime', 'scripts/upstream']) visit(join(root, name));
  for (const name of ['scripts/upstream-tests.mjs', 'scripts/build-runtime.mjs']) hash.update(readFileSync(join(root, name)));
  return hash.digest('hex');
}
