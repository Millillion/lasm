// macOS installed-package consumer. The SDK/oracle and product run separately
// from the privileged CI checkout and resource monitor.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync, statSync, symlinkSync, realpathSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { tmpdir, release } from 'node:os';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { spawnSync, execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { darwinSandbox } from './ci/darwin-isolation.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'darwin'); assert.ok(['x64', 'arm64'].includes(process.arch));
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, archiveArg, expectedSha, ...extra] = process.argv.slice(2);
assert.ok(outputArg && archiveArg && /^[a-f0-9]{64}$/.test(expectedSha ?? '') && !extra.length);
const output = resolve(outputArg), archive = resolve(archiveArg);
assert.ok(!existsSync(output), 'Preserve previous acceptance evidence');
assert.equal(await hashFile(archive), expectedSha);
mkdirSync(output, { recursive: true });
const workspace = realpathSync(mkdtempSync(join(tmpdir(), 'lasm node Mac λ-')));
for (const name of ['node-installed.mjs', 'node-cache-controls.mjs']) copyFileSync(join(root, 'integration', name), join(workspace, name));
mkdirSync(join(workspace, 'fixtures'));
for (const name of ['BundleFeatures.lean', 'BundleFeaturesLegacy.lean', 'FilesystemSurface.lean', 'CompileTimeFeatures.lean', 'StandaloneModuleData.lean', 'RuntimeModulePath.lean'])
  copyFileSync(join(root, 'integration/fixtures', name), join(workspace, 'fixtures', name));
for (const path of ['home', 'tmp', 'os-bin']) mkdirSync(join(workspace, path));
symlinkSync('/bin/sh', join(workspace, 'os-bin/sh'));
for (const path of ['npm-user-config', 'npm-global-config', 'git-system-config', 'git-global-config']) writeFileSync(join(workspace, path), '');
const node = realpathSync(process.execPath), nodePrefix = resolve(dirname(node), '..');
const environment = { PATH: dirname(node) + ':' + join(workspace, 'os-bin'), HOME: join(workspace, 'home'),
  TMPDIR: join(workspace, 'tmp'), LANG: 'en_US.UTF-8', LEAN_NUM_THREADS: '1', BINARYEN_CORES: '1', EMCC_CORES: '1',
  npm_config_userconfig: join(workspace, 'npm-user-config'), npm_config_globalconfig: join(workspace, 'npm-global-config'),
  GIT_CONFIG_SYSTEM: join(workspace, 'git-system-config'), GIT_CONFIG_GLOBAL: join(workspace, 'git-global-config'),
  npm_config_cache: join(workspace, 'npm-cache'), npm_config_registry: 'https://registry.npmjs.org/',
  npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' };
const result = { scope: 'Native macOS installed Node/npm-only CLI and relocated deployment; sandbox-exec denies preinstalled developer tools and checkout data',
  platform: `${process.platform}-${process.arch}`, node: process.version, kernel: release(),
  osRelease: execFileSync('/usr/bin/sw_vers', [], { encoding: 'utf8' }),
  sourceRevision: execFileSync('git', ['rev-parse', 'HEAD'], { cwd: root, encoding: 'utf8' }).trim(),
  archiveSha256: expectedSha, archiveBytes: statSync(archive).size, workspace,
  resourceReport: process.env.LASM_RESOURCE_REPORT, startedAt: new Date().toISOString(), passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
async function nativeControls() {
  const compiler = join(workspace, 'project space λ/node_modules/@lasm/compiler');
  const { provisionLean } = await import(pathToFileURL(join(compiler, 'src/managed-lean.mjs')));
  const { nativeLeanEnvironment, applicationSources } = await import(pathToFileURL(join(compiler, 'src/application-sources.mjs')));
  const appleSdk = execFileSync('/usr/bin/xcrun', ['--show-sdk-path'], { encoding: 'utf8' }).trim();
  const records = [];
  for (const [file, args] of [['BundleFeatures.lean', ['123456789']], ['BundleFeaturesLegacy.lean', ['17']],
    ['FilesystemSurface.lean', ['filesystem λ']], ['CompileTimeFeatures.lean', []]]) {
    const work = join(output, 'native-controls', file); mkdirSync(work, { recursive: true });
    const source = join(work, file); copyFileSync(join(workspace, 'fixtures', file), source);
    writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v' + result.installation.support.lean + '\n');
    const lean = await provisionLean(source, { cache: result.installation.tools });
    const generated = applicationSources(source, lean, work);
    const executable = join(work, 'program'), env = { ...nativeLeanEnvironment(lean), SDKROOT: appleSdk };
    const build = spawnSync(join(lean.prefix, 'bin/leanc'), ['-O2', '-isysroot', appleSdk, ...generated.sources, '-o', executable],
      { cwd: work, env, encoding: 'utf8', timeout: 300000, maxBuffer: 4 * 1024 ** 2 });
    assert.ifError(build.error); assert.equal(build.status, 0, build.stderr);
    const actual = spawnSync(executable, args, { cwd: work, env, encoding: 'utf8', timeout: 120000, maxBuffer: 2 * 1024 ** 2 });
    assert.ifError(actual.error); assert.equal(actual.signal, null); assert.equal(actual.status, 0, actual.stderr);
    records.push({ file, args, sourceSha256: await hashFile(source), lean: lean.version, nativePrograms: lean.nativePrograms,
      scope: 'Native AOT oracle only; Apple SDK and this output directory denied to installed product',
      executable, result: { code: actual.status, stdout: actual.stdout, stderr: actual.stderr } });
    result.nativeControls = records; save();
  }
  writeFileSync(join(workspace, 'native-controls.json'), JSON.stringify(records, null, 2) + '\n');
}
function isolated(profile, command, cwd, env, timeout = 3000_000) {
  const value = spawnSync('/usr/bin/sandbox-exec', ['-f', profile, ...command], { cwd, env, encoding: 'utf8', timeout, maxBuffer: 4 * 1024 ** 2 });
  assert.ifError(value.error); assert.equal(value.signal, null);
  return { code: value.status, stdout: value.stdout, stderr: value.stderr };
}
save();
try {
  for (const phase of ['cold', 'lake', 'offline']) {
    if (phase === 'offline') await nativeControls();
    result.activePhase = phase; save();
    const profile = join(output, phase + '.sb');
    writeFileSync(profile, darwinSandbox({ reads: [archive], writes: [workspace],
      executables: [nodePrefix, workspace, '/bin/sh', '/bin/bash', '/usr/bin/env'], offline: phase === 'offline' }));
    const actual = isolated(profile, [node, join(workspace, 'node-installed.mjs'), phase, workspace, archive, join(root, 'package.json')], workspace, environment);
    writeFileSync(join(output, phase + '.log'), actual.stdout + actual.stderr);
    (result.phaseExecutions ??= []).push({ phase, code: actual.code, diagnostic: actual.stderr.slice(-6000) });
    if (existsSync(join(workspace, 'result.json'))) result.installation = JSON.parse(readFileSync(join(workspace, 'result.json')));
    save(); assert.equal(actual.code, 0, `${phase}: ${actual.stderr.slice(-6000)}`);
    console.log(actual.stdout.trim());
  }
  const deployed = realpathSync(mkdtempSync(join(tmpdir(), 'lasm deployed Mac 日本語-')));
  result.deploymentRoot = deployed;
  const engine = join(deployed, 'node'), cwd = join(deployed, 'working directory'), temporary = join(deployed, 'tmp');
  copyFileSync(node, engine); mkdirSync(cwd); mkdirSync(temporary);
  const programs = [];
  for (const entry of result.installation.deployments) {
    const copied = join(deployed, entry.name, 'dist'); cpSync(entry.output, copied, { recursive: true });
    programs.push({ ...entry, copied, wasmSha256: await hashFile(join(copied, 'program.wasm')) });
  }
  const profile = join(output, 'deployment.sb');
  writeFileSync(profile, darwinSandbox({ executables: [engine], reads: programs.map(p => p.copied), writes: [cwd, temporary], offline: true }));
  const denied = [join(root, 'package.json'), join(result.installation.compiler, 'bin/lasm.mjs'),
    ...programs.flatMap(p => [p.source, join(p.output, 'program.wasm')]),
    join(result.installation.tools, 'artifacts', programs[0].build.nativeLeanIdentity, 'bin/lean')];
  const env = { PATH: '', HOME: cwd, TMPDIR: temporary, LANG: 'en_US.UTF-8', LEAN_NUM_THREADS: '1' };
  const control = isolated(profile, [engine, '--input-type=module', '-e',
    `import assert from 'node:assert/strict';import {readFileSync} from 'node:fs';for(const path of ${JSON.stringify(denied)})assert.throws(()=>readFileSync(path),{code:'EPERM'});`], cwd, env, 30_000);
  assert.deepEqual(control, { code: 0, stdout: '', stderr: '' });
  result.deployment = { denied, controlResult: control, programs: [] }; save();
  for (const program of programs) {
    const checks = [];
    for (const c of program.checks) {
      const start = performance.now(), actual = isolated(profile, [engine, join(program.copied, 'main.mjs'), ...c.args], cwd, env, 120_000);
      checks.push({ ...c, actual, seconds: (performance.now() - start) / 1000 }); assert.deepEqual(actual, c.expected);
    }
    result.deployment.programs.push({ name: program.name, wasmSha256: program.wasmSha256, bytes: program.bytes, checks }); save();
  }
  result.passed = true; result.finishedAt = new Date().toISOString(); save();
} catch (error) { result.error = error.stack; save(); throw error; }
