// The lasm:ui-dom applier (src/browser/ui-dom.mjs) against a DOM implementation
// (happy-dom): the patch frames Lean's diff and encoder write
// (test/fixtures/ui/patches.json, from test/ui/Fixtures.lean) must produce the
// DOM of each view; hydration must adopt server-rendered nodes; events must be
// delegated with the declared fields; subscriptions, ports and navigation must
// reach Lean.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { Window } from 'happy-dom';
import { createUi } from '../src/browser/ui-dom.mjs';

const scenarios = JSON.parse(readFileSync(new URL('./fixtures/ui/patches.json', import.meta.url), 'utf8'));
const unhex = h => Uint8Array.from(h.match(/../g) ?? [], b => parseInt(b, 16));

function page() {
  const window = new Window({ url: 'https://app.test/start' });
  const root = window.document.createElement('div');
  window.document.body.appendChild(root);
  return { window, document: window.document, root };
}

// The DOM in the canonical form of test/ui/Fixtures.lean, reading the props,
// styles and listeners the expected form names.
function canon(n, expected) {
  if (n.nodeType === 3) return { t: n.data };
  const ns = { 'http://www.w3.org/1999/xhtml': 'html', 'http://www.w3.org/2000/svg': 'svg' }[n.namespaceURI];
  const attrs = {};
  for (const a of n.attributes) if (a.name !== 'style' && a.name !== 'hidden') attrs[a.name] = a.value;
  const props = {};
  for (const k of Object.keys(expected?.props ?? {})) props[k] = n[k];
  const styles = {};
  for (let i = 0; i < n.style.length; i++) styles[n.style[i]] = n.style.getPropertyValue(n.style[i]);
  const on = {};
  for (const [e, l] of Object.entries(n.$l ?? {})) on[e] = String(Boolean(l & 1));
  const children = [...n.childNodes].map((c, i) => canon(c, expected?.children?.[i]));
  return { tag: n.localName, ns, attrs, props, styles, on, children };
}
const sortKeys = x => Array.isArray(x) ? x.map(sortKeys) : x && typeof x === 'object'
  ? Object.fromEntries(Object.keys(x).sort().map(k => [k, sortKeys(x[k])])) : x;
const expectedForm = dom => {
  // hidden is checked as a property; the attribute it reflects is not compared.
  const strip = d => d.t !== undefined ? d : { ...d, attrs: Object.fromEntries(Object.entries(d.attrs).filter(([k]) => k !== 'hidden')), children: d.children.map(strip) };
  return sortKeys(strip(dom));
};

test('patch frames from Lean produce the DOM of each view', () => {
  let frames = 0;
  for (const [i, s] of scenarios.entries()) {
    const { root } = page();
    const ui = createUi({ root });
    for (const [j, f] of s.frames.entries()) {
      ui.applyForTest(unhex(f.patch));
      frames++;
      assert.equal(root.childNodes.length, 1, `scenario ${i} frame ${j}: one root child`);
      assert.deepEqual(sortKeys(canon(root.firstChild, f.dom)), expectedForm(f.dom), `scenario ${i} frame ${j}`);
    }
    // Every live node is in the table, and no removed node is.
    let count = 0;
    const walk = n => { count++; for (const c of n.childNodes) walk(c); };
    walk(root.firstChild);
    assert.equal(ui.stats().nodes, count, `scenario ${i}: id table size`);
  }
  assert.ok(frames >= 400);
});

test('hydration adopts the server-rendered DOM', () => {
  let adopted = 0;
  for (const [i, s] of scenarios.entries()) {
    const { root } = page();
    root.innerHTML = s.ssr;
    const before = root.firstChild;
    const ui = createUi({ root, hydrate: true });
    ui.applyForTest(unhex(s.frames[0].patch));
    assert.deepEqual(sortKeys(canon(root.firstChild, s.frames[0].dom)), expectedForm(s.frames[0].dom), `scenario ${i}`);
    if (root.firstChild === before) adopted++;
    for (const f of s.frames.slice(1)) ui.applyForTest(unhex(f.patch));
    assert.deepEqual(sortKeys(canon(root.firstChild, s.frames.at(-1).dom)), expectedForm(s.frames.at(-1).dom), `scenario ${i} after hydration`);
  }
  assert.ok(adopted > scenarios.length / 2, `adopted ${adopted} of ${scenarios.length} roots`);
});

// A hand-written frame: <ul><li onClick (decoder: target.id, currentTarget.id)> <b>x</b></li></ul>
function enc() {
  const out = [];
  const v = n => { while (n >= 128) { out.push(n % 128 + 128); n = Math.floor(n / 128); } out.push(n); };
  const s = t => { const b = new TextEncoder().encode(t); v(b.length); out.push(...b); };
  const name = t => { out.push(1); s(t); };
  return { out, v, s, name, byte: b => out.push(b) };
}

test('events are delegated, with declared fields, bubbling and options', async () => {
  const { root, window } = page();
  const ui = createUi({ root });
  const calls = [];
  ui.module.connect({ event: (path, type, cs) => { calls.push({ path, type, cs }); return false; }, frame: () => new Uint8Array(0) });
  const e = enc();
  e.byte(7); e.v(0); e.v(2); e.v(2); e.s('target'); e.s('id'); e.v(2); e.s('currentTarget'); e.s('id'); // decoder 0
  e.byte(1); e.v(0); e.v(0);                                  // insert under root, append
  e.byte(1); e.v(1); e.name('ul'); e.v(1); e.byte(5); e.name('click'); e.v(0); e.v(0); e.v(1);
  e.byte(1); e.v(2); e.name('li'); e.v(2); e.byte(0); e.name('id'); e.s('item'); e.byte(5); e.name('click'); e.v(0); e.v(2); e.v(1);
  e.byte(1); e.v(3); e.name('b'); e.v(1); e.byte(0); e.name('id'); e.s('bold'); e.v(1);
  e.byte(0); e.v(4); e.s('x');
  ui.applyForTest(Uint8Array.from(e.out));
  assert.equal(root.innerHTML, '<ul><li id="item"><b id="bold">x</b></li></ul>');
  const b = root.querySelector('#bold');
  b.dispatchEvent(new window.MouseEvent('click', { bubbles: true }));
  // The li stops propagation: the ul's handler is not called.
  assert.deepEqual(calls, [{ path: [1, 2, 3], type: 'click', cs: [1, ['bold', 'item']] }]);
  calls.length = 0;
  root.querySelector('ul').dispatchEvent(new window.MouseEvent('click', { bubbles: true }));
  assert.deepEqual(calls, [{ path: [1], type: 'click', cs: [0, ['', '']] }]);
});

test('frames are batched on animation frames and subscriptions fire', async () => {
  const { root, window } = page();
  const ui = createUi({ root, flags: { n: 1 } });
  assert.deepEqual(ui.module.options().flags, { n: 1 });
  let frames = 0;
  const subs = [];
  ui.module.connect({ frame: () => { frames++; return new Uint8Array(0); }, sub: (id, values) => { subs.push([id, values]); return true; },
    receive: v => { subs.push(['receive', v]); return false; }, url: href => { subs.push(['url', href]); return false; }, application: true });
  ui.module.schedule(); ui.module.schedule();
  await new Promise(r => window.requestAnimationFrame(r));
  await new Promise(r => window.requestAnimationFrame(r));
  assert.equal(frames, 1);
  ui.module.sub(7, ['window', 'resize', [['currentTarget', 'innerWidth']], false, false]);
  window.dispatchEvent(new window.Event('resize'));
  assert.deepEqual(subs.at(-1), [7, [window.innerWidth]]);
  ui.module.sub(8, ['port', 'inbox']);
  ui.ports.inbox.send({ a: 1 });
  assert.deepEqual(subs.at(-1), [8, [{ a: 1 }]]);
  ui.module.unsub(8);
  ui.ports.inbox.send(2);
  assert.deepEqual(subs.at(-1), [8, [{ a: 1 }]]);
  const out = [];
  ui.ports.outbox.subscribe(v => out.push(v));
  ui.module.portOut('outbox', 'hi');
  assert.deepEqual(out, ['hi']);
  ui.send(42);
  assert.deepEqual(subs.at(-1), ['receive', 42]);
  ui.module.navigate('/posts/3?x=1', false);
  assert.equal(window.location.href, 'https://app.test/posts/3?x=1');
  assert.deepEqual(subs.at(-1), ['url', 'https://app.test/posts/3?x=1']);
  ui.module.storageSet('local', 'k', 'v');
  assert.equal(ui.module.storageGet('local', 'k'), 'v');
  ui.module.storageRemove('local', 'k');
  assert.equal(ui.module.storageGet('local', 'k'), null);
  ui.unmount();
  await window.happyDOM.close();
});

test('same-origin link clicks navigate in place when the app routes', () => {
  const { root, window } = page();
  const ui = createUi({ root });
  const urls = [];
  ui.module.connect({ url: href => { urls.push(href); return false; }, frame: () => new Uint8Array(0), application: true });
  root.innerHTML = '<a id="in" href="/about">About</a><a id="out" href="https://elsewhere.test/">Away</a>';
  const inside = new window.MouseEvent('click', { bubbles: true, cancelable: true, button: 0 });
  root.querySelector('#in').dispatchEvent(inside);
  assert.equal(inside.defaultPrevented, true);
  assert.deepEqual(urls, ['https://app.test/about']);
  const outside = new window.MouseEvent('click', { bubbles: true, cancelable: true, button: 0 });
  root.querySelector('#out').dispatchEvent(outside);
  assert.equal(outside.defaultPrevented, false);
  assert.deepEqual(urls, ['https://app.test/about']);
});
