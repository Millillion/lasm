import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { root } from '../src/toolchain.mjs';

const deno = join(root, '.cache/js-runtimes/deno-2.9.7/deno');
test('Deno pthread bootstrap preserves raw cwd and settles worker ownership',
  { skip: process.platform !== 'linux' || !existsSync(deno), timeout: 75_000 }, async t => {
    const output = mkdtempSync(join(tmpdir(), 'lasm-pthread-raw-'));
    const cwd = Buffer.concat([Buffer.from(output + '/raw-'), Buffer.from([0xff, 0x80])]);
    mkdirSync(cwd);
    try {
      for (const name of ['host', 'failure']) await t.test(name, () => {
        const config = join(output, name + '.json');
        writeFileSync(config, JSON.stringify({ cwdBase64: cwd.toString('base64'), command: [
          deno, 'run', '-A', '--v8-flags=--max-old-space-size=128',
          join(root, 'test/fixtures/pthread-raw-cwd-' + name + '.mjs'),
        ] }));
        const result = spawnSync('python3', ['-I', '-B',
          join(root, 'integration/fixtures/raw-cwd-run.py'), config], {
          encoding: 'utf8', timeout: 35_000, killSignal: 'SIGKILL', maxBuffer: 1024 * 1024,
        });
        assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
        const observed = JSON.parse(result.stdout);
        assert.equal(observed.timedOut, false); assert.equal(observed.code, 0,
          Buffer.from(observed.stderrBase64, 'base64').toString());
        const record = JSON.parse(Buffer.from(observed.stdoutBase64, 'base64').toString());
        assert.equal(record.passed, true);
        if (name === 'host') {
          assert.equal(record.records.length, 5); assert.equal(record.mainCwdPreserved, true);
          // Deno also prints deliberate worker errors when its parent handles
          // their error event. The existing pthread controls compare that
          // diagnostic with an unwrapped engine worker.
          const stderr = Buffer.from(observed.stderrBase64, 'base64').toString();
          assert.match(stderr, /RangeError: worker error control/);
        } else {
          assert.equal(observed.stderrBase64, ''); assert.equal(record.activeOwnersSettled, 2);
          assert.equal(record.errorAndExitDelivered, true); assert.equal(record.futureWorkersRejected, true);
          assert.equal(record.disposed, true);
        }
      });
    } finally { rmSync(output, { recursive: true, force: true }); }
  });
