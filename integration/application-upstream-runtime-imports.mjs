// Preserve explicit-input evidence; optionally verify automatically bundled data.
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, readdirSync, renameSync, writeFileSync } from 'node:fs';
import { join, resolve, relative, delimiter } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, referenceArg, ...extra] = process.argv.slice(2);
const bundled = extra.includes('--bundled-metadata');
const selected = extra.filter(option => option.startsWith('--case=')).map(option => option.slice('--case='.length));
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && referenceArg
  && selected.length <= 1 && selected.every(name => ['original', 'attributes'].includes(name))
  && new Set(extra).size === extra.length
  && extra.every(option => option === '--bundled-metadata' || option.startsWith('--case=')),
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE [--bundled-metadata] [--case=original|attributes]');
const originalCase = !selected.length || selected[0] === 'original';
const attributeCase = !selected.length || selected[0] === 'attributes';
assert.equal(process.platform, 'linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve earlier attempts'); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const sources = JSON.parse(readFileSync(sourcesFile));
const inventory = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json')));
const registration = inventory.tests.find(row => row.name === 'pkg/user_attr_app');
assert.equal(registration?.driver, 'tests/pkg/user_attr_app/run_test.sh');
const prefix = 'tests/pkg/user_attr_app/';
const originals = Object.fromEntries(Object.entries(sources).filter(([path]) => path.startsWith(prefix))
  .map(([path, identity]) => [path.slice(prefix.length), identity]));
const report = { scope: bundled ? 'Original user-attribute application with automatically packaged module data; installed AOT executes the relocated imports without Lean path environment inputs'
  : 'Original user-attribute application with explicit runtime module metadata inputs; installed AOT executes the imports',
  bundledMetadata: bundled, selectedCases: selected.length ? selected : ['original', 'attributes'],
  name: registration.name, target, engine, compiler, reference, commands: [], passed: false,
  sourceArchiveSha256: inventory.sourceArchiveSha256, sourceManifestSha256: await hashFile(sourcesFile),
  harnessSha256: await hashFile(fileURLToPath(import.meta.url)), resourceReport: process.env.LASM_RESOURCE_REPORT,
  adaptations: [
    'The complete original native shell driver and compile-time attribute assertions run unchanged.',
    'A separate build copy preserves every original source byte except its explicitly replaced upstream stage pin; both original copies retain that pin.',
    bundled ? 'The original main intentionally imports compiled Lean modules at runtime. All module data must be supplied automatically by the installed Lasm build. Native controls explicitly select the same deployed data; deployed processes receive neither LEAN_SYSROOT nor LEAN_PATH.'
      : 'The original main intentionally imports compiled Lean modules at runtime. Project metadata is copied as explicit input data. Standard-library metadata remains at the verified managed native prefix, selected by ordinary LEAN_SYSROOT and LEAN_PATH in both native and target controls.',
    bundled ? 'Both executables run with empty PATH and hidden source copies. All module data paths used by the deployed import are inside the relocated dist; no native Lean/Lake process is needed at runtime.'
      : 'Both executables run with empty PATH and hidden source copies. No native Lean/Lake process is needed during the deployed import; the retained metadata dependency prevents a self-contained deployment claim.',
    'A separately recorded missing-standard-metadata control must fail natively and in the target. No original test or assertion is edited.',
    'A separate ordinary Lean fixture repeats the three original compile-time tag assertions after importing module data at runtime. Its native control uses -rdynamic, matching the original Lake supportInterpreter setting on Linux. Both native and installed AOT controls must pass; these are supplementary runtime checks.',
    'The optional case selection separates complete original/missing-data and supplementary-attribute controls into independent guarded runs. Aggregate acceptance still requires both selections; it does not omit any assertion.',
  ] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
async function verify(directory, expected) {
  const result = await verifyMixedSources(directory, expected);
  assert.deepEqual(result.modified, [], 'Original source changed: ' + directory); return result;
}
function run(label, program, args, cwd, env, success = true) {
  report.phase = label; save(); const started = performance.now();
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 900_000,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  const observation = { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
  report.commands.push({ label, program, args, cwd, seconds: (performance.now() - started) / 1000,
    error: result.error?.message, timeout: result.error?.code === 'ETIMEDOUT', ...observation }); save();
  assert.ifError(result.error);
  if (success) { assert.equal(observation.signal, null); assert.equal(observation.code, 0, label + ': ' + observation.stderr); }
  return observation;
}
async function metadata(directory, destination) {
  const entries = [];
  async function visit(base) {
    for (const entry of readdirSync(base, { withFileTypes: true })) {
      const file = join(base, entry.name), name = relative(directory, file);
      if (entry.isDirectory()) { await visit(file); continue; }
      assert.ok(entry.isFile(), 'Unexpected module metadata link: ' + file);
      if (!/\.(?:olean(?:\.private|\.server)?|ir|ilean)$/.test(entry.name)) continue;
      const copied = join(destination, name);
      mkdirSync(resolve(copied, '..'), { recursive: true }); cpSync(file, copied);
      const digest = await hashFile(file); assert.equal(await hashFile(copied), digest);
      entries.push({ path: name, sha256: digest });
    }
  }
  await visit(directory);
  assert.ok(entries.some(row => row.path === 'UserAttr/Tst.olean'));
  assert.ok(entries.some(row => row.path === 'UserAttr/BlaAttr.olean'));
  return entries;
}

async function bundledMetadata(directory) {
  const manifest = JSON.parse(readFileSync(join(directory, 'lean/metadata.json')));
  assert.equal(manifest.schema, 1); assert.equal(manifest.lean, '4.34.0');
  assert.ok(manifest.files.some(file => file.path === 'lib/lean/Init.olean'));
  for (const suffix of ['/UserAttr/Tst.olean', '/UserAttr/BlaAttr.olean'])
    assert.ok(manifest.files.some(file => file.path.endsWith(suffix)));
  for (const file of manifest.files) assert.equal(await hashFile(join(directory, 'lean', file.path)), file.sha256);
  const sysroot = join(directory, 'lean');
  return { manifest, manifestSha256: await hashFile(join(sysroot, 'metadata.json')),
    sysroot, projectPath: manifest.roots.map(name => join(sysroot, name)).join(delimiter) };
}

save();
try {
  report.referenceBefore = await verify(reference, sources);
  const lean = await provisionLean(output); assert.equal(lean.commit, inventory.leanCommit);
  Object.assign(report, { lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity });
  const env = { ...nativeLeanEnvironment(lean), TEST_DIR: join(reference, 'tests'),
    SRC_DIR: join(reference, 'src'), SCRIPT_DIR: join(reference, 'script'), BUILD_DIR: lean.prefix,
    STAGE: '1', TEST_CTEST: '1', LEAN_HEADER_SNAPSHOTS: '0', LEAN_NUM_THREADS: '1',
    CMAKE_BUILD_PARALLEL_LEVEL: '1', MAKEFLAGS: '-j1', CXX: join(lean.prefix, 'bin/clang++') };
  report.engineVersion = run('engine version', engine, ['--version'], output, env).stdout.trim();
  report.packageVersion = JSON.parse(readFileSync(join(compiler, 'package.json'))).version;
  const native = join(output, 'native source'), original = join(output, 'original application source');
  for (const directory of [native, original]) {
    cpSync(join(reference, prefix), directory, { recursive: true, preserveTimestamps: true, verbatimSymlinks: true });
    await verify(directory, originals);
  }
  const project = join(output, 'release-pinned application source');
  cpSync(original, project, { recursive: true, preserveTimestamps: true, verbatimSymlinks: true,
    filter: path => path !== join(original, 'lean-toolchain') });
  const buildSources = { ...originals }; delete buildSources['lean-toolchain'];
  report.applicationBefore = await verify(project, buildSources);
  report.parallelPin = { original: readFileSync(join(original, 'lean-toolchain'), 'utf8'), release: 'leanprover/lean4:v4.34.0\n' };
  writeFileSync(join(project, 'lean-toolchain'), report.parallelPin.release);
  assert.equal(await hashFile(join(native, 'run_test.sh')), registration.sha256);
  report.nativeDriver = run('original native shell driver', '/bin/bash',
    [join(root, 'scripts/application-tests/mixed-native.sh'), 'ordinary', join(native, 'run_test.sh')], native, env);
  const dist = join(output, 'dist');
  if (originalCase) {
    run('installed application build', process.execPath,
      [join(compiler, 'bin/lasm.mjs'), 'build', join(project, 'Main.lean'), '--target', target, '--output', dist], project, env);
    report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  }
  const fixture = join(root, 'integration/fixtures/RuntimeAttributeImport.lean');
  const fixtureName = 'RuntimeAttributeImport.lean', fixtureSource = join(project, fixtureName);
  const nativeAttributeBinary = join(output, 'native runtime attribute check');
  const attributeDist = join(output, 'attribute dist');
  if (attributeCase) {
    assert.ok(!existsSync(fixtureSource)); cpSync(fixture, fixtureSource);
    report.supplementaryFixture = { path: relative(root, fixture), sha256: await hashFile(fixture),
      copiedSha256: await hashFile(fixtureSource) };
    assert.equal(report.supplementaryFixture.copiedSha256, report.supplementaryFixture.sha256);
    const oracle = join(output, 'attribute oracle'); mkdirSync(oracle);
    report.phase = 'generate native runtime-attribute control'; save();
    const generated = applicationSources(fixtureSource, lean, oracle, { log: () => {} });
    report.nativeAttributeInputs = await Promise.all(generated.sources.map(async (file, index) => ({
      module: generated.inputs[index].module,
      sourceSha256: await hashFile(generated.inputs[index].source), cSha256: await hashFile(file),
    })));
    run('compile native runtime-attribute control', join(lean.prefix, 'bin/leanc'),
      ['-O2', '-rdynamic', ...generated.sources, '-o', nativeAttributeBinary], project, env);
    run('build installed runtime-attribute control', process.execPath,
      [join(compiler, 'bin/lasm.mjs'), 'build', fixtureSource, '--target', target, '--output', attributeDist], project, env);
    report.attributeBuild = JSON.parse(readFileSync(join(attributeDist, 'build-info.json')));
  }
  report.nativeSourceAfter = await verify(native, originals);
  report.applicationAfter = await verify(project, buildSources);
  report.originalApplicationAfter = await verify(original, originals);
  const deployment = join(output, 'relocated deployment');
  if (originalCase) renameSync(dist, deployment);
  const attributeDeployment = join(output, 'relocated attribute deployment');
  if (attributeCase) renameSync(attributeDist, attributeDeployment);
  const runtimeCwd = originalCase ? deployment : attributeDeployment;
  const data = join(runtimeCwd, 'module data');
  if (bundled) {
    if (originalCase) report.bundled = await bundledMetadata(deployment);
    if (attributeCase) report.attributeBundled = await bundledMetadata(attributeDeployment);
  } else {
    report.moduleData = await metadata(join(native, '.lake/build/lib/lean'), data);
    report.standardModuleData = { directory: join(lean.prefix, 'lib/lean'), nativeArtifactIdentity: lean.identity,
      scope: 'Explicit external read-only standard module data; automatic deployment packaging is not validated by this probe' };
  }
  for (const directory of [native, original, project]) renameSync(directory, directory + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  if (!bundled) Object.assign(runtimeEnv, { LEAN_SYSROOT: lean.prefix, LEAN_PATH: data });
  const nativeRuntimeEnv = bundled && originalCase
    ? { ...runtimeEnv, LEAN_SYSROOT: report.bundled.sysroot, LEAN_PATH: report.bundled.projectPath } : runtimeEnv;
  const nativeAttributeEnv = bundled && attributeCase
    ? { ...runtimeEnv, LEAN_SYSROOT: report.attributeBundled.sysroot, LEAN_PATH: report.attributeBundled.projectPath } : runtimeEnv;
  const nativeBinary = join(native + '.hidden', '.lake/build/bin/user_attr');
  const invocation = [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')];
  if (originalCase) {
    report.deployment = { directory: deployment, sourceHidden: true, path: '', buildProcessesUsedAtRuntime: false,
      selfContained: bundled, suppliedLeanPaths: !bundled, wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
    report.native = run('native compiled runtime import with selected metadata', nativeBinary, [], runtimeCwd, nativeRuntimeEnv);
    report.actual = run(bundled ? 'deployed runtime import with automatic metadata' : 'deployed runtime import with explicit metadata', engine, invocation, runtimeCwd, runtimeEnv);
    assert.deepEqual(report.actual, report.native);
    const missing = join(output, 'missing standard data'); mkdirSync(missing);
    const missingEnv = { ...runtimeEnv, LEAN_SYSROOT: missing, ...(bundled ? { LEAN_PATH: report.bundled.projectPath } : {}) };
    report.missingDataControl = {
      native: run('native missing-standard-metadata control', nativeBinary, [], runtimeCwd, missingEnv, false),
      actual: run('deployed missing-standard-metadata control', engine, invocation, runtimeCwd, missingEnv, false),
    };
    assert.equal(report.missingDataControl.native.signal, null);
    assert.notEqual(report.missingDataControl.native.code, 0, 'Missing standard module data must not silently succeed');
    assert.deepEqual(report.missingDataControl.actual, report.missingDataControl.native);
  }
  if (attributeCase) {
    report.attributeDeployment = { directory: attributeDeployment, sourceHidden: true, path: '', selfContained: bundled, suppliedLeanPaths: !bundled,
      wasmSha256: await hashFile(join(attributeDeployment, 'program.wasm')) };
    report.runtimeAttributes = {
      native: run('native runtime-attribute assertions', nativeAttributeBinary, [], runtimeCwd, nativeAttributeEnv),
      actual: run('deployed runtime-attribute assertions', engine,
        [...(target === 'deno' ? ['run', '-A'] : []), join(attributeDeployment, 'main.mjs')], runtimeCwd, runtimeEnv),
    };
    assert.deepEqual(report.runtimeAttributes.actual, report.runtimeAttributes.native);
  }
  if (bundled) {
    if (originalCase) assert.deepEqual(await bundledMetadata(deployment), report.bundled);
    if (attributeCase) assert.deepEqual(await bundledMetadata(attributeDeployment), report.attributeBundled);
  } else for (const row of report.moduleData) assert.equal(await hashFile(join(data, row.path)), row.sha256);
  report.nativeSourceAfter = await verify(native + '.hidden', originals);
  report.applicationAfter = await verify(project + '.hidden', buildSources);
  report.originalApplicationAfter = await verify(original + '.hidden', originals);
  if (attributeCase) assert.equal(await hashFile(join(project + '.hidden', fixtureName)), report.supplementaryFixture.sha256);
  report.referenceAfter = await verify(reference, sources);
  if (attributeCase) assert.equal(await hashFile(fixture), report.supplementaryFixture.sha256, 'Runtime fixture changed during execution');
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256, 'Harness changed during execution');
  report.passed = true; report.phase = 'complete';
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally { report.finishedAt = new Date().toISOString(); save(); }
