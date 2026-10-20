import test from 'node:test';
import assert from 'node:assert/strict';
import { createNodeProcesses } from '../src/node-process.mjs';
import { nativeFiles } from '../src/native-files.mjs';

// IO.Process.spawn with a piped stdout (upstream pkg/float runs `gzip -dc` this
// way). On Windows every piped spawn failed with EBADF (-4083): Node resolved the
// ucrtbase _pipe descriptor in its own CRT.
test('a spawned child writes to a piped stdout on every platform', async () => {
  const resources = new Map();
  let next = 10;
  const add = resource => { resources.set(next, resource); return next++; };
  const get = id => resources.get(id);
  const release = id => { const resource = resources.get(id); resources.delete(id); if (resource?.stream) nativeFiles().close(resource); };
  const processes = createNodeProcesses({ add, get, release, cwd: () => ({ directory: process.cwd() }) });
  const u64 = (...values) => Buffer.concat(values.map(value => { const b = Buffer.alloc(8); b.writeBigUInt64LE(BigInt(value)); return b; }));
  const string = text => { const bytes = Buffer.from(text); return Buffer.concat([u64(bytes.length), bytes]); };
  const args = ['-e', 'console.log("hello from child")'];
  // modes: stdin inherit (1), stdout piped (0), stderr inherit (1); inherit env,
  // no setsid, argc, no env changes, no cwd; then command and arguments.
  const request = Buffer.concat([u64(1, 0, 1, 1, 0, args.length, 0, 0), string(process.execPath), ...args.map(string)]);
  const reply = await processes.dispatch(80, 0, 0n, request);
  const [child, , , stdoutId] = [0, 8, 16, 24].map(offset => Number(reply.readBigUInt64LE(offset)));
  const stdout = resources.get(stdoutId);
  const line = await nativeFiles().getLine(stdout);
  assert.equal(line.toString().replace(/\r?\n$/, ''), 'hello from child');
  await resources.get(child).exit;
  release(stdoutId);
});
