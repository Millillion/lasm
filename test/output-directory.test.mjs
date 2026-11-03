// Browser, edge and WASI outputs are moved into place by replaceOutputDirectory:
// an unchanged rebuild must rewrite nothing (found by the metamorphic touch
// relation, scripts/tooling/metamorphic.mjs: every browser rebuild rewrote all
// 12 files of its output).
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, statSync, utimesSync, existsSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { replaceOutputDirectory, sameOutputTree, writeFileIfChanged } from '../src/output-directory.mjs';

const scratch = t => { const d = mkdtempSync(join(tmpdir(), 'lasm-output-directory-')); t.after(() => rmSync(d, { recursive: true, force: true })); return d; };
const tree = (directory, files) => { for (const [name, text] of Object.entries(files)) { mkdirSync(join(directory, name, '..'), { recursive: true }); writeFileSync(join(directory, name), text); } };
const old = new Date('2020-01-01T00:00:00Z');
const age = (directory, names) => { for (const name of names) utimesSync(join(directory, name), old, old); };

test('an unchanged output is kept with its file times; staging is removed', t => {
  const d = scratch(t), staging = join(d, 'out.staging'), out = join(d, 'out');
  const files = { 'index.html': '<p>x</p>', 'app.js': 'export {}', 'assets/app.wasm': Buffer.from([0, 97, 115, 109]) };
  tree(out, files); age(out, Object.keys(files)); tree(staging, files);
  assert.equal(replaceOutputDirectory(staging, out), false);
  assert.ok(!existsSync(staging));
  for (const name of Object.keys(files)) assert.equal(statSync(join(out, name)).mtimeMs, old.getTime(), name);
});

test('any changed, added or removed file replaces the output', t => {
  for (const change of [s => writeFileSync(join(s, 'app.js'), 'export const x = 1'), s => writeFileSync(join(s, 'new.js'), ''),
    s => rmSync(join(s, 'assets/app.wasm')), s => writeFileSync(join(s, 'assets/app.wasm'), Buffer.from([0, 97, 115, 110]))]) {
    const d = scratch(t), staging = join(d, 'out.staging'), out = join(d, 'out');
    const files = { 'app.js': 'export {}', 'assets/app.wasm': Buffer.from([0, 97, 115, 109]) };
    tree(out, files); tree(staging, files); change(staging);
    const expected = JSON.stringify(Object.fromEntries(['app.js', 'new.js', 'assets/app.wasm'].filter(n => existsSync(join(staging, n))).map(n => [n, readFileSync(join(staging, n)).toString('hex')])));
    assert.equal(replaceOutputDirectory(staging, out), true);
    assert.equal(JSON.stringify(Object.fromEntries(['app.js', 'new.js', 'assets/app.wasm'].filter(n => existsSync(join(out, n))).map(n => [n, readFileSync(join(out, n)).toString('hex')]))), expected);
  }
});

test('a missing destination is created; extra files count unless regenerated at the top level', t => {
  const d = scratch(t);
  tree(join(d, 'a'), { 'x.js': '1' });
  assert.equal(replaceOutputDirectory(join(d, 'a'), join(d, 'new', 'out')), true);
  assert.equal(readFileSync(join(d, 'new', 'out', 'x.js'), 'utf8'), '1');
  tree(join(d, 's'), { 'lasm/p.mjs': 'p' }); tree(join(d, 'o'), { 'lasm/p.mjs': 'p', 'worker.mjs': 'w', 'lasm/stale.mjs': 's' });
  assert.equal(sameOutputTree(join(d, 's'), join(d, 'o'), name => name === 'worker.mjs'), false, 'a nested extra file is never ignored');
  rmSync(join(d, 'o', 'lasm/stale.mjs'));
  assert.equal(sameOutputTree(join(d, 's'), join(d, 'o'), name => name === 'worker.mjs'), true);
  assert.equal(sameOutputTree(join(d, 's'), join(d, 'o')), false);
});

test('writeFileIfChanged leaves identical files alone', t => {
  const d = scratch(t), file = join(d, 'main.mjs');
  assert.equal(writeFileIfChanged(file, 'a'), true);
  utimesSync(file, old, old);
  assert.equal(writeFileIfChanged(file, 'a'), false);
  assert.equal(statSync(file).mtimeMs, old.getTime());
  assert.equal(writeFileIfChanged(file, Buffer.from('b')), true);
  assert.equal(readFileSync(file, 'utf8'), 'b');
});
