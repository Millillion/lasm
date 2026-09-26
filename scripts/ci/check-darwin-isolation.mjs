import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, realpathSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { darwinSandbox } from './darwin-isolation.mjs';

assert.equal(process.platform, 'darwin');
const workspace = realpathSync(mkdtempSync(join(tmpdir(), 'lasm sandbox control λ-')));
const profile = join(workspace, 'control.sb'), node = realpathSync(process.execPath);
writeFileSync(profile, darwinSandbox({ writes: [workspace], executables: [node], offline: true }));
const source = `import assert from 'node:assert/strict';import {readFileSync,writeFileSync} from 'node:fs';
for(const p of ${JSON.stringify([join(process.cwd(), 'package.json'), '/usr/bin/git', '/usr/bin/python3', '/usr/bin/cc'])})
assert.throws(()=>readFileSync(p),{code:'EPERM'});
writeFileSync('allowed','workspace write works');
await assert.rejects(fetch('https://127.0.0.1:443'),e=>e.cause?.code==='EPERM');
console.log('macOS filesystem and network sandbox verified');`;
const result = spawnSync('/usr/bin/sandbox-exec', ['-f', profile, node, '--input-type=module', '-e', source],
  { cwd: workspace, env: { PATH: dirname(node), HOME: workspace, TMPDIR: workspace }, encoding: 'utf8', timeout: 30000 });
console.log(JSON.stringify({ code: result.status, signal: result.signal, error: result.error?.message,
  stdout: result.stdout, stderr: result.stderr }));
if (result.status !== 0) {
  const logs = spawnSync('/usr/bin/log', ['show', '--last', '1m', '--style', 'compact', '--predicate',
    'process == "sandboxd" OR (process == "kernel" AND eventMessage CONTAINS "Sandbox")'],
    { encoding: 'utf8', timeout: 10000, maxBuffer: 1024 ** 2 });
  console.log((logs.stdout ?? '').slice(-12000));
}
assert.ifError(result.error); assert.equal(result.status, 0);
