// Differential ordinary-Lean socket setup, including errors before listening.
import { mkdirSync, readFileSync, writeFileSync, existsSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
if (!option('--output') || !option('--toolchains')) throw new Error('Supply --output NEW_DIRECTORY and --toolchains COMMA_SEPARATED_FACADES');
const output = resolve(option('--output'));
const timeoutSeconds = Number(option('--timeout-seconds', '180'));
if (!Number.isInteger(timeoutSeconds) || timeoutSeconds < 10 || timeoutSeconds > 600)
  throw new Error('--timeout-seconds must be 10..600');
if (existsSync(output)) throw new Error('Use a fresh output directory');
const source = resolve(option('--source', join(root, 'test/fixtures/tcp-binding/Main.lean')));
const application = option('--application') && resolve(option('--application'));
const facades = option('--toolchains').split(',').map(path => resolve(path));
mkdirSync(output, { recursive: true });
const fixture = readFileSync(source);
writeFileSync(join(output, 'fixture.lean'), fixture);
const evidence = { leanCommit, sourceSha256: createHash('sha256').update(fixture).digest('hex'),
  timeoutSeconds, application, resourceReport: process.env.LASM_RESOURCE_REPORT,
  scope: 'Additional ordinary-Lean differential fixture for TCP binding, delayed errors, keepalive, port preservation, and half-close in IPv4/IPv6. Not an upstream-suite pass.', results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, command, expected) {
  const started = performance.now();
  const result = spawnSync(executable, command, { cwd: root, encoding: 'utf8', timeout: timeoutSeconds * 1000,
    maxBuffer: 1024 * 1024, killSignal: 'SIGKILL' });
  const record = { name, executable, command, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr,
    passed: result.status === 0 && result.stderr === '' && (expected === undefined
      ? result.stdout.endsWith('TCP binding comparison completed\n') : result.stdout === expected) };
  evidence.results.push(record); save();
  console.log(`${name}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
  return record;
}
const native = run('native', resolveLean(root).lean, ['-j4', '-s65536', '--run', source]);
if (!native.passed) throw new Error('Native TCP control failed; inspect its result before comparing engines');
for (const facade of facades) {
  const config = JSON.parse(readFileSync(join(facade, 'toolchain.json')));
  if (application) run(config.engine + '-application', config.executable,
    [...(config.engine === 'deno' ? ['run', '-A'] : []), application], native.stdout);
  else {
    const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
    for (const [name, expected] of Object.entries(snapshot.files)) {
      const hash = createHash('sha256');
      for await (const bytes of createReadStream(join(config.build, name))) hash.update(bytes);
      if (hash.digest('hex') !== expected) throw new Error(`Frozen input changed: ${name}`);
    }
    const result = run(config.engine + '-full', join(facade, 'bin/lean'), ['--run', source], native.stdout);
    result.config = config;
    save();
  }
}
evidence.finishedAt = new Date().toISOString(); save();
process.exitCode = evidence.results.every(result => result.passed) ? 0 : 1;
