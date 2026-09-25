import assert from 'node:assert/strict';
import { parentPort, workerData, MessageChannel } from 'node:worker_threads';
if (workerData.mode === 'error') throw new RangeError('worker error control');
if (workerData.mode === 'pending') { parentPort.on('message', () => {}); parentPort.postMessage({ ready: true }); }
else {
  parentPort.once('message', ({ container, shared }) => {
    const port = container.channel;
    assert.equal(typeof port.on, 'function');
    Atomics.store(new Int32Array(shared), 0, 42);
    port.postMessage(Uint8Array.from([0, 128, 255])); port.close();
    const back = new MessageChannel();
    back.port1.once('message', value => {
      assert.equal(value, 'ack'); back.port1.close();
      parentPort.postMessage({ done: true, cwd: Deno.cwd() });
    });
    parentPort.postMessage({ channel: back.port2 }, [back.port2]);
  });
  parentPort.postMessage({ ready: true });
}
