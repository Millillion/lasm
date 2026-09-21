import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, existsSync, openSync, closeSync, constants } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createRequire } from 'node:module';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

for (const fixture of ['FifoFinalizer', 'FifoThreadFinalizer']) {
  test(`${fixture}: buffered finalization lets a delayed Lean reader run`,
    { skip: process.platform !== 'linux', timeout: 650_000 }, async t => {
      const source = join(root, 'scripts/full-lean/probes', fixture + '.lean');
      const built = await buildMain(source);
      const directory = mkdtempSync(join(tmpdir(), 'lasm-finalizers-'));
      t.after(() => rmSync(directory, { recursive: true, force: true }));
      const ffi = createRequire(import.meta.url)('koffi');
      const fcntl = ffi.load(null).func('int fcntl(int fd, int command)');
      const engines = [
        ['native', resolveLean(root).lean, ['-j4', '--run', source]],
        ['node', process.execPath, [join(built.output, 'main.mjs')]],
        ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', join(built.output, 'main.mjs')]],
        ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), [join(built.output, 'main.mjs')]],
      ];
      for (const [name, executable, args] of engines) {
        if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
        const pipe = join(directory, name + '.fifo');
        const created = spawnSync('mkfifo', [pipe], { encoding: 'utf8' });
        assert.equal(created.status, 0, created.stderr);
        // Keep the measured allocation open without consuming the payload. A
        // partial stdio buffer above its capacity forces the finalizer to wait.
        const fd = openSync(pipe, constants.O_RDWR | constants.O_NONBLOCK);
        try {
          const capacity = fcntl(fd, 1032); // Linux F_GETPIPE_SZ
          assert.ok(capacity > 0 && capacity <= 1024 * 1024 && capacity % 4096 === 0);
          const result = spawnSync(executable, [...args, pipe, String(capacity + 2048)], {
            cwd: root, encoding: 'utf8', timeout: 10_000,
            maxBuffer: 1024 * 1024, killSignal: 'SIGKILL',
          });
          assert.equal(result.status, 0, `${name}: ${result.error?.message ?? result.stderr}`);
          assert.equal(result.stdout, 'buffered FIFO finalizer and delayed reader completed\n');
          assert.equal(result.stderr, '');
          t.diagnostic(`${name}: passed`);
        } finally { closeSync(fd); }
      }
    });
}
