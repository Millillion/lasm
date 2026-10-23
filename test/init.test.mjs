import assert from 'node:assert/strict';
import { test } from 'node:test';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { parseLasmArguments } from '../src/cli-arguments.mjs';
import { initProject, lakeName, packageName, templates } from '../src/init.mjs';

test('lasm init arguments', () => {
  assert.deepEqual(parseLasmArguments(['init', 'my-app']), { command: 'init', template: 'plain', directory: 'my-app' });
  assert.deepEqual(parseLasmArguments(['init', 'my-app', '--template', 'hono']), { command: 'init', template: 'hono', directory: 'my-app' });
  assert.deepEqual(parseLasmArguments(['init', '-t=std-http', 'x']), { command: 'init', template: 'std-http', directory: 'x' });
  assert.deepEqual(parseLasmArguments(['init', '--help']), { command: 'init-help' });
  assert.throws(() => parseLasmArguments(['init']), /Usage: lasm init/);
  assert.throws(() => parseLasmArguments(['init', 'a', 'b']), /Usage: lasm init/);
  assert.throws(() => parseLasmArguments(['init', 'a', '--template']), /--template requires a value/);
  assert.throws(() => parseLasmArguments(['init', 'a', '--template', 'koa']), /Unknown template "koa"/);
  assert.throws(() => parseLasmArguments(['init', 'a', '--rebuild']), /Unknown lasm init option/);
});

test('project names', () => {
  assert.equal(packageName('/tmp/My App'), 'my-app');
  assert.equal(packageName('/tmp/λ'), 'lean-app');
  assert.equal(lakeName('my-app'), 'my_app');
  assert.equal(lakeName('1st'), 'app_1st');
});

test('every template creates a complete project', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-init-'));
  try {
    for (const template of Object.keys(templates)) {
      const directory = join(root, `app ${template}`);
      const result = initProject({ directory, template });
      assert.deepEqual(result.files.sort(), ['.dockerignore', '.gitignore', 'App.lean', 'Dockerfile', 'Main.lean', 'README.md',
        'lakefile.toml', 'lean-toolchain', 'package.json']);
      const read = file => readFileSync(join(directory, file), 'utf8');
      assert.match(read('lean-toolchain'), /^leanprover\/lean4:v4\.\d+\.\d+\n$/);
      assert.match(read('lakefile.toml'), /root = "Main"/);
      const pkg = JSON.parse(read('package.json'));
      assert.equal(pkg.scripts.build, 'lasm build Main.lean');
      assert.equal(pkg.engines.node, '>=24');
      assert.equal(Object.keys(pkg.devDependencies).length, 1);
      assert.equal(Boolean(pkg.dependencies), templates[template].interop);
      const dockerfile = read('Dockerfile');
      assert.match(dockerfile, /^FROM node:24-bookworm-slim$/m);
      assert.match(dockerfile, /npx lasm build Main\.lean --output dist/);
      assert.equal(/PORT=8080/.test(dockerfile), templates[template].server);
      assert.equal(read('Main.lean').includes('import Lasm.JS'), templates[template].interop);
      assert.match(read('.gitignore'), /^dist\/$/m);
    }
    // Never overwrite: a non-empty directory is refused; an empty one (or only .git) is used.
    assert.throws(() => initProject({ directory: join(root, 'app plain'), template: 'plain' }), /is not empty/);
    mkdirSync(join(root, 'empty', '.git'), { recursive: true });
    initProject({ directory: join(root, 'empty'), template: 'plain' });
    assert.ok(existsSync(join(root, 'empty', 'Main.lean')));
    mkdirSync(join(root, 'other')); writeFileSync(join(root, 'other', 'notes.txt'), 'keep');
    assert.throws(() => initProject({ directory: join(root, 'other'), template: 'hono' }), /is not empty/);
    assert.equal(readFileSync(join(root, 'other', 'notes.txt'), 'utf8'), 'keep');
  } finally { rmSync(root, { recursive: true, force: true }); }
});
