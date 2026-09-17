import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, readFileSync, cpSync } from 'node:fs';
import { join } from 'node:path';
import { build } from '../src/build.mjs';
import { root, run } from '../scripts/build-runtime.mjs';

const project = join(root, '.work/project with spaces');
mkdirSync(project, { recursive: true });
writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.32.0\n');
writeFileSync(join(project, 'Imported.lean'), 'module\nprelude\npublic import Init.Prelude\npublic def importedValue : Nat := 18446744073709551629\n');
writeFileSync(join(project, 'Main.lean'), 'module\nprelude\npublic import Imported\npublic def square (n : Nat) : Nat := Nat.mul n n\npublic def constant : Nat := importedValue\n');
const config = join(project, 'lasm.json');
const square = { declaration: 'square', parameters: ['Nat'], result: 'Nat' };
writeFileSync(config, JSON.stringify({ module: 'Main', exports: { square, constant: { declaration: 'constant', parameters: [], result: 'Nat' } } }));

test('a module built in a path with spaces runs from a separate Node project', async () => {
  const result = await build(config, join(project, 'built artifacts'));
  const consumer = join(root, '.work/separate consumer');
  mkdirSync(consumer, { recursive: true });
  cpSync(result.output, join(consumer, 'generated'), { recursive: true });
  writeFileSync(join(consumer, 'package.json'), '{"type":"module","private":true}\n');
  writeFileSync(join(consumer, 'app.mjs'), `import createModule from './generated/index.mjs';\nconst m = await createModule();\nconsole.log(JSON.stringify([m.square(12n).toString(), m.constant().toString()]));\nm.dispose();\n`);
  const actual = run(process.execPath, [join(consumer, 'app.mjs')], { cwd: consumer, env: { PATH: '/nonexistent' } });
  assert.equal(actual, '["144","18446744073709551629"]');
  assert.match(readFileSync(join(consumer, 'generated/THIRD_PARTY_NOTICES.txt'), 'utf8'), /LLVM libc\+\+/);
});

test('Lean checks declared export types before linking', async () => {
  writeFileSync(config, JSON.stringify({ module: 'Main', exports: { square: { ...square, parameters: ['String'] } } }));
  await assert.rejects(build(config, join(project, 'invalid-type')), error => /Type mismatch|type mismatch|Application type mismatch/.test(error.stdout?.toString() ?? ''));
});

test('unsupported native functions fail linking rather than becoming imports', async () => {
  writeFileSync(join(project, 'Foreign.lean'), 'module\nprelude\npublic import Init.Prelude\n@[extern "missing_lasm_test_native"] public opaque nativeOnly (n : Nat) : Nat\n');
  writeFileSync(config, JSON.stringify({ module: 'Foreign', exports: { foreign: { declaration: 'nativeOnly', parameters: ['Nat'], result: 'Nat' } } }));
  await assert.rejects(build(config, join(project, 'invalid-foreign')), error => /undefined symbol: missing_lasm_test_native/.test(error.stderr?.toString() ?? ''));
});
