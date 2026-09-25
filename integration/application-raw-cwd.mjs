// Compare ordinary Lean IO with native execution in byte-valued Linux cwd paths.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, copyFileSync, renameSync, readFileSync, writeFileSync,
  symlinkSync, readdirSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { processOutput } from './process-output.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, version, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER LEAN_VERSION');
assert.match(version ?? '', /^\d+\.\d+\.\d+$/);
assert.equal(process.platform, 'linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), compiler = resolve(compilerArg), engine = resolve(engineArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const inputs = ['integration/application-raw-cwd.mjs', 'integration/fixtures/RawWorkingDirectory.lean',
  'integration/fixtures/raw-cwd-run.py'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(join(root, name))])));
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const lean = await provisionLean(output), environment = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
const report = { scope: 'Supplementary ordinary Lean inherited and entered Linux byte-valued working-directory comparisons; original upstream tests are untouched.',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
  target, engine, compiler, packageVersion: JSON.parse(readFileSync(join(compiler, 'package.json'))).version,
  platform: process.platform + '-' + process.arch, inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT,
  commands: [], cases: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, command, cwd, env = environment, timeout = 60_000) {
  const execution = spawnSync(command[0], command.slice(1), { cwd, env, timeout,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const observed = processOutput(execution);
  report.commands.push({ label, command, cwd, ...observed, signal: execution.signal, error: execution.error?.message }); save();
  assert.ifError(execution.error); assert.equal(execution.signal, null, label);
  assert.equal(observed.code, 0, label + ': ' + observed.stderr); return observed;
}
let sequence = 0;
function observe(label, command, sample, env) {
  const config = join(output, `session-${++sequence}.json`);
  writeFileSync(config, JSON.stringify({ command: [...command, ...(sample.enter ? ['enter'] : [])],
    cwdBase64: (sample.enter ? Buffer.from(sample.parent) : sample.directory).toString('base64') }) + '\n');
  const actual = JSON.parse(run(label, ['/usr/bin/python3', '-I', '-B', join(root, inputs[2]), config], output, env).stdout);
  // Keep the failure bytes before checking them. These supplement native oracles;
  // no lossy JavaScript string conversion participates in the comparison.
  return actual;
}
save();
try {
  report.engineVersion = run('engine version', [engine, '--version'], output).stdout.trim();
  const project = join(output, 'source'); mkdirSync(project);
  const source = join(project, 'Main.lean'); copyFileSync(join(root, inputs[1]), source);
  writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  run('generate native C', [lean.lean, '-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source], project);
  const native = join(project, 'native');
  run('compile native application', [join(lean.prefix, 'bin/leanc'), '-O2', '-DNDEBUG', '-o', native, source + '.c'], project);
  const samples = [];
  for (const [name, suffix] of [['valid-unicode', Buffer.from('λ😀')], ['invalid-byte-sequence', Buffer.from([0xff, 0x80])],
    ['truncated-sequence', Buffer.from([0xe2, 0x82])]]) {
    const parent = join(output, name); mkdirSync(parent);
    const directory = Buffer.concat([Buffer.from(parent + '/raw-'), suffix]); mkdirSync(directory);
    writeFileSync(Buffer.concat([directory, Buffer.from('/payload')]), 'relative bytes\n');
    writeFileSync(join(parent, 'parent-payload'), 'parent bytes\n');
    symlinkSync(directory, join(parent, 'raw-link'));
    for (const enter of [false, true]) samples.push({ name: name + (enter ? '/symlink' : '/inherited'), parent, directory, enter });
  }
  for (const sample of samples) {
    const row = { name: sample.name, cwdBase64: sample.directory.toString('base64') }; report.cases.push(row);
    row.nativeInterpreted = observe(sample.name + '/native interpreted', [lean.lean, '-Dlinter.all=false', '--run', source], sample, environment); save();
    assert.equal(row.nativeInterpreted.timedOut, false); assert.equal(row.nativeInterpreted.code, 0);
    assert.equal(row.nativeInterpreted.stderrBase64, '');
    assert.ok(Buffer.from(row.nativeInterpreted.stdoutBase64, 'base64').toString().endsWith('raw working directory checked\n'));
    row.nativeCompiled = observe(sample.name + '/native compiled', [native], sample, environment); save();
    assert.deepEqual(row.nativeCompiled, row.nativeInterpreted);
  }
  const dist = join(output, 'dist');
  run('build installed application', [process.execPath, join(compiler, 'bin/lasm.mjs'), 'build', source,
    '--target', target, '--output', dist], project, environment, 1800_000);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  assert.equal(report.build.lean, version); assert.equal(report.build.leanCommit, lean.commit); assert.equal(report.build.target, target);
  const relocated = join(output, 'relocated deployment'); renameSync(dist, relocated); renameSync(project, project + '.hidden');
  report.wasmSha256 = await hashFile(join(relocated, 'program.wasm'));
  const deployedEnvironment = Object.fromEntries(Object.entries(process.env).filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(name)));
  Object.assign(deployedEnvironment, { PATH: '', LEAN_NUM_THREADS: '2', DENO_DISABLE_NODE_SHIM: '1' });
  report.deployment = { directory: relocated, sourceHidden: true, path: '', buildEnvironmentRemoved: true };
  for (const [index, sample] of samples.entries()) {
    const row = report.cases[index];
    row.actual = observe(sample.name + '/deployed', [engine, ...(target === 'deno' ? ['run', '-A'] : []),
      join(relocated, 'main.mjs')], sample, deployedEnvironment); save();
    row.matchesNative = JSON.stringify(row.actual) === JSON.stringify(row.nativeInterpreted);
    assert.deepEqual(readdirSync(sample.directory).sort(), ['payload']);
  }
  save();
  for (const row of report.cases) assert.deepEqual(row.actual, row.nativeInterpreted, row.name);
  report.passed = true;
} catch (error) { report.error = error.stack; throw error; }
finally {
  report.inputsUnchanged = true;
  for (const [name, hash] of Object.entries(hashes))
    if (await hashFile(join(root, name)) !== hash) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
