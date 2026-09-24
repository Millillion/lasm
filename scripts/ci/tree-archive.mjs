// Verified, completed CI trees only. Callers apply the process-tree resource guard
// and the separate repository cache budget before storing any generated archive.
import assert from 'node:assert/strict';
import { lstatSync, readdirSync, readFileSync, writeFileSync, existsSync, mkdirSync, renameSync, createReadStream, createWriteStream } from 'node:fs';
import { join, resolve, relative, sep } from 'node:path';
import { createHash, randomUUID } from 'node:crypto';
import { Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { create, Parser, extract } from 'tar';
import { hashFile } from '../../src/managed-artifacts.mjs';

const manifestName = 'lasm-completed-tree.json';
const maximumManifestBytes = 32 * 1024 ** 2;
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
function limits(options) {
  const { maximumContentBytes, maximumArchiveBytes = 2 * 1024 ** 3 } = options;
  for (const value of [maximumContentBytes, maximumArchiveBytes]) assert.ok(Number.isSafeInteger(value) && value > 0);
  return { maximumContentBytes, maximumArchiveBytes };
}
async function inventory(directory, maximumContentBytes) {
  assert.ok(lstatSync(directory).isDirectory());
  const files = new Map(), directories = [];
  let bytes = 0;
  async function walk(base, prefix = '') {
    for (const name of readdirSync(base).sort()) {
      const path = join(base, name), key = prefix + name;
      if (key === manifestName) continue;
      const info = lstatSync(path);
      if (info.isDirectory()) { directories.push(key); await walk(path, key + '/'); continue; }
      assert.ok(info.isFile(), 'Completed trees must contain ordinary files: ' + key);
      bytes += info.size; assert.ok(bytes <= maximumContentBytes, 'Completed tree exceeds its content ceiling');
      files.set(key, { bytes: info.size, sha256: await hashFile(path) });
    }
  }
  await walk(directory);
  return { files: Object.fromEntries(files), directories: directories.sort(), bytes };
}
async function inspect(archive, options) {
  const { maximumContentBytes, maximumArchiveBytes } = limits(options);
  assert.ok(lstatSync(archive).isFile() && lstatSync(archive).size <= maximumArchiveBytes);
  const names = new Set(), files = new Map(), directories = [];
  let bytes = 0, metadata;
  let parser;
  const checked = callback => (...args) => {
    try { callback(...args); } catch (error) { parser.abort(error); }
  };
  parser = new Parser({ strict: true, onReadEntry: checked(entry => {
    const name = entry.path.replace(/\/$/, '');
    assert.ok(name && !name.startsWith('/') && !name.includes('\\') && !name.includes(':')
      && name.split('/').every(part => part && part !== '.' && part !== '..'), 'Unsafe completed-tree archive path');
    assert.ok(!names.has(name), 'Duplicate completed-tree path'); names.add(name);
    assert.ok(['File', 'Directory'].includes(entry.type), 'Links and special files are not completed-tree inputs');
    if (entry.type === 'Directory') { directories.push(name); entry.resume(); return; }
    assert.ok(Number.isSafeInteger(entry.size) && entry.size >= 0);
    bytes += entry.size;
    assert.ok(bytes <= maximumContentBytes + maximumManifestBytes, 'Archive expansion exceeds its ceiling');
    if (name === manifestName) {
      assert.ok(entry.size <= maximumManifestBytes, 'Completed-tree manifest is too large');
      const chunks = [];
      entry.on('data', chunk => chunks.push(chunk));
      entry.on('end', checked(() => { metadata = JSON.parse(Buffer.concat(chunks).toString('utf8')); }));
    } else {
      const hash = createHash('sha256'); let observed = 0;
      entry.on('data', chunk => { observed += chunk.length; hash.update(chunk); });
      entry.on('end', checked(() => {
        assert.equal(observed, entry.size);
        files.set(name, { bytes: observed, sha256: hash.digest('hex') });
      }));
    }
    entry.resume();
  }) });
  await new Promise((resolve, reject) => {
    const input = createReadStream(archive);
    input.on('error', reject);
    parser.on('error', error => { input.destroy(); reject(error); });
    parser.on('end', resolve);
    input.pipe(parser);
  });
  assert.equal(metadata?.schema, 1, 'Missing completed-tree manifest');
  const contentBytes = [...files.values()].reduce((total, file) => total + file.bytes, 0);
  assert.ok(contentBytes <= maximumContentBytes, 'Archive content exceeds its ceiling');
  assert.deepEqual(Object.fromEntries(files), metadata.content.files);
  assert.deepEqual(directories.sort(), metadata.content.directories);
  assert.equal(contentBytes, metadata.content.bytes);
  assert.equal(digest(JSON.stringify(metadata.identity)), metadata.identitySha256);
  return metadata;
}

export async function packCompletedTree(directoryArg, archiveArg, options) {
  const directory = resolve(directoryArg), archive = resolve(archiveArg);
  const { maximumContentBytes, maximumArchiveBytes } = limits(options);
  assert.ok(relative(directory, archive).startsWith('..' + sep), 'Keep the archive outside its input tree');
  assert.ok(!existsSync(archive) && !existsSync(join(directory, manifestName)), 'Preserve previous archive evidence');
  const content = await inventory(directory, maximumContentBytes);
  assert.ok(Object.keys(content.files).length, 'Do not archive an empty completed tree');
  const identity = options.identity;
  assert.ok(identity && typeof identity === 'object' && !Array.isArray(identity));
  const metadata = { schema: 1, identity, identitySha256: digest(JSON.stringify(identity)), content };
  const text = JSON.stringify(metadata) + '\n';
  assert.ok(Buffer.byteLength(text) <= maximumManifestBytes);
  writeFileSync(join(directory, manifestName), text, { flag: 'wx' });
  let written = 0;
  const ceiling = new Transform({ transform(chunk, encoding, callback) {
    written += chunk.length;
    callback(written <= maximumArchiveBytes ? null : new Error('Completed-tree archive exceeds its byte ceiling'), chunk);
  } });
  await pipeline(create({ cwd: directory, gzip: { level: 1 }, portable: true }, readdirSync(directory).sort()),
    ceiling, createWriteStream(archive, { flags: 'wx' }));
  assert.deepEqual(await inspect(archive, options), metadata);
  assert.deepEqual(await inventory(directory, maximumContentBytes), content, 'Completed tree changed during archival');
  return { sha256: await hashFile(archive), bytes: lstatSync(archive).size,
    identitySha256: metadata.identitySha256, files: Object.keys(content.files).length,
    contentBytes: content.bytes, verifiedDecompression: true };
}

export async function restoreCompletedTree(archiveArg, directoryArg, options) {
  const archive = resolve(archiveArg), directory = resolve(directoryArg);
  const { maximumContentBytes } = limits(options);
  assert.ok(!existsSync(directory), 'Restore into a fresh completed-tree directory');
  assert.match(options.sha256 ?? '', /^[a-f0-9]{64}$/);
  assert.equal(await hashFile(archive), options.sha256, 'Completed-tree archive checksum mismatch');
  const metadata = await inspect(archive, options);
  if (options.identity) assert.deepEqual(metadata.identity, options.identity, 'Completed-tree recipe mismatch');
  const temporary = directory + '.partial-' + randomUUID(); mkdirSync(temporary, { recursive: true });
  await extract({ file: archive, cwd: temporary, strict: true, preservePaths: false });
  assert.deepEqual(await inventory(temporary, maximumContentBytes), metadata.content);
  assert.deepEqual(JSON.parse(readFileSync(join(temporary, manifestName))), metadata);
  assert.equal(await hashFile(archive), options.sha256, 'Completed-tree archive changed during restore');
  renameSync(temporary, directory);
  return metadata;
}
