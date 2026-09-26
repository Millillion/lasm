import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, realpathSync, readFileSync, readdirSync, rmSync, statSync } from 'node:fs';
import { join, isAbsolute } from 'node:path';
import { tmpdir } from 'node:os';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

test('temporary host paths identify the created file and directory on each native POSIX platform',
  { skip: process.platform === 'win32', timeout: 30_000 }, async t => {
    const root = realpathSync(mkdtempSync(join(tmpdir(), 'lasm temporary λ-')));
    const previous = process.env.TMPDIR, cwd = process.cwd();
    const host = createNodeRuntimeHost({ cwd: root });
    t.after(() => {
      host.close();
      if (previous === undefined) delete process.env.TMPDIR; else process.env.TMPDIR = previous;
      rmSync(root, { recursive: true, force: true });
    });
    mkdirSync(join(root, 'relative 日本語'));
    const request = async (op, id = 0, bytes = Buffer.alloc(0)) => {
      const result = await host.request(op, id, 0n, bytes);
      assert.equal(result.error, false, result.bytes.toString());
      return result.bytes;
    };
    for (const base of [root, 'relative 日本語//./']) {
      process.env.TMPDIR = base;
      const prefix = base.replace(/\/$/, '') + '/tmp.';
      for (let iteration = 0; iteration < 3; iteration++) {
        const created = await request(20), id = Number(created.readBigUInt64LE());
        const name = created.subarray(8).toString();
        assert.equal(name.slice(0, -8), prefix, 'Preserve the original path spelling');
        const path = isAbsolute(name) ? name : join(root, name);
        assert.equal(statSync(path).mode & 0o777, 0o600 & ~process.umask());
        const contents = Buffer.from(`temporary ${iteration} λ\n`);
        await request(3, id, contents);
        await request(4, id);
        assert.deepEqual(readFileSync(path), contents, 'The returned name reopens the same file');
        await host.releaseAsync(id);
        await request(15, 0, Buffer.from(name));

        const directory = (await request(21)).toString();
        assert.equal(directory.slice(0, -8), prefix);
        const directoryPath = isAbsolute(directory) ? directory : join(root, directory);
        assert.equal(statSync(directoryPath).isDirectory(), true);
        assert.equal(statSync(directoryPath).mode & 0o777, 0o700 & ~process.umask());
        await request(16, 0, Buffer.from(directory));
      }
    }
    assert.deepEqual(readdirSync(root), ['relative 日本語']);
    assert.deepEqual(readdirSync(join(root, 'relative 日本語')), []);
    assert.equal(host.stats().resources, 0);
    assert.equal(process.cwd(), cwd);
  });
