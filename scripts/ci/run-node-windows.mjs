import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, statfsSync, statSync, openSync, readSync, closeSync } from 'node:fs';
import { resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { spawn } from 'node:child_process';

assert.equal(process.platform, 'win32');
const output = resolve('.work/node-windows-acceptance'), resources = resolve('.work/node-windows-resources.json');
const diskFile = resolve('.work/node-windows-disk.json'), version = process.env.LASM_CANDIDATE_VERSION;
assert.match(version, /^0\.1\.0-experimental\.\d+$/);
assert.ok(!existsSync(output) && !existsSync(resources) && !existsSync(diskFile)); mkdirSync('.work', { recursive: true });
const free = path => { const s = statfsSync(path); return s.bavail * s.bsize; };
const diskPaths = [process.cwd(), tmpdir()];
const disk = { reserveBytes: 4 * 1024 ** 3, preflightBytes: 12 * 1024 ** 3,
  freeAtStart: Object.fromEntries(diskPaths.map(p => [p, free(p)])), status: 'preflight' };
const save = () => writeFileSync(diskFile, JSON.stringify(disk, null, 2) + '\n'); save();
assert.ok(Object.values(disk.freeAtStart).every(n => n >= disk.preflightBytes));
const child = spawn(process.execPath, ['scripts/full-lean/run-bounded.mjs', '--timeout-seconds', '6600', '--report', resources,
  ...diskPaths.flatMap(p => ['--disk-path', p]), '--disk-reserve-mib', '4096',
  '--', process.execPath, 'scripts/check-node-windows.mjs', output,
  `.work/node-candidate/lasm-compiler-${version}.tgz`, process.env.LASM_CANDIDATE_SHA256], { stdio: 'inherit' });
let previous, last = 0;
const timer = setInterval(() => {
  try {
    const acceptance = JSON.parse(readFileSync(resolve(output, 'result.json')));
    const consumer = JSON.parse(readFileSync(resolve(acceptance.workspace, 'result.json')));
    const command = consumer.activeCommand;
    if (command && (command.startedAt !== previous || Date.now() - last >= 30000)) {
      console.log(`[lasm CI] ${command.label}: ${Math.round((Date.now() - Date.parse(command.startedAt)) / 1000)}s elapsed`);
      previous = command.startedAt; last = Date.now();
    }
  } catch { /* The first command may not have written its consumer report yet. */ }
}, 1000);
let code;
try { code = await new Promise((resolve, reject) => { child.once('error', reject); child.once('exit', resolve); }); }
finally { clearInterval(timer); }
const guard = JSON.parse(readFileSync(resources));
disk.minimumFreeBytes = guard.disk?.minimumFreeBytes; disk.status = guard.stoppedBecause ? 'resource-aborted' : code === 0 ? 'passed' : 'failed';
disk.freeAtEnd = Object.fromEntries(diskPaths.map(p => [p, free(p)])); save();
const file = resolve(output, 'result.json');
if (existsSync(file)) {
  const acceptance = JSON.parse(readFileSync(file)), consumer = resolve(acceptance.workspace, 'result.json');
  if (existsSync(consumer)) {
    acceptance.installation = JSON.parse(readFileSync(consumer));
    for (const path of acceptance.installation.activeCommand?.logs ?? []) {
      if (!existsSync(path)) continue;
      const fd = openSync(path, 'r'), length = Math.min(statSync(path).size, 16000), bytes = Buffer.alloc(length);
      try { readSync(fd, bytes, 0, length, statSync(path).size - length); } finally { closeSync(fd); }
      (acceptance.interruptedCommandLogs ??= []).push({ path, tail: bytes.toString('utf8') });
    }
  }
  writeFileSync(file, JSON.stringify(acceptance, null, 2) + '\n');
}
assert.equal(disk.status, 'passed', 'Inspect preserved application, isolation and resource evidence');
assert.equal(guard.status, 'passed'); assert.equal(guard.exitCode, 0);
