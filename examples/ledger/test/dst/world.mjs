// The simulated world of Ledger's deterministic simulation (Sim.lean drives
// it; test/dst.mjs starts it), on scripts/sim: one seed decides the clients,
// the network, the database's faults, the server's crashes and its clock.
//
// One seed is one run, in the manner of Jepsen's bank test:
//   - setup: a funding account and 4 to 10 customers with
//     `debits_must_not_exceed_credits`, each paid its starting balance;
//   - 2 to 6 writers send batches of transfers (single-phase, pending, posts
//     and voids of their pending transfers, linked chains, transfers that must
//     fail with `exceeds_credits`), and resend a batch with the same ids when
//     the answer is lost, as a TigerBeetle client does; readers read every
//     balance of the ledger;
//   - the server is Ledger's own code (Sim.lean). Some seeds serve requests one
//     at a time (the Node server's writers' permit), others let several run
//     at once, each reading before any commits, at its own instance's skewed
//     clock (Workers, several processes); the version check must keep them
//     consistent;
//   - faults drawn from the seed: latency spikes, lost requests and answers,
//     duplicated requests, partitions, server crash-restarts (also right
//     after a commit, before the answer), failed reads and commits, commits
//     whose outcome is unknown, database outages, the clock stepping back
//     and forth;
//   - then everything heals; every writer's last batch must get an answer.
//
// Invariants (each failure names its seed; `--seed N` replays it):
//   - every read, and the database after every commit: posted debits =
//     posted credits, pending debits = pending credits, no customer below
//     zero, and the customers' money (available plus pending) is what was
//     paid in: nothing created or destroyed (Spec.conservation);
//   - the auditor (Audit.verify, Ledger's own code) at checkpoints and at the
//     end: every stored balance is the journal's replay, every ledger
//     balances (Spec.replay_balances);
//   - an acknowledged transfer is durable: an id answered `created` or
//     `exists` is in the journal, with the amount and accounts sent; an id
//     never answered so is not; no two answers both say `created`
//     (a retried transfer is applied once: Spec.retry_exists);
//   - a linked chain is all or nothing (Spec.chain_atomic);
//   - liveness: after the heal every batch is answered, and the final read
//     succeeds.
import { Rng, Scheduler, Clock, Network, SqlStore, Trace, SeedLoop, Checks, HttpSim, faultProfile, options } from '../../../../scripts/sim/index.mjs';

const opts = options(process.argv.slice(2));
const loop = new SeedLoop({
  name: 'ledger dst', opts,
  repro: seed => `cd examples/ledger && npm run build:sim && node test/dst.mjs --seed ${seed}${opts.level !== 'normal' ? ` --faults ${opts.level}` : ''}`,
});
if (opts.determinism && loop.queue) loop.queue = loop.queue.flatMap(s => [s, s]);
const digests = new Map();
const realDateNow = Date.now;
const START = 1000n;
const HEAL = 60_000;
const SUCCESS = new Set(['created', 'exists']);
const SETUP = 999_999_999;   // the request id of the setup's requests

let W = null;

class World {
  constructor(seed) {
    this.seed = seed;
    const rng = this.rng = new Rng(seed);
    this.sched = new Scheduler();
    this.trace = new Trace({ scheduler: this.sched, echo: opts.verbose });
    this.checks = new Checks();
    const p = this.profile = faultProfile(rng.fork('profile'), opts.level);
    this.customers = 4 + rng.int(7);
    this.writers = 2 + rng.int(5);
    this.readers = 1 + rng.int(2);
    this.raceWindow = rng.chance(0.5) ? rng.range(1, 60) : 0;   // ms a request may wait to run alongside others
    this.active = rng.range(20_000, 90_000);
    this.chaos = rng.fork('chaos');
    this.work = rng.fork('work');
    this.net = new Network({ rng: rng.fork('net'), scheduler: this.sched, trace: this.trace, latency: [1, rng.range(5, 80)],
      spike: p.spike, drop: p.drop, duplicate: p.duplicate });
    this.http = new HttpSim({ net: this.net, scheduler: this.sched, rng: rng.fork('http'), trace: this.trace, timeout: [500, 8000] });
    this.store = new SqlStore({ rng: rng.fork('sql'), trace: this.trace, profile: this.raceWindow ? 'd1' : 'sqlite' });
    this.storeFaults = { readFail: p.readFail, writeFail: p.writeFail, ambiguous: p.ambiguous };
    // The server's clock, and one per extra instance (racing requests).
    const skew = () => (p.skew ? this.chaos.range(-p.skew, p.skew) : 0);
    this.clock = new Clock(this.sched, { skew: skew(), drift: p.skew ? (this.chaos.next() - 0.5) * 0.01 : 0 });
    this.instanceClocks = [0, 1, 2, 3].map(() => new Clock(this.sched, { skew: skew() }));
    this.ids = { bank: 1n, customers: Array.from({ length: this.customers }, (_, i) => 10n + BigInt(i)), next: 1000n };
    this.total = START * BigInt(this.customers);
    this.sent = new Map();         // transfer id -> { event, statuses: [], body }
    this.chainsSent = [];          // chains of fresh transfer ids
    this.pendings = [];            // pending transfer ids not yet resolved by a batch
    this.serverQueue = [];
    this.outstanding = new Set();  // writers with a batch not yet answered
    this.events = 0; this.batches = 0; this.reads = 0; this.audits = 0; this.gaveUp = 0;
    this.healed = false;
    this.setup = [
      { method: 'POST', url: '/api/accounts', body: JSON.stringify([{ id: '1', ledger: 1, code: 1 },
        ...this.ids.customers.map(id => ({ id: String(id), ledger: 1, code: 2, flags: { debits_must_not_exceed_credits: true } }))]) },
      { method: 'POST', url: '/api/transfers', body: JSON.stringify(this.ids.customers.map((id, i) => ({
        id: String(100n + BigInt(i)), debit_account_id: '1', credit_account_id: String(id), amount: String(START), ledger: 1, code: 1 }))) },
    ];
    this.trace.log(`seed ${seed}: ${this.customers} customers, ${this.writers} writers, ${this.readers} readers, race window ${this.raceWindow} ms, ` +
      `${this.active} ms; faults ${JSON.stringify(Object.fromEntries(Object.entries(p).map(([k, v]) => [k, +v.toFixed(3)])))}`);
  }

  begin() {
    for (let w = 0; w < this.writers; w++) this.sched.at(this.work.range(0, 500), { type: 'write', w });
    for (let r = 0; r < this.readers; r++) this.sched.at(this.work.range(0, 500), { type: 'read', r });
    const minute = 60_000, p = this.profile;
    if (p.partitions) for (let w = 0; w < this.writers; w++) this.sched.at(this.chaos.exp(minute / p.partitions), { type: 'isolate', node: `writer${w}` });
    if (p.crashes) {
      this.sched.at(this.chaos.exp(minute / p.crashes), { type: 'serverCrash' });
      this.sched.at(this.chaos.exp(2 * minute / p.crashes), { type: 'dbOutage' });
    }
    if (p.skew) this.sched.at(this.chaos.exp(20_000), { type: 'clockJump' });
    this.sched.at(this.rng.range(5000, 15_000), { type: 'audit' });
    this.sched.at(this.active, { type: 'heal' });
    this.sched.at(this.active + HEAL, { type: 'final' });
  }

  next() {
    // The setup runs first, with no faults, straight to the server.
    if (this.setup.length) {
      const req = this.setup.shift();
      this.setupPending = true;
      return { k: 'request', id: SETUP, ...req };
    }
    if (this.storeFaults) { Object.assign(this.store, this.storeFaults); this.storeFaults = null; this.begin(); }
    for (;;) {
      if (this.serverQueue.length && this.serveAt === undefined) {
        // Requests that reached the server: one at a time, or a race.
        const batch = this.serverQueue.splice(0, this.raceWindow ? 4 : 1);
        if (batch.length === 1) return { k: 'request', ...batch[0] };
        const order = this.chaos.shuffle([...batch.keys()]);
        this.trace.log(`race: ${batch.map(r => `#${r.id}`).join(', ')}, commits in order ${order.join(', ')}`);
        return { k: 'race', reqs: batch.map((r, i) => ({ ...r, now: String(BigInt(this.instanceClocks[i].now()) * 1_000_000n) })), order };
      }
      const item = this.sched.next();
      if (!item) return { k: 'end' };
      if (++this.events > 3_000_000) { this.checks.fail('more than 3,000,000 events: the run does not settle'); return { k: 'end' }; }
      const out = this.handle(item.event);
      if (out) return out;
    }
  }

  handle(ev) {
    if (this.http.handleUp(ev)) return null;
    if (this.http.handle(ev)) {
      for (const r of this.http.take()) {
        if (this.raceWindow) {
          this.serverQueue.push(r);
          if (this.serveAt === undefined) { this.serveAt = this.sched.now + this.chaos.int(this.raceWindow); this.sched.at(this.serveAt, { type: 'serve' }); }
        } else this.serverQueue.push(r);
      }
      return null;
    }
    switch (ev.type) {
      case 'serve': this.serveAt = undefined; return null;
      case 'write': return this.write(ev.w), null;
      case 'read': {
        if (this.healed) return null;
        this.http.request(`reader${ev.r}`, { url: '/api/accounts?ledger=1' }, res => {
          if (res.ok && res.status === 200) { this.reads++; this.checkAccounts(JSON.parse(res.body), `read ${this.reads}`); }
          this.sched.after(this.work.range(50, 2000), { type: 'read', r: ev.r });
        });
        return null;
      }
      case 'isolate': {
        if (this.healed) return null;
        this.net.isolate(ev.node);
        this.sched.after(this.chaos.range(500, 20_000), { type: 'rejoin', node: ev.node });
        return null;
      }
      case 'rejoin':
        this.net.rejoin(ev.node);
        if (!this.healed) this.sched.after(this.chaos.exp(60_000 / this.profile.partitions), { type: 'isolate', node: ev.node });
        return null;
      case 'serverCrash':
        if (this.healed) return null;
        this.sched.after(this.chaos.exp(60_000 / this.profile.crashes), { type: 'serverCrash' });
        this.crash();
        return null;
      case 'dbOutage':
        if (this.healed) return null;
        this.store.down();
        this.sched.after(this.chaos.range(200, 8000), { type: 'dbUp' });
        this.sched.after(this.chaos.exp(120_000 / this.profile.crashes), { type: 'dbOutage' });
        return null;
      case 'dbUp': if (!this.healed) this.store.up(); return null;
      case 'clockJump': {
        if (this.healed) return null;
        const jump = this.chaos.range(-this.profile.skew, this.profile.skew);
        this.clock.jump(jump);
        this.trace.log(`the server's clock jumps ${jump} ms`);
        this.sched.after(this.chaos.exp(20_000), { type: 'clockJump' });
        return null;
      }
      case 'audit':
        if (!this.healed) this.sched.after(this.rng.range(10_000, 30_000), { type: 'audit' });
        this.audits++;
        this.quiet();
        return { k: 'audit' };
      case 'heal':
        this.healed = true;
        this.net.heal(); this.store.heal();
        if (!this.http.up) this.http.up = true;
        this.trace.log('everything heals');
        return null;
      case 'final':
        this.sched.after(1, { type: 'finalRead' });
        this.finalAuditPending = true;
        this.quiet();
        return { k: 'audit', final: true };
      case 'finalRead':
        this.http.request('reader0', { url: '/api/accounts?ledger=1' }, res => {
          if (this.checks.that(res.ok && res.status === 200, `the final read failed: ${res.ok ? res.status : 'network error'}`))
            this.checkAccounts(JSON.parse(res.body), 'the final read');
          this.finalRead = true;
          this.sched.after(1, { type: 'end' });
        });
        return null;
      case 'end':
        this.sched = new Scheduler();
        return { k: 'end' };
      default: throw new Error(`unknown event ${ev.type}`);
    }
  }

  /** A writer's next batch. */
  write(w) {
    if (this.healed) return;
    const u = this.work;
    const n = 1 + u.int(5);
    const events = [];
    const fresh = [];
    for (let i = 0; i < n; i++) {
      const roll = u.next();
      if (roll < 0.08 && this.sent.size) {
        // An earlier transfer again, in a new batch (it must answer `exists`, or fail as it did).
        const ids = [...this.sent.keys()];
        events.push(this.sent.get(u.pick(ids)).event);
        continue;
      }
      const id = String(this.ids.next++);
      if (roll < 0.3 && this.pendings.length) {
        const p = this.pendings.splice(u.int(this.pendings.length), 1)[0];
        events.push({ id, pending_id: p, amount: u.chance(0.5) ? '0' : '340282366920938463463374607431768211455',
          flags: u.chance(0.6) ? { post_pending_transfer: true } : { void_pending_transfer: true } });
      } else {
        const dr = u.pick(this.ids.customers), cr = u.pick(this.ids.customers.filter(x => x !== dr));
        const pending = u.chance(0.3);
        events.push({ id, debit_account_id: String(dr), credit_account_id: String(cr),
          amount: String(u.chance(0.1) ? u.range(900, 3000) : u.range(1, 150)), ledger: 1, code: 3, flags: { pending } });
        if (pending) this.pendings.push(id);
      }
      fresh.push(events.length - 1);
    }
    for (let i = 0; i < events.length - 1; i++)
      if (u.chance(0.2) && fresh.includes(i)) events[i] = { ...events[i], flags: { ...events[i].flags, linked: true } };
    // Chains of fresh events, for the all-or-nothing check.
    let chain = [];
    events.forEach((e, i) => {
      chain.push(i);
      if (!e.flags?.linked) {
        if (chain.length > 1 && chain.every(j => fresh.includes(j))) this.chainsSent.push(chain.map(j => events[j].id));
        chain = [];
      }
    });
    for (const i of fresh) this.sent.set(events[i].id, { event: events[i], statuses: [] });
    const body = JSON.stringify(events);
    this.outstanding.add(w);
    this.send(w, events, body, 0);
  }

  send(w, events, body, attempt) {
    this.http.request(`writer${w}`, { method: 'POST', url: '/api/transfers', body }, res => {
      if (res.ok && res.status === 200) {
        const statuses = JSON.parse(res.body).map(r => r.status);
        if (!this.checks.that(statuses.length === events.length, `a batch of ${events.length} got ${statuses.length} results`)) return;
        events.forEach((e, i) => this.sent.get(e.id)?.statuses.push(statuses[i]));
        // A pending transfer the batch did not create can be resolved by nobody.
        events.forEach((e, i) => { if (e.flags?.pending && !SUCCESS.has(statuses[i])) this.pendings = this.pendings.filter(p => p !== e.id); });
        this.batches++;
        this.outstanding.delete(w);
        this.sched.after(this.work.range(1, 1500), { type: 'write', w });
        return;
      }
      // Lost, or the server could not answer (5xx): send the same batch again.
      if (attempt < 8 || this.healed) this.sched.after(this.work.range(50, 2000) * Math.min(attempt + 1, 5), { type: 'resend', w });
      else { this.gaveUp++; this.outstanding.delete(w); this.trace.log(`writer${w} gives up on a batch`); this.sched.after(this.work.range(1, 1500), { type: 'write', w }); }
    });
    this.pendingResend ??= new Map();
    this.pendingResend.set(w, () => this.send(w, events, body, attempt + 1));
  }

  /** The sums of the database, read directly (never faulted). */
  checkStore(when) {
    const rows = this.store.peek('SELECT id, CAST(debits_pending AS TEXT) AS debits_pending, CAST(debits_posted AS TEXT) AS debits_posted, ' +
      'CAST(credits_pending AS TEXT) AS credits_pending, CAST(credits_posted AS TEXT) AS credits_posted FROM accounts WHERE ledger = 1');
    this.checkAccounts(rows, when);
  }

  checkAccounts(accounts, when) {
    let dpo = 0n, cpo = 0n, dp = 0n, cp = 0n, available = 0n, pending = 0n;
    const ours = new Set(this.ids.customers.map(String));
    for (const a of accounts) {
      dpo += BigInt(a.debits_posted); cpo += BigInt(a.credits_posted); dp += BigInt(a.debits_pending); cp += BigInt(a.credits_pending);
      if (!ours.has(String(a.id))) continue;
      const free = BigInt(a.credits_posted) - BigInt(a.debits_posted) - BigInt(a.debits_pending);
      this.checks.that(free >= 0n, `${when}: customer ${a.id} is below zero (${free})`);
      available += free; pending += BigInt(a.debits_pending);
    }
    this.checks.that(dpo === cpo, `${when}: posted debits ${dpo} ≠ posted credits ${cpo}`);
    this.checks.that(dp === cp, `${when}: pending debits ${dp} ≠ pending credits ${cp}`);
    if (this.funded) this.checks.that(available + pending === this.total, `${when}: the customers hold ${available} + ${pending} pending, not ${this.total}`);
  }

  crash() {
    this.http.crash();
    this.store.crash();
    // Racing requests not yet served are lost with the process.
    for (const r of this.serverQueue) this.http.fail(r.id, [1, 50]);
    this.serverQueue = [];
  }

  quiet() { this.savedFaults = { readFail: this.store.readFail, writeFail: this.store.writeFail, ambiguous: this.store.ambiguous, isDown: this.store.isDown }; this.store.heal(); }
  loud() { if (this.savedFaults) { Object.assign(this.store, this.healed ? {} : this.savedFaults); this.savedFaults = null; } }

  /* ---- calls from Sim.lean ---- */

  reply(id, status, body) {
    if (id === SETUP) {
      // The setup.
      const ok = status === 200 && JSON.parse(body).every(r => r.status === 'created');
      if (!ok) this.checks.fail(`the setup failed: ${status} ${body.slice(0, 200)}`);
      if (!this.setup.length) { this.funded = true; this.checkStore('after the setup'); }
      return;
    }
    this.checkStore(`after request #${id}`);
    if (!this.healed && this.chaos.chance(this.profile.crashes / 100)) {
      this.trace.log('the server crashes after handling the request, before answering');
      this.crash();
      return;
    }
    this.http.respond(id, status, body);
  }

  audit(problems, accounts, transfers) {
    this.loud();
    for (const p of problems.slice(0, 5)) this.checks.fail(`the auditor (Audit.verify): ${p}`);
    this.trace.log(`audit: ${accounts} accounts, ${transfers} transfers, ${problems.length} problems`);
    if (this.finalAuditPending) { this.finalAuditPending = false; this.finalChecks(transfers); }
  }

  finalChecks(transferCount) {
    const rows = new Map(this.store.peek('SELECT id, debit_account_id, credit_account_id, CAST(amount AS TEXT) AS amount, pending_id, flags FROM transfers')
      .map(r => [r.id, r]));
    for (const [id, s] of this.sent) {
      const row = rows.get(id);
      const acked = s.statuses.filter(x => SUCCESS.has(x));
      if (row) {
        this.checks.that(s.statuses.every(x => SUCCESS.has(x) || x === 'linked_event_failed'),
          () => `transfer ${id} is in the journal, but was answered ${JSON.stringify(s.statuses)}`);
        this.checks.that(s.statuses.filter(x => x === 'created').length <= 1, () => `transfer ${id} was answered "created" ${s.statuses.filter(x => x === 'created').length} times`);
        const e = s.event;
        if (!e.pending_id) this.checks.that(row.debit_account_id === e.debit_account_id && row.credit_account_id === e.credit_account_id && row.amount === e.amount,
          () => `transfer ${id} is stored as ${row.debit_account_id}→${row.credit_account_id} ${row.amount}, but was sent as ${e.debit_account_id}→${e.credit_account_id} ${e.amount}`);
      } else this.checks.that(acked.length === 0, () => `transfer ${id} was answered ${JSON.stringify(acked)} but is not in the journal (an acknowledged transfer lost)`);
    }
    for (const chain of this.chainsSent) {
      const present = chain.filter(id => rows.has(id)).length;
      this.checks.that(present === 0 || present === chain.length, () => `a linked chain is half applied: ${present} of ${chain.join(', ')}`);
    }
    this.checks.that(this.outstanding.size === 0, () => `${this.outstanding.size} writer(s) still wait for an answer a minute after the heal`);
    this.checks.that(rows.size === transferCount, `the auditor saw ${transferCount} transfers, the database has ${rows.size}`);
  }

  fail(message) { this.checks.fail(message); this.trace.log(`VIOLATION ${message}`); this.context ??= this.trace.tail(120); }

  summary() {
    const n = this.net.stats, d = this.store.stats, h = this.http.stats;
    return `(${this.customers} customers, ${this.writers} writers, race ${this.raceWindow} ms, ${this.batches} batches, ${this.reads} reads, ` +
      `${this.sent.size} transfers, ${this.events} events, ${h.requests} requests/${h.failed} failed/${h.duplicates} dup/${h.crashes} crashes, ` +
      `db ${d.commits} commits/${d.writeFailed + d.readFailed} failed/${d.ambiguous} ambiguous, ${this.audits} audits, ${this.gaveUp} given up)`;
  }
}

// Resends go through the scheduler so that they are ordered with everything else.
const baseHandle = World.prototype.handle;
World.prototype.handle = function (ev) {
  if (ev.type === 'resend') { const f = this.pendingResend.get(ev.w); this.pendingResend.delete(ev.w); f?.(); return null; }
  return baseHandle.call(this, ev);
};

function finishSeed() {
  if (!W) return;
  Date.now = realDateNow;
  if (!W.finalRead) W.checks.fail('the run ended before the final read');
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

export function begin() {
  finishSeed();
  const seed = loop.next();
  if (seed === null) return null;
  W = new World(seed);
  const clock = W.clock;
  Date.now = () => clock.now();   // Ledger's server reads the time here (nowNs)
  return { seed };
}
export const store = () => W.store;
export const next = () => W.next();
export const reply = (...a) => W.reply(...a);
export const audit = (...a) => W.audit(...a);
export const fail = m => W.fail(m);
export const exitCode = () => { finishSeed(); return loop.finish(); };
