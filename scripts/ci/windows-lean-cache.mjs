import assert from 'node:assert/strict';
import { readFileSync, writeFileSync } from 'node:fs';
import { resolve } from 'node:path';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const base = '.work/windows-arm64-bootstrap-cache';
if (process.argv[2] === 'identity') {
  const files = {};
  for (const file of [base + '/ccache.conf', base + '/ccache-version.txt', base + '/clang-version.txt',
    base + '/package-versions.txt', 'scripts/ci/windows-lean-cache.sh', 'scripts/ci/windows-lean-cache.mjs',
    'scripts/full-lean/bootstrap-windows-arm64.sh', 'scripts/full-lean/patch-windows-manifest.mjs'])
    files[file] = await hashFile(file);
  const identity = { schema: 1, lean: '4.34.0', leanCommit: '293d5d0c0c3f3dded4688b3ccd6a33939ac5102b',
    platform: process.platform, arch: process.arch, node: process.versions.node,
    workspace: resolve('.'), files };
  writeFileSync(base + '/identity.json', JSON.stringify(identity) + '\n');
  console.log(JSON.stringify(identity));
} else {
  assert.equal(process.argv[2], 'receipt');
  const resources = JSON.parse(readFileSync('.work/windows-arm64-bootstrap-resources.json'));
  assert.ok(['passed', 'failed', 'time-limit', 'resource-abort'].includes(resources.status),
    'Do not checkpoint while the build guard is running');
  const stats = Object.fromEntries(readFileSync(base + '/stats.txt', 'utf8').trim().split('\n').map(line => {
    const [key, value] = line.trim().split(/\s+/); return [key, Number(value)];
  }));
  assert.ok(stats.files_in_cache > 0, 'No completed compiler results to checkpoint');
  assert.ok(stats.cache_size_kibibyte <= 1536 * 1024);
  const result = { scope: 'Completed native C/C++ compiler cache only; full Lean acceptance remains separate',
    buildStatus: resources.status, stats };
  writeFileSync(base + '/receipt.json', JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result));
}
