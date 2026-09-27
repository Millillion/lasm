import assert from 'node:assert/strict';
import { copyFileSync, cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { windowsIsolated, windowsStartupProbe } from './windows-isolation.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'win32');
await verifyNativeProgram(process.execPath);
const root = mkdtempSync(join(tmpdir(), 'lasm windows isolation λ-'));
const nodeDirectory = join(root, 'stock Node'), node = join(nodeDirectory, 'node.exe');
mkdirSync(nodeDirectory); copyFileSync(process.execPath, node);
cpSync(join(dirname(process.execPath), 'node_modules/npm'), join(nodeDirectory, 'node_modules/npm'), { recursive: true, dereference: true });
for (const file of ['npm.cmd', 'npx.cmd']) copyFileSync(join(dirname(process.execPath), file), join(nodeDirectory, file));
const writable = join(root, 'writable 日本語'), readonly = join(root, 'readonly.txt');
mkdirSync(writable); writeFileSync(readonly, 'read-only fixture\n');
const privateTree = join(root, 'denied directory'); mkdirSync(privateTree);
const deniedFixture = join(privateTree, 'ordinary-user-readable.txt');
writeFileSync(deniedFixture, 'ordinary user can read this\n');
for (const name of ['home', 'tmp']) mkdirSync(join(writable, name));
const environment = { PATH: nodeDirectory, PATHEXT: '.COM;.EXE;.BAT;.CMD',
  SystemRoot: process.env.SystemRoot, WINDIR: process.env.SystemRoot,
  ComSpec: join(process.env.SystemRoot, 'System32/cmd.exe'),
  HOME: join(writable, 'home'), USERPROFILE: join(writable, 'home'),
  LOCALAPPDATA: join(writable, 'home/AppData/Local'), APPDATA: join(writable, 'home/AppData/Roaming'),
  TMP: join(writable, 'tmp'), TEMP: join(writable, 'tmp'),
  npm_config_cache: join(writable, 'npm-cache'), npm_config_update_notifier: 'false',
  npm_config_audit: 'false', npm_config_fund: 'false' };
for (const path of [environment.LOCALAPPDATA, environment.APPDATA]) mkdirSync(path, { recursive: true });
const denied = [resolve('package.json'), process.env.LASM_RESOURCE_PYTHON, deniedFixture];
for (const name of ['git.exe', 'python.exe', 'clang.exe', 'cl.exe']) {
  const r = spawnSync('where.exe', [name], { encoding: 'utf8' });
  for (const file of (r.stdout ?? '').trim().split(/\r?\n/).filter(Boolean)) if (existsSync(file)) denied.push(file);
}
assert.ok(denied.length >= 3, 'Require actual preinstalled developer files as denial controls');
const program = join(writable, 'control.mjs');
copyFileSync(fileURLToPath(new URL('./windows-isolation-control.mjs', import.meta.url)), program);
const config = join(writable, 'control-config.json');
writeFileSync(config, JSON.stringify({ architecture: process.arch, readonly, denied, nodeDirectory,
  localAppData: environment.LOCALAPPDATA }) + '\n');
const output = resolve('.work/windows-isolation-controls'); assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const report = { scope: 'Native restricted-token and scoped firewall controls; no Lean application acceptance', platform: process.platform + '-' + process.arch, root, phases: [] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n'); save();
const positive = spawnSync(node, ['-e', `require('node:assert/strict').equal(require('node:fs').readFileSync(${JSON.stringify(deniedFixture)},'utf8'),'ordinary user can read this\\n')`],
  { cwd: writable, env: environment, encoding: 'utf8', timeout: 30000 });
assert.ifError(positive.error); assert.equal(positive.status, 0, positive.stderr);
report.ordinaryUserSentinel = { code: positive.status, stdout: positive.stdout, stderr: positive.stderr }; save();
report.startupProbes = [];
for (const startupProbe of ['no-acls', 'keep-traversal', 'no-restricting-sids', 'ordinary-token']) {
  const actual = windowsStartupProbe({ startupProbe, disposableRoot: root,
    reads: [nodeDirectory], writes: [writable], command: [node, '--version'],
    cwd: writable, environment, offline: false, timeoutSeconds: 20 }, join(output, startupProbe + '.json'));
  report.startupProbes.push({ startupProbe, ...actual }); save();
}
for (const phase of ['online', 'offline']) {
  const actual = windowsIsolated({ disposableRoot: root, reads: [nodeDirectory, readonly], writes: [writable],
    denied: [resolve('.'), process.env.LASM_RESOURCE_PYTHON, privateTree],
    command: [node, program, config, phase], cwd: writable, environment, offline: phase === 'offline', timeoutSeconds: 180 }, join(output, phase + '.json'));
  let controls;
  try { controls = JSON.parse(actual.stdout); }
  catch { controls = { passed: false, error: 'Node did not produce a complete control report' }; }
  report.phases.push({ phase, ...actual, controls }); save();
}
report.passed = report.phases.every(p => p.code === 0 && p.controls.passed);
save(); console.log(JSON.stringify(report, null, 2));
assert.equal(report.passed, true, 'Every native isolation control must pass; inspect both preserved phases');
