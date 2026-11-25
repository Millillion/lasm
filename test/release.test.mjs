// The npm release process (docs/RELEASING.md): its decisions, without a registry or GitHub.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { distTag, isVersion, atLeast, releasePackages, publicationOrder, waitForTarballs } from '../scripts/release/lib.mjs';
import { decide } from '../scripts/release/detect.mjs';
import { selectChecksRun, manifestProblems, releaseState } from '../scripts/release/plan.mjs';
import { differences } from '../scripts/release/compare.mjs';
import { checksJobs, releaseChecksManifest } from '../scripts/release/checks-manifest.mjs';
import { publicationPlan } from '../scripts/release/publish.mjs';
import { packageSteps, trustState, placeholderManifest } from '../scripts/release/bootstrap-npm.mjs';

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

// A fake registry: documents and tarballs whose answers change over rounds.
function fakeRegistry({ documents, tarballs }) {
  const registry = 'https://registry.example/', requests = [];
  let clock = 0;
  const fetch = async url => {
    url = String(url); requests.push(url);
    if (url.endsWith('.tgz')) {
      const next = tarballs[url].length > 1 ? tarballs[url].shift() : tarballs[url][0];
      if (next instanceof Error) throw next;
      return typeof next === 'number' ? new Response('Not Found', { status: next }) : new Response(next);
    }
    const name = decodeURIComponent(new URL(url).pathname.slice(1));
    const doc = typeof documents[name] === 'function' ? documents[name]() : documents[name];
    return doc ? Response.json(doc) : new Response('{}', { status: 404 });
  };
  return { registry, requests, options: { fetch, sleep: async ms => { clock += ms; }, now: () => clock, intervalMs: 10_000, timeoutMs: 60_000, log: () => {} } };
}
const sha512 = bytes => 'sha512-' + createHash('sha512').update(bytes).digest('base64');
const entry = (name, version, bytes, file) => ({ versions: { [version]: { dist: { integrity: sha512(bytes), tarball: `https://registry.example/${name}/-/${file}` } } } });

test('publication waits until every tarball is served with the built bytes, not just the document', async () => {
  const cli = Buffer.from('cli bytes'), create = Buffer.from('create bytes');
  let documentReads = 0;
  const fake = fakeRegistry({
    // @lasm/create's document appears only on the second read; @lasm/cli's tarball is a CDN 404 twice, then a 503, a reset, then served.
    documents: { '@lasm/cli': entry('@lasm/cli', '0.11.0', cli, 'cli-0.11.0.tgz'), '@lasm/create': () => ++documentReads > 1 ? entry('@lasm/create', '0.11.0', create, 'create-0.11.0.tgz') : undefined },
    tarballs: { 'https://registry.example/@lasm/cli/-/cli-0.11.0.tgz': [404, 404, 503, new Error('socket hang up'), cli],
      'https://registry.example/@lasm/create/-/create-0.11.0.tgz': [create] } });
  const logged = [];
  const served = await waitForTarballs(fake.registry, [{ name: '@lasm/cli', version: '0.11.0', integrity: sha512(cli) }, { name: '@lasm/create', version: '0.11.0', integrity: sha512(create) }],
    { ...fake.options, log: line => logged.push(line) });
  assert.deepEqual(served.map(s => [s.name, s.bytes, s.integrity]), [['@lasm/cli', cli.length, sha512(cli)], ['@lasm/create', create.length, sha512(create)]]);
  assert.equal(fake.requests.filter(url => url.endsWith('cli-0.11.0.tgz')).length, 5);
  assert.equal(fake.requests.filter(url => url.endsWith('create-0.11.0.tgz')).length, 1, 'a served tarball is not fetched again');
  assert.match(logged[0], /waiting for 2 of 2 tarballs \(round 1, 0\.0 of at most 1\.0 min\)/);
  assert.match(logged[0], /@lasm\/cli@0\.11\.0: GET https:\/\/registry\.example\/@lasm\/cli\/-\/cli-0\.11\.0\.tgz: HTTP 404/);
  assert.match(logged[0], /@lasm\/create@0\.11\.0: not in the registry document yet/);
  assert.match(logged.join('\n'), /HTTP 503[\s\S]*socket hang up/);
  assert.match(logged.at(-1), /serves all 2 tarballs with the built integrity/);
});

test('the tarball wait is bounded and names what is missing', async () => {
  const cli = Buffer.from('cli bytes');
  const fake = fakeRegistry({ documents: { '@lasm/cli': entry('@lasm/cli', '0.11.0', cli, 'cli-0.11.0.tgz') }, tarballs: { 'https://registry.example/@lasm/cli/-/cli-0.11.0.tgz': [404] } });
  await assert.rejects(waitForTarballs(fake.registry, [{ name: '@lasm/cli', version: '0.11.0', integrity: sha512(cli) }], fake.options),
    /did not serve 1 of 1 tarballs within 1\.0 min:\n {2}@lasm\/cli@0\.11\.0: GET .*cli-0\.11\.0\.tgz: HTTP 404/);
  assert.equal(fake.requests.filter(url => url.endsWith('.tgz')).length, 7, 'a round every 10 s, at 0 to 60 s');
});

test('the tarball wait fails at once on other bytes, in the document or the tarball', async () => {
  const cli = Buffer.from('cli bytes'), other = Buffer.from('other bytes');
  const built = [{ name: '@lasm/cli', version: '0.11.0', integrity: sha512(cli) }];
  const wrongDocument = fakeRegistry({ documents: { '@lasm/cli': entry('@lasm/cli', '0.11.0', other, 'cli-0.11.0.tgz') }, tarballs: {} });
  await assert.rejects(waitForTarballs(wrongDocument.registry, built, wrongDocument.options), /never republish/);
  const wrongBytes = fakeRegistry({ documents: { '@lasm/cli': entry('@lasm/cli', '0.11.0', cli, 'cli-0.11.0.tgz') },
    tarballs: { 'https://registry.example/@lasm/cli/-/cli-0.11.0.tgz': [other] } });
  await assert.rejects(waitForTarballs(wrongBytes.registry, built, wrongBytes.options), /served 11 bytes with sha512-.*, built sha512-/);
  assert.equal(wrongBytes.requests.filter(url => url.endsWith('.tgz')).length, 1, 'no retry on other bytes');
});

test('bootstrap: placeholders, trust and deprecation only where missing', async () => {
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

// Workflow configuration has no runtime but GitHub's, and a release is the only
// event that runs most of these paths, so the publisher's security properties
// stay a lint (docs/TESTING.md#test-quality-audit): OIDC, no stored tokens, one
// release at a time.
const workflow = name => readFileSync(new URL(`../.github/workflows/${name}`, import.meta.url), 'utf8');
/** The lines of one top-level job of a workflow (two-space indented key). */
function jobBlock(text, job) {
  const lines = text.split('\n'), start = lines.indexOf(`  ${job}:`);
  assert.ok(start >= 0, `no job ${job}`);
  const end = lines.findIndex((line, i) => i > start && /^  [A-Za-z0-9_-]+:/.test(line));
  return lines.slice(start, end < 0 ? undefined : end).join('\n');
}
const jobNames = text => [...text.slice(text.indexOf('\njobs:\n')).matchAll(/^  ([A-Za-z0-9_-]+):$/gm)].map(match => match[1]);

test('release.yml is the trusted publisher: OIDC, no tokens, serialized, never cancelled', () => {
  const release = workflow('release.yml');
  assert.match(release, /id-token: write/);
  assert.match(release, /group: npm-release\n\s+cancel-in-progress: false/);
  assert.doesNotMatch(release, /\$\{\{\s*secrets\.|NODE_AUTH_TOKEN|NPM_TOKEN|^\s+environment:/m);
});

test('release-checks needs every gate the manifest records, and passes their results to it', () => {
  const checks = workflow('release-checks.yml');
  assert.match(checks, /^name: release-checks$/m);
  const job = jobBlock(checks, 'release-checks');
  assert.match(job, /\n    name: release-checks\n/);
  assert.deepEqual(job.match(/\n    needs: \[([^\]]+)\]/)[1].split(/,\s*/), [...checksJobs]);
  assert.deepEqual(jobNames(checks).filter(name => name !== 'release-checks').sort(), [...checksJobs].sort());
  for (const name of checksJobs) assert.match(job, new RegExp(`\\n          ${name.toUpperCase()}: \\$\\{\\{ needs\\.${name}\\.result \\}\\}\\n`), name);
  assert.match(job, /run: node scripts\/release\/checks-manifest\.mjs\n/);
  // A called workflow without `workflow_call` fails only when a release runs it.
  const called = [...checks.matchAll(/uses: \.\/\.github\/workflows\/([a-z0-9-]+\.yml)/g)].map(match => match[1]);
  assert.ok(['workers.yml', 'wasi.yml', 'browser.yml', 'unit.yml'].every(name => called.includes(name)), called.join());
  for (const name of new Set(called)) assert.match(workflow(name), /\n  workflow_call:/, name);
  // The published-package CI (npm-dist.yml) requires the edge checks to run.
  const dist = workflow('npm-dist.yml');
  assert.match(dist, /scripts\/edge\/published-ci\.mjs/);
  assert.match(dist, /LASM_PUBLISHED_REQUIRE: '1'/);
});

test('the release-checks verdict: detect alone off a release; every gate, the candidate and the rehearsal on one', () => {
  const ok = Object.fromEntries(checksJobs.map(job => [job.toUpperCase(), 'success']));
  const base = { ...ok, RELEASE: 'true', VERSION: '0.4.0', PREVIOUS: '0.3.9', DIST_TAG: 'latest', GITHUB_SHA: sha, HEAD_SHA: sha,
    GITHUB_EVENT_NAME: 'push', TESTED_RELEASE: 'node-linux-candidate-1', TESTED_SHA256: 'c'.repeat(64) };
  const full = releaseChecksManifest(base);
  assert.equal(full.passed, true);
  assert.deepEqual(manifestProblems(full.manifest, { sha, version: '0.4.0', dryRun: false }), []);
  assert.deepEqual(Object.keys(full.manifest.jobs), [...checksJobs]);
  assert.deepEqual(full.manifest.candidate, { release: 'node-linux-candidate-1', sha256: 'c'.repeat(64) });
  assert.match(full.summary, /passed\n\nRelease 0\.4\.0\n$/);
  for (const job of checksJobs) for (const result of ['failure', 'cancelled', 'skipped', undefined]) {
    const { passed, manifest } = releaseChecksManifest({ ...base, [job.toUpperCase()]: result });
    assert.equal(passed, false, `${job} ${result}`);
    assert.notDeepEqual(manifestProblems(manifest, { sha, version: '0.4.0', dryRun: false }), [], job);
  }
  // Not a release: only detect matters; the gates are skipped.
  const skipped = Object.fromEntries(checksJobs.map(job => [job.toUpperCase(), 'skipped']));
  const quiet = releaseChecksManifest({ ...skipped, DETECT: 'success', RELEASE: 'false' });
  assert.equal(quiet.passed, true);
  assert.equal(quiet.manifest.candidate, null);
  assert.match(quiet.summary, /Not a release commit/);
  assert.equal(releaseChecksManifest({ ...skipped, DETECT: 'failure', RELEASE: 'false' }).passed, false);
  // A reused candidate: the candidate job is skipped, the run is partial, and only dry runs accept it.
  const reused = releaseChecksManifest({ ...base, CANDIDATE: 'skipped', REUSE: 'node-linux-candidate-7', REUSE_SHA256: 'd'.repeat(64) });
  assert.equal(reused.passed, true);
  assert.equal(reused.manifest.full, false);
  assert.equal(reused.manifest.candidate.release, 'node-linux-candidate-7');
  assert.match(reused.summary, /partial: reused candidate node-linux-candidate-7/);
  assert.deepEqual(manifestProblems(reused.manifest, { sha, version: '0.4.0', dryRun: true }), []);
  assert.ok(manifestProblems(reused.manifest, { sha, version: '0.4.0', dryRun: false }).some(p => /partial/.test(p)));
  assert.equal(releaseChecksManifest({ ...base, CANDIDATE: 'success', REUSE: 'node-linux-candidate-7' }).passed, false);
  const overlay = releaseChecksManifest({ ...base, CANDIDATE: 'skipped', OVERLAY: 'true' });
  assert.equal(overlay.passed, true);
  assert.equal(overlay.manifest.rehearsal.overlaySource, true);
});
