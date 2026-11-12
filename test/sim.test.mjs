// The deterministic simulation harness (scripts/sim/index.mjs): its pieces
// are deterministic given the seed, and its faults do what they say.
import test from 'node:test';
import assert from 'node:assert/strict';
import { Rng, Scheduler, Clock, Network, Kv, SqlStore, SimFault, Trace, faultProfile, Checks, SeedLoop, options } from '../scripts/sim/index.mjs';

test('Rng: the same seed gives the same numbers; streams are independent', () => {
  const a = new Rng(42), b = new Rng(42), c = new Rng(43);
  const xs = Array.from({ length: 100 }, () => a.u32());
  assert.deepEqual(Array.from({ length: 100 }, () => b.u32()), xs);
  assert.notDeepEqual(Array.from({ length: 100 }, () => c.u32()), xs);
  const f1 = new Rng(7).fork('net'), r = new Rng(7);
  for (let i = 0; i < 50; i++) r.u32();
  assert.equal(r.fork('net').u32(), f1.u32(), 'a fork depends on the seed and its name only');
  const g = new Rng(1);
  for (let i = 0; i < 10000; i++) { const x = g.next(); assert.ok(x >= 0 && x < 1); const n = g.int(7); assert.ok(n >= 0 && n < 7); }
  assert.deepEqual(new Rng(5).shuffle([1, 2, 3, 4, 5]).sort(), [1, 2, 3, 4, 5]);
  assert.throws(() => new Rng(-1));
});

test('Scheduler: events in time order, ties in insertion order; cancel', () => {
  const s = new Scheduler();
  s.at(30, 'c'); s.at(10, 'a'); s.at(10, 'b'); const d = s.at(20, 'd'); s.after(5, 'first');
  s.cancel(d);
  const seen = [];
  for (let e; (e = s.next());) seen.push([e.time, e.event]);
  assert.deepEqual(seen, [[5, 'first'], [10, 'a'], [10, 'b'], [30, 'c']]);
  assert.equal(s.now, 30);
  assert.equal(s.peekTime(), Infinity);
});

test('Clock: skew, drift and jumps', () => {
  const s = new Scheduler();
  const c = new Clock(s, { base: 1000, skew: -500, drift: 0.01 });
  assert.equal(c.now(), 500);
  s.at(1000, 'x'); s.next();
  assert.equal(c.now(), 1000 + 1000 + 10 - 500);
  c.jump(-2000);
  assert.equal(c.now(), 1000 + 1000 + 10 - 2500);
});

test('Network: latency, FIFO channels, drops, duplicates, partitions', () => {
  const s = new Scheduler();
  const net = new Network({ rng: new Rng(3), scheduler: s, latency: [1, 100] });
  for (let i = 0; i < 50; i++) net.send('a', 'b', i, { channel: 'ws' });
  const got = [];
  for (let e; (e = s.next());) if (net.arrive(e.event)) got.push(e.event.payload);
  assert.deepEqual(got, Array.from({ length: 50 }, (_, i) => i), 'a FIFO channel keeps its order');
  for (let i = 0; i < 200; i++) net.send('a', 'b', i);
  const free = [];
  for (let e; (e = s.next());) if (net.arrive(e.event)) free.push(e.event.payload);
  assert.notDeepEqual(free, [...free].sort((x, y) => x - y), 'without a channel, messages reorder');
  const lossy = new Network({ rng: new Rng(4), scheduler: s, drop: 0.5, duplicate: 0.5 });
  let copies = 0;
  for (let i = 0; i < 400; i++) copies += lossy.send('a', 'b', i);
  assert.ok(lossy.stats.dropped > 100 && lossy.stats.duplicated > 50, JSON.stringify(lossy.stats));
  assert.equal(s.size, copies);
  while (s.next());
  net.partition('a', 'b');
  assert.equal(net.send('a', 'b', 'x'), 0);
  assert.equal(net.send('b', 'a', 'x'), 0);
  net.unpartition('a', 'b');
  net.send('a', 'b', 'y');
  net.isolate('b');   // cut while in flight: dropped on arrival
  assert.equal(net.arrive(s.next().event), false);
  net.heal();
  assert.ok(net.reachable('a', 'b'));
});

test('Kv: write failures change nothing; a crash loses unflushed writes', () => {
  const kv = new Kv({ rng: new Rng(9), writeFail: 1 });
  assert.throws(() => kv.set('k', 'v'), SimFault);
  assert.equal(kv.get('k'), null);
  const lazy = new Kv({ lazy: true });
  lazy.set('a', '1'); lazy.flush(); lazy.set('a', '2'); lazy.set('b', '3');
  assert.equal(lazy.get('a'), '2');
  lazy.crash();
  assert.equal(lazy.get('a'), '1');
  assert.equal(lazy.get('b'), null);
});

test('SqlStore: batches are atomic; failed, ambiguous and crashed commits', () => {
  const db = new SqlStore({ rng: new Rng(1) });
  db.run('CREATE TABLE t (k INTEGER PRIMARY KEY, v TEXT)');
  db.batch([['INSERT INTO t VALUES (?, ?)', [1, 'a']], ['INSERT INTO t VALUES (?, ?)', [2, 'b']]]);
  assert.throws(() => db.batch([['INSERT INTO t VALUES (?, ?)', [3, 'c']], ['INSERT INTO t VALUES (?, ?)', [1, 'dup']]]));
  assert.deepEqual(db.all('SELECT k FROM t ORDER BY k').map(r => r.k), [1, 2], 'a failing statement rolls back the batch');
  db.writeFail = 1;
  assert.throws(() => db.batch([['INSERT INTO t VALUES (?, ?)', [4, 'd']]]), SimFault);
  db.writeFail = 0; db.ambiguous = 1;
  assert.throws(() => db.batch([['INSERT INTO t VALUES (?, ?)', [5, 'e']]]), SimFault);
  db.ambiguous = 0;
  assert.deepEqual(db.peek('SELECT k FROM t ORDER BY k').map(r => r.k), [1, 2, 5], 'an ambiguous commit did commit');
  db.crash();
  assert.deepEqual(db.all('SELECT k FROM t ORDER BY k').map(r => r.k), [1, 2, 5], 'a crash keeps what was committed');
  db.down();
  assert.throws(() => db.all('SELECT 1'), SimFault);
  db.up();
  db.readFail = 1;
  assert.throws(() => db.all('SELECT 1'), SimFault);
  db.heal();
  assert.equal(db.all('SELECT 1 AS one')[0].one, 1);
  db.close();
});

test('SeedLoop: one seed, a list of seeds (regression seeds), a range', () => {
  const quiet = console.log; console.log = () => {};
  try {
    const seeds = argv => { const l = new SeedLoop({ name: 't', repro: s => `${s}`, opts: options(argv) }); const out = []; for (let s; (s = l.next()) !== null;) out.push(s); return out; };
    assert.deepEqual(seeds(['--seed', '7']), [7]);
    assert.deepEqual(seeds(['--seed', '1528071973,433344502,5']), [1528071973, 433344502, 5]);
    assert.deepEqual(seeds(['--seeds', '3', '--first', '1001']), [1001, 1002, 1003]);
  } finally { console.log = quiet; }
});

test('faultProfile and Trace: functions of the seed', () => {
  assert.deepEqual(faultProfile(new Rng(11)), faultProfile(new Rng(11)));
  assert.equal(faultProfile(new Rng(11), 'none').drop, 0);
  const run = seed => {
    const s = new Scheduler(), trace = new Trace({ scheduler: s }), rng = new Rng(seed);
    const net = new Network({ rng: rng.fork('net'), scheduler: s, trace, drop: 0.1, duplicate: 0.1 });
    for (let i = 0; i < 100; i++) net.send(`n${rng.int(3)}`, `n${rng.int(3)}`, i);
    for (let e; (e = s.next());) if (net.arrive(e.event)) trace.log(`deliver ${e.event.payload}`);
    return trace.digest;
  };
  assert.equal(run(5), run(5));
  assert.notEqual(run(5), run(6));
});

// A small end-to-end use of the harness on a deliberately broken toy: a
// counter replicated by "last writer wins" on increments, which loses
// increments under concurrency. The harness must find a failing seed, and
// the failure must replay from the seed alone.
function toy(seed) {
  const rng = new Rng(seed), s = new Scheduler(), trace = new Trace({ scheduler: s });
  const net = new Network({ rng: rng.fork('net'), scheduler: s, trace, latency: [1, 50], drop: 0.05 });
  const nodes = ['a', 'b', 'c'];
  const value = { a: 0, b: 0, c: 0 };
  let increments = 0;
  for (let i = 0; i < 30; i++) s.after(rng.int(1000), { type: 'inc', node: rng.pick(nodes) });
  for (let e; (e = s.next());) {
    const ev = e.event;
    if (ev.type === 'inc') {
      increments++; value[ev.node]++;
      trace.log(`${ev.node} increments to ${value[ev.node]}`);
      for (const n of nodes) if (n !== ev.node) net.send(ev.node, n, value[ev.node], { reliable: true });
    } else if (ev.type === 'net' && net.arrive(ev)) value[ev.to] = ev.payload;   // the bug: overwrite
  }
  const checks = new Checks();
  for (const n of nodes) checks.that(value[n] === increments, `${n} holds ${value[n]}, not ${increments}`);
  return { failures: checks.failures, digest: trace.digest };
}

test('the harness finds the toy counter\'s lost increments, and the seed replays them', () => {
  let failing = null;
  for (let seed = 1; seed <= 50 && failing === null; seed++) if (toy(seed).failures.length) failing = seed;
  assert.notEqual(failing, null);
  assert.deepEqual(toy(failing), toy(failing));
});

test('remote world: calls, stand-ins, values, faults and the clock cross the transport unchanged', async () => {
  const { installRemoteWorld, worldHost } = await import('../scripts/sim/remote.mjs');
  const db = new SqlStore({ rng: new Rng(1) });
  db.run('CREATE TABLE t (k INTEGER PRIMARY KEY, v BLOB, n TEXT)');
  let now = 1000;
  const world = { store: () => db, tick: () => { now += 5; return now; }, exitCode: () => 3 };
  const host = worldHost(world);
  const sent = [];
  const realNow = Date.now;
  const before = globalThis.lasmSimWorld;
  try {
    installRemoteWorld(text => { sent.push(text); return host.answer(text).then(r => { Date.now = realNow; return r.replace(/"now":\d+/, `"now":${now}`); }); });
    const w = globalThis.lasmSimWorld;
    assert.equal(w.then, undefined, 'a stand-in is not a thenable');
    const store = await w.store();
    assert.equal(await w.store(), store, 'the same object is the same stand-in');
    await store.run('INSERT INTO t VALUES (?, ?, ?)', [5n, new Uint8Array([0, 255]), null]);
    const [row] = await store.all('SELECT k, v, n FROM t');
    assert.equal(row.k, 5);
    assert.deepEqual([...row.v], [0, 255]);
    assert.equal(row.n, null);
    assert.equal(await w.tick(), 1005);
    assert.equal(Date.now(), 1005, "Date.now is the world's clock after each call");
    db.readFail = 1;
    await assert.rejects(store.all('SELECT 1'), e => e.name === new SimFault('x').name);
    db.heal();
    await assert.rejects(w.missing(), /the world has no method missing/);
    assert.equal(await w.exitCode(), 3);
    assert.equal(host.exitCode, 3);
    assert.deepEqual(JSON.parse(sent[2]).a[1][0], { $: 'b', v: '5' });
  } finally {
    Date.now = realNow;
    globalThis.lasmSimWorld = before;
    db.close();
  }
});

test('compare-runs: a target run must give every seed the result and trace digest of Node', async () => {
  const { mkdtempSync, writeFileSync, rmSync } = await import('node:fs');
  const { join } = await import('node:path');
  const { tmpdir } = await import('node:os');
  const { spawnSync } = await import('node:child_process');
  const dir = mkdtempSync(join(tmpdir(), 'compare-runs-'));
  const script = new URL('../scripts/sim/compare-runs.mjs', import.meta.url).pathname;
  const run = (...a) => spawnSync(process.execPath, [script, ...a.map(f => join(dir, f))], { encoding: 'utf8' });
  try {
    writeFileSync(join(dir, 't.log'), 'x: seeds\n  seed 4: ok (2 writers) [trace 1a, 9 events]\n\n  seed 7: FAILED (1 writer)\n    - lost\n');
    writeFileSync(join(dir, 'same.log'), '  seed 7: FAILED (1 writer)\n  seed 4: ok (2 writers) [trace 1a, 9 events]\n  seed 5: ok (x)\n');
    writeFileSync(join(dir, 'other.log'), '  seed 4: ok (2 writers) [trace 1b, 9 events]\n  seed 7: FAILED (1 writer)\n');
    writeFileSync(join(dir, 'empty.log'), 'nothing\n');
    const seeds = spawnSync(process.execPath, [script, '--seeds', join(dir, 't.log')], { encoding: 'utf8' });
    assert.equal(seeds.stdout.trim(), '4,7');
    assert.equal(run('t.log', 'same.log').status, 0);
    const differs = run('t.log', 'other.log');
    assert.equal(differs.status, 1);
    assert.match(differs.stdout, /seed 4 differs/);
    assert.equal(run('empty.log', 'same.log').status, 1, 'a run with no seeds is a failure');
    assert.match(run('t.log', 'empty.log').stdout, /\(not run\)/);
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
});
