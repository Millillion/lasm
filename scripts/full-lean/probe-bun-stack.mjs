// Isolate Bun's OS-thread and JSC stack limits using an unchanged generated
// upstream const_fold executable. This is diagnostic evidence, not a suite pass.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import assert from 'node:assert/strict';
import { pathToFileURL } from 'node:url';
import { root } from '../../src/toolchain.mjs';

import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();

if (process.platform !== 'linux') throw new Error('This diagnostic currently requires Linux');
const [programArg, hostArg, outputArg] = process.argv.slice(2);
if (!programArg || !hostArg || !outputArg) throw new Error('Supply generated const_fold .cjs, frozen host module, and new output directory');
const program = resolve(programArg), host = resolve(hostArg), output = resolve(outputArg);
mkdirSync(output); // Preserve earlier attempts rather than overwrite them.
const executable = process.env.LASM_BUN ?? join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun');
const helperSource = join(root, 'scripts/full-lean/probes/bun-stack-reservation.c');
const helper = join(output, 'stack-reservation.so');
const compiled = spawnSync('cc', ['-shared', '-fPIC', '-O2', helperSource, '-pthread', '-ldl', '-o', helper], { encoding: 'utf8' });
writeFileSync(join(output, 'build.log'), compiled.stdout + compiled.stderr);
assert.equal(compiled.status, 0, compiled.stderr);
const variants = [
  ['stock', {}],
  ['jsc-only-3mb', { BUN_JSC_maxPerThreadStackUsage: '3145728' }],
  ['os-only-64mb', { LD_PRELOAD: helper }],
  ['both-64mb', { LD_PRELOAD: helper, BUN_JSC_maxPerThreadStackUsage: '62914560' }],
];
const results = variants.map(([name, overrides]) => {
  const env = { ...process.env, LASM_FULL_HOST_MODULE: pathToFileURL(host).href, LEAN_STACK_SIZE_KB: '65536' };
  delete env.LD_PRELOAD;
  delete env.BUN_JSC_maxPerThreadStackUsage;
  const started = performance.now();
  const execution = spawnSync(executable, [program, '15'], {
    encoding: 'utf8', timeout: 60_000, env: { ...env, ...overrides },
  });
  writeFileSync(join(output, name + '.out'), execution.stdout ?? '');
  writeFileSync(join(output, name + '.err'), execution.stderr ?? '');
  return { name, overrides, status: execution.status, signal: execution.signal,
    seconds: (performance.now() - started) / 1000, stdout: execution.stdout,
    stderr: execution.stderr, error: execution.error?.message };
});
const sha256 = path => createHash('sha256').update(readFileSync(path)).digest('hex');
writeFileSync(join(output, 'results.json'), JSON.stringify({
  testedAt: new Date().toISOString(), platform: process.platform, architecture: process.arch,
  version: spawnSync(executable, ['--version'], { encoding: 'utf8' }).stdout.trim(),
  scope: 'Diagnostic stack isolation; the upstream suite and stock Bun are unchanged.',
  program, host, inputs: Object.fromEntries([program, program.replace(/\.cjs$/, '.wasm'), helperSource, helper].map(path => [path, sha256(path)])), results,
}, null, 2) + '\n');
const repaired = results.at(-1);
assert.equal(repaired.status, 0, repaired.stderr);
assert.equal(repaired.stdout, '93011 93011\n');
assert.equal(repaired.stderr, '');
for (const result of results) console.log(`${result.name}: exit ${result.status}, ${result.seconds.toFixed(2)} seconds`);
