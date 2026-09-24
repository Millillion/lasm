// Supplementary ordinary Lean API comparison. It does not modify upstream tests.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg] = process.argv.slice(2);
if (!outputArg || !['node', 'deno', 'bun'].includes(target) || !engineArg || !compilerArg)
  throw new Error('Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER');
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
if (existsSync(output)) throw new Error('Preserve previous comparison output');
mkdirSync(output, { recursive: true });
const fixture = fileURLToPath(new URL('fixtures/ApplicationPlatform.lean', import.meta.url));
const source = join(output, 'Main.lean');
copyFileSync(fixture, source);
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(source), env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '1' };
const report = { scope: 'Native versus installed ordinary Lean host-platform queries; build/dependency metadata recorded separately',
  target, host: process.platform + '-' + process.arch, lean: lean.version, leanCommit: lean.commit,
  nativeArtifactIdentity: lean.identity, compiler, fixtureSha256: await hashFile(fixture),
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd = output, environment = env) {
  const result = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8',
    timeout: label === 'build' ? 1800_000 : 120_000, maxBuffer: 1024 * 1024 });
  const record = { label, program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr };
  report.commands.push(record); save();
  assert.ifError(result.error); assert.equal(record.code, 0, label + ': ' + record.stderr);
  return record;
}
function parse(record) {
  assert.equal(record.stderr, '');
  const lines = record.stdout.trimEnd().split('\n');
  assert.equal(lines.length, 10);
  const entries = lines.map(line => {
    const index = line.indexOf('='); assert.ok(index > 0, line);
    return [line.slice(0, index), line.slice(index + 1)];
  });
  const values = Object.fromEntries(entries);
  assert.equal(Object.keys(values).length, 10);
  const { target: llvmTarget, emscripten, libuv, openssl, ...host } = values;
  return { host, metadata: { llvmTarget, emscripten, libuv, openssl } };
}
try {
  report.engineVersion = run('engine version', engine, ['--version']).stdout.trim();
  report.native = parse(run('native interpreted', lean.lean, ['--run', source]));
  run('native generate C', lean.lean, ['-j1', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source]);
  const native = join(output, process.platform === 'win32' ? 'native.exe' : 'native');
  run('native compile', join(lean.prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc'),
    ['-O2', '-o', native, source + '.c']);
  report.nativeCompiled = parse(run('native compiled', native, []));
  assert.deepEqual(report.nativeCompiled, report.native);
  assert.deepEqual(report.native.host, {
    windows: String(process.platform === 'win32'), macos: String(process.platform === 'darwin'),
    linux: String(process.platform === 'linux'), bits: '64',
    path: process.platform === 'win32' ? 'data\\todos.json' : 'data/todos.json',
    absolute: String(process.platform === 'win32'),
  });
  const dist = join(output, 'dist');
  run('build', process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', source, '--target', target, '--output', dist]);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json'), 'utf8'));
  const deployed = join(output, 'relocated deployment'), empty = join(output, 'empty-cwd');
  renameSync(dist, deployed); renameSync(source, source + '.hidden'); mkdirSync(empty);
  const deployedEnvironment = Object.fromEntries(Object.entries(process.env)
    .filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_TOOLCHAIN_CACHE)/.test(name)));
  Object.assign(deployedEnvironment, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '1' });
  report.deployed = parse(run('deployed', engine, [...(target === 'deno' ? ['run', '-A'] : []), join(deployed, 'main.mjs')],
    empty, deployedEnvironment));
  report.deployment = { directory: deployed, sourceHidden: true, path: '', buildToolEnvironmentRemoved: true,
    wasmSha256: await hashFile(join(deployed, 'program.wasm')) };
  report.hostEquivalent = JSON.stringify(report.deployed.host) === JSON.stringify(report.native.host);
  // Emscripten and LLVM target describe the compiled artifact, not its host OS.
  // Dependency versions are observations; this probe does not establish their
  // correct interpretation or count them as native-equivalent behavior.
  report.metadataAssessment = 'Actual build target differs intentionally; dependency version semantics remain under audit';
  save();
  assert.deepEqual(report.deployed.host, report.native.host, 'deployed host-platform behavior');
  assert.equal(report.native.metadata.emscripten, 'false');
  assert.equal(report.deployed.metadata.emscripten, 'true');
  assert.equal(report.deployed.metadata.llvmTarget, 'wasm64-unknown-emscripten');
  report.passed = true;
} finally {
  report.fixtureUnchanged = await hashFile(fixture) === report.fixtureSha256;
  report.finishedAt = new Date().toISOString(); save();
}
