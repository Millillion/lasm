// IO.Process.spawn through the host (operations 80–85) in-process: the spawn
// payload (stdio modes, arguments, cwd, environment edits), piped stdio, the
// application relaunch, exit statuses, waits and kills.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, realpathSync, mkdirSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';

const posix = { skip: process.platform === 'win32', timeout: 20_000 };
const string = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
// modes: 0 piped, 1 inherited, 2 ignored; env: [key, value | undefined].
function payload({ command, args = [], modes = [2, 0, 0], inherit = false, setsid = false, cwd, env = [] }) {
  return Buffer.concat([numbers(...modes, inherit ? 1 : 0, setsid ? 1 : 0, args.length, env.length, cwd === undefined ? 0 : 1),
    string(command), ...args.map(string), ...(cwd === undefined ? [] : [string(cwd)]),
    ...env.flatMap(([key, value]) => value === undefined ? [string(key), numbers(0)] : [string(key), numbers(1), string(value)])]);
}
function host(t, options = {}) {
  const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-process-requests-')));
  const runtime = createNodeRuntimeHost({ cwd: directory, leanVersion: '4.34.1', ...options });
  t.after(() => { runtime.close(); rmSync(directory, { recursive: true, force: true }); });
  const ok = async (op, id = 0, arg = 0n, bytes = Buffer.alloc(0)) => {
    const result = await runtime.request(op, id, BigInt(arg), bytes);
    assert.equal(result.error, false, result.bytes.subarray(16).toString());
    return result.bytes;
  };
  const fails = async (op, id = 0, arg = 0n, bytes = Buffer.alloc(0)) => {
    const result = await runtime.request(op, id, BigInt(arg), bytes);
    assert.equal(result.error, true);
    return { kind: Number(result.bytes.readBigUInt64LE()), errno: Number(result.bytes.readBigInt64LE(8)), message: result.bytes.subarray(16).toString() };
  };
  async function spawn(options) {
    const bytes = await ok(80, 0, 0n, payload(options));
    const [child, pid, stdin, stdout, stderr] = Array.from({ length: 5 }, (_, i) => Number(bytes.readBigUInt64LE(8 * i)));
    const readAll = async id => {
      if (!id) return undefined;
      const chunks = [];
      for (;;) { const chunk = await ok(2, id, 65536n); if (!chunk.length) break; chunks.push(chunk); }
      runtime.release(id);
      return Buffer.concat(chunks).toString();
    };
    return { child, pid, stdin, output: () => Promise.all([readAll(stdout), readAll(stderr)]) };
  }
  return { runtime, directory, ok, fails, spawn };
}

test('arguments, an explicit environment and a relative cwd reach the child', posix, async t => {
  const { directory, ok, spawn } = host(t);
  mkdirSync(join(directory, 'sub'));
  const child = await spawn({ command: '/bin/sh', args: ['-c', 'pwd; printf "%s|%s|%s" "$1" "$A" "${B-unset}" >&2', 'sh', 'one two'],
    cwd: 'sub', env: [['A', 'set'], ['B', undefined], ['', 'ignored'], ['C=D', 'ignored']] });
  assert.ok(child.pid > 0);
  assert.equal((await ok(81, child.child)).readBigUInt64LE(), BigInt(child.pid));
  assert.deepEqual(await child.output(), [join(directory, 'sub') + '\n', 'one two|set|unset']);
  assert.deepEqual(await ok(82, child.child), numbers(0));
});

test('an inherited environment keeps, replaces and removes variables byte for byte', posix, async t => {
  const { ok, spawn } = host(t);
  process.env.LASM_KEEP = 'kept'; process.env.LASM_DROP = 'dropped'; process.env.LASM_SWAP = 'old';
  const { nativeFiles } = await import('../src/native-files.mjs');
  for (const key of ['LASM_KEEP', 'LASM_DROP', 'LASM_SWAP']) nativeFiles().setEnvironment(key, process.env[key]);
  t.after(() => { for (const key of ['LASM_KEEP', 'LASM_DROP', 'LASM_SWAP']) nativeFiles().unsetEnvironment(key); });
  const child = await spawn({ command: '/bin/sh', args: ['-c', 'printf "%s|%s|%s|%s" "$LASM_KEEP" "${LASM_DROP-unset}" "$LASM_SWAP" "$LASM_NEW"'],
    inherit: true, env: [['LASM_DROP', undefined], ['LASM_SWAP', 'new'], ['LASM_NEW', 'added'], ['LASM_SWAP', 'newer']] });
  assert.deepEqual(await child.output(), ['kept|unset|newer|added', '']);
  assert.deepEqual(await ok(82, child.child), numbers(0));
});

test('a NUL ends a POSIX command, argument, cwd or environment string', posix, async t => {
  const { directory, ok, spawn } = host(t);
  mkdirSync(join(directory, 'dir'));
  const child = await spawn({ command: '/bin/sh\0ignored', args: ['-c\0x', 'pwd; printf "%s" "$K"'], cwd: 'dir\0more', env: [['K\0x', 'v\0w']] });
  assert.deepEqual(await child.output(), [join(directory, 'dir') + '\nv', '']);
  assert.deepEqual(await ok(82, child.child), numbers(0));
});

test('piped stdin is a writable file handle', posix, async t => {
  const { ok, spawn, runtime } = host(t);
  const child = await spawn({ command: '/bin/cat', modes: [0, 0, 2] });
  assert.ok(child.stdin > 0);
  await ok(3, child.stdin, 0n, Buffer.from('through stdin'));
  runtime.release(child.stdin);
  assert.deepEqual(await child.output(), ['through stdin', undefined]);
  assert.deepEqual(await ok(82, child.child), numbers(0));
});

test('exit statuses, signals, tryWait, a second wait and a kill after the wait', posix, async t => {
  const { ok, fails, spawn } = host(t);
  const exiting = await spawn({ command: '/bin/sh', args: ['-c', 'exit 3'], modes: [2, 2, 2] });
  assert.deepEqual(await ok(82, exiting.child), numbers(3));
  assert.equal((await fails(82, exiting.child)).errno, 10);
  assert.equal((await fails(83, exiting.child)).errno, 10);
  assert.deepEqual(await fails(84, exiting.child), { kind: 12, errno: 3, message: 'no such process' });
  assert.deepEqual(await fails(86, exiting.child), { kind: 0, errno: 0, message: 'Unknown process operation 86' });
  const sleeping = await spawn({ command: '/bin/sleep', args: ['30'], modes: [2, 2, 2] });
  assert.deepEqual(await ok(83, sleeping.child), numbers(0));
  assert.deepEqual(await ok(84, sleeping.child), Buffer.alloc(0));
  assert.deepEqual(await ok(82, sleeping.child), numbers(128 + 9));
  const quick = await spawn({ command: '/bin/sh', args: ['-c', 'exit 5'], modes: [2, 2, 2] });
  let tried;
  do tried = await ok(83, quick.child); while (tried.readBigUInt64LE() === 0n && await new Promise(resolve => setTimeout(resolve, 5, true)));
  assert.deepEqual(tried, numbers(1, 5));
  assert.equal((await ok(85)).readBigUInt64LE(), BigInt(process.pid));
});

test('a session leader\'s whole group is killed', posix, async t => {
  const { ok, spawn } = host(t);
  const leader = await spawn({ command: '/bin/sh', args: ['-c', 'sleep 30 & wait'], modes: [2, 2, 2], setsid: true });
  await new Promise(resolve => setTimeout(resolve, 100));
  assert.deepEqual(await ok(84, leader.child), Buffer.alloc(0));
  assert.deepEqual(await ok(82, leader.child), numbers(128 + 9));
});

test('a missing command is reported by the child with status 255', posix, async t => {
  const { ok, spawn } = host(t);
  const child = await spawn({ command: '/nonexistent/lasm' });
  assert.deepEqual(await child.output(), ['', "could not execute external process '/nonexistent/lasm'\n"]);
  assert.deepEqual(await ok(82, child.child), numbers(255));
});

test('the application\'s own path relaunches it with the engine and its arguments', posix, async t => {
  const { ok, spawn } = host(t, { appPath: '/virtual/app.mjs',
    applicationCommand: { executable: '/bin/sh', arguments: ['-c', 'printf "%s|" "$@"', 'sh'] } });
  const child = await spawn({ command: '/virtual/app.mjs', args: ['x'] });
  assert.deepEqual(await child.output(), ['/virtual/app.mjs|x|', '']);
  assert.deepEqual(await ok(82, child.child), numbers(0));
});

test('an inherited stdin flushes Lean\'s stdout first', posix, async t => {
  const written = [];
  const { ok, spawn } = host(t, { stdio: { stdout: async bytes => { written.push(Buffer.from(bytes).toString()); } } });
  await ok(3, 1, 0n, Buffer.from('before'));
  const child = await spawn({ command: '/bin/true', modes: [1, 2, 2] });
  assert.deepEqual(written, ['before']);
  assert.deepEqual(await ok(82, child.child), numbers(0));
});

test('unknown process operations and handles are refused', async t => {
  const { fails } = host(t);
  assert.equal((await fails(86, 1)).message, 'Invalid or closed resource');
  assert.equal((await fails(81, 12345)).message, 'Invalid or closed resource');
});
