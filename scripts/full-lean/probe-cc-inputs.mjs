// Supplementary external-toolchain checks; upstream Lean tests are untouched.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, copyFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { ensureResourceGuard } from './resource-guard.mjs';
import { root, leanCommit } from '../../src/toolchain.mjs';

await ensureResourceGuard();
const [outputArg, ...prefixArgs] = process.argv.slice(2);
if (!outputArg || !prefixArgs.length) throw new Error('Supply NEW_OUTPUT and TOOLCHAIN_PREFIX...');
const output = resolve(outputArg), prefixes = prefixArgs.map(p => resolve(p));
assert.ok(!existsSync(output), 'Use a fresh output directory');
mkdirSync(output, { recursive: true });
async function hash(path) {
  const digest = createHash('sha256');
  for await (const bytes of createReadStream(path)) digest.update(bytes);
  return digest.digest('hex');
}
const files = ['cc-inputs-main.c', 'cc-inputs-answer.cpp', 'cc-inputs-cxx-main.c'];
const originalHashes = {};
for (const name of files) originalHashes[name] = await hash(join(root, 'scripts/full-lean/probes', name));
const evidence = { scope: 'C/C++ source classification and mixed source/object/archive linking on the selected frozen toolchains; supplementary checks, not an upstream suite result.',
  leanCommit, startedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT,
  fixtures: originalHashes, configs: [], commands: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(label, command) {
  const start = performance.now();
  const result = spawnSync(command[0], command.slice(1), { encoding: 'utf8', maxBuffer: 256 * 1024,
    timeout: 180_000, killSignal: 'SIGKILL',
    env: { ...process.env, BINARYEN_CORES: '1', EMCC_CORES: '1', CMAKE_BUILD_PARALLEL_LEVEL: '1' } });
  const entry = { label, command, code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr, seconds: (performance.now() - start) / 1000 };
  evidence.commands.push(entry); save();
  console.log(`${label}: exit ${entry.code}`);
  assert.equal(entry.error, undefined, label);
  assert.equal(entry.code, 0, `${label}: ${entry.stderr}`);
  return entry;
}
function execute(label, executable) {
  const result = run(label, [executable]);
  assert.equal(result.stdout, '42\n', label);
  assert.equal(result.stderr, '', label);
}
function fixtures(directory) {
  mkdirSync(directory);
  for (const name of files) copyFileSync(join(root, 'scripts/full-lean/probes', name), join(directory, name));
  return files.map(name => join(directory, name));
}
try {
  const nativeDir = join(output, 'native inputs');
  const [nativeC, nativeCpp, nativeCxx] = fixtures(nativeDir);
  const nativeObject = join(nativeDir, 'answer.o');
  run('native C++ object', ['c++', '-c', nativeCpp, '-o', nativeObject]);
  for (const [label, compiler, inputs] of [
    ['C source plus C++ object', 'cc', [nativeC, nativeObject]],
    ['C++ driver with .c suffix', 'c++', [nativeCxx, nativeObject]],
    ['C and C++ sources', 'cc', [nativeC, nativeCpp]],
  ]) {
    const executable = join(nativeDir, label);
    run('native ' + label, [compiler, ...inputs, '-lstdc++', '-o', executable]);
    execute('native ' + label + ' execution', executable);
  }
  const seen = new Set();
  for (const prefix of prefixes) {
    const config = JSON.parse(readFileSync(join(prefix, 'toolchain.json')));
    assert.equal(config.leanCommit, leanCommit);
    assert.ok(!seen.has(config.engine), 'Use one prefix per engine'); seen.add(config.engine);
    const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
    for (const [name, expected] of Object.entries(snapshot.files))
      assert.equal(await hash(join(config.build, name)), expected, `Frozen input changed: ${name}`);
    evidence.configs.push(config); save();
    const directory = join(output, config.engine + ' inputs');
    const [mainC, answerCpp, mainCxx] = fixtures(directory);
    const object = join(directory, 'answer.o'), archive = join(directory, 'libanswer.a');
    run(config.engine + ' C++ object', [join(prefix, 'bin/clang++'), '-c', answerCpp, '-o', object]);
    run(config.engine + ' archive', [join(prefix, 'bin/ar'), 'rcs', archive, object]);
    for (const [label, compiler, inputs] of [
      ['C source plus C++ object', 'clang', [mainC, object]],
      ['C source plus C++ archive', 'clang', [mainC, archive]],
      ['C++ driver with .c suffix', 'clang++', [mainCxx, object]],
      ['C and C++ sources', 'clang', [mainC, answerCpp]],
      ['response file with spaces', 'clang', [mainC, object]],
    ]) {
      const executable = join(directory, label);
      let args = [...inputs, '-o', executable];
      if (label.startsWith('response')) {
        const response = join(directory, 'inputs.rsp');
        writeFileSync(response, args.map(arg => '"' + arg.replaceAll('\\', '\\\\').replaceAll('"', '\\"') + '"').join('\n') + '\n');
        args = ['@' + response];
      }
      run(config.engine + ' ' + label, [join(prefix, 'bin', compiler), ...args]);
      execute(config.engine + ' ' + label + ' execution', executable);
    }
  }
  evidence.passed = true;
} finally {
  evidence.fixturesUnchanged = true;
  for (const name of files)
    evidence.fixturesUnchanged &&= await hash(join(root, 'scripts/full-lean/probes', name)) === originalHashes[name];
  evidence.finishedAt = new Date().toISOString(); save();
}
assert.ok(evidence.fixturesUnchanged);
