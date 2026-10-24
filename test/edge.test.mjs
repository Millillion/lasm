// Phase 7 edge build (docs/EDGE.md): the pure-JS host, the module list and the
// generated Worker entry. The Wasm program itself is tested by workers.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createEdgeRuntimeHost } from '../src/edge/edge-host.mjs';
import { edgeModules, workersEntry, workersConfig } from '../src/edge/edge-build.mjs';

const encoder = new TextEncoder(), decoder = new TextDecoder();
const u64 = (bytes, i = 0) => new DataView(bytes.buffer, bytes.byteOffset).getBigUint64(i * 8, true);
const call = (host, op, handle = 0, arg = 0n, text = '') => host.request(op, handle, arg, typeof text === 'string' ? encoder.encode(text) : text);

test('edge host: read-only files with the bundled UTC zone', () => {
  const host = createEdgeRuntimeHost({ stdout: () => {} });
  const opened = call(host, 1, 0, 0n, '/etc/localtime');
  assert.equal(opened.error, false);
  const id = Number(u64(opened.bytes));
  const zone = call(host, 2, id, 4096n).bytes;
  assert.equal(decoder.decode(zone.subarray(0, 4)), 'TZif');
  assert.equal(call(host, 2, id, 4096n).bytes.length, 0, 'end of file');
  assert.equal(u64(call(host, 10, 0, 0n, '/usr/share/zoneinfo/UTC').bytes, 4), 114n, 'size');
  assert.equal(u64(call(host, 10, 0, 0n, '/usr/share/zoneinfo').bytes, 6), 0n, 'a directory');
  assert.deepEqual(decoder.decode(call(host, 13, 0, 0n, '/usr/share/zoneinfo').bytes).split('\0').filter(Boolean).sort(), ['Etc', 'UTC']);
  const missing = call(host, 1, 0, 0n, '/etc/passwd');
  assert.equal(missing.error, true);
  assert.equal(u64(missing.bytes), 1n, 'ENOENT kind');
  assert.equal(call(host, 1, 0, 1n, '/tmp/x').error, true, 'writes are refused');
  assert.equal(call(host, 14, 0, 0n, '/tmp').error, true, 'no directories are created');
});

test('edge host: output lines, env, clocks, random bytes and unavailable operations', () => {
  const lines = [];
  const host = createEdgeRuntimeHost({ env: { GREETING: 'hi' }, stdout: line => lines.push(line) });
  call(host, 3, 1, 0n, 'one\ntw'); call(host, 3, 1, 0n, 'o\nthree');
  assert.deepEqual(lines, ['one', 'two']);
  host.flush();
  assert.deepEqual(lines, ['one', 'two', 'three']);
  assert.equal(decoder.decode(call(host, 22, 0, 0n, 'GREETING').bytes.subarray(1)), 'hi');
  assert.equal(call(host, 22, 0, 0n, 'MISSING').bytes.length, 0);
  assert.ok(u64(call(host, 27).bytes) > 1_700_000_000n, 'wall clock seconds');
  assert.equal(call(host, 28, 0, 32n).bytes.length, 32);
  const process = call(host, 80);
  assert.equal(process.error, true);
  assert.match(decoder.decode(process.bytes.subarray(16)), /Processes is not available in the Lasm edge profile/);
});

test('edge host: Lasm.JS tells Lean it runs on the edge (op 200)', () => {
  const host = createEdgeRuntimeHost({ stdout: () => {} });
  const reply = call(host, 200, 0, 0n, new Uint8Array(4)).bytes;
  assert.deepEqual([...new Uint32Array(reply.slice().buffer)], [1, 1]);
});

test('edge modules: bindings plus configuration, minus Node-only modules', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-edge-'));
  writeFileSync(join(directory, 'package.json'), JSON.stringify({ lasm: { edge: { modules: ['jose'], exclude: ['@hono/node-server'] } } }));
  const bindings = [{ module: 'hono' }, { module: '@hono/node-server' }, { module: 'globalThis' }];
  assert.deepEqual(edgeModules(directory, bindings), ['hono', 'jose']);
  writeFileSync(join(directory, 'package.json'), JSON.stringify({ lasm: { edge: { modules: 'jose' } } }));
  assert.throws(() => edgeModules(directory, []), /must be an array/);
});

test('generated Worker entry and configuration', () => {
  const entry = workersEntry(['hono', '@scope/x']);
  assert.match(entry, /import \* as m0 from "hono";\nimport \* as m1 from "@scope\/x";/);
  assert.match(entry, /const modules = \{ "hono": m0, "@scope\/x": m1 \};/);
  assert.match(entry, /from 'cloudflare:workers'/);
  assert.match(entry, /lasmEdge\.stopped/);
  const config = workersConfig('my-app');
  assert.match(config, /main = "worker.mjs"/);
  assert.match(config, /type = "CompiledWasm"/);
});
