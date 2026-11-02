// The differential test: the same random workload sent to Ledger and to a
// real TigerBeetle, which must agree on every result code and every balance.
//
//   node test/tigerbeetle.mjs [--seed N] [--batches N]
//
// TigerBeetle is the official release binary, pinned below and checked by
// SHA-256 (downloaded into the tool cache), run as a single-replica
// development cluster; the client is the official `tigerbeetle-node` at the
// same version (TIGERBEETLE_NODE: the directory it is installed in). This runs
// in CI only (ledger.yml, job `tigerbeetle`). The seed is printed first;
// `--seed N` replays a run exactly.
//
// The workload stays inside the subset both implement (README.md,
// "Differences from TigerBeetle"): no timeouts, imported, balancing or
// closing transfers, and amounts far below 2^63, where both bounds agree.
// Within it, it aims at every code path: unknown and repeated ids, retries
// with one field changed, both balance-limit flags, cross-ledger and
// same-account transfers, posts and voids (partial, whole, too much, twice,
// of non-pending transfers), linked chains that succeed, fail and stay open.
import { execFileSync, spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { createWriteStream, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { homedir, tmpdir } from 'node:os';
import { join } from 'node:path';
import { Readable } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { api, freePort, rng, root, seedFrom, startLedger } from './server.mjs';

const VERSION = '0.17.9';
const RELEASE = {
  url: `https://github.com/tigerbeetle/tigerbeetle/releases/download/${VERSION}/tigerbeetle-x86_64-linux.zip`,
  sha256: 'af71f2c0057e3b409bf79940fa94894b738187b0d4f1e711097bca15df5d8cd4',
};

const args = process.argv.slice(2);
const option = (name, d) => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : d; };
const seed = seedFrom(args);
const batches = Number(option('--batches', '400'));
console.log(`seed ${seed} (replay: node test/tigerbeetle.mjs --seed ${seed} --batches ${batches})`);
const R = rng(seed);

/** The pinned TigerBeetle binary, downloaded once and checked by SHA-256. */
async function tigerbeetleBinary() {
  if (process.env.TIGERBEETLE) return process.env.TIGERBEETLE;
  if (process.platform !== 'linux' || process.arch !== 'x64') throw new Error('the pinned TigerBeetle is x86_64 Linux');
  const dir = join(process.env.XDG_CACHE_HOME ?? join(homedir(), '.cache'), 'lasm', `tigerbeetle-${VERSION}`);
  const bin = join(dir, 'tigerbeetle');
  if (existsSync(bin)) return bin;
  mkdirSync(dir, { recursive: true });
  const zip = join(dir, 'tigerbeetle.zip');
  const response = await fetch(RELEASE.url);
  if (!response.ok) throw new Error(`download failed: ${response.status}`);
  await pipeline(Readable.fromWeb(response.body), createWriteStream(zip));
  const digest = createHash('sha256').update(readFileSync(zip)).digest('hex');
  if (digest !== RELEASE.sha256) throw new Error(`SHA-256 mismatch for ${RELEASE.url}: ${digest}`);
  execFileSync('unzip', ['-o', zip, '-d', dir], { stdio: 'inherit' });
  return bin;
}

async function startTigerBeetle() {
  const bin = await tigerbeetleBinary();
  const work = mkdtempSync(join(tmpdir(), 'tigerbeetle-'));
  const file = join(work, '0_0.tigerbeetle');
  const port = await freePort();
  execFileSync(bin, ['format', '--cluster=0', '--replica=0', '--replica-count=1', '--development', file],
    { stdio: 'inherit' });
  const child = spawn(bin, ['start', `--addresses=${port}`, '--development', file], { stdio: ['ignore', 'inherit', 'inherit'] });
  const require = createRequire(join(process.env.TIGERBEETLE_NODE ?? root, 'package.json'));
  const tb = require('tigerbeetle-node');
  const client = tb.createClient({ cluster_id: 0n, replica_addresses: [String(port)] });
  // The first request waits until the replica is up.
  await client.lookupAccounts([1n]);
  return {
    tb, client,
    stop: () => { client.destroy(); child.kill('SIGTERM'); rmSync(work, { recursive: true, force: true }); },
  };
}

// ---------------------------------------------------------------------------
// The workload. Events are kept as plain objects with BigInt fields; each is
// sent to TigerBeetle as is and to Ledger as JSON.

const U128_MAX = (1n << 128n) - 1n;
const ledgers = [1, 2];
let nextId = 1n;
const fresh = () => nextId++;

const accounts = [];      // { id, ledger, flags } created or attempted
const transfers = [];     // events sent before (for retries)
const pendings = [];      // ids of transfers sent with the pending flag

function accountEvent() {
  const id = accounts.length > 2 && R.chance(0.1) ? R.pick(accounts).id : fresh();
  const dmnec = R.chance(0.3), cmned = R.chance(dmnec ? 0.05 : 0.2);
  const e = {
    id, user_data_128: R.chance(0.2) ? BigInt(R.int(1, 5)) : 0n, user_data_64: 0n, user_data_32: 0,
    ledger: R.chance(0.03) ? 0 : R.pick(ledgers), code: R.chance(0.03) ? 0 : R.int(1, 3),
    flags: (dmnec ? 2 : 0) | (cmned ? 4 : 0),
  };
  accounts.push(e);
  return e;
}

const anyAccount = () => accounts.length && !R.chance(0.04) ? R.pick(accounts).id : (R.chance(0.5) ? 0n : 999999n);

function transferEvent() {
  const roll = R.next();
  // A retry of an earlier transfer, as it was or with one field changed.
  if (roll < 0.12 && transfers.length) {
    const e = { ...R.pick(transfers) };
    if (R.chance(0.5)) {
      const field = R.pick(['amount', 'debit_account_id', 'credit_account_id', 'user_data_128', 'ledger', 'code', 'flags']);
      if (field === 'flags') e.flags ^= 1 << R.int(0, 1);
      else if (field === 'ledger' || field === 'code') e[field] = e[field] + 1;
      else e[field] = e[field] === U128_MAX ? e[field] - 1n : e[field] + 1n;
    }
    return e;
  }
  // A post or void.
  if (roll < 0.35 && pendings.length) {
    const post = R.chance(0.6);
    const pendingId = R.chance(0.9) ? R.pick(pendings) : (R.chance(0.5) ? fresh() : R.pick(transfers)?.id ?? 0n);
    const amount = R.pick([0n, U128_MAX, BigInt(R.int(1, 60)), BigInt(R.int(1, 400))]);
    return {
      id: fresh(), debit_account_id: R.chance(0.1) ? anyAccount() : 0n, credit_account_id: 0n, amount,
      pending_id: pendingId, user_data_128: R.chance(0.2) ? 7n : 0n, user_data_64: 0n, user_data_32: 0, timeout: 0,
      ledger: R.chance(0.1) ? R.pick(ledgers) : 0, code: R.chance(0.1) ? R.int(1, 3) : 0,
      flags: (post ? 4 : 8) | (R.chance(0.03) ? 2 : 0),
    };
  }
  // A single-phase or pending transfer.
  const dr = anyAccount();
  const cr = R.chance(0.05) ? dr : anyAccount();
  const account = accounts.find(a => a.id === dr);
  const pending = R.chance(0.35);
  const e = {
    id: R.chance(0.02) ? 0n : fresh(), debit_account_id: dr, credit_account_id: cr,
    amount: BigInt(R.chance(0.05) ? 0 : R.int(1, R.chance(0.2) ? 2000 : 200)), pending_id: R.chance(0.02) ? 5n : 0n,
    user_data_128: R.chance(0.2) ? BigInt(R.int(1, 9)) : 0n, user_data_64: R.chance(0.1) ? 3n : 0n,
    user_data_32: R.chance(0.1) ? 4 : 0, timeout: 0,
    ledger: R.chance(0.04) ? 0 : (R.chance(0.08) ? R.pick(ledgers) : account?.ledger ?? 1),
    code: R.chance(0.03) ? 0 : R.int(1, 3), flags: pending ? 2 : 0,
  };
  if (pending) pendings.push(e.id);
  return e;
}

/** A batch: chains are made by setting `linked` on runs of events. */
function batch(make, max) {
  const n = R.int(1, max);
  const events = Array.from({ length: n }, () => make());
  for (let i = 0; i < n; i++) if (R.chance(0.25)) events[i] = { ...events[i], flags: events[i].flags | 1 };
  return events;
}

// The JSON Ledger reads.
const s = v => v.toString();
const accountJson = e => ({
  id: s(e.id), user_data_128: s(e.user_data_128), user_data_64: s(e.user_data_64), user_data_32: e.user_data_32,
  ledger: e.ledger, code: e.code,
  flags: { linked: !!(e.flags & 1), debits_must_not_exceed_credits: !!(e.flags & 2),
           credits_must_not_exceed_debits: !!(e.flags & 4) },
});
const transferJson = e => ({
  id: s(e.id), debit_account_id: s(e.debit_account_id), credit_account_id: s(e.credit_account_id),
  amount: s(e.amount), pending_id: s(e.pending_id), user_data_128: s(e.user_data_128),
  user_data_64: s(e.user_data_64), user_data_32: e.user_data_32, ledger: e.ledger, code: e.code,
  flags: { linked: !!(e.flags & 1), pending: !!(e.flags & 2), post_pending_transfer: !!(e.flags & 4),
           void_pending_transfer: !!(e.flags & 8) },
});
// The structs TigerBeetle reads (every field present).
const accountTb = e => ({ ...e, debits_pending: 0n, debits_posted: 0n, credits_pending: 0n, credits_posted: 0n,
  reserved: 0, timestamp: 0n });
const transferTb = e => ({ ...e, timestamp: 0n });

// ---------------------------------------------------------------------------

const ledger = await startLedger({ url: option('--url') });
const beetle = await startTigerBeetle();
const { tb, client } = beetle;
const mismatches = [];
const counts = {};
let events = 0;
try {
  const compare = (kind, i, sent, ours, theirs) => {
    const a = ours.map(r => r.status), b = theirs.map(r => (kind === 'accounts' ? tb.CreateAccountStatus : tb.CreateTransferStatus)[r.status]);
    for (const x of b) counts[x] = (counts[x] ?? 0) + 1;
    events += sent.length;
    if (a.length !== b.length || a.some((x, j) => x !== b[j])) {
      mismatches.push({ batch: i, kind, ledger: a, tigerbeetle: b, events: sent.map(e => Object.fromEntries(
        Object.entries(e).map(([k, v]) => [k, typeof v === 'bigint' ? v.toString() : v]))) });
    }
  };
  for (let i = 0; i < batches; i++) {
    if (i < 6 || R.chance(0.12)) {
      const evs = batch(accountEvent, 6);
      const ours = await api(ledger.base, 'POST', '/accounts', evs.map(accountJson));
      if (ours.status !== 200) throw new Error(`Ledger answered ${ours.status}: ${ours.text}`);
      compare('accounts', i, evs, ours.body, await client.createAccounts(evs.map(accountTb)));
    } else {
      const evs = batch(transferEvent, 8);
      transfers.push(...evs);
      const ours = await api(ledger.base, 'POST', '/transfers', evs.map(transferJson));
      if (ours.status !== 200) throw new Error(`Ledger answered ${ours.status}: ${ours.text}`);
      compare('transfers', i, evs, ours.body, await client.createTransfers(evs.map(transferTb)));
    }
    if (mismatches.length >= 5) break;
  }
  // Every balance.
  const ids = [...new Set(accounts.map(a => a.id))];
  const theirs = new Map((await client.lookupAccounts(ids)).map(a => [a.id, a]));
  let balances = 0;
  for (const id of ids) {
    const ours = await api(ledger.base, 'GET', `/accounts/${id}`);
    const t = theirs.get(id);
    if ((ours.status === 200) !== !!t) {
      mismatches.push({ account: s(id), ledger: ours.status, tigerbeetle: t ? 'exists' : 'missing' });
      continue;
    }
    if (!t) continue;
    balances++;
    for (const k of ['debits_pending', 'debits_posted', 'credits_pending', 'credits_posted', 'user_data_128', 'ledger', 'code', 'flags']) {
      const ourValue = k === 'flags'
        ? (ours.body.flags.linked ? 1 : 0) | (ours.body.flags.debits_must_not_exceed_credits ? 2 : 0) |
          (ours.body.flags.credits_must_not_exceed_debits ? 4 : 0)
        : String(ours.body[k]);
      if (String(ourValue) !== String(t[k])) mismatches.push({ account: s(id), field: k, ledger: ourValue, tigerbeetle: String(t[k]) });
    }
  }
  const result = { seed, batches, events, accounts: balances, tigerbeetle: VERSION, statuses: counts,
    mismatches: mismatches.slice(0, 20) };
  mkdirSync(join(root, 'test-results'), { recursive: true });
  writeFileSync(join(root, 'test-results', `tigerbeetle-${seed}.json`), JSON.stringify(result, null, 2));
  console.log(JSON.stringify({ ...result, mismatches: mismatches.length }, null, 2));
  if (mismatches.length) {
    console.error(JSON.stringify(mismatches.slice(0, 5), null, 2));
    console.error(`${mismatches.length} mismatches with TigerBeetle ${VERSION} (seed ${seed})`);
    process.exitCode = 1;
  } else {
    console.log(`Ledger and TigerBeetle ${VERSION} agree on ${events} events and ${balances} accounts' balances (seed ${seed}).`);
  }
} finally {
  beetle.stop();
  await ledger.stop();
}
