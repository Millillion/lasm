// lasm:app (src/lasm-modules/app.mjs), the JavaScript side of Lasm.UI.Mount:
// the stand-ins outside a mounted app, and an instance's root, flags, target,
// messages, ports, hot state and unmount.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import * as app from '../src/lasm-modules/app.mjs';

test('lasm:app stand-ins outside a mounted app', () => {
  for (const name of ['root', 'port', 'onMessage', 'onUnmount'])
    assert.throws(() => app[name](), /^Error: Lasm\.UI\.Mount: .* is only available in an app mounted by the browser loader \(lasm build --target browser\)$/);
  assert.throws(() => app.root(), { message: 'Lasm.UI.Mount: the root element is only available in an app mounted by the browser loader (lasm build --target browser)' });
  assert.throws(() => app.port(), { message: 'Lasm.UI.Mount: ports is only available in an app mounted by the browser loader (lasm build --target browser)' });
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
  assert.throws(() => bare.root(), { message: 'Lasm.UI.Mount.root: this app has no root element (it was not started by mount in a browser)' });
  assert.equal(bare.target(), 'none');
  assert.equal(bare.flags(), undefined);
  const errors = [];
  const { error } = console;
  console.error = e => errors.push(e);
  try { bare.report('to console'); } finally { console.error = error; }
  assert.deepEqual(errors, ['to console']);
});

test('lasm:app: exact stand-in messages, a queued send is a promise, errors without a report function', async () => {
  assert.throws(() => app.onMessage(), { message: 'Lasm.UI.Mount: messages is only available in an app mounted by the browser loader (lasm build --target browser)' });
  assert.throws(() => app.onUnmount(), { message: 'Lasm.UI.Mount: onUnmount is only available in an app mounted by the browser loader (lasm build --target browser)' });
  const disposers = [];
  const context = { onDispose: fn => disposers.push(fn) };
  const instance = app.lasmInstance(context);
  const queued = context.app.ports.p.send(1);
  assert.ok(queued instanceof Promise);
  assert.equal(await queued, undefined);
  const port = instance.port('p');
  context.app.ports.p.subscribe(() => { throw new Error('no report function'); });
  assert.doesNotThrow(() => port.emit(1));
  instance.onUnmount(() => { throw new Error('no report function either'); });
  assert.doesNotThrow(() => { for (const fn of disposers) fn(); });
});
