import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort } from 'node:worker_threads';
import { prepareBunStack } from '../../src/bun-stack.mjs';

if (isMainThread) {
  if (process.env.LASM_STACK_TEST_PREPARE === '1') prepareBunStack(import.meta.url);
  const mode = process.argv[2];
  if (mode === 'stdio') {
    const env = Object.fromEntries(Object.entries(process.env));
    delete env.LASM_STACK_TEST_PREPARE;
    console.error('stderr retained');
    console.log(JSON.stringify({ pid: process.pid, parent: process.ppid,
      args: process.argv.slice(3), env, cwd: process.cwd(), stdin: readFileSync(0).toString('base64') }));
    process.exitCode = 29;
  } else if (mode === 'descriptor') {
    console.log(readFileSync(3, 'utf8'));
  } else if (mode === 'raw-environment') {
    const ffi = createRequire(import.meta.url)('koffi'), libc = ffi.load(null);
    const length = libc.func('size_t strlen(const void *value)');
    const environment = ffi.decode(libc.symbol('environ'), 'void *'), entries = [];
    for (let index = 0;; index++) {
      const item = ffi.decode(environment, index * ffi.sizeof('void *'), 'void *');
      if (!item) break;
      const bytes = Buffer.from(new Uint8Array(ffi.view(item, Number(length(item)))));
      if (!bytes.subarray(0, bytes.indexOf(61)).equals(Buffer.from('LASM_STACK_TEST_PREPARE')))
        entries.push(bytes.toString('base64'));
    }
    console.log(JSON.stringify(entries.sort()));
  } else if (mode === 'signal') {
    console.log(process.pid);
    setInterval(() => {}, 1000);
  } else if (mode === 'recurse') {
    const value = await new Promise((resolve, reject) => {
      const worker = new Worker(new URL(import.meta.url));
      worker.on('message', resolve); worker.on('error', reject);
    });
    console.log(JSON.stringify(value));
  } else throw new Error('Unknown control');
} else {
  const body = [0, 0x20,0,0x45,0x04,0x7f,0x41,0,0x05,0x20,0,0x41,1,0x6b,0x10,0,0x41,1,0x6a,0x0b,0x0b];
  const bytes = new Uint8Array([0,97,115,109,1,0,0,0,
    1,6,1,0x60,1,0x7f,1,0x7f,3,2,1,0,
    7,11,1,7,...Buffer.from('recurse'),0,0,10,body.length+2,1,body.length,...body]);
  const { instance } = await WebAssembly.instantiate(bytes);
  let result;
  try { result = { value: instance.exports.recurse(100_000) }; }
  catch (error) { result = { error: String(error) }; }
  parentPort.postMessage(result);
}
