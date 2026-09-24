import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, rmSync, existsSync, symlinkSync, copyFileSync, statSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { packCompletedTree, restoreCompletedTree } from '../scripts/ci/tree-archive.mjs';
import { create } from 'tar';
import { hashFile } from '../src/managed-artifacts.mjs';

test('completed CI trees restore exact files, empty directories and recipe checksums', async t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-completed-tree-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const source = join(base, 'source'), restored = join(base, 'restored'), archive = join(base, 'tree.tgz');
  mkdirSync(join(source, 'empty'), { recursive: true }); mkdirSync(join(source, 'bin'));
  writeFileSync(join(source, 'bin', 'program'), Buffer.from([0, 1, 255, 2]));
  writeFileSync(join(source, 'manifest input.json'), '{"answer":42}\n');
  writeFileSync(join(source, '__proto__'), 'an ordinary file');
  const options = { maximumContentBytes: 1024, maximumArchiveBytes: 1024 ** 2, identity: { kind: 'fixture', version: 1 } };
  const packed = await packCompletedTree(source, archive, options);
  assert.equal(packed.files, 3); assert.equal(packed.verifiedDecompression, true);
  await restoreCompletedTree(archive, restored, { ...options, sha256: packed.sha256 });
  assert.deepEqual(readFileSync(join(restored, 'bin/program')), Buffer.from([0, 1, 255, 2]));
  assert.ok(existsSync(join(restored, 'empty')));
  assert.equal(readFileSync(join(restored, '__proto__'), 'utf8'), 'an ordinary file');
  await assert.rejects(restoreCompletedTree(archive, restored, { ...options, sha256: packed.sha256 }), /fresh/);
  await assert.rejects(restoreCompletedTree(archive, join(base, 'wrong-recipe'), {
    ...options, identity: { kind: 'other' }, sha256: packed.sha256 }), /recipe mismatch/);
  await assert.rejects(restoreCompletedTree(archive, join(base, 'over-budget'), {
    ...options, maximumContentBytes: 1, sha256: packed.sha256 }), /ceiling/);
  const changed = join(base, 'changed.tgz'); copyFileSync(archive, changed); writeFileSync(changed, 'changed');
  await assert.rejects(restoreCompletedTree(changed, join(base, 'changed'), { ...options, sha256: packed.sha256 }), /checksum mismatch/);
});

test('valid tar framing cannot hide changed contents or a malformed manifest', async t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-completed-corruption-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const source = join(base, 'source'); mkdirSync(source);
  writeFileSync(join(source, 'program'), 'original');
  const options = { maximumContentBytes: 1024, identity: { kind: 'fixture' } };
  await packCompletedTree(source, join(base, 'original.tgz'), options);
  await assert.rejects(packCompletedTree(source, join(base, 'original.tgz'), options), /Preserve previous/);
  writeFileSync(join(source, 'program'), 'modified');
  const changed = join(base, 'changed.tgz');
  await create({ cwd: source, file: changed, gzip: true }, ['program', 'lasm-completed-tree.json']);
  const destination = join(base, 'destination');
  await assert.rejects(restoreCompletedTree(changed, destination, { ...options, sha256: await hashFile(changed) }), /deep-equal/);
  assert.equal(existsSync(destination), false);
  writeFileSync(join(source, 'lasm-completed-tree.json'), '{');
  const malformed = join(base, 'malformed.tgz');
  await create({ cwd: source, file: malformed, gzip: true }, ['program', 'lasm-completed-tree.json']);
  await assert.rejects(restoreCompletedTree(malformed, destination, { ...options, sha256: await hashFile(malformed) }), /JSON|property/);
  assert.equal(existsSync(destination), false);
});

test('the compressed byte ceiling stops output while it is being written', async t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-completed-ceiling-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const source = join(base, 'source'), archive = join(base, 'tree.tgz'); mkdirSync(source);
  writeFileSync(join(source, 'program'), 'fixture');
  await assert.rejects(packCompletedTree(source, archive, {
    maximumContentBytes: 1024, maximumArchiveBytes: 64, identity: { kind: 'fixture' },
  }), /byte ceiling/);
  assert.ok(statSync(archive).size <= 64);
});

test('completed CI archives refuse links and preserve existing evidence', { skip: process.platform === 'win32' }, async t => {
  const base = mkdtempSync(join(tmpdir(), 'lasm-completed-links-'));
  t.after(() => rmSync(base, { recursive: true, force: true }));
  const source = join(base, 'source'); mkdirSync(source);
  writeFileSync(join(base, 'outside'), 'outside'); symlinkSync('../outside', join(source, 'escape'));
  const options = { maximumContentBytes: 1024, identity: { kind: 'fixture' } };
  await assert.rejects(packCompletedTree(source, join(base, 'tree.tgz'), options), /ordinary files/);
  assert.equal(readFileSync(join(base, 'outside'), 'utf8'), 'outside');
  assert.equal(existsSync(join(base, 'tree.tgz')), false);
});
