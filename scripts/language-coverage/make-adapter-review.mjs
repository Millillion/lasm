// Write the L1 structural review for the runtime adapter from the committed L1
// inventory: every "runtime candidate: parallel adapter" registration, bound to
// its exact source and sidecar hashes. Same criteria as the Server MVP review
// (only serial markers and whole-output expected/ignored files are accepted).
//   node make-adapter-review.mjs LEAN_VERSION
import assert from 'node:assert/strict';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { loadUpstreamEvidence } from '../application-tests/upstream-evidence.mjs';

const [version] = process.argv.slice(2);
assert.ok(version, 'Supply LEAN_VERSION');
const root = fileURLToPath(new URL('../../', import.meta.url));
const inventory = JSON.parse(readFileSync(join(root, `docs/evidence/lean-${version}-language-coverage-inventory.json`)));
const { sources } = loadUpstreamEvidence(version);
const output = join(root, 'scripts/language-coverage/runtime-adapter-l1.json');
const kinds = { serial: 'ctest-run-serial', 'out.expected': 'expected-output', 'out.ignored': 'ignored-output' };
const tests = {}, excluded = {};
for (const test of inventory.tests.filter(row => row.execution === 'runtime candidate: parallel adapter')) {
  // A symlinked test (e.g. elab_bench/*_MT.lean) runs its target under another
  // driver configuration; the adapter copies single files, so review it separately.
  if (sources[test.source].symlink !== undefined) { excluded[test.name] = 'symlinked source: ' + sources[test.source].symlink; continue; }
  const sidecars = Object.keys(sources).filter(path => path.startsWith(test.source + '.')).sort().map(path => {
    const kind = kinds[path.slice(test.source.length + 1)];
    assert.ok(kind, 'Unreviewable sidecar ' + path);
    return { path, sha256: sources[path].sha256, kind };
  });
  const source = sources[test.source];
  tests[test.name] = { sha256: source.sha256, ...(sidecars.length ? { sidecars } : {}) };
}
const previous = existsSync(output) ? JSON.parse(readFileSync(output)) : { releases: {} };
previous.schema = 1;
previous.review = 'Language coverage L1 (2026-10-20). Structural review of every upstream elaboration test of the pinned release whose syntax survey finds #eval, #guard or #guard_msgs+#eval actions: exact source and sidecar hashes; only serial markers and whole-output expected/ignored files are accepted. The per-run gates of the Server MVP adapter review apply unchanged.';
previous.releases[version] = { tests, excluded };
writeFileSync(output, JSON.stringify(previous, null, 1) + '\n');
console.log(JSON.stringify({ version, tests: Object.keys(tests).length, excluded }));
