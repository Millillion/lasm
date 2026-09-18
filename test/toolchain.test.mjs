import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, rmSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { readTargetManifest, targetName, leanCommit, sha256, assertLeanCommit } from '../src/toolchain.mjs';

test('target archives reject modified, missing, incompatible, and escaping inputs', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-target-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const library = join(directory, 'lib/runtime.a');
  mkdirSync(join(directory, 'lib'));
  const original = Buffer.from('fixture archive contents');
  writeFileSync(library, original);
  const manifest = { schema: 1, name: targetName, leanCommit,
    files: { 'lib/runtime.a': sha256(original) }, linkLibraries: ['lib/runtime.a'] };
  const save = value => writeFileSync(join(directory, 'target.json'), JSON.stringify(value));
  save(manifest);
  assert.equal(readTargetManifest(directory).manifest.leanCommit, leanCommit);
  writeFileSync(library, 'changed');
  assert.throws(() => readTargetManifest(directory), /checksum mismatch: lib\/runtime.a/);
  rmSync(library);
  assert.throws(() => readTargetManifest(directory), /checksum mismatch/);
  writeFileSync(library, original);
  for (const change of [{ schema: 2 }, { leanCommit: 'different' }, { name: 'different' }, { linkLibraries: ['unchecked.a'] }]) {
    save({ ...manifest, ...change });
    assert.throws(() => readTargetManifest(directory), /Incompatible Lasm target archive/);
  }
  save({ ...manifest, files: { '../outside.a': sha256(original) }, linkLibraries: ['../outside.a'] });
  assert.throws(() => readTargetManifest(directory), /checksum mismatch/);
  for (const unsafe of ['C:/outside.a', '\\\\server\\share\\outside.a', 'lib/../../outside.a']) {
    save({ ...manifest, files: { [unsafe]: sha256(original) }, linkLibraries: [unsafe] });
    assert.throws(() => readTargetManifest(directory), /checksum mismatch/);
  }
});

test('an unsupported Lean compiler identity reports the required version', () => {
  // Inject a mismatching compiler identity; this checks the guard, not a second
  // Lean release's runtime compatibility.
  assert.doesNotThrow(() => assertLeanCommit(leanCommit));
  assert.throws(() => assertLeanCommit('different-compiler-commit'), /Project Lean toolchain must match Lean 4.32.0/);
});
