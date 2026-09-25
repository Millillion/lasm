import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, mkdtempSync, writeFileSync, chmodSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { sourceIdentity } from '../scripts/application-tests/source-identity.mjs';
import { selectNativeTests } from '../scripts/application-tests/native-selection.mjs';
import { loadUpstreamEvidence, campaignSourceEvidence } from '../scripts/application-tests/upstream-evidence.mjs';

const read = name => JSON.parse(readFileSync(new URL('../docs/evidence/' + name, import.meta.url)));
const inventory = read('lean-4.34-upstream-application-inventory.json');
const sources = read('lean-4.34-upstream-source-files.json');

test('release inventories retain every original case and isolate later-release acceptance', () => {
  const old = loadUpstreamEvidence('4.34.0'), current = loadUpstreamEvidence('4.34.1');
  assert.deepEqual(old.inventory, inventory);
  assert.equal(current.inventory.registrations, 4069);
  assert.equal(Object.keys(current.sources).length, 7673);
  const previousNames = new Set(old.inventory.tests.map(test => test.name));
  const currentNames = new Set(current.inventory.tests.map(test => test.name));
  assert.deepEqual([...previousNames].filter(name => !currentNames.has(name)), []);
  assert.deepEqual([...currentNames].filter(name => !previousNames.has(name)).sort(),
    ['elab/bitvec_ofNatClamp.lean', 'elab/bv_decide_shift_symbolic.lean', 'misc_dir/rc_sticky']);
  assert.deepEqual(current.inventory.excludedByUpstream, old.inventory.excludedByUpstream);
  const shards = Array.from({ length: 4 }, (_, index) =>
    selectNativeTests(current.inventory, current.sources, undefined, index, 4).selected).flat();
  assert.equal(shards.length, 3499);
  assert.equal(new Set(shards.map(test => test.name)).size, 3499);
  assert.throws(() => selectNativeTests(current.inventory, current.sources,
    read('upstream-native-build-time-r3-2026-09-23.json'), 0, 4), /does not match/);
  const ledger = read('lean-4.34.1-mixed-driver-classification.json');
  assert.equal(ledger.leanCommit, current.inventory.leanCommit);
  assert.equal(ledger.tests.length, 111);
  assert.equal(ledger.tests.find(test => test.name === 'misc_dir/rc_sticky').phase, 'native-and-foreign-application');
});

test('a campaign cannot switch release identities or source manifests', () => {
  for (const version of ['4.34.0', '4.34.1']) {
    const evidence = loadUpstreamEvidence(version);
    const manifest = { lean: version, leanCommit: evidence.inventory.leanCommit,
      sourceArchiveSha256: evidence.inventory.sourceArchiveSha256,
      sourceManifestSha256: evidence.sourceManifestSha256 };
    assert.equal(campaignSourceEvidence(manifest).inventory.lean, version);
    for (const key of ['leanCommit', 'sourceArchiveSha256', 'sourceManifestSha256'])
      assert.throws(() => campaignSourceEvidence({ ...manifest, [key]: 'changed' }), /does not match/);
    assert.throws(() => campaignSourceEvidence({ ...manifest,
      lean: version === '4.34.0' ? '4.34.1' : '4.34.0' }), /does not match/);
  }
  assert.throws(() => loadUpstreamEvidence('../4.34.1'), /No pinned/);
  assert.throws(() => loadUpstreamEvidence('999.0.0'), /No pinned/);
});

test('original upstream aliases use their recorded target bytes and preserve link identity', () => {
  const omega = sourceIdentity(sources, 'tests/elab_bench/big_omega_MT.lean');
  assert.deepEqual(omega, {
    target: 'tests/elab_bench/big_omega.lean',
    sha256: sources['tests/elab_bench/big_omega.lean'].sha256,
    links: [{ source: 'tests/elab_bench/big_omega_MT.lean', symlink: 'big_omega.lean' }],
  });
  const iterators = sourceIdentity(sources, 'tests/elab_bench/iterators.lean');
  assert.equal(iterators.target, 'tests/compile_bench/iterators.lean');
  assert.equal(iterators.sha256, sources[iterators.target].sha256);
  for (const bad of ['missing', '../outside', '/outside', 'alias'])
    assert.throws(() => sourceIdentity({ alias: { symlink: bad } }, 'alias'));
});

test('shards cover all registrations and only the preserved uncompleted cases', () => {
  for (const [file, count, total] of [
    [null, 4, 3497], ['upstream-native-build-time-2026-09-23.json', 4, 1684],
    ['upstream-native-build-time-r3-2026-09-23.json', 2, 2],
  ]) {
    const previous = file ? read(file) : undefined;
    const selected = Array.from({ length: count }, (_, index) =>
      selectNativeTests(inventory, sources, previous, index, count).selected).flat();
    assert.equal(selected.length, total);
    assert.equal(new Set(selected.map(test => test.name)).size, total);
    if (total === 2) assert.deepEqual(selected.map(test => test.name),
      ['elab_bench/big_omega_MT.lean', 'elab_bench/iterators.lean']);
  }
  const changed = read('upstream-native-build-time-r3-2026-09-23.json');
  changed.cases[0].sourceSha256 = 'changed';
  assert.throws(() => selectNativeTests(inventory, sources, changed, 0, 2), /Prior source changed/);
  assert.throws(() => selectNativeTests(inventory, sources, undefined, 4, 4), /Invalid/);
});

test('native CI arguments survive an empty environment and missing selection fails closed',
  { skip: process.platform !== 'linux' }, () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-native-shard-'));
  try {
    // Stand in for preparation without downloading or compiling anything.
    const node = join(dir, 'node');
    writeFileSync(node, '#!/bin/bash\nprintf "%s\\n" "$@"\n'); chmodSync(node, 0o755);
    const command = new URL('../scripts/application-tests/native-ci.sh', import.meta.url).pathname;
    const result = spawnSync('/bin/bash', [command, 'prepare', 'remaining-r3-2026-09-23', '1', '2'],
      { env: { PATH: dir }, encoding: 'utf8' });
    assert.equal(result.status, 0, result.stderr);
    assert.deepEqual(result.stdout.trim().split('\n'), ['scripts/application-tests/prepare-native-shard.mjs',
      '.work/upstream-native-ci', 'remaining-r3-2026-09-23', '1', '2']);
    const current = spawnSync('/bin/bash', [command, 'prepare', 'all', '0', '4', '4.34.1'],
      { env: { PATH: dir }, encoding: 'utf8' });
    assert.equal(current.status, 0, current.stderr);
    assert.deepEqual(current.stdout.trim().split('\n'), ['scripts/application-tests/prepare-native-shard.mjs',
      '.work/upstream-native-ci', 'all', '0', '4', '4.34.1']);
    const missing = spawnSync('/bin/bash', [command, 'prepare'], { env: { PATH: dir }, encoding: 'utf8' });
    assert.equal(missing.status, 2); assert.equal(missing.stdout, '');
    assert.match(missing.stderr, /explicitly/);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});
