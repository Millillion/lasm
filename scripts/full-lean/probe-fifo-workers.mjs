// Four blocking reads exercise progress, without memory pressure or large data.
import { mkdirSync, readFileSync, writeFileSync, openSync, closeSync, constants, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
if (process.platform !== 'linux') throw new Error('This FIFO diagnostic currently requires Linux');
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const outputArg = option('--output'), facadesArg = option('--toolchains');
if (!outputArg || !facadesArg) throw new Error('Supply --output NEW_DIRECTORY and --toolchains COMMA_SEPARATED_FACADES');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output directory');
mkdirSync(output, { recursive: true });
const source = join(output, 'FifoWorkers.lean');
writeFileSync(source, readFileSync(join(root, 'scripts/full-lean/probes/FifoWorkers.lean')));
const evidence = { leanCommit, resourceReport: process.env.LASM_RESOURCE_REPORT,
  sourceSha256: createHash('sha256').update(readFileSync(source)).digest('hex'),
  scope: 'Supplementary ordinary-Lean differential fixture. Four one-byte FIFO reads must leave writes able to run. The parent keeps each FIFO open. UV_THREADPOOL_SIZE=4 is explicit; no upstream tests are changed.', results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, command, env = {}, isHost = false) {
  const directory = join(output, name); mkdirSync(directory);
  const descriptors = [];
  try {
    for (let i = 0; i < 4; i++) {
      const path = join(directory, i + '.fifo');
      const created = spawnSync('mkfifo', [path], { encoding: 'utf8' });
      if (created.status !== 0) throw new Error(created.stderr);
      descriptors.push(openSync(path, constants.O_RDWR | constants.O_NONBLOCK));
    }
    const started = performance.now();
    const result = spawnSync(executable, [...command, directory], {
      cwd: root, env: { ...process.env, ...env, UV_THREADPOOL_SIZE: '4' },
      encoding: 'utf8', maxBuffer: 256 * 1024,
      timeout: isHost ? 5000 : 180000, killSignal: 'SIGKILL',
    });
    const expected = 'four readers started\nconcurrent FIFO reads and writes completed\n';
    const record = { name, executable, command, seconds: (performance.now() - started) / 1000,
      code: result.status, signal: result.signal, error: result.error?.message,
      stdout: result.stdout, stderr: result.stderr,
      passed: result.status === 0 && result.stdout === expected && result.stderr === '' };
    evidence.results.push(record); save();
    console.log(`${name}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
    return record;
  } finally { for (const fd of descriptors) closeSync(fd); }
}
const native = run('native', resolveLean(root).lean, ['-j4', '-s65536', '--run', source]);
if (!native.passed) throw new Error('Native FIFO control failed');
for (const facade of facadesArg.split(',').map(path => resolve(path))) {
  const config = JSON.parse(readFileSync(join(facade, 'toolchain.json')));
  const host = resolve(option('--host-module') ?? join(config.build, 'host/node-host.mjs'));
  run(config.engine + '-host', config.executable,
    [...config.engineArgs, join(root, 'test/fixtures/fifo-workers-host.mjs'), host], config.engineEnvironment, true);
  if (!args.includes('--host-only')) run(config.engine + '-lean', join(facade, 'bin/lean'), ['--run', source]);
}
evidence.finishedAt = new Date().toISOString(); save();
process.exitCode = evidence.results.every(result => result.passed) ? 0 : 1;
