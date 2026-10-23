import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { applicationNotices, leanRuntimeChanges } from '../src/notices.mjs';

const read = path => readFileSync(new URL(path, import.meta.url), 'utf8');

test("the copy of Lasm's licence in built applications is the repository LICENSE", () => {
  assert.equal(read('../src/notices/LASM-LICENSE.txt'), read('../LICENSE'));
});

test('application notices name Lasm, every Lean change, GNU MP and the added licence texts', () => {
  const manifest = { name: 'lean-4.35.0-wasm64', lean: '4.35.0', leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9',
    patches: Object.fromEntries(Object.keys(leanRuntimeChanges).map(name => [name, '0'.repeat(64)])) };
  const text = applicationNotices(manifest, '=== Lean ===\nruntime notices\n');
  for (const heading of ['Lasm', 'Changes to Lean (Apache-2.0 section 4(b))', 'GNU MP', 'LLVM compiler-rt', 'LLVM libunwind', 'libuv LICENSE-extra'])
    assert.ok(text.includes(`=== ${heading} ===`), heading);
  assert.match(text, /Copyright \(c\) 2026 Jordan Last/);
  for (const name of Object.keys(leanRuntimeChanges)) assert.match(text, new RegExp(`  - ${name}: `));
  assert.ok(text.endsWith('=== Lean ===\nruntime notices\n'));
  assert.match(applicationNotices(manifest, '', { cli: true }), /This is the Lasm compiler package/);
});
