// Differential cwd rename/delete probe. Original upstream sources are not edited.
import { existsSync, mkdirSync, readFileSync, writeFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
if (process.platform !== 'linux') throw new Error('This comparison requires a Linux host');
const [outputArg, ...facades] = process.argv.slice(2);
if (!outputArg || !facades.length) throw new Error('Supply NEW_OUTPUT and one or more full-toolchain directories');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
const source = join(root, 'test/fixtures/cwd-tracking/Main.lean');
const bytes = readFileSync(source), executedSource = join(output, 'fixture.lean');
writeFileSync(executedSource, bytes);
const deletedSource = join(root, 'test/fixtures/cwd-tracking/DeletedProcess.lean');
const deletedBytes = readFileSync(deletedSource), executedDeletedSource = join(output, 'deleted-process.lean');
writeFileSync(executedDeletedSource, deletedBytes);
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const evidence = { leanCommit, source, executedSource, sourceSha256: digest(bytes),
  scope: 'Supplementary Linux cwd rename/delete comparison; not an upstream-suite result.',
  resourceReport: process.env.LASM_RESOURCE_REPORT, results: [],
  deletedProcess: { source: deletedSource, executedSource: executedDeletedSource, sourceSha256: digest(deletedBytes),
    scope: 'Lasm safety regression only: pinned native Lean crashes in this ENOENT branch; no native parity claim.', results: [] } };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, config) {
  const started = performance.now();
  const result = spawnSync(executable, ['--run', executedSource, output], {
    encoding: 'utf8', timeout: 180_000, maxBuffer: 128 * 1024, killSignal: 'SIGKILL',
    env: process.env,
  });
  const record = { name, executable, config, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr,
    passed: result.status === 0 && result.stderr === '' && (evidence.results.length
      ? result.stdout === evidence.results[0].stdout
      : result.stdout.endsWith('cwd tracking comparison completed\n')) };
  evidence.results.push(record); save();
  console.log(`${name}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
  return record;
}
try {
  if (!run('native', resolveLean(root).lean).passed) throw new Error('Native fixture failed; inspect before comparing engines');
  for (const facade of facades.map(path => resolve(path))) {
    const config = JSON.parse(readFileSync(join(facade, 'toolchain.json')));
    const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
    for (const [name, expected] of Object.entries(snapshot.files)) {
      const hash = createHash('sha256');
      for await (const bytes of createReadStream(join(config.build, name))) hash.update(bytes);
      if (hash.digest('hex') !== expected) throw new Error(`Frozen input changed: ${name}`);
    }
    run(config.engine, join(facade, 'bin/lean'), config);
    const started = performance.now();
    const removed = spawnSync(join(facade, 'bin/lean'), ['--run', executedDeletedSource, join(output, 'deleted-directory')], {
      encoding: 'utf8', timeout: 180_000, maxBuffer: 128 * 1024, killSignal: 'SIGKILL',
    });
    const record = { name: config.engine, executable: join(facade, 'bin/lean'),
      seconds: (performance.now() - started) / 1000, code: removed.status, signal: removed.signal,
      error: removed.error?.message, stdout: removed.stdout, stderr: removed.stderr,
      passed: removed.status === 0 && removed.stderr === ''
        && removed.stdout === 'before deleted process cwd\nerror: IO.Error.noFileOrDirectory "" 2 "No such file or directory"\n' };
    evidence.deletedProcess.results.push(record); save();
    console.log(`${config.engine} deleted Process cwd safety: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
  }
} finally {
  evidence.executedSourceUnchanged = digest(readFileSync(executedSource)) === evidence.sourceSha256;
  evidence.deletedProcess.executedSourceUnchanged = digest(readFileSync(executedDeletedSource)) === evidence.deletedProcess.sourceSha256;
  evidence.finishedAt = new Date().toISOString(); save();
}
process.exitCode = evidence.executedSourceUnchanged && evidence.deletedProcess.executedSourceUnchanged
  && evidence.results.every(result => result.passed) && evidence.deletedProcess.results.every(result => result.passed) ? 0 : 1;
