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

test('licence files of compiled Lake dependencies are collected, the project and toolchain excluded', async () => {
  const { mkdtempSync, mkdirSync, writeFileSync, rmSync } = await import('node:fs');
  const { join } = await import('node:path');
  const { tmpdir } = await import('node:os');
  const { lakeDependencyLicenses, dependencyNotices } = await import('../src/notices.mjs');
  const root = mkdtempSync(join(tmpdir(), 'lasm-dependency-licenses-'));
  try {
    const put = (path, text) => { mkdirSync(join(root, path, '..'), { recursive: true }); writeFileSync(join(root, path), text); };
    put('app/lakefile.toml', 'name = "app"\n'); put('app/Main.lean', ''); put('app/LICENSE', 'own licence');
    put('app/.lake/packages/zip/lakefile.lean', 'import Lake\nopen Lake DSL\npackage «lean-zip»\n');
    put('app/.lake/packages/zip/Zip/Basic.lean', ''); put('app/.lake/packages/zip/c/io_ffi.c', '');
    put('app/.lake/packages/zip/LICENSE', 'Apache zip'); put('app/.lake/packages/zip/NOTICE.md', 'zip notice');
    put('app/.lake/packages/bare/lakefile.toml', 'name = "bare"\n'); put('app/.lake/packages/bare/B.lean', '');
    put('toolchain/src/lean/Init.lean', '');
    const files = ['app/Main.lean', 'app/.lake/packages/zip/Zip/Basic.lean', 'app/.lake/packages/zip/c/io_ffi.c',
      'app/.lake/packages/bare/B.lean', 'toolchain/src/lean/Init.lean'].map(path => join(root, path));
    const packages = lakeDependencyLicenses(join(root, 'app'), files, { exclude: [join(root, 'toolchain')] });
    assert.deepEqual(packages.map(pkg => [pkg.name, pkg.files.map(file => file.name)]), [['bare', []], ['lean-zip', ['LICENSE', 'NOTICE.md']]]);
    const text = dependencyNotices(packages);
    assert.match(text, /- bare: no licence file found/);
    assert.match(text, /=== Lake dependency lean-zip: LICENSE ===\nApache zip/);
    assert.equal(dependencyNotices([]), '');
  } finally { rmSync(root, { recursive: true, force: true }); }
});
