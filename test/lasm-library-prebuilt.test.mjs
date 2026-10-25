// The shipped compilation of Lasm's Lean library (library/prebuilt) must be the
// compilation of the current library sources by the pinned Lean release:
// regenerate it with scripts/build-library-prebuilt.mjs after changing either.
import test from 'node:test';
import assert from 'node:assert/strict';
import { libraryLeanVersions, prebuiltLibrary, libraryOutputs } from '../src/lasm-library.mjs';
import { toolchainCatalog } from '../src/managed-lean.mjs';

test('the prebuilt Lasm.JS library matches the library sources and the Lean pin', () => {
  for (const version of libraryLeanVersions) {
    const prebuilt = prebuiltLibrary(version, toolchainCatalog.lean[version].commit);
    assert.ok(prebuilt, `library/prebuilt/lean-${version} is missing or stale: run node scripts/build-library-prebuilt.mjs ${version}`);
    assert.deepEqual(Object.keys(prebuilt.files).sort(), [...libraryOutputs()].sort());
    assert.equal(prebuiltLibrary(version, '0'.repeat(40)), undefined, 'another Lean commit compiles the library itself');
  }
});
