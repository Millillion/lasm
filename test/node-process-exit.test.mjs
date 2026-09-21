import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, readFileSync, realpathSync, rmSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean process exit preserves status and distinguishes forced buffer discard',
  { timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-process-exit-')));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const source = join(root, 'test/fixtures/process-exit/Main.lean');
    function run(name, executable, prefix, mode) {
      const target = join(directory, `${name}-${mode}.txt`);
      const result = spawnSync(executable, [...prefix, mode, target],
        { encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL' });
      assert.equal(result.error, undefined);
      assert.equal(result.signal, null);
      return { code: result.status, stdout: result.stdout, stderr: result.stderr,
        file: existsSync(target) ? readFileSync(target, 'utf8') : null };
    }
    const expected = {};
    for (const [mode, code] of [['return',0],['exit',17],['force',19]]) {
      expected[mode] = run('native', resolveLean(root).lean, ['--run', source], mode);
      assert.deepEqual(expected[mode], { code, stdout: mode === 'force' ? '' : 'buffered stdout\n',
        stderr: 'unbuffered stderr\n', file: mode === 'force' ? '' : 'buffered file\n' });
    }
    const built = await buildMain(source);
    const embedded = join(directory, 'embedded.mjs');
    writeFileSync(embedded, `import create from ${JSON.stringify(pathToFileURL(join(built.output, 'index.mjs')).href)};
const api = await create({args: process.argv.slice(2), stdio: {stdout() {}, stderr() {}}});
try { await api.runMain(); throw Error('Expected guest exit'); }
catch (error) {
  if (error.name !== 'LeanExit') throw error;
  console.log(JSON.stringify({code: error.code, force: error.force, disposed: api.stats().disposed}));
}
console.log('host still running');
`);
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      for (const mode of Object.keys(expected)) await t.test(`${name}: ${mode}`, () => {
        assert.deepEqual(run(name, executable, [...prefix, join(built.output, 'main.mjs')], mode), expected[mode]);
      });
      for (const [mode, code] of [['exit', 17], ['force', 19]]) {
        await t.test(`${name}: source launcher ${mode}`, () => {
          assert.deepEqual(run(name + '-source', executable,
            [...prefix, join(root, `lasm-${name}.js`), source, '--'], mode), expected[mode]);
        });
        await t.test(`${name}: embedded ${mode} preserves host process`, () => {
          const result = run(name + '-embedded', executable, [...prefix, embedded], mode);
          assert.equal(result.code, 0);
          assert.equal(result.stderr, '');
          assert.equal(result.stdout,
            JSON.stringify({code, force: mode === 'force', disposed: true}) + '\n' + 'host still running\n');
        });
      }
    }
  });
