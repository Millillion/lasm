// Compare actual compiler behavior with native Lean; never rewrite upstream tests.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, copyFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const [outputArg, ...prefixArgs] = process.argv.slice(2);
if (!outputArg || !prefixArgs.length) throw new Error('Supply NEW_OUTPUT and TOOLCHAIN_PREFIX...');
const output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve previous attempts by using a fresh output');
mkdirSync(output, { recursive: true });
const fixture = join(root, 'scripts/full-lean/probes/ShellArguments.lean');
copyFileSync(fixture, join(output, 'ShellArguments.lean'));
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
const name = 'ShellArguments.lean';
const cases = [
  { name: 'run first', args: ['--run', name, 'Bob'] },
  { name: 'positional before run', args: [name, '--run', name, 'Bob'] },
  { name: 'multiple preceding positionals', args: ['ignored.lean', name, '--run', name, 'Bob'] },
  { name: 'single dash operand', args: ['-', '--run', name, 'Bob'] },
  { name: 'empty operand', args: ['', '--run', name, 'Bob'] },
  { name: 'interleaved options', args: [name, '-q', '--root', '.', '--run', name, 'Bob'] },
  { name: 'separate option value', args: [name, '-D', 'maxRecDepth=1024', '--run', name, 'Bob'] },
  { name: 'short run', args: [name, '-r', name, 'Bob'] },
  { name: 'short option group', args: [name, '-qr', name, 'Bob'] },
  { name: 'long option abbreviation', args: [name, '--ru', name, 'Bob'] },
  { name: 'literal application arguments', args: ['--run', name, '--run', '-q', '--', '', 'hello world', 'λ'] },
  { name: 'compile first', args: [name] },
  { name: 'compile trailing options', args: [name, '-q', '-DmaxRecDepth=1024'] },
  { name: 'compile end of options', args: ['-q', '--', name] },
  { name: 'POSIX run first', args: ['--run', name, 'Bob'], posix: true },
  { name: 'POSIX end of options', args: ['-q', '--', name], posix: true },
];
const evidence = { scope: 'Supplementary native/full-Wasm compiler argument comparison; not an upstream suite result.',
  leanCommit, startedAt: new Date().toISOString(), fixtureSha256: await hash(fixture),
  resourceReport: process.env.LASM_RESOURCE_REPORT, configs: [], cases: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(executable, item) {
  const env = { ...process.env, LEAN_NUM_THREADS: '4', LEAN_STACK_SIZE_KB: '65536' };
  delete env.POSIXLY_CORRECT;
  if (item.posix) env.POSIXLY_CORRECT = '1';
  const started = performance.now();
  const result = spawnSync(executable, ['-j4', '-s65536', ...item.args], {
    cwd: output, env, encoding: 'utf8', timeout: 120_000, killSignal: 'SIGKILL', maxBuffer: 256 * 1024,
  });
  return { code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr, seconds: (performance.now() - started) / 1000 };
}
const native = resolveLean(root).lean;
for (const item of cases) {
  const result = run(native, item);
  assert.equal(result.code, 0, `Native control failed: ${item.name}: ${result.stderr}`);
  evidence.cases.push({ ...item, native: result, engines: [] });
  save();
}
for (const prefixArg of prefixArgs) {
  const prefix = resolve(prefixArg);
  const config = JSON.parse(readFileSync(join(prefix, 'toolchain.json')));
  assert.equal(config.leanCommit, leanCommit);
  const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
  for (const [file, expected] of Object.entries(snapshot.files))
    assert.equal(await hash(join(config.build, file)), expected, `Frozen input changed: ${file}`);
  evidence.configs.push(config);
  for (const row of evidence.cases) {
    const result = run(join(prefix, 'bin/lean'), row);
    const passed = !result.error && result.code === row.native.code && result.signal === row.native.signal
      && result.stdout === row.native.stdout && result.stderr === row.native.stderr;
    row.engines.push({ engine: config.engine, prefix, ...result, passed });
    save();
    console.log(`${config.engine}: ${row.name}: ${passed ? 'PASS' : 'FAIL'}`);
  }
}
evidence.fixtureUnchanged = await hash(fixture) === evidence.fixtureSha256;
assert.ok(evidence.fixtureUnchanged);
evidence.passed = evidence.cases.every(row => row.engines.every(result => result.passed));
evidence.finishedAt = new Date().toISOString();
save();
process.exitCode = evidence.passed ? 0 : 1;
