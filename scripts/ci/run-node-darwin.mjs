// Disk reserve is independent of the macOS process-tree monitor.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, statfsSync, existsSync } from 'node:fs';
import { spawn } from 'node:child_process';
import { resolve } from 'node:path';

const output = resolve('.work/node-darwin-acceptance'), resources = resolve('.work/node-darwin-resources.json');
const diskFile = resolve('.work/node-darwin-disk.json');
const version = process.env.LASM_CANDIDATE_VERSION ?? '0.1.0-experimental.36';
assert.match(version, /^0\.1\.0-experimental\.\d+$/);
assert.ok(!existsSync(output) && !existsSync(resources) && !existsSync(diskFile));
mkdirSync('.work', { recursive: true });
const free = () => { const s = statfsSync('.'); return s.bavail * s.bsize; };
const reserve = 4 * 1024 ** 3;
const result = { reserveBytes: reserve, preflightBytes: 12 * 1024 ** 3, freeAtStart: free(), status: 'preflight' };
const save = () => writeFileSync(diskFile, JSON.stringify(result, null, 2) + '\n');
save(); assert.ok(result.freeAtStart >= result.preflightBytes, 'Need native tool headroom plus four-GiB disk reserve');
const child = spawn(process.execPath, ['scripts/full-lean/run-bounded.mjs', '--memory-mib', '4096', '--report', resources,
  '--', process.execPath, 'scripts/check-node-darwin.mjs', output,
  `.work/node-candidate/lasm-compiler-${version}.tgz`, process.env.LASM_CANDIDATE_SHA256], { stdio: 'inherit' });
result.status = 'running'; result.minimumFreeBytes = result.freeAtStart; save();
const timer = setInterval(() => {
  const available = free(); result.minimumFreeBytes = Math.min(result.minimumFreeBytes, available);
  if (available < reserve && !result.resourceAbort) { result.resourceAbort = 'disk-reserve'; child.kill('SIGTERM'); }
  save();
}, 1000);
let code;
try { code = await new Promise((resolve, reject) => { child.on('error', reject); child.on('exit', resolve); }); }
finally { clearInterval(timer); }
const guard = JSON.parse(readFileSync(resources)); assert.equal(guard.unitReleased, true);
try {
  const file = resolve(output, 'result.json');
  if (existsSync(file)) {
    const acceptance = JSON.parse(readFileSync(file)), consumer = resolve(acceptance.workspace, 'result.json');
    if (existsSync(consumer)) acceptance.installation = JSON.parse(readFileSync(consumer));
    writeFileSync(file, JSON.stringify(acceptance, null, 2) + '\n');
  }
} catch (error) { result.evidenceRecoveryError = error.message; }
result.status = result.resourceAbort || guard.resourceLimited ? 'resource-aborted' : code === 0 ? 'passed' : 'failed';
result.freeAtEnd = free(); save();
assert.equal(result.status, 'passed', 'Inspect preserved product, memory and disk evidence');
