import test from 'node:test';
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { jsRuntime, jsRuntimeVersion, runtimeExecutable, runtimeExecutableFor, scriptPrefix, scriptCommand, evalCommand } from '../src/js-runtime.mjs';

test('under Node the runtime is node, its version Node\'s and scripts run with this executable', () => {
  assert.equal(jsRuntime, 'node');
  assert.equal(jsRuntimeVersion, process.versions.node);
  assert.equal(runtimeExecutable, process.execPath);
  assert.equal(runtimeExecutableFor(), process.execPath);
  assert.deepEqual(scriptPrefix(), []);
  assert.deepEqual(scriptPrefix('bun'), []);
});

test('Deno runs scripts with all permissions, no lockfile, CommonJS detection and quietly', () => {
  assert.deepEqual(scriptPrefix('deno'), ['run', '--allow-all', '--no-lock', '--unstable-detect-cjs', '--quiet']);
  assert.deepEqual(scriptCommand('tool.js', ['-o', 'out'], { runtime: 'deno', execPath: '/bin/deno' }),
    ['/bin/deno', ['run', '--allow-all', '--no-lock', '--unstable-detect-cjs', '--quiet', 'tool.js', '-o', 'out']]);
  assert.deepEqual(evalCommand('code()', ['a'], { runtime: 'deno', execPath: '/bin/deno' }),
    ['/bin/deno', ['eval', '--no-lock', '--no-config', '--quiet', 'code()', 'a']]);
});

test('Node and Bun run a script directly and evaluate code with -e', () => {
  for (const runtime of ['node', 'bun']) {
    assert.deepEqual(scriptCommand('tool.js', ['x'], { runtime, execPath: '/bin/js' }), ['/bin/js', ['tool.js', 'x']]);
    assert.deepEqual(evalCommand('code()', ['x'], { runtime, execPath: '/bin/js' }), ['/bin/js', ['-e', 'code()', 'x']]);
  }
  assert.deepEqual(scriptCommand('tool.js'), [process.execPath, ['tool.js']]);
  assert.deepEqual(evalCommand('1'), [process.execPath, ['-e', '1']]);
  // The command really runs: code sees its trailing arguments.
  const [command, args] = evalCommand('process.stdout.write(process.argv.slice(1).join(","))', ['p', 'q']);
  assert.equal(execFileSync(command, args, { encoding: 'utf8' }), 'p,q');
});
