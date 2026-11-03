// The sync protocol against a live server: HTTP sync, idempotent resends,
// invalid and oversized messages, chunked replies, WebSocket pushes,
// long-poll, concurrent writers, and persistence across a SIGKILL.
//
//   node test/protocol.mjs [--url URL | --command CMD | --platform P] [--name NAME]
import assert from 'node:assert/strict';
import { args, parseReply, startTandem, sync } from './server.mjs';

const a = args();
const server = await startTandem(a);
const base = server.base;
const results = [];
let doc = 0;
const fresh = () => `p${Date.now() % 100000}-${doc++}`;

async function test(name, fn) {
  const started = Date.now();
  try { await fn(); results.push([name, 'ok']); console.log(`ok   ${name} (${Date.now() - started} ms)`); }
  catch (e) { results.push([name, 'FAIL']); console.log(`FAIL ${name}: ${e.stack ?? e}`); }
}
const text = async d => (await fetch(`${base}/doc/${d}/text`)).text();
const ins = (c, r, parent, ch, side = 'R') => parent ? `i ${c} ${r} ${parent[0]} ${parent[1]} ${side} ${ch.codePointAt(0)}`
  : `i ${c} ${r} R ${ch.codePointAt(0)}`;
/** A typed run: `s` at the start of the document, by replica r, counters from c0. */
const run = (s, r, c0 = 1, parent = null) => [...s].map((ch, j) => ins(c0 + j, r, j === 0 ? parent : [c0 + j - 1, r], ch));
const wsUrl = d => `${base.replace(/^http/, 'ws')}/doc/${d}/ws`;
const supportsWs = a.platform !== 'workers';

await test('a sync stores operations and answers with the log', async () => {
  const d = fresh();
  const r = parseReply((await sync(base, d, 0, run('hello', 1))).text);
  assert.deepEqual([r.from, r.to, r.ops.length], [0, 5, 5]);
  assert.equal(await text(d), 'hello');
  const r2 = parseReply((await sync(base, d, 3)).text);
  assert.deepEqual([r2.from, r2.to], [3, 5]);
  assert.deepEqual(r2.ops, r.ops.slice(3));
});

await test('resending acknowledged operations stores nothing twice', async () => {
  const d = fresh();
  const ops = run('abc', 2);
  await sync(base, d, 0, ops);
  const r = parseReply((await sync(base, d, 0, [...ops, ...ops])).text);
  assert.equal(r.to, 3);
  assert.equal(await text(d), 'abc');
});

await test('a deletion, and one that arrives before its character', async () => {
  const d = fresh();
  await sync(base, d, 0, ['d 2 3']);
  await sync(base, d, 0, run('xyz', 3));
  assert.equal(await text(d), 'xz');
});

await test('an insertion whose parent has not arrived waits, invisible', async () => {
  const d = fresh();
  await sync(base, d, 0, [ins(5, 4, [1, 4], 'b')]);
  assert.equal(await text(d), '');
  await sync(base, d, 0, [ins(1, 4, null, 'a')]);
  assert.equal(await text(d), 'ab');
});

await test('invalid messages are refused and store nothing', async () => {
  const d = fresh();
  await sync(base, d, 0, run('ok', 5));
  const bad = [
    'tandem 2\nsync 0\n', 'tandem 1\n', 'tandem 1\nsync x\n', 'tandem 1\nsync -1\n', 'tandem 1\nsync 1e3\n',
    'tandem 1\nsync 0\ni 1 1 R 1114112\n', 'tandem 1\nsync 0\ni 1 1 R 55296\n', 'tandem 1\nsync 0\ni 1 1 L 97\n',
    'tandem 1\nsync 0\ni 3 1 3 1 R 97\n', 'tandem 1\nsync 0\ni 3 1 5 1 L 97\n', 'tandem 1\nsync 0\ni 1000000000000000 1 R 97\n',
    'tandem 1\nsync 0\nd 1\n', 'tandem 1\nsync 0\nx 1 1\n', 'tandem 1\nsync 0\ni  1 1 R 97\n', 'tandem 1\nsync 0\ni 1 1 R 97 \n',
    'tandem 1\nsync 0\ni 01 1 R 97\ni +1 1 R 97\n', '',
  ];
  for (const body of bad) {
    const r = await fetch(`${base}/doc/${d}/sync`, { method: 'POST', body });
    const p = parseReply(await r.text());
    assert.ok(p.error !== undefined || (p.ops && p.ops.length === 2 && p.to === 2), `${JSON.stringify(body)} → ${JSON.stringify(p)}`);
  }
  assert.equal(await text(d), 'ok');
  const r = parseReply((await sync(base, d, 0)).text);
  assert.equal(r.to, 2);
});

await test('more than 5000 operations in one message are refused; a long log comes in chunks', async () => {
  const d = fresh();
  const big = run('a'.repeat(5001), 6);
  assert.ok(parseReply((await sync(base, d, 0, big)).text).error);
  await sync(base, d, 0, big.slice(0, 5000));
  await sync(base, d, 5000, big.slice(5000));
  const r1 = parseReply((await sync(base, d, 0)).text);
  assert.deepEqual([r1.from, r1.to, r1.ops.length], [0, 5000, 5000]);
  const r2 = parseReply((await sync(base, d, 5000)).text);
  assert.deepEqual([r2.from, r2.to], [5000, 5001]);
  assert.equal((await text(d)).length, 5001);
});

await test('a cursor past the end answers with the end', async () => {
  const d = fresh();
  await sync(base, d, 0, run('q', 7));
  assert.deepEqual(parseReply((await sync(base, d, 999)).text), { from: 1, to: 1, ops: [] });
});

await test('bad documents, bodies and methods', async () => {
  assert.equal((await fetch(`${base}/doc/UPPER/sync`, { method: 'POST', body: 'tandem 1\nsync 0\n' })).status, 404);
  assert.equal((await fetch(`${base}/doc/${'x'.repeat(65)}/text`)).status, 404);
  assert.equal((await fetch(`${base}/doc/ok/sync`)).status, 404);
  const big = await fetch(`${base}/doc/ok/sync`, { method: 'POST', body: 'x'.repeat(1048577) });
  assert.ok([413, 400].includes(big.status), `status ${big.status}`);
  const bin = await fetch(`${base}/doc/ok/sync`, { method: 'POST', body: new Uint8Array([0xff, 0xfe, 0x00]) });
  assert.equal(bin.status, 400);
});

await test('concurrent writers: every acknowledged operation stored exactly once, in one contiguous log', async () => {
  const d = fresh();
  const writers = Array.from({ length: 24 }, (_, w) => run(`w${w}-text`, 100 + w));
  const replies = await Promise.all(writers.map(ops => sync(base, d, 0, ops)));
  for (const r of replies) assert.ok(parseReply(r.text).ops, r.text);
  const all = parseReply((await sync(base, d, 0)).text);
  const total = writers.reduce((n, w) => n + w.length, 0);
  assert.equal(all.to, total);
  assert.equal(new Set(all.ops).size, total);
  for (const w of writers) for (const op of w) assert.ok(all.ops.includes(op));
});

await test('long-poll answers when the log grows, and after the timeout when it does not', async () => {
  const d = fresh();
  await sync(base, d, 0, run('a', 8));
  const t0 = Date.now();
  const idle = parseReply(await (await fetch(`${base}/doc/${d}/poll?cursor=1`)).text());
  assert.deepEqual([idle.from, idle.to], [1, 1]);
  assert.ok(Date.now() - t0 >= 1500, 'returned before the timeout');
  const waiting = fetch(`${base}/doc/${d}/poll?cursor=1`).then(r => r.text());
  await new Promise(r => setTimeout(r, 300));
  await sync(base, d, 1, [ins(2, 8, [1, 8], 'b')]);
  const got = parseReply(await waiting);
  assert.deepEqual([got.from, got.to, got.ops.length], [1, 2, 1]);
});

if (supportsWs) await test('WebSocket: a sync is answered, and other connections get the new operations', async () => {
  const d = fresh();
  const open = url => new Promise((resolve, reject) => {
    const ws = new WebSocket(url); const inbox = [];
    ws.onmessage = e => inbox.push(e.data);
    ws.onopen = () => resolve({ ws, inbox });
    ws.onerror = reject;
  });
  const A = await open(wsUrl(d)), B = await open(wsUrl(d));
  const until = async (box, n) => { const end = Date.now() + 10000; while (box.length < n) { if (Date.now() > end) throw new Error('no message'); await new Promise(r => setTimeout(r, 20)); } };
  A.ws.send(`tandem 1\nsync 0\n${run('hi', 9).join('\n')}\n`);
  await until(A.inbox, 1); await until(B.inbox, 1);
  const pushed = parseReply(B.inbox[0]);
  assert.deepEqual([pushed.from, pushed.to, pushed.ops.length], [0, 2, 2]);
  B.ws.send('garbage');
  await until(B.inbox, 2);
  assert.ok(parseReply(B.inbox[1]).error);
  A.ws.close(); B.ws.close();
  assert.equal(await text(d), 'hi');
});

if (server.kill) await test('acknowledged operations survive a SIGKILL of the server', async () => {
  const d = fresh();
  const r = parseReply((await sync(base, d, 0, run('durable', 10))).text);
  assert.equal(r.to, 7);
  await server.kill();
  await server.restart();
  assert.equal(await text(d), 'durable');
});

await server.stop();
const failed = results.filter(([, s]) => s !== 'ok');
console.log(`\n${results.length - failed.length}/${results.length} protocol tests passed${a.name ? ` (${a.name})` : ''}`);
if (failed.length) process.exitCode = 1;
