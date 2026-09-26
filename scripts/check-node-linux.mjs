// Native installed-package acceptance. Orchestration stays outside Landlock;
// the package sees only stock Node/npm, OS facilities and its fresh workspace.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync, rmSync, statSync, symlinkSync, renameSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { tmpdir, release } from 'node:os';
import { fileURLToPath } from 'node:url';
import { spawn, spawnSync, execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { linuxIsolationFiles } from './check-deployed-application.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
assert.ok(process.platform === 'linux' && ['x64', 'arm64'].includes(process.arch));
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, archiveArg, expectedSha, ...extra] = process.argv.slice(2);
assert.ok(outputArg && archiveArg && /^[a-f0-9]{64}$/.test(expectedSha ?? '') && !extra.length,
  'Supply NEW_OUTPUT CANDIDATE_TARBALL EXPECTED_SHA256');
const output = resolve(outputArg), archive = resolve(archiveArg);
assert.ok(!existsSync(output), 'Preserve previous acceptance evidence');
assert.equal(await hashFile(archive), expectedSha, 'Test the exact packed candidate');
mkdirSync(output, { recursive: true });
const workspace = mkdtempSync(join(tmpdir(), 'lasm node Linux λ-'));
const control = join(workspace, 'node-linux-installed.mjs');
for (const name of ['node-linux-installed.mjs', 'node-cache-controls.mjs'])
  copyFileSync(join(root, 'integration', name), join(workspace, name));
mkdirSync(join(workspace, 'fixtures'));
for (const name of ['BundleFeatures.lean', 'BundleFeaturesLegacy.lean', 'FilesystemSurface.lean', 'StandaloneModuleData.lean'])
  copyFileSync(join(root, 'integration/fixtures', name), join(workspace, 'fixtures', name));
for (const path of ['home', 'tmp', 'os-bin']) mkdirSync(join(workspace, path));
symlinkSync('/bin/sh', join(workspace, 'os-bin/sh'));
for (const path of ['npm-user-config', 'npm-global-config', 'git-system-config', 'git-global-config'])
  writeFileSync(join(workspace, path), '');
const environment = { PATH: dirname(process.execPath) + ':' + join(workspace, 'os-bin'), HOME: join(workspace, 'home'),
  XDG_CACHE_HOME: join(workspace, 'cache'), TMPDIR: join(workspace, 'tmp'), LANG: 'C.UTF-8',
  LEAN_NUM_THREADS: '2', BINARYEN_CORES: '1', EMCC_CORES: '1',
  npm_config_userconfig: join(workspace, 'npm-user-config'), npm_config_globalconfig: join(workspace, 'npm-global-config'),
  // A runner's optional /etc/gitconfig is outside this fresh consumer. Treat it
  // as absent using Git's documented private-config overrides, as with npm.
  GIT_CONFIG_SYSTEM: join(workspace, 'git-system-config'), GIT_CONFIG_GLOBAL: join(workspace, 'git-global-config'),
  npm_config_cache: join(workspace, 'npm-cache'), npm_config_registry: 'https://registry.npmjs.org/',
  npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' };
const restrict = join(root, 'scripts/full-lean/restrict-filesystem.py');
const allow = [...linuxIsolationFiles(),
  { path: resolve(dirname(process.execPath), '..'), access: 'execute' },
  // npm/npx use the ordinary OS shell and /usr/bin/env shebang. Do not expose
  // whole /usr/bin or /usr/lib trees containing compilers and Python.
  { path: '/bin/sh', access: 'execute' }, { path: '/usr/bin/env', access: 'execute' },
  { path: archive, access: 'read' }, { path: workspace, access: 'write' }];
const result = { scope: 'Native Linux installed CLI, offline cache and copied deployment; preinstalled developer tools and checkout contents denied by Landlock',
  platform: `${process.platform}-${process.arch}`, node: process.version, kernel: release(),
  osRelease: readFileSync('/etc/os-release', 'utf8'), glibc: process.report.getReport().header.glibcVersionRuntime,
  sourceRevision: execFileSync('git', ['rev-parse', 'HEAD'], { cwd: root, encoding: 'utf8' }).trim(),
  archiveSha256: expectedSha, archiveBytes: statSync(archive).size, workspace,
  resourceReport: process.env.LASM_RESOURCE_REPORT, startedAt: new Date().toISOString(), passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
function isolated(rules, command, cwd, timeout) {
  const actual = spawnSync('/usr/bin/python3', [restrict, rules, '--', ...command], { cwd, encoding: 'utf8', timeout, maxBuffer: 4 * 1024 * 1024 });
  assert.ifError(actual.error); assert.equal(actual.signal, null);
  return { code: actual.status, stdout: actual.stdout,
    stderr: actual.stderr.replace(/^\[lasm\] Landlock ABI \d+: filesystem access restricted before execution\n/, '') };
}
save();
const adviceReport = join(output, 'tool-cache-advice.json'), adviceStop = join(output, 'stop-tool-cache-advice');
const advisor = spawn('/usr/bin/python3', ['-I', '-B', join(root, 'scripts/full-lean/advise-tool-cache.py'),
  join(workspace, 'cache/lasm'), adviceReport, adviceStop, join(workspace, 'project space λ')], { stdio: 'inherit' });
const advisorExit = new Promise(resolve => {
  advisor.once('error', error => resolve({ error: error.message }));
  advisor.once('exit', (code, signal) => resolve({ code, signal }));
});
try {
  for (const phase of ['cold', 'lake', 'offline']) {
    result.activePhase = phase; save();
    const rules = join(output, phase + '-rules.json');
    writeFileSync(rules, JSON.stringify({ allow, environment, denyTcp: phase === 'offline' }, null, 2) + '\n');
    const actual = isolated(rules, [process.execPath, control, phase, workspace, archive, join(root, 'package.json')], workspace, 3000_000);
    writeFileSync(join(output, phase + '.log'), actual.stdout + actual.stderr);
    (result.phaseExecutions ??= []).push({ phase, code: actual.code, diagnostic: actual.stderr.slice(-6000) });
    if (existsSync(join(workspace, 'result.json')))
      result.installation = JSON.parse(readFileSync(join(workspace, 'result.json')));
    save();
    assert.equal(actual.code, 0, `${phase}: ${actual.stderr.slice(-6000)}`);
    console.log(actual.stdout.trim());
  }
  const deploymentRoot = mkdtempSync(join(tmpdir(), 'lasm deployed 日本語-'));
  result.deploymentRoot = deploymentRoot;
  const engine = join(deploymentRoot, 'node'), cwd = join(deploymentRoot, 'working directory'), temporary = join(deploymentRoot, 'tmp');
  copyFileSync(process.execPath, engine); mkdirSync(cwd); mkdirSync(temporary);
  const deploymentAllow = [...linuxIsolationFiles(), { path: engine, access: 'execute' },
    { path: cwd, access: 'write' }, { path: temporary, access: 'write' }];
  const programs = [];
  for (const entry of result.installation.deployments) {
    const copied = join(deploymentRoot, entry.name, 'dist');
    if (entry.relocate) { mkdirSync(dirname(copied), { recursive: true }); renameSync(entry.output, copied); }
    else cpSync(entry.output, copied, { recursive: true });
    deploymentAllow.push({ path: copied, access: 'execute' });
    programs.push({ ...entry, copied, wasmSha256: await hashFile(join(copied, 'program.wasm')) });
  }
  const deploymentRules = join(output, 'deployment-rules.json');
  writeFileSync(deploymentRules, JSON.stringify({ allow: deploymentAllow, denyTcp: true,
    environment: { PATH: '', HOME: cwd, LANG: 'C.UTF-8', TMPDIR: temporary, LEAN_NUM_THREADS: '2' } }, null, 2) + '\n');
  const denied = [join(root, 'package.json'), join(result.installation.compiler, 'bin/lasm.mjs'),
    ...programs.flatMap(entry => [entry.source, ...(!entry.relocate ? [join(entry.output, 'program.wasm')] : [])]),
    join(result.installation.tools, 'artifacts', programs[0].build.nativeLeanIdentity, 'bin/lean')];
  const controlResult = isolated(deploymentRules, [engine, '--input-type=module', '-e',
    `import assert from 'node:assert/strict'; import {readFileSync} from 'node:fs';
    for (const file of ${JSON.stringify(denied)}) assert.throws(() => readFileSync(file), {code:'EACCES'});`], cwd, 30_000);
  assert.deepEqual(controlResult, { code: 0, stdout: '', stderr: '' });
  result.deployment = { denied, controlResult, programs: [] }; save();
  for (const program of programs) {
    const checks = [];
    for (const c of program.checks) {
      const start = performance.now();
      const actual = isolated(deploymentRules, [engine, join(program.copied, 'main.mjs'), ...c.args], cwd, 120_000);
      checks.push({ ...c, actual, seconds: (performance.now() - start) / 1000 });
      assert.deepEqual(actual, c.expected);
    }
    result.deployment.programs.push({ name: program.name, bytes: program.bytes, relocation: program.relocate ? 'moved' : 'copied',
      wasmSha256: program.wasmSha256, checks }); save();
  }
  result.passed = true; result.finishedAt = new Date().toISOString(); save();
} catch (error) { result.error = error.stack; result.finishedAt = new Date().toISOString(); save(); throw error; }
finally {
  writeFileSync(adviceStop, 'stop\n');
  result.toolCacheAdvisorExit = await advisorExit;
  if (existsSync(adviceReport)) result.toolCacheAdvice = JSON.parse(readFileSync(adviceReport));
  if (result.toolCacheAdvisorExit.code !== 0) result.passed = false;
  save();
  assert.deepEqual(result.toolCacheAdvisorExit, { code: 0, signal: null });
}
// Keep immutable measurements, not another multi-gigabyte successful cache.
rmSync(result.deploymentRoot, { recursive: true }); rmSync(workspace, { recursive: true });
console.log(JSON.stringify(result, null, 2));
