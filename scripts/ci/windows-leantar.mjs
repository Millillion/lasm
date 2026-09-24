import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join, resolve } from 'node:path';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { hashFile, provisionArtifact } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const base = resolve('.work/windows-arm64-leantar'), source = join(base, 'source');
assert.ok(!existsSync(base), 'Preserve previous native leantar evidence'); mkdirSync(base, { recursive: true });
const commit = '46485d0eca748ed2d2678e70d59949bbc602f32c';
const rust = '1.98.1-aarch64-pc-windows-msvc';
const environment = { ...process.env, CARGO_BUILD_JOBS: '1', RAYON_NUM_THREADS: '1',
  RUST_TEST_THREADS: '1', RUSTFLAGS: '-C target-feature=+crt-static' };
function run(command, args, options = {}) {
  const result = spawnSync(command, args, { cwd: base, env: environment, encoding: 'utf8',
    timeout: 1200_000, maxBuffer: 8 * 1024 ** 2, windowsHide: true, ...options });
  if (result.stdout) process.stdout.write(result.stdout);
  if (result.stderr) process.stderr.write(result.stderr);
  assert.ifError(result.error); assert.equal(result.status, 0, `${command} failed`);
  return result.stdout;
}
run('git', ['init', '-b', 'main', source]);
run('git', ['-C', source, 'fetch', '--depth', '1', 'https://github.com/digama0/leangz.git', commit]);
run('git', ['-C', source, 'checkout', '--detach', commit]);
assert.equal(run('git', ['-C', source, 'rev-parse', 'HEAD']).trim(), commit);
const cargoManifest = readFileSync(join(source, 'Cargo.toml'), 'utf8');
assert.match(cargoManifest, /^version = "0\.1\.20"$/m);
assert.ok(existsSync(join(source, 'Cargo.lock')));
const originals = {};
for (const file of ['Cargo.toml', 'Cargo.lock', 'tests/module_compression.rs',
  ...readdirSync(join(source, 'tests/module')).map(name => 'tests/module/' + name)])
  originals[file] = await hashFile(join(source, file));

run('rustup', ['toolchain', 'install', rust, '--profile', 'minimal', '--no-self-update']);
const compiler = run('rustup', ['which', '--toolchain', rust, 'rustc']).trim();
const cargo = run('rustup', ['which', '--toolchain', rust, 'cargo']).trim();
await verifyNativeProgram(compiler, 'win32', 'arm64');
await verifyNativeProgram(cargo, 'win32', 'arm64');
const version = run(compiler, ['-vV']); assert.match(version, /^host: aarch64-pc-windows-msvc$/m);
const nativeCC = run('where.exe', ['cl.exe']).trim().split(/\r?\n/)[0];
await verifyNativeProgram(nativeCC, 'win32', 'x64');
environment.RUSTUP_TOOLCHAIN = rust;
run(cargo, ['test', '--release', '--locked', '--target', 'aarch64-pc-windows-msvc', '--jobs', '1', '--', '--test-threads=1'], { cwd: source });
run(cargo, ['build', '--release', '--locked', '--target', 'aarch64-pc-windows-msvc', '--jobs', '1', '--bin', 'leantar'], { cwd: source });
run('git', ['-C', source, 'diff', '--exit-code']);
for (const [file, sha256] of Object.entries(originals)) assert.equal(await hashFile(join(source, file)), sha256);

const deployed = join(base, 'relocated executable'); mkdirSync(deployed);
const executable = join(deployed, 'leantar.exe');
copyFileSync(join(source, 'target/aarch64-pc-windows-msvc/release/leantar.exe'), executable);
await verifyNativeProgram(executable, 'win32', 'arm64');
const emptyPath = { ...environment, PATH: '' };
const leantarVersion = run(executable, ['--version'], { cwd: deployed, env: emptyPath }).trim();
assert.match(leantarVersion, /0\.1\.20/);
const fixture = join(source, 'tests/module'), archive = join(base, 'module.ltar');
const names = ['Attr.trace', 'Attr.olean', 'Attr.olean.private', 'Attr.olean.server'];
run(executable, [archive, ...names], { cwd: fixture, env: emptyPath });
const extracted = join(base, 'extracted module'); mkdirSync(extracted);
run(executable, ['--jobs', '1', '-x', archive], { cwd: extracted, env: emptyPath });
// Upstream deliberately compacts trace metadata (including removing trace
// logs and inputs). Compare it to the official binary, not its source bytes.
// The x64 binary is an explicitly emulated reference, never the shipped tool.
const referenceArtifact = {
  name: 'leantar-v0.1.20-x86_64-pc-windows-msvc', root: 'leantar-v0.1.20-x86_64-pc-windows-msvc',
  url: 'https://github.com/digama0/leangz/releases/download/v0.1.20/leantar-v0.1.20-x86_64-pc-windows-msvc.zip',
  sha256: '7bb21a0a8d152da25863ad53039edddf5fd656b9d7be298b221f4565027f8cc7',
  bytes: 777243, format: 'zip', maximumExtractedBytes: 8 * 1024 ** 2,
};
const reference = await provisionArtifact(referenceArtifact, {
  cache: join(base, 'reference-cache'), python: process.env.LASM_RESOURCE_PYTHON,
});
const referenceExecutable = join(reference.directory, 'leantar.exe');
await verifyNativeProgram(referenceExecutable, 'win32', 'x64');
const referenceArchive = join(base, 'reference.ltar');
run(referenceExecutable, [referenceArchive, ...names], { cwd: fixture, env: emptyPath });
const referenceOutput = join(base, 'reference extracted'); mkdirSync(referenceOutput);
run(referenceExecutable, ['--jobs', '1', '-x', referenceArchive], { cwd: referenceOutput, env: emptyPath });
const nativeCross = join(base, 'native reads reference'), referenceCross = join(base, 'reference reads native');
mkdirSync(nativeCross); mkdirSync(referenceCross);
run(executable, ['--jobs', '1', '-x', referenceArchive], { cwd: nativeCross, env: emptyPath });
run(referenceExecutable, ['--jobs', '1', '-x', archive], { cwd: referenceCross, env: emptyPath });
const roundtrip = {};
for (const name of names) {
  const expected = readFileSync(join(referenceOutput, name));
  if (name !== 'Attr.trace') assert.deepEqual(expected, readFileSync(join(fixture, name)));
  for (const directory of [extracted, nativeCross, referenceCross])
    assert.deepEqual(readFileSync(join(directory, name)), expected, name + ' differs from the official release');
  roundtrip[name] = await hashFile(join(extracted, name));
}
const inputTrace = JSON.parse(readFileSync(join(fixture, 'Attr.trace')));
const outputTrace = JSON.parse(readFileSync(join(extracted, 'Attr.trace')));
for (const field of ['schemaVersion', 'depHash', 'outputs']) assert.deepEqual(outputTrace[field], inputTrace[field]);
const report = { scope: 'Native Windows ARM64 leantar, unchanged upstream tests and relocated CLI archive roundtrip; managed toolchain packaging remains separate',
  upstream: { version: '0.1.20', commit, url: 'https://github.com/digama0/leangz/releases/tag/v0.1.20' },
  rust: { toolchain: rust, version, nativeCompiler: true, nativeCargo: true,
    cCompiler: { host: 'x64', target: 'arm64', helperEmulation: true, path: nativeCC } },
  inputs: originals, executable: { sha256: await hashFile(executable), nativeArm64: true, leantarVersion, emptyPath: true },
  reference: { artifact: referenceArtifact, emulatedX64Control: true, nativeArchiveReadByReference: true,
    referenceArchiveReadByNative: true, traceComparison: 'Exact official output; unchanged dependency hash, schema and outputs' },
  roundtrip, createdAt: new Date().toISOString() };
writeFileSync(join(base, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report));
