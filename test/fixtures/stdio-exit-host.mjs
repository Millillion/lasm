import assert from 'node:assert/strict';
import { createNodeRuntimeHost, LeanExit } from '../../src/node-host.mjs';

const [mode, timing] = process.argv.slice(2);
assert(['normal', 'force'].includes(mode));
assert(['pending', 'settled'].includes(timing));
const host = createNodeRuntimeHost();
const write = async (fd, text) => {
  const result = await host.request(3, fd, 0n, Buffer.from(text));
  assert.equal(result.error, false);
};
await write(2, 'unbuffered stderr\n');
const writing = write(1, 'buffered stdout\n');
if (timing === 'settled') await writing;
host.close(new LeanExit(19, mode === 'force'));
host.close();
await writing;
