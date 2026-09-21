const assert = require('node:assert/strict');
const fs = require('node:fs'), path = require('node:path');
const { MessageChannel, Worker } = require('node:worker_threads');
const { createCwdWorkerFactory } = require('../../src/native-pthread-factory.cjs');
const initial = process.cwd(), root = fs.mkdtempSync(path.join(require('node:os').tmpdir(), 'lasm-pthread-cwd-'));
const FactoryWorker = process.argv[2] === 'direct-error' ? Worker : createCwdWorkerFactory();
assert.equal(process.cwd(), initial, 'factory altered the application cwd');
const child = () => new FactoryWorker(path.join(__dirname, 'pthread-cwd-child.cjs'), {
  workerData: 'em-pthread', resourceLimits: { stackSizeMb: 64 } });
void (async () => {
  try {
    if (process.argv[2] === 'direct-error') {
      const worker = child();
      const failed = new Promise(resolve => worker.once('error', resolve));
      worker.postMessage('error');
      const error = await failed;
      assert.equal(error.name, 'RangeError'); assert.equal(error.message, 'intentional worker error');
      await worker.terminate();
      console.log('direct worker error control passed');
      return;
    }
    process.chdir(root); fs.chmodSync(root, 0); fs.rmdirSync(root);
    if (process.argv[2] === 'drop') {
      const worker = child();
      await new Promise((resolve, reject) => {
        worker.once('error', reject); worker.once('message', resolve); worker.postMessage('drop');
      });
      worker.unref();
      console.log('unreferenced factory child permits host exit');
      return;
    }
    const memory = new SharedArrayBuffer(4), worker = child(), { port1, port2 } = new MessageChannel();
    let exceptions = 0;
    const exit = new Promise((resolve, reject) => {
      worker.once('exit', resolve); worker.once('error', reject);
      worker.on('message', data => {
        if (data.cmd === 8) {
          assert.equal(data.error.name, 'RangeError'); assert.equal(data.error.message, 'nested pthread exception'); exceptions++;
        } else if (data.nested) { data.nested.port.postMessage('child port arrived'); data.nested.port.close(); }
        else assert.equal(data, 'child port arrived');
      });
    });
    const forwarded = new Promise(resolve => port1.once('message', resolve));
    worker.postMessage({ memory, port: port2 }, [port2]);
    assert.equal(await forwarded, 'parent port arrived'); port1.close();
    assert.equal(await exit, 0); assert.equal(exceptions, 1); assert.equal(Atomics.load(new Int32Array(memory), 0), 2);
    const failing = child();
    const failed = new Promise(resolve => failing.once('error', resolve));
    failing.postMessage('error');
    const error = await failed; assert.equal(error.name, 'RangeError'); assert.equal(error.message, 'intentional worker error');
    await failing.terminate();
    assert.equal(fs.statSync('/proc/self/cwd').nlink, 0, 'application directory identity changed');
    console.log('private worker cwd, shared memory, transferred ports, errors and shutdown passed');
  } finally { process.chdir(initial); fs.rmSync(root, { recursive: true, force: true }); }
})().catch(error => { console.error(error); process.exitCode = 1; });
