import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, rmSync } from 'node:fs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const base = '.work/compiler-cache-control', operation = process.argv[2];
if (operation === 'identity') {
  const files = {};
  for (const name of ['ccache.conf', 'ccache-version.txt', 'clang-version.txt', 'package-versions.txt'])
    files[name] = await hashFile(base + '/' + name);
  writeFileSync(base + '/identity.json', JSON.stringify({ schema: 1, platform: process.platform,
    arch: process.arch, files }) + '\n');
} else if (operation === 'remove') {
  rmSync(base + '/cache', { recursive: true });
} else {
  assert.ok(['create', 'verify'].includes(operation));
  const stats = Object.fromEntries(readFileSync(`${base}/stats-${operation}.txt`, 'utf8').trim().split('\n').map(line => {
    const [name, count] = line.trim().split(/\s+/); return [name, Number(count)];
  }));
  assert.equal(stats.cache_miss, 1); assert.equal(stats.direct_cache_hit + stats.preprocessed_cache_hit,
    operation === 'create' ? 1 : 2);
  const executable = readFileSync(base + '/main.exe');
  const pe = executable.readUInt32LE(0x3c);
  assert.equal(executable.readUInt16LE(pe + 4), 0xaa64);
  const result = { scope: 'Native Windows ARM64 compiler cache control', operation, status: 'passed',
    expectedOutput: '42', objectSha256: await hashFile(base + '/answer.o'), stats };
  writeFileSync(`${base}/result-${operation}.json`, JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result));
}
