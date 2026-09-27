// Read retained tool archives without executing their contents. Verify the
// exact published-input candidates and inventory redistribution metadata.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, statfsSync, statSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { list as listTar } from 'tar';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
// The Linux resource guard intentionally clears arbitrary environment values.
// A private CI-only file keeps the short-lived token out of command arguments
// and resource logs. Only gh receives it; no archive content is executed.
const context = JSON.parse(readFileSync('.work/windows-tool-audit-context.json', 'utf8'));
assert.equal(context.repository, 'Millillion/lasm');
assert.equal(context.ref, 'refs/heads/main');
assert.ok(typeof context.token === 'string' && context.token.length > 0);
const ghEnvironment = { ...process.env, GH_TOKEN: context.token };
const [kind, tag, expectedSha, ...extra] = process.argv.slice(2);
assert.ok(['sdk', 'leantar', 'lean'].includes(kind) && !extra.length);
assert.match(tag, new RegExp(`^windows-arm64-${kind}-bootstrap-\\d+$`));
assert.match(expectedSha, /^[a-f0-9]{64}$/);
const output = resolve('.work/windows-tool-audit');
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const disk = statfsSync(output);
assert.ok(disk.bavail * disk.bsize >= 7 * 1024 ** 3, 'Reserve space before downloading any archive');
const names = { sdk: 'emscripten-6.0.9-win32-arm64.tar.gz', leantar: 'leantar-0.1.20-win32-arm64.tar.gz', lean: 'lean-4.34.1-win32-arm64.tar.gz' };
const name = names[kind], archive = join(output, name), receiptName = `windows-${kind}-retention.json`;
execFileSync('gh', ['release', 'download', tag, '--repo', 'Millillion/lasm', '--pattern', receiptName, '--dir', output],
  { env: ghEnvironment, stdio: 'inherit', timeout: 120000 });
const receipt = JSON.parse(readFileSync(join(output, receiptName), 'utf8'));
assert.equal(receipt.kind, kind); assert.equal(receipt.tag, tag); assert.equal(receipt.archive, name);
assert.equal(receipt.sha256, expectedSha); assert.equal(receipt.resources.status, 'passed');
assert.ok(receipt.bytes > 0 && receipt.bytes < 2 * 1024 ** 3);
execFileSync('gh', ['release', 'download', tag, '--repo', 'Millillion/lasm', '--pattern', name, '--dir', output],
  { env: ghEnvironment, stdio: 'inherit', timeout: 600000 });
assert.equal(statSync(archive).size, receipt.bytes);
assert.equal(await hashFile(archive), expectedSha);
const files = new Map(), links = new Map(), metadata = {};
let count = 0, contentBytes = 0, metadataBytes = 0;
await listTar({ file: archive, strict: true, onReadEntry(entry) {
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
    || /(?:^|\/)(?:LICENSE[^/]*|COPYING[^/]*|msys2-package-versions\.txt|windows-manifest\.patch)$/.test(path);
  const hash = createHash('sha256'), chunks = [];
  if (capture) {
    metadataBytes += entry.size;
    assert.ok(entry.size < 4 * 1024 ** 2 && metadataBytes < 16 * 1024 ** 2, `Bound metadata: ${path}`);
  }
  entry.on('data', bytes => { hash.update(bytes); if (capture) chunks.push(bytes); });
  entry.on('end', () => {
    files.set(path, { bytes: entry.size, sha256: hash.digest('hex'), native });
    if (capture) metadata[path] = Buffer.concat(chunks).toString('utf8');
  });
} });
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
for (const [path, sha] of expected) assert.equal(file(path).sha256, sha, path);
for (const path of [...files.keys(), ...links.keys()].filter(path => /\.(dll|exe)$/i.test(path)))
  assert.ok(recorded.has(path), `Unrecorded native program: ${path}`);
const notices = Object.keys(metadata).filter(path => /LICENSE|COPYING/.test(path));
assert.ok(notices.length > 0, 'Every archive must carry its license');
const provenancePath = (kind === 'leantar' ? '' : 'install/') + 'build-provenance.json';
const provenance = JSON.parse(metadata[provenancePath]);
const bundledLibraries = expected.map(([path]) => path).filter(path => /\.dll$/i.test(path));
const result = { passed: true, scope: 'Archive integrity and redistribution-metadata inventory; no new native execution or installed Node acceptance',
  kind, tag, archive: name, sha256: expectedSha, bytes: receipt.bytes, sourceRevision: receipt.sourceRevision,
  sourceRun: receipt.run, archiveEntries: count, contentBytes, nativePrograms: expected.length,
  bundledLibraries, notices, metadata, provenance,
  artifact: report.artifact, auditedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify({ ...result, metadata: undefined, provenance: undefined }, null, 2));
