// Lasm's builtin JavaScript modules (src/edge/builtin-modules.mjs): names,
// files and the closure every build copies or bundles, over a stand-in
// directory of builtins.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { builtinPrefix, builtinDirectory, isBuiltinModule, builtinModuleNames, builtinModuleFile, builtinModuleClosure } from '../src/edge/builtin-modules.mjs';
import { forAll } from './helpers/property.mjs';

function directoryOf(files) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-builtins-'));
  for (const [name, text] of Object.entries(files)) writeFileSync(join(directory, name), text);
  return directory;
}

test('builtin modules: the prefix, the shipped directory and which specifiers are builtins', () => {
  assert.equal(builtinPrefix, 'lasm:');
  assert.equal(builtinDirectory, fileURLToPath(new URL('../src/lasm-modules/', import.meta.url)));
  for (const yes of ['lasm:web', 'lasm:', 'lasm:x/y']) assert.equal(isBuiltinModule(yes), true, yes);
  for (const no of ['web', 'hono', 'Lasm:web', ' lasm:web', 'node:lasm:x', undefined, null, 7, { startsWith: () => true }]) assert.equal(isBuiltinModule(no), false, String(no));
});

test('builtinModuleNames: the .mjs files with valid names, sorted', () => {
  const directory = directoryOf({ 'web.mjs': '', 'app.mjs': '', 'ui-dom.mjs': '', 'b2.mjs': '', 'Upper.mjs': '', '9x.mjs': '', 'a_b.mjs': '', 'notes.md': '', 'c.mjs.bak': '', 'mjs': '', '.mjs': '' });
  mkdirSync(join(directory, 'sub'));
  try { assert.deepEqual(builtinModuleNames(directory), ['app', 'b2', 'ui-dom', 'web']); }
  finally { rmSync(directory, { recursive: true, force: true }); }
});

test('builtinModuleFile: the file of a builtin; anything else fails naming the builtins', () => {
  const directory = directoryOf({ 'web.mjs': '', 'app.mjs': '', 'Bad.mjs': '' });
  try {
    assert.equal(builtinModuleFile('lasm:web', directory), join(directory, 'web.mjs'));
    assert.throws(() => builtinModuleFile('web', directory), { message: '"web" is not a Lasm builtin module (lasm:<name>)' });
    assert.throws(() => builtinModuleFile(undefined, directory), { message: 'undefined is not a Lasm builtin module (lasm:<name>)' });
    for (const specifier of ['lasm:nope', 'lasm:Bad', 'lasm:', 'lasm:../web', 'lasm:web.mjs'])
      assert.throws(() => builtinModuleFile(specifier, directory),
        { message: `Unknown Lasm builtin JavaScript module ${JSON.stringify(specifier)}. Builtin modules: lasm:app, lasm:web` });
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

// Proposition: Lasm.Cli.Candidates.builtin_closure
//   ∀ (imports : String → List String) (requested : List String), Acyclic imports →
//     (builtinModuleClosure imports requested).Nodup ∧
//     (∀ m, m ∈ builtinModuleClosure imports requested ↔
//       ∃ r ∈ requested, r.startsWith "lasm:" ∧ (m = r ∨ Reaches imports r m)) ∧
//     DependenciesFirst imports (builtinModuleClosure imports requested)
test('builtinModuleClosure: the requested builtins and those they import, dependencies first', () => {
  const styles = [n => `import { x } from './${n}.mjs';`, n => `import * as m from "./${n}.mjs"`, n => `  export { y } from './${n}.mjs';  `,
    n => `export * from "./${n}.mjs";`, n => `import d, { e as f } from './${n}.mjs';`, n => `import g from'./${n}.mjs'`];
  forAll(g => {
    const names = g.array(g.int(1, 8), (_, i) => `m${i}${g.pick(['', '-x', 'b'])}`);
    const imports = names.map((_, i) => [...new Set(g.array(g.int(0, 3), () => g.int(i + 1, names.length)).filter(j => j < names.length))]);
    const files = Object.fromEntries(names.map((name, i) => [name + '.mjs', ['// a builtin', ...imports[i].map(j => g.pick(styles)(names[j])), 'export const v = 1;'].join('\n') + '\n']));
    const requested = [...g.array(g.int(0, 3), () => 'lasm:' + g.pick(names)), ...g.array(g.int(0, 2), () => g.pick(['hono', 'node:fs', './local.mjs']))];
    return { names, imports, files, requested: g.next() < 0.5 ? requested.reverse() : requested };
  }, ({ names, imports, files, requested }) => {
    const directory = directoryOf(files);
    try {
      const closure = builtinModuleClosure(requested, directory);
      const reachable = new Set();
      const walk = i => { if (reachable.has(i)) return; reachable.add(i); for (const j of imports[i]) walk(j); };
      for (const r of requested) if (r.startsWith('lasm:')) walk(names.indexOf(r.slice(5)));
      assert.deepEqual(new Set(closure), new Set([...reachable].map(i => 'lasm:' + names[i])));
      assert.equal(new Set(closure).size, closure.length);
      for (const [at, specifier] of closure.entries())
        for (const j of imports[names.indexOf(specifier.slice(5))]) assert.ok(closure.indexOf('lasm:' + names[j]) < at, `${names[j]} before ${specifier}`);
    } finally { rmSync(directory, { recursive: true, force: true }); }
  }, { runs: 120 });
});

test('builtinModuleClosure follows only relative imports of builtins; an unknown one fails', () => {
  const directory = directoryOf({
    'a.mjs': "import x from 'hono';\nimport y from '../b.mjs';\nimport z from './B.mjs';\n// import { b } from './b.mjs';\nconst s = \"import { c } from './c.mjs'\";\nimport { d } from './d.mjs'; export const a = 1;\n",
    'b.mjs': '', 'c.mjs': '', 'd.mjs': '',
    'e.mjs': "import { gone } from './gone.mjs';\n",
  });
  try {
    assert.deepEqual(builtinModuleClosure(['lasm:a'], directory), ['lasm:a']);
    assert.deepEqual(builtinModuleClosure(['lasm:a', 'lasm:a', 'lasm:b'], directory), ['lasm:a', 'lasm:b']);
    assert.deepEqual(builtinModuleClosure([], directory), []);
    assert.throws(() => builtinModuleClosure(['lasm:e'], directory), /Unknown Lasm builtin JavaScript module "lasm:gone"/);
  } finally { rmSync(directory, { recursive: true, force: true }); }
  // The shipped builtins.
  assert.deepEqual(builtinModuleClosure(['lasm:app']), ['lasm:app']);
});
