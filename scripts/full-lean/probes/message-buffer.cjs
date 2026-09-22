const assert = require('node:assert/strict');
const { MessageChannel, receiveMessageOnPort } = require('node:worker_threads');
const [kind, transferText, sizeText] = process.argv.slice(2);
const size = Number(sizeText), transfer = transferText === 'transfer';
assert(['buffer','uint8','arraybuffer'].includes(kind) && size > 0 && size <= 8 * 1024 * 1024);
assert(['clone','transfer'].includes(transferText));
const bytes = kind === 'buffer' ? Buffer.alloc(size, 90) : new Uint8Array(size).fill(90);
const rssBefore = process.memoryUsage().rss;
const { port1, port2 } = new MessageChannel();
const start = performance.now();
const message = kind === 'arraybuffer' ? { byteBuffer: bytes.buffer, byteOffset: bytes.byteOffset, byteLength: bytes.byteLength } : { bytes };
port1.postMessage(message, transfer ? [bytes.buffer] : []);
let packet;
while (!(packet = receiveMessageOnPort(port2))) {
  assert(performance.now() - start < 10000, 'Message did not arrive');
  Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0, 1);
}
const result = kind === 'arraybuffer' ? new Uint8Array(packet.message.byteBuffer, packet.message.byteOffset, packet.message.byteLength) : packet.message.bytes;
assert.equal(result.length, size);
for (const index of [0, Math.floor(size / 2), size - 1]) assert.equal(result[index], 90);
console.log(JSON.stringify({kind,transfer,size,ms:performance.now()-start,rssBefore,
  rssAfter:process.memoryUsage().rss,resultType:result.constructor.name,isView:ArrayBuffer.isView(result),
  senderBytes:bytes.byteLength}));
port1.close();port2.close();
