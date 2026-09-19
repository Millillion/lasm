// Minimal engine-only reproduction: no Lean, Emscripten, or large allocation.
const { Worker, isMainThread, parentPort, workerData } = require('node:worker_threads');
const uleb = value => {
  const bytes = [];
  do { bytes.push((value & 127) | (value > 127 ? 128 : 0)); value >>>= 7; } while (value);
  return bytes;
};
const imports = [1, 3, ...Buffer.from('env'), 6, ...Buffer.from('memory'), 2, 7, 1, ...uleb(131072)];
const binary = Uint8Array.from([0, 97, 115, 109, 1, 0, 0, 0, 2, ...uleb(imports.length), ...imports]);
const makeModule = () => new WebAssembly.Module(binary);
const makeMemory = () => new WebAssembly.Memory({ initial: 1n, maximum: 131072n, shared: true, address: 'i64' });
function check(name, module, memory) {
  try { new WebAssembly.Instance(module, { env: { memory } }); return { name, passed: true }; }
  catch (error) { return { name, passed: false, error: String(error) }; }
}
if (isMainThread) {
  const module = makeModule(), memory = makeMemory();
  const parent = check('parent original', module, memory);
  const worker = new Worker(__filename, { workerData: { module, memory } });
  worker.on('message', results => console.log(JSON.stringify([parent, ...results], null, 2)));
  worker.on('error', error => { console.error(error); process.exitCode = 1; });
} else {
  parentPort.postMessage([
    check('worker fresh module and memory', makeModule(), makeMemory()),
    check('worker cloned module and fresh memory', workerData.module, makeMemory()),
    check('worker fresh module and cloned memory', makeModule(), workerData.memory),
  ]);
}
