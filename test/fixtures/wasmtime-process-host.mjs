import assert from 'node:assert/strict';
import { parentPort, workerData, MessageChannel } from 'node:worker_threads';

async function request(operation, handle = 0, argument = 0n, bytes = Buffer.alloc(0)) {
  const channel = new MessageChannel();
  try {
    const reply = new Promise(resolve => channel.port1.once('message', resolve));
    parentPort.postMessage({ request: { kind: 'host', mode: 'request', operation, handle, argument,
      byteBuffer: bytes.buffer, byteOffset: bytes.byteOffset, byteLength: bytes.byteLength },
    port: channel.port2 }, [channel.port2]);
    const result = await reply; assert.equal(result.error, false);
    return Buffer.from(result.byteBuffer, result.byteOffset, result.byteLength);
  } finally { channel.port1.close(); }
}

await request(29, 0, 0n, Buffer.from(workerData.target));
assert.equal((await request(23)).toString(), workerData.target);
const file = Number((await request(1, 0, 1n, Buffer.from('buffered.bin'))).readBigUInt64LE());
await request(3, file, 0n, Buffer.from([0, 255, 0xce, 0xbb, 10]));
// Keep the handle live: normal application exit must flush it too.
parentPort.postMessage({ done: true });
parentPort.close();
