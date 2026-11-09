// The native file worker's message protocol, run in this thread: the worker
// module falls back to the global message port when it has no parentPort, so a
// stand-in port here sends it requests and receives its replies.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, writeFileSync, realpathSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { encodeFileMessage, decodeFileMessage } from '../src/native-file-message.mjs';
import { nativeFiles } from '../src/native-files.mjs';

const posix = process.platform !== 'win32';
const listeners = [], replies = [];
globalThis.addEventListener = (event, listener) => { assert.equal(event, 'message'); listeners.push(listener); };
globalThis.postMessage = (value, transfer) => replies.push({ value: structuredClone(value, { transfer }), transfer });
if (posix) await import('../src/native-file-worker.mjs');
delete globalThis.addEventListener; // postMessage stays: the worker replies through it

async function call(operation, args) {
  const before = replies.length;
  for (const listener of listeners) listener({ data: encodeFileMessage({ operation, args }).message });
  while (replies.length === before) await new Promise(resolve => setImmediate(resolve));
  const { value, transfer } = replies.at(-1);
  return { reply: decodeFileMessage(value), transfer };
}

test('the worker listens on the global port when it has no parent port', { skip: !posix }, () => {
  assert.equal(listeners.length, 1);
});

test('unknown operations are refused, including inherited object keys', { skip: !posix }, async () => {
  for (const operation of ['exitProcess', 'constructor', 'toString', 'openRegular', undefined]) {
    const { reply } = await call(operation, []);
    assert.equal(reply.ok, false);
    assert.equal(reply.error.message, `Invalid native file operation: ${operation}`);
  }
});

test('a malformed message is answered with an error', { skip: !posix }, async () => {
  const before = replies.length;
  listeners[0]({ data: { type: 'unknown' } });
  while (replies.length === before) await new Promise(resolve => setImmediate(resolve));
  assert.deepEqual(decodeFileMessage(replies.at(-1).value), { ok: false, error: { message: 'Invalid native file worker message',
    code: undefined, errno: undefined, nativeMessage: undefined, leanUserError: undefined, errorOrigin: undefined } });
});

test('opened streams reply with only their pointer, descriptor and type; reads move their bytes', { skip: !posix }, async t => {
  const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-worker-protocol-')));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  writeFileSync(join(directory, 'f'), 'hello');
  const { reply: opened } = await call('open', [join(directory, 'f'), 0]);
  assert.equal(opened.ok, true);
  assert.deepEqual(Object.keys(opened.value).sort(), ['fd', 'stream', 'type']);
  assert.equal(opened.value.type, 'file');
  const { reply: read, transfer } = await call('read', [{ stream: opened.value.stream, fd: opened.value.fd }, 10]);
  assert.equal(Buffer.from(read.value).toString(), 'hello');
  assert.equal(transfer.length, 1);
  assert.equal((await call('closeAsync', [{ stream: opened.value.stream }, false])).reply.ok, true);
  const { reply: temporary } = await call('createTemporary', [join(directory, 'tmp.XXXXXX'), false]);
  assert.equal(temporary.ok, true);
  assert.deepEqual(Object.keys(temporary.value.file).sort(), ['fd', 'stream', 'type']);
  assert.match(Buffer.from(temporary.value.path).toString(), /tmp\.\w{6}$/);
  nativeFiles({ synchronous: true }).close(temporary.value.file);
  const { reply: folder } = await call('createTemporary', [join(directory, 'dir.XXXXXX'), true]);
  assert.deepEqual(Object.keys(folder.value), ['path']);
});

test('failures reply with every field Lean\'s error decoding uses', { skip: !posix }, async () => {
  const { reply } = await call('open', ['/nonexistent/lasm/file', 0]);
  assert.deepEqual(reply, { ok: false, error: { message: nativeFiles().strerror(2), code: 'ENOENT', errno: 2, nativeMessage: true,
    leanUserError: undefined, errorOrigin: 'crt' } });
  const removed = (await call('removeFile', ['/nonexistent/lasm/file'])).reply;
  assert.deepEqual([removed.error.errno, removed.error.nativeMessage, removed.error.errorOrigin], [-2, false, 'uv']);
});
