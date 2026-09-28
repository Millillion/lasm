// Repair only a retained bootstrap archive's notices, then validate the new
// archive natively. No compiler rebuild and no reuse of an unpacked build tree.
import assert from 'node:assert/strict';
import { createReadStream, existsSync, mkdirSync, readFileSync, statSync, statfsSync, writeFileSync } from 'node:fs';
import { basename, join, resolve } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { Readable } from 'node:stream';
import { provisionLean, toolchainCatalog } from '../../src/managed-lean.mjs';
import { provisionGit } from '../../src/managed-git.mjs';
import { applicationSources } from '../../src/application-sources.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { appendToolNotice } from './append-tool-notices.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const tag = process.env.LASM_REPACK_TAG, expected = process.env.LASM_REPACK_SHA256;
assert.match(tag, /^windows-arm64-lean-bootstrap-\d+$/); assert.match(expected, /^[a-f0-9]{64}$/);
const base = resolve('.work/windows-arm64-lean-repack'), output = resolve('.work/windows-arm64-lean-release/distribution');
assert.ok(!existsSync(base) && !existsSync(output)); mkdirSync(base, { recursive: true }); mkdirSync(output, { recursive: true });
const gh = args => execFileSync('gh', args, { encoding: 'utf8', timeout: 1200000, maxBuffer: 2 * 1024 ** 2 });
assert.equal(JSON.parse(gh(['api', 'repos/Millillion/lasm'])).visibility, 'public');
const release = JSON.parse(gh(['release', 'view', tag, '--repo', 'Millillion/lasm', '--json', 'isDraft,assets']));
assert.equal(release.isDraft, true);
const filename = 'lean-4.34.1-win32-arm64.tar.gz', asset = release.assets.find(a => a.name === filename);
assert.ok(asset && asset.size > 0 && asset.size < 2 * 1024 ** 3);
gh(['release', 'download', tag, '--repo', 'Millillion/lasm', '--pattern', filename,
  '--pattern', 'windows-lean-retention.json', '--dir', base]);
const original = join(base, filename), receipt = JSON.parse(readFileSync(join(base, 'windows-lean-retention.json')));
assert.equal(receipt.tag, tag); assert.equal(receipt.sha256, expected);
assert.equal(receipt.bytes, asset.size); assert.equal(statSync(original).size, asset.size);
assert.equal(await hashFile(original), expected);
assert.equal(receipt.resources.status, 'passed'); assert.equal(receipt.resources.exitCode, 0);
assert.ok(receipt.resources.finishedAt); assert.equal(receipt.report.passed, true);
const commit = '5045d0056413266e57c625dcd7c365b10e377c52';
assert.equal(receipt.report.lean, '4.34.1'); assert.equal(receipt.report.commit, commit);
assert.deepEqual(Object.keys(receipt.report.nativePrograms).sort(), ['lake', 'lean']);
for (const program of Object.values(receipt.report.nativePrograms)) {
  assert.equal(program.platform, 'win32'); assert.deepEqual(program.architectures, ['arm64']);
}
// Copy upstream's complete, unchanged bundle; keep its source and hash in the receipt.
const noticeSource = `https://raw.githubusercontent.com/leanprover/lean4/${commit}/LICENSES`;
const noticeSha256 = '00cce2ac071f63d470a287438a7c6bbc4334706be244384e9af4fc9ead11cdce';
const response = await fetch(noticeSource, { signal: AbortSignal.timeout(30000) });
assert.ok(response.ok); const noticeBytes = new Uint8Array(await response.arrayBuffer());
assert.equal(noticeBytes.length, 81854);
const notice = join(base, 'LICENSES'); writeFileSync(notice, noticeBytes);
assert.equal(await hashFile(notice), noticeSha256);
const archive = join(output, filename), preserved = await appendToolNotice(original, archive, notice, noticeSha256);
assert.ok(preserved.bytes < 2 * 1024 ** 3);
const disk = statfsSync(base);
assert.ok(disk.bavail * disk.bsize >= preserved.originalBytes + 4 * 1024 ** 3,
  'Preserve disk space for one relocated compiler tree and the unchanged reserve');
writeFileSync(join(base, 'lean-toolchain'), 'leanprover/lean4:v4.34.1\n');
const artifact = { ...receipt.report.artifact, url: 'https://lasm-fixture.invalid/repacked-lean.tar.gz',
  sha256: preserved.sha256, bytes: preserved.bytes };
const catalog = structuredClone(toolchainCatalog); catalog.lean['4.34.1'].artifacts['win32-arm64'] = artifact;
const cache = join(base, 'verified cache λ');
const lean = await provisionLean(base, { catalog, cache, fetch: async url => {
  assert.equal(url, artifact.url); return new Response(Readable.toWeb(createReadStream(archive)));
} });
assert.equal(await hashFile(join(lean.prefix, 'LICENSES')), noticeSha256);
// The source build and its seed were on another runner; neither exists here.
assert.ok(!existsSync(receipt.report.inputs.seed.prefix));
const work = join(base, 'relocated project 日本語'); mkdirSync(work);
const clean = { SystemRoot: process.env.SystemRoot, WINDIR: process.env.SystemRoot,
  TEMP: process.env.TEMP, TMP: process.env.TMP, PATH: '', LEAN_NUM_THREADS: '1' };
const checks = [];
function run(program, args, expected) {
  const result = spawnSync(program, args, { cwd: work, env: clean, encoding: 'utf8', timeout: 120000, maxBuffer: 1024 ** 2 });
  assert.ifError(result.error); assert.equal(result.status, 0, result.stdout + result.stderr);
  if (expected !== undefined) assert.equal(result.stdout.trim(), expected);
  checks.push({ program: basename(program), args, stdout: result.stdout, stderr: result.stderr });
}
run(lean.lean, ['--githash'], commit); run(lean.lake, ['--version']);
writeFileSync(join(work, 'Main.lean'), 'def main : IO Unit := IO.println "native ARM64 archive: 42"\n');
run(lean.lean, ['--run', 'Main.lean'], 'native ARM64 archive: 42');
run(lean.lean, ['-Dcompiler.postponeCompile=false', '-c', 'main.c', 'Main.lean']);
const git = await provisionGit({ cache });
writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.34.1\n');
writeFileSync(join(work, 'lakefile.lean'), 'import Lake\nopen Lake DSL\npackage greeting\nlean_lib Greeting\n@[default_target]\nlean_exe hello where\n  root := `Main\n');
writeFileSync(join(work, 'Greeting.lean'), 'def greeting : String := "native Lake 42"\n');
writeFileSync(join(work, 'Main.lean'), 'import Greeting\ndef main : IO Unit := IO.println greeting\n');
const saved = process.env.PATH; process.env.PATH = '';
let local;
try { local = applicationSources(join(work, 'Main.lean'), lean, join(work, '.generated'), { git }); }
finally { process.env.PATH = saved; }
assert.ok(local.sources.length >= 2);
for (const file of local.sources) assert.ok(statSync(file).size > 0);
checks.push({ lakeLocalCGeneration: true, sources: local.inputs });
const report = { passed: true, scope: 'Notice-only archive repair with every existing member preserved; fresh native Lean/Lake relocation rechecked; installed Lasm acceptance remains separate',
  lean: lean.version, commit, artifact, nativePrograms: lean.nativePrograms, identities: receipt.report.identities,
  imports: receipt.report.imports, inputs: receipt.report.inputs, checks,
  derivation: { originalTag: tag, originalSha256: expected, originalRun: receipt.run, ...preserved, noticeSource },
  recordedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
