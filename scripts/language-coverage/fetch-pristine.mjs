// Download, verify and extract the pinned upstream Lean source archive on any
// runner OS (no sha256sum/curl assumptions).  node fetch-pristine.mjs LEAN_VERSION
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { execFileSync } from 'node:child_process';

const [version] = process.argv.slice(2);
const { url, sha256 } = JSON.parse(readFileSync(new URL('../full-lean/lean-sources.json', import.meta.url)))[version];
mkdirSync('.cache/downloads', { recursive: true }); mkdirSync('.work/pristine', { recursive: true });
const archive = `.cache/downloads/lean4-v${version}.tar.gz`;
if (!existsSync(archive)) {
  const response = await fetch(url);
  assert.ok(response.ok, `download ${response.status}`);
  writeFileSync(archive, Buffer.from(await response.arrayBuffer()));
}
assert.equal(createHash('sha256').update(readFileSync(archive)).digest('hex'), sha256, 'Upstream archive checksum mismatch');
execFileSync('tar', ['-xzf', archive, '-C', '.work/pristine', '--strip-components=1'], { stdio: 'inherit' });
console.log(`Verified and extracted Lean ${version} sources (${sha256})`);
