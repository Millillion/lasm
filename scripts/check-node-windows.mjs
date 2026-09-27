// Native Windows installed consumer; CI tools stay outside the LPAC boundary.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync, statSync, realpathSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { tmpdir, release } from 'node:os';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { spawnSync, execFileSync } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { windowsIsolated } from './ci/windows-isolation.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../src/native-program.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'win32'); assert.ok(['x64', 'arm64'].includes(process.arch));
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, archiveArg, expectedSha, ...extra] = process.argv.slice(2);
assert.ok(outputArg && archiveArg && /^[a-f0-9]{64}$/.test(expectedSha ?? '') && !extra.length);
const output = resolve(outputArg), originalArchive = resolve(archiveArg);
assert.ok(!existsSync(output), 'Preserve earlier acceptance reports');
assert.equal(await hashFile(originalArchive), expectedSha); mkdirSync(output, { recursive: true });
const containerRoot = realpathSync(mkdtempSync(join(tmpdir(), 'lasm Node Windows λ-')));
const profile = 'Lasm.CI.' + randomUUID();
const workspace = join(containerRoot, 'consumer 日本語'); mkdirSync(workspace);
const archive = join(containerRoot, 'candidate.tgz'); copyFileSync(originalArchive, archive);
const stock = join(containerRoot, 'stock Node'); mkdirSync(stock);
const node = join(stock, 'node.exe'); copyFileSync(process.execPath, node);
await verifyNativeProgram(node);
cpSync(join(dirname(process.execPath), 'node_modules/npm'), join(stock, 'node_modules/npm'), { recursive: true, dereference: true });
for (const name of ['npm.cmd', 'npx.cmd']) copyFileSync(join(dirname(process.execPath), name), join(stock, name));
for (const name of ['node-installed.mjs', 'node-cache-controls.mjs']) copyFileSync(join(root, 'integration', name), join(workspace, name));
mkdirSync(join(workspace, 'fixtures'));
for (const name of ['BundleFeatures.lean', 'BundleFeaturesLegacy.lean', 'FilesystemSurface.lean', 'CompileTimeFeatures.lean', 'StandaloneModuleData.lean', 'RuntimeModulePath.lean'])
  copyFileSync(join(root, 'integration/fixtures', name), join(workspace, 'fixtures', name));
for (const path of ['home/AppData/Local', 'home/AppData/Roaming', 'tmp']) mkdirSync(join(workspace, path), { recursive: true });
for (const path of ['npm-user-config', 'npm-global-config', 'git-system-config', 'git-global-config']) writeFileSync(join(workspace, path), '');
const environment = { PATH: stock, PATHEXT: '.COM;.EXE;.BAT;.CMD', SystemRoot: process.env.SystemRoot, WINDIR: process.env.SystemRoot,
  ComSpec: join(process.env.SystemRoot, 'System32/cmd.exe'), HOME: join(workspace, 'home'), USERPROFILE: join(workspace, 'home'),
  LOCALAPPDATA: join(workspace, 'home/AppData/Local'), APPDATA: join(workspace, 'home/AppData/Roaming'),
  TMP: join(workspace, 'tmp'), TEMP: join(workspace, 'tmp'), LEAN_NUM_THREADS: '1', BINARYEN_CORES: '1', EMCC_CORES: '1',
  npm_config_userconfig: join(workspace, 'npm-user-config'), npm_config_globalconfig: join(workspace, 'npm-global-config'),
  GIT_CONFIG_SYSTEM: join(workspace, 'git-system-config'), GIT_CONFIG_GLOBAL: join(workspace, 'git-global-config'),
  npm_config_cache: join(workspace, 'npm-cache'), npm_config_registry: 'https://registry.npmjs.org/',
  npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' };
const result = { scope: 'Native Windows installed Node/npm-only CLI and copied deployment, isolated by LPAC; bootstrap tools excluded',
  platform: process.platform + '-' + process.arch, node: process.version, kernel: release(),
  osRelease: execFileSync('cmd.exe', ['/d', '/c', 'ver'], { encoding: 'utf8' }).trim(),
  sourceRevision: execFileSync('git', ['rev-parse', 'HEAD'], { cwd: root, encoding: 'utf8' }).trim(),
  archiveSha256: expectedSha, archiveBytes: statSync(archive).size, workspace, containerRoot, profile,
  resourceReport: process.env.LASM_RESOURCE_REPORT, startedAt: new Date().toISOString(), passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n'); save();
async function nativeControls() {
  const compiler = join(workspace, 'project space λ/node_modules/@lasm/compiler');
  const { provisionLean } = await import(pathToFileURL(join(compiler, 'src/managed-lean.mjs')));
  const { nativeLeanEnvironment } = await import(pathToFileURL(join(compiler, 'src/application-sources.mjs')));
  const records = [];
  for (const [file, args] of [['BundleFeatures.lean', ['123456789']], ['BundleFeaturesLegacy.lean', ['17']],
    ['FilesystemSurface.lean', ['filesystem λ']], ['CompileTimeFeatures.lean', []]]) {
    const work = join(output, 'native-controls', file); mkdirSync(work, { recursive: true });
    const source = join(work, file); copyFileSync(join(workspace, 'fixtures', file), source);
    writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v' + result.installation.support.lean + '\n');
    const lean = await provisionLean(source, { cache: result.installation.tools });
    const env = nativeLeanEnvironment(lean), executable = join(work, 'program.exe'), generated = join(work, 'program.c');
    if (process.arch === 'arm64') {
      assert.ok(process.env.LASM_NATIVE_ORACLE_CC, 'Native ARM64 C compiler is required only by this maintainer oracle');
      await verifyNativeProgram(process.env.LASM_NATIVE_ORACLE_CC);
      env.LEAN_CC = process.env.LASM_NATIVE_ORACLE_CC;
      env.PATH = join(lean.prefix, 'bin') + ';' + dirname(env.LEAN_CC) + ';' + env.PATH;
    }
    const options = { cwd: work, env, encoding: 'utf8', timeout: 300000, maxBuffer: 4 * 1024 ** 2 };
    const compile = spawnSync(lean.lean, ['-j1', '-s8192', '-Dcompiler.postponeCompile=false', '-c', generated, source], options);
    assert.ifError(compile.error); assert.equal(compile.status, 0, compile.stdout + compile.stderr);
    const build = spawnSync(join(lean.prefix, 'bin/leanc.exe'), ['-O2', generated, '-o', executable], options);
    assert.ifError(build.error); assert.equal(build.status, 0, build.stdout + build.stderr);
    await verifyNativeProgram(executable);
    const actual = spawnSync(executable, args, { ...options, timeout: 120000 });
    assert.ifError(actual.error); assert.equal(actual.signal, null); assert.equal(actual.status, 0, actual.stdout + actual.stderr);
    records.push({ file, args, sourceSha256: await hashFile(source), lean: lean.version, nativePrograms: lean.nativePrograms,
      scope: 'Native AOT oracle outside the consumer; original fixture unchanged', executable,
      result: { code: actual.status, stdout: actual.stdout, stderr: actual.stderr } });
    result.nativeControls = records; save();
  }
  writeFileSync(join(workspace, 'native-controls.json'), JSON.stringify(records, null, 2) + '\n');
}
try {
  for (const phase of ['cold', 'lake', 'offline']) {
    if (phase === 'offline') await nativeControls();
    result.activePhase = phase; save();
    const actual = windowsIsolated({ profile, disposableRoot: containerRoot, reads: [stock, archive], writes: [workspace],
      command: [node, join(workspace, 'node-installed.mjs'), phase, workspace, archive, join(root, 'package.json')],
      cwd: workspace, environment, offline: phase === 'offline', timeoutSeconds: 3300 }, join(output, phase + '.json'));
    (result.phaseExecutions ??= []).push({ phase, code: actual.code, diagnostic: actual.stderr.slice(-6000), isolation: actual.isolation });
    if (existsSync(join(workspace, 'result.json'))) result.installation = JSON.parse(readFileSync(join(workspace, 'result.json')));
    save(); assert.equal(actual.code, 0, phase + ': ' + actual.stderr.slice(-6000));
  }
  const deployed = realpathSync(mkdtempSync(join(tmpdir(), 'lasm deployed Windows 日本語-')));
  result.deploymentRoot = deployed;
  const engine = join(deployed, 'node.exe'), cwd = join(deployed, 'working directory'), temporary = join(deployed, 'tmp');
  copyFileSync(node, engine); mkdirSync(cwd); mkdirSync(temporary);
  const programs = [];
  for (const entry of result.installation.deployments) {
    const copied = join(deployed, entry.name, 'dist'); cpSync(entry.output, copied, { recursive: true });
    programs.push({ ...entry, copied, wasmSha256: await hashFile(join(copied, 'program.wasm')) });
  }
  const denied = [join(root, 'package.json'), join(result.installation.compiler, 'bin/lasm.mjs'),
    ...programs.flatMap(p => [p.source, join(p.output, 'program.wasm')]),
    join(result.installation.tools, 'artifacts', programs[0].build.nativeLeanIdentity, 'bin/lean.exe')];
  const env = { PATH: '', SystemRoot: process.env.SystemRoot, WINDIR: process.env.SystemRoot,
    HOME: cwd, USERPROFILE: cwd, LOCALAPPDATA: cwd, APPDATA: cwd, TMP: temporary, TEMP: temporary, LEAN_NUM_THREADS: '1' };
  const control = join(deployed, 'deployment-control.mjs'), config = join(deployed, 'deployment-config.json');
  const measurements = join(cwd, 'deployment-results.json');
  result.deploymentMeasurements = measurements; save();
  copyFileSync(join(root, 'integration/node-windows-deployed.mjs'), control);
  writeFileSync(config, JSON.stringify({ denied, programs }, null, 2) + '\n');
  const actual = windowsIsolated({ disposableRoot: deployed,
    reads: [engine, control, config, ...programs.map(p => p.copied)], writes: [cwd, temporary],
    cwd, environment: env, offline: true, timeoutSeconds: 1800,
    command: [engine, control, config, measurements] }, join(output, 'deployment.json'));
  if (existsSync(measurements)) result.deployment = JSON.parse(readFileSync(measurements));
  result.deploymentExecution = actual; save();
  assert.equal(actual.code, 0, actual.stderr);
  assert.equal(result.deployment?.passed, true);
  assert.equal(result.deployment.denialControlPassed, true);
  result.passed = true; result.finishedAt = new Date().toISOString(); save();
} catch (error) { result.error = error.stack; save(); throw error; }
