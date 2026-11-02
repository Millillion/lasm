// The browser page shows what the API holds: every account with its
// balances, the journal, a ledger filter, and a refresh after new transfers.
import { expect, test } from '@playwright/test';

const post = (request, path, data) => request.post(`/api${path}`, { data }).then(r => r.json());
const statuses = r => r.map(x => x.status);

test.describe.configure({ mode: 'serial' });

test('the page shows the accounts and the journal', async ({ page, request }) => {
  expect(statuses(await post(request, '/accounts', [
    { id: '11', ledger: 1, code: 1 },
    { id: '12', ledger: 1, code: 1, flags: { debits_must_not_exceed_credits: true } },
    { id: '21', ledger: 2, code: 1 }, { id: '22', ledger: 2, code: 1 }]))).toEqual(['created', 'created', 'created', 'created']);
  expect(statuses(await post(request, '/transfers', [
    { id: '1001', debit_account_id: '11', credit_account_id: '12', amount: '70', ledger: 1, code: 1 },
    { id: '1002', debit_account_id: '21', credit_account_id: '22', amount: '5', ledger: 2, code: 1, flags: { pending: true } }])))
    .toEqual(['created', 'created']);
  await page.goto('/');
  await expect(page.getByRole('heading', { name: 'Ledger', level: 1 })).toBeVisible();
  await expect(page.locator('#accounts tbody tr')).toHaveCount(4);
  await expect(page.locator('#journal tbody tr')).toHaveCount(2);
  const a12 = page.locator('[data-account="12"] td');
  await expect(a12.nth(6)).toHaveText('70');           // credits posted
  await expect(a12.nth(7)).toHaveText('70');           // balance
  await expect(page.locator('[data-account="11"] td').nth(7)).toHaveText('−70');
  await expect(page.locator('[data-account="21"] td').nth(3)).toHaveText('5'); // debits pending
  await expect(page.locator('[data-transfer="1002"] td').nth(6)).toHaveText('pending');
});

test('a ledger filter shows only that ledger', async ({ page }) => {
  await page.goto('/');
  await expect(page.locator('#accounts tbody tr')).toHaveCount(4);
  await page.getByRole('button', { name: 'Ledger 2' }).click();
  await expect(page.locator('#accounts tbody tr')).toHaveCount(2);
  await expect(page.locator('#journal tbody tr')).toHaveCount(1);
  await expect(page.getByRole('button', { name: 'Ledger 2' })).toHaveAttribute('aria-pressed', 'true');
  await page.getByRole('button', { name: 'All ledgers' }).click();
  await expect(page.locator('#accounts tbody tr')).toHaveCount(4);
});

test('refresh shows new transfers, posts and failed chains change nothing shown', async ({ page, request }) => {
  await page.goto('/');
  await expect(page.locator('#journal tbody tr')).toHaveCount(2);
  expect(statuses(await post(request, '/transfers', [
    { id: '1003', pending_id: '1002', amount: '0', flags: { post_pending_transfer: true } },
    { id: '1004', debit_account_id: '12', credit_account_id: '11', amount: '1000', ledger: 1, code: 1, flags: { linked: true } },
    { id: '1005', debit_account_id: '11', credit_account_id: '12', amount: '1', ledger: 1, code: 1 }])))
    .toEqual(['created', 'exceeds_credits', 'linked_event_failed']);
  await page.locator('#refresh').click();
  await expect(page.locator('#journal tbody tr')).toHaveCount(3);
  await expect(page.locator('[data-transfer="1003"] td').nth(6)).toHaveText('post of 1002');
  await expect(page.locator('[data-account="21"] td').nth(3)).toHaveText('0');
  await expect(page.locator('[data-account="21"] td').nth(4)).toHaveText('5');
  await expect(page.locator('[data-transfer="1005"]')).toHaveCount(0);
});
