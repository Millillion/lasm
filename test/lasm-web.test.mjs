// lasm:web (src/lasm-modules/web.mjs) and lasm:app (src/lasm-modules/app.mjs),
// the JavaScript side of Lasm.Web: every helper is checked for the call it
// makes on a stand-in DOM (recording what it is asked), the values it returns,
// and the per-app bookkeeping that an unmount removes.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import * as web from '../src/lasm-modules/web.mjs';
import * as app from '../src/lasm-modules/app.mjs';

/** A stand-in node: records method calls in `calls`, keeps style and class lists. */
function node(extra = {}) {
  const calls = [];
  const record = name => (...args) => { calls.push([name, ...args]); return `${name}-result`; };
  const styles = new Map(), classes = new Set();
  const n = {
    calls, nodeName: 'DIV', tagName: 'DIV', textContent: 'text', innerHTML: '<b>x</b>', isConnected: 1,
    parentNode: 'parent', parentElement: 'parentElement', firstChild: 'first', lastChild: 'last', nextSibling: 'next', previousSibling: 'previous',
    children: ['c1', 'c2'], childNodes: ['n1', 't1'],
    style: { setProperty: (k, v) => styles.set(k, v), removeProperty: k => styles.delete(k), getPropertyValue: k => styles.get(k) ?? '', styles },
    classList: {
      add: (...names) => names.forEach(name => classes.add(name)), remove: (...names) => names.forEach(name => classes.delete(name)),
      toggle: (...args) => { calls.push(['toggle', ...args]); return true; }, contains: name => classes.has(name), classes,
    },
    getBoundingClientRect: () => ({ x: 1, y: 2, width: 3, height: 4, top: 5, right: 6, bottom: 7, left: 8, extra: 9 }),
    ...extra,
  };
  for (const name of ['setAttribute', 'getAttribute', 'removeAttribute', 'hasAttribute', 'toggleAttribute', 'replaceChildren', 'append', 'appendChild',
    'insertBefore', 'removeChild', 'remove', 'replaceWith', 'contains', 'cloneNode', 'focus', 'blur', 'click', 'scrollIntoView', 'querySelector',
    'querySelectorAll', 'dispatchEvent', 'createElement', 'createElementNS', 'createTextNode', 'createDocumentFragment', 'getElementById'])
    if (!(name in n)) n[name] = record(name);
  n.querySelectorAll = (...args) => { calls.push(['querySelectorAll', ...args]); return new Set(['q1', 'q2']); };
  return n;
}

/** Runs `fn` with `globalThis[name]` set to `value`. */
async function withGlobal(name, value, fn) {
  const had = Object.getOwnPropertyDescriptor(globalThis, name);
  Object.defineProperty(globalThis, name, { value, configurable: true, writable: true });
  try { return await fn(); } finally { if (had) Object.defineProperty(globalThis, name, had); else delete globalThis[name]; }
}

test('lasm:web globals need a browser and name the missing global', async () => {
  for (const name of ['window', 'document', 'localStorage', 'sessionStorage', 'location', 'history']) {
    assert.throws(() => web[name](), { message: `Lasm.Web: ${name} needs a browser (${name} is not defined here)` });
    const value = { stand: name };
    assert.equal(await withGlobal(name, value, () => web[name]()), value);
  }
  assert.equal(web.navigator(), globalThis.navigator);
  await assert.rejects(web.nextFrame(), { message: 'Lasm.Web: requestAnimationFrame needs a browser (requestAnimationFrame is not defined here)' });
  assert.equal(await withGlobal('requestAnimationFrame', fn => fn(42), () => web.nextFrame()), 42);
  const before = performance.now();
  assert.ok(web.now() >= before);
});

test('lasm:web DOM helpers: the call each makes and what it returns', async () => {
  const doc = node();
  await withGlobal('document', doc, () => {
    assert.equal(web.createElement('p'), 'createElement-result');
    assert.equal(web.createElementNS('svg-ns', 'circle'), 'createElementNS-result');
    assert.equal(web.createTextNode('hi'), 'createTextNode-result');
    assert.equal(web.createFragment(), 'createDocumentFragment-result');
    assert.equal(web.getElementById('app'), 'getElementById-result');
    assert.equal(web.querySelector('.a'), 'querySelector-result');
    assert.deepEqual(web.querySelectorAll('.b'), ['q1', 'q2']);
  });
  assert.deepEqual(doc.calls, [['createElement', 'p'], ['createElementNS', 'svg-ns', 'circle'], ['createTextNode', 'hi'], ['createDocumentFragment'],
    ['getElementById', 'app'], ['querySelector', '.a'], ['querySelectorAll', '.b']]);
  const root = node();
  assert.equal(web.querySelector('.c', root), 'querySelector-result');
  assert.deepEqual(web.querySelectorAll('.d', root), ['q1', 'q2']);
  assert.deepEqual(root.calls, [['querySelector', '.c'], ['querySelectorAll', '.d']]);

  const e = node();
  const children = web.children(e);
  assert.deepEqual(children, ['c1', 'c2']);
  assert.notEqual(children, e.children, 'a copy');
  assert.deepEqual(web.childNodes(e), ['n1', 't1']);
  web.setAttributes(e, [['id', 'x'], [1, 2]]);
  web.setAttributes(e, 'not a list');
  web.setStyles(e, [['color', 'red'], ['margin', 0]]);
  assert.deepEqual([...e.style.styles], [['color', 'red'], ['margin', '0']]);
  assert.equal(web.style(e, 'color'), 'red');
  web.removeStyle(e, 'color');
  assert.equal(web.style(e, 'color'), '');
  web.classAdd(e, ['a', 'b', 'c']);
  web.classRemove(e, ['b']);
  assert.deepEqual([...e.classList.classes], ['a', 'c']);
  assert.equal(web.classContains(e, 'a'), true);
  assert.equal(web.classContains(e, 'b'), false);
  web.classToggle(e, 'x');
  web.classToggle(e, 'y', null);
  web.classToggle(e, 'z', false);
  web.classToggle(e, 'w', true);
  assert.deepEqual(web.rect(e), { x: 1, y: 2, width: 3, height: 4, top: 5, right: 6, bottom: 7, left: 8 });
  web.replaceChildren(e, ['p', 'q']);
  web.append(e, ['r', 's']);
  assert.equal(web.isConnected(e), true);
  assert.equal(web.isConnected(node({ isConnected: undefined })), false);
  web.appendChild(e, 'child');
  web.insertBefore(e, 'child', 'ref');
  web.insertBefore(e, 'child');
  web.removeChild(e, 'child');
  web.removeNode(e);
  web.replaceNode(e, 'other');
  assert.equal(web.getText(e), 'text');
  assert.equal(web.getText(node({ textContent: null })), '');
  web.setText(e, 'new');
  assert.equal(e.textContent, 'new');
  for (const name of ['parentNode', 'parentElement', 'firstChild', 'lastChild', 'nextSibling', 'previousSibling', 'nodeName', 'tagName']) assert.equal(web[name](e), e[name], name);
  assert.equal(web.contains(e, 'x'), 'contains-result');
  web.cloneNode(e, 1);
  web.cloneNode(e);
  assert.equal(web.getAttribute(e, 'id'), 'getAttribute-result');
  assert.equal(web.setAttribute(e, 'id', 'y'), undefined);
  assert.equal(web.removeAttribute(e, 'id'), undefined);
  assert.equal(web.hasAttribute(e, 'id'), 'hasAttribute-result');
  web.toggleAttribute(e, 'hidden');
  web.toggleAttribute(e, 'hidden', undefined);
  web.toggleAttribute(e, 'hidden', true);
  web.focus(e); web.blur(e); web.click(e);
  web.scrollIntoView(e, true);
  web.scrollIntoView(e, false);
  assert.deepEqual(e.calls, [
    ['setAttribute', 'id', 'x'], ['setAttribute', '1', '2'],
    ['toggle', 'x'], ['toggle', 'y'], ['toggle', 'z', false], ['toggle', 'w', true],
    ['replaceChildren', 'p', 'q'], ['append', 'r', 's'], ['appendChild', 'child'], ['insertBefore', 'child', 'ref'], ['insertBefore', 'child', null],
    ['removeChild', 'child'], ['remove'], ['replaceWith', 'other'], ['contains', 'x'], ['cloneNode', true], ['cloneNode', false],
    ['getAttribute', 'id'], ['setAttribute', 'id', 'y'], ['removeAttribute', 'id'], ['hasAttribute', 'id'],
    ['toggleAttribute', 'hidden'], ['toggleAttribute', 'hidden'], ['toggleAttribute', 'hidden', true],
    ['focus'], ['blur'], ['click'], ['scrollIntoView', { behavior: 'smooth' }], ['scrollIntoView', undefined],
  ]);
  const object = { a: 1 };
  assert.equal(web.getProp(object, 'a'), 1);
  assert.equal(web.setProp(object, 'b', 2), undefined);
  assert.equal(object.b, 2);
  assert.equal(web.getInnerHTML(e), '<b>x</b>');
  web.setInnerHTML(e, '<i>y</i>');
  assert.equal(e.innerHTML, '<i>y</i>');
  assert.equal(web.getValue({ value: 'v' }), 'v');
  assert.equal(web.getValue({ value: 3 }), '3');
  assert.equal(web.getValue({}), '');
  assert.equal(web.getValue({ value: null }), '');
  const input = {};
  web.setValue(input, 'typed');
  assert.equal(input.value, 'typed');
  assert.equal(web.getChecked({ checked: 1 }), true);
  assert.equal(web.getChecked({}), false);
  web.setChecked(input, true);
  assert.equal(input.checked, true);
});

test('lasm:web events: one crossing for the usual fields, with defaults', () => {
  const full = { type: 'keydown', key: 'a', code: 'KeyA', repeat: 1, altKey: 1, ctrlKey: 1, metaKey: 1, shiftKey: 1, clientX: 1, clientY: 2, pageX: 3, pageY: 4,
    offsetX: 5, offsetY: 6, button: 7, buttons: 8, deltaX: 9, deltaY: 10, timeStamp: 11, target: { value: 'typed', checked: 1 } };
  assert.deepEqual(web.eventInfo(full), { type: 'keydown', key: 'a', code: 'KeyA', keyRepeat: true, altKey: true, ctrlKey: true, metaKey: true, shiftKey: true,
    clientX: 1, clientY: 2, pageX: 3, pageY: 4, offsetX: 5, offsetY: 6, button: 7, buttons: 8, deltaX: 9, deltaY: 10, value: 'typed', checked: true, timeStamp: 11 });
  assert.deepEqual(web.eventInfo({ type: 'click', target: null }), { type: 'click', key: '', code: '', keyRepeat: false, altKey: false, ctrlKey: false, metaKey: false,
    shiftKey: false, clientX: 0, clientY: 0, pageX: 0, pageY: 0, offsetX: 0, offsetY: 0, button: 0, buttons: 0, deltaX: 0, deltaY: 0, value: '', checked: false, timeStamp: 0 });
  assert.equal(web.eventInfo({ type: 'x', target: { value: 5 } }).value, '');
  assert.equal(web.eventInfo({ type: 'x', target: {} }).value, '');
  assert.equal(web.targetValue({ target: { value: 'v' } }), 'v');
  assert.equal(web.targetValue({ target: { value: 1 } }), '');
  assert.equal(web.targetValue({ target: null }), '');
  assert.equal(web.targetChecked({ target: { checked: 'yes' } }), true);
  assert.equal(web.targetChecked({}), false);
  const event = web.createEvent('ping', true, false);
  assert.ok(event instanceof Event);
  assert.deepEqual([event.type, event.bubbles, event.cancelable], ['ping', true, false]);
  const custom = web.createCustomEvent('data', { n: 1 }, false, true);
  assert.deepEqual([custom.type, custom.detail, custom.bubbles, custom.cancelable], ['data', { n: 1 }, false, true]);
  const target = new EventTarget();
  let got = null;
  target.addEventListener('data', e => { got = e.detail; });
  assert.equal(web.dispatchEvent(target, custom), true);
  assert.deepEqual(got, { n: 1 });
});

test('lasm:web fetch: the request it builds; responses in one crossing', async () => {
  const requests = [];
  await withGlobal('fetch', async (url, init) => { requests.push([url, init]); return new Response('{"a":1}', { status: 201, statusText: 'Created', headers: { 'x-a': 'b' } }); }, async () => {
    const signal = new AbortController().signal;
    const response = await web.fetch('/api', { method: 'POST', mode: 'cors', credentials: 'include', cache: 'no-store', redirect: 'manual', referrer: 'r',
      referrerPolicy: 'no-referrer', integrity: 'sha', priority: 'high', keepalive: false, headers: [['a', 1]], body: 'text', json: { ignored: true }, signal, other: 'dropped' });
    await web.fetch('/b', { method: '', mode: 3, keepalive: 'yes', headers: { a: 1 }, json: { x: 1 } });
    await web.fetch('/c', { body: null, json: [1] });
    await web.fetch('/d');
    await web.fetch('/e', 'not an object');
    assert.deepEqual(requests.map(([url, init]) => [url, { ...init, signal: init.signal ? 'signal' : undefined }]), [
      ['/api', { method: 'POST', mode: 'cors', credentials: 'include', cache: 'no-store', redirect: 'manual', referrer: 'r', referrerPolicy: 'no-referrer',
        integrity: 'sha', priority: 'high', keepalive: false, headers: [['a', '1']], body: 'text', signal: 'signal' }],
      ['/b', { body: '{"x":1}', signal: undefined }],
      ['/c', { body: '[1]', signal: undefined }],
      ['/d', { signal: undefined }],
      ['/e', { signal: undefined }],
    ]);
    assert.equal(requests[0][1].signal, signal);
    const info = web.responseInfo(response);
    assert.deepEqual(info, { status: 201, statusText: 'Created', ok: true, url: '', redirected: false, type: 'default', headers: [['content-type', 'text/plain;charset=UTF-8'], ['x-a', 'b']] });
  });
  assert.equal(await web.responseText(new Response('t')), 't');
  assert.deepEqual(await web.responseJson(new Response('[1]')), [1]);
  const bytes = await web.responseBytes(new Response(new Uint8Array([1, 2])));
  assert.ok(bytes instanceof Uint8Array);
  assert.deepEqual([...bytes], [1, 2]);
  const controller = web.abortController();
  assert.ok(controller instanceof AbortController);
  assert.equal(web.abortSignal(controller), controller.signal);
  web.abort(controller, 'why');
  assert.equal(controller.signal.reason, 'why');
  const plain = web.abortController();
  web.abort(plain, null);
  assert.equal(plain.signal.reason.name, 'AbortError');
  const timeout = web.timeoutSignal(5);
  await new Promise(r => setTimeout(r, 30));
  assert.equal(timeout.aborted, true);
});

test('lasm:web URLs, form data, crypto, console, WebSocket data', async () => {
  assert.deepEqual(web.parseUrl('https://u:p@example.com:8080/a/b?x=1&y=2#h'), { href: 'https://u:p@example.com:8080/a/b?x=1&y=2#h', origin: 'https://example.com:8080',
    protocol: 'https:', username: 'u', password: 'p', host: 'example.com:8080', hostname: 'example.com', port: '8080', pathname: '/a/b', search: '?x=1&y=2', hash: '#h',
    params: [['x', '1'], ['y', '2']] });
  assert.equal(web.parseUrl('/rel', ''), null, 'an empty base is no base');
  assert.equal(web.parseUrl('/rel', 'nope'), null);
  assert.equal(web.searchParams('a=1&b=2').get('b'), '2');
  assert.equal(web.searchParams([['c', 3]]).toString(), 'c=3');
  assert.deepEqual(web.paramsEntries(new URLSearchParams('a=1')), [['a', '1']]);
  assert.equal(web.encodeURIComponent('a b&'), 'a%20b%26');
  assert.equal(web.decodeURIComponent('a%20b'), 'a b');

  const data = web.formData();
  assert.ok(data instanceof FormData);
  web.formAppend(data, 'name', 'ada');
  web.formAppendBytes(data, 'file', new Uint8Array([1, 2, 3]), 'a.bin', 'application/x-test');
  web.formAppendBytes(data, 'untyped', new Uint8Array([4]), 'b.bin', '');
  const entries = web.formEntries(data);
  assert.deepEqual(entries[0], ['name', 'ada']);
  assert.deepEqual({ ...entries[1][1], file: undefined }, { name: 'a.bin', size: 3, type: 'application/x-test', file: undefined });
  assert.equal(entries[2][1].type, 'application/octet-stream');
  assert.deepEqual([...await web.blobBytes(entries[1][1].file)], [1, 2, 3]);
  assert.throws(() => web.formData({ not: 'a form' }));

  const bytes = web.randomBytes(70000);
  assert.equal(bytes.length, 70000);
  assert.ok(bytes.subarray(65536).some(b => b !== 0), 'past the first 65536 bytes too');
  assert.equal(web.randomBytes(0).length, 0);
  assert.match(web.randomUUID(), /^[0-9a-f]{8}-[0-9a-f]{4}-4[0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$/);
  const digest = await web.digest('SHA-256', new TextEncoder().encode('abc'));
  assert.equal(Buffer.from(digest).toString('hex'), 'ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad');

  const logged = [];
  const saved = {};
  for (const level of ['log', 'info', 'warn', 'error', 'debug']) { saved[level] = console[level]; console[level] = (...args) => logged.push([level, ...args]); }
  try {
    for (const level of ['log', 'info', 'warn', 'error', 'debug', 'trace', 'constructor']) web.log(level, [level, 1]);
  } finally { Object.assign(console, saved); }
  assert.deepEqual(logged, [['log', 'log', 1], ['info', 'info', 1], ['warn', 'warn', 1], ['error', 'error', 1], ['debug', 'debug', 1], ['log', 'trace', 1], ['log', 'constructor', 1]]);

  assert.equal(web.messageData({ data: 'text' }), 'text');
  const buffer = new Uint8Array([9, 8]).buffer;
  const message = web.messageData({ data: buffer });
  assert.ok(message instanceof Uint8Array);
  assert.deepEqual([...message], [9, 8]);
  const blob = new Blob(['x']);
  assert.equal(web.messageData({ data: blob }), blob);
  assert.deepEqual(web.closeInfo({ code: 1000, reason: 'bye', wasClean: 1 }), { code: 1000, reason: 'bye', wasClean: true });
  assert.deepEqual(web.closeInfo({}), { code: 0, reason: '', wasClean: false });
});

test('lasm:web canvas: drawing commands in one crossing, text metrics, pixels', async () => {
  const calls = [];
  const context = new Proxy({}, {
    get: (target, name) => name in target ? target[name] : (...args) => { calls.push([name, ...args]); return { data: new Uint8ClampedArray([1, 2, 3, 4]), width: 7, actualBoundingBoxAscent: 2 }; },
    set: (target, name, value) => { calls.push(['set', name, value]); return true; },
  });
  const canvas = { getContext: (...args) => { calls.push(['getContext', ...args]); return context; } };
  assert.equal(web.context2d(canvas), context);
  web.context2d(canvas, false);
  web.context2d(canvas, true);
  web.draw(context, [
    ['fillStyle', 'red'], ['strokeStyle', 'blue'], ['lineWidth', 2], ['font', '10px a'], ['textAlign', 'center'], ['textBaseline', 'top'], ['globalAlpha', 0.5],
    ['lineCap', 'round'], ['lineJoin', 'bevel'], ['fillRect', 1, 2, 3, 4], ['strokeRect', 1, 2, 3, 4], ['clearRect', 1, 2, 3, 4], ['beginPath'], ['closePath'],
    ['moveTo', 1, 2], ['lineTo', 3, 4], ['rect', 1, 2, 3, 4], ['arc', 1, 2, 3, 4, 5], ['arc', 1, 2, 3, 4, 5, 1], ['quadraticCurveTo', 1, 2, 3, 4],
    ['bezierCurveTo', 1, 2, 3, 4, 5, 6], ['fill'], ['stroke'], ['fillText', 't', 1, 2], ['strokeText', 't', 1, 2], ['save'], ['restore'], ['translate', 1, 2],
    ['rotate', 3], ['scale', 1, 2], ['setTransform', 1, 2, 3, 4, 5, 6], ['resetTransform'], ['drawImage', 'img', 1, 2], ['drawImageScaled', 'img', 1, 2, 3, 4],
  ]);
  assert.deepEqual(calls, [['getContext', '2d', undefined], ['getContext', '2d', { alpha: false }], ['getContext', '2d', undefined],
    ['set', 'fillStyle', 'red'], ['set', 'strokeStyle', 'blue'], ['set', 'lineWidth', 2], ['set', 'font', '10px a'], ['set', 'textAlign', 'center'],
    ['set', 'textBaseline', 'top'], ['set', 'globalAlpha', 0.5], ['set', 'lineCap', 'round'], ['set', 'lineJoin', 'bevel'],
    ['fillRect', 1, 2, 3, 4], ['strokeRect', 1, 2, 3, 4], ['clearRect', 1, 2, 3, 4], ['beginPath'], ['closePath'], ['moveTo', 1, 2], ['lineTo', 3, 4],
    ['rect', 1, 2, 3, 4], ['arc', 1, 2, 3, 4, 5, false], ['arc', 1, 2, 3, 4, 5, true], ['quadraticCurveTo', 1, 2, 3, 4], ['bezierCurveTo', 1, 2, 3, 4, 5, 6],
    ['fill'], ['stroke'], ['fillText', 't', 1, 2], ['strokeText', 't', 1, 2], ['save'], ['restore'], ['translate', 1, 2], ['rotate', 3], ['scale', 1, 2],
    ['setTransform', 1, 2, 3, 4, 5, 6], ['resetTransform'], ['drawImage', 'img', 1, 2], ['drawImage', 'img', 1, 2, 3, 4]]);
  assert.throws(() => web.draw(context, [['nope', 1]]), { message: 'Lasm.Web.Canvas: unknown drawing command "nope"' });
  assert.throws(() => web.draw(context, [['constructor']]), /unknown drawing command "constructor"/);
  assert.deepEqual(web.measureText(context, 'hi'), { width: 7, ascent: 2, descent: 0 });
  const pixels = web.imageData(context, 0, 0, 1, 1);
  assert.ok(pixels instanceof Uint8Array);
  assert.deepEqual([...pixels], [1, 2, 3, 4]);
  calls.length = 0;
  const put = [];
  class ImageData { constructor(data, width, height) { assert.ok(data instanceof Uint8ClampedArray); Object.assign(this, { data, width, height }); } }
  await withGlobal('ImageData', ImageData, () => web.putImageData({ putImageData: (image, x, y) => put.push([image.width, image.height, [...image.data], x, y]) },
    new Uint8Array([0, 5, 6, 7, 8, 0]).subarray(1, 5), 3, 4, 1, 1));
  assert.deepEqual(put, [[1, 1, [5, 6, 7, 8], 3, 4]]);
});

test('lasm:web per-app bookkeeping: listeners, timers, frames, microtasks and sockets end with the app', async () => {
  const disposers = [], reports = [];
  const instance = web.lasmInstance({ onDispose: fn => disposers.push(fn), report: error => reports.push(error.message) });
  assert.equal('lasmInstance' in instance, false);
  assert.equal(instance.createElement, web.createElement);
  // A throwing or rejecting handler is reported, not thrown into the page.
  const target = new EventTarget();
  const seen = [];
  const handle = instance.listen(target, 'ping', event => { seen.push(event.type); throw new Error('handler failed'); });
  instance.listen(target, 'async', async () => { throw new Error('async failed'); });
  instance.listen(target, 'ping', () => seen.push('capture'), { capture: 1, passive: 0 });
  const once = instance.listen(target, 'ping', () => seen.push('once'), { once: true });
  target.dispatchEvent(new Event('ping'));
  target.dispatchEvent(new Event('ping'));
  target.dispatchEvent(new Event('async'));
  await new Promise(r => setTimeout(r, 0));
  assert.deepEqual(seen, ['ping', 'capture', 'once', 'ping', 'capture']);
  assert.deepEqual(reports, ['handler failed', 'handler failed', 'async failed']);
  once.remove();
  instance.unlisten(handle);
  instance.unlisten(null);
  target.dispatchEvent(new Event('ping'));
  assert.deepEqual(seen, ['ping', 'capture', 'once', 'ping', 'capture', 'capture']);
  // Timers: numeric ids of their own; cleared ones never run.
  const fired = [];
  const a = instance.setTimeout(() => fired.push('a'), 1);
  const b = instance.setTimeout(() => fired.push('b'), 1);
  assert.equal(b, a + 1);
  instance.clearTimeout(b);
  const interval = instance.setInterval(() => { fired.push('i'); if (fired.filter(x => x === 'i').length === 2) instance.clearInterval(interval); }, 1);
  instance.queueMicrotask(() => fired.push('m'));
  instance.queueMicrotask(() => { throw new Error('microtask failed'); });
  await new Promise(r => setTimeout(r, 40));
  assert.deepEqual(fired.sort(), ['a', 'i', 'i', 'm']);
  assert.ok(reports.includes('microtask failed'));
  instance.setTimeout(() => { throw new Error('timer failed'); }, 0);
  await new Promise(r => setTimeout(r, 10));
  assert.ok(reports.includes('timer failed'));
  // Animation frames: need a browser; cancelled ones never run.
  assert.throws(() => instance.requestAnimationFrame(() => {}), /requestAnimationFrame needs a browser/);
  const frames = new Map();
  let nextFrame = 1;
  const cancelled = [];
  await withGlobal('requestAnimationFrame', fn => { frames.set(nextFrame, fn); return nextFrame++; }, () => withGlobal('cancelAnimationFrame', id => { cancelled.push(id); frames.delete(id); }, async () => {
    const ran = [];
    const f1 = instance.requestAnimationFrame(time => ran.push(['f1', time]));
    const f2 = instance.requestAnimationFrame(time => ran.push(['f2', time]));
    instance.cancelAnimationFrame(f2);
    assert.deepEqual(cancelled, [f2]);
    for (const [, fn] of frames) fn(16);
    assert.deepEqual(ran, [['f1', 16]]);
    const pending = instance.requestAnimationFrame(() => ran.push('late'));
    // Sockets: binary as ArrayBuffer unless asked; closed with the app.
    const sockets = [];
    class FakeSocket extends EventTarget {
      constructor(...args) { super(); this.args = args; this.closes = []; sockets.push(this); }
      close(code, reason) { this.closes.push([code, reason]); if (this.args[0] === 'wss://throws') throw new Error('already closed'); }
    }
    await withGlobal('WebSocket', FakeSocket, () => {
      const s1 = instance.webSocket('wss://a', [], '');
      const s2 = instance.webSocket('wss://b', ['chat'], 'blob');
      const s3 = instance.webSocket('wss://throws');
      const s4 = instance.webSocket('wss://closed-early', null);
      assert.deepEqual([s1.args, s2.args, s3.args, s4.args], [['wss://a'], ['wss://b', ['chat']], ['wss://throws'], ['wss://closed-early']]);
      assert.deepEqual([s1.binaryType, s2.binaryType], ['arraybuffer', 'blob']);
      s4.dispatchEvent(new Event('close'));
      // Unmount: listeners, timers, intervals, frames and open sockets.
      const late = [];
      instance.listen(target, 'late', () => late.push('listener'));
      instance.setTimeout(() => late.push('timer'), 1);
      instance.setInterval(() => late.push('interval'), 1);
      for (const fn of disposers) fn();
      target.dispatchEvent(new Event('late'));
      assert.deepEqual(cancelled, [f2, pending]);
      assert.deepEqual([s1.closes, s2.closes, s3.closes, s4.closes], [[[1001, 'app unmounted']], [[1001, 'app unmounted']], [[1001, 'app unmounted']], []]);
      return new Promise(r => setTimeout(r, 20)).then(() => assert.deepEqual(late, []));
    });
    // A guarded callback after unmount does nothing.
    frames.get(pending)?.(1);
    assert.deepEqual(ran, [['f1', 16]]);
  }));
  // The module's own stand-ins act globally and never unmount.
  const shared = [];
  const id = web.setTimeout(() => shared.push('shared'), 1);
  assert.equal(typeof id, 'number');
  await new Promise(r => setTimeout(r, 10));
  assert.deepEqual(shared, ['shared']);
  // Without a report function, errors go to console.error.
  const plain = web.lasmInstance({ onDispose() {} });
  const errors = [];
  const { error } = console;
  console.error = e => errors.push(e.message);
  try { plain.queueMicrotask(() => { throw new Error('to the console'); }); await new Promise(r => setTimeout(r, 0)); }
  finally { console.error = error; }
  assert.deepEqual(errors, ['to the console']);
});

test('lasm:app stand-ins outside a mounted app', () => {
  for (const name of ['root', 'port', 'onMessage', 'onUnmount'])
    assert.throws(() => app[name](), /^Error: Lasm\.Web\.App: .* is only available in an app mounted by the browser loader \(lasm build --target browser\)$/);
  assert.throws(() => app.root(), { message: 'Lasm.Web.App: the root element is only available in an app mounted by the browser loader (lasm build --target browser)' });
  assert.throws(() => app.port(), { message: 'Lasm.Web.App: ports is only available in an app mounted by the browser loader (lasm build --target browser)' });
  assert.equal(app.flags(), undefined);
  assert.equal(app.hydrating(), false);
  assert.equal(app.target(), 'none');
  assert.equal(app.hotState(), undefined);
  assert.equal(app.onHotSave(() => 1), undefined);
  const errors = [];
  const { error } = console;
  console.error = e => errors.push(e);
  try { app.report('x'); } finally { console.error = error; }
  assert.deepEqual(errors, ['x']);
});

test('lasm:app instances: root, flags, target, messages, ports, hot state, unmount', async () => {
  const disposers = [], reports = [];
  const context = { target: 'browser', root: { nodeType: 1 }, flags: [1], hydrate: 0, hotState: { saved: 1 }, onDispose: fn => disposers.push(fn), report: e => reports.push(e) };
  const instance = app.lasmInstance(context);
  assert.equal(instance.hydrating(), false);
  assert.equal(instance.target(), 'browser');
  assert.deepEqual(instance.hotState(), { saved: 1 });
  assert.equal(context.app.hotSave(), undefined, 'nothing saved until Lean registers a saver');
  instance.onHotSave(() => ({ count: 4 }));
  assert.deepEqual(context.app.hotSave(), { count: 4 });
  instance.report('reported');
  assert.deepEqual(reports, ['reported']);
  // Messages: a handler's result is not returned; a rejection reaches the sender; queued ones too.
  const queued = context.app.deliver('q');
  let failNext = false;
  instance.onMessage(message => { if (failNext) throw new Error(`refused ${message}`); return 'ignored'; });
  assert.equal(await queued, undefined);
  assert.equal(await context.app.deliver('x'), undefined);
  failNext = true;
  await assert.rejects(context.app.deliver('y'), { message: 'refused y' });
  const pendingFail = (() => { const c = { onDispose() {} }; const i = app.lasmInstance(c); const p = c.app.deliver('early'); i.onMessage(m => Promise.reject(new Error(`no ${m}`))); return p; })();
  await assert.rejects(pendingFail, { message: 'no early' });
  // Ports: the same port by name; subscriber errors are reported; ports are listed.
  const p = instance.port('count');
  assert.equal(context.app.ports.count, context.app.ports.count);
  assert.equal('count' in context.app.ports, true);
  assert.equal('other' in context.app.ports, false);
  assert.equal(context.app.ports[Symbol.iterator], undefined);
  const got = [];
  context.app.ports.count.subscribe(v => { throw new Error(`subscriber ${v}`); });
  const fn = v => got.push(v);
  context.app.ports.count.subscribe(fn);
  p.emit(1);
  context.app.ports.count.unsubscribe(fn);
  p.emit(2);
  assert.deepEqual(got, [1]);
  assert.deepEqual(reports.slice(1).map(e => e.message), ['subscriber 1', 'subscriber 2']);
  assert.throws(() => context.app.ports.count.subscribe('not a function'), { name: 'TypeError', message: 'Lasm app port count: subscribe needs a function' });
  // JavaScript → Lean: every handler, awaited.
  const order = [];
  p.listen(async v => { await new Promise(r => setTimeout(r, 5)); order.push(['a', v]); });
  p.listen(v => order.push(['b', v]));
  assert.equal(await context.app.ports.count.send(7), undefined);
  assert.deepEqual(order, [['b', 7], ['a', 7]]);
  instance.port(42).emit('numbered');
  assert.deepEqual(Object.keys(context.app.ports), ['count', '42']);
  assert.deepEqual(Object.getOwnPropertyDescriptor(context.app.ports, 'count'), { enumerable: true, configurable: true, value: context.app.ports.count, writable: false });
  assert.equal(Object.getOwnPropertyDescriptor(context.app.ports, 'nope'), undefined);
  // Unmount: handlers in reverse order, an error reported; then ports and messages refuse.
  const unmounted = [];
  instance.onUnmount(() => unmounted.push(1));
  instance.onUnmount(() => { throw new Error('unmount failed'); });
  instance.onUnmount(() => unmounted.push(3));
  for (const dispose of disposers) dispose();
  assert.deepEqual(unmounted, [3, 1]);
  assert.equal(reports.at(-1).message, 'unmount failed');
  assert.throws(() => context.app.ports.count.send(1), { message: 'Lasm app port count: the app is unmounted' });
  await assert.rejects(context.app.deliver('late'), { message: 'The Lasm app is unmounted' });
  // No root, no target, no report: the defaults.
  const bare = app.lasmInstance({});
  assert.throws(() => bare.root(), { message: 'Lasm.Web.App.root: this app has no root element (it was not started by mount in a browser)' });
  assert.equal(bare.target(), 'none');
  assert.equal(bare.flags(), undefined);
  const errors = [];
  const { error } = console;
  console.error = e => errors.push(e);
  try { bare.report('to console'); } finally { console.error = error; }
  assert.deepEqual(errors, ['to console']);
});
