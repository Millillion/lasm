// The boundary fuzzers' committed corpus and regressions (test/fuzz/), replayed
// once each: every input that ever failed stays fixed. fuzz.yml runs the same
// replay on every pull request, and the campaigns nightly and weekly
// (docs/TESTING.md#fuzzing-at-the-boundaries).
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const run = fileURLToPath(new URL('./fuzz/run.mjs', import.meta.url));

test('the JavaScript fuzz targets pass their corpus and regressions', () => {
  const result = spawnSync(process.execPath, [run, 'replay', 'cli-arguments', 'serverless-http', 'ui-patch'], { encoding: 'utf8', timeout: 120_000 });
  assert.equal(result.status, 0, result.stdout + result.stderr);
  for (const target of ['cli-arguments', 'serverless-http', 'ui-patch']) assert.match(result.stdout, new RegExp(`ok   ${target}: \\d+ inputs`));
});

test('the CLI oracle accepts clean refusals and valid parses', async () => {
  // An inherited key is refused with a plain Error (the fix the target found).
  const target = await import('./fuzz/targets/cli-arguments.mjs');
  const { fields } = await import('./fuzz/input.mjs');
  assert.doesNotThrow(() => target.run(fields('init', 'app', '--template', 'constructor')));
  assert.doesNotThrow(() => target.run(fields('build', 'Main.lean', '--target', 'workers')));
});
