const assert = require('node:assert/strict');
const { Worker, MessageChannel, isMainThread, parentPort, workerData } = require('node:worker_threads');

function makeModule(address, initial, maximum) {
  const imports = [1, 3, 101, 110, 118, 6, 109, 101, 109, 111, 114, 121, 2,
    address === 'i64' ? 7 : 3, initial, maximum];
  return new WebAssembly.Module(Uint8Array.from([
    0, 97, 115, 109, 1, 0, 0, 0, 2, imports.length, ...imports,
  ]));
}

function check({ address, initial, maximum, memory, module }) {
  const amount = value => address === 'i64' ? BigInt(value) : value;
  new WebAssembly.Instance(module, { env: { memory } });
  new WebAssembly.Instance(makeModule(address, initial, maximum), { env: { memory } });
  assert.equal(memory.grow(amount(0)), amount(initial));
  if (initial) assert.equal(Atomics.load(new Int32Array(memory.buffer), 0), 41);
  if (maximum > initial) assert.equal(memory.grow(amount(1)), amount(initial));
  else assert.throws(() => memory.grow(amount(1)), RangeError);
  const pages = Math.min(initial + 1, maximum);
  assert.equal(memory.buffer.byteLength, pages * 65536);
  if (pages) Atomics.store(new Int32Array(memory.buffer), 0, 78);
  return { memory, pages, byte: pages ? Atomics.load(new Int32Array(memory.buffer), 0) : null };
}

if (!isMainThread) {
  const run = (data, port) => {
    try { port.postMessage({ ok: true, ...check(data) }); }
    catch (error) { port.postMessage({ ok: false, error: String(error), stack: error.stack }); }
    if (port !== parentPort) port.close();
  };
  if (workerData.transport === 'workerData') run(workerData, parentPort);
  else parentPort.once('message', data => {
    if (data.port) data.port.once('message', payload => run(payload, data.port));
    else run(data, parentPort);
  });
} else {
  (async () => {
    const [address, initialArg, maximumArg, transport] = process.argv.slice(2);
    assert.ok(['i32', 'i64'].includes(address));
    assert.ok(['workerData', 'postMessage', 'messageChannel'].includes(transport));
    const initial = Number(initialArg), maximum = Number(maximumArg);
    const amount = value => address === 'i64' ? BigInt(value) : value;
    const memory = new WebAssembly.Memory({ initial: amount(initial), maximum: amount(maximum), shared: true, address });
    const module = makeModule(address, initial, maximum);
    new WebAssembly.Instance(module, { env: { memory } });
    if (initial) Atomics.store(new Int32Array(memory.buffer), 0, 41);
    const payload = { address, initial, maximum, memory, module };
    const worker = new Worker(__filename, { workerData: transport === 'workerData' ? { ...payload, transport } : { transport } });
    let channel;
    try {
      let received = false;
      const response = new Promise((resolve, reject) => {
        worker.once('error', reject);
        worker.once('exit', code => { if (!received) reject(new Error(`Worker exited before reply: ${code}`)); });
        const onMessage = data => { received = true; resolve(data); };
        if (transport === 'messageChannel') {
          channel = new MessageChannel();
          channel.port1.once('message', onMessage);
          channel.port1.once('messageerror', reject);
          channel.port1.once('close', () => { if (!received) reject(new Error('Message port closed before reply')); });
          worker.postMessage({ port: channel.port2 }, [channel.port2]);
          channel.port1.postMessage(payload);
        } else {
          worker.once('message', onMessage);
          worker.once('messageerror', reject);
          if (transport === 'postMessage') worker.postMessage(payload);
        }
      });
      const result = await response;
      assert.equal(result.ok, true, result.error);
      const pages = Math.min(initial + 1, maximum);
      assert.equal(result.pages, pages);
      assert.equal(result.byte, pages ? 78 : null);
      new WebAssembly.Instance(module, { env: { memory: result.memory } });
      assert.equal(result.memory.grow(amount(0)), amount(pages));
      assert.equal(memory.buffer.byteLength, pages * 65536);
      if (pages) {
        assert.equal(Atomics.load(new Int32Array(memory.buffer), 0), 78);
        Atomics.store(new Int32Array(result.memory.buffer), 0, 92);
        assert.equal(Atomics.load(new Int32Array(memory.buffer), 0), 92);
      }
      console.log(JSON.stringify({ address, initial, maximum, transport, pages, byte: pages ? 92 : null }));
    } finally {
      channel?.port1.close();
      channel?.port2.close();
      await worker.terminate();
    }
  })().catch(error => { console.error(error); process.exitCode = 1; });
}
