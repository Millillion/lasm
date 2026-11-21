// The API inventory guard (scripts/api/inventory.mjs, ROADMAP.md milestone
// 0.1): every public surface Lasm has (Lean modules and namespaces, CLI
// commands, flags, targets and templates, LASM_* environment variables,
// builtin modules, npm entry points) is named in docs/API_DECISIONS.md, and
// its entry ids follow the Stage 0 scheme.
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { test } from 'node:test';
import { check, codeSpans, decisionsPath, readDecisions, entryIds, detailHeadings, detailIds, flagsIn, mentioned, surfaces } from '../scripts/api/inventory.mjs';

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
  const markdown = readDecisions().replaceAll('`--no-watch`', 'no-watch').replaceAll('`lasm:app`', 'lasm-app');
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
  assert.deepEqual(entryIds(['A1', 'A9.1', '0.1-1', '0.7-22', '0.4-17.1'].map(table).join('')), { ids: ['A1', 'A9.1', '0.1-1', '0.7-22', '0.4-17.1'], malformed: [] });
  assert.deepEqual(entryIds(table('0.8-1') + table('A0') + table('0.4-17.0') + table('| Id') + table('Milestone')).malformed, ['0.8-1', 'A0', '0.4-17.0']);
});

test('new entries never take a bare A57+ id, and ids are unique', async () => {
  const markdown = readDecisions();
  const { problems } = await check(undefined, markdown + '\n| A57 | x | y | open |\n| 0.1-1 | x | y | open |\n');
  assert.ok(problems.some(p => p.startsWith('entry id A57: new entries take milestone-prefixed ids')));
  assert.ok(problems.includes('entry id 0.1-1 is used twice'));
});

test('detail headings: their ids are read, counted and checked', async () => {
  assert.deepEqual(detailHeadings('## 0.4 Node, Bun and Deno\n### 0.7-1 and 0.7-16: One help text\n#### A8, A47, A48: shapes\n### A41–A43: no helpers\n#### 0.6-4 (continued): private\n### 0.4-17.1 Bun leaves out `$`\n').map(h => [h.ids, h.continued]),
    [[['0.7-1', '0.7-16'], false], [['A8', 'A47', 'A48'], false], [['A41', 'A43'], false], [['0.6-4'], true], [['0.4-17.1'], false]]);
  const rows = '| 0.4-17 | x | y |\n| A6 | x | y |\n';
  // Sub-ids of an entry with a row are counted; continuations are not new ids.
  assert.deepEqual(detailIds(rows + '### 0.4-17.1 a\n### 0.4-17.2 b\n#### A6.1: c\n#### A6.1 (continued): d\n'), { ids: ['0.4-17.1', '0.4-17.2', 'A6.1'], problems: [] });
  // A heading-only top-level id, an orphan sub-id, a duplicate and a malformed id are refused.
  const { problems } = detailIds(rows + '### 0.4-10 x\n### 0.4-18.1 y\n### 0.4-17.1 a\n### 0.4-17.1 again\n### 0.9-1 z\n');
  assert.deepEqual(problems, [
    'detail id 0.4-10 has no table row: give it one, or make it a sub-id of an entry that has one',
    'detail id 0.4-18.1 has no table row: give it one, or make it a sub-id of an entry that has one',
    'detail id 0.4-17.1 is defined by two headings',
    'detail id 0.9-1 is not A<n>, A<n>.<m>, 0.<milestone>-<n> or 0.<milestone>-<n>.<m>',
  ]);
  // The real inventory: its detail sub-ids are counted, and a broken one fails the check.
  const { detailIds: real } = await check();
  assert.ok(real.includes('A56.1') && real.includes('A6.2'), real.join(' '));
  const broken = await check(undefined, readDecisions() + '\n### A56.1 again\n### 0.6-99.1 orphan\n');
  assert.ok(broken.problems.includes('detail id A56.1 is defined by two headings'));
  assert.ok(broken.problems.includes('detail id 0.6-99.1 has no table row: give it one, or make it a sub-id of an entry that has one'));
});
