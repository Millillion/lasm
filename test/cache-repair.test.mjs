// `lasm cache repair` (src/cache-repair.mjs): which entries of the reserved
// namespaces it verifies, removes, cleans up or leaves alone, and what it reports.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir, symlink } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { c as tar } from 'tar';
import { provisionArtifact, deriveArtifact } from '../src/managed-artifacts.mjs';
import { repairManagedCache } from '../src/cache-repair.mjs';

async function setup(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-cache-repair-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  await mkdir(join(base, 'source/tool'), { recursive: true });
  await writeFile(join(base, 'source/tool/file'), 'tool');
  await tar({ cwd: join(base, 'source'), file: join(base, 'a.tgz'), gzip: true, portable: true }, ['tool']);
  const bytes = await readFile(join(base, 'a.tgz'));
  const artifact = { name: 'tool', root: 'tool', url: 'https://example.invalid/tool', format: 'tar.gz', bytes: bytes.length,
    sha256: createHash('sha256').update(bytes).digest('hex'), maximumExtractedBytes: 10_000 };
  const cache = join(base, 'cache');
  return { base, cache, artifact, options: { cache, log() {}, fetch: async () => new Response(bytes) } };
}
const hex = character => character.repeat(64);

test('an empty or absent cache reports nothing to do', async t => {
  const f = await setup(t);
  assert.deepEqual(await repairManagedCache({ cache: f.cache, log() {} }),
    { cache: f.cache, verified: [], removed: [], stagingRemoved: [], skipped: [], pending: [] });
  await mkdir(join(f.cache, 'artifacts'), { recursive: true }); await mkdir(join(f.cache, 'derived'));
  assert.deepEqual((await repairManagedCache({ cache: join(f.cache, '.', 'x', '..'), log() {} })).cache, f.cache, 'the cache path is resolved');
});

test('valid artifacts and derivations are verified with progress; damaged ones are quarantined and removed', async t => {
  const f = await setup(t);
  const tool = await provisionArtifact(f.artifact, f.options);
  const derived = await deriveArtifact({ kind: 'fixture' }, async tree => { await writeFile(join(tree, 'out'), 'derived'); }, { cache: f.cache, log() {} });
  const damaged = await deriveArtifact({ kind: 'damaged' }, async tree => { await writeFile(join(tree, 'out'), 'original'); }, { cache: f.cache, log() {} });
  await writeFile(join(damaged.directory, 'out'), 'changed');
  const logs = [], stages = [];
  const result = await repairManagedCache({ cache: f.cache, log: line => logs.push(line), progress: event => stages.push(event.stage) });
  assert.deepEqual(result.verified, [tool.directory, derived.directory]);
  assert.equal(result.removed.length, 1);
  assert.equal(result.removed[0].directory, damaged.directory);
  assert.match(result.removed[0].reason, /^Managed cache contents changed: .*Changed entries \(1\): "out"/);
  assert.deepEqual(logs, [`[lasm] Removed invalid cached tool ${damaged.directory}; the next build downloads or derives its verified replacement.`]);
  assert.deepEqual(result.stagingRemoved, [join(f.cache, 'derived', '.repair-' + damaged.identity)], 'the quarantine is cleaned up');
  assert.deepEqual(await readdir(join(f.cache, 'derived')), [derived.identity]);
  assert.deepEqual(stages, [`Verifying artifacts/${tool.identity.slice(0, 12)} for cache repair`,
    ...[derived.identity, damaged.identity].sort().map(identity => `Verifying derived/${identity.slice(0, 12)} for cache repair`)]);
});

test('interrupted staging of the right kind is removed; anything else is skipped and kept', async t => {
  const f = await setup(t);
  const artifacts = join(f.cache, 'artifacts'), derived = join(f.cache, 'derived');
  await mkdir(artifacts, { recursive: true }); await mkdir(derived);
  const make = async path => { await mkdir(path); await writeFile(join(path, 'partial'), 'x'); return path; };
  const removed = [await make(join(artifacts, '.install-' + hex('a'))), await make(join(artifacts, '.repair-' + hex('b'))),
    await make(join(derived, '.derive-' + hex('c'))), await make(join(derived, '.repair-' + hex('d')))];
  const kept = [await make(join(artifacts, '.derive-' + hex('e'))), await make(join(derived, '.install-' + hex('f'))),
    await make(join(artifacts, '.install-' + 'a'.repeat(63))), await make(join(artifacts, 'A'.repeat(64))), await make(join(artifacts, hex('1') + 'x')),
    await make(join(artifacts, 'x' + '.install-' + hex('a')))];
  await writeFile(join(artifacts, hex('2')), 'a file named like an artifact');
  kept.push(join(artifacts, hex('2')));
  const result = await repairManagedCache({ cache: f.cache, log() {} });
  assert.deepEqual(result.stagingRemoved.sort(), [...removed].sort());
  assert.deepEqual(result.skipped.sort(), [...kept].sort());
  assert.deepEqual(result.verified, []); assert.deepEqual(result.removed, []); assert.deepEqual(result.pending, []);
  for (const path of kept.slice(0, -1)) assert.equal(await readFile(join(path, 'partial'), 'utf8'), 'x');
  for (const name of [hex('a'), hex('b')]) assert.ok(!(await readdir(artifacts)).some(entry => entry.endsWith(name) && entry.startsWith('.')), name);
});

test('a staging path that is not a directory stays pending', { skip: process.platform === 'win32' }, async t => {
  const f = await setup(t);
  await mkdir(join(f.cache, 'artifacts'), { recursive: true });
  const target = join(f.base, 'elsewhere'); await mkdir(target); await writeFile(join(target, 'keep'), 'keep');
  const staging = join(f.cache, 'artifacts', '.install-' + hex('a'));
  await symlink(target, staging);
  const logs = [];
  const result = await repairManagedCache({ cache: f.cache, log: line => logs.push(line) });
  assert.deepEqual(result.pending, [staging]);
  assert.deepEqual(result.stagingRemoved, []);
  assert.equal(await readFile(join(target, 'keep'), 'utf8'), 'keep', 'the link is never followed');
  assert.match(logs[0], /Temporary cleanup pending/);
  // An artifact directory that is a symbolic link is skipped, never verified through.
  const linked = join(f.cache, 'artifacts', hex('b'));
  await symlink(target, linked);
  assert.ok((await repairManagedCache({ cache: f.cache, log() {} })).skipped.includes(linked));
});

test('a namespace that is not a directory is an error', async t => {
  const f = await setup(t);
  await mkdir(f.cache, { recursive: true });
  await writeFile(join(f.cache, 'derived'), 'not a directory');
  await assert.rejects(repairManagedCache({ cache: f.cache, log() {} }), { message: `Cache namespace must be an ordinary directory: ${join(f.cache, 'derived')}` });
});

test('names must match exactly to be cleaned up or verified', async t => {
  const f = await setup(t);
  const artifacts = join(f.cache, 'artifacts');
  await mkdir(artifacts, { recursive: true });
  const kept = [];
  for (const name of ['.repair-' + 'a'.repeat(63), 'x.repair-' + hex('a'), '.repair-' + hex('a') + 'x', '.repair-' + 'g'.repeat(64), 'x' + hex('c'), '.install-' + hex('a') + 'x']) {
    await mkdir(join(artifacts, name)); kept.push(join(artifacts, name));
  }
  const result = await repairManagedCache({ cache: f.cache, log() {} });
  assert.deepEqual(result.skipped.sort(), [...kept].sort());
  assert.deepEqual(result.stagingRemoved, []);
});

test('a quarantine path that cannot be cleared leaves the damaged tool in place, pending', { skip: process.platform === 'win32' }, async t => {
  const f = await setup(t);
  const damaged = await deriveArtifact({ kind: 'blocked' }, async tree => { await writeFile(join(tree, 'out'), 'original'); }, { cache: f.cache, log() {} });
  await writeFile(join(damaged.directory, 'out'), 'changed');
  const quarantine = join(f.cache, 'derived', '.repair-' + damaged.identity);
  await writeFile(quarantine, 'a file where the quarantine directory would go');
  const logs = [];
  const result = await repairManagedCache({ cache: f.cache, log: line => logs.push(line) });
  assert.deepEqual(result.removed, []);
  assert.ok(result.pending.includes(quarantine));
  assert.equal(logs.filter(line => line.startsWith(`[lasm] Temporary cleanup pending at ${quarantine}`)).length, 2, 'both refusals are logged to the caller');
  assert.equal(result.pending.filter(path => path === quarantine).length, 2, 'once as stale staging, once as the blocked quarantine');
  assert.equal(await readFile(join(damaged.directory, 'out'), 'utf8'), 'changed', 'the damaged tool is not moved or deleted');
});

test('a tool that cannot be read is an error, not damage to remove', { skip: process.platform === 'win32' || process.getuid?.() === 0 }, async t => {
  const f = await setup(t);
  const tool = await provisionArtifact(f.artifact, f.options);
  const { chmod } = await import('node:fs/promises');
  await chmod(join(tool.directory, '.lasm-artifact.json'), 0);
  t.after(() => chmod(join(tool.directory, '.lasm-artifact.json'), 0o644).catch(() => {}));
  await assert.rejects(repairManagedCache({ cache: f.cache, log() {} }), { code: 'EACCES' });
  await chmod(join(tool.directory, '.lasm-artifact.json'), 0o644);
  assert.deepEqual((await repairManagedCache({ cache: f.cache, log() {} })).verified, [tool.directory], 'the tool was kept');
});
