import assert from 'node:assert/strict';
import { copyFileSync, cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { windowsIsolated } from './windows-isolation.mjs';

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
const allPackages = join(root, 'all-application-packages.txt');
writeFileSync(allPackages, 'ordinary AppContainer can read this\n');
const acl = spawnSync(join(process.env.SystemRoot, 'System32/icacls.exe'),
  [allPackages, '/grant:r', '*S-1-15-2-1:RX', '/Q'], { encoding: 'utf8' });
assert.ifError(acl.error); assert.equal(acl.status, 0, acl.stderr);
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
const denied = [resolve('package.json'), process.env.LASM_RESOURCE_PYTHON, allPackages];
for (const name of ['git.exe', 'python.exe', 'clang.exe', 'cl.exe']) {
  const r = spawnSync('where.exe', [name], { encoding: 'utf8' });
  for (const file of (r.stdout ?? '').trim().split(/\r?\n/).filter(Boolean)) if (existsSync(file)) denied.push(file);
}
assert.ok(denied.length >= 3, 'Require actual preinstalled developer files as denial controls');
const program = join(writable, 'control.mjs');
const profile = 'Lasm.CI.' + randomUUID();
copyFileSync(fileURLToPath(new URL('./windows-isolation-control.mjs', import.meta.url)), program);
const config = join(writable, 'control-config.json');
writeFileSync(config, JSON.stringify({ architecture: process.arch, readonly, denied, nodeDirectory,
  localAppData: join(environment.LOCALAPPDATA, 'Packages', profile.toLowerCase(), 'AC') }) + '\n');
const output = resolve('.work/windows-isolation-controls'); assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const report = { scope: 'Native LPAC controls only; no Lean application acceptance', platform: process.platform + '-' + process.arch, root, phases: [] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n'); save();
const positive = windowsIsolated({ disposableRoot: root, reads: [nodeDirectory], writes: [writable],
  lessPrivileged: false, control: 'ordinary-appcontainer-sentinel', offline: true,
  command: [node, '-e', `require('node:assert/strict').equal(require('node:fs').readFileSync(${JSON.stringify(allPackages)},'utf8'),'ordinary AppContainer can read this\\n')`],
  cwd: writable, environment, timeoutSeconds: 30 }, join(output, 'ordinary.json'));
report.ordinaryAppContainerSentinel = positive; save(); assert.equal(positive.code, 0, positive.stderr);
for (const phase of ['online', 'offline']) {
  const actual = windowsIsolated({ profile, disposableRoot: root, reads: [nodeDirectory, readonly], writes: [writable],
    command: [node, program, config, phase], cwd: writable, environment, offline: phase === 'offline', timeoutSeconds: 180 }, join(output, phase + '.json'));
  let controls;
  try { controls = JSON.parse(actual.stdout); }
  catch { controls = { passed: false, error: 'Node did not produce a complete control report' }; }
  report.phases.push({ phase, ...actual, controls }); save();
}
report.passed = report.phases.every(p => p.code === 0 && p.controls.passed);
save(); console.log(JSON.stringify(report, null, 2));
assert.equal(report.passed, true, 'Every native isolation control must pass; inspect both preserved phases');
