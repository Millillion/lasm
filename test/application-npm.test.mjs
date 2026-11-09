import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, existsSync, symlinkSync, statSync, renameSync } from 'node:fs';
import { join, sep } from 'node:path';
import { tmpdir } from 'node:os';
import { planNodeModules, copyNodeModules, copyNodeModulesAsync } from '../src/application-npm.mjs';

function pkg(root, path, manifest, files = { 'index.js': 'module.exports = 1;' }) {
  const directory = join(root, path);
  mkdirSync(directory, { recursive: true });
  writeFileSync(join(directory, 'package.json'), JSON.stringify(manifest));
  for (const [name, text] of Object.entries(files)) { mkdirSync(join(directory, name, '..'), { recursive: true }); writeFileSync(join(directory, name), text); }
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

test('the plan: hoisted lookups, optional and peer packages only when installed, sorted files and their total size', async () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { a: '1' }, optionalDependencies: { opt: '1', absent: '1' } }));
  pkg(root, 'node_modules/a', { name: 'a', version: '1.0.0', dependencies: { shared: '1' }, peerDependencies: { peer: '1', 'no-peer': '1' }, optionalDependencies: { 'no-opt': '1' } }, { 'index.js': 'a' });
  mkdirSync(join(root, 'node_modules/a/lib'), { recursive: true });
  writeFileSync(join(root, 'node_modules/a/lib/z.js'), 'zz'); writeFileSync(join(root, 'node_modules/a/lib/b.js'), 'b');
  // a's own node_modules is a separate entry of the closure; a nested .bin of a package is kept.
  pkg(root, 'node_modules/a/node_modules/.bin', { name: 'bin-not-a-package' });
  pkg(root, 'node_modules/shared', { name: 'shared', version: '3.0.0' }, { 'index.js': 'shared', '.bin/tool': 'kept' });
  pkg(root, 'node_modules/peer', { name: 'peer', version: '4.0.0' });
  pkg(root, 'node_modules/opt', { name: 'opt', version: '5.0.0' });
  const plan = planNodeModules(root);
  assert.deepEqual(plan.packages.map(p => p.path).sort(), ['node_modules/a', 'node_modules/opt', 'node_modules/peer', 'node_modules/shared']);
  assert.deepEqual(Object.fromEntries(plan.packages.map(p => [p.name, p.version])), { a: '1.0.0', shared: '3.0.0', peer: '4.0.0', opt: '5.0.0' });
  const paths = plan.files.map(file => file.path.split(sep).join('/'));
  assert.deepEqual(paths, ['node_modules/a/index.js', 'node_modules/a/lib/b.js', 'node_modules/a/lib/z.js', 'node_modules/a/package.json',
    'node_modules/opt/index.js', 'node_modules/opt/package.json', 'node_modules/peer/index.js', 'node_modules/peer/package.json',
    'node_modules/shared/.bin/tool', 'node_modules/shared/index.js', 'node_modules/shared/package.json']);
  assert.equal(plan.bytes, plan.files.reduce((total, file) => total + statSync(file.source).size, 0));
  assert.ok(plan.bytes > 0);
  assert.match(plan.identity, /^[0-9a-f]{64}$/);
  // The same bytes under another name are another closure.
  renameSync(join(root, 'node_modules/a/lib/z.js'), join(root, 'node_modules/a/lib/y.js'));
  assert.notEqual(planNodeModules(root).identity, plan.identity);
  renameSync(join(root, 'node_modules/a/lib/y.js'), join(root, 'node_modules/a/lib/z.js'));
  assert.equal(planNodeModules(root).identity, plan.identity);
  // copyNodeModulesAsync writes the same tree as copyNodeModules.
  const sync = mkdtempSync(join(tmpdir(), 'lasm-npm-sync-')), concurrent = mkdtempSync(join(tmpdir(), 'lasm-npm-async-'));
  copyNodeModules(plan, sync);
  await copyNodeModulesAsync(plan, concurrent, { jobs: 2 });
  for (const path of paths) assert.equal(readFileSync(join(concurrent, path), 'utf8'), readFileSync(join(sync, path), 'utf8'), path);
  await copyNodeModulesAsync({ files: [] }, concurrent);
});

test('only Lasm itself, or nothing installed that is optional: an ordinary build', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { '@lasm/cli': '1' }, optionalDependencies: { gone: '1' } }));
  pkg(root, 'node_modules/@lasm/cli', { name: '@lasm/cli', version: '0.6.0' });
  assert.equal(planNodeModules(root), undefined);
  writeFileSync(join(root, 'package.json'), '{}');
  assert.equal(planNodeModules(root), undefined);
});

test('a missing dependency of a dependency names who needs it; unreadable manifests are named', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { a: '1' } }));
  pkg(root, 'node_modules/a', { name: 'a', version: '1.2.0', dependencies: { gone: '1' } });
  assert.throws(() => planNodeModules(root), { code: 'ERR_LASM_NPM_MISSING',
    message: `npm dependency gone (needed by a@1.2.0) is not installed in ${join(root, 'node_modules')}. Run npm install next to package.json, then build again.` });
  writeFileSync(join(root, 'package.json'), '{ not json');
  assert.throws(() => planNodeModules(root), error => error.message.startsWith(`Cannot read ${join(root, 'package.json')}: `));
});

test('a dependency that resolves outside the project is refused', { skip: process.platform === 'win32' }, () => {
  const outside = mkdtempSync(join(tmpdir(), 'lasm-npm-outside-'));
  pkg(outside, 'pkg', { name: 'far', version: '1.0.0' });
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { far: '1' } }));
  mkdirSync(join(root, 'node_modules'));
  symlinkSync(join(outside, 'pkg'), join(root, 'node_modules/far'));
  // A symlink inside the project tree to outside is allowed (npm links local file: dependencies).
  assert.equal(planNodeModules(root).packages[0].name, 'far');
  // A package found above the project is not the project's.
  const parent = mkdtempSync(join(tmpdir(), 'lasm-npm-parent-'));
  pkg(parent, 'node_modules/up', { name: 'up', version: '1.0.0' });
  const project = join(parent, 'project');
  mkdirSync(project);
  writeFileSync(join(project, 'package.json'), JSON.stringify({ dependencies: { up: '1' } }));
  assert.throws(() => planNodeModules(project), { code: 'ERR_LASM_NPM_MISSING' });
});

test('a linked package\'s own dependencies must be the project\'s too; nested node_modules deeper inside a package are files', { skip: process.platform === 'win32' }, () => {
  const outside = mkdtempSync(join(tmpdir(), 'lasm-npm-outside-'));
  pkg(outside, 'pkg', { name: 'linked', version: '1.0.0', dependencies: { far: '1' } });
  pkg(outside, 'node_modules/far', { name: 'far', version: '2.0.0' });
  const root = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(root, 'package.json'), JSON.stringify({ dependencies: { linked: '1' } }));
  mkdirSync(join(root, 'node_modules'));
  symlinkSync(join(outside, 'pkg'), join(root, 'node_modules/linked'));
  assert.throws(() => planNodeModules(root), { message: `npm dependency far resolves outside the project (${join(outside, 'node_modules/far')}); install it in the project's node_modules` });
  const second = mkdtempSync(join(tmpdir(), 'lasm-npm-'));
  writeFileSync(join(second, 'package.json'), JSON.stringify({ dependencies: { a: '1' } }));
  pkg(second, 'node_modules/a', { name: 'a', version: '1.0.0' }, { 'index.js': '', 'lib/node_modules/vendored.js': 'kept' });
  assert.ok(planNodeModules(second).files.some(file => file.path.split(sep).join('/') === 'node_modules/a/lib/node_modules/vendored.js'));
});
