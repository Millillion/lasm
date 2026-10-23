// Resolve current upstream releases before starting a pinned acceptance campaign.
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, existsSync, readFileSync } from 'node:fs';
import { resolve, dirname } from 'node:path';

const output = resolve(process.argv[2] ?? '.work/acceptance-versions.json');
assert.ok(!existsSync(output), 'Preserve earlier release observations');
const result = {};
const versions = JSON.parse(readFileSync(new URL('./acceptance-versions.json', import.meta.url)));
const names = ['lean', 'node'];
assert.ok(process.argv.length <= 3);
for (const name of [...names, 'npm', 'node24', 'minimumNode']) assert.match(versions[name], /^\d+\.\d+\.\d+$/);
for (const [name, repository, expected] of [['lean', 'leanprover/lean4', 'v' + versions.lean]]) {
  const source = `https://api.github.com/repos/${repository}/releases/latest`;
  const response = await fetch(source, { headers: { 'User-Agent': 'Lasm-acceptance' }, signal: AbortSignal.timeout(30_000) });
  assert.ok(response.ok, `Release lookup failed: ${name} HTTP ${response.status}`);
  const release = await response.json();
  result[name] = { source, expected, tag: release.tag_name, publishedAt: release.published_at,
    url: release.html_url, draft: release.draft, prerelease: release.prerelease };
}
const source = 'https://nodejs.org/dist/index.json';
const response = await fetch(source, { signal: AbortSignal.timeout(30_000) });
assert.ok(response.ok, `Node release lookup failed: HTTP ${response.status}`);
const releases = await response.json();
const node = releases.find(release => /^v\d+\.\d+\.\d+$/.test(release.version));
result.node = { source, expected: 'v' + versions.node, tag: node.version, date: node.date, lts: node.lts };
// The npm pin is the npm bundled with the pinned Node, never an independent choice.
const pinnedNode = releases.find(release => release.version === 'v' + versions.node);
assert.ok(pinnedNode, `Pinned Node ${versions.node} is not an official release`);
result.npm = { source, expected: versions.npm, bundledWithPinnedNode: pinnedNode.npm };
// Built applications and the compiler accept Node >= minimumNode; acceptance also
// pins the newest release of the Node 24 line (Lambda, Vercel and others run 24).
const node24 = releases.find(release => release.version.startsWith('v24.'));
result.node24 = { source, expected: 'v' + versions.node24, tag: node24.version, date: node24.date, lts: node24.lts };
result.minimumNode = { source, expected: 'v' + versions.minimumNode,
  official: releases.some(release => release.version === 'v' + versions.minimumNode) };
result.checkedAt = new Date().toISOString();
const deferred = versions.deferredLatest ?? {};
result.deferredLatest = deferred;
mkdirSync(dirname(output), { recursive: true });
writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
// A recorded deferral accepts exactly one newer release per tool. Any later
// release fails again, so a deferral cannot silently age.
for (const name of names) {
  if (result[name].tag !== result[name].expected && deferred[name] !== undefined)
    assert.equal(result[name].tag, 'v' + deferred[name], `Latest ${name} changed beyond the recorded deferral; update the acceptance pins`);
  else assert.equal(result[name].tag, result[name].expected, `Latest ${name} changed; update the acceptance pins`);
  if (name !== 'node') { assert.equal(result[name].draft, false); assert.equal(result[name].prerelease, false); }
}
if (result.node24.tag !== result.node24.expected && deferred.node24 !== undefined)
  assert.equal(result.node24.tag, 'v' + deferred.node24, 'Latest Node 24 changed beyond the recorded deferral; update the acceptance pins');
else assert.equal(result.node24.tag, result.node24.expected, 'Latest Node 24 changed; update the acceptance pins');
assert.ok(result.minimumNode.official, `Minimum Node ${versions.minimumNode} is not an official release`);
assert.equal(result.npm.bundledWithPinnedNode, result.npm.expected, `Node ${versions.node} bundles npm ${pinnedNode.npm}; update the npm pin`);
console.log(JSON.stringify(result, null, 2));
