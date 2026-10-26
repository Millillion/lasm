// The unit suite in CI (.github/workflows/unit.yml): every test/*.test.mjs file
// in its own `node --test` process (one at a time, under the resource guard),
// with each failing test's name recorded. A file listed in `needsTools` is run
// too, but its failures are reported, not fatal, with the reason it cannot pass
// on this runner; every other failure fails the job.
//   node scripts/ci/unit-tests.mjs RESULT.json
import { spawnSync } from 'node:child_process';
import { readdirSync, writeFileSync, mkdirSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const out = resolve(process.argv[2] ?? '.work/unit-tests.json');
// Files whose tests need tools the unit job does not install, with the reason.
export const needsTools = {
  // The earlier Lean 4.32 callable-library pipeline (src/build.mjs) builds its own runtime with zig.
  'runtime.test.mjs': 'the Lean 4.32 library pipeline (zig toolchain from npm run setup)',
  'wall-clock.test.mjs': 'the Lean 4.32 library pipeline (zig toolchain from npm run setup)',
};
const files = readdirSync(join(root, 'test')).filter(name => name.endsWith('.test.mjs')).sort();
const result = { startedAt: new Date().toISOString(), node: process.version, files: [] };
let failed = 0;
for (const name of files) {
  const started = performance.now();
  const run = spawnSync(process.execPath, [join(root, 'scripts/full-lean/run-bounded.mjs'), '--memory-mib', '6144', '--',
    process.execPath, '--test', '--test-concurrency=1', '--test-reporter=spec', join('test', name)],
  { cwd: root, encoding: 'utf8', maxBuffer: 256 * 1024 * 1024, timeout: 1800_000, env: { ...process.env, NO_COLOR: '1' } });
  const output = (run.stdout ?? '') + (run.stderr ?? '');
  const failures = [...new Set(output.split('\n').filter(line => /^\s*✖ /.test(line) && !/failing tests:/.test(line))
    .map(line => line.trim().replace(/ \([\d.]+m?s\)$/, '')))];
  const passed = run.status === 0;
  const entry = { file: name, passed, seconds: +((performance.now() - started) / 1000).toFixed(1), failures,
    ...(needsTools[name] ? { needsTools: needsTools[name] } : {}), ...(passed ? {} : { tail: output.slice(-4000) }) };
  result.files.push(entry);
  if (!passed && !needsTools[name]) failed++;
  console.log(`${passed ? 'ok  ' : needsTools[name] ? 'skip' : 'FAIL'} ${name} (${entry.seconds} s)${passed ? '' : ': ' + failures.slice(0, 5).join('; ')}`);
  mkdirSync(dirname(out), { recursive: true });
  writeFileSync(out, JSON.stringify(result, null, 2) + '\n');
}
result.failedFiles = failed;
writeFileSync(out, JSON.stringify(result, null, 2) + '\n');
console.log(`${files.length} files; ${failed} failed${failed ? '' : ' (tool-dependent files reported above)'}`);
process.exit(failed ? 1 : 0);
