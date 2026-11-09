// Lasm.JS.Web (library/Lasm/JS/Web/*.lean) is generated from WebIDL by
// scripts/bindings/generate-web.mjs: the committed files must be its output,
// and the generated surface must cover the tier-1 list (scripts/bindings/web-tier1.mjs).
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { readFileSync, readdirSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { modules } from '../scripts/bindings/web-tier1.mjs';
import { libraryModules } from '../src/lasm-library.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));

test('the committed Lasm.JS.Web modules are the generator output', () => {
  const r = spawnSync(process.execPath, [fileURLToPath(new URL('../scripts/bindings/generate-web.mjs', import.meta.url)), '--check'], { encoding: 'utf8' });
  assert.equal(r.status, 0, r.stdout + r.stderr);
});

test('every tier-1 interface, global and namespace is generated', () => {
  const { surface } = JSON.parse(readFileSync(new URL('../scripts/bindings/web-surface.json', import.meta.url), 'utf8'));
  for (const m of modules) {
    for (const name of [...m.interfaces ?? [], ...m.globals ?? [], ...m.namespaces ?? []]) {
      assert.ok(surface[name], `${name} is missing from the generated surface`);
      assert.equal(surface[name].module, m.name);
    }
  }
});

test('the generated modules are shipped library modules, in import order', () => {
  const generated = readdirSync(new URL('../library/Lasm/JS/Web/', import.meta.url)).map(f => `Lasm.JS.Web.${f.replace(/\.lean$/, '')}`);
  for (const m of [...generated, 'Lasm.JS.Web']) assert.ok(libraryModules.includes(m), `${m} is not in src/lasm-library.mjs libraryModules`);
  for (const m of generated) {
    const source = readFileSync(`${root}library/${m.replaceAll('.', '/')}.lean`, 'utf8');
    for (const [, imported] of source.matchAll(/^import (Lasm\.\S+)$/gm))
      assert.ok(libraryModules.indexOf(imported) < libraryModules.indexOf(m), `${m} imports ${imported}, which comes later`);
  }
});
