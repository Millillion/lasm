import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { MessageChannel } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';
import { nativeFiles } from '../../src/native-files.mjs';
import { nativeSignals } from '../../src/native-signals.mjs';
const require = createRequire(import.meta.url);
const originalReport = process.report.getReport;
try {
  process.report.getReport = () => { throw new Error('Signal initialization must not query the engine report'); };
  assert.equal(typeof nativeSignals().open, 'function');
} finally { process.report.getReport = originalReport; }
const before = await nativeFiles().readDirectoryName('/proc/self/cwd');
const Factory = require('../../src/native-pthread-factory.cjs').createCwdWorkerFactory();
const records = [];
assert.throws(() => new Factory(new URL('./pthread-raw-cwd-child.mjs', import.meta.url), { workerData: { uncloneable() {} } }), /clone|clon/i);
records.push({ mode: 'construction failure', failedCloneDoesNotLeak: true });
try {
  for (const url of [new URL('./pthread-raw-cwd-child.mjs', import.meta.url), fileURLToPath(new URL('./pthread-raw-cwd-child.mjs', import.meta.url))]) {
    const worker = new Factory(url, { workerData: { mode: 'transfer' } });
    const shared = new SharedArrayBuffer(4), channel = new MessageChannel();
    let bytes;
    const byteResult = new Promise(resolve => channel.port1.once('message', value => { bytes = value; channel.port1.close(); resolve(); }));
    await new Promise((resolve, reject) => {
      const timer = setTimeout(() => reject(new Error('Transfer deadline')), 5000);
      worker.on('error', error => { clearTimeout(timer); reject(error); });
      worker.on('message', message => {
        try {
          if (message.ready) worker.postMessage({ container: { channel: channel.port2 }, shared }, [channel.port2]);
          else if (message.channel) { assert.equal(typeof message.channel.on, 'function'); message.channel.postMessage('ack'); message.channel.close(); }
          else { assert.deepEqual(message, { done: true, cwd: '/' }); clearTimeout(timer); resolve(); }
        } catch (error) { clearTimeout(timer); reject(error); }
      });
    });
    await byteResult;
    assert.deepEqual([...bytes], [0, 128, 255]); assert.equal(Atomics.load(new Int32Array(shared), 0), 42);
    await worker.terminate(); records.push({ mode: typeof url === 'string' ? 'path' : 'URL', nestedPortTransfer: true, returnedPort: true, sharedMemory: true });
  }
  const invalid = new Factory(new URL('./pthread-raw-cwd-child.mjs', import.meta.url), { workerData: { mode: 'error' } });
  await new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error('Error deadline')), 5000);
    invalid.once('error', error => {
      clearTimeout(timer);
      try { assert.ok(error instanceof RangeError); assert.equal(error.message, 'worker error control'); resolve(); }
      catch (failure) { reject(failure); }
    });
  });
  await invalid.terminate(); records.push({ mode: 'error', rangeErrorPreserved: true });
  const pending = new Factory(new URL('./pthread-raw-cwd-child.mjs', import.meta.url), { workerData: { mode: 'pending' } });
  await new Promise((resolve, reject) => { pending.once('message', resolve); pending.once('error', reject); });
  const firstDisposal = Factory.dispose(), secondDisposal = Factory.dispose();
  assert.strictEqual(firstDisposal, secondDisposal);
  await firstDisposal; assert.equal(pending.finished, true);
  assert.throws(() => new Factory('unused'), /disposed/); records.push({ mode: 'dispose', activeWorkerTerminated: true, futureWorkersRejected: true });
  assert.deepEqual(await nativeFiles().readDirectoryName('/proc/self/cwd'), before);
  console.log(JSON.stringify({ passed: true, records, mainCwdPreserved: true }));
} finally { await Factory.dispose(); }
