// Supplementary native process spawn comparison; upstream tests remain unchanged.
import { existsSync, mkdirSync, symlinkSync, readFileSync, writeFileSync, chmodSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
if (!['linux', 'darwin'].includes(process.platform) || process.getuid?.() === 0)
  throw new Error('The permission comparison requires a non-root POSIX user');
const [outputArg, ...facades] = process.argv.slice(2);
if (!outputArg || !facades.length) throw new Error('Supply NEW_OUTPUT and one or more full-toolchain directories');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'file'), 'file');
writeFileSync(join(output, 'executable-text'), 'printf \'%s\\n\' "$1"\n', { mode: 0o755 });
symlinkSync('loop', join(output, 'loop'));
mkdirSync(join(output, 'denied'), { mode: 0 });
const source = join(root, 'test/fixtures/process-spawn-errors/Main.lean');
const bytes = readFileSync(source);
const executedSource = join(output, 'fixture.lean');
writeFileSync(executedSource, bytes);
const evidence = { leanCommit, source, executedSource, sourceSha256: createHash('sha256').update(bytes).digest('hex'),
  scope: 'Supplementary POSIX child errors, PID, environment, and execvp comparison, not an upstream-suite result.',
  resourceReport: process.env.LASM_RESOURCE_REPORT, results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, config) {
  const started = performance.now();
  const result = spawnSync(executable, ['--run', executedSource, output], {
    encoding: 'utf8', timeout: 180_000, maxBuffer: 128 * 1024, killSignal: 'SIGKILL',
  });
  const record = { name, executable, config, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message, stdout: result.stdout, stderr: result.stderr,
    passed: result.status === 0 && result.stderr === '' && (evidence.results.length
      ? result.stdout === evidence.results[0].stdout
      : result.stdout.match(/child 255/g)?.length === 10
        && result.stdout.endsWith('process spawn error comparison completed\n')) };
  evidence.results.push(record); save();
  console.log(`${name}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
  return record;
}
try {
  if (!run('native', resolveLean(root).lean).passed)
    throw new Error('Native fixture failed; inspect it before comparing engines');
  for (const facade of facades.map(path => resolve(path))) {
    const config = JSON.parse(readFileSync(join(facade, 'toolchain.json')));
    const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
    for (const [name, expected] of Object.entries(snapshot.files)) {
      const hash = createHash('sha256');
      for await (const bytes of createReadStream(join(config.build, name))) hash.update(bytes);
      if (hash.digest('hex') !== expected) throw new Error(`Frozen input changed: ${name}`);
    }
    run(config.engine, join(facade, 'bin/lean'), config);
  }
} finally {
  for (const name of ['denied']) chmodSync(join(output, name), 0o700);
  evidence.executedSourceUnchanged = createHash('sha256').update(readFileSync(executedSource)).digest('hex') === evidence.sourceSha256;
  evidence.finishedAt = new Date().toISOString(); save();
}
process.exitCode = evidence.executedSourceUnchanged && evidence.results.every(result => result.passed) ? 0 : 1;
