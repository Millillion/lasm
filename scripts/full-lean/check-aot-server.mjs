// One bounded build-and-test operation for the current ordinary Lean example.
// This maintainer driver is separate from the still-unfinished primary CLI.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../..', import.meta.url));
const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); return i < 0 ? undefined : args[i + 1]; };
const target = option('--target'), outputArg = option('--output'), engineArg = option('--engine');
if (!['node', 'deno', 'bun'].includes(target) || !outputArg || !engineArg)
  throw new Error('Supply --target node|deno|bun --output NEW_DIRECTORY --engine STOCK_EXECUTABLE');
const output = resolve(outputArg), engine = resolve(engineArg);
const engineVersion = execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim();
execFileSync(process.execPath, [join(root, 'scripts/full-lean/build-aot-server.mjs'), '--target', target, '--output', output],
  { cwd: root, env: process.env, stdio: 'inherit' });
const manifest = join(output, 'application/build-result.json'), report = join(output, 'vitest.json');
execFileSync(process.execPath, [join(root, 'node_modules/vitest/vitest.mjs'), 'run',
  '--config', join(root, 'examples/lean-server-latest/vitest.config.mjs'), '--reporter=default', '--reporter=json', `--outputFile=${report}`],
  { cwd: root, env: { ...process.env, LASM_AOT_HTTP_MANIFEST: manifest, LASM_AOT_HTTP_ENGINE: engine }, stdio: 'inherit' });
const tests = JSON.parse(readFileSync(report));
assert.equal(tests.success, true); assert.equal(tests.numPassedTests, 20);
assert.equal(tests.numFailedTests, 0); assert.equal(tests.numPendingTests, 0);
const result = { scope: 'Maintainer build plus ordinary HTTP checks, not full product/API acceptance', target, engine, engineVersion,
  build: JSON.parse(readFileSync(manifest)), passed: tests.numPassedTests,
  failed: tests.numFailedTests, skipped: tests.numPendingTests, resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
