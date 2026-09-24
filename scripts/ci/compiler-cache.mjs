// A CI checkpoint contains only ccache data, never a partly written build tree.
// The exact Actions key carries the archive hash; verify it before extraction.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, readFileSync, writeFileSync, readdirSync, lstatSync, rmSync, appendFileSync } from 'node:fs';
import { resolve, relative, join, sep } from 'node:path';
import { create, extract, list } from 'tar';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [operation, directoryArg, archiveArg, identityArg] = process.argv.slice(2);
if (!['pack', 'unpack'].includes(operation) || !directoryArg || !archiveArg || !identityArg)
  throw new Error('Supply pack|unpack DIRECTORY ARCHIVE IDENTITY_JSON');
const directory = resolve(directoryArg), archive = resolve(archiveArg), identityFile = resolve(identityArg);
for (const path of [directory, archive, identityFile]) {
  const local = relative(resolve('.work'), path);
  assert.ok(local && !local.startsWith('..') && !local.startsWith('/'), 'Keep checkpoint files in .work');
}
assert.ok(relative(directory, archive).startsWith('..' + sep), 'Archive must be outside its source tree');
const identity = JSON.parse(readFileSync(identityFile));
const identitySha256 = await hashFile(identityFile);
const manifestName = 'lasm-checkpoint.json';
const maximumBytes = 1536 * 1024 ** 2;

async function inventory() {
  const files = {}; let bytes = 0;
  async function walk(base, prefix = '') {
    for (const name of readdirSync(base).sort()) {
      const file = join(base, name), local = prefix + name, info = lstatSync(file);
      if (local === manifestName) continue;
      if (info.isDirectory()) { await walk(file, local + '/'); continue; }
      assert.ok(info.isFile(), 'Only regular compiler cache files are allowed: ' + local);
      bytes += info.size;
      assert.ok(bytes <= maximumBytes, 'Compiler cache exceeds its 1.5 GiB data ceiling');
      files[local] = { bytes: info.size, sha256: await hashFile(file) };
    }
  }
  await walk(directory);
  return { files, bytes };
}
if (operation === 'pack') {
  assert.ok(!existsSync(archive), 'Preserve earlier archive evidence');
  const content = await inventory();
  writeFileSync(join(directory, manifestName), JSON.stringify({ schema: 1, identity, identitySha256, ...content }) + '\n');
  await create({ cwd: directory, file: archive, gzip: { level: 1 }, portable: true,
    filter: (name, stat) => {
      assert.ok(stat.isFile() || stat.isDirectory()); return true;
    } }, readdirSync(directory).sort());
  const bytes = lstatSync(archive).size;
  assert.ok(bytes <= 2 * 1024 ** 3, 'Archive exceeds the existing upload ceiling');
  const sha256 = await hashFile(archive);
  const receipt = { operation, identitySha256, sha256, bytes, files: Object.keys(content.files).length, contentBytes: content.bytes };
  writeFileSync(archive + '.json', JSON.stringify(receipt, null, 2) + '\n');
  if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, `sha256=${sha256}\nidentity=${identitySha256}\n`);
  console.log(JSON.stringify(receipt));
} else {
  const expected = process.env.LASM_CHECKPOINT_SHA256;
  assert.match(expected ?? '', /^[a-f0-9]{64}$/);
  assert.ok(!existsSync(directory), 'Restore only to a fresh compiler cache directory');
  assert.equal(await hashFile(archive), expected, 'Checkpoint archive checksum mismatch');
  // Reject links, duplicate paths, traversal and oversized expansion before any
  // extraction. Ccache uses regular files; no generic executable archive is accepted.
  const names = new Set(); let expandedBytes = 0;
  await list({ file: archive, onReadEntry(entry) {
    const name = entry.path.replace(/\/$/, '');
    assert.ok(name && !name.startsWith('/') && !name.includes('\\') && !name.includes(':'));
    assert.ok(name.split('/').every(part => part && part !== '.' && part !== '..'));
    assert.ok(!names.has(name), 'Duplicate archive entry'); names.add(name);
    assert.ok(['File', 'Directory'].includes(entry.type), 'Unexpected checkpoint entry type');
    expandedBytes += entry.size;
    assert.ok(expandedBytes <= maximumBytes + 32 * 1024 ** 2);
  }});
  mkdirSync(directory, { recursive: true });
  await extract({ file: archive, cwd: directory, strict: true, preservePaths: false });
  const manifest = JSON.parse(readFileSync(join(directory, manifestName)));
  assert.equal(manifest.schema, 1); assert.equal(manifest.identitySha256, identitySha256);
  assert.deepEqual(manifest.identity, identity);
  assert.deepEqual(await inventory(), { files: manifest.files, bytes: manifest.bytes });
  rmSync(join(directory, manifestName));
  console.log(JSON.stringify({ operation, status: 'verified', identitySha256, sha256: expected,
    files: Object.keys(manifest.files).length, contentBytes: manifest.bytes }));
}
