// The npm release process (docs/RELEASING.md): its decisions, without a registry or GitHub.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { distTag, isVersion, atLeast, releasePackages, publicationOrder } from '../scripts/release/lib.mjs';
import { decide } from '../scripts/release/detect.mjs';
import { selectChecksRun, manifestProblems, releaseState } from '../scripts/release/plan.mjs';
import { differences } from '../scripts/release/compare.mjs';
import { publicationPlan } from '../scripts/release/publish.mjs';
import { packageSteps, trustState, placeholderManifest } from '../scripts/release/bootstrap-npm.mjs';
// A Lean upgrade branch has no published tiers until its release PR (docs/LEAN_UPGRADE.md step 6).
const catalog = JSON.parse(readFileSync(new URL('../src/toolchains.json', import.meta.url), 'utf8'));
const untiered = catalog.lean[catalog.defaultLean].tiers ? false : `Lean ${catalog.defaultLean} has no published tiers yet (Lean upgrade branch)`;

const sha = 'a'.repeat(40), other = 'b'.repeat(40);

test('versions and dist-tags', () => {
  assert.equal(distTag('0.1.0'), 'latest');
  assert.equal(distTag('0.2.0-rc.1'), 'next');
  assert.ok(isVersion('0.1.0-experimental.3') && !isVersion('v0.1.0') && !isVersion('0.1'));
  assert.ok(atLeast('11.20.0', '11.15.0') && atLeast('11.15.0', '11.15.0') && !atLeast('11.8.0', '11.15.0') && atLeast('12.0.0', '11.15.0'));
});

test('a release is a version change to an unpublished, untagged version with notes', () => {
  assert.deepEqual(decide({ previous: '0.1.0', version: '0.1.0' }), { release: false, reason: 'version 0.1.0 unchanged' });
  const ok = decide({ previous: '0.1.0-experimental.3', version: '0.1.0', notes: true, cli: false, create: false, tag: false });
  assert.equal(ok.release, true); assert.equal(ok.distTag, 'latest');
  assert.equal(decide({ previous: '0.1.0', version: '0.2.0-rc.1', notes: true }).distTag, 'next');
  for (const [facts, pattern] of [[{ notes: false }, /notes\.md is missing/], [{ notes: true, cli: true }, /already on npm/],
    [{ notes: true, create: true }, /@lasm\/create@0\.2\.0 is already/], [{ notes: true, tag: true }, /tag v0\.2\.0 already exists/]]) {
    const decision = decide({ previous: '0.1.0', version: '0.2.0', ...facts });
    assert.equal(decision.release, false); assert.equal(decision.error, true); assert.match(decision.reason, pattern);
  }
  assert.equal(decide({ previous: '0.1.0', version: 'next' }).error, true);
});

test('release.yml accepts only a passed, full push run of release-checks for the exact commit', () => {
  const runs = [
    { id: 1, head_sha: sha, event: 'push', head_branch: 'main', status: 'completed', conclusion: 'failure', run_number: 5, run_attempt: 1 },
    { id: 2, head_sha: sha, event: 'push', head_branch: 'main', status: 'completed', conclusion: 'success', run_number: 5, run_attempt: 2 },
    { id: 3, head_sha: sha, event: 'workflow_dispatch', head_branch: 'release-dry-run', status: 'completed', conclusion: 'success', run_number: 9, run_attempt: 1 },
    { id: 4, head_sha: other, event: 'push', head_branch: 'main', status: 'completed', conclusion: 'success', run_number: 10, run_attempt: 1 },
  ];
  assert.equal(selectChecksRun(runs, { sha, dryRun: false }).run.id, 2);
  assert.equal(selectChecksRun(runs, { sha, dryRun: true }).run.id, 3);
  assert.deepEqual(selectChecksRun([{ ...runs[1], status: 'in_progress' }], { sha }), { run: undefined, pending: true });

  const manifest = { schema: 1, workflow: 'release-checks', release: true, passed: true, full: true, sha, version: '0.1.0', event: 'push',
    jobs: { detect: 'success', candidate: 'success', rehearsal: 'success', edge: 'success', browser: 'success', wasi: 'success', ui: 'success', fullstack: 'success', unit: 'success', dx: 'success', stress: 'success' } };
  assert.deepEqual(manifestProblems(manifest, { sha, version: '0.1.0' }), []);
  assert.match(manifestProblems({ ...manifest, jobs: { ...manifest.jobs, edge: 'skipped' } }, { sha, version: '0.1.0' }).join(), /edge and Bun\/Deno/);
  assert.match(manifestProblems({ ...manifest, jobs: undefined }, { sha, version: '0.1.0' }).join(), /edge and Bun\/Deno/);
  for (const job of ['browser', 'wasi', 'ui', 'fullstack', 'unit', 'dx', 'stress'])
    assert.match(manifestProblems({ ...manifest, jobs: { ...manifest.jobs, [job]: 'skipped' } }, { sha, version: '0.1.0' }).join(), new RegExp(`the ${job} checks`));
  assert.match(manifestProblems({ ...manifest, full: false }, { sha, version: '0.1.0' }).join(), /partial/);
  assert.deepEqual(manifestProblems({ ...manifest, full: false, event: 'workflow_dispatch' }, { sha, version: '0.1.0', dryRun: true }), []);
  assert.match(manifestProblems({ ...manifest, rehearsal: { overlaySource: true } }, { sha, version: '0.1.0' }).join(), /overlaid/);
  assert.deepEqual(manifestProblems({ ...manifest, rehearsal: { overlaySource: true } }, { sha, version: '0.1.0', dryRun: true }), []);
  assert.match(manifestProblems({ ...manifest, event: 'pull_request' }, { sha, version: '0.1.0' }).join(), /push to main/);
  assert.match(manifestProblems({ ...manifest, sha: other }, { sha, version: '0.1.0' }).join(), /tested b+/);
  assert.match(manifestProblems({ ...manifest, passed: false }, { sha, version: '0.1.0' }).join(), /did not pass/);
  assert.match(manifestProblems({ ...manifest, version: '0.1.1' }, { sha, version: '0.1.0' }).join(), /version 0\.1\.1/);
});

test('release state: resume a partial release, refuse other bytes or a moved tag, stop when complete', () => {
  const pkg = (name, exists, same = true) => ({ name, version: '1.0.0', integrity: 'sha512-x', remote: { exists, integrity: exists ? (same ? 'sha512-x' : 'sha512-y') : undefined } });
  const fresh = releaseState({ packages: [pkg('a', false), pkg('b', false)], sha, release: false });
  assert.deepEqual([fresh.proceed, fresh.todo.length], [true, 2]);
  const partial = releaseState({ packages: [pkg('a', true), pkg('b', false)], sha, release: false });
  assert.deepEqual([partial.proceed, partial.done.length, partial.todo.length], [true, 1, 1]);
  const untagged = releaseState({ packages: [pkg('a', true)], sha, release: false });
  assert.equal(untagged.proceed, true, 'Published but untagged: continue with the tag and release');
  const complete = releaseState({ packages: [pkg('a', true)], tag: sha, release: true, sha });
  assert.deepEqual([complete.complete, complete.proceed], [true, false]);
  assert.equal(releaseState({ packages: [pkg('a', true)], tag: sha, release: true, sha, dryRun: true }).proceed, true);
  assert.match(releaseState({ packages: [pkg('a', true, false)], sha }).problems.join(), /different bytes/);
  assert.match(releaseState({ packages: [], tag: other, sha }).problems.join(), /tag already points/);
});

test('the published packages must be the rehearsed bytes', () => {
  const record = { npm: '11.20.0', base: { sha256: 'c' }, packages: [{ name: '@lasm/t', version: '1.0.0-lasm.1', integrity: 'sha512-t', filename: 't.tgz' }],
    main: { name: '@lasm/cli', version: '0.1.0', integrity: 'sha512-m', filename: 'm.tgz' }, create: { name: '@lasm/create', version: '0.1.0', integrity: 'sha512-c', filename: 'c.tgz' } };
  assert.deepEqual(publicationOrder(record).map(p => p.name), ['@lasm/t', '@lasm/cli', '@lasm/create']);
  assert.deepEqual(differences(record, structuredClone(record)), []);
  assert.match(differences(record, { ...record, main: { ...record.main, integrity: 'sha512-z' } }).join(), /@lasm\/cli@0\.1\.0: built sha512-z/);
  assert.match(differences(record, { ...record, npm: '11.21.0' }).join(), /npm 11\.21\.0/);
  assert.match(differences(record, { ...record, base: { sha256: 'd' } }).join(), /base candidate/);
  assert.match(differences(record, { ...record, packages: [] }).join(), /rehearsed but not built/);
});

test('publication skips identical versions and never republishes other bytes', () => {
  const plan = publicationPlan([{ name: 'a', integrity: 'x', remote: { exists: true, integrity: 'x' } }, { name: 'b', integrity: 'y', remote: { exists: false } }]);
  assert.deepEqual(plan.map(p => p.action), ['skip', 'publish']);
  assert.throws(() => publicationPlan([{ name: 'a', version: '1', integrity: 'x', remote: { exists: true, integrity: 'z' } }]), /never republish/);
});

test('bootstrap: placeholders, trust and deprecation only where missing', { skip: untiered }, async () => {
  const names = (await releasePackages()).map(p => p.name);
  assert.ok(names.includes('@lasm/cli') && names.at(-1) === '@lasm/create' && names.some(n => n.startsWith('@lasm/lean-c-')));
  assert.ok(!names.some(n => n.includes('/git-')));
  const registry = 'https://registry.npmjs.org/';
  const fresh = packageSteps({ name: '@lasm/cli', exists: false, trust: 'missing' }, { registry });
  assert.deepEqual(fresh.map(s => s.kind), ['placeholder', 'trust', 'deprecate']);
  assert.ok(fresh[0].args.includes('--access') && fresh[0].args.includes('--provenance=false'));
  assert.deepEqual(fresh[1].args, ['trust', 'github', '@lasm/cli', '--repository', 'Millillion/lasm', '--file', 'release.yml', '--allow-publish', '--yes', '--registry', registry]);
  assert.deepEqual(fresh[2].args.slice(0, 3), ['deprecate', '@lasm/cli@0.0.0', 'placeholder; use 0.1.0 or later']);
  assert.ok(!packageSteps({ name: 'unscoped-example', exists: false, trust: 'missing' }, { registry })[0].args.includes('--access'), 'Unscoped');
  assert.deepEqual(packageSteps({ name: 'x', exists: true, hasPlaceholder: true, deprecated: true, trust: 'present' }, { registry }), []);
  assert.deepEqual(packageSteps({ name: 'x', exists: true, hasPlaceholder: false, trust: 'missing' }, { registry }).map(s => s.kind), ['trust']);
  assert.equal(trustState([]), 'missing');
  assert.equal(trustState([{ type: 'github', claims: { repository: 'Millillion/lasm', workflow_ref: { file: 'release.yml' } } }]), 'present');
  assert.equal(trustState([{ type: 'github', repository: 'someone/else', file: 'publish.yml' }]), 'other');
  const manifest = placeholderManifest('@lasm/cli');
  assert.deepEqual([manifest.version, manifest.license, manifest.repository.url, manifest.scripts], ['0.0.0', 'MIT', 'git+https://github.com/Millillion/lasm.git', undefined]);
});

test('release.yml is the trusted publisher: OIDC, no tokens, serialized, never cancelled', () => {
  const workflow = readFileSync(new URL('../.github/workflows/release.yml', import.meta.url), 'utf8');
  assert.match(workflow, /id-token: write/);
  assert.match(workflow, /group: npm-release\n\s+cancel-in-progress: false/);
  assert.doesNotMatch(workflow, /\$\{\{\s*secrets\.|NODE_AUTH_TOKEN|NPM_TOKEN|^\s+environment:/m);
  const checks = readFileSync(new URL('../.github/workflows/release-checks.yml', import.meta.url), 'utf8');
  assert.match(checks, /^name: release-checks$/m);
  assert.match(checks, /\n  release-checks:\n    name: release-checks\n/);
  // The edge targets and Bun/Deno gate a release (0.2.0), and the rehearsal runs Bun and Deno from the loopback registry.
  assert.match(checks, /\n  edge:\n[\s\S]*?uses: \.\/\.github\/workflows\/workers\.yml\n/);
  assert.match(checks, /needs: \[detect, candidate, rehearsal, edge, browser, wasi, ui, fullstack, unit, dx, stress\]/);
  assert.match(checks, /uses: \.\/\.github\/workflows\/wasi\.yml/);
  assert.match(checks, /uses: \.\/\.github\/workflows\/browser\.yml/);
  assert.match(checks, /gates = \[e\.EDGE, e\.BROWSER, e\.WASI, e\.UI, e\.FULLSTACK, e\.UNIT, e\.DX, e\.STRESS\]/);
  const dist = readFileSync(new URL('../.github/workflows/npm-dist.yml', import.meta.url), 'utf8');
  assert.match(dist, /scripts\/edge\/published-ci\.mjs/);
  assert.match(dist, /LASM_PUBLISHED_REQUIRE: '1'/);
  const workers = readFileSync(new URL('../.github/workflows/workers.yml', import.meta.url), 'utf8');
  assert.match(workers, /\n  workflow_call:\n/);
});
