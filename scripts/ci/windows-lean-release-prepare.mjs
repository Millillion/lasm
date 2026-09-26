// The official same-version x64 compiler is an explicitly emulated maintainer
// seed. It is never copied into the native ARM64 distribution.
import assert from 'node:assert/strict';
import { createReadStream, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { Readable } from 'node:stream';
import { provisionLean, toolchainCatalog } from '../../src/managed-lean.mjs';
import { hashFile, provisionArtifact } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const base = resolve('.work/windows-arm64-lean-release');
assert.ok(!existsSync(base), 'Preserve earlier bootstrap evidence'); mkdirSync(base, { recursive: true });
writeFileSync(join(base, 'lean-toolchain'), 'leanprover/lean4:v4.34.1\n');
const seed = await provisionLean(base, { arch: 'x64', cache: join(base, 'seed-cache') });
const tag = process.env.LASM_LEANTAR_TAG, sha256 = process.env.LASM_LEANTAR_SHA256;
assert.match(tag, /^windows-arm64-leantar-bootstrap-\d+$/); assert.match(sha256, /^[a-f0-9]{64}$/);
const helper = join(base, 'helper'); mkdirSync(helper);
execFileSync('gh', ['release', 'download', tag, '--repo', 'Millillion/lasm', '--pattern', 'leantar-0.1.20-win32-arm64.tar.gz',
  '--pattern', 'windows-leantar-retention.json', '--dir', helper], { stdio: 'inherit', timeout: 300000 });
const archive = join(helper, 'leantar-0.1.20-win32-arm64.tar.gz');
assert.equal(await hashFile(archive), sha256);
const receipt = JSON.parse(readFileSync(join(helper, 'windows-leantar-retention.json'), 'utf8'));
assert.equal(receipt.sha256, sha256); assert.equal(receipt.tag, tag);
assert.equal(receipt.resources.status, 'passed'); assert.equal(receipt.report.executable.nativeArm64, true);
const artifact = { name: 'native-leantar-bootstrap', root: '.', url: 'https://lasm-fixture.invalid/leantar.tar.gz',
  sha256, bytes: receipt.bytes, format: 'tar.gz', maximumExtractedBytes: 16 * 1024 ** 2 };
const installed = await provisionArtifact(artifact, { cache: join(base, 'helper-cache'), fetch: async url => {
  assert.equal(url, artifact.url); return new Response(Readable.toWeb(createReadStream(archive)));
} });
const leantar = join(installed.directory, 'leantar.exe');
await verifyNativeProgram(leantar, 'win32', 'arm64');
assert.equal(await hashFile(leantar), receipt.report.executable.sha256);
const report = { lean: seed.version, commit: seed.commit,
  seed: { prefix: seed.prefix, artifact: toolchainCatalog.lean['4.34.1'].artifacts['win32-x64'], identity: seed.identity, architectures: seed.nativePrograms,
    helperEmulation: true, scope: 'Same-version official x64 build-time seed only; no seed executable or library is shipped' },
  leantar: { executable: leantar, directory: installed.directory, receipt },
  sourceRevision: process.env.GITHUB_SHA, recordedAt: new Date().toISOString() };
writeFileSync(join(base, 'inputs.json'), JSON.stringify(report, null, 2) + '\n');
// These are data files, never sourced as shell code.
writeFileSync(join(base, 'seed-prefix.txt'), seed.prefix);
writeFileSync(join(base, 'leantar-path.txt'), leantar);
console.log(JSON.stringify(report, null, 2));
