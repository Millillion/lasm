import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { runtimeAbiArchives } from '../scripts/full-lean/runtime-abi.mjs';

test('ABI inventory uses an explicit managed cache without a mutable emsdk tree', t => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-abi-cache-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const cache = join(root, 'separate state', 'cache');
  const names = ['libc-mt.a', 'libc++-mt-legacyexcept.a', 'libc++abi-mt-legacyexcept.a',
    'libunwind-mt-legacyexcept.a', 'libclang_rt.builtins-legacysjlj-mt.a', 'libmimalloc-mt.a'];
  const directory = join(cache, 'sysroot/lib/wasm64-emscripten/pic');
  mkdirSync(directory, { recursive: true });
  for (const name of names) writeFileSync(join(directory, name), 'fixture');
  assert.deepEqual(runtimeAbiArchives(join(root, 'immutable SDK'), true, true, cache), names.map(name => join(directory, name)));
  rmSync(join(directory, 'libmimalloc-mt.a'));
  assert.throws(() => runtimeAbiArchives(root, true, true, cache), /Missing runtime ABI archive/);
  assert.equal(runtimeAbiArchives(root, true, false, cache).length, 5);
  assert.throws(() => runtimeAbiArchives(root, false, false, cache), /wasm32-emscripten/);
  assert.throws(() => runtimeAbiArchives(root, true), /upstream.*emscripten.*cache/);
});
