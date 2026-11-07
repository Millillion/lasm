// Deterministic simulation testing (DST) for Lasm's example apps: one harness
// that every app's simulation uses, so that a whole distributed run (clients,
// servers, the network between them, their storage, their clocks) is a pure
// function of one seed. docs/TESTING.md#deterministic-simulation-of-the-example-apps
//
// The pieces:
//   Rng        a seeded PRNG (xoshiro128**, seeded by splitmix32), with
//              independent named streams (`fork`), so that one component
//              drawing more numbers does not change what another draws;
//   Scheduler  simulated time: a priority queue of events by (time, order);
//              nothing in a simulation reads the real clock;
//   Clock      a node's view of the time: the scheduler's time with a skew
//              and a drift (clock-skew faults);
//   Network    messages between named nodes: latency, reordering (independent
//              latencies, or FIFO per channel), drops, duplication,
//              partitions (pairwise, or a node isolated), all from the seed;
//   Kv         a key-value store (localStorage, Workers KV): write failures,
//              and a crash that loses the writes not yet flushed;
//   SqlStore   SQLite in memory (node:sqlite) behind the `Sql` record the
//              apps' servers use (`all`, `run`, `batch`), as SQLite or as D1:
//              failed reads, failed commits, commits whose outcome is unknown
//              (committed, then an error), an outage, and a crash-restart
//              that keeps exactly what was committed;
//   Faults     a fault profile drawn from the seed (swarm testing: each seed
//              gets its own mix and rates, some calm, some stormy);
//   Trace      the last events of a run, and a hash of all of them, to show
//              what led to a failure and to check that a seed replays exactly;
//   SeedLoop   runs seeds (one, a fixed list, a count, or for a time budget),
//              and on a failure prints the seed and a one-line repro command.
//
// No dependencies beyond Node 24 (node:sqlite).

import { DatabaseSync } from 'node:sqlite';

/* ------------------------------------------------------------------ PRNG */

/** splitmix32: spreads a 32-bit seed into well-mixed words. */
function splitmix32(a) {
  return () => {
    a = (a + 0x9e3779b9) | 0;
    let t = a ^ (a >>> 16);
    t = Math.imul(t, 0x21f0aaad);
    t ^= t >>> 15;
    t = Math.imul(t, 0x735a2d97);
    return (t ^ (t >>> 15)) >>> 0;
  };
}

/** FNV-1a over a string, 32 bits. */
export function hash32(s, h = 0x811c9dc5) {
  for (let i = 0; i < s.length; i++) {
    h ^= s.charCodeAt(i);
    h = Math.imul(h, 0x01000193) >>> 0;
  }
  return h >>> 0;
}

const rotl = (x, k) => ((x << k) | (x >>> (32 - k))) >>> 0;

/** A seeded PRNG: xoshiro128**. Every draw is a function of the seed. */
export class Rng {
  constructor(seed, stream = '') {
    if (!Number.isSafeInteger(seed) || seed < 0) throw new Error(`seed must be a non-negative integer, not ${seed}`);
    this.seed = seed;
    this.stream = stream;
    const mix = splitmix32(((seed >>> 0) ^ hash32(stream) ^ Math.floor(seed / 2 ** 32)) >>> 0);
    this.s = [mix(), mix(), mix(), mix()];
    if (this.s.every(x => x === 0)) this.s[0] = 1;
  }
  /** A uniform 32-bit unsigned integer. */
  u32() {
    const s = this.s;
    const result = Math.imul(rotl(Math.imul(s[1], 5) >>> 0, 7), 9) >>> 0;
    const t = (s[1] << 9) >>> 0;
    s[2] ^= s[0]; s[3] ^= s[1]; s[1] ^= s[2]; s[0] ^= s[3];
    s[2] ^= t; s[3] = rotl(s[3], 11);
    return result;
  }
  /** A float in [0, 1). */
  next() { return (this.u32() * 2 ** 21 + (this.u32() >>> 11)) / 2 ** 53; }
  /** An integer in [0, n). */
  int(n) { return n <= 0 ? 0 : Math.floor(this.next() * n); }
  /** An integer in [lo, hi]. */
  range(lo, hi) { return lo + this.int(hi - lo + 1); }
  /** True with probability p. */
  chance(p) { return p > 0 && this.next() < p; }
  pick(xs) { return xs[this.int(xs.length)]; }
  /** A copy of xs in a random order. */
  shuffle(xs) {
    const a = [...xs];
    for (let i = a.length - 1; i > 0; i--) { const j = this.int(i + 1); [a[i], a[j]] = [a[j], a[i]]; }
    return a;
  }
  /** An exponentially distributed delay with this mean (for arrivals). */
  exp(mean) { return -Math.log(1 - this.next()) * mean; }
  /** n random bytes. */
  bytes(n) { const b = new Uint8Array(n); for (let i = 0; i < n; i++) b[i] = this.u32() & 0xff; return b; }
  /** An independent stream, named: draws from it do not shift this one's. */
  fork(name) { return new Rng(this.seed, `${this.stream}/${name}`); }
}

/* ------------------------------------------------------------- Scheduler */

/** Simulated time in milliseconds, and the events due at each time. */
export class Scheduler {
  constructor() { this.now = 0; this.heap = []; this.order = 0; this.cancelled = new Set(); }
  /** Schedules `event` at time `time` (not before now); returns its id. */
  at(time, event) {
    const id = this.order++;
    const item = { time: Math.max(this.now, Math.round(time)), id, event };
    const h = this.heap;
    h.push(item);
    let i = h.length - 1;
    while (i > 0) {
      const p = (i - 1) >> 1;
      if (less(h[p], h[i])) break;
      [h[p], h[i]] = [h[i], h[p]]; i = p;
    }
    return id;
  }
  after(delay, event) { return this.at(this.now + Math.max(0, delay), event); }
  cancel(id) { this.cancelled.add(id); }
  get size() { return this.heap.length; }
  /** Removes and returns the earliest item. */
  pop() {
    const h = this.heap;
    const top = h[0];
    const last = h.pop();
    if (h.length) {
      h[0] = last;
      let i = 0;
      for (;;) {
        const l = 2 * i + 1, r = l + 1;
        let m = i;
        if (l < h.length && less(h[l], h[m])) m = l;
        if (r < h.length && less(h[r], h[m])) m = r;
        if (m === i) break;
        [h[m], h[i]] = [h[i], h[m]]; i = m;
      }
    }
    return top;
  }
  /** The next event (time moves to it), or null when none is left. */
  next() {
    while (this.heap.length) {
      const top = this.pop();
      if (this.cancelled.delete(top.id)) continue;
      this.now = top.time;
      return top;
    }
    return null;
  }
  /** The time of the next event, or Infinity. */
  peekTime() {
    while (this.heap.length && this.cancelled.has(this.heap[0].id)) this.cancelled.delete(this.pop().id);
    return this.heap.length ? this.heap[0].time : Infinity;
  }
}
const less = (a, b) => a.time < b.time || (a.time === b.time && a.id < b.id);

/* ----------------------------------------------------------------- Clock */

/** One node's clock: the simulated time, skewed (ms) and drifting (a rate:
0.001 runs 0.1 % fast). Epoch: `base` (ms since 1970). */
export class Clock {
  constructor(scheduler, { base = Date.UTC(2026, 0, 1), skew = 0, drift = 0 } = {}) {
    this.scheduler = scheduler; this.base = base; this.skew = skew; this.drift = drift;
  }
  /** Milliseconds since the epoch, as this node sees them. */
  now() { const t = this.scheduler.now; return Math.floor(this.base + t + t * this.drift + this.skew); }
  /** Jumps the clock (an NTP step, a VM resumed): positive or negative. */
  jump(ms) { this.skew += ms; }
}

/* --------------------------------------------------------------- Network */

/**
Messages between named nodes. `send` schedules a delivery event
`{ type: 'net', from, to, channel, payload, copy }` on the scheduler; the
app's loop hands that event to `arrive`, which says whether it is delivered
(a partition that began while it was in flight drops it).

Faults (each a probability, or a range in ms):
  latency [lo, hi], spike (probability of a slow message) and spikeMs,
  drop, duplicate, and FIFO per channel (TCP, a WebSocket) or not (separate
  HTTP connections reorder freely).
*/
export class Network {
  constructor({ rng, scheduler, trace, latency = [1, 40], spike = 0, spikeMs = [200, 3000], drop = 0, duplicate = 0 }) {
    this.rng = rng; this.scheduler = scheduler; this.trace = trace;
    this.latency = latency; this.spike = spike; this.spikeMs = spikeMs; this.drop = drop; this.duplicate = duplicate;
    this.cut = new Set();          // "a|b": no messages between a and b
    this.isolated = new Set();     // nodes cut off from everyone
    this.lastAt = new Map();       // FIFO channel -> time of its last delivery
    this.stats = { sent: 0, delivered: 0, dropped: 0, duplicated: 0, partitioned: 0 };
  }
  /** Turns off every fault (the network heals). */
  heal() { this.drop = 0; this.duplicate = 0; this.spike = 0; this.cut.clear(); this.isolated.clear(); }
  partition(a, b) { this.cut.add(key(a, b)); this.trace?.log(`partition ${a} | ${b}`); }
  unpartition(a, b) { this.cut.delete(key(a, b)); this.trace?.log(`unpartition ${a} | ${b}`); }
  isolate(node) { this.isolated.add(node); this.trace?.log(`isolate ${node}`); }
  rejoin(node) { this.isolated.delete(node); this.trace?.log(`rejoin ${node}`); }
  reachable(a, b) { return !this.isolated.has(a) && !this.isolated.has(b) && !this.cut.has(key(a, b)); }
  delay() {
    const [lo, hi] = this.latency;
    let d = this.rng.range(lo, hi);
    if (this.rng.chance(this.spike)) d += this.rng.range(...this.spikeMs);
    return d;
  }
  /** Sends a message; returns how many copies are in flight (0: dropped at once). */
  send(from, to, payload, { channel = null, reliable = false } = {}) {
    this.stats.sent++;
    if (!this.reachable(from, to)) { this.stats.partitioned++; return 0; }
    if (!reliable && this.rng.chance(this.drop)) { this.stats.dropped++; return 0; }
    const copies = !reliable && channel === null && this.rng.chance(this.duplicate) ? 2 : 1;
    if (copies === 2) this.stats.duplicated++;
    for (let copy = 0; copy < copies; copy++) {
      let at = this.scheduler.now + this.delay();
      if (channel !== null) {
        const ch = `${from}>${to}#${channel}`;
        at = Math.max(at, this.lastAt.get(ch) ?? 0);
        this.lastAt.set(ch, at);
      }
      this.scheduler.at(at, { type: 'net', from, to, channel, payload, copy });
    }
    return copies;
  }
  /** Whether a delivery event arrives (the link may have been cut meanwhile). */
  arrive(event) {
    if (!this.reachable(event.from, event.to)) { this.stats.partitioned++; return false; }
    this.stats.delivered++;
    return true;
  }
}
const key = (a, b) => (a < b ? `${a}|${b}` : `${b}|${a}`);

/* ------------------------------------------------------------ Kv storage */

/** A fault raised by a simulated store (so apps and tests can tell it apart). */
export class SimFault extends Error {
  constructor(message) { super(message); this.name = 'SimFault'; }
}

/**
A key-value store. `writeFail`: a write throws a SimFault and changes
nothing (a full quota, a KV outage). `lazy`: writes are durable only after
`flush` (or `flushEvery` writes), so `crash` loses the newer ones.
*/
export class Kv {
  constructor({ rng, writeFail = 0, lazy = false, trace, name = 'kv' } = {}) {
    this.rng = rng; this.writeFail = writeFail; this.lazy = lazy; this.trace = trace; this.name = name;
    this.durable = new Map(); this.data = new Map(); this.stats = { writes: 0, failed: 0, crashes: 0 };
  }
  get(k) { return this.data.has(k) ? this.data.get(k) : null; }
  set(k, v) {
    this.stats.writes++;
    if (this.rng?.chance(this.writeFail)) { this.stats.failed++; this.trace?.log(`${this.name}: write ${k} failed`); throw new SimFault(`${this.name}: write failed`); }
    this.data.set(k, v);
    if (!this.lazy) this.durable.set(k, v);
  }
  delete(k) { this.data.delete(k); if (!this.lazy) this.durable.delete(k); }
  flush() { this.durable = new Map(this.data); }
  /** Loses what was not flushed. */
  crash() { this.stats.crashes++; this.data = new Map(this.durable); this.trace?.log(`${this.name}: crash`); }
  heal() { this.writeFail = 0; }
}

/* ----------------------------------------------------------- SQL storage */

/**
SQLite in memory behind the apps' `Sql` record (`all(sql, params)`,
`run(sql, params)`, `batch([[sql, params], …])`, all synchronous). A batch is
one transaction, as in the apps' node:sqlite binding and in D1.

Faults (probabilities, per call):
  readFail      a query throws;
  writeFail     a `run` or `batch` throws before anything is written;
  ambiguous     a batch commits, then throws (the commit's outcome is unknown
                to the caller: a lost reply from D1, a timeout after COMMIT);
  down          every call throws until `up()` (an outage).
`crash()` is a crash-restart of the server process: the database keeps
exactly what was committed (a batch is atomic, so nothing is half-written).
`profile: 'd1'` sets D1's defaults: more ambiguous commits and transient
read errors than local SQLite.
*/
export class SqlStore {
  constructor({ rng, trace, name = 'sql', profile = 'sqlite', readFail = 0, writeFail = 0, ambiguous = 0 } = {}) {
    this.rng = rng; this.trace = trace; this.name = name; this.profile = profile;
    this.readFail = readFail; this.writeFail = writeFail; this.ambiguous = ambiguous;
    this.isDown = false;
    this.db = new DatabaseSync(':memory:');
    this.cache = new Map();
    this.stats = { reads: 0, writes: 0, readFailed: 0, writeFailed: 0, ambiguous: 0, crashes: 0, commits: 0 };
  }
  prepare(sql) {
    let st = this.cache.get(sql);
    if (!st) { st = this.db.prepare(sql); this.cache.set(sql, st); }
    return st;
  }
  fault(kind, p) {
    if (this.isDown) throw new SimFault(`${this.name}: unavailable`);
    if (this.rng?.chance(p)) {
      this.stats[kind]++;
      this.trace?.log(`${this.name}: ${kind}`);
      throw new SimFault(`${this.name}: ${kind}`);
    }
  }
  all(sql, params = []) {
    this.stats.reads++;
    this.fault('readFailed', this.readFail);
    return this.prepare(sql).all(...params.map(plain));
  }
  run(sql, params = []) {
    this.stats.writes++;
    this.fault('writeFailed', this.writeFail);
    this.prepare(sql).run(...params.map(plain));
  }
  batch(stmts) {
    this.stats.writes++;
    this.fault('writeFailed', this.writeFail);
    this.db.exec('BEGIN IMMEDIATE');
    try {
      for (const [sql, params] of stmts) this.prepare(sql).run(...(params ?? []).map(plain));
      this.db.exec('COMMIT');
    } catch (error) {
      this.db.exec('ROLLBACK');
      throw error;
    }
    this.stats.commits++;
    if (this.rng?.chance(this.ambiguous)) {
      this.stats.ambiguous++;
      this.trace?.log(`${this.name}: committed, then failed (ambiguous)`);
      throw new SimFault(`${this.name}: the commit's outcome is unknown`);
    }
  }
  /** Plain queries for checkers (never faulted). */
  peek(sql, ...params) { return this.prepare(sql).all(...params); }
  down() { this.isDown = true; this.trace?.log(`${this.name}: down`); }
  up() { this.isDown = false; this.trace?.log(`${this.name}: up`); }
  crash() { this.stats.crashes++; this.cache.clear(); this.trace?.log(`${this.name}: crash-restart`); }
  heal() { this.readFail = 0; this.writeFail = 0; this.ambiguous = 0; this.isDown = false; }
  close() { this.db.close(); }
}
// node:sqlite binds numbers, bigints, strings, null and bytes; Lean's `Data`
// arrives as those already.
const plain = v => (v === undefined ? null : typeof v === 'boolean' ? (v ? 1 : 0) : v);

/* ---------------------------------------------------------------- Faults */

/**
A fault profile from the seed. Each seed draws whether each kind of fault is
on and how often (swarm testing), so that over many seeds the simulation
sees calm runs, runs with one kind of fault, and storms. `level`: 'none'
(no faults, for a baseline), 'normal', or 'heavy'.
*/
export function faultProfile(rng, level = 'normal') {
  if (level === 'none') return { drop: 0, duplicate: 0, spike: 0, partitions: 0, crashes: 0, readFail: 0, writeFail: 0, ambiguous: 0, kvFail: 0, skew: 0 };
  const scale = level === 'heavy' ? 3 : 1;
  const on = p => rng.chance(0.6) ? p * scale * (0.25 + rng.next() * 1.5) : 0;
  return {
    drop: on(0.05), duplicate: on(0.05), spike: on(0.05),
    partitions: on(0.4),       // the expected number of partitions per simulated minute, per node
    crashes: on(0.2),          // crash-restarts per simulated minute, per node
    readFail: on(0.01), writeFail: on(0.02), ambiguous: on(0.02), kvFail: on(0.02),
    skew: rng.chance(0.5) ? rng.range(0, 120_000) * scale : 0,   // the largest clock skew, ms
  };
}

/* ----------------------------------------------------------------- Trace */

/** The last `keep` events of a run, and a hash of every event. */
export class Trace {
  constructor({ keep = 200, scheduler = null, echo = false } = {}) {
    this.keep = keep; this.scheduler = scheduler; this.echo = echo; this.lines = []; this.hash = 0x811c9dc5; this.count = 0;
  }
  log(text) {
    const line = `${(this.scheduler?.now ?? 0).toString().padStart(8)} ms  ${text}`;
    this.hash = hash32(line + '\n', this.hash);
    this.count++;
    if (this.echo) console.log(line);
    this.lines.push(line);
    if (this.lines.length > this.keep) this.lines.shift();
  }
  tail(n = 60) { return this.lines.slice(-n); }
  get digest() { return this.hash.toString(16).padStart(8, '0'); }
}

/* -------------------------------------------------------------- SeedLoop */

/** Command-line options shared by every simulation. */
export function options(argv = process.argv.slice(2)) {
  const get = k => { const i = argv.indexOf(k); return i >= 0 ? argv[i + 1] : undefined; };
  const num = (k, d) => { const v = get(k); return v === undefined ? d : Number(v); };
  return {
    seed: get('--seed') === undefined ? undefined : Number(get('--seed')),
    seeds: num('--seeds', undefined),
    first: num('--first', undefined),
    minutes: num('--minutes', undefined),
    level: get('--faults') ?? 'normal',
    verbose: argv.includes('--verbose'),
    determinism: argv.includes('--check-determinism'),
    keepGoing: argv.includes('--keep-going'),
  };
}

/**
Which seeds to run, and what to do with each result. `--seed N` runs one
seed; `--seeds N` runs N seeds (fixed, from `--first`, default 1, for PRs;
random when `--first` is `random`); `--minutes M` runs random seeds for M
minutes (nightly). Stops at the first failure unless `--keep-going`.

`repro(seed)` is the one-line command that replays a seed.
*/
export class SeedLoop {
  constructor({ name, repro, opts = options() }) {
    this.name = name; this.repro = repro; this.opts = opts;
    this.started = Date.now(); this.done = 0; this.failed = [];
    if (opts.seed !== undefined) this.queue = [opts.seed];
    else if (opts.minutes !== undefined) this.queue = null;
    else {
      const n = opts.seeds ?? 10;
      const first = opts.first ?? 1;
      this.queue = Array.from({ length: n }, (_, i) => first + i);
    }
    this.random = new Rng(Number(process.env.SIM_META_SEED ?? (Date.now() % 2 ** 31)));
    console.log(`${name}: ${opts.seed !== undefined ? `seed ${opts.seed}` : opts.minutes !== undefined ? `random seeds for ${opts.minutes} min` : `seeds ${this.queue[0]}..${this.queue.at(-1)}`}, faults ${opts.level}`);
  }
  /** The next seed, or null when the run is over. */
  next() {
    if (this.failed.length && !this.opts.keepGoing) return null;
    if (this.queue) return this.queue.length ? this.queue.shift() : null;
    if (Date.now() - this.started > this.opts.minutes * 60_000) return null;
    return this.random.int(2 ** 31);
  }
  /** Records one seed's result: `failures` (strings), the trace, a summary line. */
  report(seed, { failures = [], trace = null, summary = '' }) {
    this.done++;
    if (failures.length === 0) {
      if (this.opts.verbose || this.opts.seed !== undefined || this.done % 25 === 0 || this.queue) console.log(`  seed ${seed}: ok ${summary}${trace ? ` [trace ${trace.digest}, ${trace.count} events]` : ''}`);
      return;
    }
    this.failed.push(seed);
    console.log(`\n  seed ${seed}: FAILED ${summary}`);
    for (const f of failures.slice(0, 20)) console.log(`    - ${f}`);
    if (failures.length > 20) console.log(`    … ${failures.length - 20} more`);
    if (trace) {
      console.log(`  the last ${Math.min(60, trace.lines.length)} of ${trace.count} events:`);
      for (const line of trace.tail(60)) console.log(`    ${line}`);
    }
    const cmd = this.repro(seed);
    console.log(`\n  repro: ${cmd}\n`);
    if (process.env.GITHUB_ACTIONS === 'true') console.log(`::error title=${this.name} seed ${seed}::${failures[0].replace(/\n/g, ' ')} — repro: ${cmd}`);
  }
  /** Prints the summary; returns the exit code. */
  finish() {
    const secs = ((Date.now() - this.started) / 1000).toFixed(1);
    if (this.failed.length) {
      console.log(`${this.name}: ${this.failed.length} failing seed(s) of ${this.done}: ${this.failed.join(', ')} (${secs} s)`);
      for (const s of this.failed) console.log(`  repro: ${this.repro(s)}`);
      return 1;
    }
    console.log(`${this.name}: ${this.done} seeds, all passed (${secs} s)`);
    return 0;
  }
}

/** Collects invariant violations for one run. */
export class Checks {
  constructor() { this.failures = []; }
  that(ok, message) { if (!ok) this.failures.push(typeof message === 'function' ? message() : message); return ok; }
  fail(message) { this.failures.push(message); }
  get ok() { return this.failures.length === 0; }
}
