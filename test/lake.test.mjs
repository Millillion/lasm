import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, readFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { build } from '../src/build.mjs';
import { root, run } from '../scripts/build-runtime.mjs';

const directory = join(root, '.work/lake project with spaces');
rmSync(directory, { recursive: true, force: true });
mkdirSync(join(directory, 'src'), { recursive: true });
mkdirSync(join(directory, 'dependency/src'), { recursive: true });
writeFileSync(join(directory, 'lean-toolchain'), 'leanprover/lean4:v4.32.0\n');
writeFileSync(join(directory, 'dependency/lakefile.toml'), 'name = "support"\n[[lean_lib]]\nname = "Support"\nsrcDir = "src"\n');
writeFileSync(join(directory, 'dependency/src/Support.lean'), 'module\nprelude\npublic import Init.Prelude\npublic def base : Nat := 37\n');
run('git', ['init', '-b', 'main'], { cwd: join(directory, 'dependency') });
run('git', ['add', 'lakefile.toml', 'src/Support.lean'], { cwd: join(directory, 'dependency') });
run('git', ['-c', 'commit.gpgsign=false', '-c', 'user.name=Lasm test', '-c', 'user.email=test@example.invalid', 'commit', '-m', 'fixture'], { cwd: join(directory, 'dependency') });
const revision = run('git', ['rev-parse', 'HEAD'], { cwd: join(directory, 'dependency') });
writeFileSync(join(directory, 'lakefile.lean'), `import Lake
open Lake DSL
package fixture where
  moreLeanArgs := #["-DmaxRecDepth=" ++ (get_config? recursion).getD "1234"]
require support from git ${JSON.stringify(pathToFileURL(join(directory, 'dependency')).href)} @ "${revision}"
lean_lib App where
  srcDir := "src"
`);
writeFileSync(join(directory, 'src/App.lean'), `module
prelude
public import Support
public meta import Lean.Elab.Command
public meta import Lean.Util.RecDepth
open Lean Elab Command in
elab "configurationValue" : command => do
  let n := maxRecDepth.get (← getOptions)
  elabCommand (← \`(public def $(mkIdent \`configured) : Nat := $(Lean.quote n)))
configurationValue
public def answer (n : Nat) : Nat := n + base
`);
const spec = { module: 'App', lakeOptions: { recursion: '1234' }, exports: {
  answer: { declaration: 'answer', parameters: ['Nat'], result: 'Nat' },
  configured: { declaration: 'configured', parameters: [], result: 'Nat' },
} };
const config = join(directory, 'lasm.json');
writeFileSync(config, JSON.stringify(spec));

test('Lake resolves pinned Git dependencies, source directories, and compiler options', async () => {
  const result = await build(config, join(directory, 'dist'));
  const api = await (await import(pathToFileURL(join(result.output, 'index.mjs')))).default();
  try {
    assert.equal(api.answer(5n), 42n);
    assert.equal(api.configured(), 1234n);
    assert.equal(result.lakeProject, directory);
    assert.ok(result.modules.includes('Support'));
    const manifest = JSON.parse(readFileSync(join(directory, 'lake-manifest.json'), 'utf8'));
    assert.equal(manifest.packages[0].rev, revision);
  } finally { api.dispose(); }
});

test('changing Lake configuration invalidates the application build', async () => {
  writeFileSync(config, JSON.stringify({ ...spec, lakeOptions: { recursion: '2345' } }));
  const result = await build(config, join(directory, 'changed'));
  const api = await (await import(pathToFileURL(join(result.output, 'index.mjs')))).default();
  try { assert.equal(api.configured(), 2345n); assert.equal(api.answer(10n), 47n); }
  finally { api.dispose(); }
});

test('explicit Lake paths and unsupported options fail with clear diagnostics', async () => {
  writeFileSync(config, JSON.stringify({ ...spec, lake: 'missing' }));
  await assert.rejects(build(config), /No Lake configuration/);
  writeFileSync(config, JSON.stringify({ ...spec, lakeOptions: { recursion: 20 } }));
  await assert.rejects(build(config), /Invalid Lake configuration option/);
});
