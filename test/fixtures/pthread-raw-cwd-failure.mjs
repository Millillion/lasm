import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
const OriginalWorker = globalThis.Worker;
let factory;
globalThis[Symbol.for('lasm.denoWebWorker')] = class extends OriginalWorker {
  constructor(...args) { super(...args); factory = this; }
};
const require = createRequire(import.meta.url);
const Factory = require('../../src/native-pthread-factory.cjs').createCwdWorkerFactory();
const pending = [];
for (let i = 0; i < 2; i++) {
  const worker = new Factory(new URL('./pthread-raw-cwd-child.mjs', import.meta.url), { workerData: { mode: 'pending' } });
  await new Promise((resolve, reject) => { worker.once('message', resolve); worker.once('error', reject); });
  const events = [];
  worker.on('error', error => events.push(['error', error.message]));
  worker.on('exit', code => events.push(['exit', code]));
  pending.push({ worker, events });
}
// Kill this prototype's owned bootstrap and deliver its public error event.
// This is a controlled lifecycle failure, not a claim about engine error text.
factory.terminate();
factory.dispatchEvent(new ErrorEvent('error', { message: 'controlled factory failure', cancelable: true }));
await new Promise(resolve => queueMicrotask(resolve));
for (const { worker, events } of pending) {
  assert.equal(await worker.terminate(), 1);
  assert.equal(worker.finished, true);
  assert.deepEqual(events, [['error', 'controlled factory failure'], ['exit', 1]]);
}
await Factory.dispose();
assert.throws(() => new Factory('unused'), /controlled factory failure/);
console.log(JSON.stringify({ passed: true, activeOwnersSettled: 2, errorAndExitDelivered: true, futureWorkersRejected: true, disposed: true }));
