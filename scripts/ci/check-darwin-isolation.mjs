import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, readFileSync, realpathSync, readdirSync, statSync, writeSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { tmpdir, homedir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { darwinSandbox, darwinSandboxRules } from './darwin-isolation.mjs';

assert.equal(process.platform, 'darwin');
const evidence = { platform: process.platform + '-' + process.arch, observations: [] };
const emit = value => {
  evidence.observations.push(value);
  writeFileSync('.work/darwin-isolation-control.json', JSON.stringify(evidence, null, 2) + '\n');
  // Uncaught assertion failures can discard queued stdout pipe writes. Keep
  // diagnostics small, synchronous and independently recoverable from a file.
  writeSync(1, JSON.stringify(value) + '\n');
};
const started = Date.now();
const workspace = realpathSync(mkdtempSync(join(tmpdir(), 'lasm sandbox control λ-')));
const profile = join(workspace, 'control.sb'), node = realpathSync(process.execPath);
const policyOptions = { writes: [workspace], executables: [resolve(dirname(node), '..'), '/bin/sh', '/bin/bash', '/usr/bin/env'], offline: true };
writeFileSync(profile, darwinSandbox(policyOptions));
const source = `import assert from 'node:assert/strict';import {readFileSync,writeFileSync} from 'node:fs';import {spawnSync} from 'node:child_process';
for(const p of ${JSON.stringify([join(process.cwd(), 'package.json'), '/usr/bin/git', '/usr/bin/python3', '/usr/bin/cc'])})
assert.throws(()=>readFileSync(p),{code:'EPERM'});
writeFileSync('allowed','workspace write works');
const shell=spawnSync('/bin/sh',['-c','exec "$0" --version',process.execPath],{encoding:'utf8'});
assert.equal(shell.status,0,shell.stderr);assert.equal(shell.stdout,process.version+'\\n');
await assert.rejects(fetch('https://127.0.0.1:443'),e=>e.cause?.code==='EPERM');
console.log('macOS filesystem and network sandbox verified');`;
const result = spawnSync('/usr/bin/sandbox-exec', ['-f', profile, node, '--input-type=module', '-e', source],
  { cwd: workspace, env: { PATH: dirname(node), HOME: workspace, TMPDIR: workspace, LANG: 'en_US.UTF-8' }, encoding: 'utf8', timeout: 30000 });
emit({ code: result.status, signal: result.signal, error: result.error?.message,
  stdout: result.stdout, stderr: result.stderr });
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
    emit({ name, code: probe.status, signal: probe.signal, stdout: probe.stdout, stderr: probe.stderr });
  }
  // These diagnostic probes never count as an isolation pass. Use the actual
  // rule array so profile parsing cannot hide a missing diagnostic.
  const forms = darwinSandboxRules(policyOptions).filter(form => form.startsWith('(deny'));
  const reading = forms[0].replace('file-read-data file-map-executable', 'file-read-data');
  const mapping = forms[0].replace('file-read-data file-map-executable', 'file-map-executable');
  forms.push(reading, mapping,
    forms[0].replace('(require-not', '(require-all (subpath "/") (require-not') + ')',
    '(deny file-read-data (subpath "/usr/bin") (subpath "/Applications") (subpath ' + JSON.stringify(process.cwd()) + '))');
  emit({ diagnosticRules: forms.length, profile: readFileSync(profile, 'utf8') });
  for (const [index, form] of forms.entries()) {
    const probeProfile = join(workspace, `rule-${index}.sb`);
    writeFileSync(probeProfile, '(version 1)\n(allow default)\n' + form + '\n');
    const probe = spawnSync('/usr/bin/sandbox-exec', ['-f', probeProfile, node, '--version'],
      { cwd: workspace, env: process.env, encoding: 'utf8', timeout: 10000 });
    emit({ rule: form, code: probe.status, signal: probe.signal, error: probe.error?.message,
      stdout: probe.stdout?.slice(-2000), stderr: probe.stderr?.slice(-2000) });
  }
  for (const directory of [join(homedir(), 'Library/Logs/DiagnosticReports'), join(workspace, 'Library/Logs/DiagnosticReports'), '/Library/Logs/DiagnosticReports']) {
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
