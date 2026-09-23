import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { launcherArguments } from '../src/launcher.mjs';
import { parseLasmArguments } from '../src/cli-arguments.mjs';
import { runApplicationChild } from '../src/application-cli.mjs';

test('compatibility launchers retain optional separators and literal application options', () => {
  for (const target of ['node', 'deno', 'bun']) for (const separator of [[], ['--']]) {
    const args = ['--rebuild', '--verbose', 'source λ/Main.lean', ...separator, 'λ 日本語', '', '--target', 'literal'];
    const parsed = parseLasmArguments(launcherArguments(args), { defaultTarget: target });
    assert.equal(parsed.target, target);
    assert.equal(parsed.input, 'source λ/Main.lean');
    assert.equal(parsed.rebuild, true); assert.equal(parsed.verbose, true);
    assert.deepEqual(parsed.args, ['λ 日本語', '', '--target', 'literal']);
  }
});

test('all compatibility help and usage errors run without downloading tools', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-launcher-help-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  for (const target of ['node', 'deno', 'bun']) for (const args of [['--help'], [], ['--target', 'node']]) {
    const result = spawnSync(process.execPath,
      ['--max-old-space-size=64', fileURLToPath(new URL(`../lasm-${target}.js`, import.meta.url)), ...args],
      { env: { ...process.env, PATH: '', LASM_TOOLCHAIN_CACHE: directory }, cwd: directory, encoding: 'utf8', timeout: 10_000 });
    assert.ifError(result.error);
    assert.equal(result.status, args[0] === '--help' ? 0 : 1);
    assert.match(result.stdout + result.stderr, /Usage: lasm-/);
    assert.deepEqual(readdirSync(directory), []);
  }
});

test('the common CLI child runner preserves an application exit code and diagnoses a missing engine', async () => {
  assert.equal(await runApplicationChild(process.execPath, ['--max-old-space-size=64', '-e', 'process.exit(7)'], 'missing'), 7);
  await assert.rejects(runApplicationChild('lasm-nonexistent-engine-482fecc4', [], 'Selected engine is missing'),
    { message: 'Selected engine is missing' });
});

test('a missing deployment engine fails before an ordinary Lean run downloads tools or creates a build cache', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-no-engine-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  writeFileSync(join(directory, 'Main.lean'), 'def main : IO Unit := IO.println "hello"\n');
  for (const target of ['deno', 'bun']) {
    const result = spawnSync(process.execPath,
      ['--max-old-space-size=64', fileURLToPath(new URL('../bin/lasm.mjs', import.meta.url)), 'Main.lean', '--target', target],
      { cwd: directory, env: { ...process.env, PATH: '', LASM_TOOLCHAIN_CACHE: join(directory, 'tools') },
        encoding: 'utf8', timeout: 10_000 });
    assert.ifError(result.error); assert.equal(result.status, 1);
    assert.match(result.stderr, new RegExp(`selected ${target} engine is not installed`));
    assert.deepEqual(readdirSync(directory), ['Main.lean']);
  }
});
