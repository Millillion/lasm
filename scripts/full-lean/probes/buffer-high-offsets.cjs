// Independent high-offset operations, including the typed-array path Lasm uses.
// Run under run-bounded.mjs: ENGINE FILE shared|unshared [page-count].
const assert = require('node:assert/strict');
assert(process.env.LASM_RESOURCE_UNIT, 'Run this probe through run-bounded.mjs');
const fs = require('node:fs');
const path = require('node:path');
const { StringDecoder } = require('node:string_decoder');
const { Worker, isMainThread, parentPort, workerData } = require('node:worker_threads');
const payload = [108, 101, 97, 110];
const sentinel = [17, 34, 51, 68];

if (!isMainThread) {
  parentPort.postMessage({ offset: workerData.view.byteOffset, bytes: Array.from(workerData.view),
    reconstructed: Array.from(new Uint8Array(workerData.memory.buffer, workerData.offset, 4)) });
} else main().catch(error => { console.error(error); process.exitCode = 1; });

async function main() {
  const shared = process.argv[2] === 'shared';
  assert(['shared', 'unshared'].includes(process.argv[2]));
  const pages = Number(process.argv[3] ?? 65537);
  assert(Number.isSafeInteger(pages) && pages >= 2 && pages <= 131072);
  const memory = new WebAssembly.Memory({ initial: 1n, maximum: 131072n, address: 'i64', shared });
  memory.grow(BigInt(pages - 1));
  const bytes = new Uint8Array(memory.buffer);
  const buffer = Buffer.from(memory.buffer);
  const offset = bytes.length - 16;
  const low = offset >= 2 ** 32 ? offset % 2 ** 32 : 16;
  const highBytes = () => Array.from(new Uint8Array(memory.buffer, offset, 4));
  const lowBytes = () => Array.from(new Uint8Array(memory.buffer, low, 4));
  const results = [];
  async function check(label, fn) {
    bytes.set(payload, offset);
    bytes.set(sentinel, low);
    const observed = {};
    try { await fn(observed); results.push({ label, passed: true, observed }); }
    catch (error) { results.push({ label, passed: false, observed,
      error: { name: error.name, code: error.code, message: error.message } }); }
  }
  await check('Buffer.write with high offset', observed => {
    bytes.fill(0, offset, offset + 4);
    observed.written = buffer.write('lean', offset, 4, 'utf8');
    Object.assign(observed, { high: highBytes(), low: lowBytes() });
    assert.equal(observed.written, 4); assert.deepEqual(observed.high, payload); assert.deepEqual(observed.low, sentinel);
  });
  await check('Buffer.copy with high source offset', observed => {
    const target = Buffer.alloc(4);
    observed.copied = buffer.copy(target, 0, offset, offset + 4);
    observed.bytes = Array.from(target);
    assert.equal(observed.copied, 4); assert.deepEqual(observed.bytes, payload);
  });
  await check('Buffer.copy with high destination offset', observed => {
    bytes.fill(0, offset, offset + 4);
    observed.copied = Buffer.from(payload).copy(buffer, offset, 0, 4);
    Object.assign(observed, { high: highBytes(), low: lowBytes() });
    assert.equal(observed.copied, 4); assert.deepEqual(observed.high, payload); assert.deepEqual(observed.low, sentinel);
  });
  await check('Buffer.subarray with high start', observed => {
    const view = buffer.subarray(offset, offset + 4);
    Object.assign(observed, { offset: view.byteOffset, bytes: Array.from(view) });
    assert.equal(observed.offset, offset); assert.deepEqual(observed.bytes, payload);
  });
  await check('Buffer.toString with high start', observed => {
    observed.value = buffer.toString('utf8', offset, offset + 4); assert.equal(observed.value, 'lean');
  });
  await check('Buffer.fill with high start', observed => {
    buffer.fill(90, offset, offset + 4);
    Object.assign(observed, { high: highBytes(), low: lowBytes() });
    assert.deepEqual(observed.high, [90, 90, 90, 90]); assert.deepEqual(observed.low, sentinel);
  });
  await check('Buffer scalar read/write with high offset', observed => {
    observed.read = buffer.readUInt8(offset);
    observed.end = buffer.writeUInt8(90, offset);
    Object.assign(observed, { high: highBytes(), low: lowBytes() });
    assert.equal(observed.read, 108); assert.equal(observed.end, offset + 1);
    assert.deepEqual(observed.high, [90, 101, 97, 110]); assert.deepEqual(observed.low, sentinel);
  });
  await check('StringDecoder.text with high start', observed => {
    observed.value = new StringDecoder('utf8').text(buffer, offset).slice(0, 4);
    assert.equal(observed.value, 'lean');
  });
  await check('Lasm typed-array slice/set and small Buffer conversion', observed => {
    const copied = bytes.slice(offset, offset + 4);
    const outgoing = Buffer.from(copied);
    bytes.fill(0, offset, offset + 4);
    bytes.set(outgoing, offset);
    Object.assign(observed, { copyOffset: copied.byteOffset, copied: Array.from(outgoing), high: highBytes(), low: lowBytes() });
    assert.equal(observed.copyOffset, 0); assert.deepEqual(observed.copied, payload);
    assert.deepEqual(observed.high, payload); assert.deepEqual(observed.low, sentinel);
  });
  const directory = fs.mkdtempSync(path.resolve(__dirname, '../../../.work/buffer-high-offset-'));
  const filename = path.join(directory, 'bytes');
  const fd = fs.openSync(filename, 'w+');
  try {
    await check('fs.writeSync with high source offset', observed => {
      observed.written = fs.writeSync(fd, buffer, offset, 4, 0);
      observed.file = Array.from(fs.readFileSync(filename));
      assert.equal(observed.written, 4); assert.deepEqual(observed.file, payload);
    });
    await check('fs.readSync with high destination offset', observed => {
      fs.writeSync(fd, Buffer.from(payload), 0, 4, 0);
      bytes.fill(0, offset, offset + 4);
      observed.read = fs.readSync(fd, buffer, offset, 4, 0);
      Object.assign(observed, { high: highBytes(), low: lowBytes() });
      assert.equal(observed.read, 4); assert.deepEqual(observed.high, payload); assert.deepEqual(observed.low, sentinel);
    });
  } finally { fs.closeSync(fd); fs.unlinkSync(filename); fs.rmdirSync(directory); }
  if (shared) await check('shared view cloning and numeric-offset reconstruction', async observed => {
    const worker = new Worker(__filename, { workerData: { memory, offset, view: new Uint8Array(memory.buffer, offset, 4) } });
    const result = await new Promise((resolve, reject) => {
      let message;
      const timer = setTimeout(() => { worker.terminate(); reject(new Error('Worker exceeded 30-second probe deadline')); }, 30000);
      worker.on('message', value => { message = value; });
      worker.once('error', error => { clearTimeout(timer); reject(error); });
      worker.once('exit', code => { clearTimeout(timer); code === 0 && message ? resolve(message) : reject(new Error('Worker exited ' + code)); });
    });
    Object.assign(observed, result);
    assert.deepEqual(observed.reconstructed, payload);
    assert.equal(observed.offset, offset); assert.deepEqual(observed.bytes, payload);
  });
  const record = { shared, pages, offset, wrappedOffset: low, versions: process.versions, results };
  console.log(JSON.stringify(record));
  process.exitCode = results.every(item => item.passed) ? 0 : 1;
}
