import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, readFileSync } from 'node:fs';
import { join } from 'node:path';
import { root, resolveLean } from '../src/toolchain.mjs';
import { buildMain } from '../src/main.mjs';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';

const string = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
const spawnBytes = (command, args) => Buffer.concat([
  numbers(2, 2, 2, 1, 0, args.length, 0, 0), string(command), ...args.map(string),
]);
const engines = [
  ['node', process.execPath, []],
  ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];

function droppedChild(executable, args, label) {
  const result = spawnSync(executable, args, { encoding: 'utf8', timeout: 2000, killSignal: 'SIGKILL' });
  const pid = Number(result.stdout.trim());
  try {
    assert.equal(result.status, 0, `${label}: ${result.error?.message ?? result.stdout + result.stderr}`);
    assert.equal(result.stderr, '');
    assert.ok(Number.isInteger(pid) && pid > 0);
    assert.match(readFileSync(`/proc/${pid}/cmdline`, 'utf8'), /^\/bin\/sleep\u000010\u0000$/);
  } finally {
    // Clean up only the exact child created by this fixture, including when
    // the old host stays alive and the external deadline stops its parent.
    if (Number.isInteger(pid) && pid > 0) {
      try {
        if (readFileSync(`/proc/${pid}/cmdline`, 'utf8') === '/bin/sleep\0' + '10\0') process.kill(pid, 'SIGKILL');
      } catch (error) { if (!['ENOENT', 'ESRCH'].includes(error.code)) throw error; }
    }
  }
}

test('POSIX wait and tryWait both reap a child before a subsequent kill', { skip: process.platform === 'win32', timeout: 10_000 }, async t => {
  const host = createNodeRuntimeHost();
  t.after(() => host.close());
  for (const wait of [82, 83]) {
    const spawned = await host.request(80, 0, 0n, spawnBytes('/bin/sh', ['-c', 'exit 7']));
    assert.equal(spawned.error, false);
    const id = Number(spawned.bytes.readBigUInt64LE());
    let result;
    do {
      result = await host.request(wait, id, 0n, Buffer.alloc(0));
      assert.equal(result.error, false);
      if (wait === 83 && result.bytes.readBigUInt64LE() === 0n)
        await new Promise(resolve => setTimeout(resolve, 5));
    } while (wait === 83 && result.bytes.readBigUInt64LE() === 0n);
    assert.equal(result.bytes.readBigUInt64LE(wait === 82 ? 0 : 8), 7n);
    const killed = await host.request(84, id, 0n, Buffer.alloc(0));
    assert.equal(killed.error, true);
    assert.equal(killed.bytes.readBigUInt64LE(), 12n); // IO.Error.noSuchThing
    assert.equal(killed.bytes.readBigUInt64LE(8), 3n); // POSIX ESRCH
    host.release(id);
  }
});

test('dropping a child permits host exit while the child is still alive in each engine',
  { skip: process.platform !== 'linux', timeout: 20_000 }, t => {
    const fixture = join(root, 'test/fixtures/process-detach-host.mjs');
    for (const [name, executable, prefix] of engines) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      droppedChild(executable, [...prefix, fixture], name);
      t.diagnostic(`${name}: host exited without terminating its dropped child`);
    }
  });

test('ordinary Lean process lifetimes and errors match native Lean in every installed engine',
  { skip: !['linux', 'darwin'].includes(process.platform), timeout: 650_000 }, async t => {
    const source = join(root, 'test/fixtures/process-lifetime/Main.lean');
    const native = spawnSync(resolveLean(root).lean, ['--run', source], {
      encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
    });
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.ok(native.stdout.endsWith('process lifetime comparison completed\n'));
    const built = await buildMain(source);
    for (const [name, executable, prefix] of engines) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      const result = spawnSync(executable, [...prefix, join(built.output, 'main.mjs')], {
        encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
      });
      assert.equal(result.status, 0, `${name}: ${result.error?.message ?? result.stdout + result.stderr}`);
      assert.equal(result.stderr, '');
      assert.equal(result.stdout, native.stdout, name);
      t.diagnostic(`${name}: matched native process lifecycle and error constructors`);
    }
  });

test('an ordinary Lean main can exit with a dropped, still-running child',
  { skip: process.platform !== 'linux', timeout: 650_000 }, async t => {
    const source = join(root, 'test/fixtures/process-lifetime/Drop.lean');
    droppedChild(resolveLean(root).lean, ['--run', source], 'native Lean');
    const built = await buildMain(source);
    for (const [name, executable, prefix] of engines) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      droppedChild(executable, [...prefix, join(built.output, 'main.mjs')], name);
      t.diagnostic(`${name}: ordinary main exits while its dropped child lives`);
    }
  });
