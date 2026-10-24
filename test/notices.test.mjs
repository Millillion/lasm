import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { applicationNotices, leanRuntimeChanges, runtimeLinksGmp } from '../src/notices.mjs';

const read = path => readFileSync(new URL(path, import.meta.url), 'utf8');

test("the copy of Lasm's licence in built applications is the repository LICENSE", () => {
  assert.equal(read('../src/notices/LASM-LICENSE.txt'), read('../LICENSE'));
});

const runtimeLibraries = ['Init', 'Std', 'Lean', 'LeanExport', 'Lake', 'leancpp', 'leanrt', 'lasmhost', 'uv', 'lasmsymbols']
  .map(name => `lib/lib${name}.a`);
const runtimeManifest = libraries => ({ name: 'lean-4.35.0-wasm64', lean: '4.35.0', leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9',
  libraries, patches: Object.fromEntries(Object.keys(leanRuntimeChanges).map(name => [name, '0'.repeat(64)])) });

test('application notices name Lasm, every Lean change and the added licence texts, and no GNU MP', () => {
  const manifest = runtimeManifest(runtimeLibraries);
  const text = applicationNotices(manifest, '=== Lean ===\nruntime notices\n');
  for (const heading of ['Lasm', 'Changes to Lean (Apache-2.0 section 4(b))', 'LLVM compiler-rt', 'LLVM libunwind', 'libuv LICENSE-extra'])
    assert.ok(text.includes(`=== ${heading} ===`), heading);
  // Decision 5: runtimes built with USE_GMP=OFF link no GNU MP.
  assert.equal(runtimeLinksGmp(manifest), false);
  assert.doesNotMatch(text, /GNU MP|GMP|LGPL/);
  assert.match(text, /Copyright \(c\) 2026 Jordan Last/);
  for (const name of Object.keys(leanRuntimeChanges)) assert.match(text, new RegExp(`  - ${name}: `));
  assert.ok(text.endsWith('=== Lean ===\nruntime notices\n'));
  assert.match(applicationNotices(manifest, '', { cli: true }), /This is the Lasm compiler package/);
});

test('a runtime that still links libgmp.a keeps the GNU MP notice', () => {
  const manifest = runtimeManifest([...runtimeLibraries.slice(0, 8), 'lib/libgmp.a', ...runtimeLibraries.slice(8)]);
  assert.equal(runtimeLinksGmp(manifest), true);
  const text = applicationNotices(manifest, '');
  assert.ok(text.includes('=== GNU MP ===')); assert.match(text, /  - GNU MP 6\.3\.0 \(LGPL-3\.0-or-later OR GPL-2\.0-or-later/);
});
