// Supplementary ordinary Lean controls; upstream tests remain unchanged.
import { existsSync, mkdirSync, readFileSync, writeFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const [outputArg, ...facades] = process.argv.slice(2);
if (!outputArg || !facades.length) throw new Error('Supply NEW_OUTPUT and one or more full-toolchain directories');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
const source = join(root, 'test/fixtures/process-lifetime/Main.lean');
const bytes = readFileSync(source);
writeFileSync(join(output, 'fixture.lean'), bytes);
const evidence = { leanCommit, source, sourceSha256: createHash('sha256').update(bytes).digest('hex'),
  scope: 'Supplementary ordinary Lean process lifetime comparison; not an upstream-suite result.',
  resourceReport: process.env.LASM_RESOURCE_REPORT, results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, config) {
  const started = performance.now();
  const result = spawnSync(executable, ['--run', source], {
    encoding: 'utf8', timeout: 180_000, maxBuffer: 128 * 1024, killSignal: 'SIGKILL',
  });
  const record = { name, executable, config, seconds: (performance.now() - started) / 1000,
    code: result.status, signal: result.signal, error: result.error?.message, stdout: result.stdout, stderr: result.stderr };
  record.passed = result.status === 0 && result.stderr === '' && (evidence.results.length
    ? result.stdout === evidence.results[0].stdout : result.stdout.endsWith('process lifetime comparison completed\n'));
  evidence.results.push(record); save();
  console.log(`${name}: ${record.passed ? 'passed' : 'failed'} (${record.seconds.toFixed(2)} s)`);
  return record;
}
if (!run('native', resolveLean(root).lean).passed) throw new Error('Native fixture failed; inspect it before comparing engines');
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
evidence.finishedAt = new Date().toISOString(); save();
process.exitCode = evidence.results.every(result => result.passed) ? 0 : 1;
