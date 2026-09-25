// One CTest case. Results and output fingerprints survive removal of large,
// successful temporary binaries. Failed artifacts stay available for diagnosis.
import { readFileSync, writeFileSync, existsSync, mkdirSync, rmSync, copyFileSync } from 'node:fs';
import { resolve, join, dirname, basename } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [manifestFile, testName] = process.argv.slice(2);
const manifest = JSON.parse(readFileSync(manifestFile, 'utf8'));
const test = manifest.tests.find(test => test.name === testName);
if (!test) throw new Error('Unknown application test');
const evidence = join(manifest.output, 'cases', testName.replaceAll('/', '__'));
if (existsSync(evidence)) throw new Error('Use a fresh campaign to preserve previous evidence');
mkdirSync(evidence, { recursive: true });
const source = join(manifest.source, test.source), cwd = dirname(source);
const env = { ...process.env, ...manifest.environment, LASM_APPLICATION_CASE: evidence };
delete env.LASM_APPLICATION_RUNTIME;
for (const name of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(name)) delete env[name];
Object.assign(env, { LEAN_NUM_THREADS: '2', LEAN_SRC_PATH: join(manifest.source, 'src') + ':' + join(manifest.source, 'src/lake') });
const before = await hashFile(source);
if (before !== test.sha256) throw new Error('Upstream source changed before this test');
const startedAt = new Date().toISOString();
const command = test.category === 'compiled-application'
  ? ['/bin/bash', manifest.compileDriver, basename(source), evidence]
  : ['/bin/bash', manifest.nativeEnvironment, join(manifest.source, test.driver), basename(source)];
const execution = spawnSync(command[0], command.slice(1), { cwd, env, stdio: 'inherit', timeout: manifest.timeoutSeconds * 1000 });
const result = { name: test.name, category: test.category, command, startedAt, finishedAt: new Date().toISOString(),
  exitCode: execution.status, signal: execution.signal, error: execution.error?.message,
  status: execution.error?.code === 'ETIMEDOUT' ? 'timeout' : execution.status === 77 ? 'upstream-compile-disabled'
    : execution.status === 78 ? 'harness-compiler-options-gap' : execution.status === 0 ? 'passed' : 'failed',
  sourceSha256: before, sourceUnchanged: await hashFile(source) === before };
if (existsSync(join(evidence, 'phase.txt'))) result.phase = readFileSync(join(evidence, 'phase.txt'), 'utf8').trim();
const nativeCalls = join(evidence, 'native-compiler-invocations.txt');
if (existsSync(nativeCalls)) result.nativeCompilerInvocations = readFileSync(nativeCalls, 'utf8').trim().split('\n').filter(Boolean);
const reclamation = join(evidence, 'module-data-reclamation.json');
if (existsSync(reclamation)) {
  const receipt = JSON.parse(readFileSync(reclamation));
  result.moduleDataReclamation = { path: reclamation, sha256: await hashFile(reclamation),
    reclaimed: receipt.reclaimed, files: receipt.files, metadataBytes: receipt.metadataBytes };
}
const dist = join(evidence, 'dist');
if (existsSync(join(dist, 'build-info.json'))) {
  result.build = JSON.parse(readFileSync(join(dist, 'build-info.json'), 'utf8'));
  result.wasmSha256 = await hashFile(join(dist, 'program.wasm'));
  copyFileSync(join(dist, 'build-info.json'), join(evidence, 'build-info.json'));
}
writeFileSync(join(evidence, 'result.json'), JSON.stringify(result, null, 2) + '\n');
if (result.status === 'passed' && result.sourceUnchanged) {
  // Each unchanged test has a distinct build key; retaining 100 full runtimes
  // would exhaust this host's disk. Receipts, hashes and all diagnostics remain.
  rmSync(dist, { recursive: true, force: true });
  const key = createHash('sha256').update(resolve(source)).digest('hex').slice(0, 16);
  rmSync(join(cwd, '.lake/lasm/applications', key), { recursive: true, force: true });
  for (const suffix of ['.c', '.out']) rmSync(source + suffix, { force: true });
}
process.exitCode = result.sourceUnchanged ? execution.status ?? 1 : 2;
