// The lasm:ui-dom applier (src/lasm-modules/ui-dom.mjs), op by op, against
// happy-dom: hand-encoded patch frames in the format of library/Lasm/UI/Encode.lean
// (docs/BROWSER.md "Patch protocol"), and the commands, subscriptions, events and
// navigation Lean asks for. test/ui-dom.test.mjs replays the frames Lean itself
// writes; this file covers each case of the decoder and the runtime on its own,
// including the edges those frames do not reach (written to kill the surviving
// mutants of docs/TESTING.md#mutation-testing).
import test from 'node:test';
import assert from 'node:assert/strict';
import { Window } from 'happy-dom';
import * as uiDom from '../src/lasm-modules/ui-dom.mjs';

const { createUi, lasmInstance } = uiDom;
const XHTML = 'http://www.w3.org/1999/xhtml', SVG = 'http://www.w3.org/2000/svg', MATHML = 'http://www.w3.org/1998/Math/MathML';

function page(url = 'https://app.test/start') {
  const window = new Window({ url });
  const root = window.document.createElement('div');
  window.document.body.appendChild(root);
  const errors = [];
  window.addEventListener('error', event => errors.push(event.error ?? event.message));
  return { window, document: window.document, root, errors };
}
// A window whose listed members are replaced (the rest come from happy-dom's).
const windowWith = (window, overrides) => new Proxy(window, {
  get: (target, key) => key in overrides ? overrides[key] : (v => typeof v === 'function' ? v.bind(target) : v)(Reflect.get(target, key)),
  has: (target, key) => key in overrides || key in target,
});
const nextFrame = window => new Promise(resolve => window.requestAnimationFrame(resolve));
const tick = (ms = 0) => new Promise(resolve => setTimeout(resolve, ms));

// The encoder of library/Lasm/UI/Encode.lean, by hand.
class Frame {
  bytes = [];
  byte(b) { this.bytes.push(b); return this; }
  v(n) { while (n >= 128) { this.bytes.push(n % 128 + 128); n = Math.floor(n / 128); } this.bytes.push(n); return this; }
  raw(t) { const b = new TextEncoder().encode(t); this.v(b.length); this.bytes.push(...b); return this; }
  // Names and values: 0 = literal, interned; 1 = literal, not interned; k > 1 = table entry k - 2.
  lit(t, intern = false) { return this.v(intern ? 0 : 1).raw(t); }
  ref(k) { return this.v(k + 2); }
  // Attribute ops.
  attr(a, value) { return this.byte(0).lit(a).lit(value); }
  prop(a, value) { return this.byte(1).lit(a).lit(value); }
  propFalse(a) { return this.byte(2).lit(a); }
  propTrue(a) { return this.byte(3).lit(a); }
  style(a, value) { return this.byte(4).lit(a).lit(value); }
  on(event, decoder) { return this.byte(5).lit(event).v(decoder); }
  removeAttr(a) { return this.byte(8).lit(a); }
  resetProp(a) { return this.byte(9).lit(a); }
  removeStyle(a) { return this.byte(10).lit(a); }
  off(event) { return this.byte(11).lit(event); }
  // Nodes: el(id, tag, attrs => …, [children]) with children as functions of the frame.
  text(id, t) { return this.byte(0).v(id).raw(t); }
  el(id, tag, attrs = () => 0, children = [], kind = 1) {
    this.byte(kind).v(id).lit(tag);
    const count = new Frame(); const n = attrs(count) || 0;
    this.v(n); this.bytes.push(...count.bytes);
    this.v(children.length); for (const child of children) child(this);
    return this;
  }
  // Frame ops.
  insert(parent, before, node) { this.byte(1).v(parent).v(before); node(this); return this; }
  move(parent, id, before) { return this.byte(2).v(parent).v(id).v(before); }
  remove(id) { return this.byte(3).v(id); }
  clear(parent) { return this.byte(4).v(parent); }
  setText(id, t) { return this.byte(5).v(id).raw(t); }
  attrs(id, n, ops) { this.byte(6).v(id).v(n); ops(this); return this; }
  decoder(d, paths) { this.byte(7).v(d).v(paths.length); for (const p of paths) { this.v(p.length); for (const s of p) this.raw(s); } return this; }
  get u8() { return Uint8Array.from(this.bytes); }
}
const frame = () => new Frame();

test('varints of every width address nodes (ids of 1, 2 and 3 bytes, continuation bytes of 0)', () => {
  const { root } = page();
  const ui = createUi({ root });
  // 16384 is [128, 128, 1]: a continuation byte whose value bits are all zero.
  for (const id of [5, 300, 16384, 2_100_000]) {
    ui.applyForTest(frame().insert(0, 0, f => f.el(id, 'p', () => 0, [f => f.text(id + 1, 'x')])).u8);
    ui.applyForTest(frame().setText(id + 1, `id ${id}`).u8);
    assert.equal(root.lastChild.textContent, `id ${id}`);
    assert.equal(root.lastChild.$i, id);
  }
  assert.equal(root.innerHTML, '<p>id 5</p><p>id 300</p><p>id 16384</p><p>id 2100000</p>');
});

test('malformed frames fail with a Lasm.UI error that names the problem (test/fuzz/regressions/ui-patch)', () => {
  const { root } = page();
  const ui = createUi({ root });
  const fails = (bytes, message) => assert.throws(() => ui.applyForTest(Uint8Array.from(bytes)), { message });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'p', () => 0, [f => f.text(2, 'x')])).u8);
  // A frame that ends where a varint starts, inside one, or inside a string.
  fails([5], 'Lasm.UI: truncated patch at byte 1');
  fails([5, 0x80], 'Lasm.UI: truncated patch at byte 2');
  fails([5, 0x82, 0x80], 'Lasm.UI: truncated patch at byte 3');
  fails([5, 2, 5, 97, 98], 'Lasm.UI: truncated patch at byte 3');
  fails([5, 2, 30, 97], 'Lasm.UI: truncated patch at byte 3');
  // The last byte of a string may be the frame's last byte.
  ui.applyForTest(Uint8Array.from([5, 2, 2, 97, 98]));
  assert.equal(root.textContent, 'ab');
  // An insert without its node, and a node kind past MathML (3).
  fails([1, 0, 0], 'Lasm.UI: truncated patch at byte 3');
  fails([1, 0, 0, 4, 9], 'Lasm.UI: bad node kind 4 at byte 3');
  fails([1, 0, 0, 0xff, 9], 'Lasm.UI: bad node kind 255 at byte 3');
  // Name and value references past their tables (one name and one value interned here).
  ui.applyForTest(frame().attrs(1, 1, f => f.byte(0).lit('class', true).lit('big', true)).u8);
  assert.equal(root.firstChild.getAttribute('class'), 'big');
  ui.applyForTest(frame().attrs(1, 1, f => f.byte(0).ref(0).ref(0)).u8);
  fails(frame().attrs(1, 1, f => f.byte(0).ref(1).ref(0)).bytes, 'Lasm.UI: no name 1');
  fails(frame().attrs(1, 1, f => f.byte(0).ref(0).ref(1)).bytes, 'Lasm.UI: no value 1');
  fails(frame().attrs(1, 1, f => f.byte(0).ref(5).ref(0)).bytes, 'Lasm.UI: no name 5');
  // Attribute ops on a text node.
  fails(frame().attrs(2, 1, f => f.attr('title', 't')).bytes, 'Lasm.UI: node 2 is not an element');
  fails(frame().attrs(2, 0, () => {}).bytes, 'Lasm.UI: node 2 is not an element');
  // None of it changed the DOM.
  assert.equal(root.innerHTML, '<p class="big">ab</p>');
});

test('strings: short and long, ASCII and not, including a short one that starts outside ASCII', () => {
  const { root } = page();
  const ui = createUi({ root });
  const texts = ['', 'plain', 'é', 'éa', 'aé', 'x'.repeat(23), 'é'.repeat(12), 'y'.repeat(24), 'z'.repeat(200) + 'ü', '\u{1F600} ok', '\x7f'];
  texts.forEach((t, i) => ui.applyForTest(frame().insert(0, 0, f => f.el(10 + 2 * i, 'span', f => (f.attr('title', t), 1), [f => f.text(11 + 2 * i, t)])).u8));
  assert.deepEqual([...root.childNodes].map(n => n.textContent), texts);
  assert.deepEqual([...root.childNodes].map(n => n.getAttribute('title')), texts);
});

test('names and values: interned literals enter the tables in order; plain literals do not', () => {
  const { root } = page();
  const ui = createUi({ root });
  const f = frame();
  // class (interned → name 0), data-x (not interned), value "big" (interned → value 0), "plain" (not).
  f.insert(0, 0, f => f.el(1, 'div', f => { f.byte(0).lit('class', true).lit('big', true); f.byte(0).lit('data-x').lit('plain'); return 2; }));
  // References: name 0 = class, value 0 = big; a second interned name becomes name 1.
  f.insert(0, 0, f => f.el(2, 'div', f => { f.byte(0).ref(0).ref(0); f.byte(0).lit('id', true).lit('second', true); return 2; }));
  f.insert(0, 0, f => f.el(3, 'div', f => { f.byte(0).ref(1).ref(1); return 1; }));
  ui.applyForTest(f.u8);
  assert.equal(root.innerHTML, '<div class="big" data-x="plain"></div><div class="big" id="second"></div><div id="second"></div>');
  assert.deepEqual({ names: ui.stats().names }, { names: 2 });
  // The tables persist across frames; tag names share them.
  ui.applyForTest(frame().insert(0, 0, f => f.byte(1).v(4).ref(0).v(0).v(0)).u8);
  assert.equal(root.lastChild.localName, 'class');
});

test('attribute ops set and reset attributes, properties, styles and listeners', () => {
  const { root, window } = page();
  const ui = createUi({ root });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'input', f => (f.attr('type', 'checkbox'), f.prop('value', 'v1'),
    f.propTrue('checked'), f.style('color', 'red'), f.attr('tabindex', '3'), 5))).u8);
  const input = root.firstChild;
  assert.equal(input.getAttribute('type'), 'checkbox');
  assert.equal(input.value, 'v1');
  assert.equal(input.checked, true);
  assert.equal(input.style.getPropertyValue('color'), 'red');
  ui.applyForTest(frame().attrs(1, 2, f => { f.propFalse('checked'); f.removeStyle('color'); }).u8);
  assert.equal(input.checked, false);
  assert.equal(input.style.getPropertyValue('color'), '');
  // Op 9 resets a property to the empty value of its type.
  input.checked = true; input.tabIndex = 7;
  ui.applyForTest(frame().attrs(1, 4, f => { f.resetProp('checked'); f.resetProp('tabIndex'); f.resetProp('value'); f.removeAttr('type'); }).u8);
  assert.equal(input.checked, false);
  assert.equal(input.tabIndex, 0);
  assert.equal(input.value, '');
  assert.equal(input.hasAttribute('type'), false);
  // A custom property of each type, to see op 9's choice exactly.
  Object.assign(input, { flag: true, count: 4, label: 'x' });
  ui.applyForTest(frame().attrs(1, 3, f => { f.resetProp('flag'); f.resetProp('count'); f.resetProp('label'); }).u8);
  assert.deepEqual([input.flag, input.count, input.label], [false, 0, '']);
  // Removing a listener from an element that has none is not an error.
  ui.applyForTest(frame().attrs(1, 1, f => f.off('click')).u8);
  assert.throws(() => ui.applyForTest(frame().byte(6).v(1).v(1).byte(7).u8), /Lasm.UI: bad attribute op 7/);
  assert.throws(() => ui.applyForTest(frame().byte(6).v(1).v(1).byte(12).u8), /Lasm.UI: bad attribute op 12/);
  void window;
});

test('property ops write only when the value changes (a caret or selection is not reset)', () => {
  const { root } = page();
  const ui = createUi({ root });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'div')).u8);
  const el = root.firstChild, writes = [];
  let label = 'same', on = false;
  Object.defineProperty(el, 'label', { get: () => label, set: x => { writes.push(['label', x]); label = x; } });
  Object.defineProperty(el, 'on', { get: () => on, set: x => { writes.push(['on', x]); on = x; } });
  ui.applyForTest(frame().attrs(1, 2, f => { f.prop('label', 'same'); f.propFalse('on'); }).u8);
  assert.deepEqual(writes, []);
  ui.applyForTest(frame().attrs(1, 2, f => { f.propTrue('on'); f.propTrue('on'); }).u8);
  assert.deepEqual(writes, [['on', true]]);
  ui.applyForTest(frame().attrs(1, 2, f => { f.propFalse('on'); f.prop('label', 'new'); }).u8);
  assert.deepEqual(writes, [['on', true], ['on', false], ['label', 'new']]);
});

test('element kinds: HTML, SVG and MathML namespaces', () => {
  const { root } = page();
  const ui = createUi({ root });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'div')).insert(0, 0, f => f.el(2, 'svg', () => 0, [], 2))
    .insert(0, 0, f => f.el(3, 'math', () => 0, [], 3)).u8);
  assert.deepEqual([...root.childNodes].map(n => [n.localName, n.namespaceURI]), [['div', XHTML], ['svg', SVG], ['math', MATHML]]);
});

test('frame ops: insert before, move, remove, clear, set text, and the id table', async () => {
  const { root } = page();
  const ui = createUi({ root });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'ul', () => 0, [f => f.el(2, 'li', () => 0, [f => f.text(3, 'a')]),
    f => f.el(4, 'li', () => 0, [f => f.text(5, 'b')])])).u8);
  const ul = root.firstChild;
  // Insert before node 4 (encoded as 4 + 1).
  ui.applyForTest(frame().insert(1, 5, f => f.el(6, 'li', () => 0, [f => f.text(7, 'c')])).u8);
  assert.equal(ul.textContent, 'acb');
  ui.applyForTest(frame().move(1, 2, 0).u8);
  assert.equal(ul.textContent, 'cba');
  ui.applyForTest(frame().move(1, 2, 7).setText(5, 'B').u8);
  assert.equal(ul.textContent, 'acB');
  assert.equal(ui.stats().nodes, 7);
  ui.applyForTest(frame().remove(6).u8);
  assert.equal(ul.textContent, 'aB');
  assert.equal(ui.stats().nodes, 5);
  assert.throws(() => ui.applyForTest(frame().setText(7, 'gone').u8), /Lasm.UI: no node 7/);
  ui.applyForTest(frame().clear(1).u8);
  assert.equal(ul.childNodes.length, 0);
  assert.equal(ui.stats().nodes, 1);
  for (const id of [2, 3, 4, 5]) assert.throws(() => ui.applyForTest(frame().setText(id, '').u8), new RegExp(`no node ${id}$`));
  // Removed subtrees leave the table without a call to stats() too, after the frame.
  ui.applyForTest(frame().insert(1, 0, f => f.el(8, 'li', () => 0, [f => f.text(9, 'x')])).remove(8).u8);
  await tick(5);
  assert.throws(() => ui.applyForTest(frame().setText(9, '').u8), /no node 9/);
  assert.throws(() => ui.applyForTest(frame().byte(9).u8), /^Error: Lasm.UI: bad patch op 9 at byte 0$/);
  assert.throws(() => ui.applyForTest(frame().setText(1, 'x').byte(0).u8), /bad patch op 0 at byte 4$/);
});

test('without hydrate, existing children of the root are left alone and inserts append', () => {
  const { root } = page();
  root.innerHTML = '<p>static</p>';
  const ui = createUi({ root });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'p', () => 0, [f => f.text(2, 'app')])).u8);
  assert.equal(root.innerHTML, '<p>static</p><p>app</p>');
});

test('hydration adopts matching nodes in place, skips comments, replaces mismatches and drops leftovers', async () => {
  const { root, window } = page();
  root.innerHTML = '<!--ssr--><div id="a"><!--x-->hello<b>bold</b><i>gone</i></div><p>leftover</p>';
  const div = root.querySelector('#a'), hello = div.childNodes[1], b = div.querySelector('b');
  const records = [];
  new window.MutationObserver(list => records.push(...list)).observe(root, { subtree: true, characterData: true });
  const ui = createUi({ root, hydrate: true });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'div', f => (f.attr('id', 'a'), 1), [f => f.text(2, 'hello'),
    f => f.el(3, 'b', () => 0, [f => f.text(4, 'bold')])])).u8);
  await tick();
  assert.equal(root.innerHTML, '<div id="a">hello<b>bold</b></div>');
  assert.equal(root.firstChild, div);
  assert.equal(div.firstChild, hello);
  assert.equal(div.childNodes[1], b);
  assert.equal(records.length, 0, 'matching text is not rewritten');
  // Adopted nodes are in the id table.
  ui.applyForTest(frame().setText(2, 'hi').u8);
  assert.equal(hello.data, 'hi');
  // Hydration ends with the first frame: a later insert at the end appends.
  ui.applyForTest(frame().insert(0, 0, f => f.el(5, 'div', f => (f.attr('id', 'a'), 1))).u8);
  assert.equal(root.childNodes.length, 2);
});

test('hydration: text that differs is updated in the adopted node, and a different element is replaced', () => {
  const { root } = page();
  root.innerHTML = '<div>old<span>s</span></div>';
  const div = root.firstChild, text = div.firstChild, span = div.lastChild;
  const ui = createUi({ root, hydrate: true });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'div', () => 0, [f => f.text(2, 'new'), f => f.el(3, 'em', () => 0, [f => f.text(4, 's')])])).u8);
  assert.equal(div.firstChild, text);
  assert.equal(text.data, 'new');
  assert.notEqual(div.lastChild, span);
  assert.equal(root.innerHTML, '<div>new<em>s</em></div>');
  // An element whose server-rendered match is a text node is created.
  const p2 = page();
  p2.root.innerHTML = 'text first';
  createUi({ root: p2.root, hydrate: true }).applyForTest(frame().insert(0, 0, f => f.el(1, 'p')).u8);
  assert.equal(p2.root.innerHTML, '<p></p>');
});

test('hydration: inserts below an adopted node and before a sibling do not adopt root children', () => {
  const { root } = page();
  root.innerHTML = '<div>a</div>';
  const ui = createUi({ root, hydrate: true });
  ui.applyForTest(frame().insert(0, 0, f => f.el(1, 'div', () => 0, [f => f.text(2, 'a')]))
    .insert(1, 0, f => f.el(3, 'span'))
    .insert(0, 2, f => f.el(4, 'header')).u8);
  assert.equal(root.innerHTML, '<header></header><div>a<span></span></div>');
});

test('hydration: an empty first frame keeps the server-rendered DOM until the app draws', async () => {
  const { root, window } = page();
  root.innerHTML = '<p>ssr</p>';
  const ui = createUi({ root, hydrate: true });
  const frames = [new Uint8Array(0), frame().insert(0, 0, f => f.el(1, 'p', () => 0, [f => f.text(2, 'ssr')])).u8];
  ui.module.connect({ frame: () => frames.shift() });
  ui.module.apply(new Uint8Array(0));
  ui.module.schedule();
  await nextFrame(window); await nextFrame(window);
  assert.equal(root.innerHTML, '<p>ssr</p>');
  const p = root.firstChild;
  ui.module.schedule();
  await nextFrame(window); await nextFrame(window);
  assert.equal(root.firstChild, p);
  ui.module.apply(frame().setText(2, 'live').u8);
  assert.equal(root.innerHTML, '<p>live</p>');
});

// A list with handlers: ul(1) > li#item(2) > b#bold(3) > "x"(4). ul, li and b
// are decoder ids (null: no handler). Lean's answer is `answer` (a number, or a
// function of the call): bit 1 a frame, 2 preventDefault, 4 stopPropagation.
function withList({ ul = 0, li = 0, b = null, decoders = [[['target', 'id'], ['currentTarget', 'id']]] } = {}) {
  const p = page();
  const ui = createUi({ root: p.root });
  const calls = [];
  let answer = 0, frames = 0;
  ui.module.connect({ event: (path, type, cs) => { calls.push({ path, type, cs }); return typeof answer === 'function' ? answer(cs) : answer; },
    frame: () => { frames++; return new Uint8Array(0); } });
  const f = frame();
  decoders.forEach((paths, d) => f.decoder(d, paths));
  f.insert(0, 0, f => f.el(1, 'ul', f => ul === null ? 0 : (f.on('click', ul), 1), [
    f => f.el(2, 'li', f => (f.attr('id', 'item'), li === null ? 1 : (f.on('click', li), 2)), [
      f => f.el(3, 'b', f => (f.attr('id', 'bold'), b === null ? 1 : (f.on('click', b), 2)), [f => f.text(4, 'x')])])]));
  ui.applyForTest(f.u8);
  return { ...p, ui, calls, setAnswer: x => { answer = x; }, frames: () => frames };
}
const click = (window, el, init = {}) => { const e = new window.MouseEvent('click', { bubbles: true, cancelable: true, ...init }); el.dispatchEvent(e); return e; };

test('events: every handler on the path is called, innermost first, with its decoder', () => {
  const t = withList({ ul: 1, li: 0, decoders: [[['target', 'id']], [['type'], ['bubbles'], ['detail'], ['relatedTarget']]] });
  click(t.window, t.root.querySelector('#bold'));
  assert.deepEqual(t.calls, [{ path: [1, 2, 3], type: 'click', cs: [1, ['bold'], 0, ['click', true, 0, null]] }]);
});

test('events: decoded fields are primitives; objects and missing fields become undefined', () => {
  const t = withList({ ul: null, li: 0, decoders: [[['target'], ['target', 'nope', 'deeper'], ['currentTarget', 'isConnected'], ['view', 'none'], ['target', 'id', 'length']]] });
  // view is null here: a path through null stops at null.
  click(t.window, t.root.querySelector('#bold'), { view: null });
  assert.deepEqual(t.calls[0].cs, [1, [undefined, undefined, true, null, 4]]);
});

test('events: Lean decides preventDefault and stopPropagation for each event', () => {
  const outside = [];
  const t = withList({ ul: 0, li: 0 });
  t.document.addEventListener('click', () => outside.push('document'));
  // Every handler on the path is sent: Lean, not the applier, decides where to stop.
  for (const [answer, prevented, reached] of [[0, false, true], [2, true, true], [4, false, false], [6, true, false], [1, false, true], [3, true, true], [7, true, false]]) {
    t.setAnswer(answer);
    outside.length = 0;
    const e = click(t.window, t.root.querySelector('#bold'));
    assert.equal(e.defaultPrevented, prevented, `answer ${answer}: preventDefault`);
    assert.deepEqual(outside, reached ? ['document'] : [], `answer ${answer}: propagation`);
    assert.deepEqual(t.calls.at(-1).cs.filter((_, i) => i % 2 === 0), [1, 0], 'both handlers, inner first');
  }
  // The decision depends on the event: here only clicks with Ctrl held.
  const s = withList({ ul: null, li: 0, decoders: [[['ctrlKey']]] });
  s.setAnswer(cs => cs[1][0] ? 2 + 4 : 0);
  const seen = [];
  s.document.addEventListener('click', () => seen.push('document'));
  assert.equal(click(s.window, s.root.querySelector('#bold'), { ctrlKey: true }).defaultPrevented, true);
  assert.equal(click(s.window, s.root.querySelector('#bold'), { ctrlKey: false }).defaultPrevented, false);
  assert.deepEqual(seen, ['document']);
});

test('events: Lean runs in the bubble phase at the root, after the listeners below it and before the page above it', async () => {
  const t = withList({ ul: null, li: 0 });
  const order = [];
  t.setAnswer(() => { order.push('lean'); return 2; });
  const bold = t.root.querySelector('#bold');
  bold.addEventListener('click', event => order.push(`target capture ${event.defaultPrevented}`), true);
  bold.addEventListener('click', event => order.push(`target ${event.defaultPrevented}`));
  t.root.querySelector('#item').addEventListener('click', () => order.push('ancestor'));
  t.document.addEventListener('click', event => order.push(`document ${event.defaultPrevented}`));
  click(t.window, bold);
  assert.deepEqual(order, ['target capture false', 'target false', 'ancestor', 'lean', 'document true']);
  order.length = 0;
  assert.equal(t.frames(), 0, 'no frame without bit 1');
  t.setAnswer(3);
  click(t.window, t.root.querySelector('#bold'));
  assert.equal(t.frames(), 1, 'a click with bit 1 renders at once');
});

test('events: a non-bubbling event reaches only a handler on its own target', () => {
  const t = withList({ ul: 0, li: 0 });
  t.root.querySelector('#bold').dispatchEvent(new t.window.MouseEvent('click', { bubbles: false }));
  assert.deepEqual(t.calls, []);
  t.root.querySelector('#item').dispatchEvent(new t.window.MouseEvent('click', { bubbles: false }));
  assert.deepEqual(t.calls.map(c => c.cs[0]), [1]);
});

test('events: a removed handler and an element without one call nothing', () => {
  const t = withList({ ul: null, li: 0 });
  t.ui.applyForTest(frame().attrs(2, 1, f => f.off('click')).u8);
  click(t.window, t.root.querySelector('#bold'));
  assert.deepEqual(t.calls, []);
});

test('events: nodes the applier did not create are not on the path', () => {
  const t = withList({ li: 0 });
  t.root.querySelector('#bold').insertAdjacentHTML('beforeend', '<i id="foreign">f</i>');
  click(t.window, t.root.querySelector('#foreign'));
  assert.deepEqual(t.calls[0].path, [1, 2, 3]);
});

test('events: a stop decided at the target lets the target\'s own listeners run, not the page above the root', () => {
  const t = withList({ li: 0, b: 0 });
  t.setAnswer(4);
  const seen = [];
  const bold = t.root.querySelector('#bold');
  bold.addEventListener('click', () => seen.push('target capture'), true);
  bold.addEventListener('click', () => seen.push('target'));
  t.document.addEventListener('click', () => seen.push('document'));
  t.window.addEventListener('click', () => seen.push('window'));
  click(t.window, bold);
  assert.deepEqual(seen, ['target capture', 'target']);
  assert.equal(t.calls.length, 1);
});

test('events: a listener below the root that stops the bubbling keeps the event from Lean (as with any root delegation)', () => {
  const t = withList({ li: 0 });
  t.root.querySelector('#bold').addEventListener('click', event => event.stopPropagation());
  click(t.window, t.root.querySelector('#bold'));
  assert.equal(t.calls.length, 0);
  // stopPropagation in the root's own capture phase stops it too.
  const u = withList({ li: 0 });
  u.root.addEventListener('click', event => event.stopPropagation(), true);
  click(u.window, u.root.querySelector('#bold'));
  assert.equal(u.calls.length, 0);
});

test('events: a non-bubbling event is taken in the capture phase; Lean\'s stop is not applied, preventDefault is', () => {
  const t = withList({ ul: 0, li: 0, b: 0 });
  const seen = [];
  const item = t.root.querySelector('#item');
  item.addEventListener('click', event => seen.push(`target ${event.defaultPrevented}`));
  for (const answer of [4, 6]) {
    t.setAnswer(answer);
    seen.length = 0;
    const e = new t.window.MouseEvent('click', { bubbles: false, cancelable: true });
    item.dispatchEvent(e);
    assert.deepEqual(seen, [`target ${answer === 6}`], `answer ${answer}`);
    assert.equal(e.defaultPrevented, answer === 6);
  }
  assert.deepEqual(t.calls.map(c => c.cs.filter((_, i) => i % 2 === 0)), [[1], [1]], 'only the target\'s handler');
  // A bubbling event is taken once, in the bubble phase, not also in the capture phase.
  t.calls.length = 0;
  click(t.window, t.root.querySelector('#bold'));
  assert.equal(t.calls.length, 1);
});

test('events: focus (which does not bubble) reaches the handler on its target', () => {
  const p = page();
  const ui = createUi({ root: p.root });
  const calls = [];
  ui.module.connect({ event: (path, type) => { calls.push([path, type]); return 4; }, frame: () => new Uint8Array(0) });
  ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'div', () => 0, [f => f.el(2, 'input', f => (f.on('focus', 0), 1))])).u8);
  const input = p.root.querySelector('input'), seen = [];
  input.addEventListener('focus', () => seen.push('target'));
  input.focus();
  assert.deepEqual(calls, [[[1, 2], 'focus']]);
  assert.deepEqual(seen, ['target']);
});

test('events before connect and after unmount reach nothing and raise nothing', () => {
  const { root, window, errors } = page();
  const ui = createUi({ root });
  ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'button', f => (f.on('click', 0), 1))).u8);
  click(window, root.firstChild);
  assert.deepEqual(errors, []);
});

test('discrete events render in the same task; continuous ones on the next animation frame; none without a change', async () => {
  const discrete = ['click', 'dblclick', 'auxclick', 'contextmenu', 'mousedown', 'mouseup', 'pointerdown', 'pointerup',
    'touchstart', 'touchend', 'keydown', 'keyup', 'keypress', 'input', 'change', 'beforeinput', 'submit', 'reset', 'focus', 'blur',
    'focusin', 'focusout', 'compositionend', 'paste', 'cut', 'copy', 'drop'];
  for (const type of [...discrete, 'mousemove']) {
    const { root, window } = page();
    const ui = createUi({ root });
    let frames = 0, answer = 1;
    ui.module.connect({ event: () => answer, frame: () => { frames++; return new Uint8Array(0); } });
    ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'div', f => (f.on(type, 0), 1))).u8);
    root.firstChild.dispatchEvent(new window.Event(type, { bubbles: true }));
    assert.equal(frames, type === 'mousemove' ? 0 : 1, type);
    await nextFrame(window); await nextFrame(window);
    assert.equal(frames, 1, `${type}: one render in all`);
    answer = 0;
    root.firstChild.dispatchEvent(new window.Event(type, { bubbles: true }));
    await nextFrame(window); await nextFrame(window);
    assert.equal(frames, 1, `${type}: no render without a change`);
    await window.happyDOM.close();
  }
});

// Conduit's e2e suite on the Lambda image (CI run 41236311299): a link clicked
// while an HTTP response's frame was still waiting changed the address one frame
// before the page. Lean answers "no new frame" then (it already asked for one).
test('discrete input and link clicks while a frame is waiting render it in the same task', async () => {
  for (const kind of ['click', 'link', 'mousemove']) {
    const { root, window } = page();
    const ui = createUi({ root });
    let frames = 0;
    ui.module.connect({ event: () => 0, url: () => false, frame: () => { frames++; return new Uint8Array(0); }, application: true });
    ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'div', f => (f.on(kind === 'link' ? 'click' : kind, 0), 1))).u8);
    // Nothing waiting, nothing changed: no render.
    root.firstChild.dispatchEvent(new window.Event(kind === 'link' ? 'click' : kind, { bubbles: true }));
    assert.equal(frames, 0, kind);
    ui.module.schedule();
    if (kind === 'link') {
      root.innerHTML = '<a id="l" href="/article/a">x</a>';
      click(window, root.querySelector('#l'));
      assert.equal(window.location.href, 'https://app.test/article/a');
    } else root.firstChild.dispatchEvent(new window.Event(kind, { bubbles: true }));
    assert.equal(frames, kind === 'mousemove' ? 0 : 1, `${kind}: the waiting frame is rendered with the input`);
    await nextFrame(window); await nextFrame(window);
    assert.equal(frames, kind === 'mousemove' ? 1 : 2, `${kind}: the animation frame still runs`);
    await window.happyDOM.close();
  }
});

test('an event raised while a patch is applied waits for the next frame (no re-entrant render)', async () => {
  const { root, window, errors } = page();
  window.customElements.define('x-fire', class extends window.HTMLElement {
    connectedCallback() { this.dispatchEvent(new window.Event('click', { bubbles: true })); }
  });
  const ui = createUi({ root });
  let frames = 0;
  const patches = [frame().insert(1, 0, f => f.el(2, 'x-fire')).u8];
  ui.module.connect({ event: () => 1, frame: () => { frames++; return patches.shift() ?? new Uint8Array(0); } });
  ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'div', f => (f.on('click', 0), 1))).u8);
  ui.module.schedule();
  await nextFrame(window); await nextFrame(window);
  assert.deepEqual(errors, []);
  assert.equal(root.innerHTML, '<div><x-fire></x-fire></div>');
  await nextFrame(window); await nextFrame(window);
  assert.equal(frames, 2);
});

test('renders: timings, history entries made with the frame, focus and blur after it, nothing after unmount', async () => {
  const { root, window, document } = page();
  const ui = createUi({ root });
  let frames = 0;
  const patches = [frame().insert(0, 0, f => f.el(1, 'input', f => (f.attr('id', 'name'), 1))).u8];
  ui.module.connect({ frame: () => { frames++; return patches.shift() ?? new Uint8Array(0); }, url: () => false });
  const before = performance.now();
  ui.module.focus('name', false);
  await nextFrame(window); await nextFrame(window);
  assert.equal(document.activeElement, root.firstChild);
  const { last } = ui.stats();
  assert.equal(last.frames, 1);
  assert.ok(last.bytes > 0);
  assert.ok(last.leanMs >= 0 && last.leanMs <= performance.now() - before, `leanMs ${last.leanMs}`);
  assert.ok(last.applyMs >= 0 && last.applyMs <= performance.now() - before, `applyMs ${last.applyMs}`);
  ui.module.focus('name', true);
  ui.module.focus('missing', false);
  await nextFrame(window); await nextFrame(window);
  assert.notEqual(document.activeElement, root.firstChild);
  // Cmd.replaceUrl replaces the entry; Cmd.pushUrl adds one; relative URLs resolve against the last queued one.
  const length = window.history.length;
  ui.module.navigate('/a/b', true);
  ui.module.navigate('c', false);
  await nextFrame(window); await nextFrame(window);
  assert.equal(window.location.href, 'https://app.test/a/c');
  assert.equal(window.history.length, length + 1);
  assert.equal(ui.stats().last.frames, 3);
  ui.unmount();
  ui.module.schedule();
  await nextFrame(window); await nextFrame(window);
  assert.equal(frames, 3);
});

test('navigate before connect queues the history entry for the first frame', async () => {
  const { root, window } = page();
  const ui = createUi({ root });
  ui.module.navigate('/early', false);
  const urls = [];
  ui.module.connect({ frame: () => new Uint8Array(0), url: href => { urls.push(href); return false; } });
  await nextFrame(window); await nextFrame(window);
  assert.equal(window.location.href, 'https://app.test/early');
  assert.deepEqual(urls, []);
});

test('commands: timeout and http results go back to Lean, and render only when Lean says so', async () => {
  const { root, window } = page();
  const requests = [];
  const fetch = async (url, init) => {
    requests.push([url, init]);
    if (url === '/fail') throw new Error('offline');
    if (url === '/odd') throw 'plain';
    return new window.Response('body text', { status: 201, statusText: 'Created', headers: { 'x-a': '1' } });
  };
  const ui = createUi({ root, window: windowWith(window, { fetch }) });
  let frames = 0;
  ui.module.connect({ frame: () => { frames++; return new Uint8Array(0); } });
  const results = [];
  ui.module.timeout(1, () => { results.push('timeout'); return true; });
  await tick(20);
  await nextFrame(window); await nextFrame(window);
  assert.deepEqual(results, ['timeout']);
  assert.equal(frames, 1);
  ui.module.timeout(1, () => { results.push('quiet'); return false; });
  await tick(20); await nextFrame(window); await nextFrame(window);
  assert.equal(frames, 1);
  const done = new Promise(resolve => {
    ui.module.http('POST', '/ok', [['content-type', 'text/plain']], 'hi', 'include', (...r) => { results.push(r); resolve(); return true; });
  });
  await done;
  assert.deepEqual(requests[0], ['/ok', { method: 'POST', headers: [['content-type', 'text/plain']], body: 'hi', credentials: 'include' }]);
  const [ok, status, statusText, headers, body] = results.at(-1);
  assert.deepEqual([ok, status, statusText, body], [true, 201, 'Created', 'body text']);
  assert.ok(headers.some(([k, v]) => k === 'x-a' && v === '1'), JSON.stringify(headers));
  await nextFrame(window); await nextFrame(window);
  assert.equal(frames, 2);
  for (const [url, message] of [['/fail', 'offline'], ['/odd', 'plain']]) {
    await new Promise(resolve => ui.module.http('GET', url, [], null, 'same-origin', (...r) => { results.push(r); resolve(); return false; }));
    assert.deepEqual(results.at(-1), [false, message]);
    assert.equal(requests.at(-1)[1].body, undefined);
  }
  // After unmount, late results are dropped.
  ui.module.timeout(1, () => { results.push('late'); return true; });
  let late = false;
  ui.module.http('GET', '/ok', [], null, 'omit', () => { late = true; return true; });
  ui.unmount();
  await tick(20);
  assert.equal(results.includes('late'), false);
  assert.equal(late, false);
});

test('commands: now, title, go, load, error, storage (local and session, and unavailable)', () => {
  const { root, window, document } = page();
  const calls = [];
  const throwing = { get localStorage() { throw new Error('denied'); }, get sessionStorage() { throw new Error('denied'); } };
  const ui = createUi({ root, window: windowWith(window, {
    history: { go: n => calls.push(['go', n]), pushState() {}, replaceState() {} },
    location: { href: 'https://app.test/', origin: 'https://app.test', assign: url => calls.push(['assign', url]) } }) });
  const t = Date.now();
  assert.ok(Math.abs(ui.module.now() - t) < 1000);
  ui.module.title('New title');
  assert.equal(document.title, 'New title');
  ui.module.go(-2);
  ui.module.load('https://elsewhere.test/');
  assert.deepEqual(calls, [['go', -2], ['assign', 'https://elsewhere.test/']]);
  const logged = [];
  const original = console.error;
  console.error = (...a) => logged.push(a.join(' '));
  try { ui.module.error('bad thing'); } finally { console.error = original; }
  assert.deepEqual(logged, ['[lasm:ui] bad thing']);
  const real = createUi({ root, window });
  real.module.storageSet('session', 'k', 's');
  real.module.storageSet('local', 'k', 'l');
  assert.equal(window.sessionStorage.getItem('k'), 's');
  assert.equal(window.localStorage.getItem('k'), 'l');
  assert.equal(real.module.storageGet('session', 'k'), 's');
  real.module.storageRemove('session', 'k');
  assert.equal(window.sessionStorage.getItem('k'), null);
  assert.equal(window.localStorage.getItem('k'), 'l');
  const denied = createUi({ root, window: windowWith(window, throwing) });
  denied.module.storageSet('local', 'k', 'v');
  denied.module.storageRemove('session', 'k');
  assert.equal(denied.module.storageGet('local', 'k'), null);
});

test('options: the URL defaults to http://localhost/ without a location; flags and hydrate pass through', () => {
  const { root, window } = page();
  assert.deepEqual(createUi({ root, window: windowWith(window, { location: undefined }) }).module.options(),
    { flags: null, url: 'http://localhost/', hydrate: false });
  assert.deepEqual(createUi({ root, flags: [1], hydrate: true }).module.options(), { flags: [1], url: 'https://app.test/start', hydrate: true });
});

test('without requestAnimationFrame, frames run on timers and frame subscriptions stop', async () => {
  const { root, window } = page();
  const ui = createUi({ root, window: windowWith(window, { requestAnimationFrame: undefined, cancelAnimationFrame: undefined }) });
  let frames = 0;
  const fired = [];
  ui.module.connect({ frame: () => { frames++; return new Uint8Array(0); }, sub: (id, values) => { fired.push(values[0]); return false; } });
  ui.module.schedule();
  await tick(60);
  assert.equal(frames, 1);
  ui.module.sub(1, ['frame']);
  await tick(80);
  assert.ok(fired.length >= 2, `${fired.length} timer frames`);
  assert.ok(fired.every(ts => typeof ts === 'number' && ts > 0));
  ui.module.unsub(1);
  const count = fired.length;
  await tick(60);
  assert.equal(fired.length, count);
});

test('subscriptions: every, frame, window and document events with their options; unsub and unknown kinds', async () => {
  const { root, window, document } = page();
  const ui = createUi({ root });
  const fired = [];
  let frames = 0;
  ui.module.connect({ frame: () => { frames++; return new Uint8Array(0); }, sub: (id, values) => { fired.push([id, values]); return id === 1 ? 1 : 0; } });
  ui.module.sub(1, ['every', 5]);
  await tick(30);
  const ticks = fired.filter(([id]) => id === 1);
  assert.ok(ticks.length >= 2, `${ticks.length} ticks`);
  assert.ok(ticks.every(([, [t]]) => Math.abs(t - Date.now()) < 1000));
  await nextFrame(window); await nextFrame(window);
  assert.ok(frames >= 1, 'a tick that changes the model renders');
  ui.module.unsub(1);
  await tick(5);
  const after = fired.length;
  await tick(30);
  assert.equal(fired.length, after);
  ui.module.sub(2, ['frame']);
  await nextFrame(window); await nextFrame(window); await nextFrame(window);
  const frameTicks = fired.filter(([id]) => id === 2);
  assert.ok(frameTicks.length >= 2 && frameTicks.every(([, [ts]]) => typeof ts === 'number'));
  ui.module.unsub(2);
  await nextFrame(window); await nextFrame(window);
  const stopped = fired.length;
  await nextFrame(window); await nextFrame(window);
  assert.equal(fired.length, stopped);
  // document and window events: Lean's answer decides preventDefault and stopPropagation.
  ui.module.sub(3, ['document', 'keydown', [['key'], ['currentTarget', 'nodeType']]]);
  const below = [];
  document.body.addEventListener('keydown', () => below.push('body'));
  const key = new window.KeyboardEvent('keydown', { key: 'Enter', cancelable: true, bubbles: true });
  document.dispatchEvent(key);
  assert.deepEqual(fired.at(-1), [3, ['Enter', 9]]);
  assert.equal(key.defaultPrevented, false, 'answer 0 prevents nothing');
  const window2 = page();
  const u2 = createUi({ root: window2.root });
  const seen = [];
  let answer = 0, frames2 = 0;
  u2.module.connect({ frame: () => { frames2++; return new Uint8Array(0); }, sub: (id, values) => { seen.push(values); return typeof answer === 'function' ? answer(values) : answer; } });
  u2.module.sub(4, ['window', 'custom', [['detail']]]);
  window2.window.addEventListener('custom', () => seen.push('after'));
  const plain = new window2.window.CustomEvent('custom', { detail: 7, cancelable: true });
  window2.window.dispatchEvent(plain);
  assert.equal(plain.defaultPrevented, false);
  assert.deepEqual(seen, [[7], 'after'], 'propagation continues when Lean does not stop it');
  // Ctrl+S prevented, other keys typed: the decision depends on the event.
  answer = ([k, ctrl]) => k === 's' && ctrl ? 2 : 0;
  u2.module.sub(7, ['document', 'keydown', [['key'], ['ctrlKey']]]);
  const save = new window2.window.KeyboardEvent('keydown', { key: 's', ctrlKey: true, cancelable: true, bubbles: true });
  window2.document.dispatchEvent(save);
  const typed = new window2.window.KeyboardEvent('keydown', { key: 's', cancelable: true, bubbles: true });
  window2.document.dispatchEvent(typed);
  assert.deepEqual([save.defaultPrevented, typed.defaultPrevented], [true, false]);
  u2.module.unsub(7);
  // Stopping on document keeps the event from window; listeners on document still run.
  answer = 4;
  u2.module.sub(5, ['document', 'ping', []]);
  window2.document.addEventListener('ping', () => seen.push('later'));
  window2.window.addEventListener('ping', () => seen.push('window'));
  window2.document.dispatchEvent(new window2.window.Event('ping', { bubbles: true }));
  assert.equal(seen.includes('window'), false, 'stopPropagation');
  assert.equal(seen.includes('later'), true, 'not stopImmediatePropagation');
  answer = 0;
  window2.document.dispatchEvent(new window2.window.Event('ping', { bubbles: true }));
  assert.equal(seen.includes('window'), true, 'answer 0 lets it propagate');
  await nextFrame(window2.window); await nextFrame(window2.window);
  assert.equal(frames2, 0, 'no frame without bit 1');
  answer = 1;
  window2.document.dispatchEvent(new window2.window.Event('ping', { bubbles: true }));
  await nextFrame(window2.window); await nextFrame(window2.window);
  assert.equal(frames2, 1, 'bit 1 schedules a frame');
  answer = 0;
  u2.module.unsub(4);
  window2.window.dispatchEvent(new window2.window.CustomEvent('custom', { detail: 8 }));
  assert.equal(seen.filter(x => Array.isArray(x) && x[0] === 8).length, 0);
  u2.module.unsub(99);
  assert.throws(() => u2.module.sub(6, ['comet']), /Lasm.UI: unknown subscription comet/);
  ui.unmount(); u2.unmount();
});

test('subscriptions before connect deliver nothing and raise nothing', () => {
  const { root, window, errors } = page();
  const ui = createUi({ root });
  ui.module.sub(1, ['window', 'resize', []]);
  window.dispatchEvent(new window.Event('resize'));
  assert.deepEqual(errors, []);
});

test('links: only plain same-origin clicks inside the root, without a target or download, are routed', () => {
  const variants = [
    ['plain', '<a id="l" href="/about">x</a>', {}, true],
    ['self target', '<a id="l" href="/about" target="_self">x</a>', {}, true],
    ['blank target', '<a id="l" href="/about" target="_blank">x</a>', {}, false],
    ['download', '<a id="l" href="/about" download>x</a>', {}, false],
    ['middle button', '<a id="l" href="/about">x</a>', { button: 1 }, false],
    ['ctrl', '<a id="l" href="/about">x</a>', { ctrlKey: true }, false],
    ['meta', '<a id="l" href="/about">x</a>', { metaKey: true }, false],
    ['shift', '<a id="l" href="/about">x</a>', { shiftKey: true }, false],
    ['alt', '<a id="l" href="/about">x</a>', { altKey: true }, false],
    ['other origin', '<a id="l" href="https://elsewhere.test/">x</a>', {}, false],
    ['no href', '<a id="l">x</a>', {}, false],
  ];
  for (const [name, html, init, routed] of variants) {
    const { root, window } = page();
    const ui = createUi({ root });
    const urls = [];
    ui.module.connect({ url: href => { urls.push(href); return false; }, frame: () => new Uint8Array(0), application: true });
    root.innerHTML = html;
    const e = click(window, root.querySelector('#l'), init);
    assert.equal(e.defaultPrevented, routed, name);
    assert.deepEqual(urls, routed ? ['https://app.test/about'] : [], name);
    // (happy-dom follows an unrouted link itself, so the address is only checked when routed.)
    if (routed) assert.equal(window.location.href, 'https://app.test/about', name);
  }
});

test('links: an already-handled click, a link around the root, a text target, and the current URL', () => {
  const { root, window, document, errors } = page();
  const ui = createUi({ root });
  const urls = [];
  let frames = 0;
  ui.module.connect({ url: href => { urls.push(href); return false; }, frame: () => { frames++; return new Uint8Array(0); }, application: true });
  root.innerHTML = '<a id="l" href="/about">x</a><a id="same" href="/start">here</a>';
  root.querySelector('#l').addEventListener('click', event => event.preventDefault(), { capture: true });
  click(window, root.querySelector('#l'));
  assert.deepEqual(urls, []);
  // A link to the current URL: the default is prevented, nothing else happens.
  const length = window.history.length;
  const same = click(window, root.querySelector('#same'));
  assert.equal(same.defaultPrevented, true);
  assert.deepEqual(urls, []);
  assert.equal(window.history.length, length);
  // Lean does not route the URL: no render.
  assert.equal(frames, 0);
  // A click on a text node.
  root.querySelector('#same').firstChild.dispatchEvent(new window.MouseEvent('click', { bubbles: true }));
  assert.deepEqual(errors, []);
  // An app mounted inside a link does not take over that link.
  const outer = document.createElement('a');
  outer.href = '/outer';
  document.body.appendChild(outer);
  const inner = document.createElement('div');
  outer.appendChild(inner);
  const ui2 = createUi({ root: inner });
  ui2.module.connect({ url: href => { urls.push(href); return true; }, frame: () => new Uint8Array(0), application: true });
  inner.innerHTML = '<span id="in">x</span>';
  const e = click(window, inner.querySelector('#in'));
  assert.equal(e.defaultPrevented, false);
  assert.deepEqual(urls, []);
});

test('links: routed after Lean\'s handlers; a prevented default is not routed, a stopped propagation is', () => {
  for (const [answer, routed] of [[0, true], [4, true], [2, false], [6, false]]) {
    const { root, window, document } = page();
    const ui = createUi({ root });
    const urls = [], order = [];
    ui.module.connect({ url: href => { urls.push(href); order.push('route'); return false; }, event: () => { order.push('lean'); return answer; },
      frame: () => new Uint8Array(0), application: true });
    ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'a', f => (f.attr('href', '/about'), f.on('click', 0), f.on('mousedown', 0), 3), [f => f.text(2, 'x')])).u8);
    // Only clicks are routed (a mousedown with the main button is not).
    root.querySelector('a').dispatchEvent(new window.MouseEvent('mousedown', { bubbles: true, cancelable: true, button: 0 }));
    assert.deepEqual(urls, [], `answer ${answer}: mousedown`);
    order.length = 0;
    document.addEventListener('click', event => event.preventDefault());
    const e = click(window, root.querySelector('a'));
    assert.deepEqual(urls, routed ? ['https://app.test/about'] : [], `answer ${answer}`);
    assert.deepEqual(order, routed ? ['lean', 'route'] : ['lean'], `answer ${answer}`);
    assert.equal(e.defaultPrevented, true);
  }
});

test('links and popstate are handled only for applications', async () => {
  const { root, window } = page();
  const ui = createUi({ root });
  const urls = [];
  ui.module.connect({ url: href => { urls.push(href); return true; }, frame: () => new Uint8Array(0) });
  root.innerHTML = '<a id="l" href="/about">x</a>';
  assert.equal(click(window, root.querySelector('#l')).defaultPrevented, false);
  window.dispatchEvent(new window.PopStateEvent('popstate'));
  assert.deepEqual(urls, []);
});

test('popstate tells Lean the URL and renders when it routes; unmount stops it all', async () => {
  const { root, window } = page();
  const ui = createUi({ root });
  const urls = [];
  let frames = 0, answer = true;
  ui.module.connect({ url: href => { urls.push(href); return answer; }, frame: () => { frames++; return new Uint8Array(0); }, application: true });
  window.history.pushState(null, '', '/next');
  window.dispatchEvent(new window.PopStateEvent('popstate'));
  assert.deepEqual(urls, ['https://app.test/next']);
  await nextFrame(window); await nextFrame(window);
  assert.equal(frames, 1);
  answer = false;
  window.dispatchEvent(new window.PopStateEvent('popstate'));
  await nextFrame(window); await nextFrame(window);
  assert.equal(frames, 1);
  ui.unmount();
  window.dispatchEvent(new window.PopStateEvent('popstate'));
  root.innerHTML = '<a id="l" href="/about">x</a>';
  assert.equal(click(window, root.querySelector('#l')).defaultPrevented, false);
  assert.equal(urls.length, 2);
});

test('unmount stops subscriptions and listeners, empties the root and the id table', async () => {
  const { root, window } = page();
  const ui = createUi({ root });
  const calls = [];
  ui.module.connect({ event: () => { calls.push('event'); return false; }, sub: () => { calls.push('sub'); return false; },
    frame: () => new Uint8Array(0) });
  ui.applyForTest(frame().decoder(0, []).insert(0, 0, f => f.el(1, 'button', f => (f.on('click', 0), 1), [f => f.el(2, 'b', () => 0, [f => f.text(3, 'x')])])).u8);
  ui.module.sub(1, ['window', 'resize', []]);
  ui.module.sub(2, ['every', 5]);
  const button = root.firstChild;
  ui.unmount();
  assert.equal(root.childNodes.length, 0);
  assert.equal(ui.stats().nodes, 0);
  window.dispatchEvent(new window.Event('resize'));
  root.appendChild(button);
  click(window, button.firstChild);
  await tick(30);
  assert.deepEqual(calls, []);
});

test('lasmInstance: one per mount; dispose unmounts it; the root exposes stats', () => {
  const { root } = page();
  const disposers = [];
  const module = lasmInstance({ root, flags: 'f', onDispose: f => disposers.push(f) });
  module.apply(frame().insert(0, 0, f => f.el(1, 'p', () => 0, [f => f.text(2, 'x')])).u8);
  assert.equal(root.lasmUi.stats().nodes, 2);
  disposers[0]();
  assert.equal(root.innerHTML, '');
  assert.equal(root.lasmUi, undefined);
  // Without onDispose (a host that never disposes).
  const p = page();
  const m2 = lasmInstance({ root: p.root });
  assert.equal(typeof m2.apply, 'function');
  assert.equal(p.root.lasmUi.stats().nodes, 0);
});

test('outside the browser every export throws an error that names it', () => {
  const names = ['options', 'connect', 'apply', 'schedule', 'error', 'sub', 'unsub', 'timeout', 'http', 'now', 'navigate',
    'go', 'load', 'storageSet', 'storageRemove', 'storageGet', 'focus', 'title'];
  const standIn = lasmInstance({});
  for (const name of names) {
    assert.throws(() => uiDom[name](), new RegExp(`^Error: lasm:ui-dom ${name}: Lasm.UI apps run in the browser`), name);
    assert.equal(standIn[name], uiDom[name], name);
  }
});
