import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, readFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { Worker } from 'node:worker_threads';
import { createWasmtimeProcessHost } from '../src/wasmtime-process-host.mjs';
import { numbers } from '../src/node-host.mjs';

const create = () => createWasmtimeProcessHost({ programName: '/owned/main.mjs', leanVersion: '4.34.1', args: ['λ', ''] });
const bytes = packet => Buffer.from(packet.byteBuffer, packet.byteOffset, packet.byteLength);
const packet = (operation, handle = 0, argument = 0n, input = Buffer.alloc(0), mode = 'request') =>
  ({ kind: 'host', operation, handle, argument, mode,
    byteBuffer: input.buffer, byteOffset: input.byteOffset, byteLength: input.byteLength });

test('standalone process host preserves main arguments, application path and both exit modes', async () => {
  const host = create();
  try {
    assert.equal(bytes(await host.request(packet(24), 1n)).toString(), '/owned/main.mjs');
    assert.equal(bytes(await host.request(packet(31), 1n)).toString(), 'λ\0\0');
    for (const [handle, code, force] of [[0, 7, false], [1, 19, true]])
      await assert.rejects(host.request(packet(30, handle, BigInt(code)), 1n), { name: 'LeanExit', code, force });
  } finally { host.close(); }
});

test('standalone completion queue preserves readiness packets and consumes each result once', async () => {
  const host = create();
  try {
    for (const delivery of ['waiting', 'queued']) {
      const { id } = await host.request(packet(35, 0, 5n, Buffer.alloc(0), 'start'), 1n);
      const completion = numbers(id, 42, 0, 3);
      const next = delivery === 'waiting' ? host.request(packet(92), 1n) : undefined;
      assert.equal(bytes(await host.request(packet(91, id, 0n, completion), 1n)).length, 0);
      if (delivery === 'queued') await new Promise(resolve => setTimeout(resolve, 30));
      assert.deepEqual(bytes(await (next ?? host.request(packet(92), 1n))), completion);
      const result = await host.request(packet(90, id), 1n);
      assert.equal(result.error, false); assert.equal(bytes(result).length, 0);
      await assert.rejects(host.request(packet(90, id), 1n), /Unknown asynchronous host request/);
    }
  } finally { host.close(); }
});

test('standalone start inspection retains the original synchronous IO error', async () => {
  const host = create();
  try {
    const ordinary = await host.request(packet(56, 0, 1n), 1n);
    assert.equal(ordinary.error, true);
    const { id } = await host.request(packet(56, 0, 1n, Buffer.alloc(0), 'start'), 1n);
    const started = await host.request(packet(93, id), 1n);
    assert.equal(started.error, true); assert.deepEqual(bytes(started), bytes(ordinary));
    await assert.rejects(host.request(packet(90, id), 1n), /Unknown asynchronous host request/);
  } finally { host.close(); }
});

test('worker requests change the real main-thread cwd and flush a live binary FILE', async () => {
  const original = process.cwd(), directory = mkdtempSync(join(tmpdir(), 'lasm-process-host-'));
  const target = join(directory, 'space λ'); mkdirSync(target);
  const host = create(), expected = Buffer.from([0, 255, 0xce, 0xbb, 10]);
  const worker = new Worker(new URL('./fixtures/wasmtime-process-host.mjs', import.meta.url), { workerData: { target } });
  const complete = new Promise((resolve, reject) => {
    worker.on('error', reject);
    worker.on('message', async message => {
      try {
        if (message.done) { resolve(); return; }
        message.port.postMessage(await host.request(message.request, 1n)); message.port.close();
      } catch (error) { reject(error); }
    });
    worker.on('exit', code => { if (code !== 0) reject(new Error(`Test worker exited ${code}`)); });
  });
  try {
    await complete;
    assert.equal(process.cwd(), target);
    await host.finish();
    assert.deepEqual(readFileSync(join(target, 'buffered.bin')), expected);
  } finally {
    await worker.terminate(); process.chdir(original); host.close();
    rmSync(directory, { recursive: true, force: true });
  }
});
