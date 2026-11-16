// The project's own JavaScript files (src/project-modules.mjs, A6):
// @[js "./ffi/x.mjs" …] bindings resolved against their Lean file, with the
// files they import, and copied under project-modules/.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { copyProjectModules, declaresProjectModules, isProjectModule, projectModuleName, projectModules, relativeImportsOf, withAbsoluteFiles } from '../src/project-modules.mjs';

function project(t, files) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-project-modules-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  for (const [name, text] of Object.entries(files)) {
    mkdirSync(join(directory, name, '..'), { recursive: true });
    writeFileSync(join(directory, name), text);
  }
  return directory;
}
const binding = (module, relative, file, name = 'B') => ({ name, module, path: 'f', arity: 1, relative, file });

test('specifiers: ./ and ../ are project files, named by their path under project-modules/', () => {
  assert.equal(isProjectModule('./ffi/x.mjs'), true);
  assert.equal(isProjectModule('../x.mjs'), true);
  for (const s of ['node:path', 'pg', 'lasm:ui-dom', 'globalThis', '.x', undefined]) assert.equal(isProjectModule(s), false, String(s));
  assert.equal(projectModuleName('./App/ffi/x.mjs'), 'App/ffi/x.mjs');
  assert.equal(declaresProjectModules('@[js "./ffi/x.mjs" "f"] opaque f : IO Unit'), true);
  assert.equal(declaresProjectModules('@[ js  "../x.mjs" "f"]'), true);
  assert.equal(declaresProjectModules('@[js "pg" "Pool"] -- "./x.mjs"'), false);
});

test('relative imports: static, re-exports, side effects and literal dynamic imports; nothing else', () => {
  const text = [
    "import { a } from './a.mjs';",
    "import * as b from \"../b.mjs\"",
    "import c, { d } from './c/d.mjs';",
    "export { e } from './e.mjs';",
    "export * from './f.mjs';",
    "import './g.mjs';",
    "const h = await import('./h.mjs');",
    "import pg from 'pg';",
    "export const x = './not-an-import.mjs';",
    "// import { y } from './commented.mjs'",
    "/* import './block.mjs'; */",
  ].join('\n');
  assert.deepEqual(relativeImportsOf(text), ['./a.mjs', '../b.mjs', './c/d.mjs', './e.mjs', './f.mjs', './g.mjs', './h.mjs']);
});

test('a binding resolves against its Lean file; the files it imports come along, once each', t => {
  const directory = project(t, {
    'App/Server.lean': '',
    'App/ffi/x.mjs': "import { y } from './lib/y.mjs';\nimport { z } from '../shared/z.mjs';\nexport const f = () => y + z;\n",
    'App/ffi/lib/y.mjs': "import { z } from '../../shared/z.mjs';\nexport const y = 1;\n",
    'App/shared/z.mjs': 'export const z = 2;\n',
    'Main.lean': '',
  });
  const bindings = withAbsoluteFiles([binding('./App/ffi/x.mjs', './ffi/x.mjs', 'App/Server.lean'),
    binding('./App/ffi/x.mjs', './ffi/x.mjs', 'App/Server.lean', 'C'), { name: 'D', module: 'pg', path: 'Pool', arity: 0 }], directory);
  assert.equal(bindings[0].file, join(directory, 'App/Server.lean'));
  const { files } = projectModules(bindings, directory);
  assert.deepEqual(files.map(f => [f.specifier, f.name, f.path]), [
    ['./App/ffi/lib/y.mjs', 'App/ffi/lib/y.mjs', join(directory, 'App/ffi/lib/y.mjs')],
    ['./App/ffi/x.mjs', 'App/ffi/x.mjs', join(directory, 'App/ffi/x.mjs')],
    ['./App/shared/z.mjs', 'App/shared/z.mjs', join(directory, 'App/shared/z.mjs')],
  ]);
  assert.match(files[0].sha256, /^[0-9a-f]{64}$/);
  const out = join(directory, 'out');
  copyProjectModules(out, { files });
  assert.equal(readFileSync(join(out, 'project-modules/App/shared/z.mjs'), 'utf8'), 'export const z = 2;\n');
  assert.ok(existsSync(join(out, 'project-modules/App/ffi/lib/y.mjs')));
  assert.deepEqual(projectModules([], directory), { files: [] });
});

test('refused: a missing file, a file that is not .mjs, a path above the source root, one specifier for two files', t => {
  const directory = project(t, { 'Main.lean': '', 'a.mjs': "import './up.mjs';\n", 'b.js': '', 'x/c.mjs': "import '../../outside.mjs';\n" });
  const lean = join(directory, 'Main.lean');
  assert.throws(() => projectModules([binding('./missing.mjs', './missing.mjs', lean)], directory), /Lasm\.JS binding B .*missing\.mjs does not exist/);
  assert.throws(() => projectModules([binding('./b.js', './b.js', lean)], directory), /must be an ES module file ending in \.mjs/);
  assert.throws(() => projectModules([binding('../a.mjs', '../a.mjs', lean)], directory), /outside the Lean source root/);
  assert.throws(() => projectModules([binding('./x/c.mjs', './x/c.mjs', lean)], directory), /\.\/x\/c\.mjs imports \.\.\/\.\.\/outside\.mjs: .* outside the Lean source root/);
  assert.throws(() => projectModules([binding('./a.mjs', './a.mjs', lean)], directory), /\.\/a\.mjs imports \.\/up\.mjs: .*up\.mjs does not exist/);
  mkdirSync(join(directory, 'Lib'));
  writeFileSync(join(directory, 'two.mjs'), '');
  writeFileSync(join(directory, 'Lib/two.mjs'), '');
  assert.throws(() => projectModules([binding('./two.mjs', './two.mjs', lean), binding('./two.mjs', './two.mjs', join(directory, 'Lib/M.lean'), 'C')], directory),
    /\.\/two\.mjs names two files/);
});
