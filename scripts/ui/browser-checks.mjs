// Lasm.UI checks for the browser suite (scripts/browser/browser-ci.mjs; CI only,
// headless): TodoMVC end to end, the js-framework-benchmark operations against
// vanilla JavaScript, the counter, and the feature demo (routing, HTTP, timers,
// ports, SVG, focus, SSR and hydration), and event decisions (examples/ui/events:
// preventDefault and stopPropagation decided in Lean per event). Each check gets the suite's helpers:
// { server, name, manifest, openPage, expect, report, step } (step(label) names
// what the check is doing, for the suite's per-app timeout message).

const median = xs => { const s = [...xs].sort((a, b) => a - b); return s.length ? s[Math.floor(s.length / 2)] : null; };
// Browsers log failed requests as console errors; the demo requests a missing page on purpose.
const isError = line => /^(error|pageerror)/.test(line) && !/status of 404/.test(line);
const noErrors = lines => !lines.some(isError);
const errorLines = lines => lines.filter(isError).join(' | ');

async function counter({ server, name, openPage, expect, report }) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  try {
    await page.waitForSelector('#count', { timeout: 30_000 });
    expect(name, 'ui.counter.initial', (await page.textContent('#count')) === '0', await page.textContent('#count'));
    expect(name, 'ui.counter.reset-disabled', await page.$eval('#reset', b => b.disabled), 'reset enabled at 0');
    for (let i = 0; i < 3; i++) await page.click('#inc');
    await page.click('#dec');
    await page.waitForFunction(() => document.querySelector('#count').textContent === '2', null, { timeout: 5000 }).catch(() => {});
    expect(name, 'ui.counter.clicks', (await page.textContent('#count')) === '2', await page.textContent('#count'));
    expect(name, 'ui.counter.reset-enabled', !(await page.$eval('#reset', b => b.disabled)), 'reset disabled');
    await page.click('#reset');
    await page.waitForFunction(() => document.querySelector('#count').textContent === '0', null, { timeout: 5000 }).catch(() => {});
    expect(name, 'ui.counter.reset', (await page.textContent('#count')) === '0', await page.textContent('#count'));
    expect(name, 'ui.counter.no-errors', noErrors(consoleLines), errorLines(consoleLines));
    report.apps[name].start = await page.evaluate(() => window.__lasm.mounts ?? null);
  } finally { report.apps[name].console = consoleLines.slice(-50); await context.close(); }
}

async function todomvc({ server, name, openPage, expect, report }) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  const items = () => page.$$eval('.todo-list li', lis => lis.map(li => ({ text: li.querySelector('label')?.textContent ?? '', cls: li.className })));
  const count = () => page.textContent('.todo-count').catch(() => null);
  const until = (fn, arg) => page.waitForFunction(fn, arg, { timeout: 5000 }).catch(() => {});
  try {
    await page.waitForSelector('.new-todo', { timeout: 30_000 });
    expect(name, 'todomvc.focus-on-load', await until(() => document.activeElement?.classList.contains('new-todo')), 'new-todo not focused');
    expect(name, 'todomvc.no-main-when-empty', (await page.$('.main')) === null && (await page.$('.footer')) === null, 'main/footer shown');
    for (const t of ['buy some cheese', '  feed the cat  ', 'book a doctors appointment']) {
      await page.fill('.new-todo', t);
      await page.press('.new-todo', 'Enter');
    }
    await until(() => document.querySelectorAll('.todo-list li').length === 3);
    let list = await items();
    expect(name, 'todomvc.add', list.map(i => i.text).join('|') === 'buy some cheese|feed the cat|book a doctors appointment', JSON.stringify(list));
    expect(name, 'todomvc.input-cleared', (await page.inputValue('.new-todo')) === '', await page.inputValue('.new-todo'));
    expect(name, 'todomvc.count', (await count())?.replace(/\s+/g, ' ').trim() === '3 items left', await count());
    await page.fill('.new-todo', '   ');
    await page.press('.new-todo', 'Enter');
    expect(name, 'todomvc.blank-ignored', (await items()).length === 3, 'blank todo added');
    // Toggle one.
    await page.check('.todo-list li:nth-child(1) .toggle');
    await until(() => document.querySelectorAll('.todo-list li.completed').length === 1);
    list = await items();
    expect(name, 'todomvc.toggle', list[0].cls.includes('completed') && !list[1].cls.includes('completed'), JSON.stringify(list));
    expect(name, 'todomvc.count-singular', (await count())?.replace(/\s+/g, ' ').trim() === '2 items left', await count());
    // Filters (hash routes).
    await page.click('.filters a[href="#/active"]');
    await until(() => document.querySelectorAll('.todo-list li').length === 2);
    expect(name, 'todomvc.filter-active', (await items()).length === 2 && (await page.evaluate(() => location.hash)) === '#/active',
      `${(await items()).length} ${await page.evaluate(() => location.hash)}`);
    expect(name, 'todomvc.filter-selected', (await page.getAttribute('.filters a[href="#/active"]', 'class')) === 'selected', 'not selected');
    await page.click('.filters a[href="#/completed"]');
    await until(() => document.querySelectorAll('.todo-list li').length === 1);
    expect(name, 'todomvc.filter-completed', (await items()).length === 1, String((await items()).length));
    await page.goBack();
    await until(() => document.querySelectorAll('.todo-list li').length === 2);
    expect(name, 'todomvc.back-button', (await items()).length === 2, String((await items()).length));
    await page.click('.filters a[href="#/"]');
    await until(() => document.querySelectorAll('.todo-list li').length === 3);
    expect(name, 'todomvc.filter-all', (await items()).length === 3, String((await items()).length));
    // Edit.
    await page.dblclick('.todo-list li:nth-child(2) label');
    await until(() => document.activeElement?.classList.contains('edit'));
    expect(name, 'todomvc.edit-focus', await page.evaluate(() => document.activeElement?.classList.contains('edit') && document.activeElement.value === 'feed the cat'),
      await page.evaluate(() => document.activeElement?.className));
    expect(name, 'todomvc.edit-class', (await items())[1].cls.includes('editing'), JSON.stringify(await items()));
    await page.fill('.todo-list li:nth-child(2) .edit', '  buy some sausages  ');
    await page.press('.todo-list li:nth-child(2) .edit', 'Enter');
    await until(() => !document.querySelector('.edit'));
    expect(name, 'todomvc.edit-commit', (await items())[1].text === 'buy some sausages', JSON.stringify(await items()));
    await page.dblclick('.todo-list li:nth-child(2) label');
    await page.waitForSelector('.edit', { timeout: 5000 });
    await page.fill('.todo-list li:nth-child(2) .edit', 'nope');
    await page.press('.todo-list li:nth-child(2) .edit', 'Escape');
    await until(() => !document.querySelector('.edit'));
    expect(name, 'todomvc.edit-escape', (await items())[1].text === 'buy some sausages', JSON.stringify(await items()));
    await page.dblclick('.todo-list li:nth-child(2) label');
    await page.waitForSelector('.edit', { timeout: 5000 });
    await page.fill('.todo-list li:nth-child(2) .edit', 'blur commits');
    await page.click('h1');
    await until(() => !document.querySelector('.edit'));
    expect(name, 'todomvc.edit-blur', (await items())[1].text === 'blur commits', JSON.stringify(await items()));
    await page.dblclick('.todo-list li:nth-child(2) label');
    await page.waitForSelector('.edit', { timeout: 5000 });
    await page.fill('.todo-list li:nth-child(2) .edit', '');
    await page.press('.todo-list li:nth-child(2) .edit', 'Enter');
    await until(() => document.querySelectorAll('.todo-list li').length === 2);
    expect(name, 'todomvc.edit-empty-deletes', (await items()).length === 2, JSON.stringify(await items()));
    // Toggle all, clear completed.
    await page.check('.toggle-all');
    await until(() => document.querySelectorAll('.todo-list li.completed').length === 2);
    expect(name, 'todomvc.toggle-all', (await items()).every(i => i.cls.includes('completed')), JSON.stringify(await items()));
    await page.uncheck('.toggle-all');
    await until(() => document.querySelectorAll('.todo-list li.completed').length === 0);
    expect(name, 'todomvc.untoggle-all', (await items()).every(i => !i.cls.includes('completed')), JSON.stringify(await items()));
    await page.check('.todo-list li:nth-child(1) .toggle');
    await page.waitForSelector('.clear-completed', { timeout: 5000 });
    await page.click('.clear-completed');
    await until(() => document.querySelectorAll('.todo-list li').length === 1);
    expect(name, 'todomvc.clear-completed', (await items()).length === 1 && (await page.$('.clear-completed')) === null, JSON.stringify(await items()));
    // Delete, persistence.
    await page.fill('.new-todo', 'persist me');
    await page.press('.new-todo', 'Enter');
    await until(() => document.querySelectorAll('.todo-list li').length === 2);
    await page.hover('.todo-list li:nth-child(1)');
    await page.click('.todo-list li:nth-child(1) .destroy');
    await until(() => document.querySelectorAll('.todo-list li').length === 1);
    expect(name, 'todomvc.destroy', (await items()).map(i => i.text).join('|') === 'persist me', JSON.stringify(await items()));
    await page.reload({ waitUntil: 'load' });
    await page.waitForSelector('.todo-list li', { timeout: 30_000 }).catch(() => {});
    expect(name, 'todomvc.persistence', (await items()).map(i => i.text).join('|') === 'persist me', JSON.stringify(await items()));
    expect(name, 'todomvc.no-errors', noErrors(consoleLines), errorLines(consoleLines));
    report.apps[name].start = await page.evaluate(() => window.__lasm.mounts ?? null);
  } finally { report.apps[name].console = consoleLines.slice(-80); await context.close(); }
}

// The js-framework-benchmark operations, timed in the page from the click to
// the next frame being painted (rAF, then a task), for Lasm.UI and for vanilla
// JavaScript (bench/ui/vanilla, the same markup) in the same browser. The
// budget (docs/BROWSER.md) covers creating 1,000 rows and updating every 10th;
// every operation is recorded.
const frameMs = 1000 / 60, minimumGateTrials = 7;
const operations = [
  { name: 'create 1,000 rows', setup: ['clear'], run: 'run', budget: 2 },
  { name: 'replace all rows', setup: ['run'], run: 'run' },
  { name: 'update every 10th row', setup: ['clear', 'run'], run: 'update', budget: 2 },
  { name: 'select row', setup: ['clear', 'run'], run: { select: 2 } },
  { name: 'swap rows', setup: ['clear', 'run'], run: 'swaprows' },
  { name: 'remove row', setup: ['clear', 'run'], run: { remove: 4 } },
  { name: 'create 10,000 rows', setup: ['clear'], run: 'runlots', repeats: 3 },
  { name: 'append 1,000 rows', setup: ['clear', 'run'], run: 'add' },
  { name: 'clear 1,000 rows', setup: ['clear', 'run'], run: 'clear' },
];

// A painted frame: requestAnimationFrame, then a task. A page that gets no
// frames (in the background, or a stalled engine) fails within frameWaitMs
// instead of leaving page.evaluate (which has no timeout) waiting forever.
// (The page's CSP has no 'unsafe-eval', so each evaluated function spells it out.)
const frameWaitMs = 15_000;

// One timed run of an operation in a page: the setup clicks (each followed by
// a painted frame), then the click being timed, to the next painted frame.
async function trial(page, op) {
  // A page in the background may get no animation frames.
  await page.bringToFront();
  return page.evaluate(async ([op, frameWaitMs]) => {
    const paint = () => new Promise((resolve, reject) => {
      const timer = setTimeout(() => reject(new Error(`no animation frame within ${frameWaitMs} ms (visibilityState ${document.visibilityState}, hasFocus ${document.hasFocus()})`)), frameWaitMs);
      requestAnimationFrame(() => setTimeout(() => { clearTimeout(timer); resolve(); }, 0));
    });
    const target = run => typeof run === 'string' ? document.getElementById(run)
      : run.select ? document.querySelector(`#tbody tr:nth-child(${run.select}) td:nth-child(2) a`)
      : document.querySelector(`#tbody tr:nth-child(${run.remove}) td:nth-child(3) a`);
    for (const s of op.setup) { document.getElementById(s).click(); await paint(); }
    await paint();
    const el = target(op.run);
    const t0 = performance.now();
    el.click();
    await paint();
    return performance.now() - t0;
  }, [op, frameWaitMs]);
}

// The DOM after run then update: 1,000 rows, every 10th label updated.
const checkRows = async page => (await page.bringToFront(), page.evaluate(async frameWaitMs => {
  const paint = () => new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error(`no animation frame within ${frameWaitMs} ms (visibilityState ${document.visibilityState}, hasFocus ${document.hasFocus()})`)), frameWaitMs);
    requestAnimationFrame(() => setTimeout(() => { clearTimeout(timer); resolve(); }, 0));
  });
  for (const id of ['clear', 'run', 'update']) { document.getElementById(id).click(); await paint(); }
  const rows = [...document.querySelectorAll('#tbody tr')];
  return { rows: rows.length, firstUpdated: rows[0]?.querySelector('a')?.textContent.endsWith(' !!!'),
    secondPlain: !rows[1]?.querySelector('a')?.textContent.endsWith(' !!!') };
}, frameWaitMs));

async function bench({ server, name, openPage, expect, report, step }) {
  const lasm = await openPage(server, `/${name}/`);
  const vanilla = await openPage(server, '/vanilla/');
  const table = {};
  try {
    await lasm.page.waitForSelector('#run', { timeout: 30_000 });
    await vanilla.page.waitForSelector('#run', { timeout: 30_000 });
    // Warm-up: engines compile hot code (JavaScript and WebAssembly) in tiers
    // over the first seconds; both pages run every operation a few times first.
    for (let round = 0; round < 3; round++)
      for (const op of operations.filter(o => !o.repeats))
        for (const [which, page] of [['Lasm.UI', lasm.page], ['vanilla', vanilla.page]]) {
          step(`warm-up round ${round + 1}: ${op.name} (${which})`);
          await trial(page, op);
        }
    // Trials alternate between the two pages, so both see the same machine
    // state (shared CI runners vary over a run); one more warm-up trial each.
    for (const op of operations) {
      const l = [], v = [], leanMs = [], applyMs = [];
      const n = (op.repeats ?? 10) + 1;
      for (let i = 0; i < n; i++) {
        step(`trial ${i + 1}/${n}: ${op.name} (Lasm.UI)`);
        const tl = await trial(lasm.page, op);
        // Lean's part of the timed frame (view, diff, encoding) and the applier's.
        const last = await lasm.page.evaluate(() => document.querySelector('[data-lasm-app]')?.lasmUi?.stats().last ?? null);
        step(`trial ${i + 1}/${n}: ${op.name} (vanilla)`);
        const tv = await trial(vanilla.page, op);
        if (i > 0) { l.push(tl); v.push(tv); if (last) { leanMs.push(last.leanMs); applyMs.push(last.applyMs); } }
      }
      const lm = median(l), vm = median(v);
      table[op.name] = { lasmMs: lm, vanillaMs: vm, ratio: vm ? lm / vm : null, budget: op.budget ?? null,
        leanMs: median(leanMs), applyMs: median(applyMs), lasmAll: l, vanillaAll: v,
        ratios: l.map((t, i) => v[i] ? t / v[i] : null) };
      // The gate (docs/UI.md "Benchmark gate"): the median of at least 7
      // alternating trials after warm-up within the budget (2× vanilla) or
      // within one 60 Hz frame (16.7 ms) of vanilla, whichever is looser.
      if (op.budget) {
        if (l.length < minimumGateTrials) throw new Error(`bench.${op.name}: ${l.length} trials; the gate needs ${minimumGateTrials}`);
        expect(name, `bench.${op.name}`, lm <= Math.max(op.budget * vm, vm + frameMs), `${lm?.toFixed(1)} ms vs vanilla ${vm?.toFixed(1)} ms (limit ${Math.max(op.budget * vm, vm + frameMs).toFixed(1)} ms)`);
      }
    }
    report.apps[name].bench = table;
    step('the final DOM');
    const lc = await checkRows(lasm.page), vc = await checkRows(vanilla.page);
    expect(name, 'bench.dom', lc.rows === 1000 && lc.firstUpdated && lc.secondPlain, JSON.stringify(lc));
    expect(name, 'bench.vanilla-dom', vc.rows === 1000 && vc.firstUpdated, JSON.stringify(vc));
    expect(name, 'bench.no-errors', noErrors(lasm.consoleLines), errorLines(lasm.consoleLines));
  } finally {
    report.apps[name].console = lasm.consoleLines.slice(-30);
    await lasm.context.close();
    await vanilla.context.close();
  }
}

async function demo({ server, name, manifest, openPage, expect, report }) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  const text = s => page.textContent(s).catch(() => null);
  const until = (fn, arg, timeout = 5000) => page.waitForFunction(fn, arg, { timeout }).then(() => true, () => false);
  try {
    await page.waitForSelector('#demo', { timeout: 30_000 });
    // Routing: links change the path without loading a page; the back button.
    await page.click('a[href="/demo/about"]');
    await until(() => document.querySelector('#page')?.textContent === 'about');
    expect(name, 'demo.route-link', (await text('#page')) === 'about' && page.url().endsWith('/demo/about'), `${await text('#page')} ${page.url()}`);
    await page.goBack();
    await until(() => document.querySelector('#page')?.textContent === 'home');
    expect(name, 'demo.route-back', (await text('#page')) === 'home', await text('#page'));
    // A link whose handler stops propagation is still routed (no page load).
    await page.evaluate(() => { window.__sameDocument = true; });
    await page.click('#stop-link');
    await until(() => document.querySelector('#page')?.textContent === 'about');
    const sameDocument = await page.evaluate(() => window.__sameDocument === true).catch(() => false);
    expect(name, 'demo.route-link-stopped-propagation', (await text('#page')) === 'about' && page.url().endsWith('/demo/about') && sameDocument
      && (await text('#link-clicks')) === '1', `${await text('#page')} ${page.url()} same document ${sameDocument} clicks ${await text('#link-clicks')}`);
    await page.goBack();
    await until(() => document.querySelector('#page')?.textContent === 'home');
    await page.click('#go-item');
    await until(() => document.querySelector('#page')?.textContent === 'item 7');
    expect(name, 'demo.route-push', (await text('#page')) === 'item 7' && page.url().endsWith('/demo/items/7?tab=info'), `${await text('#page')} ${page.url()}`);
    // HTTP.
    await page.click('#fetch');
    await until(() => document.querySelector('#http')?.textContent.startsWith('200'));
    expect(name, 'demo.http', (await text('#http'))?.startsWith('200 '), await text('#http'));
    await page.click('#fetch-missing');
    await until(() => document.querySelector('#http')?.textContent.startsWith('404'));
    expect(name, 'demo.http-status', (await text('#http'))?.startsWith('404'), await text('#http'));
    // Timers: a delay and a subscription.
    await page.click('#delay');
    expect(name, 'demo.delay', await until(() => document.querySelector('#delayed')?.textContent === 'done'), await text('#delayed'));
    await page.click('#tick-toggle');
    expect(name, 'demo.every', await until(() => Number(document.querySelector('#ticks')?.textContent) >= 2, null, 3000), await text('#ticks'));
    await page.click('#tick-toggle');
    const stopped = Number(await text('#ticks'));
    await page.waitForTimeout(400);
    expect(name, 'demo.unsubscribe', Number(await text('#ticks')) === stopped, `${stopped} → ${await text('#ticks')}`);
    // Keyboard subscription, focus, SVG.
    await page.keyboard.press('KeyK');
    expect(name, 'demo.document-keys', await until(() => document.querySelector('#last-key')?.textContent === 'k'), await text('#last-key'));
    await page.click('#focus');
    expect(name, 'demo.focus', await until(() => document.activeElement?.id === 'name'), await page.evaluate(() => document.activeElement?.id));
    expect(name, 'demo.svg', await page.evaluate(() => document.querySelector('#clock circle')?.namespaceURI === 'http://www.w3.org/2000/svg'), 'not SVG');
    await page.fill('#name', 'Ada');
    expect(name, 'demo.input', await until(() => document.querySelector('#hello')?.textContent === 'Hello, Ada!'), await text('#hello'));
    // Keyed reorder keeps nodes (and their state).
    const kept = await page.evaluate(async () => {
      const before = document.querySelector('#keyed li[data-k="c"]');
      document.querySelector('#reverse').click();
      await new Promise(r => requestAnimationFrame(() => setTimeout(r, 0)));
      const after = document.querySelector('#keyed li[data-k="c"]');
      return { same: before === after, order: [...document.querySelectorAll('#keyed li')].map(li => li.dataset.k).join('') };
    });
    expect(name, 'demo.keyed', kept.same && kept.order === 'edcba', JSON.stringify(kept));
    // Ports and app.send through the loader's app handle.
    const entry = new URL(`/${name}/${manifest.entry}`, server.url).href;
    const ported = await page.evaluate(async entry => {
      const loader = await import(entry);
      const app = loader.appOf(document.getElementById('app'));
      const answer = new Promise(resolve => app.ports.out.subscribe(resolve));
      await app.ports.in.send(21);
      await app.send('hi');
      return { answer: await answer };
    }, entry);
    expect(name, 'demo.ports', ported.answer === 42, JSON.stringify(ported));
    expect(name, 'demo.send', await until(() => document.querySelector('#received')?.textContent === 'hi'), await text('#received'));
    // SSR and hydration: the app renders its first view to HTML (Lasm.UI.render,
    // in the browser's Wasm), the page puts it in a fresh element, and a new
    // instance mounted with hydrate adopts those nodes and handles events.
    const hydrated = await page.evaluate(async entry => {
      const loader = await import(entry);
      const app = loader.appOf(document.getElementById('app'));
      const html = await new Promise(resolve => { app.ports.ssr.subscribe(resolve); app.ports.render.send(null); });
      const host = document.createElement('div');
      host.id = 'hydrate-host';
      host.innerHTML = html;
      document.body.appendChild(host);
      const button = host.querySelector('#counter-inc');
      const second = await loader.mount(host, { hydrate: true, flags: { ssr: true } });
      await new Promise(r => requestAnimationFrame(() => setTimeout(r, 0)));
      const adopted = host.querySelector('#counter-inc') === button;
      button.click();
      await new Promise(r => requestAnimationFrame(() => setTimeout(r, 0)));
      const value = host.querySelector('#counter-value')?.textContent;
      second.unmount();
      return { adopted, value, length: html.length };
    }, entry);
    expect(name, 'demo.hydrate-adopts', hydrated.adopted, JSON.stringify(hydrated));
    expect(name, 'demo.hydrate-events', hydrated.value === '1', JSON.stringify(hydrated));
    expect(name, 'demo.no-errors', noErrors(consoleLines), errorLines(consoleLines));
    report.apps[name].start = await page.evaluate(() => window.__lasm.mounts ?? null);
  } finally { report.apps[name].console = consoleLines.slice(-80); await context.close(); }
}

// Event decisions (examples/ui/events): each handler decides for each event,
// in Lean, whether to prevent its default and stop its propagation.
async function events({ server, name, openPage, expect, report }) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  const text = s => page.textContent(s).catch(() => null);
  const until = (fn, arg, timeout = 5000) => page.waitForFunction(fn, arg, { timeout }).then(() => true, () => false);
  const sent = () => page.$$eval('#sent li', lis => lis.map(li => li.textContent));
  try {
    await page.waitForSelector('#events', { timeout: 30_000 });
    // The chat box: Enter sends with no newline; other keys type; Shift+Enter inserts a newline.
    await page.focus('#chat');
    await page.keyboard.type('hello');
    expect(name, 'events.chat-typing', (await page.inputValue('#chat')) === 'hello', JSON.stringify(await page.inputValue('#chat')));
    await page.keyboard.press('Enter');
    await until(() => document.querySelectorAll('#sent li').length === 1);
    expect(name, 'events.chat-enter-sends', JSON.stringify(await sent()) === '["hello"]', JSON.stringify(await sent()));
    expect(name, 'events.chat-enter-no-newline', (await page.inputValue('#chat')) === '', JSON.stringify(await page.inputValue('#chat')));
    await page.keyboard.type('a');
    await page.keyboard.press('Shift+Enter');
    await page.keyboard.type('b');
    expect(name, 'events.chat-shift-enter-newline', (await page.inputValue('#chat')) === 'a\nb', JSON.stringify(await page.inputValue('#chat')));
    expect(name, 'events.chat-shift-enter-no-send', (await sent()).length === 1, JSON.stringify(await sent()));
    // Enter confirming an IME composition (Japanese, Chinese, Korean input) is left to the input method.
    const composing = await page.evaluate(() => {
      const e = new KeyboardEvent('keydown', { key: 'Enter', isComposing: true, bubbles: true, cancelable: true });
      document.querySelector('#chat').dispatchEvent(e);
      return e.defaultPrevented;
    });
    await page.waitForTimeout(100);
    expect(name, 'events.chat-composing-enter-ignored', composing === false && (await sent()).length === 1 && (await page.inputValue('#chat')) === 'a\nb',
      `prevented ${composing}, ${JSON.stringify(await sent())} ${JSON.stringify(await page.inputValue('#chat'))}`);
    await page.keyboard.press('Enter');
    await until(() => document.querySelectorAll('#sent li').length === 2);
    expect(name, 'events.chat-multiline-sent', JSON.stringify(await sent()) === '["hello","a\\nb"]' && (await page.inputValue('#chat')) === '',
      `${JSON.stringify(await sent())} ${JSON.stringify(await page.inputValue('#chat'))}`);
    // stopPropagationOn: a plain click reaches the row; Shift+click stops at the button.
    await page.click('#inner');
    await until(() => document.querySelector('#outer-count')?.textContent === '1');
    expect(name, 'events.stop-plain-propagates', (await text('#inner-count')) === '1' && (await text('#outer-count')) === '1',
      `${await text('#inner-count')} ${await text('#outer-count')}`);
    await page.click('#inner', { modifiers: ['Shift'] });
    await until(() => document.querySelector('#inner-count')?.textContent === '2');
    await page.waitForTimeout(100);
    expect(name, 'events.stop-shift-stops', (await text('#inner-count')) === '2' && (await text('#outer-count')) === '1',
      `${await text('#inner-count')} ${await text('#outer-count')}`);
    // custom with both flags: the link does not navigate and the row does not see the click.
    await page.click('#custom-link');
    await until(() => document.querySelector('#custom-count')?.textContent === '1');
    await page.waitForTimeout(100);
    expect(name, 'events.custom-handled', (await text('#custom-count')) === '1', await text('#custom-count'));
    expect(name, 'events.custom-prevents', !(await page.evaluate(() => location.hash)).includes('navigated'), await page.evaluate(() => location.hash));
    expect(name, 'events.custom-stops', (await text('#custom-outer-count')) === '0', await text('#custom-outer-count'));
    // A document subscription prevents Ctrl+S; typing in an input is untouched.
    await page.evaluate(() => { window.__keys = []; window.addEventListener('keydown', e => window.__keys.push([e.key, e.defaultPrevented])); });
    await page.focus('#field');
    await page.keyboard.type('abs');
    await until(() => document.querySelector('#field')?.value === 'abs');
    expect(name, 'events.doc-typing', (await page.inputValue('#field')) === 'abs', JSON.stringify(await page.inputValue('#field')));
    await page.keyboard.press('Control+s');
    expect(name, 'events.doc-ctrl-s-saves', await until(() => document.querySelector('#saves')?.textContent === '1'), await text('#saves'));
    await page.keyboard.type('x');
    await until(() => document.querySelector('#field')?.value === 'absx');
    const keys = await page.evaluate(() => window.__keys);
    expect(name, 'events.doc-ctrl-s-prevented', JSON.stringify(keys.filter(([k]) => k === 's')) === '[["s",false],["s",true]]', JSON.stringify(keys));
    expect(name, 'events.doc-other-keys-not-prevented', keys.filter(([k]) => k !== 's' && k !== 'Control').every(([, p]) => !p) && (await page.inputValue('#field')) === 'absx',
      `${JSON.stringify(keys)} ${await page.inputValue('#field')}`);
    // A failing decoder leaves the event untouched: the checkbox still toggles.
    await page.evaluate(() => { window.__check = []; window.addEventListener('click', e => window.__check.push(e.defaultPrevented)); });
    await page.click('#check');
    expect(name, 'events.failing-decoder-untouched', (await page.isChecked('#check')) && JSON.stringify(await page.evaluate(() => window.__check)) === '[false]',
      `${await page.isChecked('#check')} ${JSON.stringify(await page.evaluate(() => window.__check))}`);
    expect(name, 'events.failing-decoder-no-message', (await text('#never')) === '0', await text('#never'));
    // Handlers are delegated to the mount root in the bubble phase. Shift+click
    // stops at #inner: the target's own listeners (capture and bubble, as a web
    // component's would be) still run; the row's Lasm handler and the
    // document's bubble listener do not. A plain click reaches them all.
    await page.evaluate(() => {
      window.__stop = [];
      const inner = document.querySelector('#inner');
      inner.addEventListener('click', () => window.__stop.push('target-capture'), true);
      inner.addEventListener('click', () => window.__stop.push('target'));
      document.addEventListener('click', () => window.__stop.push('document'));
    });
    const outerBefore = await text('#outer-count');
    await page.click('#inner', { modifiers: ['Shift'] });
    await until(() => document.querySelector('#inner-count')?.textContent === '3');
    await page.waitForTimeout(100);
    const stopSeen = await page.evaluate(() => window.__stop.splice(0));
    expect(name, 'events.stop-target-listeners-run', JSON.stringify(stopSeen) === '["target-capture","target"]', JSON.stringify(stopSeen));
    expect(name, 'events.stop-ancestor-handler-skipped', (await text('#outer-count')) === outerBefore, `${outerBefore} → ${await text('#outer-count')}`);
    await page.click('#inner');
    await until(want => document.querySelector('#outer-count')?.textContent === want, String(Number(outerBefore) + 1));
    const plainSeen = await page.evaluate(() => window.__stop.splice(0));
    expect(name, 'events.plain-reaches-document', JSON.stringify(plainSeen) === '["target-capture","target","document"]', JSON.stringify(plainSeen));
    // Nested handlers run innermost first, after the target's own listener
    // (which sees the log before Lean has handled the click).
    await page.evaluate(() => {
      window.__nest = [];
      document.querySelector('#nest-inner').addEventListener('click', () => window.__nest.push(document.querySelector('#nest-log').textContent));
    });
    await page.click('#nest-inner');
    await until(() => document.querySelector('#nest-log')?.textContent !== '');
    expect(name, 'events.nested-innermost-first', (await text('#nest-log')) === 'inner mid outer', await text('#nest-log'));
    const nestSeen = await page.evaluate(() => window.__nest);
    expect(name, 'events.nested-after-target-listener', JSON.stringify(nestSeen) === '[""]', JSON.stringify(nestSeen));
    // Focus does not bubble (a capture listener takes it): the handler runs, and
    // its stopPropagation does not keep the input's own focus listener from running.
    await page.evaluate(() => { window.__focus = []; document.querySelector('#focus-me').addEventListener('focus', () => window.__focus.push('target')); });
    await page.focus('#focus-me');
    await until(() => document.querySelector('#focused')?.textContent === '1');
    expect(name, 'events.focus-handled', (await text('#focused')) === '1', await text('#focused'));
    expect(name, 'events.focus-target-listener-runs', JSON.stringify(await page.evaluate(() => window.__focus)) === '["target"]',
      JSON.stringify(await page.evaluate(() => window.__focus)));
    expect(name, 'events.no-errors', noErrors(consoleLines), errorLines(consoleLines));
  } finally { report.apps[name].console = consoleLines.slice(-50); await context.close(); }
}

export const uiChecks = { uicounter: counter, todomvc, bench, demo, uievents: events };
