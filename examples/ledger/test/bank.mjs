// A bank workload in the manner of Jepsen's bank test: concurrent clients
// move money between accounts while others read every balance, and every
// read must see the same total.
//
//   node test/bank.mjs [--seed N] [--seconds N] [--writers N] [--readers N] [--url URL] [--command CMD]
//
// Setup: ledger 1 has a funding account and N customer accounts with
// `debits_must_not_exceed_credits`; the funding account pays each customer
// its starting balance. Then writers send random batches (single-phase
// transfers, pending transfers and their posts and voids, linked chains,
// retries of earlier requests, and transfers that must fail with
// `exceeds_credits`) while readers read all accounts at once
// (GET /api/accounts?ledger=1). Every read must show:
//   - the customers' total available balance (credits posted − debits posted −
//     debits pending) plus everything pending equals the money paid in;
//   - posted debits = posted credits and pending debits = pending credits;
//   - no customer below zero.
// At the end, the exported journal (GET /api/journal) replayed from zero must
// give every stored balance. The seed is printed first; `--seed N` replays the
// same requests (their interleaving depends on timing).
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { api, rng, root, seedFrom, startLedger } from './server.mjs';

const args = process.argv.slice(2);
const option = (name, d) => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : d; };
const seed = seedFrom(args);
const seconds = Number(option('--seconds', '20'));
const writers = Number(option('--writers', '8'));
const readers = Number(option('--readers', '4'));
const customers = Number(option('--accounts', '10'));
const startBalance = 1000n;
console.log(`seed ${seed} (replay: node test/bank.mjs --seed ${seed})`);

const ledger = await startLedger({ url: option('--url'), command: option('--command'), platform: option('--platform') });
const base = ledger.base;
const failures = [];
const stats = { reads: 0, batches: 0, events: 0, busy: 0, statuses: {} };
const fail = msg => { if (failures.length < 20) failures.push(msg); };

try {
  // Ids from the seed, so several runs can share a server without colliding.
  const prefix = BigInt(seed) * 1_000_000n;
  const bank = prefix + 1n;
  const ids = Array.from({ length: customers }, (_, i) => prefix + 10n + BigInt(i));
  const setup = await api(base, 'POST', '/accounts', [
    { id: String(bank), ledger: 1, code: 1 },
    ...ids.map(id => ({ id: String(id), ledger: 1, code: 2, flags: { debits_must_not_exceed_credits: true } }))]);
  if (setup.status !== 200 || setup.body.some(r => r.status !== 'created')) throw new Error(`setup: ${setup.text}`);
  const fund = await api(base, 'POST', '/transfers', ids.map((id, i) => ({
    id: String(prefix + 100_000n + BigInt(i)), debit_account_id: String(bank), credit_account_id: String(id),
    amount: String(startBalance), ledger: 1, code: 1 })));
  if (fund.body.some(r => r.status !== 'created')) throw new Error(`funding: ${fund.text}`);
  const total = startBalance * BigInt(customers);
  const ours = new Set(ids.map(String));

  const big = x => BigInt(x);
  /** Checks one snapshot of every account of ledger 1. */
  function check(accounts, when) {
    let dpo = 0n, cpo = 0n, dp = 0n, cp = 0n, available = 0n, pending = 0n;
    for (const a of accounts) {
      dpo += big(a.debits_posted); cpo += big(a.credits_posted); dp += big(a.debits_pending); cp += big(a.credits_pending);
      if (!ours.has(a.id)) continue;
      const free = big(a.credits_posted) - big(a.debits_posted) - big(a.debits_pending);
      if (free < 0n) fail(`${when}: account ${a.id} is below zero (${free})`);
      available += free;
      pending += big(a.debits_pending);
    }
    if (dpo !== cpo) fail(`${when}: posted debits ${dpo} ≠ posted credits ${cpo}`);
    if (dp !== cp) fail(`${when}: pending debits ${dp} ≠ pending credits ${cp}`);
    // Money pending between customers is still the customers'; money pending
    // to the bank account does not exist in this workload.
    if (available + pending !== total) fail(`${when}: customers hold ${available} + ${pending} pending, not ${total}`);
  }

  const deadline = Date.now() + seconds * 1000;
  const sent = [];
  const pendings = [];
  let next = prefix + 200_000n;

  async function writer(w) {
    const R = rng(seed + 1 + w);
    while (Date.now() < deadline) {
      const n = R.int(1, 5);
      const events = [];
      for (let i = 0; i < n; i++) {
        const roll = R.next();
        if (roll < 0.1 && sent.length) { events.push(R.pick(sent)); continue; }
        if (roll < 0.3 && pendings.length) {
          const p = pendings.splice(R.int(0, pendings.length - 1), 1)[0];
          events.push({ id: String(next++), pending_id: p, amount: R.chance(0.5) ? '0' : '340282366920938463463374607431768211455',
            flags: R.chance(0.6) ? { post_pending_transfer: true } : { void_pending_transfer: true } });
          continue;
        }
        const dr = R.pick(ids), cr = R.pick(ids.filter(x => x !== dr));
        const pending = R.chance(0.3);
        const e = { id: String(next++), debit_account_id: String(dr), credit_account_id: String(cr),
          amount: String(R.chance(0.1) ? R.int(900, 3000) : R.int(1, 150)), ledger: 1, code: 3, flags: { pending } };
        if (pending) pendings.push(e.id);
        events.push(e);
      }
      for (let i = 0; i < events.length - 1; i++) if (R.chance(0.2)) events[i] = { ...events[i], flags: { ...events[i].flags, linked: true } };
      sent.push(...events.filter(e => !e.pending_id));
      const res = await api(base, 'POST', '/transfers', events);
      // 503: too many concurrent writers (the server's retries ran out). The
      // request wrote nothing; consistency is what is checked, not availability.
      if (res.status === 503) { stats.busy++; continue; }
      if (res.status !== 200) { fail(`writer ${w}: HTTP ${res.status} ${res.text}`); continue; }
      stats.batches++;
      stats.events += events.length;
      for (const r of res.body) stats.statuses[r.status] = (stats.statuses[r.status] ?? 0) + 1;
    }
  }

  async function reader(r) {
    while (Date.now() < deadline) {
      const res = await api(base, 'GET', '/accounts?ledger=1');
      if (res.status !== 200) { fail(`reader ${r}: HTTP ${res.status}`); continue; }
      stats.reads++;
      check(res.body, `read ${stats.reads}`);
    }
  }

  await Promise.all([...Array.from({ length: writers }, (_, w) => writer(w)),
                     ...Array.from({ length: readers }, (_, r) => reader(r))]);

  // The final state, and the journal's replay.
  const final = await api(base, 'GET', '/accounts?ledger=1');
  check(final.body, 'final read');
  const journal = await fetch(base + '/api/journal').then(r => r.text());
  const lines = journal.trim().split('\n').filter(Boolean).map(l => JSON.parse(l));
  const replay = new Map();
  const zero = () => ({ debits_pending: 0n, debits_posted: 0n, credits_pending: 0n, credits_posted: 0n });
  const byId = new Map();
  for (const { type, data } of lines) {
    if (type === 'account') { replay.set(data.id, zero()); continue; }
    const t = data;
    byId.set(t.id, t);
    const dr = replay.get(t.debit_account_id), cr = replay.get(t.credit_account_id);
    if (!dr || !cr) { fail(`journal: transfer ${t.id} names a missing account`); continue; }
    const amount = big(t.amount);
    if (t.flags.post_pending_transfer || t.flags.void_pending_transfer) {
      const p = byId.get(t.pending_id);
      if (!p) { fail(`journal: ${t.id} resolves unknown ${t.pending_id}`); continue; }
      const held = big(p.amount);
      dr.debits_pending -= held; cr.credits_pending -= held;
      if (t.flags.post_pending_transfer) { dr.debits_posted += amount; cr.credits_posted += amount; }
    } else if (t.flags.pending) { dr.debits_pending += amount; cr.credits_pending += amount; }
    else { dr.debits_posted += amount; cr.credits_posted += amount; }
  }
  let replayed = 0;
  for (const { type, data } of lines) {
    if (type !== 'account') continue;
    const r = replay.get(data.id);
    for (const k of Object.keys(r)) if (r[k] !== big(data[k])) fail(`replay: account ${data.id} ${k} is ${data[k]}, the journal gives ${r[k]}`);
    replayed++;
  }
  if (stats.batches < 20 || stats.busy > stats.batches) fail(`too few batches committed: ${stats.batches} (${stats.busy} busy)`);
  const result = { seed, seconds, writers, readers, ...stats, journal: { accounts: replayed, transfers: byId.size },
    failures };
  mkdirSync(join(root, 'test-results'), { recursive: true });
  writeFileSync(join(root, 'test-results', `bank-${seed}.json`), JSON.stringify(result, null, 2));
  console.log(JSON.stringify(result, null, 2));
  if (failures.length) {
    console.error(`${failures.length} violations (seed ${seed})`);
    process.exitCode = 1;
  } else {
    console.log(`${stats.reads} reads during ${stats.batches} concurrent batches (${stats.events} events) all saw ${total}; the journal replays to every balance (seed ${seed}).`);
  }
} finally {
  await ledger.stop();
}
