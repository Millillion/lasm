// Sparse memory32 boundary check. Only the final byte is written. Hex output
// exceeds the engine string limit and must be rejected before encoding bytes.
const { Buffer } = require('node:buffer');
const { StringDecoder } = require('node:string_decoder');
const bytes = 2 ** 32;
const memory = new WebAssembly.Memory({ initial: bytes / 65536, maximum: bytes / 65536, shared: true });
const buffer = Buffer.from(memory.buffer);
if (buffer.length !== bytes) throw new Error('The boundary memory was not created');
buffer[bytes - 1] = 0x41;
const results = [];
for (const method of ['write', 'end']) {
  let result;
  try {
    const value = new StringDecoder('hex')[method](buffer);
    result = { returnedLength: value.length };
  } catch (error) {
    result = { error: error.name, code: error.code ?? null };
  }
  results.push({ label: method + ' rejects oversized hex output', ...result,
    passed: result.code === 'ERR_STRING_TOO_LONG' });
}
for (const offset of [-1, bytes - 1, bytes, bytes + 1]) {
  const expected = offset < bytes ? 'A' : '';
  const actual = new StringDecoder('utf8').text(buffer, offset);
  results.push({ label: 'text offset ' + offset, actual, expected, passed: actual === expected });
}
const record = { scope: 'One sparse 4 GiB memory32 buffer; one byte written, no giant string produced.',
  byteLength: buffer.length, versions: process.versions, results };
process.stdout.write(JSON.stringify(record) + '\n');
process.exitCode = results.every(result => result.passed) ? 0 : 1;
