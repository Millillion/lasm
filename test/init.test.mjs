import assert from 'node:assert/strict';
import { test } from 'node:test';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { parseLasmArguments } from '../src/cli-arguments.mjs';
import { initProject, lakeName, packageName, templates } from '../src/init.mjs';

test('lasm init arguments', () => {
  assert.deepEqual(parseLasmArguments(['init', 'my-app']), { command: 'init', template: 'plain', deploy: [], directory: 'my-app' });
  assert.deepEqual(parseLasmArguments(['init', 'my-app', '--template', 'hono']), { command: 'init', template: 'hono', deploy: [], directory: 'my-app' });
  assert.deepEqual(parseLasmArguments(['init', '-t=std-http', 'x', '--deploy', 'lambda']), { command: 'init', template: 'std-http', deploy: ['lambda'], directory: 'x' });
  assert.throws(() => parseLasmArguments(['init', 'x', '--deploy', 'lambda']), /needs a server template/);
  assert.deepEqual(parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy=vercel', '--deploy', 'lambda-zip', '--deploy', 'vercel']).deploy, ['vercel', 'lambda-zip']);
  assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy=pages']), /--deploy accepts lambda, lambda-zip, lambda-edge, vercel, netlify, azure, gcf, workers, vercel-edge, netlify-edge/);
  // Cloudflare Workers (experimental edge build): the Hono template only.
  assert.deepEqual(parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy=workers']).deploy, ['workers']);
  assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'express', '--deploy', 'workers']), /--deploy workers supports the hono template, not express/);
  assert.deepEqual(parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy', 'vercel-edge', '--deploy', 'netlify-edge', '--deploy', 'workers']).deploy, ['vercel-edge', 'netlify-edge', 'workers']);
  assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy', 'vercel-edge', '--deploy', 'vercel']), /choose one/);
  assert.throws(() => parseLasmArguments(['init', 'x', '--deploy', 'netlify']), /--deploy netlify needs a server template/);
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
    const lambda = join(root, 'lambda');
    assert.ok(initProject({ directory: lambda, template: 'hono', deploy: ['lambda'] }).files.includes('Dockerfile.lambda'));
    const recipe = readFileSync(join(lambda, 'Dockerfile.lambda'), 'utf8');
    assert.match(recipe, /^FROM public\.ecr\.aws\/lambda\/nodejs:24$/m);
    assert.match(recipe, /AWS_LWA_READINESS_CHECK_PATH=\/health/);
    assert.match(recipe, /printf '#!\/bin\/sh\\nexec node "\$LAMBDA_TASK_ROOT\/main\.mjs"\\n'/);
    assert.match(readFileSync(join(lambda, 'README.md'), 'utf8'), /Dockerfile\.lambda/);
    // Function platforms: npm scripts that run lasm package, platform files and packages.
    const functions = join(root, 'functions');
    const created = initProject({ directory: functions, template: 'std-http', deploy: ['lambda-zip', 'lambda-edge', 'vercel', 'netlify', 'azure', 'gcf'] }).files;
    for (const file of ['vercel.json', 'netlify.toml', 'public/.gitkeep']) assert.ok(created.includes(file), file);
    assert.ok(!created.includes('Dockerfile.lambda'));
    const pkg = JSON.parse(readFileSync(join(functions, 'package.json'), 'utf8'));
    for (const target of ['lambda', 'lambda-edge', 'vercel', 'netlify', 'azure', 'gcf'])
      assert.equal(pkg.scripts[`build:${target}`], `lasm build Main.lean --target ${target}`);
    // Platform CLIs are the user's: never dependencies of a generated project.
    for (const cli of ['vercel', 'netlify-cli', 'aws-sam-cli', 'azure-functions-core-tools', '@google-cloud/functions-framework-cli'])
      assert.ok(!pkg.dependencies?.[cli] && !pkg.devDependencies?.[cli], cli);
    assert.deepEqual(Object.keys(pkg.dependencies), ['@azure/functions', '@google-cloud/functions-framework']);
    assert.equal(JSON.parse(readFileSync(join(functions, 'vercel.json'), 'utf8')).buildCommand, 'npm run build:vercel');
    assert.match(readFileSync(join(functions, 'netlify.toml'), 'utf8'), /included_files = \["netlify\/functions\/lasm\/\*\*"\]/);
    const notes = readFileSync(join(functions, 'README.md'), 'utf8');
    for (const text of ['lambda.zip', 'lambda-edge.zip', '.vercel/output', 'netlify/functions/lasm', 'func start', 'gcloud functions deploy', "platform's own CLI"])
      assert.ok(notes.includes(text), text);
    assert.match(readFileSync(join(functions, '.gitignore'), 'utf8'), /^\.vercel\/$/m);
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
