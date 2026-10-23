import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, existsSync, symlinkSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { planNodeModules, copyNodeModules } from '../src/application-npm.mjs';

function pkg(root, path, manifest, files = { 'index.js': 'module.exports = 1;' }) {
  const directory = join(root, path);
  mkdirSync(directory, { recursive: true });
  writeFileSync(join(directory, 'package.json'), JSON.stringify(manifest));
  for (const [name, text] of Object.entries(files)) writeFileSync(join(directory, name), text);
}

test('no package.json: no npm dependencies', () => {
  assert.equal(planNodeModules(mkdtempSync(join(tmpdir(), 'lasm-npm-'))), undefined);
});

test('the production closure keeps npm\'s layout and leaves out devDependencies', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { a: '1', '@lasm/compiler': 'file:lasm.tgz' }, optionalDependencies: { gone: '1' }, devDependencies: { dev: '1' } }));
  pkg(root, 'node_modules/@lasm/compiler', { name: '@lasm/compiler', version: '0.1.0' });
  pkg(root, 'node_modules/a', { name: 'a', version: '1.0.0', dependencies: { b: '2', '@s/c': '1' } });
  pkg(root, 'node_modules/a/node_modules/b', { name: 'b', version: '2.0.0' });
  pkg(root, 'node_modules/b', { name: 'b', version: '1.0.0' });
  pkg(root, 'node_modules/@s/c', { name: '@s/c', version: '1.0.0', peerDependencies: { a: '1' } });
  pkg(root, 'node_modules/dev', { name: 'dev', version: '1.0.0' });
  mkdirSync(join(root, 'node_modules/.bin'));
  const plan = planNodeModules(root);
  assert.deepEqual(plan.packages.map(p => p.path).sort(), ['node_modules/@s/c', 'node_modules/a', 'node_modules/a/node_modules/b']);
  const output = mkdtempSync(join(tmpdir(), 'lasm-npm-out-'));
  copyNodeModules(plan, output);
  assert.equal(JSON.parse(readFileSync(join(output, 'node_modules/a/node_modules/b/package.json'))).version, '2.0.0');
  assert.ok(!existsSync(join(output, 'node_modules/b')));
  assert.ok(!existsSync(join(output, 'node_modules/dev')));
  // The identity changes with any file of the closure.
  writeFileSync(join(root, 'node_modules/@s/c/index.js'), 'module.exports = 2;');
  assert.notEqual(planNodeModules(root).identity, plan.identity);
});

test('local file: dependencies (npm symlinks) are copied as directories', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { local: 'file:./local' } }));
  pkg(root, 'local', { name: 'local', version: '0.1.0' });
  mkdirSync(join(root, 'node_modules'));
  symlinkSync(join(root, 'local'), join(root, 'node_modules/local'), 'junction');
  const output = mkdtempSync(join(tmpdir(), 'lasm-npm-out-'));
  copyNodeModules(planNodeModules(root), output);
  assert.equal(readFileSync(join(output, 'node_modules/local/index.js'), 'utf8'), 'module.exports = 1;');
});

test('a missing required dependency asks for npm install', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { missing: '1' } }));
  assert.throws(() => planNodeModules(root), { code: 'ERR_LASM_NPM_MISSING', message: /npm dependency missing .* Run npm install/ });
});
