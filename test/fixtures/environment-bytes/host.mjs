import assert from 'node:assert/strict';
import { createNodeRuntimeHost } from '../../../src/node-host.mjs';

const host = createNodeRuntimeHost();
const key = 'LASM_RAW_VALUE';
async function call(op, bytes) {
  const result = await host.request(op, 0, 0n, Buffer.from(bytes));
  assert.equal(result.error, false);
  return result.bytes;
}
async function read() {
  const value = await call(22, key);
  return value.length ? value.subarray(1) : undefined;
}
async function listed() {
  const bytes = await call(130, '');
  let offset = 0;
  const number = () => { const result = Number(bytes.readBigUInt64LE(offset)); offset += 8; return result; };
  const string = () => { const size = number(), value = bytes.subarray(offset, offset + size); offset += size; return value; };
  const size = number();
  let found;
  for (let i = 0; i < size; i++) {
    const name = string(), value = string();
    if (name.equals(Buffer.from(key))) { assert.equal(found, undefined); found = value; }
  }
  assert.equal(offset, bytes.length);
  return found;
}
try {
  assert.deepEqual(await read(), Buffer.from(process.argv[2], 'hex'));
  assert.deepEqual(await listed(), Buffer.from(process.argv[2], 'hex'));
  process.env[key] = 'JavaScript λ edit';
  assert.deepEqual(await read(), Buffer.from('JavaScript λ edit'));
  assert.deepEqual(await listed(), Buffer.from('JavaScript λ edit'));
  delete process.env[key];
  assert.equal(await read(), undefined);
  assert.equal(await listed(), undefined);
  await call(132, key + '\0Lean λ edit');
  assert.equal(process.env[key], 'Lean λ edit');
  assert.deepEqual(await read(), Buffer.from('Lean λ edit'));
  await call(133, key);
  assert.equal(process.env[key], undefined);
  assert.equal(await read(), undefined);
  process.env[key] = 'new JavaScript key';
  assert.deepEqual(await read(), Buffer.from('new JavaScript key'));
  assert.deepEqual(await listed(), Buffer.from('new JavaScript key'));
  process.stdout.write('environment host checked\n');
} finally { host.close(); }
