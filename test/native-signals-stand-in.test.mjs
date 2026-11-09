// The native signal adapter's loader and calls (src/native-signals.mjs). The
// adapter library itself is built separately (scripts/, not in a bare
// checkout), so the module is loaded from a copy beside a stand-in adapter and
// manifest, against a scripted libc.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, copyFileSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createHash } from 'node:crypto';
import { pathToFileURL, fileURLToPath } from 'node:url';
import { getSystemErrorName } from 'node:util';
import { installKoffiStandIn, standInKoffi } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const original = fileURLToPath(new URL('../src/native-signals.mjs', import.meta.url));
let copies = 0;

function asPlatform(t, platform) {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: platform });
  t.after(() => Object.defineProperty(process, 'platform', saved));
}
/** A copy of the module beside an adapter `name` whose manifest entry is `manifest` (default: valid). */
async function load(t, { name, manifest, musl = false, engineBase = 'engine', identify = true, script = {} } = {}) {
  const base = mkdtempSync(join(tmpdir(), 'lasm-signals-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  mkdirSync(join(base, 'native/signals'), { recursive: true });
  copyFileSync(original, join(base, `native-signals-${++copies}.mjs`));
  const adapter = name ?? `${process.platform}-${process.arch}${process.platform === 'linux' ? musl ? '-musl' : '-gnu' : ''}.${process.platform === 'darwin' ? 'dylib' : 'so'}`;
  const bytes = Buffer.from('stand-in adapter');
  writeFileSync(join(base, 'native/signals', adapter), bytes);
  writeFileSync(join(base, 'native/signals/manifest.json'), JSON.stringify(manifest ?? { protocol: 1,
    files: { [adapter]: { sha256: createHash('sha256').update(bytes).digest('hex') } } }));
  const handlers = { engineHandler: { base: engineBase }, otherHandler: { base: 'other' } };
  let koffi;
  const fail = (name, ...args) => { const errno = script[name]?.(...args); if (errno) { koffi.state.errno = errno; return true; } return false; };
  koffi = standInKoffi({
    ...(musl ? {} : { gnu_get_libc_version: () => 'glibc' }),
    napi_get_version: { image: 'engine' },
    lasm_signal_open: number => ({ subscription: number }),
    lasm_signal_wait: subscription => script.wait?.(subscription) ?? 1,
    lasm_signal_stop: () => 0, lasm_signal_free: () => undefined,
    lasm_signal_default: number => fail('reset', number) ? -1 : 0,
    strerror: errno => `strerror ${errno}`,
    sigaction: (number, action, previous) => {
      if (fail('sigaction', number, action)) return -1;
      if (previous) previous.writeBigUInt64LE(script.handler?.(number) ?? 0n);
      return 0;
    },
    dladdr: (address, info) => {
      if (address?.image === 'engine') { if (!identify) return 0; info.base = 'engine'; return 1; }
      const handler = handlers[address];
      if (!handler) return 0;
      info.base = handler.base; return 1;
    },
    $decode: (bytes, type) => {
      const value = bytes.readBigUInt64LE();
      if (type === 'uintptr_t') return value;
      return value === 2n ? 'engineHandler' : value === 3n ? 'otherHandler' : 'unknownHandler';
    },
  }, { errno: { EINVAL: 22, EINTR: 4, EPERM: 1 } }).install();
  const module = await import(pathToFileURL(join(base, `native-signals-${copies}.mjs`)).href);
  return { module, koffi, base, adapter };
}

test('the bundled adapter is required', { skip: process.platform === 'win32' }, async t => {
  const { existsSync } = await import('node:fs');
  if (['../src/native/signals/manifest.json', '../.cache/native-host/signals/manifest.json'].some(path => existsSync(new URL(path, import.meta.url)))) {
    t.diagnostic('the native signal adapter is built here'); return;
  }
  const { nativeSignals } = await import('../src/native-signals.mjs');
  assert.throws(() => nativeSignals(), { message: 'The bundled native signal adapter is missing' });
});

for (const platform of ['linux', 'darwin']) test(`${platform}: the adapter for this libc loads after its integrity check`, async t => {
  asPlatform(t, platform);
  const { module, koffi, base, adapter } = await load(t);
  const signals = module.nativeSignals();
  assert.equal(module.nativeSignals(), signals);
  assert.deepEqual(koffi.loads, [platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null, join(base, 'native/signals', adapter), null]);
  assert.match(adapter, platform === 'darwin' ? /^darwin-\w+\.dylib$/ : /^linux-\w+-gnu\.so$/);
  assert.deepEqual(signals.open(15), { subscription: 15 });
  assert.equal(signals.stop, signals.stop);
  assert.equal(typeof signals.free, 'function');
});

test('musl Linux selects the musl adapter', async t => {
  asPlatform(t, 'linux');
  const { module, koffi, adapter } = await load(t, { musl: true });
  module.nativeSignals();
  assert.match(adapter, /-musl\.so$/);
  assert.ok(koffi.loads.some(path => path?.endsWith(adapter)));
});

test('a changed adapter, a wrong protocol or a missing entry is refused', async t => {
  asPlatform(t, 'linux');
  for (const manifest of [{ protocol: 1, files: { [`linux-${process.arch}-gnu.so`]: { sha256: '0'.repeat(64) } } },
    { protocol: 2, files: {} }, { protocol: 1, files: {} }]) {
    const { module } = await load(t, { manifest });
    assert.throws(() => module.nativeSignals(), { message: 'Native signal adapter integrity mismatch' });
  }
  const valid = await load(t);
  const bytes = Buffer.from('stand-in adapter');
  const wrongProtocol = await load(t, { manifest: { protocol: 2, files: { [valid.adapter]: { sha256: createHash('sha256').update(bytes).digest('hex') } } } });
  assert.throws(() => wrongProtocol.module.nativeSignals(), { message: 'Native signal adapter integrity mismatch' });
});

test('the engine\'s own image must be identifiable', async t => {
  asPlatform(t, 'linux');
  const { module } = await load(t, { identify: false });
  assert.throws(() => module.nativeSignals(), { message: 'Cannot identify the engine signal-handler image' });
});

test('handler dispositions distinguish default, ignored, the engine\'s and external handlers', async t => {
  asPlatform(t, 'linux');
  const handlers = { 1: 0n, 2: 1n, 3: 2n, 4: 3n, 5: 9n };
  const { module } = await load(t, { script: { handler: number => handlers[number] } });
  const signals = module.nativeSignals();
  assert.deepEqual([1, 2, 3, 4, 5].map(number => signals.disposition(signals.action(number))), ['default', 'ignored', 'engine', 'external', 'external']);
  assert.equal(signals.action(1).length, 256);
});

test('sigaction, reset and wait failures carry errno, code and the C library message', async t => {
  asPlatform(t, 'linux');
  let waitResult = 2;
  const { module, koffi } = await load(t, { script: { sigaction: () => 22, reset: () => 1, wait: () => waitResult } });
  const signals = module.nativeSignals();
  const failed = errno => error => error.errno === -errno && error.message === `strerror ${errno}` && error.nativeMessage === true
    && error.code === ({ 22: 'EINVAL', 1: 'EPERM' })[errno];
  assert.throws(() => signals.action(2), failed(22));
  assert.throws(() => signals.restore(2, Buffer.alloc(256)), failed(22));
  assert.throws(() => signals.reset(2), failed(1));
  assert.equal(await signals.wait({ subscription: 2 }), 2);
  waitResult = -1;
  koffi.state.errno = 0;
  const rejected = signals.wait({ subscription: 2 });
  await assert.rejects(rejected, error => error.errno === -0 && error.code === 'EIO');
  koffi.state.errno = 1;
  const failure = signals.failure();
  assert.ok(failed(1)(failure));
  assert.equal(getSystemErrorName(-1), 'EPERM');
});

test('successful restore and reset return nothing', async t => {
  asPlatform(t, 'linux');
  const { module, koffi } = await load(t);
  const signals = module.nativeSignals();
  const action = Buffer.alloc(256, 7);
  assert.equal(signals.restore(10, action), undefined);
  assert.equal(signals.reset(10), undefined);
  assert.deepEqual(koffi.calls.filter(([name]) => ['sigaction', 'lasm_signal_default'].includes(name)), [['sigaction', 10, action, null], ['lasm_signal_default', 10]]);
});

test('an asynchronous call failure rejects the wait', async t => {
  asPlatform(t, 'linux');
  const { module } = await load(t, { script: { wait: () => { throw new Error('ffi wait failed'); } } });
  await assert.rejects(module.nativeSignals().wait({}), { message: 'ffi wait failed' });
});
