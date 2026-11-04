// The Node host's temporary-file requests. The ordinary Lean comparison with
// native Lean runs in integration/host-fixtures.mjs (temporary-files).
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, realpathSync, rmSync, statSync, unlinkSync, readdirSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

test('temporary resources retain the instance cwd and native modes without changing the process cwd',
  { skip: process.platform !== 'linux', timeout: 30_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-temporary-host-')));
    mkdirSync(join(directory, 'relative'));
    mkdirSync(join(directory, 'next'));
    mkdirSync(join(directory, 'next/relative'));
    const host = createNodeRuntimeHost({ cwd: directory });
    const previous = process.env.TMPDIR;
    t.after(() => {
      host.close();
      if (previous === undefined) delete process.env.TMPDIR; else process.env.TMPDIR = previous;
      rmSync(directory, { recursive: true, force: true });
    });
    process.env.TMPDIR = 'relative//./';
    const cwd = process.cwd();
    const pending = host.request(20, 0, 0n, new Uint8Array());
    const changed = await host.request(29, 0, 0n, Buffer.from('next'));
    assert.equal(changed.error, false);
    const file = await pending;
    assert.equal(file.error, false, file.bytes.toString());
    const id = Number(file.bytes.readBigUInt64LE());
    const name = file.bytes.subarray(8).toString();
    assert.match(name, /^relative\/\/\.\/tmp\.XX[A-Za-z0-9]{6}$/);
    assert.equal(statSync(join(directory, name)).mode & 0o777, 0o600 & ~process.umask());
    host.release(id);
    unlinkSync(join(directory, name));
    const dir = await host.request(21, 0, 0n, new Uint8Array());
    assert.equal(dir.error, false, dir.bytes.toString());
    assert.equal(statSync(join(directory, 'next', dir.bytes.toString())).mode & 0o777, 0o700 & ~process.umask());
    assert.equal(process.cwd(), cwd);
    assert.deepEqual(readdirSync(join(directory, 'relative')), []);
    assert.equal(host.stats().resources, 0);
  });
