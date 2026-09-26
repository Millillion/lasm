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
console.log(result.stdout); console.error(result.stderr);
assert.ifError(result.error); assert.equal(result.status, 0);
