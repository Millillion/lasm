import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, openSync, closeSync, rmSync, existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createRequire } from 'node:module';
import { encodeProcessConfiguration, nativeProcessLauncher } from '../src/process-launcher.mjs';

test('native launcher rejects incomplete or unknown private configurations without executing the child',
  { skip: process.platform !== 'linux' }, t => {
    const root = mkdtempSync(join(tmpdir(), 'lasm-launcher-wire-'));
    t.after(() => rmSync(root, { recursive: true, force: true }));
    const selected = nativeProcessLauncher(createRequire(import.meta.url)('koffi').load(null));
    const executables = [selected];
    // Static musl can also be executed on this glibc host. This validates its
    // launcher protocol, not a complete musl Lean/engine environment.
    if (selected.endsWith('-gnu') && existsSync(selected.replace(/-gnu$/, '-musl')))
      executables.push(selected.replace(/-gnu$/, '-musl'));
    const configuration = encodeProcessConfiguration({ command: '/bin/true', args: [], env: {},
      directory: '/', inheritProcessCwd: true, stdioFlags: [0, 0, 0] });
    function run(executable, bytes) {
      const file = join(root, 'configuration'); writeFileSync(file, bytes);
      const fd = openSync(file, 'r');
      try { return spawnSync(executable, [], { stdio: ['ignore', 'pipe', 'pipe', fd], encoding: 'utf8', timeout: 3000 }); }
      finally { closeSync(fd); }
    }
    for (const executable of executables) {
      const valid = run(executable, configuration);
      assert.equal(valid.status, 0, valid.stderr); assert.equal(valid.stdout, ''); assert.equal(valid.stderr, '');
      for (const [name, input, diagnostic] of [
        ['truncated header', configuration.subarray(0, 4), 'incomplete configuration'],
        ['truncated payload', configuration.subarray(0, -1), 'incomplete configuration'],
        ['unknown protocol', Buffer.concat([Buffer.from('LASMEX02'), configuration.subarray(8)]), 'unknown configuration version'],
        ['trailing bytes', Buffer.concat([configuration, Buffer.from('extra')]), 'unexpected configuration data'],
      ]) {
        const result = run(executable, input);
        assert.equal(result.status, 125, name + ': ' + result.stderr);
        assert.equal(result.stdout, '');
        assert.equal(result.stderr, `Lasm process launcher: ${diagnostic}\n`);
      }
      t.diagnostic(`validated protocol: ${executable}`);
    }
  });
