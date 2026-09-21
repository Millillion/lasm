// A dropped Lean Child must neither kill its child nor keep this host alive.
import { pathToFileURL } from 'node:url';
const module = process.argv[2] ? pathToFileURL(process.argv[2]).href : new URL('../../src/node-host.mjs', import.meta.url).href;
const { createNodeRuntimeHost, numbers } = await import(module);
const host = createNodeRuntimeHost();
const string = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
const response = await host.request(80, 0, 0n, Buffer.concat([
  numbers(2, 2, 2, 1, 0, 1, 0, 0), string('/bin/sleep'), string('10'),
]));
if (response.error) throw new Error(response.bytes.subarray(16).toString());
const id = Number(response.bytes.readBigUInt64LE());
console.log(Number(response.bytes.readBigUInt64LE(8)));
host.release(id);
host.close();
