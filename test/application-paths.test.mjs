import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, realpathSync, rmSync, symlinkSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative } from 'node:path';
import { execFileSync } from 'node:child_process';
import { canonicalApplicationPath } from '../src/application-sources.mjs';
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
  assert.equal(insideDirectory(directory, imported), true, 'Native Lean paths and Node cache aliases identify the same library');
  assert.equal(relative(directory, imported), 'Init.lean', 'Module output paths stay inside their source root');
  assert.equal(insideDirectory(directory, canonicalApplicationPath(join(sibling, 'External.lean'))), false);
});
