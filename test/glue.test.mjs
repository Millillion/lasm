// The glue program's host (src/glue/glue.mjs, docs/proposals/M6_GLUE.md): the
// field codec, the program's operations and refusals, and the WASI host on
// small hand-made modules (what the program imports, its exit status, an
// answer that is neither ok nor an error).
import test from 'node:test';
import assert from 'node:assert/strict';
import { decodeFields, encodeFields, glueModule, runGlue } from '../src/glue/glue.mjs';
import { forAll } from './helpers/property.mjs';

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

/** A module: `imports` ([module, name, type]), one exported memory with `data`, and `_start` with `code`. */
function wasm({ imports, code, data = [] }) {
  const bytes = text => [...Buffer.from(text)];
  const vec = items => [items.length, ...items.flat()];
  const section = (id, body) => [id, body.length, ...body];
  const name = text => [text.length, ...bytes(text)];
  const types = [[0x60, 1, 0x7f, 0], [0x60, 0, 0], [0x60, 4, 0x7f, 0x7f, 0x7f, 0x7f, 1, 0x7f], [0x60, 0, 1, 0x7f]];
  const body = [0, ...code, 0x0b];
  return new WebAssembly.Module(Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0,
    ...section(1, vec(types)),
    ...section(2, vec(imports.map(([module, field, type]) => [...name(module), ...name(field), 0, type]))),
    ...section(3, vec([[1]])),
    ...section(5, [1, 0, 1]),
    ...section(7, vec([[...name('memory'), 2, 0], [...name('_start'), 0, imports.length]])),
    ...section(10, vec([[body.length, ...body]])),
    ...section(11, vec(data.map(([at, content]) => [0, 0x41, at, 0x0b, ...vec(content)])))]));
}
const exitWith = value => [0x41, value, 0x10, 0];
/** Writes `text` to file descriptor 1 with fd_write (import 0), then returns. */
const writer = text => wasm({ imports: [['wasi_snapshot_preview1', 'fd_write', 2]],
  code: [0x41, 1, 0x41, 0, 0x41, 1, 0x41, 8, 0x10, 0, 0x1a],
  data: [[0, [16, 0, 0, 0, text.length, 0, 0, 0]], [16, [...Buffer.from(text)]]] });

test('the host collects stdout, and reports a program that answers nothing', () => {
  assert.deepEqual(runGlue([], writer('ok:fine')), { ok: 'fine' });
  assert.deepEqual(runGlue([], writer('error:no')), { error: 'no' });
  assert.throws(() => runGlue([], writer('neither')), /^Error: The glue program wrote no answer$/);
});

test('the host reports the exit status, and answers ENOSYS to what it does not provide', () => {
  assert.throws(() => runGlue([], wasm({ imports: [['wasi_snapshot_preview1', 'proc_exit', 0]], code: exitWith(0) })),
    /^Error: The glue program wrote no answer$/);
  assert.throws(() => runGlue([], wasm({ imports: [['wasi_snapshot_preview1', 'proc_exit', 0]], code: exitWith(3) })),
    /^Error: The glue program exited with status 3: $/);
  // sock_accept is not provided: its ENOSYS (52) becomes the exit status.
  assert.throws(() => runGlue([], wasm({ imports: [['wasi_snapshot_preview1', 'proc_exit', 0], ['wasi_snapshot_preview1', 'sched_yield', 3]],
    code: [0x10, 1, 0x10, 0] })), /wrote no answer/);
  assert.throws(() => runGlue([], wasm({ imports: [['wasi_snapshot_preview1', 'proc_exit', 0], ['wasi_snapshot_preview1', 'sock_accept', 3]],
    code: [0x10, 1, 0x10, 0] })), /exited with status 52/);
  assert.throws(() => runGlue([], wasm({ imports: [['env', 'f', 1]], code: [] })),
    /^Error: The glue program imports env\.f, which its host does not provide$/);
});
