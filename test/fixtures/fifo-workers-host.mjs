// This child needs an external deadline: blocked native jobs can keep the
// process alive even after the JavaScript event loop has no runnable work.
import assert from 'node:assert/strict';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { writeSync, mkdtempSync, rmdirSync } from 'node:fs';

const [modulePath, directory] = process.argv.slice(2);
const { createNodeRuntimeHost } = await import(pathToFileURL(modulePath).href);
const host = createNodeRuntimeHost();
const ok = async (op, id = 0, arg = 0, bytes = '') => {
  const result = await host.request(op, id, BigInt(arg), Buffer.from(bytes));
  assert.equal(result.error, false, result.bytes.subarray(16).toString());
  return result.bytes;
};
const readers = [], writers = [];
const originalCwd = process.cwd();
for (let i = 0; i < 4; i++) {
  const path = join(directory, i + '.fifo');
  readers.push(Number((await ok(1, 0, 0, path)).readBigUInt64LE()));
  writers.push(Number((await ok(1, 0, 1, path)).readBigUInt64LE()));
}
if (process.argv.includes('--removed-cwd')) {
  const removed = mkdtempSync(join(directory, 'removed-'));
  process.chdir(removed);
  rmdirSync(removed);
  // Let the ordinary idle workers expire, so this really exercises startup
  // with a removed cwd, including writes while all four readers are blocked.
  await new Promise(resolve => setTimeout(resolve, 1200));
}
const reading = readers.map(id => ok(2, id, 1));
await new Promise(resolve => setTimeout(resolve, 300));
writeSync(1, 'four readers started\n');
for (const id of writers) {
  await ok(3, id, 0, 'x');
  await ok(4, id);
}
for (const bytes of await Promise.all(reading)) assert.equal(bytes.toString(), 'x');
for (const id of [...readers, ...writers]) await host.releaseAsync(id);
assert.equal(host.stats().resources, 0);
host.close();
process.chdir(originalCwd);
writeSync(1, 'concurrent FIFO reads and writes completed\n');
