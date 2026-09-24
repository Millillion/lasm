// Parallel-harness resource adaptation. Never used by the shipping builder.
import assert from 'node:assert/strict';
import { readFile, realpath, rm } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { fileInventory } from '../../src/application-files.mjs';

export async function reclaimBuildMetadata(projectArg, sourceKey, signature, deploymentArg) {
  assert.match(sourceKey, /^[a-f0-9]{16}$/);
  assert.match(signature, /^[a-f0-9]{64}$/);
  const project = resolve(projectArg), deployment = resolve(deploymentArg);
  const cached = join(project, '.lake/lasm/applications', sourceKey, signature, 'dist/lean');
  const retained = join(deployment, 'lean');
  assert.notEqual(cached, retained);
  assert.equal(await realpath(cached), cached, 'Do not follow cache-directory links');
  assert.equal(await realpath(retained), retained, 'Do not follow deployment-directory links');
  const before = await fileInventory(cached);
  assert.ok(Object.hasOwn(before, 'metadata.json'));
  assert.deepEqual(await fileInventory(retained), before, 'Generated metadata copies differ');
  const metadata = JSON.parse(await readFile(join(retained, 'metadata.json')));
  assert.equal(metadata.schema, 1); assert.ok(Number.isSafeInteger(metadata.bytes) && metadata.bytes > 0);
  // Every retained and cached member has been hashed, including the manifest.
  // The completed CLI has exited. Remove only its redundant generated metadata;
  // originals, native controls, deployed data and all failed artifacts remain.
  await rm(cached, { recursive: true });
  return { removed: cached, retained, files: Object.keys(before).length,
    metadataBytes: metadata.bytes, metadataSha256: before['metadata.json'],
    inventory: before, reason: 'Avoid charging a second generated module-data copy during execution' };
}
