import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { prepareApplicationSignals } from '../../src/application-signals.mjs';
import { nativeSignals } from '../../src/native-signals.mjs';
import { createNodeRuntimeHost } from '../../src/node-host.mjs';

const mode = process.argv[2], name = process.argv[3], number = constants.signals[name];
const pause = ms => new Promise(resolve => setTimeout(resolve, ms));
if (mode === 'native') {
  // Exercise an existing native extension after the engine's own startup.
  await pause(700);
  const native = nativeSignals(), pointer = native.open(number);
  assert.ok(pointer);
  const pending = native.wait(pointer);
  prepareApplicationSignals();
  console.log('ready');
  assert.ok(await pending);
  assert.equal(native.stop(pointer), 0); native.free(pointer);
  console.log('native received');
} else if (mode === 'javascript') {
  process.once(name, () => { console.log('javascript received'); process.exit(0); });
  prepareApplicationSignals();
  await pause(700); console.log('ready'); setInterval(() => {}, 1000);
} else {
  if (mode === 'ignored') {
    const native = nativeSignals(), action = native.action(number);
    action.writeBigUInt64LE(1n); native.restore(number, action);
  }
  prepareApplicationSignals();
  if (mode === 'watch' || mode === 'stopped') {
    const host = createNodeRuntimeHost();
    async function call(op, id = 0, arg = 0n) {
      const r = await host.request(op, id, arg, Buffer.alloc(0));
      assert.equal(r.error, false, r.bytes.subarray(16).toString()); return r.bytes;
    }
    const handle = Number((await call(160, name === 'SIGUSR1' ? 10 : 6, 1n)).readBigUInt64LE());
    await call(161, handle);
    if (mode === 'stopped') { await call(163, handle); host.close(); }
    else {
      const pending = host.start(162, handle, 0n, Buffer.alloc(0));
      await pause(700); console.log('ready'); await host.whenReady(pending);
      assert.equal((await call(90, pending)).readBigUInt64LE(), BigInt(number));
      await call(163, handle); host.close(); console.log('lean received');
    }
  }
  if (mode !== 'watch') {
    await pause(700); console.log('ready');
    if (mode === 'ignored') { await pause(150); console.log('ignored'); }
    else setInterval(() => {}, 1000);
  }
}
