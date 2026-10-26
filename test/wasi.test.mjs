// WASI targets (docs/WASI.md): atomics lowering, import checks, the CLI and
// `lasm init` surface, and Lasm.Fetch's library wiring. The built programs
// themselves are checked by .github/workflows/wasi.yml (scripts/wasi/wasi-ci.mjs).
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { lowerAtomics, moduleImports } from '../src/wasi/lower-atomics.mjs';
import { checkWasiModule, wasiLinkSettings } from '../src/wasi/wasi-link.mjs';
import { wasiTargets, fastlyToml, fastlyName } from '../src/wasi/wasi-build.mjs';
import { wasiBuildTargets, parseLasmArguments } from '../src/cli-arguments.mjs';
import { initProject, parseInitArguments, deployTargets } from '../src/init.mjs';
import { libraryModules, importsLibrary, libraryOutputs } from '../src/lasm-library.mjs';

// A minimal module encoder for the tests.
const u32 = n => { const out = []; do { let b = n & 0x7f; n >>>= 7; if (n) b |= 0x80; out.push(b); } while (n); return out; };
const section = (id, body) => [id, ...u32(body.length), ...body];
const vec = items => [...u32(items.length), ...items.flat()];
const name = s => vec([...new TextEncoder().encode(s)].map(b => [b]));
const I32 = 0x7f, I64 = 0x7e;
function moduleWith(functions, { imports = [] } = {}) {
  const types = functions.map(f => [0x60, ...vec(f.params.map(p => [p])), ...vec(f.results.map(p => [p]))]);
  return Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0,
    ...section(1, vec(types)),
    ...(imports.length ? section(2, vec(imports.map(([m, n]) => [...name(m), ...name(n), 0x02, 0x00, 0x01]))) : []),
    ...section(3, vec(functions.map((_, i) => u32(i)))),
    ...(imports.length ? [] : section(5, vec([[0x00, 0x01]]))),
    ...section(7, vec([[...name('memory'), 0x02, 0x00], ...functions.map((f, i) => [...name(f.name), 0x00, ...u32(i)])])),
    ...section(10, vec(functions.map(f => { const body = [0x00, ...f.code, 0x0b]; return [...u32(body.length), ...body]; })))]);
}
const atomics = [
  // i32.atomic.rmw.add offset=4: returns the old value.
  { name: 'add', params: [I32], results: [I32], code: [0x20, 0, 0x41, 5, 0xfe, 0x1e, 2, 4] },
  // i32.atomic.store offset=8, atomic.fence, i32.atomic.load offset=8.
  { name: 'storeLoad', params: [I32], results: [I32], code: [0x20, 0, 0x41, 0xcd, 0x00, 0xfe, 0x17, 2, 8, 0xfe, 0x03, 0x00, 0x20, 0, 0xfe, 0x10, 2, 8] },
  // i32.atomic.rmw8.cmpxchg_u
  { name: 'cmpxchg8', params: [I32, I32, I32], results: [I32], code: [0x20, 0, 0x20, 1, 0x20, 2, 0xfe, 0x4a, 0, 0] },
  // i64.atomic.rmw.sub offset=16
  { name: 'sub64', params: [I32], results: [I64], code: [0x20, 0, 0x42, 3, 0xfe, 0x26, 3, 16] },
  // i32.atomic.rmw16.xchg_u
  { name: 'xchg16', params: [I32, I32], results: [I32], code: [0x20, 0, 0x20, 1, 0xfe, 0x44, 1, 0] },
  // i64.atomic.rmw32.or_u offset=24
  { name: 'or32', params: [I32, I64], results: [I64], code: [0x20, 0, 0x20, 1, 0xfe, 0x39, 2, 24] },
  // memory.atomic.notify: no waiters on one thread.
  { name: 'notify', params: [I32], results: [I32], code: [0x20, 0, 0x41, 1, 0xfe, 0x00, 2, 0] },
];

test('lowerAtomics keeps the behavior of every atomic instruction it lowers', async () => {
  const original = moduleWith(atomics), lowered = lowerAtomics(original);
  assert.notDeepEqual(lowered, original);
  // A module without atomics is returned unchanged: none remain.
  assert.equal(lowerAtomics(lowered), lowered);
  const exercise = async bytes => {
    const { instance } = await WebAssembly.instantiate(bytes);
    const e = instance.exports, view = new DataView(e.memory.buffer), out = [];
    view.setUint32(100 + 4, 40, true);
    out.push(e.add(100), e.add(100), view.getUint32(104, true));
    out.push(e.storeLoad(200), view.getUint32(208, true));
    view.setUint8(300, 9);
    out.push(e.cmpxchg8(300, 9 + 256, 11), view.getUint8(300), e.cmpxchg8(300, 9, 12), view.getUint8(300));
    view.setBigUint64(400 + 16, 10n, true);
    out.push(e.sub64(400), view.getBigUint64(416, true));
    view.setUint16(500, 0xabcd, true);
    out.push(e.xchg16(500, 0x12345), view.getUint16(500, true));
    view.setUint32(600 + 24, 0xf0, true);
    out.push(e.or32(600, 0x10000000fn), view.getUint32(624, true));
    out.push(e.notify(0));
    return out;
  };
  assert.deepEqual(await exercise(lowered), await exercise(original));
  assert.deepEqual(await exercise(lowered), [40, 45, 50, 77, 77, 9, 11, 11, 11, 10n, 7n, 0xabcd, 0x2345, 0xf0n, 0xff, 0]);
});

test('moduleImports and checkWasiModule', () => {
  const bytes = moduleWith([{ name: 'f', params: [], results: [], code: [] }], { imports: [['env', 'memory']] });
  assert.deepEqual(moduleImports(bytes), [{ module: 'env', name: 'memory', kind: 2 }]);
  assert.throws(() => checkWasiModule(bytes, 'wasi'), /env\.memory/);
  const clean = moduleWith([{ name: 'f', params: [], results: [], code: [] }], { imports: [['wasi_snapshot_preview1', 'memory']] });
  checkWasiModule(clean, 'wasi');
  checkWasiModule(clean, 'fastly');
});

test('WASI build targets: CLI arguments and link settings', () => {
  assert.deepEqual(Object.keys(wasiTargets), wasiBuildTargets);
  assert.deepEqual(Object.keys(wasiLinkSettings), wasiBuildTargets);
  for (const target of wasiBuildTargets) {
    const parsed = parseLasmArguments(['build', 'Main.lean', '--target', target]);
    assert.equal(parsed.target, target);
    assert.equal(parsed.profile, 'release');
  }
  assert.throws(() => parseLasmArguments(['Main.lean', '--target', 'wasi']), /only with lasm build/);
});

test('fastly.toml', () => {
  const text = fastlyToml('my-app');
  assert.match(text, /^manifest_version = 3$/m);
  assert.match(text, /^name = "my-app"$/m);
  assert.match(text, /^language = "other"$/m);
  assert.match(text, /^build = "npm run build:fastly"$/m);
  const directory = mkdtempSync(join(tmpdir(), 'lasm-fastly-name-'));
  try {
    writeFileSync(join(directory, 'package.json'), JSON.stringify({ name: '@scope/My App' }));
    assert.equal(fastlyName(directory), 'my-app');
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('lasm init --template fetch --deploy fastly|wasi|spin', () => {
  const parent = mkdtempSync(join(tmpdir(), 'lasm-init-wasi-'));
  try {
    const options = parseInitArguments([join(parent, 'app'), '--template', 'fetch', '--deploy', 'fastly', '--deploy', 'wasi', '--deploy', 'spin', '--deploy', 'workers']);
    const result = initProject(options);
    for (const file of ['fastly.toml', 'spin.toml', 'wrangler.toml', 'Main.lean']) assert.ok(result.files.includes(file), file);
    const pkg = JSON.parse(readFileSync(join(parent, 'app/package.json'), 'utf8'));
    assert.equal(pkg.scripts['build:fastly'], 'lasm build Main.lean --target fastly');
    assert.equal(pkg.scripts['build:wasi'], 'lasm build Main.lean --target wasi');
    assert.equal(pkg.scripts['start:spin'], 'spin up');
    assert.equal(pkg.dependencies, undefined);
    assert.match(readFileSync(join(parent, 'app/Main.lean'), 'utf8'), /import Lasm\.Fetch/);
    assert.match(readFileSync(join(parent, 'app/spin.toml'), 'utf8'), /executor = \{ type = "wagi" \}/);
    assert.match(readFileSync(join(parent, 'app/fastly.toml'), 'utf8'), /^name = "app"$/m);
    assert.match(readFileSync(join(parent, 'app/.gitignore'), 'utf8'), /^pkg\/$/m);
    assert.match(readFileSync(join(parent, 'app/README.md'), 'utf8'), /Fastly Compute/);
    // A WASI command-line program from the plain template.
    initProject(parseInitArguments([join(parent, 'cli'), '--deploy', 'wasi']));
    assert.equal(JSON.parse(readFileSync(join(parent, 'cli/package.json'), 'utf8')).scripts['build:wasi'], 'lasm build Main.lean --target wasi');
  } finally { rmSync(parent, { recursive: true, force: true }); }
  assert.throws(() => parseInitArguments(['x', '--template', 'hono', '--deploy', 'fastly']), /supports the fetch template, not hono/);
  assert.throws(() => parseInitArguments(['x', '--deploy', 'fastly']), /needs a server template/);
  assert.ok(deployTargets.workers.templates.includes('fetch'));
});

test('Lasm.Fetch is part of Lasm\'s Lean library', () => {
  assert.ok(libraryModules.includes('Lasm.Fetch'));
  assert.ok(libraryOutputs().includes('lib/lasm/c/Lasm/Fetch.c'));
  const directory = mkdtempSync(join(tmpdir(), 'lasm-fetch-import-'));
  try {
    writeFileSync(join(directory, 'Main.c'), 'lean_object* initialize_Lasm_Fetch(uint8_t builtin);\n');
    writeFileSync(join(directory, 'Other.c'), 'int x;\n');
    assert.equal(importsLibrary([join(directory, 'Main.c')]), true);
    assert.equal(importsLibrary([join(directory, 'Other.c')]), false);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});
