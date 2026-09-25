import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync, existsSync, cpSync, rmSync, openSync, closeSync } from 'node:fs';
import { join, dirname, basename } from 'node:path';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { verifyMixedSources } from './mixed-sources.mjs';
import { campaignSourceEvidence } from './upstream-evidence.mjs';
await ensureResourceGuard();
const [manifestFile, name] = process.argv.slice(2);
const manifest = JSON.parse(readFileSync(manifestFile));
assert.equal(manifest.category, 'mixed-native-build-time');
const test = manifest.tests.find(test => test.name === name);
assert.ok(test && ['native-build-time', 'upstream-disabled'].includes(test.phase));
const evidence = join(manifest.output, 'cases', name.replaceAll('/', '__'));
assert.ok(!existsSync(evidence), 'Preserve earlier case evidence');
mkdirSync(evidence, { recursive: true });
const { sources } = campaignSourceEvidence(manifest);
const workspace = join(evidence, 'workspace');
cpSync(manifest.source, workspace, { recursive: true, preserveTimestamps: true, verbatimSymlinks: true });
const before = await verifyMixedSources(workspace, sources);
assert.deepEqual(before.modified, []);
const driver = join(workspace, test.driver), source = join(workspace, test.source);
assert.equal(await hashFile(source), test.sha256);
const env = { ...process.env, ...manifest.environment };
for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete env[key];
Object.assign(env, { TEST_DIR: join(workspace, 'tests'), SRC_DIR: join(workspace, 'src'),
  SCRIPT_DIR: join(workspace, 'script'), LEAN_SRC_PATH: join(workspace, 'src') + ':' + join(workspace, 'src/lake'),
  LEAN_NUM_THREADS: '1', LEAN_HEADER_SNAPSHOTS: '0',
  GIT_CONFIG_COUNT: '1', GIT_CONFIG_KEY_0: 'commit.gpgsign', GIT_CONFIG_VALUE_0: 'false' });
const lake = test.source.startsWith('tests/lake/');
const args = [manifest.nativeEnvironment, lake ? 'lake' : 'ordinary', driver];
if (test.driver === 'tests/misc/run_test.sh') args.push(basename(source));
const startedAt = new Date().toISOString();
const log = openSync(join(evidence, 'native.log'), 'wx');
let execution;
try {
  execution = spawnSync('/bin/bash', args, { cwd: dirname(source), env,
    stdio: ['ignore', log, log], timeout: manifest.timeoutSeconds * 1000 });
} finally { closeSync(log); }
const after = await verifyMixedSources(workspace, sources);
const status = execution.error?.code === 'ETIMEDOUT' ? 'timeout'
  : execution.status !== 0 ? 'failed' : test.phase === 'upstream-disabled' ? 'upstream-disabled' : 'passed';
const result = { name, category: manifest.category, scope: manifest.scope, phase: test.phase,
  startedAt, finishedAt: new Date().toISOString(), status, exitCode: execution.status,
  signal: execution.signal, error: execution.error?.message, sourceSha256: test.sha256,
  originalCopyBefore: before, originalCopyAfter: after,
  fixtureMutationScope: 'Changes made by the unchanged upstream driver in its independent copy; pristine reference is verified separately',
  command: ['/bin/bash', ...args] };
writeFileSync(join(evidence, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify({ name, status, originalFixturesChanged: after.modified.length }));
if (['passed', 'upstream-disabled'].includes(status)) {
  rmSync(workspace, { recursive: true });
} else {
  console.error(readFileSync(join(evidence, 'native.log'), 'utf8').slice(-32000));
}
process.exitCode = status === 'upstream-disabled' ? 77 : execution.status ?? 1;
