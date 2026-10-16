// Run one maintainer build command beside the completed-file advice sidecar,
// inside the same resource-guarded unit (run-bounded.mjs -> base-pages.py ->
// this wrapper). The sidecar only issues fdatasync/POSIX_FADV_DONTNEED for
// receipted tool trees and stamped runtime-build outputs; the unchanged
// proactive memory guard remains authoritative and no limit is changed.
//
// Usage: with-cache-advice.mjs --cache DIR[:DIR] --report FILE [--runtime-build OUTPUT] -- COMMAND [ARGS...]
import { spawn } from 'node:child_process';
import { existsSync, readFileSync, unlinkSync, writeFileSync } from 'node:fs';
import { resolve, delimiter } from 'node:path';
import { fileURLToPath } from 'node:url';

const separator = process.argv.indexOf('--');
const options = process.argv.slice(2, separator < 0 ? undefined : separator);
const command = separator < 0 ? [] : process.argv.slice(separator + 1);
const option = name => { const i = options.indexOf(name); return i < 0 ? undefined : options[i + 1]; };
const caches = option('--cache'), reportOption = option('--report'), runtimeBuild = option('--runtime-build');
if (process.platform !== 'linux' || !caches || !reportOption || !command.length)
  throw new Error('Usage (Linux, inside run-bounded.mjs): with-cache-advice.mjs --cache DIR --report FILE [--runtime-build OUTPUT] -- COMMAND');
if (!process.env.LASM_RESOURCE_UNIT) throw new Error('Run this wrapper through scripts/full-lean/run-bounded.mjs');
const report = resolve(reportOption), stop = report + '.stop';
if (existsSync(stop)) unlinkSync(stop);
const sidecar = fileURLToPath(new URL('./advise-tool-cache.py', import.meta.url));
const advisor = spawn('/usr/bin/python3', ['-I', '-B', sidecar, caches.split(delimiter).map(cache => resolve(cache)).join(delimiter),
  report, stop, ...(runtimeBuild ? ['--runtime-build', resolve(runtimeBuild)] : [])], { stdio: 'inherit' });
const advisorExit = new Promise(done => {
  advisor.once('error', error => done({ error: error.message }));
  advisor.once('exit', (code, signal) => done({ code, signal }));
});
const child = spawn(command[0], command.slice(1), { stdio: 'inherit' });
const forward = signal => child.kill(signal);
for (const signal of ['SIGINT', 'SIGTERM', 'SIGHUP']) process.on(signal, forward);
const outcome = await new Promise(done => {
  child.once('error', error => done({ error: error.message }));
  child.once('exit', (code, signal) => done({ code, signal }));
});
writeFileSync(stop, 'stop\n');
const timer = setTimeout(() => advisor.kill('SIGTERM'), 120_000);
const sidecarExit = await advisorExit;
clearTimeout(timer);
let evidence;
try { evidence = JSON.parse(readFileSync(report, 'utf8')); } catch { evidence = undefined; }
const advised = sidecarExit.code === 0 && evidence?.status === 'finished';
console.error(`[lasm] Completed-file advice: ${advised ? 'finished' : 'FAILED'}; ${evidence?.passes ?? 0} passes; report ${report}`);
if (outcome.code !== 0) process.exit(outcome.code ?? 1);
if (!advised) {
  console.error('[lasm] The cache-advice sidecar did not finish cleanly:', JSON.stringify(sidecarExit), evidence?.error ?? '');
  process.exit(1);
}
