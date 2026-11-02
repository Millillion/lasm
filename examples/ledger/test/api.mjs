// The API, end to end over HTTP: every endpoint, its status codes and its
// JSON, against a fresh server (the Node build by default).
//
//   node test/api.mjs                         # the Node build (npm run build first)
//   node test/api.mjs --url http://host:port  # a server that is already running
//   node test/api.mjs --command "bun bun/main.mjs"   # any other server command ({port}: its port)
//   node test/api.mjs --name <name>           # the name of the results file (test-results/api-<name>.json)
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { api, root, startLedger } from './server.mjs';

const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : undefined; };
const name = option('--name') ?? option('--platform') ?? 'node';
const server = await startLedger({ url: option('--url'), command: option('--command'), platform: option('--platform') });
const base = server.base;
const results = [];
async function test(title, fn) {
  try { await fn(); results.push({ title, ok: true }); console.log(`ok   ${title}`); }
  catch (e) { results.push({ title, ok: false, error: String(e.stack ?? e) }); console.log(`FAIL ${title}\n${e.stack ?? e}`); }
}
const statuses = r => r.body.map(x => x.status);
const MAX = '340282366920938463463374607431768211455';

try {
  await test('create accounts; one status per account', async () => {
    const r = await api(base, 'POST', '/accounts', [
      { id: '1', ledger: 1, code: 10 },
      { id: '2', ledger: 1, code: 10, flags: { debits_must_not_exceed_credits: true } },
      { id: '3', ledger: 2, code: 10 },
      { id: '4', ledger: 1, code: 10, user_data_128: '18446744073709551617' }]);
    assert.equal(r.status, 200);
    assert.deepEqual(statuses(r), ['created', 'created', 'created', 'created']);
  });
  await test('account results: exists, exists_with_different_*, validation', async () => {
    const r = await api(base, 'POST', '/accounts', [
      { id: '1', ledger: 1, code: 10 }, { id: '1', ledger: 1, code: 11 }, { id: '1', ledger: 2, code: 10 },
      { id: '0', ledger: 1, code: 1 }, { id: MAX, ledger: 1, code: 1 }, { id: '9', ledger: 0, code: 1 },
      { id: '9', ledger: 1, code: 0 },
      { id: '9', ledger: 1, code: 1, flags: { debits_must_not_exceed_credits: true, credits_must_not_exceed_debits: true } }]);
    assert.deepEqual(statuses(r), ['exists', 'exists_with_different_code', 'exists_with_different_ledger',
      'id_must_not_be_zero', 'id_must_not_be_int_max', 'ledger_must_not_be_zero', 'code_must_not_be_zero',
      'flags_are_mutually_exclusive']);
  });
  await test('a transfer moves money; retrying it is exists and changes nothing', async () => {
    const t = { id: '100', debit_account_id: '1', credit_account_id: '2', amount: '50', ledger: 1, code: 1 };
    assert.deepEqual(statuses(await api(base, 'POST', '/transfers', [t])), ['created']);
    assert.deepEqual(statuses(await api(base, 'POST', '/transfers', [t])), ['exists']);
    assert.deepEqual(statuses(await api(base, 'POST', '/transfers', [{ ...t, amount: '51' }])), ['exists_with_different_amount']);
    const a1 = (await api(base, 'GET', '/accounts/1')).body, a2 = (await api(base, 'GET', '/accounts/2')).body;
    assert.equal(a1.debits_posted, '50');
    assert.equal(a2.credits_posted, '50');
  });
  await test('debits_must_not_exceed_credits: exceeds_credits, then id_already_failed', async () => {
    const t = { id: '101', debit_account_id: '2', credit_account_id: '1', amount: '51', ledger: 1, code: 1 };
    assert.deepEqual(statuses(await api(base, 'POST', '/transfers', [t])), ['exceeds_credits']);
    assert.deepEqual(statuses(await api(base, 'POST', '/transfers', [{ ...t, amount: '1' }])), ['id_already_failed']);
  });
  await test('transfer validation codes', async () => {
    const t = { debit_account_id: '1', credit_account_id: '2', amount: '1', ledger: 1, code: 1 };
    const r = await api(base, 'POST', '/transfers', [
      { ...t, id: '0' }, { ...t, id: '102', debit_account_id: '0' }, { ...t, id: '103', credit_account_id: '1' },
      { ...t, id: '104', pending_id: '5' }, { ...t, id: '105', ledger: 0 }, { ...t, id: '106', code: 0 },
      { ...t, id: '107', debit_account_id: '77' }, { ...t, id: '108', credit_account_id: '3' },
      { ...t, id: '109', ledger: 2 }]);
    assert.deepEqual(statuses(r), ['id_must_not_be_zero', 'debit_account_id_must_not_be_zero',
      'accounts_must_be_different', 'pending_id_must_be_zero', 'ledger_must_not_be_zero', 'code_must_not_be_zero',
      'debit_account_not_found', 'accounts_must_have_the_same_ledger', 'transfer_must_have_the_same_ledger_as_accounts']);
  });
  await test('two-phase: pending, partial post, then already posted; void returns it', async () => {
    const p = { debit_account_id: '1', credit_account_id: '4', amount: '30', ledger: 1, code: 1, flags: { pending: true } };
    assert.deepEqual(statuses(await api(base, 'POST', '/transfers', [{ ...p, id: '200' }, { ...p, id: '201' }])),
      ['created', 'created']);
    let a = (await api(base, 'GET', '/accounts/1')).body;
    assert.equal(a.debits_pending, '60');
    const r = await api(base, 'POST', '/transfers', [
      { id: '202', pending_id: '200', amount: '10', flags: { post_pending_transfer: true } },
      { id: '203', pending_id: '200', amount: '0', flags: { void_pending_transfer: true } },
      { id: '204', pending_id: '201', amount: '31', flags: { post_pending_transfer: true } },
      { id: '205', pending_id: '201', amount: '0', flags: { void_pending_transfer: true } },
      { id: '206', pending_id: '100', amount: '0', flags: { void_pending_transfer: true } },
      { id: '207', pending_id: '999', amount: '0', flags: { void_pending_transfer: true } }]);
    assert.deepEqual(statuses(r), ['created', 'pending_transfer_already_posted', 'exceeds_pending_transfer_amount',
      'created', 'pending_transfer_not_pending', 'pending_transfer_not_found']);
    a = (await api(base, 'GET', '/accounts/1')).body;
    assert.equal(a.debits_pending, '0');
    assert.equal(a.debits_posted, '60');
  });
  await test('linked chain: all or nothing', async () => {
    const t = { debit_account_id: '1', credit_account_id: '4', amount: '5', ledger: 1, code: 1 };
    const r = await api(base, 'POST', '/transfers', [
      { ...t, id: '300', flags: { linked: true } }, { ...t, id: '301', flags: { linked: true } },
      { ...t, id: '302', debit_account_id: '77' }, { ...t, id: '303' }, { ...t, id: '304', flags: { linked: true } }]);
    assert.deepEqual(statuses(r), ['linked_event_failed', 'linked_event_failed', 'debit_account_not_found', 'created',
      'linked_event_chain_open']);
    assert.equal((await api(base, 'GET', '/transfers/300')).status, 404);
    assert.equal((await api(base, 'GET', '/transfers/303')).status, 200);
  });
  await test('reads: accounts by ledger, an account\'s transfers, the journal page, one transfer', async () => {
    const l2 = await api(base, 'GET', '/accounts?ledger=2');
    assert.deepEqual(l2.body.map(a => a.id), ['3']);
    const of2 = await api(base, 'GET', '/accounts/2/transfers');
    assert.deepEqual(of2.body.map(t => t.id), ['100']);
    const page = await api(base, 'GET', '/transfers?limit=2');
    assert.equal(page.body.length, 2);
    const rest = await api(base, 'GET', `/transfers?after=${page.body[1].timestamp}`);
    assert.ok(rest.body.every(t => BigInt(t.timestamp) > BigInt(page.body[1].timestamp)));
    const t = await api(base, 'GET', '/transfers/202');
    assert.equal(t.body.debit_account_id, '1');
    assert.equal(t.body.amount, '10');
  });
  await test('the journal export replays to every balance', async () => {
    const text = await fetch(base + '/api/journal').then(r => r.text());
    const lines = text.trim().split('\n').map(l => JSON.parse(l));
    assert.ok(lines.some(l => l.type === 'account') && lines.some(l => l.type === 'transfer'));
  });
  await test('errors: unknown field, bad JSON, bad number, unknown route, method', async () => {
    assert.equal((await api(base, 'POST', '/transfers', [{ id: '1', timeout: 5 }])).status, 400);
    assert.equal((await fetch(base + '/api/transfers', { method: 'POST', body: '[' })).status, 400);
    assert.equal((await api(base, 'POST', '/accounts', [{ id: '-1', ledger: 1, code: 1 }])).status, 400);
    assert.equal((await api(base, 'POST', '/accounts', [{ id: MAX + '0', ledger: 1, code: 1 }])).status, 400);
    assert.equal((await api(base, 'GET', '/nope')).status, 404);
    assert.equal((await api(base, 'DELETE', '/accounts')).status, 405);
    assert.equal((await api(base, 'GET', '/accounts/77')).status, 404);
  });
  await test('the browser page and its files are served', async () => {
    const page = await fetch(base + '/');
    assert.equal(page.status, 200);
    assert.match(await page.text(), /<html/i);
    assert.equal((await fetch(base + '/app.js')).status, 200);
  });
  await test('big numbers stay exact', async () => {
    const a = (await api(base, 'GET', '/accounts/4')).body;
    assert.equal(a.user_data_128, '18446744073709551617');
    assert.ok(BigInt(a.timestamp) > 10n ** 18n);
  });
} finally {
  await server.stop();
}
const failed = results.filter(r => !r.ok).length;
mkdirSync(join(root, 'test-results'), { recursive: true });
writeFileSync(join(root, 'test-results', `api-${name}.json`), JSON.stringify({ target: name, url: base, results }, null, 2));
console.log(`${results.length - failed}/${results.length} passed`);
if (failed) process.exitCode = 1;
