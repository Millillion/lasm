import assert from 'node:assert/strict';
import test from 'node:test';
import { invokeConsoleImport, readConsoleString } from '../scripts/full-lean/probes/wasmtime-console.mjs';

function fixture(bytes, base = (1n << 32n) + 7n) {
  const storage = Buffer.from(bytes), views = [];
  return { pointer: base, memoryBytes: base + BigInt(storage.length), views,
    view(offset, size) {
      const index = Number(offset - base);
      assert.ok(index >= 0 && index + size <= storage.length);
      assert.ok(size <= 65536);
      views.push({ offset, size });
      return new DataView(storage.buffer, storage.byteOffset + index, size);
    } };
}

test('all six imports retain separate console and configured output routes', () => {
  const f = fixture(Buffer.from('λ 雪 😀\0unused'));
  const calls = [], console = {};
  for (const method of ['log', 'error', 'warn', 'trace']) console[method] = function (text) {
    assert.equal(this, console); calls.push([method, text]);
  };
  for (let kind = 11; kind <= 16; kind++) invokeConsoleImport({ ...f, kind, console,
    out: text => calls.push(['out', text]), err: text => calls.push(['err', text]) });
  assert.deepEqual(calls, ['log', 'error', 'warn', 'trace', 'out', 'err'].map(method => [method, 'λ 雪 😀']));
});

test('default out/err use the selected console with empty and embedded-NUL strings', () => {
  const calls = [], console = { log: text => calls.push(['log', text]), error: text => calls.push(['error', text]) };
  invokeConsoleImport({ ...fixture([0, 120]), kind: 15, console });
  invokeConsoleImport({ ...fixture([97, 0, 98]), kind: 16, console });
  assert.deepEqual(calls, [['log', ''], ['error', 'a']]);
  assert.equal(readConsoleString({ pointer: 0n, memoryBytes: 3n, view() { assert.fail('Null pointer has no view'); } }), '');
});

test('the pinned short decoder differs from TextDecoder on malformed UTF-8', () => {
  assert.equal(readConsoleString(fixture([0xc0, 0xaf, 0])), '/');
  assert.equal(readConsoleString(fixture([0xed, 0xa0, 0x80, 0])), '\ud800');
  assert.equal(readConsoleString(fixture([0xf0, 0, 0x80, 0x81, 0])), '\u0001');
  assert.equal(readConsoleString(fixture([0xf0])), '\u0000');
  const long = Buffer.concat([Buffer.alloc(17, 97), Buffer.from([0xc0, 0xaf, 0])]);
  assert.equal(readConsoleString(fixture(long)), 'a'.repeat(17) + '\ufffd\ufffd');
});

test('UTF-8 and terminators crossing short views retain all text above 4 GiB', () => {
  for (const prefix of [65534, 65535, 65536]) {
    const text = 'x'.repeat(prefix) + '😀雪';
    const f = fixture(Buffer.from(text + '\0ignored'));
    assert.equal(readConsoleString(f), text);
    assert.ok(f.views.length >= 3);
  }
});

test('invalid pointers and import IDs fail before emitting or reading', () => {
  for (const pointer of [-1n, 1n << 64n, Number.MAX_SAFE_INTEGER + 1, 0.5, '1', 4n]) {
    assert.throws(() => invokeConsoleImport({ kind: 11, pointer, memoryBytes: 3n,
      view() { assert.fail('Invalid pointer must not be read'); },
      console: { log() { assert.fail('Invalid pointer must not emit'); } } }), /uint64|exact integer|exceeds guest memory/);
  }
  assert.throws(() => invokeConsoleImport({ kind: 17 }), /Unknown Emscripten console import/);
});

test('output failures propagate and a malformed view cannot invent bytes', () => {
  const failure = new Error('sink failed');
  assert.throws(() => invokeConsoleImport({ ...fixture([97, 0]), kind: 15, out() { throw failure; } }), error => error === failure);
  assert.throws(() => readConsoleString({ pointer: 1n, memoryBytes: 10n, view: () => new Uint8Array(2) }), /match its span/);
});
