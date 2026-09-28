// Read retained tool archives without executing their contents. Verify the
// exact published-input candidates and inventory redistribution metadata.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, statfsSync, writeFileSync } from 'node:fs';
import { resolve, join, sep } from 'node:path';
import { execFileSync, spawn } from 'node:child_process';
import { Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { list as listTar } from 'tar';
import { programArchitectures } from '../../src/native-program.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [kind, tag, expectedSha, ...extra] = process.argv.slice(2);
const local = extra[0] === '--local';
if (local) extra.shift();
let outputOverride;
if (extra[0] === '--output') { extra.shift(); outputOverride = extra.shift(); assert.ok(outputOverride); }
assert.ok(['sdk', 'leantar', 'lean'].includes(kind) && !extra.length);
// The Linux resource guard intentionally clears arbitrary environment values.
// A private CI-only file keeps the short-lived token out of command arguments
// and resource logs. Local audits use gh's existing authorization for read-only
// calls. Neither route executes archive content or changes GitHub permissions.
let ghEnvironment = process.env;
if (local) {
  assert.equal(execFileSync('git', ['remote', 'get-url', 'origin'], { encoding: 'utf8' }).trim(), 'git@github.com:Millillion/lasm.git');
} else {
  const context = JSON.parse(readFileSync('.work/windows-tool-audit-context.json', 'utf8'));
  assert.equal(context.repository, 'Millillion/lasm'); assert.equal(context.ref, 'refs/heads/main');
  assert.ok(typeof context.token === 'string' && context.token.length > 0);
  ghEnvironment = { ...process.env, GH_TOKEN: context.token };
}
assert.match(tag, new RegExp(`^windows-arm64-${kind}-bootstrap-\\d+$`));
assert.match(expectedSha, /^[a-f0-9]{64}$/);
const output = resolve(outputOverride ?? '.work/windows-tool-audit' + (local ? '-' + kind : ''));
assert.ok(output.startsWith(resolve('.work') + sep), 'Keep audit output in ignored .work directories');
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const disk = statfsSync(output);
assert.ok(disk.bavail * disk.bsize >= 4 * 1024 ** 3 + 32 * 1024 ** 2, 'Preserve the local disk reserve');
const names = { sdk: 'emscripten-6.0.9-win32-arm64.tar.gz', leantar: 'leantar-0.1.20-win32-arm64.tar.gz', lean: 'lean-4.34.1-win32-arm64.tar.gz' };
const name = names[kind], receiptName = `windows-${kind}-retention.json`;
execFileSync('gh', ['release', 'download', tag, '--repo', 'Millillion/lasm', '--pattern', receiptName, '--dir', output],
  { env: ghEnvironment, stdio: 'inherit', timeout: 120000 });
const receipt = JSON.parse(readFileSync(join(output, receiptName), 'utf8'));
assert.equal(receipt.kind, kind); assert.equal(receipt.tag, tag); assert.equal(receipt.archive, name);
assert.equal(receipt.sha256, expectedSha); assert.equal(receipt.resources.status, 'passed');
assert.ok(receipt.bytes > 0 && receipt.bytes < 2 * 1024 ** 3);
const release = JSON.parse(execFileSync('gh', ['release', 'view', tag, '--repo', 'Millillion/lasm', '--json', 'assets,tagName'],
  { env: ghEnvironment, encoding: 'utf8', timeout: 120000 }));
assert.equal(release.tagName, tag);
const asset = release.assets.find(a => a.name === name);
assert.equal(asset?.size, receipt.bytes);
assert.match(asset.apiUrl, /^https:\/\/api\.github\.com\/repos\/Millillion\/lasm\/releases\/assets\/\d+$/);
const raw = execFileSync('gh', ['api', '--help'], { encoding: 'utf8', timeout: 10000 }).includes('--allow-escape-sequences');
// Stream and hash the compressed archive. No multi-gigabyte temporary file or
// unpacked tool tree is needed on the developer's nearly full local disk.
const download = spawn('gh', ['api', asset.apiUrl, '-H', 'Accept: application/octet-stream', ...(raw ? ['--allow-escape-sequences'] : [])],
  { env: ghEnvironment, stdio: ['ignore', 'pipe', 'inherit'], timeout: 600000 });
const completion = new Promise((resolve, reject) => {
  download.once('error', reject);
  download.once('close', (code, signal) => resolve({ code, signal }));
});
const compressed = createHash('sha256'); let downloadedBytes = 0, lastProgress = 0;
const measured = new Transform({ transform(bytes, _, done) {
  downloadedBytes += bytes.length;
  if (downloadedBytes > receipt.bytes) return done(Error('Archive exceeds its recorded size'));
  if (Date.now() - lastProgress >= 10000) {
    lastProgress = Date.now(); console.error(`Auditing ${kind}: ${downloadedBytes}/${receipt.bytes} compressed bytes`);
  }
  compressed.update(bytes); done(null, bytes);
} });
const files = new Map(), links = new Map(), metadata = {};
let count = 0, contentBytes = 0, metadataBytes = 0;
const parser = listTar({ strict: true, onReadEntry(entry) {
  const path = entry.path.replace(/^\.\//, '');
  assert.ok(path && !path.startsWith('/') && !path.includes('\\') && !path.split('/').includes('..'));
  assert.ok(['File', 'Directory', 'Link'].includes(entry.type), `Unexpected archive entry ${entry.type}: ${path}`);
  assert.ok(!files.has(path) && !links.has(path), `Duplicate archive entry: ${path}`);
  count++; contentBytes += entry.size;
  assert.ok(count < 100000 && contentBytes < 8 * 1024 ** 3);
  if (entry.type === 'Link') {
    const target = entry.linkpath.replace(/^\.\//, '');
    assert.ok(target && !target.startsWith('/') && !target.includes('\\') && !target.split('/').includes('..'));
    links.set(path, target);
  }
  if (entry.type !== 'File') return;
  const native = /\.(?:dll|exe)$/i.test(path);
  const capture = /(?:^|\/)build-provenance\.json$/.test(path)
    || /(?:^|\/)(?:[^/]*[-_.])?(?:LICEN[SC]E[^/]*|COPYING[^/]*|COPYRIGHT[^/]*|NOTICE[^/]*|AUTHORS[^/]*|msys2-package-versions\.txt|windows-manifest\.patch)$/i.test(path);
  const hash = createHash('sha256'), chunks = [], header = []; let headerBytes = 0;
  if (capture) {
    metadataBytes += entry.size;
    assert.ok(entry.size < 4 * 1024 ** 2 && metadataBytes < 16 * 1024 ** 2, `Bound metadata: ${path}`);
  }
  entry.on('data', bytes => {
    hash.update(bytes); if (capture) chunks.push(bytes);
    if (native && headerBytes < 65536) {
      const slice = bytes.subarray(0, 65536 - headerBytes); header.push(Buffer.from(slice)); headerBytes += slice.length;
    }
  });
  entry.on('end', () => {
    let identity;
    if (native) {
      try { identity = programArchitectures(Buffer.concat(header)); }
      catch (error) { identity = { error: error.message }; }
    }
    files.set(path, { bytes: entry.size, sha256: hash.digest('hex'), native, identity });
    if (capture) metadata[path] = Buffer.concat(chunks).toString('utf8');
  });
} });
try { await pipeline(download.stdout, measured, parser); }
catch (error) { download.kill(); await completion.catch(() => {}); throw error; }
const downloaded = await completion;
assert.equal(downloaded.code, 0); assert.equal(downloaded.signal, null);
assert.equal(downloadedBytes, receipt.bytes); assert.equal(compressed.digest('hex'), expectedSha);
function file(path, visited = new Set()) {
  assert.ok(!visited.has(path), 'Hard-link cycle'); visited.add(path);
  const actual = files.get(path);
  if (actual) return actual;
  assert.ok(links.has(path), `Missing archive file: ${path}`);
  return file(links.get(path), visited);
}
const report = receipt.report;
const expected = kind === 'sdk' ? report.programs.map(p => ['install/bin/' + p.file, p.sha256])
  : kind === 'lean' ? report.identities.map(p => ['install/' + p.file.replaceAll('\\', '/'), p.sha256])
  : [['leantar.exe', report.executable.sha256]];
const recorded = new Set(expected.map(([path]) => path));
for (const [path, sha] of expected) {
  assert.equal(file(path).sha256, sha, path);
  assert.deepEqual(file(path).identity, { platform: 'win32', architectures: ['arm64'] }, path);
}
// These two tiny launchers are unchanged assets in the pinned Emscripten
// source tree. Lasm invokes managed native Python with the .py driver directly;
// neither launcher satisfies a native-tool acceptance check.
const sourcePrograms = kind === 'sdk' ? [
  ['install/emscripten/tools/pylauncher/pylauncher-arm64.exe', 'f48f99fdb9df801a27e72d5ea31b1fdf222ffba7b25ebb99ede5389f78726b67', 'arm64'],
  ['install/emscripten/tools/pylauncher/pylauncher.exe', '2e672fb59e7f0f828dba7f00250fb2bde70ea81d7a2cb0009e3d7cf449e574f7', 'x64'],
] : [];
for (const [path, sha, arch] of sourcePrograms) {
  assert.equal(file(path).sha256, sha, path);
  assert.deepEqual(file(path).identity, { platform: 'win32', architectures: [arch] }, path); recorded.add(path);
}
const nativeInventory = [...files.keys(), ...links.keys()].filter(path => /\.(dll|exe)$/i.test(path)).map(path => ({ path, ...file(path) }));
writeFileSync(join(output, 'native-inventory.json'), JSON.stringify(nativeInventory, null, 2) + '\n');
for (const { path } of nativeInventory)
  assert.ok(recorded.has(path), `Unrecorded native program: ${path}`);
const notices = Object.keys(metadata).filter(path => /LICEN[SC]E|COPYING|COPYRIGHT|NOTICE|AUTHORS/i.test(path));
assert.ok(notices.length > 0, 'Every archive must carry its license');
if (kind === 'sdk') for (const name of ['LLVM', 'BINARYEN', 'EMSCRIPTEN'])
  assert.ok(metadata[`install/notices/${name}-LICENSE.txt`]?.length > 100, `Missing ${name} license`);
if (kind === 'lean') {
  assert.ok(metadata['install/LICENSES'], 'Missing upstream Lean third-party notice bundle');
  assert.equal(createHash('sha256').update(metadata['install/LICENSES']).digest('hex'),
    '00cce2ac071f63d470a287438a7c6bbc4334706be244384e9af4fc9ead11cdce');
}
const provenancePath = (kind === 'leantar' ? '' : 'install/') + 'build-provenance.json';
const provenance = JSON.parse(metadata[provenancePath]);
const bundledLibraries = expected.map(([path]) => path).filter(path => /\.dll$/i.test(path));
const result = { passed: true, scope: 'Archive integrity and redistribution-metadata inventory; no new native execution or installed Node acceptance',
  kind, tag, archive: name, sha256: expectedSha, bytes: receipt.bytes, sourceRevision: receipt.sourceRevision,
  sourceRun: receipt.run, archiveEntries: count, contentBytes, nativePrograms: expected.length,
  bundledLibraries, sourcePrograms, notices, metadata, provenance,
  artifact: report.artifact, auditedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify({ ...result, metadata: undefined, provenance: undefined }, null, 2));
