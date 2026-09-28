// Small, real archive controls. Run beneath run-bounded on Linux or Windows.
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { create } from 'tar';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
mkdirSync('.work', { recursive: true });
const base = mkdtempSync(resolve('.work/compiler-cache-controls-'));
const source = join(base, 'source'), archive = join(base, 'cache.tgz');
const identity = join(base, 'identity.json');
mkdirSync(join(source, 'a'), { recursive: true });
writeFileSync(join(source, 'a/object'), Buffer.from([0, 255, 1, 0, 128]));
writeFileSync(join(source, 'stats'), 'hits 1\n');
writeFileSync(identity, JSON.stringify({ compiler: 'native-control', recipe: 1 }) + '\n');
const tool = fileURLToPath(new URL('../scripts/ci/compiler-cache.mjs', import.meta.url));
function run(args, expectedError, sha256) {
  const result = spawnSync(process.execPath, [tool, ...args], {
    env: { ...process.env, LASM_CHECKPOINT_SHA256: sha256 ?? '' },
    encoding: 'utf8', timeout: 30000, maxBuffer: 256 * 1024,
  });
  assert.ifError(result.error);
  if (expectedError) {
    assert.notEqual(result.status, 0); assert.match(result.stderr, expectedError);
  } else assert.equal(result.status, 0, result.stderr);
  return result;
}
run(['pack', source, archive, identity]);
const receipt = JSON.parse(readFileSync(archive + '.json'));
assert.equal(receipt.files, 2); assert.equal(receipt.sha256, await hashFile(archive));
const restored = join(base, 'restored');
run(['unpack', restored, archive, identity], null, receipt.sha256);
assert.deepEqual(readFileSync(join(restored, 'a/object')), readFileSync(join(source, 'a/object')));
assert.equal(readFileSync(join(restored, 'stats'), 'utf8'), 'hits 1\n');
assert.equal(existsSync(join(restored, 'lasm-checkpoint.json')), false);
const badChecksum = join(base, 'bad-checksum');
run(['unpack', badChecksum, archive, identity], /Checkpoint archive checksum mismatch/, '0'.repeat(64));
assert.equal(existsSync(badChecksum), false);
const wrongIdentity = join(base, 'wrong-identity.json');
writeFileSync(wrongIdentity, JSON.stringify({ compiler: 'different', recipe: 1 }) + '\n');
run(['unpack', join(base, 'wrong-recipe'), archive, wrongIdentity], /AssertionError/, receipt.sha256);
// A newly hashed transport archive must still fail if a member was changed.
writeFileSync(join(source, 'a/object'), Buffer.from([0, 255, 9, 0, 128]));
const altered = join(base, 'altered.tgz');
await create({ cwd: source, file: altered, gzip: true, portable: true }, ['a', 'stats', 'lasm-checkpoint.json']);
run(['unpack', join(base, 'altered'), altered, identity], /AssertionError/, await hashFile(altered));
run(['unpack', restored, archive, identity], /Restore only to a fresh/, receipt.sha256);
console.log(JSON.stringify({ passed: true, base, controls: [
  'binary round trip', 'transport checksum', 'recipe identity', 'member checksum', 'fresh restore only',
] }));
