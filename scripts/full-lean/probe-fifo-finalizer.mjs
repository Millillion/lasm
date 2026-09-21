// Reproduce buffered-pipe finalization with ordinary Lean and a smaller host
// control. Every child has an external deadline; no intentional memory stress.
import { mkdirSync, readFileSync, writeFileSync, openSync, closeSync, constants, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createRequire } from 'node:module';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
if (process.platform !== 'linux') throw new Error('This FIFO capacity diagnostic currently requires Linux');
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const outputArg = option('--output'), facadesArg = option('--toolchains');
if (!outputArg || !facadesArg) throw new Error('Supply --output NEW_DIRECTORY and --toolchains COMMA_SEPARATED_FACADES');
const timeoutSeconds = Number(option('--timeout-seconds', '180'));
if (!Number.isInteger(timeoutSeconds) || timeoutSeconds < 10 || timeoutSeconds > 600)
  throw new Error('--timeout-seconds must be 10..600');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output directory');
mkdirSync(output, { recursive: true });
const facades = facadesArg.split(',').map(resolvePath => resolve(resolvePath));
const application = option('--application') && resolve(option('--application'));
if (application && !existsSync(application)) throw new Error('Packaged application entry point is missing');
const ffi = createRequire(import.meta.url)('koffi');
const fcntl = ffi.load(null).func('int fcntl(int fd, int command)');
const source = resolve(option('--source', join(root, 'scripts/full-lean/probes/FifoFinalizer.lean')));
const sourceSha256 = createHash('sha256').update(readFileSync(source)).digest('hex');
writeFileSync(join(output, 'fixture.lean'), readFileSync(source));
const evidence = { leanCommit, sourceSha256, timeoutSeconds, application, resourceReport: process.env.LASM_RESOURCE_REPORT,
  scope: 'Additional Linux differential fixture. A FIFO is held open by the harness while its measured capacity plus 2048 bytes is written through a buffered handle. A delayed reader must remain able to run when the writer is finalized. This is not an upstream-suite pass.',
  results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
save();
function run(name, executable, command, env = {}, isHost = false) {
  const pipePath = join(output, name + '.fifo');
  const created = spawnSync('mkfifo', [pipePath], { encoding: 'utf8' });
  if (created.status !== 0) throw new Error(created.stderr);
  // The inherited descriptors are closed in the child. Keeping this parent
  // descriptor open retains the measured pipe allocation, without consuming it.
  const fd = openSync(pipePath, constants.O_RDWR | constants.O_NONBLOCK);
  try {
    const capacity = fcntl(fd, 1032); // Linux F_GETPIPE_SZ
    if (capacity <= 0 || capacity > 1024 * 1024 || capacity % 4096 !== 0) throw new Error('Unexpected Linux pipe capacity');
    const started = performance.now();
    const result = spawnSync(executable, [...command, pipePath, String(capacity + 2048)], {
      cwd: root, env: { ...process.env, ...env }, encoding: 'utf8', maxBuffer: 1024 * 1024,
      timeout: isHost ? 5_000 : timeoutSeconds * 1000, killSignal: 'SIGKILL',
    });
    const expected = (isHost ? 'writer buffered\n' : '') + 'buffered FIFO finalizer and delayed reader completed\n';
    const record = { name, executable, command, environment: env, capacity, seconds: (performance.now() - started) / 1000,
      code: result.status, signal: result.signal, error: result.error?.message,
      stdout: result.stdout, stderr: result.stderr,
      passed: result.status === 0 && result.stdout === expected && result.stderr === '' };
    evidence.results.push(record); save();
    console.log(`${name}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
    return record;
  } finally { closeSync(fd); }
}
if (!args.includes('--host-only')) {
  const native = run('native', resolveLean(root).lean, ['-j4', '-s65536', '--run', source]);
  if (!native.passed) throw new Error('Native FIFO control failed; inspect comparison.json before running engine comparisons');
}
for (const facade of facades) {
  const config = JSON.parse(readFileSync(join(facade, 'toolchain.json')));
  const host = resolve(option('--host-module') ?? join(config.build, 'host/node-host.mjs'));
  run(config.engine + '-host', config.executable,
    [...config.engineArgs, join(root, 'test/fixtures/fifo-finalizer-host.mjs'), host], config.engineEnvironment, true);
  if (!args.includes('--host-only')) {
    // Packaged applications must run with the ordinary engine flags. The
    // full compiler's Linux stack adjustments are not portable launcher defaults.
    if (application) run(config.engine + '-application', config.executable,
      [...(config.engine === 'deno' ? ['run', '-A'] : []), application]);
    else run(config.engine + '-lean', join(facade, 'bin/lean'), ['--run', source]);
  }
}
evidence.finishedAt = new Date().toISOString();
save();
process.exitCode = evidence.results.every(result => result.passed) ? 0 : 1;
