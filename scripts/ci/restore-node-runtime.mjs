// Restore authenticated runtime bytes from a durable retained release asset.
// Actions caches may accelerate other work but are never the only input copy.
import assert from 'node:assert/strict';
import { readFile, mkdir, mkdtemp, rename, rm, writeFile } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { x as untar } from 'tar';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyApplicationRuntime } from '../../src/application-runtime.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const source = JSON.parse(await readFile(new URL('./node-runtime-source.json', import.meta.url), 'utf8'));
assert.equal(source.schema, 1); assert.ok(['candidate', 'handoff'].includes(source.kind));
assert.equal(source.repository, 'Millillion/lasm');
for (const value of [source.asset, source.release, source.runtimeName]) assert.match(value, /^[a-zA-Z0-9][a-zA-Z0-9._-]+$/);
for (const value of [source.sha256, source.runtimeManifestSha256]) assert.match(value, /^[a-f0-9]{64}$/);
const destination = resolve('.work/node-runtime-restored');
assert.ok(!existsSync(destination), 'Use a fresh runner/output for runtime restoration');
await mkdir('.work', { recursive: true });
const staging = await mkdtemp(resolve('.work/.restore-runtime-'));
try {
  const archive = resolve('.work/node-runtime-source.tgz');
  assert.equal(await hashFile(archive), source.sha256, 'Durable runtime input digest must match the reviewed source');
  const unpacked = join(staging, 'unpacked'); await mkdir(unpacked);
  await untar({ file: archive, cwd: unpacked, strict: true, preservePaths: false,
    filter: path => source.kind === 'handoff' || path.startsWith(`package/targets/${source.runtimeName}/`)
      || path.startsWith('package/src/native/') || path === 'package/provenance.json' });
  const base = source.kind === 'candidate' ? join(unpacked, 'package') : unpacked;
  const provenance = JSON.parse(await readFile(join(base, 'provenance.json'), 'utf8'));
  assert.equal(provenance.sourceRevision, source.sourceRevision);
  assert.equal(provenance.runtimeManifestSha256, source.runtimeManifestSha256);
  const runtime = source.kind === 'candidate' ? join(base, 'targets', source.runtimeName) : join(base, 'runtime');
  await verifyApplicationRuntime(runtime, { name: source.runtimeName, manifestSha256: source.runtimeManifestSha256 });
  await mkdir(destination);
  await rename(runtime, join(destination, 'runtime'));
  await rename(source.kind === 'candidate' ? join(base, 'src/native') : join(base, 'native'), join(destination, 'native'));
  await writeFile(join(destination, 'provenance.json'), JSON.stringify(provenance, null, 2) + '\n');
  const result = { source, restored: destination, verifiedAt: new Date().toISOString(), cacheRequired: false };
  await writeFile('.work/node-runtime-restore-result.json', JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result, null, 2));
} finally { await rm(staging, { recursive: true, force: true }); }
