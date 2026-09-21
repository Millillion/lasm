// Small inputs only: large numeric offsets expose narrowing without allocating
// a large buffer. This diagnoses candidates; Node is the separate reference.
const { StringDecoder } = require('node:string_decoder');
const { Buffer } = require('node:buffer');
const bytes = Buffer.from('abc');
const results = [];
for (const offset of [-1, 0, 1, 3, 4, 2 ** 31 - 1, 2 ** 31, 2 ** 32 - 1, 2 ** 32, 2 ** 32 + 1]) {
  for (const [operation, run] of [
    ['StringDecoder.text', () => new StringDecoder('utf8').text(bytes, offset)],
    ['Buffer.subarray', () => bytes.subarray(offset).toString('hex')],
    ['Buffer.readUInt8', () => bytes.readUInt8(offset)],
    ['Buffer.copy sourceStart', () => bytes.copy(Buffer.alloc(3), 0, offset)],
  ]) {
    let result;
    try { result = { value: run() }; }
    catch (error) { result = { error: error.name, code: error.code ?? null }; }
    results.push({ operation, offset, ...result });
  }
}
process.stdout.write(JSON.stringify({ versions: process.versions, inputBytes: bytes.length, results }) + '\n');
