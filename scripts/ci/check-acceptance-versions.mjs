// Resolve current upstream releases before starting a pinned acceptance campaign.
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, dirname } from 'node:path';

const output = resolve(process.argv[2] ?? '.work/acceptance-versions.json');
assert.ok(!existsSync(output), 'Preserve earlier release observations');
const result = {};
for (const [name, repository, expected] of [
  ['lean', 'leanprover/lean4', 'v4.34.0'], ['deno', 'denoland/deno', 'v2.9.7'], ['bun', 'oven-sh/bun', 'bun-v1.4.2'],
]) {
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
const node = (await response.json()).find(release => /^v\d+\.\d+\.\d+$/.test(release.version));
result.node = { source, expected: 'v26.10.0', tag: node.version, date: node.date, lts: node.lts };
result.checkedAt = new Date().toISOString();
mkdirSync(dirname(output), { recursive: true });
writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
for (const name of ['lean', 'node', 'deno', 'bun']) {
  assert.equal(result[name].tag, result[name].expected, `Latest ${name} changed; update the acceptance pins`);
  if (name !== 'node') { assert.equal(result[name].draft, false); assert.equal(result[name].prerelease, false); }
}
console.log(JSON.stringify(result, null, 2));
