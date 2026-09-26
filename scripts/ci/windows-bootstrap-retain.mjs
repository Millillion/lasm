// Keep validated native bootstrap inputs private until distribution acceptance.
// Release assets do not consume Actions artifact/cache storage. Never publish.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { basename, join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { create as createTar } from 'tar';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';

assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const kind = process.argv[2];
assert.ok(['sdk', 'leantar', 'lean'].includes(kind));
const run = process.env.GITHUB_RUN_ID;
assert.match(run, /^\d+$/);
assert.match(process.env.GITHUB_SHA, /^[a-f0-9]{40}$/);
const json = file => JSON.parse(readFileSync(file, 'utf8'));
const gh = args => execFileSync('gh', args, { encoding: 'utf8', timeout: 1800_000, maxBuffer: 2 * 1024 ** 2 });
assert.equal(JSON.parse(gh(['api', 'repos/Millillion/lasm'])).visibility, 'public');
const resourcesPath = `.work/windows-${kind === 'sdk' ? 'arm64-sdk' : kind === 'lean' ? 'arm64-lean-release' : 'leantar'}-resources.json`;
const resources = json(resourcesPath);
assert.equal(resources.status, 'passed');
assert.equal(resources.exitCode, 0);
assert.ok(resources.finishedAt);
let reportPath, archive, report;
if (kind === 'sdk') {
  reportPath = '.work/windows-arm64-sdk/distribution/result.json'; report = json(reportPath);
  assert.equal(report.verifiedReuse, true);
  assert.deepEqual(report.checks.map(c => [c.width, c.cppThreadExceptionApplication]), [[32, 'passed'], [64, 'passed']]);
  archive = '.work/windows-arm64-sdk/distribution/emscripten-6.0.9-win32-arm64.tar.gz';
  assert.equal(await hashFile(archive), report.artifact.sha256);
  assert.equal(statSync(archive).size, report.artifact.bytes);
} else if (kind === 'leantar') {
  reportPath = '.work/windows-arm64-leantar/result.json'; report = json(reportPath);
  assert.equal(report.executable.nativeArm64, true);
  assert.equal(report.executable.emptyPath, true);
  assert.equal(report.reference.nativeArchiveReadByReference, true);
  assert.equal(report.reference.referenceArchiveReadByNative, true);
  assert.equal(Object.keys(report.roundtrip).length, 4);
  const directory = '.work/windows-arm64-leantar/retained';
  assert.ok(!existsSync(directory)); mkdirSync(directory);
  const exe = '.work/windows-arm64-leantar/relocated executable/leantar.exe';
  await verifyNativeProgram(exe, 'win32', 'arm64');
  assert.equal(await hashFile(exe), report.executable.sha256);
  copyFileSync(exe, join(directory, 'leantar.exe'));
  copyFileSync('.work/windows-arm64-leantar/source/LICENSE', join(directory, 'LICENSE'));
  copyFileSync(reportPath, join(directory, 'build-provenance.json'));
  archive = '.work/windows-arm64-leantar/leantar-0.1.20-win32-arm64.tar.gz';
  await createTar({ cwd: directory, file: resolve(archive), gzip: true, portable: true }, ['leantar.exe', 'LICENSE', 'build-provenance.json']);
} else {
  reportPath = '.work/windows-arm64-lean-release/distribution/result.json'; report = json(reportPath);
  assert.equal(report.passed, true);
  assert.equal(report.lean, '4.34.1');
  assert.equal(report.commit, '5045d0056413266e57c625dcd7c365b10e377c52');
  archive = '.work/windows-arm64-lean-release/distribution/lean-4.34.1-win32-arm64.tar.gz';
  assert.equal(await hashFile(archive), report.artifact.sha256);
  assert.equal(statSync(archive).size, report.artifact.bytes);
}
const bytes = statSync(archive).size;
assert.ok(bytes > 0 && bytes < 2 * 1024 ** 3, 'Stay below the release asset limit');
const sha256 = await hashFile(archive), prefix = `windows-arm64-${kind}-bootstrap-`, tag = prefix + run;
// Bound retained drafts without deleting previous evidence automatically.
const releases = JSON.parse(gh(['api', 'repos/Millillion/lasm/releases?per_page=100']));
assert.ok(releases.filter(r => r.draft && r.tag_name.startsWith(prefix)).length < 4,
  'Four bootstrap drafts already retained; reconcile their receipts before creating another');
assert.ok(!releases.some(r => r.tag_name === tag), 'Never overwrite retained bootstrap bytes');
const receiptPath = `.work/windows-${kind}-retention.json`, sums = `.work/windows-${kind}-SHA256SUMS.txt`;
const receipt = { scope: 'Unpublished native bootstrap archive; not Node installed-package acceptance',
  kind, tag, archive: basename(archive), sha256, bytes, sourceRevision: process.env.GITHUB_SHA,
  run: `https://github.com/Millillion/lasm/actions/runs/${run}`, report, resources,
  recordedAt: new Date().toISOString() };
writeFileSync(receiptPath, JSON.stringify(receipt, null, 2) + '\n');
writeFileSync(sums, `${sha256}  ${basename(archive)}\n`);
const notes = `.work/windows-${kind}-retention.md`;
writeFileSync(notes, `Private, unpublished native Windows ARM64 ${kind} bootstrap.\n\nArchive: ${basename(archive)}\nSHA-256: ${sha256}\nSource: ${process.env.GITHUB_SHA}\nEvidence: ${receipt.run}\n\nThis retained input passed its recorded bootstrap controls. It is not acceptance of the Lasm installed Node workflow. No npm or public release publication.\n`);
gh(['release', 'create', tag, archive, receiptPath, sums, '--draft', '--prerelease', '--target', 'main',
  '--title', `Windows ARM64 ${kind} bootstrap ${run}`, '--notes-file', notes]);
const retained = JSON.parse(gh(['release', 'view', tag, '--json', 'isDraft,assets,url']));
assert.equal(retained.isDraft, true);
const asset = retained.assets.find(a => a.name === basename(archive));
assert.ok(asset); assert.equal(asset.size, bytes);
console.log(JSON.stringify({ ...receipt, report: undefined, resources: undefined, retained }, null, 2));
