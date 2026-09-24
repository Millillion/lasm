import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { existsSync } from 'node:fs';
import { resolve } from 'node:path';

const engines = [
  ['node', process.execPath, []],
  ['deno', resolve(process.env.LASM_TEST_DENO ?? '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', resolve(process.env.LASM_TEST_BUN ?? '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
];
for (const [name, engine, flags] of engines) {
  const available = process.platform !== 'win32' && existsSync(engine);
  if (process.env.LASM_REQUIRE_SIGNAL_ENGINES === '1' && !available) throw new Error('Required signal engine missing: ' + engine);
  for (const delay of [0, 1000]) test(`${name} signals preserve waiter lifecycle after ${delay} ms`, { skip: !available }, () => {
    const result = spawnSync(engine, [...flags, fileURLToPath(new URL('fixtures/signal-host.mjs', import.meta.url)), String(delay)],
      { encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL' });
    assert.ifError(result.error);
    assert.equal(result.status, 0, result.stderr);
    assert.equal(result.stdout, 'signal delivery, cancellation, and listener cleanup passed\n');
    assert.equal(result.stderr, '');
  });
}
