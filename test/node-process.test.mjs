// The Node host's process requests. The ordinary Lean programs these tests once
// built (process lifetimes, a dropped child) run in integration/host-fixtures.mjs.
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { existsSync, readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';

const string = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
const spawnBytes = (command, args) => Buffer.concat([
  numbers(2, 2, 2, 1, 0, args.length, 0, 0), string(command), ...args.map(string),
]);
const engines = [
  ['node', process.execPath, []],
];

// The returned PID is the POSIX launcher (src/process-exec.mjs), which closes
// its configuration pipe and then execs the command, as native Lean's
// fork-then-exec child does. The host may exit (it waits only for that pipe)
// while the exec is still in progress: /proc/PID/cmdline is then briefly the
// launcher's, or empty while the kernel replaces the image. Wait, briefly, for
// the exec to finish. A child that died with its host has no /proc entry
// (ENOENT) or stays a zombie (empty cmdline), and fails here.
function execedCommandLine(pid, deadline = Date.now() + 5_000) {
  for (;;) {
    const commandLine = readFileSync(`/proc/${pid}/cmdline`, 'utf8');
    const launcher = commandLine === '' || commandLine.split('\0')[1]?.endsWith('/process-exec.mjs');
    if (!launcher || Date.now() > deadline) return commandLine;
    Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0, 10);
  }
}

function droppedChild(executable, args, label) {
  // Generous: under mutation testing the host runs instrumented and the runner is loaded.
  const result = spawnSync(executable, args, { encoding: 'utf8', timeout: 10_000, killSignal: 'SIGKILL' });
  const pid = Number(result.stdout.trim());
  try {
    assert.equal(result.status, 0, `${label}: ${result.error?.message ?? result.stdout + result.stderr}`);
    assert.equal(result.stderr, '');
    assert.ok(Number.isInteger(pid) && pid > 0);
    assert.equal(execedCommandLine(pid), '/bin/sleep\0' + '10\0', `${label}: the dropped child did not survive its host`);
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
    const fixture = fileURLToPath(new URL('fixtures/process-detach-host.mjs', import.meta.url));
    for (const [name, executable, prefix] of engines) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      droppedChild(executable, [...prefix, fixture], name);
      t.diagnostic(`${name}: host exited without terminating its dropped child`);
    }
  });
