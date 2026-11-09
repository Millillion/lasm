// The relocatable Wasm object and ar archive readers (src/wasm-objects.mjs) and
// the dev link's archive index, live members and import listing
// (src/application-live-members.mjs), on objects built by the stand-in
// compiler (test/fixtures/link-stand-ins/toolchain.mjs) and hand-made bytes.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { archiveMembers, parseWasmObject, wasmObjects } from '../src/wasm-objects.mjs';
import { archiveIndex, isMemberFile, liveMembers, memberFiles, wasmImports } from '../src/application-live-members.mjs';
import { archive, wasmObject } from './fixtures/link-stand-ins/toolchain.mjs';

const leb = value => { const out = []; do { let byte = value & 0x7f; value >>>= 7; if (value) byte |= 0x80; out.push(byte); } while (value); return out; };
const str = text => [...leb(Buffer.byteLength(text)), ...Buffer.from(text)];
const section = (id, body) => [id, ...leb(body.length), ...body];
const custom = (name, body) => section(0, [...str(name), ...body]);
const header = [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0];
const scratch = t => { const directory = mkdtempSync(join(tmpdir(), 'lasm-objects-')); t.after(() => rmSync(directory, { recursive: true, force: true })); return directory; };

const object = () => wasmObject({
  functions: [{ name: 'initialize_M', refs: ['initialize_Dep', 'l_M_initFn', 'l_x', 'helper'] }, { name: 'helper', local: true, refs: ['lean_io_prim_put_str', 'l_x'] },
    { name: 'leaf', weak: true }],
  data: [{ name: 'l_x' }, { name: '_G_initialized', local: true }],
  imports: { lean_io_prim_put_str: 'lean' },
});

test('a relocatable object: its symbols and, per defined function, the symbols its code references in order', () => {
  const { symbols, references } = parseWasmObject(object());
  const named = symbols.map(({ name, kind, undefined, local }) => ({ name, kind, undefined, local }));
  assert.deepEqual(named, [
    { name: 'initialize_Dep', kind: 0, undefined: true, local: false }, { name: 'l_M_initFn', kind: 0, undefined: true, local: false },
    { name: 'lean_io_prim_put_str', kind: 0, undefined: true, local: false },
    { name: 'initialize_M', kind: 0, undefined: false, local: false }, { name: 'helper', kind: 0, undefined: false, local: true },
    { name: 'leaf', kind: 0, undefined: false, local: false },
    { name: 'l_x', kind: 1, undefined: false, local: false }, { name: '_G_initialized', kind: 1, undefined: false, local: true }]);
  assert.equal(symbols[5].flags & 1, 1, 'weak');
  const names = index => symbols[index].name;
  assert.deepEqual([...references].map(([owner, refs]) => [names(owner), refs.map(names)]),
    [['initialize_M', ['initialize_Dep', 'l_M_initFn', 'l_x', 'helper']], ['helper', ['lean_io_prim_put_str', 'l_x']]]);
});

test('undefined symbols take their import name unless they carry an explicit one; every import kind is read', () => {
  // Imports: a function, a table, a memory, a global, a tag; symbols for each kind, one with an explicit name.
  const imports = section(2, [5, ...str('env'), ...str('f'), 0, 0, ...str('env'), ...str('t'), 1, 0x70, 1, 0, 4, ...str('env'), ...str('m'), 2, 0, 1,
    ...str('env'), ...str('g'), 3, 0x7f, 0, ...str('env'), ...str('e'), 4, 0, 0]);
  const symbols = [6, 0, 0x10, 0, 0, 0x50, 0, ...str('explicit'), 2, 0x10, 0, 4, 0x10, 0, 5, 0x10, 0, 3, 0, 0];
  const bytes = Uint8Array.from([...header, ...section(1, [1, 0x60, 0, 0]), ...imports, ...custom('linking', [2, 8, ...leb(symbols.length), ...symbols])]);
  const parsed = parseWasmObject(bytes);
  assert.deepEqual(parsed.symbols.map(symbol => [symbol.kind, symbol.name]), [[0, 'f'], [0, 'explicit'], [2, 'g'], [4, 'e'], [5, 't'], [3, '']]);
  assert.deepEqual(parsed.references, new Map());
  // A missing import index names nothing.
  const missing = [1, 2, 0x10, 7];
  assert.equal(parseWasmObject(Uint8Array.from([...header, ...custom('linking', [2, 8, ...leb(missing.length), ...missing])])).symbols[0].name, '');
});

test('relocation entries with addends are skipped whole; other sections and subsections are passed over', () => {
  const symbols = [2, 0, 0, 0, ...str('f'), 1, 0x10, ...str('d')];
  const body = [0, 0x41, 0x80, 0x80, 0x80, 0x80, 0, 0x1a, 0x41, 0x80, 0x80, 0x80, 0x80, 0, 0x1a, 0x0b];
  const code = section(10, [1, ...leb(body.length), ...body]);
  // Two R_WASM_MEMORY_ADDR_SLEB (type 4, with a multi-byte addend) references to `d`.
  const reloc = custom('reloc.CODE', [2, 2, 4, 3, 1, 0xff, 0x7f, 4, 10, 1, 5]);
  const linking = custom('linking', [2, 5, 2, 0, 0, 8, ...leb(symbols.length), ...symbols]);
  const bytes = Uint8Array.from([...header, ...section(1, [1, 0x60, 0, 0]), ...section(3, [1, 0]), ...code, ...custom('producers', [0]), ...linking, ...reloc]);
  const { symbols: parsed, references } = parseWasmObject(bytes);
  assert.deepEqual(parsed.map(symbol => symbol.name), ['f', 'd']);
  assert.deepEqual([...references], [[0, [1, 1]]]);
});

test('malformed objects are refused with the reason', () => {
  assert.throws(() => parseWasmObject(Uint8Array.from([0, 0x61, 0x73])), { message: 'Not a Wasm object' });
  assert.throws(() => parseWasmObject(Uint8Array.from([0, 0x61, 0x73, 0x6e, 1, 0, 0, 0])), { message: 'Not a Wasm object' });
  for (const wrong of [[1, 0x61, 0x73, 0x6d], [0, 0x62, 0x73, 0x6d], [0, 0x61, 0x74, 0x6d]])
    assert.throws(() => parseWasmObject(Uint8Array.from([...wrong, 1, 0, 0, 0])), { message: 'Not a Wasm object' });
  assert.deepEqual(parseWasmObject(Uint8Array.from(header)).symbols, []);
  assert.throws(() => parseWasmObject(Uint8Array.from([...header, ...custom('linking', [1])])), { message: 'Unsupported Wasm linking metadata version' });
  assert.throws(() => parseWasmObject(Uint8Array.from([...header, ...section(2, [1, ...str('env'), ...str('x'), 9])])), { message: 'Unknown Wasm import kind' });
  assert.throws(() => parseWasmObject(Uint8Array.from([...header, 1])), { message: 'Truncated Wasm object' });
  assert.throws(() => parseWasmObject(Uint8Array.from([...header, ...section(10, [1, 9, 0])])), { message: 'Truncated Wasm object' });
});

/** An ar archive with hand-made headers: [name, bytes] entries written as given. */
function rawArchive(entries) {
  const head = (name, size) => Buffer.from(name.padEnd(16) + '0'.padEnd(12) + '0'.padEnd(6) + '0'.padEnd(6) + '644'.padEnd(8) + String(size).padEnd(10) + '`\n');
  return Buffer.concat([Buffer.from('!<arch>\n'), ...entries.flatMap(([name, data]) => {
    data = Buffer.from(data);
    return [head(name, data.length), data, ...(data.length % 2 ? [Buffer.from('\n')] : [])];
  })]);
}

test('ar members: symbol tables skipped, GNU long names, BSD names, odd sizes padded', () => {
  const bytes = rawArchive([['/', 'index'], ['__.SYMDEF', 'bsd'], ['__.SYMDEF SORTED', 'bsd'], ['/SYM64/', 'x'], ['//', 'first-long-name.o/\nsecond-long-name.o/\n'],
    ['/0', 'odd'], ['/19', 'b'], ['#1/12', 'bsd-name.o\0\0payload'], ['short.o/', 'xy'], ['plain', 'z']]);
  assert.deepEqual([...archiveMembers(bytes)].map(([name, data]) => [name, Buffer.from(data).toString()]),
    [['first-long-name.o', 'odd'], ['second-long-name.o', 'b'], ['bsd-name.o', 'payload'], ['short.o', 'xy'], ['plain', 'z']]);
  assert.throws(() => [...archiveMembers(Buffer.from('!<arch>'))], { message: 'Not an ar archive' });
  assert.deepEqual([...archiveMembers(Buffer.from('!<arch>\n'))], []);
});

test('every Wasm object of object files and archives; other archive members are passed over', t => {
  const directory = scratch(t);
  const a = object(), b = wasmObject({ functions: [{ name: 'g' }] });
  const loose = join(directory, 'loose.o'), lib = join(directory, 'lib.a');
  writeFileSync(loose, a);
  writeFileSync(lib, Buffer.concat([archive([['one.o', b], ['two.o', a]]).subarray(0), rawArchive([['notes.txt', 'text']]).subarray(8)]));
  const found = [...wasmObjects([loose, lib])];
  assert.deepEqual(found.map(({ file, member }) => [file, member]), [[loose, null], [lib, 'one.o'], [lib, 'two.o']]);
  assert.deepEqual(found[1].object.symbols.map(symbol => symbol.name), ['g']);
  assert.equal(found[0].object.references.size, 2);
});

test('the archive index: symbols to member offsets, and member names, long names included', t => {
  const directory = scratch(t);
  const members = [['Basic.o', wasmObject({ functions: [{ name: 'f' }] })], ['Second.o', wasmObject({ functions: [{ name: 'g' }, { name: 'h' }] })]];
  const bytes = archive(members);
  const lib = join(directory, 'lib.a');
  writeFileSync(lib, bytes);
  const { symbols, names } = archiveIndex(lib);
  assert.deepEqual([...symbols.keys()], ['f', 'g', 'h']);
  assert.equal(symbols.get('g'), symbols.get('h'));
  assert.deepEqual([...names].map(([offset, name]) => [offset === symbols.get('f') ? 'f' : offset === symbols.get('g') ? 'g' : offset, name]),
    [['f', 'Basic.o'], ['g', 'Second.o']]);
  // GNU long member names, after a symbol index of one symbol at the member's header.
  const longNames = 'a-member-with-a-long-name.o/\n', index = Buffer.alloc(4 + 4 + 2);
  const at = 8 + 60 + index.length + 60 + longNames.length + (longNames.length % 2);
  index.writeUInt32BE(1, 0); index.writeUInt32BE(at, 4); index.write('q\0', 8, 'latin1');
  const long = join(directory, 'long.a');
  writeFileSync(long, rawArchive([['/', index], ['//', longNames], ['/0', 'member data']]));
  const longIndex = archiveIndex(long);
  assert.deepEqual([...longIndex.symbols], [['q', at]]);
  assert.deepEqual([...longIndex.names], [[at, 'a-member-with-a-long-name.o']]);
  assert.equal(archiveIndex(lib), archiveIndex(lib), 'cached per archive');
  const plain = join(directory, 'plain.a');
  writeFileSync(plain, rawArchive([['x.o/', 'x']]));
  assert.throws(() => archiveIndex(plain), { message: `No symbol index in ${plain}` });
  const text = join(directory, 'text.a');
  writeFileSync(text, 'not an archive at all, but long enough');
  assert.throws(() => archiveIndex(text), { message: `Not an ar archive: ${text}` });
});

test('live members from a wasm-ld map: code and data sections by symbol, ambiguous names all kept', t => {
  const directory = scratch(t);
  const lib = join(directory, 'libLean.a');
  writeFileSync(lib, archive([['Basic.o', wasmObject({ functions: [{ name: 'l_f' }], data: [{ name: 'l_d' }] })],
    ['Basic.o', wasmObject({ functions: [{ name: 'l_g' }] })], ['Other.o', wasmObject({ functions: [{ name: 'l_o' }] })],
    ['Unused.o', wasmObject({ functions: [{ name: 'l_u' }] })]]));
  const { symbols } = archiveIndex(lib);
  const map = ['    Addr      Off     Size Out     In      Symbol',
    '       -       a0      100 CODE',
    `       -       a0       10         ${lib}(Basic.o):(l_f)`,
    '       -       b0       10                 l_f',
    `       -       c0       10         ${lib}(Other.o):(l_o)`,
    `       -       c0       10         /elsewhere/libX.a(X.o):(l_x)`,
    '     400      200      100 DATA',
    '     400      200       10 .rodata',
    `     400      200       10         ${lib}(Basic.o):(.rodata.l_d)`,
    `     410      210       10         ${lib}(Other.o):(.data.unknown)`].join('\n');
  const live = liveMembers(map, [lib]);
  // Basic.o by l_f; Other.o's data cannot be attributed by symbol, so every member of that name; Unused.o is not live.
  assert.deepEqual(live, { [lib]: [symbols.get('l_f'), symbols.get('l_o')].sort((a, b) => a - b) });
  const ambiguous = liveMembers(`       -       a0      100 CODE\n       -       a0       10         ${lib}(Basic.o):(unattributed)`, [lib]);
  assert.deepEqual(ambiguous, { [lib]: [symbols.get('l_f'), symbols.get('l_g')].sort((a, b) => a - b) });
  // Windows spellings of the archive path in the map.
  const windows = liveMembers(`       -       a0      100 CODE\n       -       a0       10         ${lib.replaceAll('/', '\\\\')}(Basic.o):(l_f)`, [lib]);
  assert.deepEqual(windows, { [lib]: [symbols.get('l_f')] });
  assert.deepEqual(liveMembers('', [lib]), { [lib]: [] });
  // Member objects extracted once.
  const files = memberFiles(live, join(directory, 'members'));
  assert.deepEqual(files, live[lib].map(offset => join(directory, 'members', `libLean-${offset}.lasm-member.o`)));
  assert.deepEqual(parseWasmObject(readFileSync(files[0])).symbols.filter(s => !s.undefined).map(s => s.name), ['l_f', 'l_d']);
  writeFileSync(files[0], 'kept');
  memberFiles(live, join(directory, 'members'));
  assert.equal(readFileSync(files[0], 'utf8'), 'kept', 'an extracted member is not extracted again');
  assert.ok(files.every(isMemberFile) && !isMemberFile(lib));
  assert.deepEqual(memberFiles({ [lib]: [] }, join(directory, 'none')), []);
  assert.ok(existsSync(join(directory, 'none')));
});

test('a program\'s imports: module, name and kind, sorted; unreadable files give undefined', t => {
  const directory = scratch(t);
  const program = join(directory, 'program.wasm');
  const imports = section(2, [5, ...str('env'), ...str('f'), 0, 0, ...str('env'), ...str('t'), 1, 0x70, 1, 0, 4, ...str('env'), ...str('m'), 2, 1, 1, 2,
    ...str('env'), ...str('g'), 3, 0x7f, 0, ...str('a'), ...str('e'), 4, 0, 0]);
  writeFileSync(program, Uint8Array.from([...header, ...section(1, [1, 0x60, 0, 0]), ...imports, ...section(3, [0])]));
  assert.deepEqual(wasmImports(program), ['a\0e\0tag', 'env\0f\0function', 'env\0g\0global', 'env\0m\0memory', 'env\0t\0table']);
  writeFileSync(program, Uint8Array.from([...header, ...section(1, [1, 0x60, 0, 0])]));
  assert.deepEqual(wasmImports(program), []);
  writeFileSync(program, Uint8Array.from([...header, ...section(2, [1, ...str('env'), ...str('x'), 7])]));
  assert.equal(wasmImports(program), undefined);
  writeFileSync(program, 'not wasm');
  assert.equal(wasmImports(program), undefined);
  assert.equal(wasmImports(join(directory, 'missing.wasm')), undefined);
});

test('imports with limits, tags and long names are skipped exactly', t => {
  // A table and a memory without a maximum, then with one, a tag first, and a 200-byte name.
  const long = 'n'.repeat(200);
  const imports = [7, ...str('env'), ...str('tag'), 4, 0, 1, ...str('env'), ...str('t0'), 1, 0x70, 0, 2, ...str('env'), ...str('t1'), 1, 0x70, 1, 2, 3,
    ...str('env'), ...str('m0'), 2, 0, 1, ...str('env'), ...str('m1'), 2, 1, 1, 2, ...str('env'), ...str('g'), 3, 0x7f, 1, ...str(long), ...str('f'), 0, 0];
  const symbols = [2, 0, 0x10, 0, 4, 0x10, 0];
  const bytes = Uint8Array.from([...header, ...section(1, [1, 0x60, 0, 0]), ...section(2, imports), ...custom('linking', [2, 8, ...leb(symbols.length), ...symbols])]);
  assert.deepEqual(parseWasmObject(bytes).symbols.map(symbol => symbol.name), ['f', 'tag']);
  const directory = scratch(t), file = join(directory, 'p.wasm');
  writeFileSync(file, bytes);
  assert.deepEqual(wasmImports(file), ['env\0g\0global', 'env\0m0\0memory', 'env\0m1\0memory', 'env\0t0\0table', 'env\0t1\0table', 'env\0tag\0tag', `${long}\0f\0function`]);
});

test('references are attributed to the body that contains them, in offset order', () => {
  // Three bodies; relocations listed out of order.
  const symbols = [4, 0, 0, 0, ...str('a'), 0, 0, 1, ...str('b'), 0, 0, 2, ...str('c'), 1, 0, ...str('d'), 0, 0, 8];
  const call = target => [0x10, 0x80 | target, 0x80, 0x80, 0x80, 0];
  const bodies = [[0, ...call(1), 0x0b], [0, 0x0b], [0, 0x41, 0x80, 0x80, 0x80, 0x80, 0, 0x1a, ...call(0), 0x0b]];
  const payload = [3, ...bodies.flatMap(body => [...leb(body.length), ...body])];
  // Offsets in the code section payload: body 0 starts at 1 (+1 size byte), body 2 after the others.
  const at0 = 1 + 1 + 2, at2 = 1 + 1 + bodies[0].length + 1 + bodies[1].length + 1 + 2, at2b = at2 + 7;
  const reloc = custom('reloc.CODE', [2, 3, 0, ...leb(at2b), 0, 0, ...leb(at0), 1, 4, ...leb(at2), 3, 0]);
  const bytes = Uint8Array.from([...header, ...section(1, [1, 0x60, 0, 0]), ...section(3, [3, 0, 0, 0]), ...section(10, payload),
    ...custom('linking', [2, 8, ...leb(symbols.length), ...symbols]), ...reloc]);
  const { symbols: parsed, references } = parseWasmObject(bytes);
  const name = index => parsed[index].name;
  assert.deepEqual([...references].map(([owner, refs]) => [name(owner), refs.map(name)]), [['a', ['b']], ['c', ['d', 'a']]]);
});

test('an archive index in the 64-bit format, with an odd size', t => {
  const directory = scratch(t);
  const names = 'sym\0';
  const index = Buffer.alloc(8 + 8 + names.length + 1);
  const at = 8 + 60 + index.length + 1;
  index.writeBigUInt64BE(1n, 0); index.writeBigUInt64BE(BigInt(at), 8); index.write(names, 16, 'latin1');
  const file = join(directory, 'wide.a');
  writeFileSync(file, rawArchive([['/SYM64/', index], ['m.o/', 'xyz']]));
  const { symbols, names: members } = archiveIndex(file);
  assert.equal(symbols.get('sym'), at);
  assert.deepEqual([...members], [[at, 'm.o']]);
});

test('a map symbol found in another member than the map names is not that member\'s; offsets are sorted', t => {
  const directory = scratch(t);
  const lib = join(directory, 'libX.a');
  writeFileSync(lib, archive([['A.o', wasmObject({ functions: [{ name: 'l_a' }] })], ['B.o', wasmObject({ functions: [{ name: 'l_b' }] })],
    ['C.o', wasmObject({ functions: [{ name: 'l_c' }] })]]));
  const { symbols } = archiveIndex(lib);
  const code = rows => '       -       a0      100 CODE\n' + rows.map(([member, section]) => `       -       a0       10         ${lib}(${member}):(${section})`).join('\n');
  // l_a is A.o's, not C.o's: C.o is kept as an unattributed name, A.o is not.
  assert.deepEqual(liveMembers(code([['C.o', 'l_a']]), [lib]), { [lib]: [symbols.get('l_c')] });
  assert.deepEqual(liveMembers(code([['C.o', 'l_c'], ['A.o', 'l_a']]), [lib]), { [lib]: [symbols.get('l_a'), symbols.get('l_c')] });
  // Doubled separators in the map's spelling of the archive path.
  assert.deepEqual(liveMembers(code([['B.o', 'l_b']]).replace(lib, lib.replaceAll('/', '//')), [lib]), { [lib]: [symbols.get('l_b')] });
});
