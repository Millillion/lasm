// Retains the input from Bun 1.4.2's negative-offset regression. Node applies
// Buffer.slice's relative offset and rejects the resulting oversized string.
// Record the error code; never print the contents of the large input.
const { Buffer } = require('node:buffer');
const { StringDecoder } = require('node:string_decoder');
const results = [];
const tail = new StringDecoder('utf8').text(Buffer.from('hello world'), 6);
results.push({ label: 'ordinary positive offset', actual: tail, passed: tail === 'world' });
const buffer = Buffer.allocUnsafe(2 ** 31 + 16);
let actual;
try {
  const value = new StringDecoder('utf8').text(buffer, -(2 ** 31));
  actual = { returnedLength: value.length };
} catch (error) {
  actual = { error: error.name, code: error.code ?? null };
}
results.push({ label: 'original negative-offset input follows Node slicing', ...actual,
  passed: actual.code === 'ERR_STRING_TOO_LONG' });
process.stdout.write(JSON.stringify({ byteLength: buffer.length, versions: process.versions, results }) + '\n');
process.exitCode = results.every(result => result.passed) ? 0 : 1;
