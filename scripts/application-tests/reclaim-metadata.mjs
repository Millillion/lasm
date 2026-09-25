// Parallel-harness resource adaptation. Never used by the shipping builder.
import assert from 'node:assert/strict';
import { readFile, realpath, rm } from 'node:fs/promises';
import { join, resolve, dirname } from 'node:path';
import { createHash } from 'node:crypto';
import { fileInventory } from '../../src/application-files.mjs';
import { findApplicationProject } from '../../src/application-sources.mjs';

export async function reclaimApplicationBuildMetadata(sourceArg, deploymentArg) {
  const source = resolve(sourceArg), deployment = resolve(deploymentArg);
  const info = JSON.parse(await readFile(join(deployment, 'build-info.json')));
  if (!info.moduleDataIdentity) return null;
  const metadata = JSON.parse(await readFile(join(deployment, 'lean/metadata.json')));
  assert.equal(createHash('sha256').update(JSON.stringify(metadata)).digest('hex'),
    info.moduleDataIdentity, 'Deployed metadata differs from its recorded build identity');
  assert.equal(metadata.bytes, info.moduleDataBytes);
  const project = findApplicationProject(source) ?? dirname(source);
  const key = createHash('sha256').update(source).digest('hex').slice(0, 16);
  return reclaimBuildMetadata(project, key, info.signature, deployment);
}

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
