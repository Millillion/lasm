// Keep a disk reserve in addition to the process-tree memory guard. The tested
// package cannot access this maintainer monitor or preinstalled CI tools.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, statfsSync, existsSync } from 'node:fs';
import { spawn } from 'node:child_process';
import { resolve } from 'node:path';

const output = resolve('.work/node-linux-acceptance');
const resources = resolve('.work/node-linux-resources.json');
const diskFile = resolve('.work/node-linux-disk.json');
assert.ok(!existsSync(output) && !existsSync(resources) && !existsSync(diskFile), 'Preserve earlier attempts');
mkdirSync('.work', { recursive: true });
const free = () => { const s = statfsSync('.'); return s.bavail * s.bsize; };
const minimum = 4 * 1024 ** 3;
const result = { reserveBytes: minimum, preflightBytes: 12 * 1024 ** 3, freeAtStart: free(), status: 'preflight' };
const save = () => writeFileSync(diskFile, JSON.stringify(result, null, 2) + '\n');
save(); assert.ok(result.freeAtStart >= result.preflightBytes, 'Need cold-tool headroom and the unchanged four-GiB reserve');
const child = spawn(process.execPath, ['scripts/full-lean/run-bounded.mjs', '--memory-mib', '8192', '--report', resources,
  '--', 'python3', 'scripts/full-lean/base-pages.py', process.execPath, 'scripts/check-node-linux.mjs', output,
  '.work/node-candidate/lasm-compiler-0.1.0-experimental.32.tgz', process.env.LASM_CANDIDATE_SHA256], { stdio: 'inherit' });
result.status = 'running'; result.minimumFreeBytes = result.freeAtStart; save();
const timer = setInterval(() => {
  const available = free(); result.minimumFreeBytes = Math.min(result.minimumFreeBytes, available);
  if (available < minimum && !result.resourceAbort) { result.resourceAbort = 'disk-reserve'; child.kill('SIGTERM'); }
  save();
}, 1000);
let code;
try { code = await new Promise((resolve, reject) => { child.on('error', reject); child.on('exit', resolve); }); }
finally { clearInterval(timer); }
const guard = JSON.parse(readFileSync(resources));
assert.equal(guard.unitReleased, true);
result.status = result.resourceAbort || guard.resourceLimited ? 'resource-aborted' : code === 0 ? 'passed' : 'failed';
result.freeAtEnd = free(); save();
assert.equal(result.status, 'passed', 'Read the preserved product, memory and disk reports');
