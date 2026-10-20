// Probe (Windows): which ws2_32.dll names koffi can bind for address parsing.
//   node probe-ws2-binding.mjs NEW_OUTPUT [UNUSED]
import { mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { createRequire } from 'node:module';
const require = createRequire(import.meta.url);
const output = resolve(process.argv[2]); mkdirSync(output, { recursive: true });
const ffi = require('koffi'), library = ffi.load('ws2_32.dll'), result = {};
for (const name of ['InetPtonA', 'inet_pton', 'InetPtonW']) {
  try {
    const parse = library.func('__stdcall', name, 'int', ['int', name === 'InetPtonW' ? 'str16' : 'str', 'void *']);
    const out = Buffer.alloc(16); result[name] = { bound: true, value: parse(2, '127.0.0.1', out), bytes: out.subarray(0, 4).toString('hex') };
  } catch (error) { result[name] = { bound: false, error: String(error) }; }
}
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 1) + '\n'); console.log(result);
