import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { x as untar } from 'tar';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const expected = process.argv[2];
assert.match(expected, /^[a-f0-9]{64}$/);
assert.equal(await hashFile('.work/node-runtime-inputs.tgz'), expected);
const restored = resolve('.work/node-runtime-restored');
assert.ok(!existsSync(restored)); mkdirSync(restored);
await untar({ cwd: restored, file: '.work/node-runtime-inputs.tgz', strict: true, preservePaths: false });
const provenance = JSON.parse(readFileSync(join(restored, 'provenance.json')));
console.log('Authenticated runtime source revision: ' + provenance.sourceRevision);
// Finish extraction before starting a separately guarded packing process. Do not
// retain the archive decoder and its file-cache charge throughout both npm packs.
