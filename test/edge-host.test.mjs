// The edge profile's runtime host (src/edge/edge-host.mjs), operation by
// operation, through `request` as the Lean runtime calls it: the read-only file
// system, standard streams, environment, clocks, random bytes, exit, timers,
// asynchronous operations (ops 94/95), and the errors of what the edge cannot
// do. Before this file it ran only inside built outputs (docs/TESTING.md#mutation-testing).
import test from 'node:test';
import assert from 'node:assert/strict';
import { createEdgeRuntimeHost, numbers, defaultEdgeFiles } from '../src/edge/edge-host.mjs';

const enc = new TextEncoder(), dec = new TextDecoder();
const u64s = bytes => { const v = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength); return Array.from({ length: bytes.length / 8 }, (_, i) => v.getBigUint64(i * 8, true)); };
const failure = r => { assert.equal(r.error, true, 'an error'); const [kind, errno] = u64s(r.bytes.subarray(0, 16)); return { kind: Number(kind), errno: Number(errno), message: dec.decode(r.bytes.subarray(16)) }; };
const ok = r => { assert.equal(r.error, false, r.error ? dec.decode(r.bytes.subarray(16)) : ''); return r.bytes; };
const text = s => enc.encode(s);
const tick = ms => new Promise(resolve => setTimeout(resolve, ms));

function host(options = {}) {
  const out = [], err = [];
  const h = createEdgeRuntimeHost({ stdout: l => out.push(l), stderr: l => err.push(l), ...options });
  return { h, out, err, req: (op, id = 0, arg = 0, bytes = new Uint8Array(0)) => h.request(op, id, BigInt(arg), bytes) };
}

test('numbers: little-endian u64s, negatives wrapped', () => {
  assert.deepEqual([...numbers(1, 258)], [1, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0]);
  assert.deepEqual(u64s(numbers(-1)), [2n ** 64n - 1n]);
  assert.equal(numbers().length, 0);
});

test('files: open, read, read lines, rewind; read-only; errors with kinds and errnos', () => {
  const { req } = host({ files: { '/data/a.txt': 'one\ntwo\nthree', '/data/sub/b': new Uint8Array([1, 2]) } });
  const fd = Number(u64s(ok(req(1, 0, 0, text('/data/./x/../a.txt'))))[0]);
  assert.ok(fd >= 10);
  assert.equal(dec.decode(ok(req(2, fd, 4))), 'one\n');
  assert.equal(dec.decode(ok(req(7, fd))), 'two\n');
  assert.equal(dec.decode(ok(req(7, fd))), 'three');
  assert.equal(ok(req(7, fd)).length, 0);
  assert.equal(ok(req(2, fd, 10)).length, 0);
  ok(req(5, fd));
  assert.equal(dec.decode(ok(req(2, fd, 100))), 'one\ntwo\nthree');
  // Writing to a file, opening for writing, a directory, a missing file.
  assert.deepEqual(failure(req(3, fd, 0, text('x'))), { kind: 2, errno: 30, message: 'read-only file system (Lasm edge file system) (error code: 30, write)' });
  assert.deepEqual(failure(req(1, 0, 1, text('/data/a.txt'))), { kind: 2, errno: 30, message: 'read-only file system (Lasm edge file system) (error code: 30, /data/a.txt)' });
  assert.deepEqual(failure(req(1, 0, 0, text('/data/sub'))), { kind: 5, errno: 21, message: 'is a directory (Lasm edge file system) (error code: 21, /data/sub)' });
  assert.deepEqual(failure(req(1, 0, 0, text('/nope'))), { kind: 1, errno: 2, message: 'no such file or directory (Lasm edge file system) (error code: 2, /nope)' });
  // A closed or wrong resource.
  assert.deepEqual(failure(req(2, 999, 1)), { kind: 4, errno: 22, message: 'Invalid or closed resource' });
  for (const op of [14, 17, 21]) assert.equal(failure(req(op, 0, 0, text('/x'))).kind, 2);
});

test('files: metadata, real paths and directory listings', () => {
  const { req } = host({ files: { '/data/a.txt': 'abc', '/data/sub/b': 'b', '/top': '' } });
  assert.deepEqual(u64s(ok(req(10, 0, 0, text('/data/a.txt')))), [0n, 0n, 0n, 0n, 3n, 1n, 1n]);
  assert.deepEqual(u64s(ok(req(11, 0, 0, text('/data')))), [0n, 0n, 0n, 0n, 0n, 1n, 0n]);
  assert.deepEqual(u64s(ok(req(10, 0, 0, text('/')))), [0n, 0n, 0n, 0n, 0n, 1n, 0n]);
  assert.equal(failure(req(10, 0, 0, text('/data/none'))).errno, 2);
  assert.equal(dec.decode(ok(req(12, 0, 0, text('/data/sub/../a.txt')))), '/data/a.txt');
  assert.equal(dec.decode(ok(req(12, 0, 0, text('//data//')))), '/data');
  assert.equal(failure(req(12, 0, 0, text('/missing'))).errno, 2);
  const list = path => dec.decode(ok(req(13, 0, 0, text(path)))).split('\0').filter(Boolean).sort();
  assert.deepEqual(list('/data'), ['a.txt', 'sub']);
  assert.deepEqual(list('/'), ['data', 'top']);
  assert.deepEqual(list('/data/sub'), ['b']);
  assert.deepEqual(failure(req(13, 0, 0, text('/top'))), { kind: 5, errno: 20, message: 'not a directory (Lasm edge file system) (error code: 20, /top)' });
  assert.equal(failure(req(13, 0, 0, text('/void'))).errno, 2);
  // The default files: the UTC zone for Std.Time.
  const d = host();
  assert.equal(dec.decode(ok(d.req(2, Number(u64s(ok(d.req(1, 0, 0, text('/etc/localtime'))))[0]), 4))), 'TZif');
  assert.deepEqual(Object.keys(defaultEdgeFiles), ['/etc/localtime', '/usr/share/zoneinfo/UTC', '/usr/share/zoneinfo/Etc/UTC']);
});

test('standard streams: complete lines to the sinks, partial lines on flush, UTF-8 split across writes; byte writers', () => {
  const { h, req, out, err } = host();
  ok(req(3, 1, 0, text('a\nb')));
  assert.deepEqual(out, ['a']);
  const euro = text('€');
  ok(req(3, 1, 0, euro.subarray(0, 1))); ok(req(3, 1, 0, euro.subarray(1)));
  ok(req(3, 1, 0, text('c\n\nd')));
  assert.deepEqual(out, ['a', 'b€c', '']);
  ok(req(4, 1));
  assert.deepEqual(out, ['a', 'b€c', '', 'd']);
  ok(req(4, 1));
  assert.equal(out.length, 4, 'nothing more to flush');
  ok(req(3, 2, 0, text('e1\ne2')));
  h.flush();
  assert.deepEqual(err, ['e1', 'e2']);
  assert.equal(failure(req(3, 7, 0, text('x'))).message, 'Writing files is not available in the Lasm edge profile (host operation 3)');
  const bytes = [];
  const w = host({ writers: { 1: b => bytes.push(dec.decode(b)) } });
  ok(w.req(3, 1, 0, text('raw')));
  assert.deepEqual([bytes, w.out], [['raw'], []]);
});

test('environment, arguments, paths, platform answers', () => {
  const { req } = host({ env: { NAME: 'v', EMPTY: '', OBJ: { binding: true } }, args: ['prog', 'x y'] });
  assert.deepEqual([...ok(req(22, 0, 0, text('NAME')))], [1, ...text('v')]);
  assert.deepEqual([...ok(req(22, 0, 0, text('EMPTY')))], [1]);
  assert.equal(ok(req(22, 0, 0, text('OBJ'))).length, 0, 'only string variables');
  assert.equal(ok(req(22, 0, 0, text('NONE'))).length, 0);
  assert.equal(dec.decode(ok(req(31))), 'prog\0x y\0');
  assert.equal(dec.decode(ok(req(23))), '/');
  assert.equal(dec.decode(ok(req(24))), '/lasm-edge-app');
  assert.equal(dec.decode(ok(req(120))), 'lasm-edge');
  assert.deepEqual(u64s(ok(req(9))), [0n]);
  assert.deepEqual(u64s(ok(req(37))), [1n]);
  assert.deepEqual(u64s(ok(req(123))), [1n]);
  assert.deepEqual(u64s(ok(req(124))), [1n]);
  assert.equal(dec.decode(ok(host().req(31))), '');
});

test('clocks: monotonic milliseconds and nanoseconds, wall time as seconds and nanoseconds', async () => {
  const { req } = host();
  const [ms1] = u64s(ok(req(25))), [ns1] = u64s(ok(req(26)));
  await tick(20);
  const [ms2] = u64s(ok(req(25))), [ns2] = u64s(ok(req(26)));
  assert.ok(ms2 - ms1 >= 15n && ms2 - ms1 < 2000n, `${ms2 - ms1} ms`);
  assert.ok(ns2 - ns1 >= 15_000_000n && ns2 - ns1 < 2_000_000_000n, `${ns2 - ns1} ns`);
  const [s, n] = u64s(ok(req(27)));
  assert.ok(Math.abs(Number(s) - Date.now() / 1000) < 5);
  assert.ok(n < 1_000_000_000n && n % 1_000_000n === 0n);
});

test('random bytes: any length; a forbidding platform falls back only while initializing', () => {
  const { h, req } = host();
  for (const n of [0, 16, 70_000]) assert.equal(ok(req(28, 0, n)).length, n);
  assert.ok(ok(req(143, 0, 200_000)).some(b => b !== 0));
  const original = crypto.getRandomValues;
  crypto.getRandomValues = () => { throw new Error('not in global scope'); };
  try {
    assert.equal(ok(req(28, 0, 64)).length, 64);
    h.initialized();
    assert.deepEqual(failure(req(28, 0, 8)), { kind: 4, errno: 22, message: 'IO.getRandomBytes is not available here: not in global scope' });
  } finally { crypto.getRandomValues = original; }
});

test('exit: flushes and calls exit where the platform can; an isolate refuses', () => {
  const codes = [];
  const { req, out } = host({ exit: code => codes.push(code) });
  ok(req(3, 1, 0, text('pending')));
  failure(req(30, 0, 3));
  assert.deepEqual([codes, out], [[3], ['pending']]);
  const isolate = host();
  assert.equal(isolate.h.exitRequested, null);
  assert.deepEqual(failure(isolate.req(30, 0, 2)), { kind: 4, errno: 22, message: 'Lean called IO.Process.exit 2; an edge isolate cannot exit' });
  // The refusal is kept as the stop cause (the runtime traps next; edge-start.mjs reports it).
  assert.equal(isolate.h.exitRequested.message, 'Lean called IO.Process.exit 2; an edge isolate cannot exit');
  assert.equal(isolate.h.exitRequested.exit, 2);
});

test('unavailable operations name what is missing', () => {
  const { req } = host();
  const message = op => failure(req(op)).message;
  for (const op of [50, 65, 100, 116]) assert.equal(message(op), `Sockets and DNS (use fetch through Lasm.JS) is not available in the Lasm edge profile (host operation ${op})`);
  for (const op of [80, 89]) assert.equal(message(op), `Processes is not available in the Lasm edge profile (host operation ${op})`);
  for (const op of [49, 66, 90, 99, 117, 6]) assert.equal(message(op), `This runtime operation is not available in the Lasm edge profile (host operation ${op})`);
  assert.deepEqual(failure(req(66)).kind, 8);
  assert.deepEqual(failure(req(36)), { kind: 11, errno: 0, message: 'out of memory' });
});

test('sleep and asynchronous operations complete into the queue (ops 94 and 95)', async () => {
  let notified = 0;
  const { h, req } = host({ notify: () => notified++, files: { '/f': 'x' } });
  const started = performance.now();
  assert.equal((await req(35, 0, 30)).error, false);
  assert.ok(performance.now() - started >= 25);
  const header = (promise, check, op, arg) => new Uint8Array([...numbers(promise, 7, 2), ...numbers(check ? 1 : 0, op, arg)]);
  // A sleep, a failing open (checked: it fails at once), an unchecked failing open (completes as an error).
  assert.deepEqual(req(94, 0, 0, header(0xa, false, 35, 5)), { error: false, bytes: new Uint8Array(0) });
  const checked = req(94, 0, 0, new Uint8Array([...header(0xb, true, 1, 0), ...text('/missing')]));
  assert.equal(failure(checked).errno, 2);
  ok(req(94, 0, 0, new Uint8Array([...header(0xc, false, 1, 0), ...text('/missing')])));
  ok(req(94, 0, 0, new Uint8Array([...header(0xd, true, 1, 0), ...text('/f')])));
  assert.equal(h.pending(), 0, 'nothing completed yet');
  await tick(30);
  assert.equal(h.pending(), 3);
  assert.ok(notified >= 3);
  const queue = ok(req(95));
  const packets = [];
  for (let o = 0; o < queue.length;) { const n = Number(u64s(queue.subarray(o, o + 8))[0]); packets.push(queue.subarray(o + 8, o + 8 + n)); o += 8 + n; }
  const by = Object.fromEntries(packets.map(p => [Number(u64s(p.subarray(0, 8))[0]), p]));
  assert.deepEqual(Object.keys(by).map(Number).sort(), [0xa, 0xc, 0xd]);
  for (const p of Object.values(by)) assert.deepEqual(u64s(p.subarray(8, 24)), [7n, 2n]);
  assert.equal(by[0xa][24], 0);
  assert.equal(by[0xa].length, 32);
  assert.equal(by[0xc][24], 1);
  assert.equal(failure({ error: true, bytes: by[0xc].subarray(32) }).errno, 2);
  assert.equal(by[0xd][24], 0);
  assert.ok(Number(u64s(by[0xd].subarray(32))[0]) >= 10);
  assert.equal(ok(req(95)).length, 0);
  assert.equal(h.pending(), 0);
  // A rejected asynchronous operation completes as an error too.
  ok(req(94, 0, 0, new Uint8Array([...header(0xe, false, 72, 0)])));
  await tick(5);
  const rejected = ok(req(95));
  assert.equal(rejected[8 + 24], 1);
  const counts = h.operationCounts();
  assert.deepEqual(Object.keys(counts).map(Number), Object.keys(counts).map(Number).sort((a, b) => a - b));
  assert.equal(counts[94], 5);
  assert.ok(counts[1] >= 3 && counts[95] === 3);
});

test('timers: one-shot, repeating, reset, cancel and close', async () => {
  const { h, req } = host();
  const id = r => Number(u64s(ok(r))[0]);
  const t = id(req(70, 0, 20));
  assert.deepEqual(u64s(ok(req(71, t))), [1n]);
  assert.deepEqual(u64s(ok(req(71, t))), [1n], 'starting twice keeps the generation');
  const fired = req(72, t);
  assert.equal(typeof fired.then, 'function');
  let done = false;
  fired.then(() => { done = true; });
  await tick(5);
  assert.equal(done, false);
  await tick(40);
  assert.equal(done, true);
  assert.deepEqual(await req(72, t), { error: false, bytes: new Uint8Array(0) });
  // Cancel before it fires: the wait fails as cancelled; a one-shot can start again.
  const c = id(req(70, 0, 50));
  ok(req(71, c));
  const waiting = req(72, c);
  assert.deepEqual(u64s(ok(req(75, c))), [1n]);
  assert.deepEqual(failure(await waiting), { kind: 10, errno: 0, message: 'Timer cancelled' });
  assert.deepEqual(u64s(ok(req(75, c))), [0n], 'nothing to cancel');
  assert.deepEqual(u64s(ok(req(71, c))), [3n]);
  // Reset postpones the firing.
  const r = id(req(70, 0, 40));
  ok(req(71, r));
  let resetDone = false;
  req(72, r).then(() => { resetDone = true; });
  await tick(25);
  ok(req(73, r));
  await tick(25);
  assert.equal(resetDone, false, 'reset restarted the delay');
  await tick(40);
  assert.equal(resetDone, true);
  // Repeating timers fire at once, then every interval; each wait needs a fresh start.
  const rep = id(req(70, 1, 15));
  assert.deepEqual(u64s(ok(req(71, rep))), [1n]);
  await req(72, rep);
  assert.deepEqual(u64s(ok(req(71, rep))), [2n]);
  const started = performance.now();
  await req(72, rep);
  assert.ok(performance.now() - started >= 8);
  // Cancelling drops the finished wait; the next start makes a fresh one.
  assert.deepEqual(u64s(ok(req(75, rep))), [1n]);
  assert.deepEqual(u64s(ok(req(71, rep))), [4n]);
  // Close: a pending wait fails, the timer is finished, release drops it.
  const pend = req(72, rep);
  assert.deepEqual(u64s(ok(req(74, rep))), [1n]);
  assert.equal(failure(await pend).kind, 10);
  h.release(rep);
  assert.equal(failure(req(72, rep)).message, 'Invalid or closed resource');
  // A timer that never started waits forever; its wait is a promise that does not settle.
  const idle = id(req(70, 0, 10));
  let settled = false;
  req(72, idle).then(() => { settled = true; });
  await tick(30);
  assert.equal(settled, false);
  // Wrong resource types.
  assert.equal(failure(req(71, 12345)).kind, 4);
  h.release(idle);
  h.release(424242);
});

test('Lasm.JS operations go to the edge bridge; its handles are released through the host', () => {
  const { h, req } = host({ modules: { lib: { f: () => 1 } } });
  const protocol = ok(req(200, 0, 0, numbers(0).subarray(0, 4)));
  assert.deepEqual([...new Uint32Array(protocol.slice().buffer)], [1, 1]);
  const ref = ok(req(201, 0, 1, new Uint8Array([0, 0, 0, 0, ...text('lib')])));
  const handle = new DataView(ref.buffer, ref.byteOffset).getUint32(1, true);
  assert.equal(h.js.snapshot().values, 1);
  h.release(handle);
  assert.equal(h.js.snapshot().values, 0);
  assert.deepEqual(failure(req(201, 0, 0, new Uint8Array([0, 0, 0, 0, ...text('nope')]))).kind, 18, 'a Lean user error');
});

test('default sinks are the console; flushing a stream that does not exist is harmless', () => {
  const logged = [], errors = [];
  const { log, error } = console;
  console.log = line => logged.push(line); console.error = line => errors.push(line);
  try {
    const h = createEdgeRuntimeHost();
    ok(h.request(3, 1, 0n, text('out\npartial')));
    ok(h.request(3, 2, 0n, text('err\n')));
    h.flush();
  } finally { console.log = log; console.error = error; }
  assert.deepEqual([logged, errors], [['out', 'partial'], ['err']]);
  const { req } = host();
  assert.equal(ok(req(4, 7)).length, 0);
});

test('resources: increasing handles, checked types, released without a close method', () => {
  const { h, req } = host({ files: { '/a': '\nline', '/b': 'bytes' } });
  const id = r => Number(u64s(ok(r))[0]);
  const a = id(req(1, 0, 0, text('/a'))), b = id(req(1, 0, 0, text('/b')));
  assert.ok(b > a && a >= 10, `${a} ${b}`);
  // A line that is only its newline.
  assert.equal(dec.decode(ok(req(7, a))), '\n');
  assert.equal(dec.decode(ok(req(7, a))), 'line');
  // Bytes returned are copies: changing them does not change the file.
  const chunk = ok(req(2, b, 2)); chunk[0] = 0;
  const line = ok(req(7, b)); line[0] = 0;
  ok(req(5, b));
  assert.equal(dec.decode(ok(req(2, b, 10))), 'bytes');
  // A timer is not a file, a file is not a timer.
  const t = id(req(70, 0, 1000));
  for (const op of [2, 5, 7]) assert.equal(failure(req(op, t, 1)).message, 'Invalid or closed resource', `op ${op}`);
  for (const op of [71, 72, 73, 74, 75]) assert.equal(failure(req(op, a)).message, 'Invalid or closed resource', `op ${op}`);
  h.release(t);
  // Files have no close method; release still drops them.
  h.release(a);
  assert.equal(failure(req(2, a, 1)).message, 'Invalid or closed resource');
  // The root listing has no empty name; ops 14-21 say why they fail.
  assert.deepEqual(dec.decode(ok(req(13, 0, 0, text('/')))).split('\0').filter(Boolean).sort(), ['a', 'b']);
  assert.equal(dec.decode(ok(req(13, 0, 0, text('/')))), 'a\0b\0');
  assert.equal(failure(req(14, 0, 0, text('/x'))).message, 'read-only file system (Lasm edge file system) (error code: 30, the edge file system is read-only)');
  // Lasm.JS owns ops 200-219 only.
  assert.match(failure(req(219, 0, 0, new Uint8Array(4))).message, /^\w*Error: Unsupported Lasm\.JS operation 219 on the edge$/);
  assert.equal(failure(req(220)).message, 'This runtime operation is not available in the Lasm edge profile (host operation 220)');
});

test('random bytes after initialization: every byte of a large request; the fallback is random too', () => {
  const { h, req } = host();
  h.initialized();
  const bytes = ok(req(28, 0, 200_000));
  assert.equal(bytes.length, 200_000);
  assert.ok(bytes.subarray(199_000).some(b => b !== 0), 'the last chunk is filled');
  assert.equal(ok(req(28, 0, 70_000)).length, 70_000);
  const original = crypto.getRandomValues;
  crypto.getRandomValues = () => { throw new Error('forbidden'); };
  try {
    const fallback = host().req(28, 0, 64);
    assert.ok(ok(fallback).some(b => b !== 0));
  } finally { crypto.getRandomValues = original; }
});

test('exit flushes both streams before it calls exit', () => {
  const codes = [];
  const { req, out, err } = host({ exit: code => codes.push([code, out.length, err.length]) });
  ok(req(3, 1, 0, text('o')));
  ok(req(3, 2, 0, text('e')));
  failure(req(30, 0, 4));
  assert.deepEqual([codes, out, err], [[[4, 1, 1]], ['o'], ['e']]);
});

test('timers: generations, cancels and resets in every phase', async () => {
  const { h, req } = host();
  const id = r => Number(u64s(ok(r))[0]);
  const generation = r => Number(u64s(ok(r))[0]);
  // A cancelled timer that nobody waited for rejects nothing unhandled.
  const unhandled = [];
  const onUnhandled = reason => unhandled.push(reason);
  process.on('unhandledRejection', onUnhandled);
  try {
    const quiet = id(req(70, 0, 1000));
    req(71, quiet);
    assert.deepEqual(u64s(ok(req(75, quiet))), [1n]);
    h.release(quiet);
    await tick(10);
  } finally { process.off('unhandledRejection', onUnhandled); }
  assert.deepEqual(unhandled, []);
  // A one-shot that fired is finished: starting or cancelling it does nothing.
  const once = id(req(70, 0, 5));
  assert.equal(generation(req(71, once)), 1);
  await req(72, once);
  assert.equal(generation(req(71, once)), 1);
  assert.deepEqual(u64s(ok(req(75, once))), [0n]);
  // A one-shot cancelled before it fires can start again, later too.
  const later = id(req(70, 0, 10));
  req(71, later);
  ok(req(75, later));
  await tick(30);
  assert.equal(generation(req(71, later)), 3);
  ok(req(74, later));
  // Resetting a timer that never started does not start it.
  const idle = id(req(70, 0, 5));
  ok(req(73, idle));
  await tick(20);
  assert.equal(generation(req(71, idle)), 1);
  ok(req(74, idle));
  // A delay beyond setTimeout's range waits (it is clamped, not wrapped to 1 ms).
  const far = id(req(70, 0, 2 ** 40));
  req(71, far);
  let fired = false;
  req(72, far).then(() => { fired = true; });
  await tick(20);
  assert.equal(fired, false);
  ok(req(74, far));
  // A repeating timer: a pending wait is kept by a second start; cancelling twice cancels once.
  const rep = id(req(70, 1, 200));
  assert.equal(generation(req(71, rep)), 1);
  await req(72, rep);
  assert.equal(generation(req(71, rep)), 2);
  assert.equal(generation(req(71, rep)), 2, 'the wait is pending: no fresh one');
  assert.deepEqual(u64s(ok(req(75, rep))), [1n]);
  assert.deepEqual(u64s(ok(req(75, rep))), [0n], 'nothing left to cancel');
  // Cancelling keeps a repeating timer's schedule: the next wait ends at the next interval, not at once.
  const started = performance.now();
  assert.equal(generation(req(71, rep)), 4);
  await req(72, rep);
  assert.ok(performance.now() - started >= 100, `${performance.now() - started} ms`);
  // Closed: finished, never fresh again.
  assert.deepEqual(u64s(ok(req(74, rep))), [1n]);
  assert.equal(generation(req(71, rep)), 5);
  assert.equal(generation(req(71, rep)), 5);
  // A repeating timer with no interval fires once and finishes.
  const zero = id(req(70, 1, 0));
  req(71, zero);
  await req(72, zero);
  await tick(10);
  assert.deepEqual(u64s(ok(req(75, zero))), [0n]);
  h.release(zero);
});

test('pending counts queued completions and Lasm.JS events', async () => {
  const { h, req } = host();
  assert.equal(h.pending(), 0);
  // Op 207 settles a Lasm.JS promise: one event.
  ok(req(207, 0, 5, new Uint8Array([0, 0, 0, 0, 0])));
  await tick(5);
  assert.equal(h.pending(), 1);
});
