import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, realpathSync, rmSync, symlinkSync, existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative, toNamespacedPath } from 'node:path';
import { execFileSync } from 'node:child_process';
import { canonicalApplicationPath, exactCaseImportSource } from '../src/application-sources.mjs';
import { insideDirectory } from '../src/platform.mjs';

test('canonical source roots recognize filesystem aliases without admitting siblings', t => {
  const root = mkdtempSync(join(tmpdir(), 'lasm source paths λ-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const standard = join(root, 'standard library'), sibling = join(root, 'standard library sibling');
  mkdirSync(standard); mkdirSync(sibling);
  writeFileSync(join(standard, 'Init.lean'), '-- standard fixture\n');
  writeFileSync(join(sibling, 'External.lean'), '-- external fixture\n');
  let alias;
  if (process.platform === 'win32') {
    // Ask Windows for its actual DOS alias; /u makes the built-in output UTF-16
    // independently of the console code page and the Unicode fixture name.
    alias = execFileSync(process.env.ComSpec ?? join(process.env.SystemRoot, 'System32/cmd.exe'),
      ['/d', '/u', '/c', `for %I in ("${standard}") do @echo %~sI`],
      { encoding: 'utf16le', windowsVerbatimArguments: true, timeout: 10000 }).trim();
    if (alias.toLowerCase() === realpathSync.native(standard).toLowerCase()) {
      t.skip('This Windows volume does not provide a distinct DOS alias'); return;
    }
  } else {
    alias = join(root, 'library link'); symlinkSync(standard, alias);
  }
  assert.equal(readFileSync(join(alias, 'Init.lean'), 'utf8'), '-- standard fixture\n');
  const directory = canonicalApplicationPath(alias);
  const imported = canonicalApplicationPath(realpathSync.native(join(standard, 'Init.lean')));
  assert.equal(canonicalApplicationPath(toNamespacedPath(join(standard, 'Init.lean'))), imported,
    'Extended Windows paths and ordinary paths identify the same module');
  assert.equal(insideDirectory(directory, imported), true, 'Native Lean paths and Node cache aliases identify the same library');
  assert.equal(relative(directory, imported), 'Init.lean', 'Module output paths stay inside their source root');
  assert.equal(insideDirectory(directory, canonicalApplicationPath(join(sibling, 'External.lean'))), false);
});

test('project files never shadow standard roots by case-insensitive name', t => {
  const root = mkdtempSync(join(tmpdir(), 'lasm import case-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const project = join(root, 'project'), standard = join(root, 'src', 'lean');
  mkdirSync(project); mkdirSync(join(standard, 'Init'), { recursive: true }); mkdirSync(join(standard, 'lake', 'Lake'), { recursive: true });
  mkdirSync(join(standard, 'Std'));
  for (const file of ['Init.lean', 'Std.lean', 'Init/Data.lean', 'Std/Data.lean']) writeFileSync(join(standard, file), '');
  writeFileSync(join(standard, 'lake', 'Lake.lean'), '');
  // Upstream tests/compile keeps `init.lean` beside every compiled test.
  for (const file of ['init.lean', 'Main.lean', 'Helper.lean', 'lake.lean']) writeFileSync(join(project, file), '');
  mkdirSync(join(project, 'std')); writeFileSync(join(project, 'std', 'Data.lean'), '');
  // `lean --src-deps` prints the imported name under the first search entry it accepts.
  const resolveImport = file => exactCaseImportSource(join(project, file), project, standard);
  if (existsSync(join(project, 'Init.lean')))
    t.diagnostic('case-insensitive volume: the project path answers for Init, as on macOS and Windows');
  assert.equal(resolveImport('Init.lean'), join(standard, 'Init.lean'));
  assert.equal(resolveImport(join('Std', 'Data.lean')), join(standard, 'Std', 'Data.lean'));
  assert.equal(resolveImport('Lake.lean'), join(standard, 'lake', 'Lake.lean'), 'Lake comes from src/lean/lake');
  // Exactly named local modules and lowercase local imports stay local.
  assert.equal(resolveImport('Helper.lean'), join(project, 'Helper.lean'));
  assert.equal(resolveImport('init.lean'), join(project, 'init.lean'));
  assert.equal(resolveImport(join('std', 'Data.lean')), join(project, 'std', 'Data.lean'));
  assert.equal(exactCaseImportSource(join(standard, 'Init.lean'), project, standard), join(standard, 'Init.lean'));
  assert.throws(() => resolveImport('Missing.lean'), /unknown module prefix 'Missing'/);
});
