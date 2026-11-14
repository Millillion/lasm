// The wasm-ld translation validator (scripts/link-validation/wasm-ld-map.mjs,
// docs/TESTING.md#translation-validation-of-the-toolchain): real links agree
// with their maps, and every kind of disagreement is reported.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, mkdtempSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { checkLink, parseMap, readModule, initMemoryOperations } from '../scripts/link-validation/wasm-ld-map.mjs';
import { corruptions, prng } from '../scripts/link-validation/corrupt-map.mjs';
import { checkRelocations, inputReader, readArchive, readObject, relocTypes } from '../scripts/link-validation/wasm-ld-relocations.mjs';
import { linkEvidenceDirectory, saveLinkEvidence } from '../src/test-switches.mjs';

const fixtures = new URL('./fixtures/link-validation/', import.meta.url);
const load = name => ({ bytes: readFileSync(new URL(`${name}.wasm`, fixtures)), map: readFileSync(new URL(`${name}.map`, fixtures), 'utf8') });
const names = ['shared', 'active', 'imported', 'archive'];

test('each fixture link agrees with its map', () => {
  for (const name of names) {
    const { bytes, map } = load(name);
    const { problems, stats } = checkLink(bytes, map);
    assert.deepEqual(problems, [], name);
    assert.equal(stats.functions, readModule(bytes).functionTypes, name);
    assert.ok(stats.segments >= 3 && stats.bssSegments === 1 && stats.exportsResolved >= 2, name);
  }
});

test('the map offsets of functions and chunks leave out the section header (wasm-ld 24)', () => {
  const { bytes, map } = load('active');
  const module = readModule(bytes), code = parseMap(map).sections.find(s => s.kind === 'CODE');
  assert.equal(code.functions[0].offset + module.code.section.headerLength, module.code.bodies[0].start);
  assert.equal(code.offset, module.code.section.start);
});

test('__wasm_init_memory: the passive segments copied to the map addresses, the .bss filled', () => {
  const { bytes } = load('imported');
  const module = readModule(bytes), ops = initMemoryOperations(bytes, module.code.bodies[0]);
  assert.equal(ops.unread, null);
  assert.deepEqual(ops.inits.map(o => [o.segment, o.dest, o.size]), [[0, 0x10000n, 12n], [1, 0x10010n, 12n], [2, 0x1001cn, 4n]]);
  assert.deepEqual(ops.fills.map(f => [f.dest, f.size]), [[0x10020n, 0x1130n]]);
});

const replaceRow = (map, pattern, change) => map.split('\n').map(line => pattern.test(line) ? change(line) : line).join('\n');

test('each disagreement is reported', () => {
  const { bytes, map } = load('active');
  const cases = [
    ['a function one byte later', replaceRow(map, /a\.o:\(run\)$/, l => l.replace('      75', '      76')), /function 1 \(a\.o:\(run\)/],
    ['a function one byte larger', replaceRow(map, /b\.o:\(helper\)$/, l => l.replace('      35', '      36')), /bytes with its size field/],
    ['a section larger', replaceRow(map, / TYPE$/, l => l.replace('       b', '       c')), /section TYPE: 0xb bytes, the map says 0xc/],
    ['a segment moved', replaceRow(map, / \.data$/, l => l.replace('   10010', '   10020')), /segment \.data: placed at 0x10010, the map says 0x10020/],
    ['a data symbol outside its chunk', replaceRow(map, / counter$/, l => l.replace('   10018', '   10030')), /data symbol counter/],
    ['a chunk at the wrong file offset', replaceRow(map, /\(\.data\.fp\)$/, l => l.replace('     154', '     155')), /chunk a\.o:\(\.data\.fp\)/],
    ['a global index out of range', replaceRow(map, /__tls_base$/, l => l.replace('       0 ', '       9 ')), /global __tls_base/],
    ['an exported symbol on another function', map.replace(/( +- +fe +35 +)helper$/m, '$1helper2').replace(/( +- +75 +89 +)run$/m, '$1helper'), /export helper: function \d+, the map defines helper as function/],
    ['a section the map leaves out', map.replace(/^.*CUSTOM\(producers\)\n/m, ''), /sections: the module has 12, the map lists 11/],
  ];
  for (const [what, corrupted, expected] of cases) {
    assert.notEqual(corrupted, map, what);
    const { problems } = checkLink(bytes, corrupted);
    assert.ok(problems.some(p => expected.test(p)), `${what}: ${JSON.stringify(problems)}`);
  }
});

test('a module that differs from its map is reported', () => {
  const { bytes, map } = load('active');
  // The export "run" pointed at another function.
  const at = Buffer.from(bytes).indexOf(Buffer.from([3, 0x72, 0x75, 0x6e, 0]));
  assert.ok(at > 0);
  const wrongExport = Buffer.from(bytes); wrongExport[at + 5] ^= 1;
  assert.ok(checkLink(wrongExport, map).problems.some(p => /^export run: function/.test(p)));
  // An unexpected custom section appended.
  const extra = Buffer.concat([bytes, Buffer.from([0, 5, 4, 0x6c, 0x61, 0x73, 0x6d])]);
  const problems = checkLink(extra, map).problems;
  assert.ok(problems.some(p => /unexpected custom section "lasm"/.test(p)) && problems.some(p => /in the module only/.test(p)), JSON.stringify(problems));
  // Not a module, not a map.
  assert.match(checkLink(Buffer.from('nope'), map).problems[0], /^module: /);
  assert.match(checkLink(bytes, 'Addr Off\n').problems[0], /^map: /);
});

test('seeded map corruptions are all reported (the self-test check-wasm-ld.mjs runs on real links)', () => {
  for (const name of names) {
    const { bytes, map } = load(name);
    const exported = readModule(bytes).exports.filter(e => e.kind === 'func').map(e => e.name);
    const all = corruptions(map, prng(7), 45, exported);
    assert.ok(new Set(all.map(c => c.kind)).size >= 8, name);
    for (const { kind, text } of all) assert.ok(checkLink(bytes, text).problems.length > 0, `${name}: ${kind} not reported`);
  }
});

test('LASM_TEST_LINK_EVIDENCE: off by default; on, each link leaves its files', () => {
  assert.equal(linkEvidenceDirectory({}), undefined);
  assert.equal(saveLinkEvidence('final', {}, {}, {}), undefined);
  const root = mkdtempSync(join(tmpdir(), 'lasm-link-evidence-'));
  try {
    const source = join(root, 'x.wasm');
    writeFileSync(source, 'bytes');
    const env = { LASM_TEST_LINK_EVIDENCE: join(root, 'evidence') };
    const first = saveLinkEvidence('final', { 'linked.wasm': source }, { mode: 'final' }, env);
    const second = saveLinkEvidence('edge/x', { 'linked.wasm': source }, {}, env);
    assert.notEqual(first, second);
    assert.equal(readdirSync(env.LASM_TEST_LINK_EVIDENCE).length, 2);
    assert.equal(readFileSync(join(first, 'linked.wasm'), 'utf8'), 'bytes');
    assert.deepEqual(JSON.parse(readFileSync(join(first, 'evidence.json'), 'utf8')), { kind: 'final', files: ['linked.wasm'], mode: 'final' });
    assert.match(second, /edge_x$/);
    const third = saveLinkEvidence('wasi', {}, {}, env, [source, join(root, 'gone.o')]);
    assert.deepEqual(JSON.parse(readFileSync(join(third, 'evidence.json'), 'utf8')).objects, { [source]: 'objects/0000-x.wasm' });
    assert.equal(readFileSync(join(third, 'objects/0000-x.wasm'), 'utf8'), 'bytes');
  } finally { rmSync(root, { recursive: true, force: true }); }
});

// The archive fixture: a.o and c.o as objects, b.o from libb.a, helper wrapped.
const fromFixtures = file => readFileSync(new URL(file, fixtures));
const relocationsOf = bytes => checkRelocations(bytes, load('archive').map, { objectBytes: inputReader(fromFixtures), wraps: ['helper'] });

test('relocations: every function of the archive link against its input object, every site attributed', () => {
  assert.deepEqual(readArchive(fromFixtures('libb.a')).map(m => m.name), ['b.o']);
  const { problems, stats } = relocationsOf(load('archive').bytes);
  assert.deepEqual(problems, []);
  assert.equal(stats.functions, 5);
  assert.equal(stats.functionsMissingInput, 0);
  assert.ok(stats.relocations >= 14 && stats.attributed === stats.relocations, JSON.stringify(stats));
  assert.equal(stats.chunks, 4);
  for (const kind of ['FUNCTION_INDEX_LEB', 'TYPE_INDEX_LEB', 'GLOBAL_INDEX_LEB', 'MEMORY_ADDR_LEB64', 'MEMORY_ADDR_SLEB64', 'MEMORY_ADDR_TLS_SLEB64', 'TABLE_NUMBER_LEB', 'TABLE_INDEX_I64'])
    assert.ok(stats.byKind[kind]?.attributed > 0, kind);
});

test('relocations: a site holding another symbol, or a byte changed outside the sites, is reported', () => {
  const { bytes, map } = load('archive');
  const object = readObject(fromFixtures('a.o')), module = readModule(bytes);
  const code = parseMap(map).sections.find(s => s.kind === 'CODE');
  const run = code.functions.findIndex(f => f.name === 'a.o:(run)');
  const runSymbol = object.symbols.find(s => s.kind === 0 && s.name === 'run' && !s.undefined);
  const inBody = object.module.code.bodies[runSymbol.index - object.imports.func.length], outBody = module.code.bodies[run];
  const base = object.module.code.section.contentStart;
  const call = object.relocations.find(r => relocTypes[r.type][0] === 'FUNCTION_INDEX_LEB' && base + r.offset >= inBody.start && base + r.offset < inBody.end);
  const at = outBody.start + (base + call.offset - inBody.start);
  // The call now names function `run` itself (a padded five-byte LEB128).
  const wrongCall = Buffer.from(bytes);
  const self = module.imports.func + run;
  wrongCall.set([0x80 | (self & 0x7f), 0x80 | ((self >> 7) & 0x7f), 0x80, 0x80, 0x00], at);
  assert.ok(relocationsOf(wrongCall).problems.some(p => /FUNCTION_INDEX_LEB.*the map defines __wrap_helper/.test(p)), JSON.stringify(relocationsOf(wrongCall).problems));
  // A byte of run's body before any relocation site (its local declarations).
  const changed = Buffer.from(bytes);
  changed[outBody.start + 5] ^= 1;
  assert.ok(relocationsOf(changed).problems.some(p => /function a\.o:\(run\): byte \+5 changed outside any relocation/.test(p)), JSON.stringify(relocationsOf(changed).problems));
  // The function pointer fp (initialized data) now names an empty table slot.
  const fp = parseMap(map).sections.find(s => s.kind === 'DATA').segments.flatMap(g => g.chunks).find(c => c.name === 'a.o:(.data.fp)');
  const wrongPointer = Buffer.from(bytes);
  wrongPointer[fp.offset + module.data.section.headerLength] += 5;
  assert.ok(relocationsOf(wrongPointer).problems.some(p => /chunk a\.o:\(\.data\.fp\) at \+0 \(TABLE_INDEX_I64\): table slot \d+ holds no function/.test(p)), JSON.stringify(relocationsOf(wrongPointer).problems));
  // An input that is not there is counted, not guessed.
  const missing = checkRelocations(bytes, map, { objectBytes: () => null, wraps: ['helper'] });
  assert.deepEqual(missing.problems, []);
  assert.equal(missing.stats.functions, 0);
  assert.equal(missing.stats.functionsMissingInput, 5);
});
