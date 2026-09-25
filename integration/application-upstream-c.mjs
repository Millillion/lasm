// Preserve the original C source and shell driver. Only the deployed driver's
// exact leanc invocation is mapped to the installed application's real linker.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { pathToFileURL, fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { loadUpstreamEvidence } from '../scripts/application-tests/upstream-evidence.mjs';

await ensureResourceGuard();
const self = fileURLToPath(import.meta.url);
const importInstalled = (compiler, name) => import(pathToFileURL(join(compiler, 'src', name)).href);
const shellQuote = text => "'" + text.replaceAll("'", "'\\''") + "'";

async function compileOriginal(configFile, args) {
  const config = JSON.parse(readFileSync(configFile));
  assert.deepEqual(args, ['-o', 'rc_sticky.produced', 'rc_sticky.c'], 'Unmapped original leanc arguments');
  assert.equal(process.cwd(), config.sourceDirectory);
  assert.equal(await hashFile('rc_sticky.c'), config.sourceSha256);
  const { provisionSdk } = await importInstalled(config.compiler, 'managed-sdk.mjs');
  const { applicationRuntime } = await importInstalled(config.compiler, 'application-runtime.mjs');
  const { linkApplication } = await importInstalled(config.compiler, 'application-link.mjs');
  const { copyApplicationHost, writeApplicationEntrypoint } = await importInstalled(config.compiler, 'application-output.mjs');
  const runtime = await applicationRuntime({ version: config.lean, commit: config.leanCommit });
  const sdk = await provisionSdk();
  assert.equal(sdk.version, runtime.manifest.emscripten);
  mkdirSync(config.work); mkdirSync(config.dist);
  await linkApplication({ sources: [join(config.sourceDirectory, 'rc_sticky.c')], sdk, runtime,
    work: config.work, dist: config.dist, leanVersion: config.lean,
    memoryMode: config.target === 'bun' ? 2 : 1 });
  copyApplicationHost(config.dist); writeApplicationEntrypoint(config.dist, config.target);
  copyFileSync(join(runtime.directory, 'THIRD_PARTY_NOTICES.txt'), join(config.dist, 'THIRD_PARTY_NOTICES.txt'));
  const build = { scope: 'Unchanged upstream C driver through the installed application object/link pipeline',
    lean: config.lean, leanCommit: config.leanCommit, emscripten: sdk.version, sdkIdentity: sdk.identity,
    sdkDriverIdentity: sdk.driverIdentity, runtimeIdentity: runtime.identity,
    sourceSha256: config.sourceSha256, target: config.target,
    applicationLinkSha256: await hashFile(join(config.compiler, 'src/application-link.mjs')),
    wasmSha256: await hashFile(join(config.dist, 'program.wasm')) };
  writeFileSync(join(config.dist, 'build-info.json'), JSON.stringify(build, null, 2) + '\n');
  const command = [config.engine, ...(config.target === 'deno' ? ['run', '-A'] : []), join(config.dist, 'main.mjs')];
  writeFileSync('rc_sticky.produced', '#!/bin/sh\nexec ' + command.map(shellQuote).join(' ') + ' "$@"\n', { mode: 0o755 });
}

if (process.argv[2] === '--compile') {
  await compileOriginal(process.argv[3], process.argv.slice(4));
} else {
  const [outputArg, target, engineArg, compilerArg, referenceArg, version, ...extra] = process.argv.slice(2);
  assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && referenceArg && version && !extra.length,
    'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE LEAN_VERSION');
  assert.equal(process.platform, 'linux', 'This parallel upstream shell harness requires Linux');
  const { inventory, sources } = loadUpstreamEvidence(version);
  const test = inventory.tests.find(test => test.name === 'misc_dir/rc_sticky');
  assert.ok(test, 'This release has no registered reference-count regression');
  const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
  assert.ok(!existsSync(output), 'Preserve earlier campaigns');
  const originalFiles = ['tests/misc_dir/rc_sticky/rc_sticky.c', test.driver, 'tests/util.sh'];
  const originalHashes = {};
  for (const file of originalFiles) {
    originalHashes[file] = await hashFile(join(reference, file));
    assert.equal(originalHashes[file], sources[file].sha256, 'Upstream original changed: ' + file);
  }
  mkdirSync(output, { recursive: true });
  writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  const lean = await provisionLean(output);
  assert.equal(lean.commit, inventory.leanCommit);
  const env = { ...nativeLeanEnvironment(lean), TEST_DIR: join(reference, 'tests'),
    LEANC_OPTS: '', LASM_BUILD_NODE: process.execPath, LASM_C_CASE_HARNESS: self };
  const report = { name: test.name, lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
    scope: 'Unchanged native and deployed C reference-count assertions through the installed application linker; not a public foreign-code CLI',
    target, engine, compiler, originalHashes, harnessSha256: await hashFile(self),
    adaptations: ['The original C source, shell driver, empty LEANC_OPTS and runtime assertions are unchanged.',
      'Only the exact deployed leanc -o rc_sticky.produced rc_sticky.c invocation uses an explicit adapter; unexpected arguments fail.',
      'The installed Lean application linker supplies its usual C optimization, Wasm ABI and host support.',
      'After the unchanged shell driver, a separate native/deployed comparison checks stdout, stderr and exit status after relocation with source hidden and PATH empty.',
      'One guarded workload with one linker worker; build deadline 1800 seconds, runtime deadline 120 seconds.'],
    resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
  const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
  const run = (label, program, args, cwd, environment = env, timeout = 120_000) => {
    const result = spawnSync(program, args, { cwd, env: environment, timeout, encoding: 'utf8',
      killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
    report.commands.push({ label, program, args, cwd, code: result.status, signal: result.signal,
      error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
    assert.ifError(result.error); assert.equal(result.signal, null); assert.equal(result.status, 0, label + ': ' + result.stderr);
    return { code: result.status, stdout: result.stdout, stderr: result.stderr };
  };
  save();
  try {
    report.engineVersion = run('engine version', engine, ['--version'], output).stdout.trim();
    const nativeSource = join(output, 'native-source'), deployedSource = join(output, 'deployed-source');
    for (const directory of [nativeSource, deployedSource]) {
      mkdirSync(directory);
      for (const file of originalFiles.slice(0, 2)) copyFileSync(join(reference, file), join(directory, file.split('/').at(-1)));
    }
    const originalDriver = 'source "$TEST_DIR/util.sh"\nsource ./run_test.sh\n';
    run('unchanged native shell driver', '/bin/bash', ['-c', originalDriver], nativeSource);
    report.native = run('native executable', join(nativeSource, 'rc_sticky.produced'), [], output);
    assert.deepEqual(report.native, { code: 0, stdout: '', stderr: '' });
    const config = { compiler, engine, target, lean: lean.version, leanCommit: lean.commit,
      sourceDirectory: deployedSource, sourceSha256: originalHashes[originalFiles[0]],
      work: join(output, 'build'), dist: join(output, 'dist') };
    const configFile = join(output, 'compile-input.json');
    writeFileSync(configFile, JSON.stringify(config, null, 2) + '\n');
    const adaptedDriver = 'source "$TEST_DIR/util.sh"\n' +
      'leanc() { "$LASM_BUILD_NODE" "$LASM_C_CASE_HARNESS" --compile "$LASM_C_CASE_INPUT" "$@"; }\n' +
      'source ./run_test.sh\n';
    run('unchanged deployed shell driver with exact compile adapter', '/bin/bash', ['-c', adaptedDriver], deployedSource,
      { ...env, LASM_C_CASE_INPUT: configFile }, 1800_000);
    report.build = JSON.parse(readFileSync(join(config.dist, 'build-info.json')));
    const relocated = join(output, 'relocated deployment');
    renameSync(config.dist, relocated); renameSync(deployedSource, deployedSource + '.hidden');
    renameSync(nativeSource, nativeSource + '.hidden');
    const deploymentEnv = Object.fromEntries(Object.entries(process.env)
      .filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
    Object.assign(deploymentEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1' });
    report.deployed = run('relocated deployed executable', engine,
      [...(target === 'deno' ? ['run', '-A'] : []), join(relocated, 'main.mjs')], output, deploymentEnv);
    assert.deepEqual(report.deployed, report.native);
    report.deployment = { sourceHidden: true, path: '', directory: relocated };
    for (const [file, expected] of Object.entries(originalHashes)) assert.equal(await hashFile(join(reference, file)), expected);
    assert.equal(await hashFile(self), report.harnessSha256);
    report.originalSourcesUnchanged = true; report.passed = true;
  } finally { report.finishedAt = new Date().toISOString(); save(); }
  console.log(JSON.stringify({ name: test.name, target, passed: report.passed }));
}
