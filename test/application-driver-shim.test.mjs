import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, readFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

test('compiled-driver adapters preserve exact argv, separate native children, and reject unmapped calls',
  { skip: process.platform !== 'linux' }, () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm driver λ '));
  try {
    const capture = join(dir, 'capture');
    writeFileSync(capture, '#!/bin/bash\nprintf "<%s>\\n" "$@"\n', { mode: 0o755 });
    const env = { ...process.env, LASM_TEST_INPUT: 'blocks unicode.in', LASM_TEST_DRIVER_DIST: join(dir, 'dist'),
      LASM_APPLICATION_ENGINE: capture, LASM_APPLICATION_TARGET: 'node',
      LASM_NATIVE_LEAN: capture, LASM_APPLICATION_CASE: dir };
    const run = (shim, args, extra = {}) => spawnSync('/bin/bash',
      [fileURLToPath(new URL('../scripts/application-tests/' + shim, import.meta.url)), ...args],
      { env: { ...env, ...extra }, encoding: 'utf8' });
    const args = ['-Dlinter.all=false', '--run', 'run_test.lean', env.LASM_TEST_INPUT];
    for (const shim of ['docparse-lean.sh', 'server-driver-lean.sh']) {
      for (const target of ['node', 'deno', 'bun']) {
        const result = run(shim, args, { LASM_APPLICATION_TARGET: target });
        assert.equal(result.status, 0, result.stderr); assert.equal(result.stderr, '');
        const expected = [...(target === 'deno' ? ['run', '-A'] : []), join(dir, 'dist/main.mjs'), env.LASM_TEST_INPUT];
        assert.equal(result.stdout, expected.map(arg => `<${arg}>\n`).join(''));
      }
      for (const unknown of [[], args.slice(0, -1), [...args, 'extra'], ['--run', 'other.lean']]) {
        const result = run(shim, unknown);
        assert.equal(result.status, 78); assert.equal(result.stdout, '');
        assert.match(result.stderr, /Unmapped/);
      }
    }
    const nativeArgs = ['--server', '-DstderrAsMessages=false', '-Dexperimental.module=true'];
    const server = run('server-driver-lean.sh', nativeArgs);
    assert.equal(server.status, 0); assert.equal(server.stderr, '');
    assert.equal(server.stdout, nativeArgs.map(arg => `<${arg}>\n`).join(''));
    assert.equal(readFileSync(join(dir, 'native-compiler-invocations.txt'), 'utf8'),
      'managed native Lean --server -DstderrAsMessages=false -Dexperimental.module=true\n');
    assert.equal(run('server-driver-lean.sh', [...nativeArgs, '--extra']).status, 78);
    assert.equal(run('docparse-lean.sh', nativeArgs).status, 78);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});
