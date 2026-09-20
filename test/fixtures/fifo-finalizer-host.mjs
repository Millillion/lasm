// Run in a child with an external deadline: the unfixed synchronous fclose
// blocks this event loop, so an in-process timeout cannot diagnose the deadlock.
import assert from 'node:assert/strict';
import { writeSync } from 'node:fs';
import { pathToFileURL } from 'node:url';

const [modulePath, pipePath, count] = process.argv.slice(2);
const { createNodeRuntimeHost } = await import(pathToFileURL(modulePath).href);
const host = createNodeRuntimeHost();
const ok = async (op, id = 0, arg = 0, bytes = '') => {
  const result = await host.request(op, id, BigInt(arg), Buffer.from(bytes));
  assert.equal(result.error, false, result.bytes.subarray(16).toString());
  return result.bytes;
};
const reader = Number((await ok(1, 0, 0, pipePath)).readBigUInt64LE());
const writer = Number((await ok(1, 0, 1, pipePath)).readBigUInt64LE());
const bytes = Buffer.alloc(Number(count), 120);
await ok(3, writer, 0, bytes);
writeSync(1, 'writer buffered\n');
const reading = new Promise((resolve, reject) => setTimeout(() => {
  ok(2, reader, bytes.length).then(resolve, reject);
}, 100));
await (host.releaseAsync ? host.releaseAsync(writer) : host.release(writer));
assert.deepEqual(await reading, bytes);
await (host.releaseAsync ? host.releaseAsync(reader) : host.release(reader));
assert.equal(host.stats().resources, 0);
host.close();
writeSync(1, 'buffered FIFO finalizer and delayed reader completed\n');
