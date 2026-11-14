// The glue program's host (src/glue/glue.mjs, docs/proposals/M6_GLUE.md): the
// field codec, the program's operations and refusals, and the WASI host on
// small hand-made modules (what the program imports, its exit status, an
// answer that is neither ok nor an error).
import test from 'node:test';
import assert from 'node:assert/strict';
import { decodeFields, encodeFields, glueModule, runGlue } from '../src/glue/glue.mjs';
import { forAll } from './helpers/property.mjs';

// Proposition: Lasm.Cli.Candidates.glue_fields_round_trip
//   ∀ fields : List String, decodeFields (encodeFields fields) = .ok fields
test('fields round-trip through the codec, whatever their text', () => {
  forAll(g => g.array(g.int(0, 6), () => g.string('ab:0λ\n\\', 0, 8)), fields => {
    const encoded = encodeFields(fields);
    assert.deepEqual(decodeFields(encoded.toString('utf8')), fields);
  });
  assert.equal(encodeFields(['λ', '', '12', '😀']).toString('utf8'), '2:λ0:2:124:😀');
  assert.deepEqual(decodeFields('4:😀2:λ'), ['😀', 'λ']);
  for (const bad of ['3:ab', 'x:a', ':a', '1a', '-1:a'])
    assert.throws(() => decodeFields(bad), /The glue program wrote a malformed field/, bad);
});

test('the glue program runs its operations and refuses malformed requests', () => {
  assert.deepEqual(runGlue(['initializationSchedule', 'initialize_A', '2', 'initialize_A', '1', 'initialize_B', 'initialize_B', '0', '1', 'initialize_B']),
    { ok: '12:initialize_B' });
  assert.deepEqual(runGlue(['compactInitializerWrappers', '1', 'nope', '0', '0']), { error: 'Unexpected initializer name nope' });
  assert.deepEqual(runGlue(['frobnicate']), { error: 'unknown operation frobnicate' });
  assert.deepEqual(runGlue(['compactInitializerWrappers', '2', 'initialize_A']), { error: 'input ends before a field' });
  assert.deepEqual(runGlue([]), { error: 'input ends before a field' });
  assert.deepEqual(runGlue(['compactInitializerWrappers', 'many']), { error: 'a count is not a number' });
  // The module is compiled once per process.
  assert.equal(glueModule(), glueModule());
  assert.ok(WebAssembly.Module.imports(glueModule()).every(({ module }) => module === 'wasi_snapshot_preview1'));
});

/** Signed LEB128, as i32.const and i64.const read it. */
const sleb = value => {
  const out = [];
  for (;;) {
    const byte = value & 0x7f;
    value >>= 7;
    if ((value === 0 && !(byte & 0x40)) || (value === -1 && byte & 0x40)) return [...out, byte];
    out.push(byte | 0x80);
  }
};
const uleb = value => { const out = []; do { let b = value & 0x7f; value >>>= 7; if (value) b |= 0x80; out.push(b); } while (value); return out; };
const i32 = value => [0x41, ...sleb(value)];
const call = (index, ...args) => [...args.flat(), 0x10, index];
/** Stores the low byte of the i32 an expression leaves at `address`. */
const store = (address, expression) => [...i32(address), ...expression, 0x3a, 0, 0];
/** WASI's types: proc_exit (i32), a nullary function, fd_read/fd_write (4 × i32 → i32), clock_time_get (i32 i64 i32 → i32), i32-returning nullary. */
const types = [[0x60, 1, 0x7f, 0], [0x60, 0, 0], [0x60, 4, 0x7f, 0x7f, 0x7f, 0x7f, 1, 0x7f], [0x60, 3, 0x7f, 0x7e, 0x7f, 1, 0x7f], [0x60, 0, 1, 0x7f]];
const typeOf = { proc_exit: 0, fd_read: 2, fd_write: 2, clock_time_get: 3 };

/** A module importing `imports` (WASI names, or [module, name, type]), with one exported memory holding `data`, and `_start` running `code`. */
function wasm({ imports, code, data = [] }) {
  const vec = items => [...uleb(items.length), ...items.flat()];
  const section = (id, body) => [id, ...uleb(body.length), ...body];
  const name = text => vec([...Buffer.from(text)]);
  const entries = imports.map(i => typeof i === 'string' ? ['wasi_snapshot_preview1', i, typeOf[i] ?? 4] : i);
  const body = [0, ...code, 0x0b];
  return new WebAssembly.Module(Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0,
    ...section(1, vec(types)),
    ...section(2, vec(entries.map(([module, field, type]) => [...name(module), ...name(field), 0, type]))),
    ...section(3, vec([[1]])),
    ...section(5, [1, 0, 1]),
    ...section(7, vec([[...name('memory'), 2, 0], [...name('_start'), 0, entries.length]])),
    ...section(10, vec([[...uleb(body.length), ...body]])),
    ...section(11, vec(data.map(([at, content]) => [0, ...i32(at), 0x0b, ...vec([...content])])))]));
}
/** Little-endian i32s, for iovec arrays. */
const words = (...values) => values.flatMap(v => [v & 0xff, (v >> 8) & 0xff, (v >> 16) & 0xff, (v >>> 24) & 0xff]);
/** Writes `text` to file descriptor `fd` with fd_write (import 0), then returns. */
const writer = (text, fd = 1) => wasm({ imports: ['fd_write'],
  code: [...call(0, i32(fd), i32(0), i32(1), i32(8)), 0x1a],
  data: [[0, words(16, Buffer.byteLength(text))], [16, Buffer.from(text)]] });
const exitWith = (value, index = 0) => call(index, i32(value));

test('the host collects stdout, and reports a program that answers nothing', () => {
  assert.deepEqual(runGlue([], writer('ok:fine')), { ok: 'fine' });
  assert.deepEqual(runGlue([], writer('error:no')), { error: 'no' });
  assert.throws(() => runGlue([], writer('neither')), /^Error: The glue program wrote no answer$/);
  assert.throws(() => runGlue([], writer('to stderr', 2)), /^Error: The glue program wrote no answer: to stderr$/);
  assert.throws(() => runGlue([], writer('ok:nowhere', 3)), /^Error: The glue program wrote no answer$/);
});

test('the host reads stdin across buffers, counts what it reads and writes, and refuses other descriptors', () => {
  // fd_read of the request into two buffers (3 and 10 bytes at 100), its count at 32 and result at 36; fd_read of
  // descriptor 3, result at 37; fd_write of two buffers to stdout, count at 40; fd_write to descriptor 5, result at 44;
  // then what was read and the counts and results, to stdout.
  const module = wasm({ imports: ['fd_read', 'fd_write'],
    code: [...store(36, call(0, i32(0), i32(0), i32(2), i32(32))), ...store(37, call(0, i32(3), i32(0), i32(2), i32(32))),
      ...store(48, call(1, i32(1), i32(16), i32(2), i32(40))),
      ...store(44, call(1, i32(5), i32(16), i32(1), i32(52))),
      ...call(1, i32(1), i32(200), i32(6), i32(52)), 0x1a],
    data: [[0, words(100, 3, 103, 10)], [16, words(97, 3, 112, 0)], [200, words(100, 13, 32, 1, 36, 1, 37, 1, 40, 1, 44, 1)], [97, Buffer.from('ok:')]] });
  // The request is the encoded fields: "7:abcdefg" is 9 bytes.
  const { ok } = runGlue(['abcdefg'], module);
  const rest = Buffer.from(ok);
  assert.equal(rest.subarray(0, 13).toString(), '7:abcdefg\0\0\0\0', 'read across both buffers, in order');
  assert.deepEqual([...rest.subarray(13)], [9, 0, 8, 3, 8], 'read 9 bytes; fd_read of 3 refused; wrote 3 bytes; fd_write to 5 refused');
});

test('the host stops a read at the end of the request', () => {
  // A read into 2 bytes at 100 and 4 at 102, then one into 4 at 106 (a request of 5 bytes): counts at 32 and 33, then the 8 bytes and counts out.
  const module = wasm({ imports: ['fd_read', 'fd_write'],
    code: [...call(0, i32(0), i32(0), i32(2), i32(32)), 0x1a, ...call(0, i32(0), i32(48), i32(1), i32(33)), 0x1a,
      ...call(1, i32(1), i32(16), i32(2), i32(40)), 0x1a],
    data: [[0, words(100, 2, 102, 4)], [48, words(106, 4)], [16, words(97, 13, 32, 2)], [97, Buffer.from('ok:')]] });
  const rest = Buffer.from(runGlue(['xyz'], module).ok);
  // "3:xyz" fills 2 bytes, then 3 of the next 4 (the read stops there); the second read finds nothing.
  assert.deepEqual([...rest], [...Buffer.from('3:xyz\0\0\0\0\0'), 5, 0]);
});

test('the clock reads 0', () => {
  // clock_time_get(1, 0, 64) over 8 bytes of 0x41 ("A"), then "ok:" and those 8 bytes and the result out.
  const module = wasm({ imports: ['clock_time_get', 'fd_write'],
    code: [...store(72, [...i32(1), 0x42, 0, ...i32(64), 0x10, 0]), ...call(1, i32(1), i32(0), i32(3), i32(40)), 0x1a],
    data: [[0, words(97, 3, 64, 8, 72, 1)], [64, Buffer.from('AAAAAAAA')], [97, Buffer.from('ok:')]] });
  assert.deepEqual([...Buffer.from(runGlue([], module).ok)], [0, 0, 0, 0, 0, 0, 0, 0, 0]);
});

test('the host reports the exit status, and answers ENOSYS to what it does not provide', () => {
  assert.throws(() => runGlue([], wasm({ imports: ['proc_exit'], code: exitWith(0) })), /^Error: The glue program wrote no answer$/);
  assert.throws(() => runGlue([], wasm({ imports: ['proc_exit'], code: exitWith(3) })), /^Error: The glue program exited with status 3: $/);
  assert.deepEqual(runGlue([], wasm({ imports: ['fd_write', 'proc_exit'], code: [...call(0, i32(1), i32(0), i32(1), i32(8)), 0x1a, ...exitWith(0, 1)],
    data: [[0, words(16, 4)], [16, Buffer.from('ok:!')]] })), { ok: '!' });
  // An error on stderr comes with the status.
  assert.throws(() => runGlue([], wasm({ imports: ['fd_write', 'proc_exit'], code: [...call(0, i32(2), i32(0), i32(1), i32(8)), 0x1a, ...exitWith(7, 1)],
    data: [[0, words(16, 6)], [16, Buffer.from(' boom\n')]] })), /^Error: The glue program exited with status 7: boom$/);
  // Whatever WASI call the host does not provide answers ENOSYS (52), here as the exit status.
  for (const name of ['sched_yield', 'random_get', 'args_sizes_get', 'environ_get', 'fd_close', 'fd_fdstat_get', 'path_open', 'clock_res_get'])
    assert.throws(() => runGlue([], wasm({ imports: ['proc_exit', ['wasi_snapshot_preview1', name, 4]], code: [0x10, 1, 0x10, 0] })), /exited with status 52/, name);
  assert.throws(() => runGlue([], wasm({ imports: [['env', 'f', 1]], code: [] })),
    /^Error: The glue program imports env\.f, which its host does not provide$/);
  assert.throws(() => runGlue([], wasm({ imports: [['wasi_snapshot_preview1', 'memory', 1]], code: [] })));
  // A trap is not an exit: it propagates.
  assert.throws(() => runGlue([], wasm({ imports: [], code: [0] })), WebAssembly.RuntimeError);
});
