// Adds an upstream Lean release to Lasm's catalogs (docs/LEAN_UPGRADE.md step 1):
//   - src/toolchains.json: the release's commit and its five native archives
//     (name, URL, size and SHA-256 from GitHub's release asset digests);
//   - scripts/full-lean/lean-sources.json: the source archive of that commit
//     (downloaded once to measure its size and SHA-256).
// Tiers and the C tier are added later from lean-tiers.yml (step 6).
//   node scripts/lean-upgrade/add-release.mjs VERSION    (e.g. 4.36.0 or 4.36.0-rc1)
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { readFileSync, writeFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

const [version] = process.argv.slice(2);
assert.match(version ?? '', /^\d+\.\d+\.\d+(-rc\d+)?$/, 'Usage: node scripts/lean-upgrade/add-release.mjs VERSION');
const root = fileURLToPath(new URL('../../', import.meta.url));
const gh = (...args) => JSON.parse(execFileSync('gh', ['api', ...args], { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024 }));
const tag = `v${version}`;
const release = gh(`repos/leanprover/lean4/releases/tags/${tag}`);
const commit = gh(`repos/leanprover/lean4/commits/${tag}`).sha;
const hosts = { 'linux-x64': 'linux', 'linux-arm64': 'linux_aarch64', 'darwin-x64': 'darwin', 'darwin-arm64': 'darwin_aarch64', 'win32-x64': 'windows' };
const artifacts = {};
for (const [host, suffix] of Object.entries(hosts)) {
  const name = `lean-${version}-${suffix}.tar.zst`, asset = release.assets.find(a => a.name === name);
  assert.ok(asset, `${tag} has no ${name}`);
  assert.match(asset.digest ?? '', /^sha256:[0-9a-f]{64}$/, `${name}: GitHub reports no SHA-256 digest`);
  artifacts[host] = { name, root: name.replace(/\.tar\.zst$/, ''), url: asset.browser_download_url, sha256: asset.digest.slice(7),
    bytes: asset.size, format: 'tar.zst', maximumExtractedBytes: 8589934592 };
}
const catalogFile = `${root}src/toolchains.json`, catalog = JSON.parse(readFileSync(catalogFile, 'utf8'));
catalog.lean[version] = { commit, release: release.html_url, publishedAt: release.published_at,
  verifiedAt: new Date().toISOString().slice(0, 10), ...(release.prerelease ? { prerelease: true } : {}), artifacts };
writeFileSync(catalogFile, JSON.stringify(catalog, null, 2) + '\n');
// The source archive by commit (the URL the runtime build verifies).
const url = `https://codeload.github.com/leanprover/lean4/tar.gz/${commit}`;
const bytes = execFileSync('curl', ['-sSfL', url], { maxBuffer: 1024 * 1024 * 1024 });
const sourcesFile = `${root}scripts/full-lean/lean-sources.json`, sources = JSON.parse(readFileSync(sourcesFile, 'utf8'));
sources[version] = { commit, url, bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') };
writeFileSync(sourcesFile, JSON.stringify(sources, null, 2) + '\n');
console.log(JSON.stringify({ version, commit, prerelease: release.prerelease, source: sources[version] }, null, 2));
