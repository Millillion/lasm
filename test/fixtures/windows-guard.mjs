import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';

// Modest, below-cap allocations only: verify descendant accounting without
// exercising allocation failure or OOM behavior on a CI runner.
const held = Buffer.alloc(32 * 1024 * 1024, 0x5a);
if (!process.argv.includes('--child')) {
  const child = spawnSync(process.execPath, [import.meta.filename, '--child'], { stdio: 'inherit' });
  assert.equal(child.status, 0);
}
await new Promise(resolve => setTimeout(resolve, 500));
assert.equal(held.at(-1), 0x5a);
