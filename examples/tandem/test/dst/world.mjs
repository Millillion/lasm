// The simulated world of Tandem's deterministic simulation (Sim.lean drives
// it; test/dst.mjs starts it): browsers, the network, the server's database
// and the users, all decided by one seed with scripts/sim, the harness every
// example app's simulation uses.
//
// One seed is one run:
//   - 2 to 5 browser tabs on one document, each running the editor's real
//     state machine (Tandem.Ui.update) in Sim.lean; users type, delete and
//     paste at random, in bursts;
//   - the server's real HTTP handler (Tandem.Server.handler) on a simulated
//     SQLite database, with WebSocket pushes or, in some seeds, no
//     WebSockets at all (as on Workers), so the editors long-poll;
//   - faults, a mix drawn from the seed: latency spikes, dropped requests and
//     responses (the server may have committed), broken sockets, tabs cut
//     off and back online, page reloads (state from localStorage, whose
//     writes can fail), server crash-restarts (also right after a commit,
//     before the reply), failed reads and commits, commits whose outcome is
//     unknown, database outages;
//   - then the network heals, every fault stops, users stop typing, and a
//     minute later every tab must hold the server's document.
//
// Invariants (each failure names the seed; `--seed N` replays it):
//   - acknowledged edits are never lost: whenever a tab stops treating an
//     operation as pending, the server's log has it (Spec.ack_stored, for the
//     whole browser state machine), and the log only grows (append-only, each
//     operation once: Spec.acked_never_lost, Spec.log_no_duplicates);
//   - an edit yields the typed text (Spec.edit_yields_text, checked in Lean);
//   - the CRDT laws on the real log, at checkpoints: any order, with
//     duplicates, one at a time or in bulk, gives the same document
//     (Spec.converge, ops_commute, ops_idempotent, apply_many), no character
//     twice (Spec.no_duplicates);
//   - convergence after the network heals: every tab is ready, online, has
//     nothing pending, its replica's state equals the server's document, its
//     cursor is the log's length, and its text area shows its replica.
import { Rng, Scheduler, Network, Kv, SqlStore, Trace, SeedLoop, Checks, faultProfile, options, hash32 } from '../../../../scripts/sim/index.mjs';

const opts = options(process.argv.slice(2));
const reproArgs = opts.level !== 'normal' ? ` --faults ${opts.level}` : '';
const loop = new SeedLoop({
  name: 'tandem dst', opts,
  repro: seed => `cd examples/tandem && npm run build:sim && node test/dst.mjs --seed ${seed}${reproArgs}`,
});
const digests = new Map();
if (opts.determinism && loop.queue) loop.queue = loop.queue.flatMap(s => [s, s]);

const ALPHABET = 'abcdefghij      \n\n.,é中🙂'.match(/./gsu);
const SERVER = 'server';
const ACTIVE = [30_000, 150_000];   // how long users type (ms)
const HEAL = 90_000;                // after the heal, before the final check
const DUP = 1_000_000_000;          // request ids of duplicated requests (the original's + DUP)

let W = null;

class World {
  constructor(seed) {
    this.seed = seed;
    const rng = this.rng = new Rng(seed);
    this.sched = new Scheduler();
    this.trace = new Trace({ scheduler: this.sched, echo: opts.verbose });
    this.checks = new Checks();
    const p = this.profile = faultProfile(rng.fork('profile'), opts.level);
    this.doc = `sim-${seed}`;
    this.n = 2 + rng.int(4);
    this.transport = rng.chance(0.3) ? 'poll' : 'ws';
    this.active = rng.range(...ACTIVE);
    this.net = new Network({ rng: rng.fork('net'), scheduler: this.sched, trace: this.trace, latency: [1, rng.range(5, 120)],
      spike: p.spike, drop: p.drop, duplicate: p.duplicate });
    // The database's faults start with the first event (the tables are made first).
    this.store = new SqlStore({ rng: rng.fork('sql'), trace: this.trace, profile: this.transport === 'poll' ? 'd1' : 'sqlite' });
    this.storeFaults = { readFail: p.readFail, writeFail: p.writeFail, ambiguous: p.ambiguous };
    this.user = rng.fork('user');
    this.chaos = rng.fork('chaos');
    this.randomBytes = rng.fork('random');
    this.healed = false;
    this.serverUp = true;
    this.epoch = 0;                  // the server process: bumped by a crash
    this.requests = new Map();       // id -> request in flight
    this.nextId = 0;
    this.polls = new Map();          // id -> parked long-poll { cursor, timer }
    this.log = [];                   // the server's log as last seen
    this.ackedOps = new Set();          // every operation a tab treated as acknowledged
    this.events = 0;
    this.lawChecks = 0;
    this.clients = new Map();
    for (let c = 1; c <= this.n; c++) {
      this.clients.set(c, { c, gen: 0, alive: false, online: true, ws: null, kv: new Kv({ rng: rng.fork(`kv${c}`), writeFail: p.kvFail, name: `tab${c} localStorage` }) });
      this.sched.at(rng.int(2000), { type: 'start', c });
      this.sched.at(1000 + this.user.exp(5000), { type: 'edit', c });
    }
    const minute = 60_000;
    if (p.partitions) for (let c = 1; c <= this.n; c++) this.sched.at(this.chaos.exp(minute / p.partitions), { type: 'isolate', c });
    if (p.crashes) {
      for (let c = 1; c <= this.n; c++) this.sched.at(this.chaos.exp(minute / p.crashes), { type: 'reload', c });
      this.sched.at(this.chaos.exp(minute / p.crashes), { type: 'serverCrash' });
      this.sched.at(this.chaos.exp(2 * minute / p.crashes), { type: 'dbOutage' });
    }
    this.sched.at(this.rng.range(5000, 20_000), { type: 'laws' });
    this.sched.at(this.active, { type: 'heal' });
    this.sched.at(this.active + HEAL, { type: 'check' });
    this.trace.log(`seed ${seed}: ${this.n} tabs, ${this.transport}, ${this.active} ms of typing; faults ${JSON.stringify(roundAll(p))}`);
  }

  tab(c) { return `tab${c}`; }
  live(c, gen) { const cl = this.clients.get(c); return cl && cl.alive && cl.gen === gen; }

  /** The next event for Sim.lean. */
  next() {
    if (this.storeFaults) { Object.assign(this.store, this.storeFaults); this.storeFaults = null; }
    for (;;) {
      const item = this.sched.next();
      if (!item) return { k: 'end' };
      if (++this.events > 2_000_000) { this.checks.fail('more than 2,000,000 events: the run does not settle'); return { k: 'end' }; }
      const out = this.handle(item.event);
      if (out) return out;
    }
  }

  handle(ev) {
    const rng = this.chaos;
    switch (ev.type) {
      case 'start': {
        const cl = this.clients.get(ev.c);
        cl.gen++; cl.alive = true; cl.ws = null;
        this.trace.log(`tab${ev.c} loads the page (load ${cl.gen})`);
        return { k: 'start', c: ev.c, gen: cl.gen };
      }
      case 'edit': {
        if (this.healed) return null;
        const cl = this.clients.get(ev.c);
        // Bursts of typing, then pauses.
        this.sched.after(this.user.chance(0.8) ? this.user.range(30, 400) : this.user.exp(6000), { type: 'edit', c: ev.c });
        if (!cl.alive) return null;
        const u = this.user;
        const kind = u.int(10);
        const ins = kind < 6 ? pickText(u, 1 + u.int(3)) : kind < 8 ? '' : pickText(u, 1 + u.int(40));
        const del = kind < 6 ? (u.chance(0.1) ? 1 : 0) : kind < 8 ? 1 + u.int(8) : u.int(4);
        this.trace.log(`tab${ev.c} types: delete ${del}, insert ${[...ins].length}`);
        return { k: 'input', c: ev.c, gen: cl.gen, pos: u.next(), del, ins };
      }
      case 'timer':
        return this.live(ev.c, ev.gen) ? { k: 'timer', c: ev.c, gen: ev.gen, token: ev.token } : null;
      case 'respond': {
        // A response (or a network error) reaches a tab.
        const req = this.requests.get(ev.id);
        if (!req || req.done) return null;
        req.done = true; this.requests.delete(ev.id);
        if (!this.live(req.c, req.gen)) return null;
        if (ev.ok && req.epoch !== this.epoch) ev = { ok: false };   // the server crashed meanwhile: connection reset
        this.trace.log(`tab${req.c} ← ${req.method} ${shortUrl(req.url)} (request ${req.id}): ${ev.ok ? `${ev.status} ${(ev.body ?? '').split('\n')[1] ?? ''}` : 'network error'}`);
        return { k: 'http', c: req.c, gen: req.gen, token: req.token, ok: ev.ok, status: ev.status ?? 0, body: ev.body ?? '' };
      }
      case 'net': {
        if (!this.net.arrive(ev)) {
          if (ev.payload.kind === 'push') this.closeSocket(ev.to === SERVER ? null : Number(ev.to.slice(3)), ev.payload.socket);
          else if (ev.payload.kind === 'req' || ev.payload.kind === 'res') this.failLater(ev.payload.id);
          return null;
        }
        return this.arrive(ev);
      }
      case 'wsResult': {
        const cl = this.clients.get(ev.c);
        if (!this.live(ev.c, ev.gen) || !cl.ws || cl.ws.id !== ev.socket) return null;
        if (ev.open && this.serverUp && cl.online && this.net.reachable(this.tab(ev.c), SERVER) && this.transport === 'ws') {
          cl.ws.open = true; cl.ws.epoch = this.epoch;
          this.trace.log(`tab${ev.c}: socket ${ev.socket} open`);
          return { k: 'wsOpen', c: ev.c, gen: ev.gen };
        }
        cl.ws = null;
        this.trace.log(`tab${ev.c}: socket ${ev.socket} refused`);
        return { k: 'wsClosed', c: ev.c, gen: ev.gen, opened: false };
      }
      case 'wsClose': {
        const cl = this.clients.get(ev.c);
        if (!this.live(ev.c, ev.gen) || !cl.ws || cl.ws.id !== ev.socket) return null;
        cl.ws = null;
        this.trace.log(`tab${ev.c}: socket ${ev.socket} closed`);
        return { k: 'wsClosed', c: ev.c, gen: ev.gen, opened: true };
      }
      case 'pollTimeout': {
        const poll = this.polls.get(ev.id);
        if (!poll) return null;
        this.polls.delete(ev.id);
        return this.toServer(poll.req);
      }
      case 'isolate': {
        if (this.healed) return null;
        const cl = this.clients.get(ev.c);
        cl.online = false;
        this.net.isolate(this.tab(ev.c));
        if (cl.ws) this.sched.after(rng.range(0, 5000), { type: 'wsClose', c: ev.c, gen: cl.gen, socket: cl.ws.id });
        this.sched.after(rng.range(500, 30_000), { type: 'rejoin', c: ev.c });
        return null;
      }
      case 'rejoin': {
        const cl = this.clients.get(ev.c);
        this.net.rejoin(this.tab(ev.c));
        cl.online = true;
        if (!this.healed) this.sched.after(this.chaos.exp(60_000 / this.profile.partitions), { type: 'isolate', c: ev.c });
        // The browser's `online` event.
        return cl.alive ? { k: 'online', c: ev.c, gen: cl.gen } : null;
      }
      case 'reload': {
        if (this.healed) return null;
        const cl = this.clients.get(ev.c);
        this.sched.after(this.chaos.exp(60_000 / this.profile.crashes), { type: 'reload', c: ev.c });
        if (!cl.alive) return null;
        cl.alive = false; cl.ws = null;
        this.trace.log(`tab${ev.c} reloads (or crashes): unsaved state is gone`);
        this.sched.after(rng.range(50, 3000), { type: 'start', c: ev.c });
        return { k: 'crash', c: ev.c };
      }
      case 'serverCrash': {
        if (this.healed) return null;
        this.sched.after(this.chaos.exp(60_000 / this.profile.crashes), { type: 'serverCrash' });
        this.crashServer();
        return null;
      }
      case 'serverUp':
        this.serverUp = true;
        this.trace.log('server up');
        return null;
      case 'dbOutage': {
        if (this.healed) return null;
        this.store.down();
        this.sched.after(rng.range(200, 8000), { type: 'dbUp' });
        this.sched.after(this.chaos.exp(120_000 / this.profile.crashes), { type: 'dbOutage' });
        return null;
      }
      case 'dbUp':
        if (!this.healed) this.store.up();
        return null;
      case 'laws': {
        if (!this.healed) this.sched.after(this.rng.range(10_000, 40_000), { type: 'laws' });
        const n = this.store.peek('SELECT COUNT(*) AS n FROM ops WHERE doc = ?', this.doc)[0].n;
        const order = this.rng.shuffle([...Array(n).keys()]);
        for (let i = 0, d = this.rng.int(Math.min(n, 50)); i < d; i++) order.splice(this.rng.int(order.length + 1), 0, this.rng.int(n));
        this.lawChecks++;
        return { k: 'laws', order };
      }
      case 'heal': {
        this.healed = true;
        this.net.heal(); this.store.heal(); for (const cl of this.clients.values()) cl.kv.heal();
        this.trace.log('the network heals; every fault stops; users stop typing');
        if (!this.serverUp) { this.serverUp = true; this.trace.log('server up'); }
        for (const cl of this.clients.values()) {
          if (!cl.alive) this.sched.after(rng.range(0, 1000), { type: 'start', c: cl.c });
          if (!cl.online) this.sched.after(0, { type: 'rejoin', c: cl.c });
        }
        this.sched.after(HEAL / 2, { type: 'laws' });
        return null;
      }
      case 'check':
        this.trace.log('final check');
        this.sched.after(1, { type: 'end' });
        return { k: 'check' };
      case 'end':
        // Drop what remains (timers, polls): the run is over.
        this.sched = new Scheduler();
        return { k: 'end' };
      default:
        throw new Error(`unknown event ${ev.type}`);
    }
  }

  /** A message arrives (its link is up). */
  arrive(ev) {
    const m = ev.payload;
    if (m.kind === 'req') {
      const req = this.requests.get(m.id);
      if (!req) return null;
      if (!this.serverUp) { this.failSoon(m.id); return null; }
      if (ev.copy) this.trace.log(`server ← duplicate of request ${m.id}`);
      req.epoch = this.epoch;
      req.atServer = true;
      const poll = /^\/doc\/[^/]+\/poll\?cursor=(\d+)$/.exec(req.url);
      if (poll && !ev.copy) {
        const cursor = Number(poll[1]);
        if (this.count() > cursor) return this.toServer(req);
        // The server holds the poll until the log grows, or for 20 s.
        const timer = this.sched.after(20_000, { type: 'pollTimeout', id: m.id });
        this.polls.set(m.id, { req, cursor, timer });
        return null;
      }
      if (poll) return null;
      return this.toServer(req, ev.copy);
    }
    if (m.kind === 'res') {
      this.sched.after(0, { type: 'respond', id: m.id, ok: true, status: m.status, body: m.body });
      return null;
    }
    if (m.kind === 'push') {
      const c = Number(ev.to.slice(3));
      const cl = this.clients.get(c);
      if (!cl.ws || cl.ws.id !== m.socket || !cl.ws.open || !this.live(c, cl.gen)) return null;
      if (cl.ws.epoch !== this.epoch) return null;
      this.trace.log(`tab${c} ← push ${m.text.split('\n')[1]}`);
      return { k: 'push', c, gen: cl.gen, text: m.text };
    }
    return null;
  }

  toServer(req, duplicate = false) {
    this.trace.log(`server ← ${req.method} ${shortUrl(req.url)} (request ${req.id}${duplicate ? ', duplicate' : ''})`);
    return { k: 'request', id: duplicate ? DUP + req.id : req.id, method: req.method, url: req.url, body: req.body };
  }

  count() { return this.store.peek('SELECT COUNT(*) AS n FROM ops WHERE doc = ?', this.doc)[0].n; }

  /** A request or its response was lost: the tab sees an error, after a while. */
  failLater(id) { this.sched.after(this.chaos.range(1000, 15_000), { type: 'respond', id, ok: false }); }
  failSoon(id) { this.sched.after(this.chaos.range(1, 50), { type: 'respond', id, ok: false }); }

  closeSocket(c, socket) {
    if (c === null) return;
    const cl = this.clients.get(c);
    if (cl.ws && cl.ws.id === socket) this.sched.after(this.chaos.range(0, 2000), { type: 'wsClose', c, gen: cl.gen, socket });
  }

  crashServer() {
    this.epoch++;
    this.serverUp = false;
    this.store.crash();
    this.trace.log(`the server crashes (epoch ${this.epoch})`);
    for (const poll of this.polls.values()) this.sched.cancel(poll.timer);
    this.polls.clear();
    // Every request the server held (parked polls, the one being handled) gets a connection reset.
    for (const req of this.requests.values()) if (req.atServer) { req.atServer = false; this.failSoon(req.id); }
    for (const cl of this.clients.values()) if (cl.ws) this.sched.after(this.chaos.range(0, 500), { type: 'wsClose', c: cl.c, gen: cl.gen, socket: cl.ws.id });
    this.sched.after(this.chaos.range(200, 5000), { type: 'serverUp' });
  }

  /** The server's log, checked against what was seen before: it only grows. */
  checkLog() {
    const rows = this.store.peek('SELECT seq, op FROM ops WHERE doc = ? ORDER BY seq', this.doc);
    const ops = rows.map(r => r.op);
    rows.forEach((r, i) => this.checks.that(r.seq === i, () => `the log has position ${r.seq} at index ${i}`));
    for (let i = 0; i < this.log.length; i++)
      if (ops[i] !== this.log[i]) { this.checks.fail(`the log changed at position ${i}: ${JSON.stringify(this.log[i])} became ${JSON.stringify(ops[i])} (Spec.acked_never_lost)`); break; }
    this.checks.that(new Set(ops).size === ops.length, 'the log holds an operation twice (Spec.log_no_duplicates)');
    this.log = ops;
  }

  /* ---- calls from Sim.lean ---- */

  http(c, gen, token, method, url, body) {
    const id = this.nextId++;
    const req = { id, c, gen, token, method, url, body, epoch: this.epoch, done: false };
    this.requests.set(id, req);
    const cl = this.clients.get(c);
    this.trace.log(`tab${c} → ${method} ${shortUrl(url)} (request ${id}${body ? `, ${body.split('\n').length - 2} ops` : ''})`);
    if (!cl.online) { this.failSoon(id); return; }
    if (this.net.send(this.tab(c), SERVER, { kind: 'req', id }) === 0) this.failLater(id);
  }

  reply(id, status, body, pushes) {
    const duplicate = id >= DUP;
    const req = this.requests.get(duplicate ? id - DUP : id);
    const n = this.count();
    const before = this.log.length;
    if (n !== before) {
      this.checkLog();
      // What a request appended is pushed to every open socket: an idle tab
      // hears of it only so (Server/App.lean's handleSync).
      const pushed = pushes.map(t => /^tandem 1\nops (\d+) (\d+)/.exec(t)).filter(Boolean).map(m => [Number(m[1]), Number(m[2])]);
      this.checks.that(pushed.some(([a, b]) => a <= before && b >= n),
        () => `the server appended operations ${before}..${n} without pushing them (pushes: ${JSON.stringify(pushed)}); a tab that is not typing never hears of them`);
    }
    // Long-polls waiting for the log to grow.
    for (const [pid, poll] of this.polls) if (n > poll.cursor && !poll.released) {
      poll.released = true; this.sched.cancel(poll.timer);
      this.sched.after(0, { type: 'pollTimeout', id: pid });
    }
    // A crash right after the commit, before the reply and the pushes.
    if (!this.healed && this.chaos.chance(this.profile.crashes / 200)) { this.trace.log('the server crashes after handling the request'); this.crashServer(); return; }
    for (const text of pushes) for (const cl of this.clients.values()) {
      if (!cl.ws || !cl.ws.open || cl.ws.epoch !== this.epoch) continue;
      if (this.net.send(SERVER, this.tab(cl.c), { kind: 'push', text, socket: cl.ws.id }, { channel: `ws${cl.ws.id}` }) === 0)
        this.closeSocket(cl.c, cl.ws.id);
    }
    if (duplicate || !req) return;
    req.atServer = false;
    if (this.net.send(SERVER, this.tab(req.c), { kind: 'res', id: req.id, status, body }) === 0) this.failLater(req.id);
  }

  timer(c, gen, token, ms) { this.sched.after(ms, { type: 'timer', c, gen, token }); }

  wsConnect(c, gen) {
    const cl = this.clients.get(c);
    if (!this.live(c, gen)) return;
    const socket = (this.sockets = (this.sockets ?? 0) + 1);
    cl.ws = { id: socket, open: false, epoch: this.epoch };
    const ok = this.transport === 'ws' && cl.online && this.serverUp && this.net.reachable(this.tab(c), SERVER);
    this.sched.after(this.net.delay() * 2, { type: 'wsResult', c, gen, socket, open: ok });
  }

  kvGet(c, key) { return this.clients.get(c).kv.get(key); }
  kvSet(c, key, value) { try { this.clients.get(c).kv.set(key, value); } catch { /* the browser runtime logs it */ } }
  kvRemove(c, key) { this.clients.get(c).kv.delete(key); }
  random(c, n) { return this.randomBytes.bytes(n); }
  now() { return Date.UTC(2026, 0, 1) + this.sched.now; }

  acked(c, ops) {
    const missing = ops.filter(op => this.store.peek('SELECT 1 AS x FROM ops WHERE doc = ? AND op = ?', this.doc, op).length === 0);
    for (const op of ops) this.ackedOps.add(op);
    this.trace.log(`tab${c}: ${ops.length} operation(s) leave pending`);
    if (missing.length) {
      this.checks.fail(`tab${c} stopped treating ${missing.length} operation(s) as pending that the server does not have, ` +
        `so they are never sent (an acknowledged edit lost; Spec.ack_stored): ${missing.slice(0, 3).map(o => JSON.stringify(o)).join(', ')}`);
      this.trace.log(`VIOLATION tab${c} dropped unacknowledged ${missing.join(' | ')}`);
      this.context ??= this.trace.tail(120);
    }
  }

  laws(r) {
    for (const k of ['converge', 'applyMany', 'text', 'noDuplicates'])
      this.checks.that(r[k], `CRDT law ${k} failed on the server's log of ${r.ops} operations (the compiled Lean disagrees with Proofs/Spec.lean)`);
  }

  fail(message) { this.checks.fail(message); this.trace.log(`VIOLATION ${message}`); this.context ??= this.trace.tail(120); }

  report(r) {
    this.checkLog();
    const missing = [...this.ackedOps].filter(op => !this.log.includes(op));
    this.checks.that(missing.length === 0, () => `${missing.length} acknowledged operation(s) are not in the final log`);
    this.final = r;
    for (const cl of r.clients) {
      const t = `tab${cl.c}`;
      if (!this.checks.that(cl.ready, `${t} never finished loading`)) continue;
      this.checks.that(!cl.offline, `${t} still shows "offline" a minute and a half after the network healed`);
      this.checks.that(cl.pending === 0, `${t} still has ${cl.pending} pending operation(s) after the network healed`);
      this.checks.that(cl.same, () => `${t} did not converge: it shows ${JSON.stringify([...cl.text].slice(0, 60).join(''))} (${[...cl.text].length} characters), the server ${JSON.stringify([...r.server].slice(0, 60).join(''))} (${[...r.server].length})`);
      this.checks.that(cl.cursor === r.ops, `${t}'s cursor is ${cl.cursor}, the log has ${r.ops} operations`);
      this.checks.that(cl.shown, `${t}'s text area does not show its replica's text`);
    }
    this.checks.that(r.clients.length === this.n, `${r.clients.length} tabs at the end, not ${this.n}`);
  }

  summary() {
    const s = this.net.stats, d = this.store.stats;
    return `(${this.n} tabs, ${this.transport}, ${this.final?.ops ?? '?'} ops, ${[...(this.final?.server ?? '')].length} chars, ` +
      `${this.events} events, ${s.sent} msgs/${s.dropped} dropped/${s.duplicated} dup, db ${d.commits} commits/${d.writeFailed + d.readFailed} failed/${d.ambiguous} ambiguous/${d.crashes} crashes, ${this.lawChecks} law checks)`;
  }
}

function pickText(rng, n) { let s = ''; for (let i = 0; i < n; i++) s += rng.pick(ALPHABET); return s; }
function shortUrl(u) { return u.replace(/^\/doc\/[^/]+/, '/doc/…'); }
function roundAll(p) { return Object.fromEntries(Object.entries(p).map(([k, v]) => [k, +v.toFixed(3)])); }

function finishSeed() {
  if (!W) return;
  if (!W.final) W.checks.fail('the run ended before the final check');
  let failures = W.checks.failures;
  if (opts.determinism) {
    const prev = digests.get(W.seed);
    if (prev === undefined) digests.set(W.seed, W.trace.digest);
    else if (prev !== W.trace.digest) failures = [...failures, `seed ${W.seed} did not replay: trace ${prev} then ${W.trace.digest}`];
  }
  loop.report(W.seed, { failures, trace: W.trace, summary: W.summary(), context: W.context });
  W.store.close();
  W = null;
}

/* ---- the module's interface, called by Sim.lean ---- */

export function begin() {
  finishSeed();
  const seed = loop.next();
  if (seed === null) return null;
  W = new World(seed);
  return { doc: W.doc, seed };
}
export const store = () => W.store;
export const next = () => W.next();
export const http = (...a) => W.http(...a);
export const reply = (...a) => W.reply(...a);
export const timer = (...a) => W.timer(...a);
export const wsConnect = (...a) => W.wsConnect(...a);
export const kvGet = (...a) => W.kvGet(...a);
export const kvSet = (...a) => W.kvSet(...a);
export const kvRemove = (...a) => W.kvRemove(...a);
export const random = (...a) => W.random(...a);
export const now = () => W.now();
export const acked = (...a) => W.acked(...a);
export const laws = r => W.laws(r);
export const fail = m => W.fail(m);
export const report = r => W.report(r);
export const exitCode = () => loop.finish();
export { hash32 };
