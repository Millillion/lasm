// Run under run-bounded.mjs. Usage: ENGINE FILE shared|unshared [page-count].
// The default grows one memory to 4 GiB + 64 KiB; engines may commit that RAM.
// Use two pages first to validate the fixture without a large memory request.
const assert = require('node:assert/strict');
assert(process.env.LASM_RESOURCE_UNIT, 'Run this memory probe through scripts/full-lean/run-bounded.mjs');
const fs = require('node:fs');
const path = require('node:path');
const { StringDecoder } = require('node:string_decoder');
const { Worker, isMainThread, parentPort, workerData } = require('node:worker_threads');

function uleb(value) {
  const bytes = [];
  do { bytes.push((value & 127) | (value > 127 ? 128 : 0)); value >>>= 7; } while (value);
  return bytes;
}
const name = value => [...uleb(value.length), ...Buffer.from(value)];
const section = (id, bytes) => [id, ...uleb(bytes.length), ...bytes];
function moduleBytes(shared) {
  const get = [0, 0x20, 0, 0x2d, 0, 0, 0x0b];
  const set = [0, 0x20, 0, 0x20, 1, 0x3a, 0, 0, 0x0b];
  return Uint8Array.from([
    0, 97, 115, 109, 1, 0, 0, 0,
    ...section(1, [2, 0x60, 1, 0x7e, 1, 0x7f, 0x60, 2, 0x7e, 0x7f, 0]),
    ...section(2, [1, ...name('env'), ...name('memory'), 2, shared ? 7 : 5, 1, ...uleb(131072)]),
    ...section(3, [2, 0, 1]),
    ...section(7, [2, ...name('get'), 0, 0, ...name('set'), 0, 1]),
    ...section(10, [2, ...uleb(get.length), ...get, ...uleb(set.length), ...set]),
  ]);
}

if (!isMainThread) {
  const { module, memory, view, dataAt, byteLength } = workerData;
  assert.equal(memory.buffer.byteLength, byteLength);
  assert.equal(view.byteOffset, dataAt);
  assert.equal(Buffer.from(view).toString(), 'lean');
  const wasm = new WebAssembly.Instance(module, { env: { memory } }).exports;
  assert.equal(wasm.get(BigInt(dataAt)), 0x6c);
  wasm.set(BigInt(dataAt + 3), 0x4e);
  parentPort.postMessage({ byteOffset: view.byteOffset, value: Buffer.from(view).toString() });
} else {
  main().catch(error => {
    console.error(JSON.stringify({ passed: false, error: String(error), stack: error.stack }));
    process.exitCode = 1;
  });
}

async function main() {
  const mode = process.argv[2];
  assert(['shared', 'unshared'].includes(mode));
  const shared = mode === 'shared';
  const pages = Number(process.argv[3] ?? 65537);
  assert(Number.isSafeInteger(pages) && pages >= 2 && pages <= 131072);
  const results = [];
  const check = (label, fn) => { fn(); results.push({ label, passed: true }); };
  const memory = new WebAssembly.Memory({ initial: 1n, maximum: 131072n, address: 'i64', shared });
  const module = new WebAssembly.Module(moduleBytes(shared));
  const wasm = new WebAssembly.Instance(module, { env: { memory } }).exports;
  assert.equal(memory.grow(BigInt(pages - 1)), 1n);
  const byteLength = pages * 65536;
  const bytes = new Uint8Array(memory.buffer);
  const buffer = Buffer.from(memory.buffer);
  check('memory and Buffer retain full length', () => {
    assert.equal(memory.buffer.byteLength, byteLength);
    assert.equal(bytes.length, byteLength);
    assert.equal(buffer.length, byteLength);
  });
  const offsets = [0, 1, 16, 65535, 2 ** 31 - 1, 2 ** 31, 2 ** 32 - 1, 2 ** 32, 2 ** 32 + 1, byteLength - 1]
    .filter((value, index, all) => value < byteLength && all.indexOf(value) === index);
  for (const [index, offset] of offsets.entries()) {
    check('Wasm/typed-array/Buffer byte at ' + offset, () => {
      wasm.set(BigInt(offset), 31 + index);
      assert.equal(bytes[offset], 31 + index);
      assert.equal(buffer.readUInt8(offset), 31 + index);
      assert.equal(wasm.get(BigInt(offset)), 31 + index);
    });
  }
  check('hot indexed reads preserve wide offsets', () => {
    const read = (view, offset) => view[offset];
    const readBuffer = (view, offset) => view.readUInt8(offset);
    for (let i = 0; i < 20000; i++) assert.equal(readBuffer(buffer, 0), 31);
    for (let i = 0; i < 20000; i++) {
      const index = i % offsets.length;
      assert.equal(read(bytes, offsets[index]), 31 + index);
      assert.equal(readBuffer(buffer, offsets[index]), 31 + index);
    }
  });
  const cross = byteLength > 2 ** 32 ? 2 ** 32 - 2 : 65534;
  check('multi-byte access crosses the boundary', () => {
    buffer.writeUInt32LE(0x21436587, cross);
    assert.equal(buffer.readUInt32LE(cross), 0x21436587);
    assert.equal(new DataView(memory.buffer).getUint32(cross, true), 0x21436587);
    assert.equal(buffer.subarray(cross, cross + 4).toString('hex'), '87654321');
    [0x87, 0x65, 0x43, 0x21].forEach((value, index) => assert.equal(wasm.get(BigInt(cross + index)), value));
  });
  const dataAt = byteLength - 16;
  check('Buffer write, slice, copy, and decoder use a wide start', () => {
    assert.equal(buffer.write('lean', dataAt, 4, 'utf8'), 4);
    const copy = Buffer.alloc(4);
    assert.equal(buffer.copy(copy, 0, dataAt, dataAt + 4), 4);
    assert.equal(copy.toString(), 'lean');
    assert.equal(buffer.subarray(dataAt, dataAt + 4).toString(), 'lean');
    assert.equal(new StringDecoder('utf8').text(buffer, dataAt).slice(0, 4), 'lean');
  });
  const directory = fs.mkdtempSync(path.resolve(__dirname, '../../../.work/buffer-boundary-'));
  const filename = path.join(directory, 'bytes');
  let fd;
  try {
    fd = fs.openSync(filename, 'w+');
    check('filesystem uses wide source and destination offsets', () => {
      assert.equal(fs.writeSync(fd, buffer, dataAt, 4, 0), 4);
      buffer.fill(0, dataAt, dataAt + 4);
      assert.equal(fs.readSync(fd, buffer, dataAt, 4, 0), 4);
      assert.equal(buffer.subarray(dataAt, dataAt + 4).toString(), 'lean');
      assert.equal(wasm.get(BigInt(dataAt)), 0x6c);
    });
  } finally {
    if (fd !== undefined) fs.closeSync(fd);
    if (fs.existsSync(filename)) fs.unlinkSync(filename);
    fs.rmdirSync(directory);
  }
  if (shared) {
    const worker = new Worker(__filename, { workerData: {
      module, memory, dataAt, byteLength, view: new Uint8Array(memory.buffer, dataAt, 4),
    } });
    const result = await new Promise((resolve, reject) => {
      let message;
      const timer = setTimeout(() => {
        worker.terminate();
        reject(new Error('worker exceeded the 30-second probe deadline'));
      }, 30000);
      worker.on('message', value => { message = value; });
      worker.once('error', error => { clearTimeout(timer); reject(error); });
      worker.once('exit', code => {
        clearTimeout(timer);
        code === 0 && message ? resolve(message) : reject(new Error('worker exited ' + code));
      });
    });
    check('worker preserves memory type, view offset, and shared writes', () => {
      assert.equal(result.byteOffset, dataAt);
      assert.equal(result.value, 'leaN');
      assert.equal(wasm.get(BigInt(dataAt + 3)), 0x4e);
    });
  }
  console.log(JSON.stringify({ mode, pages, byteLength, versions: process.versions, results }));
}
