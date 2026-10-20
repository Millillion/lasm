// Write the L2+L3 structural review for the runtime adapter's sidecar and #exit
// tests (inventory class "separate review"). Each sidecar is bound to its exact
// hash and to a reviewed, platform-independent meaning that the adapter applies
// to every parallel phase (native interpreted, native compiled, deployed):
//   before.sh  only `rm -f`/`rm -rf` of literal relative names → setup-cleanup
//   init.sh    only `export NAME=VALUE` with literal values      → environment
//   input      an input file the test opens by its relative name → input-file
//   dir/…      a directory the test opens by its relative name   → input-directory
// Any other script content fails the review rather than being interpreted.
// The original driver still runs the unchanged scripts with Bash first.
//   node make-sidecar-review.mjs LEAN_VERSION
import assert from 'node:assert/strict';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { loadUpstreamEvidence } from '../application-tests/upstream-evidence.mjs';

const [version] = process.argv.slice(2);
assert.ok(version, 'Supply LEAN_VERSION');
const root = fileURLToPath(new URL('../../', import.meta.url));
const inventory = JSON.parse(readFileSync(join(root, `docs/evidence/lean-${version}-language-coverage-inventory.json`)));
const { sources, archive } = loadUpstreamEvidence(version);
const output = join(root, 'scripts/language-coverage/runtime-adapter-l23.json');
const pristine = process.env.LASM_PRISTINE;
assert.ok(pristine && existsSync(join(pristine, 'tests')), 'Set LASM_PRISTINE to the verified extracted source (' + archive + ')');
const literal = /^[A-Za-z0-9_.\/-]+$/;
const tests = {};
for (const test of inventory.tests.filter(row => row.execution.startsWith('separate review'))) {
  assert.equal(sources[test.source].symlink, undefined);
  const sidecars = Object.keys(sources).filter(path => path.startsWith(test.source + '.')).sort().map(path => {
    const suffix = path.slice(test.source.length + 1), sha256 = sources[path].sha256;
    const text = () => {
      const bytes = readFileSync(join(pristine, path));
      assert.equal(sources[path].sha256, sha256);
      return bytes.toString('utf8');
    };
    if (suffix === 'out.expected') return { path, sha256, kind: 'expected-output' };
    if (suffix === 'out.ignored') return { path, sha256, kind: 'ignored-output' };
    if (suffix === 'serial') return { path, sha256, kind: 'ctest-run-serial' };
    if (suffix === 'input') return { path, sha256, kind: 'input-file' };
    if (suffix.startsWith('dir/')) return { path, sha256, kind: 'input-directory' };
    if (suffix === 'before.sh') {
      const remove = [];
      for (const line of text().split('\n').filter(line => line.trim())) {
        const match = /^rm -r?f((?: [^ ]+)+)$/.exec(line.trim());
        assert.ok(match, `Unreviewable setup line in ${path}: ${line}`);
        for (const name of match[1].trim().split(' ')) {
          assert.ok(literal.test(name) && !name.startsWith('/') && !name.split('/').includes('..'), path);
          remove.push(name);
        }
      }
      return { path, sha256, kind: 'setup-cleanup', remove };
    }
    if (suffix === 'init.sh') {
      const variables = {};
      for (const line of text().split('\n').filter(line => line.trim())) {
        const match = /^export ([A-Z_][A-Z0-9_]*)=([A-Za-z0-9_.-]*)$/.exec(line.trim());
        assert.ok(match, `Unreviewable environment line in ${path}: ${line}`);
        variables[match[1]] = match[2];
      }
      return { path, sha256, kind: 'environment', variables };
    }
    assert.fail('Unreviewable sidecar ' + path);
  });
  tests[test.name] = { sha256: sources[test.source].sha256, ...(test.exited ? { exit: true } : {}),
    ...(sidecars.length ? { sidecars } : {}) };
}
const previous = existsSync(output) ? JSON.parse(readFileSync(output)) : { releases: {} };
previous.schema = 1;
previous.review = 'Language coverage L2+L3 (2026-10-20). Structural review of the upstream elaboration tests that L1 set aside for their setup sidecars or #exit: exact source and sidecar hashes, each sidecar with a reviewed platform-independent meaning (cleanup, literal environment, input file or directory). The per-run gates of the Server MVP adapter review apply unchanged.';
previous.releases[version] = { tests, excluded: {} };
writeFileSync(output, JSON.stringify(previous, null, 1) + '\n');
console.log(JSON.stringify({ version, tests: Object.keys(tests) }));
