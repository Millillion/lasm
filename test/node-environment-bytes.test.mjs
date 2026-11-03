// The Node host's environment requests keep raw POSIX bytes (read, list, edit,
// inherit). Ordinary Lean programs reading them are compared with native Lean
// in integration/host-fixtures.mjs (environment-bytes).
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

test('the Node host reads, lists and edits raw environment bytes and children inherit them',
  { skip: process.platform !== 'linux', timeout: 60_000 }, () => {
    const fixture = file => fileURLToPath(new URL(`fixtures/environment-bytes/${file}`, import.meta.url));
    const result = spawnSync('/usr/bin/python3', [fixture('run.py')], {
      input: JSON.stringify({ command: [process.execPath, fixture('host.mjs'), 'ff80'], valueHex: 'ff80' }), encoding: 'utf8', timeout: 35_000,
    });
    assert.equal(result.status, 0, result.error?.message ?? result.stderr);
    const output = JSON.parse(result.stdout);
    assert.equal(output.timeoutSeconds, undefined);
    assert.equal(output.status, 0, Buffer.from(output.stderrHex, 'hex').toString());
    assert.equal(output.stderrHex, '');
    assert.equal(Buffer.from(output.stdoutHex, 'hex').toString(), 'environment host checked\n');
  });
