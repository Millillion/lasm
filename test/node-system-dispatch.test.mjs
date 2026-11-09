// The system operations (120–144) decoded field by field, against node:os and
// the process, including their argument checks.
import test from 'node:test';
import assert from 'node:assert/strict';
import * as os from 'node:os';
import { createNodeSystem } from '../src/node-system.mjs';

const system = createNodeSystem({ leanVersion: '4.35.0' });
const call = (op, argument = 0n, bytes = Buffer.alloc(0)) => system.dispatch(op, 0, argument, bytes);
function reader(bytes) {
  let offset = 0;
  const r = {
    number() { const value = bytes.readBigUInt64LE(offset); offset += 8; return value; },
    string() { const length = Number(r.number()); const value = bytes.subarray(offset, offset + length).toString(); offset += length; return value; },
    optional() { return r.number() === 1n ? r.string() : null; },
    done() { assert.equal(offset, bytes.length); },
  };
  return r;
}

test('the process title can be read and replaced', t => {
  const title = process.title;
  t.after(() => { process.title = title; });
  assert.equal(call(120).toString(), title);
  assert.deepEqual(call(121, 0n, Buffer.from('lasm-title')), Buffer.alloc(0));
  assert.equal(process.title, 'lasm-title');
  assert.equal(call(120).toString(), 'lasm-title');
});

test('uptime, process IDs and the host name are reported as integers and text', () => {
  const uptime = Number(call(122).readBigUInt64LE());
  assert.ok(Number.isInteger(uptime) && Math.abs(uptime - Math.trunc(os.uptime())) <= 1);
  assert.equal(call(123).readBigUInt64LE(), BigInt(process.pid));
  assert.equal(call(124).readBigUInt64LE(), BigInt(process.ppid));
  assert.equal(call(134).toString(), os.hostname());
});

test('CPU records carry the model, speed and the five times', () => {
  const r = reader(call(125)), cpus = os.cpus();
  assert.equal(Number(r.number()), cpus.length);
  for (const cpu of cpus) {
    assert.equal(r.string(), cpu.model);
    const speed = r.number();
    assert.ok(speed >= 0n);
    for (const key of ['user', 'nice', 'sys', 'idle', 'irq']) assert.ok(r.number() >= BigInt(cpu.times[key]) - 1000n, key);
  }
  r.done();
});

test('user records carry name, IDs and the optional shell and home', { skip: process.platform === 'win32' }, () => {
  const r = reader(call(128)), user = os.userInfo();
  assert.deepEqual([r.string(), r.number(), r.number(), r.optional(), r.optional()],
    [user.username, BigInt(user.uid), BigInt(user.gid), user.shell, user.homedir]);
  r.done();
});

test('group records carry name, gid and members; an unknown group is none', { skip: process.platform === 'win32' }, async () => {
  const r = reader(await call(129, BigInt(process.getgid())));
  assert.equal(r.number(), 1n);
  assert.ok(r.string().length > 0);
  assert.equal(r.number(), BigInt(process.getgid()));
  const members = Number(r.number());
  for (let i = 0; i < members; i++) assert.ok(r.string().length > 0);
  r.done();
  assert.deepEqual(await call(129, 4_000_000_123n), Buffer.alloc(8));
});

test('environment entries are length-prefixed key and value pairs', { skip: process.platform === 'win32' }, t => {
  t.after(() => call(133, 0n, Buffer.from('LASM_SYSTEM_DISPATCH')));
  call(132, 0n, Buffer.from('LASM_SYSTEM_DISPATCH\0one=two'));
  const r = reader(call(130));
  const entries = new Map(Array.from({ length: Number(r.number()) }, () => [r.string(), r.string()]));
  r.done();
  assert.equal(entries.get('LASM_SYSTEM_DISPATCH'), 'one=two');
  assert.equal(entries.get('PATH'), process.env.PATH);
});

test('environment names must be non-empty and free of =', () => {
  for (const bytes of ['\0value', 'a=b\0value', '=\0']) assert.throws(() => call(132, 0n, Buffer.from(bytes)), { code: 'EINVAL', errno: -22, message: 'invalid argument' });
  for (const bytes of ['', 'a=b']) assert.throws(() => call(133, 0n, Buffer.from(bytes)), { code: 'EINVAL', errno: -22 });
});

test('priorities are read for a signed pid and checked against libuv\'s range before setting', () => {
  assert.equal(BigInt.asIntN(64, call(135, 0n).readBigUInt64LE()), BigInt(os.getPriority(0)));
  // 2^32 wraps to pid 0, as the C int conversion does.
  assert.equal(BigInt.asIntN(64, call(135, 1n << 32n).readBigUInt64LE()), BigInt(os.getPriority(0)));
  const priority = value => { const bytes = Buffer.alloc(8); bytes.writeBigInt64LE(BigInt(value)); return bytes; };
  for (const value of [-21, 20, 100]) assert.throws(() => call(136, 0n, priority(value)), { code: 'EINVAL', errno: -22 });
  const current = os.getPriority(0);
  assert.deepEqual(call(136, 1n << 32n, priority(current)), Buffer.alloc(0));
  if (current < 19) {
    assert.deepEqual(call(136, 0n, priority(19)), Buffer.alloc(0));
    assert.equal(os.getPriority(0), 19);
  }
  assert.deepEqual(call(136, 0n, priority(19)), Buffer.alloc(0));
});

test('resource usage has sixteen fields with CPU times in milliseconds', () => {
  const bytes = call(138);
  assert.equal(bytes.length, 16 * 8);
  const usage = process.resourceUsage();
  assert.ok(Number(bytes.readBigUInt64LE(0)) <= Math.trunc(usage.userCPUTime / 1000) + 1000);
  assert.ok(Number(bytes.readBigUInt64LE(0)) >= Math.trunc(usage.userCPUTime / 1000) - 1000);
  assert.ok(bytes.readBigUInt64LE(16) > 0n);
});

test('memory queries report the host and the constrained values', () => {
  assert.equal(call(140).readBigUInt64LE(), BigInt(os.totalmem()));
  const free = call(139).readBigUInt64LE();
  assert.ok(free > 0n && free <= BigInt(os.totalmem()));
  assert.equal(call(141).length, 8);
  assert.equal(call(142).length, 8);
});

test('random bytes have the requested length, and unknown operations are refused', async () => {
  assert.equal((await call(143, 33n)).length, 33);
  assert.throws(() => call(131), { message: 'Unknown Lean system operation 131' });
  assert.throws(() => call(145), { message: 'Unknown Lean system operation 145' });
});

test('home and temporary directories grow past PATH_MAX only from Lean 4.36', { skip: process.platform === 'win32' }, t => {
  const home = process.env.HOME;
  t.after(() => call(132, 0n, Buffer.from(`HOME\0${home}`)));
  call(132, 0n, Buffer.from(`HOME\0/${'h'.repeat(5000)}`));
  assert.throws(() => call(126), { code: 'ENOBUFS' });
  assert.equal(createNodeSystem({ leanVersion: '4.36.0' }).dispatch(126, 0, 0n, Buffer.alloc(0)).length, 5001);
  assert.equal(createNodeSystem().dispatch(127, 0, 0n, Buffer.alloc(0)).toString(), call(127).toString());
});
