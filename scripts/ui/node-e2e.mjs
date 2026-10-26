// Runs a Lasm.UI browser build in Node against happy-dom (no browser):
//   node scripts/ui/node-e2e.mjs todomvc DIST   TodoMVC flows
//   node scripts/ui/node-e2e.mjs bench DIST     benchmark operations: Lean's
//     frame time (view + diff + encode, in Wasm) and patch sizes; the DOM work
//     here is happy-dom's, so only the Lean side is meaningful.
//   node scripts/ui/node-e2e.mjs counter DIST
import assert from 'node:assert/strict';
import { openApp } from './dom-harness.mjs';

const [kind, dist] = process.argv.slice(2);
const page = await openApp(dist, { url: 'https://app.test/' });
const { document: doc } = page;
const t0 = performance.now();
const app = await page.mount('#app');
console.log(`${kind}: mounted in ${(performance.now() - t0).toFixed(1)} ms`);
const root = doc.getElementById('app');
const stats = () => root.lasmUi.stats();

if (kind === 'counter') {
  for (let i = 0; i < 3; i++) page.click('#inc');
  page.click('#dec');
  await page.settle();
  assert.equal(doc.querySelector('#count').textContent, '2');
  console.log('ok counter');
} else if (kind === 'todomvc') {
  const items = () => [...doc.querySelectorAll('.todo-list li')].map(li => [li.querySelector('label').textContent, li.className]);
  assert.equal(doc.activeElement?.id, 'new-todo', 'focus on load');
  for (const t of ['one', '  two  ', 'three']) { page.type('.new-todo', t); page.key('.new-todo', 'Enter'); }
  await page.settle();
  assert.deepEqual(items().map(i => i[0]), ['one', 'two', 'three']);
  assert.equal(doc.querySelector('.new-todo').value, '');
  assert.equal(doc.querySelector('.todo-count').textContent.replace(/\s+/g, ' ').trim(), '3 items left');
  const toggle = doc.querySelector('.todo-list li .toggle');
  toggle.checked = true; toggle.dispatchEvent(new page.window.Event('change', { bubbles: true }));
  await page.settle();
  assert.equal(items()[0][1], 'completed');
  doc.querySelector('.todo-list li:nth-child(2) label').dispatchEvent(new page.window.MouseEvent('dblclick', { bubbles: true }));
  await page.settle();
  assert.equal(doc.activeElement?.className, 'edit');
  page.type('.edit', 'TWO'); page.key('.edit', 'Enter');
  await page.settle();
  assert.deepEqual(items().map(i => i[0]), ['one', 'TWO', 'three']);
  page.click('.filters a[href="#/active"]');
  await page.settle();
  assert.equal(items().length, 2);
  assert.equal(page.window.location.hash, '#/active');
  page.click('.filters a[href="#/"]');
  await page.settle();
  page.click('.clear-completed');
  await page.settle();
  assert.deepEqual(items().map(i => i[0]), ['TWO', 'three']);
  assert.equal(JSON.parse(page.window.localStorage.getItem('todos-lasm')).length, 2);
  console.log('ok todomvc', JSON.stringify(stats()));
} else if (kind === 'bench') {
  const ops = [['run', 'create 1,000 rows'], ['update', 'update every 10th row'], ['swaprows', 'swap rows'], ['run', 'replace all rows'],
    ['add', 'append 1,000 rows'], ['clear', 'clear rows'], ['runlots', 'create 10,000 rows'], ['update', 'update every 10th of 10,000'], ['clear', 'clear 10,000']];
  for (const [id, label] of ops) {
    const times = [];
    let s;
    for (let i = 0; i < 5; i++) {
      if (id === 'update' || id === 'swaprows' || id === 'add') { if (!doc.querySelector('#tbody tr')) { page.click(label.includes('10,000') ? '#runlots' : '#run'); await page.settle(1); } }
      page.click('#' + id);
      await page.settle(1);
      s = stats().last;
      times.push(s.leanMs);
      if (id === 'run' || id === 'runlots' || id === 'clear') { /* fresh state each time */ }
    }
    times.sort((a, b) => a - b);
    console.log(`${label.padEnd(30)} Lean ${times[2].toFixed(2).padStart(7)} ms (min ${times[0].toFixed(2)}), patch ${s.bytes} bytes, rows ${doc.querySelectorAll('#tbody tr').length}`);
  }
}
app.unmount();
await page.close();
