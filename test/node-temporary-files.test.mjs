import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, mkdirSync, chmodSync, realpathSync, rmSync, statSync, unlinkSync, readdirSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost } from '../src/node-host.mjs';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';
import { setupTemporaryPaths, temporaryCases, temporaryEnvironment } from './fixtures/temporary-files/setup.mjs';

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

test('ordinary Lean temporary APIs match native paths and errors across packaged engines',
  { skip: process.platform !== 'linux', timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-temporary-lean-')));
    setupTemporaryPaths(directory);
    t.after(() => { chmodSync(join(directory, 'denied'), 0o700); rmSync(directory, { recursive: true, force: true }); });
    const source = join(root, 'test/fixtures/temporary-files/Main.lean');
    const execute = (executable, args, entry) => spawnSync(executable, [...args, join(directory, 'guest')], {
      encoding: 'utf8', timeout: 30_000, killSignal: 'SIGKILL', env: temporaryEnvironment(entry.env),
    });
    const cases = temporaryCases(directory), native = new Map();
    for (const entry of cases) {
      const result = execute(resolveLean(root).lean, ['--run', source], entry);
      if (entry.name === 'missing-directory') {
        // Pinned Lean's ENOENT decoder dereferences a null filename. Keep the
        // observed native defect distinct from the Lasm safety assertion below.
        assert.equal(result.signal, 'SIGSEGV');
      } else {
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.match(result.stdout, /temporary-files comparison completed\n$/);
      }
      native.set(entry.name, result.stdout);
    }
    const built = await buildMain(source), program = join(built.output, 'main.mjs');
    for (const [label, executable, args] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${label}: not installed`); continue; }
      for (const entry of cases) await t.test(`${label}/${entry.name}`, () => {
        const result = execute(executable, [...args, program], entry);
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        const oracle = entry.name === 'missing-directory' ? 'empty-first-variable' : entry.name;
        assert.equal(result.stdout, native.get(oracle));
      });
    }
  });
