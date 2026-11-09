// The supervisor's process host (src/wasmtime-process-host.mjs): the request
// kinds besides Lean host operations (file imports, WASI and console output),
// notifications and finishing. File imports use stand-in native calls
// (test/fixtures/wasmtime-stand-ins).
import test from 'node:test';
import assert from 'node:assert/strict';
import { installStandIns, standInKoffi } from './fixtures/wasmtime-stand-ins/index.mjs';

installStandIns();
const { createWasmtimeProcessHost } = await import('../src/wasmtime-process-host.mjs');
const create = () => createWasmtimeProcessHost({ programName: '/owned/main.mjs', leanVersion: '4.35.0', args: [], helper: '/stand-in/host/instance.so' });
const host = (operation, handle = 0, argument = 0n, mode = 'request') => ({ kind: 'host', operation, handle, argument, mode, byteBuffer: new ArrayBuffer(0), byteOffset: 0, byteLength: 0 });

test('process host: file imports open the file host once, for the helper library', { skip: !(process.platform === 'linux' && process.arch === 'x64') && 'Linux x64 only' }, async () => {
  const closed = [];
  const call = fn => Object.assign(() => {}, { async: (...args) => { const done = args.pop(); setImmediate(() => done(null, fn(...args))); } });
  const koffi = standInKoffi({ helper: { openat: call(() => 0), fstat: call(() => 0) }, libc: { read: call(() => 0), lseek: call(() => 0n), close: call(fd => { closed.push(fd); return 0; }) } });
  const h = create();
  try {
    assert.deepEqual(await h.request({ kind: 'file-import', operation: 'close', fd: 2 }, 1n), { errno: 0 });
    assert.deepEqual(await h.request({ kind: 'file-import', operation: 'close', fd: 2 }, 1n), { errno: 8 }, 'the same descriptor table');
    assert.deepEqual(closed, [2]);
    assert.deepEqual(koffi.loaded, ['/stand-in/host/instance.so']);
  } finally { h.close(); }
});

test('process host: WASI and console output go to the standard descriptors', async () => {
  const h = create();
  try {
    const empty = new Uint8Array(0);
    assert.deepEqual(await h.request({ kind: 'wasi-stdio', fd: 2, byteBuffer: empty.buffer, byteOffset: 0, byteLength: 0 }, 1n), { errno: 0, written: 0 });
    await assert.rejects(h.request({ kind: 'wasi-stdio', fd: 0, byteBuffer: empty.buffer, byteOffset: 0, byteLength: 0 }, 1n), /Unimplemented WASI descriptor: 0/);
    assert.deepEqual(await h.request({ kind: 'emscripten-output', fd: 2, text: '' }, 1n), {});
    for (const bad of [{ fd: 3, text: '' }, { fd: 0, text: '' }, { fd: 2, text: 5 }, { fd: 2 }])
      await assert.rejects(h.request({ kind: 'emscripten-output', ...bad }, 1n), { code: 'ERR_ASSERTION' });
    await assert.rejects(h.request({ kind: 'other' }, 1n), { code: 'ERR_ASSERTION' });
    await assert.rejects(h.request({ ...host(24), mode: 'other' }, 1n), { code: 'ERR_ASSERTION' });
  } finally { h.close(); }
});

test('process host: notifications run in the background; finish waits for them and reports their failure', async () => {
  const h = create();
  try {
    h.notify(host(24));
    await h.finish();
    // A failed notification fails finish and every later request.
    h.notify({ kind: 'emscripten-output', fd: 9, text: '' });
    await assert.rejects(h.finish(), { code: 'ERR_ASSERTION' });
    await assert.rejects(h.request(host(24), 1n), { code: 'ERR_ASSERTION' });
    // A forced finish neither waits nor reports.
    await h.finish(true);
  } finally { h.close(); }
});

test('process host: releases and starts', async () => {
  const h = create();
  try {
    const { id } = await h.request(host(35, 0, 5n, 'start'), 1n);
    assert.equal(typeof id, 'number');
    assert.deepEqual(await h.request(host(0, id, 0n, 'release'), 1n), {});
    await assert.rejects(h.request(host(91, 12345), 1n), /Unknown asynchronous host request/);
  } finally { h.close(); }
});
