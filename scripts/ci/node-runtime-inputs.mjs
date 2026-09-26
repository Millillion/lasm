// A maintainer-only, checksum-addressed handoff between free public CI jobs.
// Installed users receive the runtime inside their npm package.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, cpSync, existsSync, appendFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { c as tar } from 'tar';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyApplicationRuntime } from '../../src/application-runtime.mjs';

await ensureResourceGuard();
const version = JSON.parse(readFileSync(new URL('./acceptance-versions.json', import.meta.url))).lean;
const directory = resolve('.work/node-runtime-inputs');
const archive = resolve('.work/node-runtime-inputs.tgz');
assert.ok(!existsSync(directory) && !existsSync(archive), 'Preserve previous runtime handoffs');
const runtime = resolve(`.work/ci-application-bundle/lean-${version}-wasm64`);
const manifestSha256 = await hashFile(join(runtime, 'target.json'));
await verifyApplicationRuntime(runtime, { name: `lean-${version}-wasm64`, manifestSha256 });
const smoke = JSON.parse(readFileSync('.work/ci-application-runtime/smoke.json'));
assert.equal(smoke.passed, true, 'Only hand off a source-built runtime that passed its smoke comparison');
assert.equal(smoke.candidate.identity, manifestSha256);
mkdirSync(directory);
cpSync(runtime, join(directory, 'runtime'), { recursive: true });
cpSync('.cache/native-host', join(directory, 'native'), { recursive: true });
const provenance = {
  sourceRevision: execFileSync('git', ['rev-parse', 'HEAD'], { encoding: 'utf8' }).trim(),
  lean: version, runtimeManifestSha256: manifestSha256,
  sourceBuild: JSON.parse(readFileSync('.work/ci-application-libraries/build-inputs.json')),
  versions: JSON.parse(readFileSync('.work/ci-application-runtime/versions.json')),
  smoke,
};
writeFileSync(join(directory, 'provenance.json'), JSON.stringify(provenance, null, 2) + '\n');
await tar({ cwd: directory, file: archive, gzip: true, portable: true, mtime: new Date(0) }, ['runtime', 'native', 'provenance.json']);
const sha256 = await hashFile(archive);
const cacheKey = `lasm-node-linux-inputs-${process.env.GITHUB_RUN_ID}-${sha256}`;
writeFileSync('.work/node-runtime-inputs-result.json', JSON.stringify({ archive, sha256, cacheKey, provenance }, null, 2) + '\n');
if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, `sha256=${sha256}\ncache-key=${cacheKey}\n`);
console.log(JSON.stringify({ archive, sha256, cacheKey, sourceRevision: provenance.sourceRevision, runtimeManifestSha256: manifestSha256 }, null, 2));
