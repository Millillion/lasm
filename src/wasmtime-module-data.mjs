import assert from 'node:assert/strict';
import { readFile, lstat } from 'node:fs/promises';
import { join, isAbsolute } from 'node:path';
import { createHash } from 'node:crypto';
import { fileInventory } from './application-files.mjs';

// Consume the ordinary application's authenticated data inventory. This only
// prepares a copy; it does not change Lean's search paths or import semantics.
export async function wasmtimeModuleData(directory, build) {
  if (build.moduleDataIdentity === undefined) {
    assert.equal(build.moduleDataBytes, undefined, 'Module-data size needs a build identity');
    return null;
  }
  assert.match(build.moduleDataIdentity, /^[a-f0-9]{64}$/);
  const root = join(directory, 'lean'), manifestPath = join(root, 'metadata.json');
  assert.ok((await lstat(manifestPath)).isFile(), 'Module-data manifest must be an ordinary file');
  const manifest = JSON.parse(await readFile(manifestPath, 'utf8'));
  assert.equal(createHash('sha256').update(JSON.stringify(manifest)).digest('hex'),
    build.moduleDataIdentity, 'Module data differs from its compiled application identity');
  assert.equal(manifest.schema, 1);
  assert.equal(manifest.lean, build.lean, 'Module data uses a different Lean release');
  assert.equal(manifest.leanCommit, build.leanCommit, 'Module data uses a different Lean commit');
  assert.ok(Array.isArray(manifest.roots) && manifest.roots.every((name, index) => name === `packages/${index}`),
    'Module-data search roots must retain their generated order');
  assert.ok(Array.isArray(manifest.files) && manifest.files.length);
  const names = new Set(), files = [];
  let bytes = 0;
  for (const file of manifest.files) {
    const name = file.path;
    assert.ok(typeof name === 'string' && !isAbsolute(name) && !name.includes('\\') && !name.includes('\0')
      && name.split('/').every(part => part && part !== '.' && part !== '..')
      && ['lib/lean', ...manifest.roots].some(prefix => name.startsWith(prefix + '/'))
      && /\.(?:olean(?:\.private|\.server)?|ir(?:\.sig)?|ilean)$/.test(name), 'Invalid module-data file path');
    assert.ok(!names.has(name), 'Duplicate module-data file'); names.add(name);
    assert.ok(Number.isSafeInteger(file.bytes) && file.bytes >= 0);
    assert.match(file.sha256, /^[a-f0-9]{64}$/);
    bytes += file.bytes; assert.ok(Number.isSafeInteger(bytes));
    files.push({ source: join(root, name), path: name, bytes: file.bytes, sha256: file.sha256 });
  }
  assert.ok(names.has('lib/lean/Init.olean'), 'Standard module data must include Init');
  assert.equal(bytes, manifest.bytes); assert.equal(bytes, build.moduleDataBytes);
  // Inventory traversal rejects links and special files. Every supplied data
  // file must be represented; missing or unrecorded inputs fail before copying.
  const inventory = await fileInventory(root);
  assert.deepEqual(Object.keys(inventory).sort(), [...names, 'metadata.json'].sort(),
    'Module-data files do not match the recorded inventory');
  for (const file of files) {
    assert.equal(inventory[file.path], file.sha256, 'Module-data file changed: ' + file.path);
    assert.equal((await lstat(file.source)).size, file.bytes, 'Module-data size changed: ' + file.path);
  }
  return { files, manifest, identity: build.moduleDataIdentity };
}
