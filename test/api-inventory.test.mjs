// The API inventory guard (scripts/api/inventory.mjs, ROADMAP.md milestone
// 0.1): every public surface Lasm has (Lean modules and namespaces, CLI
// commands, flags, targets and templates, LASM_* environment variables,
// builtin modules, npm entry points) is named in docs/API_DECISIONS.md, and
// its entry ids follow the Stage 0 scheme.
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { test } from 'node:test';
import { check, codeSpans, decisionsPath, entryIds, flagsIn, mentioned, surfaces } from '../scripts/api/inventory.mjs';

test('docs/API_DECISIONS.md names every public surface, with well-formed ids', async () => {
  const { problems, surfaces: all, ids } = await check();
  assert.deepEqual(problems, []);
  const kinds = new Set(all.map(s => s.kind));
  for (const kind of ['Lean module', 'Lean namespace', 'CLI command', 'CLI flag', 'target', 'template', 'environment variable', 'builtin module', 'npm entry point', 'npm bin'])
    assert.ok(kinds.has(kind), `the guard finds no ${kind}`);
  assert.ok(ids.includes('A1') && ids.includes('0.1-1'));
});

test('the guard finds the surfaces it is meant to guard', async () => {
  const names = new Set((await surfaces()).map(s => `${s.kind}:${s.name}`));
  for (const expected of ['Lean module:Lasm.JS.Core', 'Lean namespace:Lasm.UI', 'CLI command:build', 'CLI flag:--target',
    'CLI flag:--deploy', 'CLI flag:--no-watch', 'target:wasi-http', 'template:fullstack', 'environment variable:LASM_TOOLCHAIN_CACHE',
    'environment variable:LASM_DOWNLOAD_TOTAL_MS', 'builtin module:lasm:app', 'npm entry point:@lasm/cli/vite', 'npm bin:create-lasm'])
    assert.ok(names.has(expected), expected);
  // Error codes are not environment variables.
  assert.ok(!names.has('environment variable:LASM_HTTP_RETRY'));
});

test('a surface the inventory drops fails the check', async () => {
  const markdown = readFileSync(decisionsPath, 'utf8').replaceAll('`--no-watch`', 'no-watch').replaceAll('`lasm:app`', 'lasm-app');
  const { problems } = await check(undefined, markdown);
  assert.ok(problems.includes('CLI flag --no-watch is not in docs/API_DECISIONS.md'), problems.join('\n'));
  assert.ok(problems.includes('builtin module lasm:app is not in docs/API_DECISIONS.md'));
});

test('family globs cover generated modules, and only their own', () => {
  const spans = codeSpans('`Lasm.Fastly.*` and `lasm build` and `--target`');
  assert.ok(mentioned({ kind: 'Lean module', name: 'Lasm.Fastly.HttpReq' }, spans));
  assert.ok(!mentioned({ kind: 'Lean module', name: 'Lasm.Fastly' }, spans));
  assert.ok(!mentioned({ kind: 'Lean module', name: 'Lasm.FastlyX.A' }, spans));
  assert.ok(mentioned({ kind: 'CLI command', name: 'build' }, spans));
  assert.ok(!mentioned({ kind: 'CLI command', name: 'version' }, spans));
  assert.ok(mentioned({ kind: 'CLI flag', name: '--target' }, spans));
});

test('flags are read from literals and regex groups', () => {
  const body = `if (token === '--rebuild') {}
    const option = /^--(target|port)(?:=(.*))?$/s.exec(token);
    const match = /^(?:--template|-t)(?:=(.*))?$/s.exec(token);
    const output = /^--output(?:=(.*))?$/s.exec(token);`;
  assert.deepEqual(flagsIn(body), ['--output', '--port', '--rebuild', '--target', '--template', '-t']);
});

test('entry ids follow the Stage 0 scheme', () => {
  const table = id => `| ${id} | x | y |\n`;
  assert.deepEqual(entryIds(['A1', 'A9.1', '0.1-1', '0.7-22'].map(table).join('')), { ids: ['A1', 'A9.1', '0.1-1', '0.7-22'], malformed: [] });
  assert.deepEqual(entryIds(table('0.8-1') + table('A0') + table('| Id') + table('Milestone')).malformed, ['0.8-1', 'A0']);
});

test('new entries never take a bare A57+ id, and ids are unique', async () => {
  const markdown = readFileSync(decisionsPath, 'utf8');
  const { problems } = await check(undefined, markdown + '\n| A57 | x | y | open |\n| 0.1-1 | x | y | open |\n');
  assert.ok(problems.some(p => p.startsWith('entry id A57: new entries take milestone-prefixed ids')));
  assert.ok(problems.includes('entry id 0.1-1 is used twice'));
});
