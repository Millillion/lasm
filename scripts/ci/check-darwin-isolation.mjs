import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, readFileSync, realpathSync, readdirSync, statSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { tmpdir, homedir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { darwinSandbox } from './darwin-isolation.mjs';

assert.equal(process.platform, 'darwin');
const started = Date.now();
const workspace = realpathSync(mkdtempSync(join(tmpdir(), 'lasm sandbox control λ-')));
const profile = join(workspace, 'control.sb'), node = realpathSync(process.execPath);
writeFileSync(profile, darwinSandbox({ writes: [workspace], executables: [resolve(dirname(node), '..')], offline: true }));
const source = `import assert from 'node:assert/strict';import {readFileSync,writeFileSync} from 'node:fs';
for(const p of ${JSON.stringify([join(process.cwd(), 'package.json'), '/usr/bin/git', '/usr/bin/python3', '/usr/bin/cc'])})
assert.throws(()=>readFileSync(p),{code:'EPERM'});
writeFileSync('allowed','workspace write works');
await assert.rejects(fetch('https://127.0.0.1:443'),e=>e.cause?.code==='EPERM');
console.log('macOS filesystem and network sandbox verified');`;
const result = spawnSync('/usr/bin/sandbox-exec', ['-f', profile, node, '--input-type=module', '-e', source],
  { cwd: workspace, env: { PATH: dirname(node), HOME: workspace, TMPDIR: workspace, LANG: 'en_US.UTF-8' }, encoding: 'utf8', timeout: 30000 });
console.log(JSON.stringify({ code: result.status, signal: result.signal, error: result.error?.message,
  stdout: result.stdout, stderr: result.stderr }));
if (result.status !== 0) {
  const dependencies = spawnSync('/usr/bin/otool', ['-L', node], { encoding: 'utf8', timeout: 10000 });
  console.log('Stock Node loader dependencies:\n' + dependencies.stdout);
  const baseline = join(workspace, 'baseline.sb'); writeFileSync(baseline, '(version 1)\n(allow default)\n');
  for (const [name, policy, executable, args] of [
    ['permissive native true', baseline, '/usr/bin/true', []],
    ['permissive Node version', baseline, node, ['--version']],
    ['restricted Node version', profile, node, ['--version']],
  ]) {
    const probe = spawnSync('/usr/bin/sandbox-exec', ['-f', policy, executable, ...args],
      { cwd: workspace, env: process.env, encoding: 'utf8', timeout: 10000 });
    console.log(JSON.stringify({ name, code: probe.status, signal: probe.signal, stdout: probe.stdout, stderr: probe.stderr }));
  }
  // Diagnose each complete top-level rule without claiming these permissive
  // probes as an isolation pass. Respect parentheses inside quoted paths.
  const policyText = readFileSync(profile, 'utf8'), forms = [];
  let depth = 0, quoted = false, escaped = false, begin;
  for (let i = 0; i < policyText.length; i++) {
    const c = policyText[i];
    if (quoted) { if (escaped) escaped = false; else if (c === '\\') escaped = true; else if (c === '"') quoted = false; }
    else if (c === '"') quoted = true;
    else if (c === '(') { if (depth++ === 0) begin = i; }
    else if (c === ')' && --depth === 0) forms.push(policyText.slice(begin, i + 1));
  }
  for (const [index, form] of forms.entries()) {
    if (!form.startsWith('(deny')) continue;
    const probeProfile = join(workspace, `rule-${index}.sb`);
    writeFileSync(probeProfile, '(version 1)\n(allow default)\n' + form + '\n');
    const probe = spawnSync('/usr/bin/sandbox-exec', ['-f', probeProfile, node, '--version'],
      { cwd: workspace, env: { ...process.env, DYLD_PRINT_LIBRARIES: '1' }, encoding: 'utf8', timeout: 10000 });
    console.log(JSON.stringify({ rule: form, code: probe.status, signal: probe.signal, stdout: probe.stdout, stderr: probe.stderr }));
  }
  for (const directory of [join(homedir(), 'Library/Logs/DiagnosticReports'), '/Library/Logs/DiagnosticReports']) {
    try { for (const name of readdirSync(directory).filter(name => /^(?:node|sandbox-exec)[-_]/.test(name))) {
      const file = join(directory, name);
      if (statSync(file).mtimeMs >= started) console.log(name + '\n' + readFileSync(file, 'utf8').slice(0, 16000));
    } } catch (error) { console.log('Crash diagnostic: ' + error.message); }
  }
  const logs = spawnSync('/usr/bin/log', ['show', '--last', '1m', '--style', 'compact', '--predicate',
    'process == "sandboxd" OR (process == "kernel" AND eventMessage CONTAINS "Sandbox")'],
    { encoding: 'utf8', timeout: 10000, maxBuffer: 1024 ** 2 });
  console.log((logs.stdout ?? '').slice(-12000));
}
assert.ifError(result.error); assert.equal(result.status, 0);
