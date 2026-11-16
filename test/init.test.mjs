import assert from 'node:assert/strict';
import { test } from 'node:test';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { parseLasmArguments } from '../src/cli-arguments.mjs';
import { deployTargets, entryFile, initProject, lakeName, packageName, parseInitArguments, supabaseFunctionNameOf, templates } from '../src/init.mjs';

test('lasm init arguments', () => {
  assert.deepEqual(parseLasmArguments(['init', 'my-app']), { command: 'init', template: 'plain', deploy: [], directory: 'my-app' });
  assert.deepEqual(parseLasmArguments(['init', 'my-app', '--template', 'hono']), { command: 'init', template: 'hono', deploy: [], directory: 'my-app' });
  assert.deepEqual(parseLasmArguments(['init', '-t=fetch', 'x', '--deploy', 'lambda']), { command: 'init', template: 'fetch', deploy: ['lambda'], directory: 'x' });
  // The Lambda image calls a published handler: not for a template that brings its own server.
  assert.throws(() => parseLasmArguments(['init', '-t=std-http', 'x', '--deploy', 'lambda']), /has no --deploy targets/);
  assert.throws(() => parseLasmArguments(['init', 'x', '--deploy', 'lambda']), /needs a server template/);
  assert.deepEqual(parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy=vercel', '--deploy', 'lambda-container', '--deploy', 'vercel']).deploy, ['vercel', 'lambda-container']);
  assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy=pages']), /--deploy accepts lambda, lambda-container, lambda-edge, vercel, netlify, azure-functions, cloud-functions, workers, vercel-edge, netlify-edge, deno-deploy, supabase-edge/);
  // Cloudflare Workers (edge build): the Hono template only.
  assert.deepEqual(parseLasmArguments(['init', 'x', '-t', 'hono', '--deploy=workers']).deploy, ['workers']);
  assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'express', '--deploy', 'workers']), /--deploy workers supports the hono, fetch and fullstack templates, not express/);
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
    for (const template of Object.keys(templates).filter(name => !templates[name].browser && !templates[name].fullstack)) {
      const directory = join(root, `app ${template}`);
      const result = initProject({ directory, template });
      // The fetch and hono templates also have their handler and its default export (Export.lean).
      const handler = templates[template].handler ? [`${templates[template].handler}.lean`, 'Export.lean'] : [];
      assert.deepEqual(result.files.sort(), ['.dockerignore', '.gitignore', 'App.lean', 'Dockerfile', 'Main.lean', 'README.md',
        'lakefile.toml', 'lean-toolchain', 'package.json', ...handler].sort());
      const read = file => readFileSync(join(directory, file), 'utf8');
      assert.match(read('lean-toolchain'), /^leanprover\/lean4:v4\.\d+\.\d+\n$/);
      assert.match(read('lakefile.toml'), /root = "Main"/);
      const pkg = JSON.parse(read('package.json'));
      assert.equal(pkg.scripts.build, 'lasm build Main.lean');
      // Servers rebuild and restart on save (lasm dev); the plain program runs once with arguments.
      assert.equal(pkg.scripts.dev, templates[template].server ? 'lasm dev Main.lean' : 'lasm Main.lean --');
      assert.equal(pkg.engines.node, '>=24');
      assert.equal(Object.keys(pkg.devDependencies).length, 1);
      assert.equal(Boolean(pkg.dependencies), templates[template].interop);
      const dockerfile = read('Dockerfile');
      assert.match(dockerfile, /^FROM node:24-bookworm-slim$/m);
      assert.match(dockerfile, /npx lasm build Main\.lean --output dist/);
      assert.equal(/PORT=8080/.test(dockerfile), templates[template].server);
      // Interop templates bind npm packages (import Lasm.JS); the fetch template uses Lasm.JS.Web only.
      assert.equal(/^import Lasm\.JS$/m.test(read(templates[template].handler ? `${templates[template].handler}.lean` : 'Main.lean')), templates[template].interop);
      assert.match(read('.gitignore'), /^dist\/$/m);
    }
    const lambda = join(root, 'lambda');
    assert.ok(initProject({ directory: lambda, template: 'hono', deploy: ['lambda-container'] }).files.includes('Dockerfile.lambda'));
    const recipe = readFileSync(join(lambda, 'Dockerfile.lambda'), 'utf8');
    assert.match(recipe, /^FROM public\.ecr\.aws\/lambda\/nodejs:24$/m);
    // The handler on Lambda's own image: no Web Adapter, no server inside.
    assert.match(recipe, /npx lasm build Export\.lean --target lambda/);
    assert.match(recipe, /^CMD \["lasm-lambda\.handler"\]$/m);
    assert.doesNotMatch(recipe, /lambda-adapter|AWS_LWA/);
    assert.match(readFileSync(join(lambda, 'README.md'), 'utf8'), /Dockerfile\.lambda/);
    // Function platforms: npm scripts that build the default export (Export.lean) with lasm package, platform files and packages.
    const functions = join(root, 'functions');
    const created = initProject({ directory: functions, template: 'fetch', deploy: ['lambda', 'lambda-edge', 'vercel', 'netlify', 'azure-functions', 'cloud-functions'] }).files;
    for (const file of ['vercel.json', 'netlify.toml', 'public/.gitkeep']) assert.ok(created.includes(file), file);
    assert.ok(!created.includes('Dockerfile.lambda'));
    const pkg = JSON.parse(readFileSync(join(functions, 'package.json'), 'utf8'));
    for (const target of ['lambda', 'lambda-edge', 'vercel', 'netlify', 'azure-functions', 'cloud-functions'])
      assert.equal(pkg.scripts[`build:${target}`], `lasm build Export.lean --target ${target}`);
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
    // Edge targets: build scripts, platform files, and the Node server left out of the edge build.
    const edge = join(root, 'edge');
    const edgeFiles = initProject({ directory: edge, template: 'hono', deploy: ['workers', 'vercel-edge', 'netlify-edge', 'deno-deploy'] }).files;
    for (const file of ['wrangler.toml', 'vercel.json', 'netlify.toml', 'public/lasm.txt']) assert.ok(edgeFiles.includes(file), file);
    const edgePkg = JSON.parse(readFileSync(join(edge, 'package.json'), 'utf8'));
    for (const target of ['workers', 'vercel-edge', 'netlify-edge', 'deno-deploy'])
      assert.equal(edgePkg.scripts[`build:${target}`], `lasm build Export.lean --target ${target}`);
    assert.equal(edgePkg.scripts['start:deno'], 'deno run -A deno/main.mjs');
    assert.deepEqual(edgePkg.lasm, { edge: { exclude: ['@hono/node-server'] } });
    assert.match(readFileSync(join(edge, '.gitignore'), 'utf8'), /^deno\/$/m);
    assert.match(readFileSync(join(edge, 'README.md'), 'utf8'), /entrypoint to `deno\/main\.mjs`/);
    // Bun and Deno scripts (portable templates: plain and hono only).
    assert.equal(edgePkg.scripts['dev:bun'], 'bun x --bun lasm dev Main.lean');
    assert.equal(edgePkg.scripts['build:deno'], 'lasm build Export.lean --target deno');
    assert.match(readFileSync(join(edge, 'README.md'), 'utf8'), /## Bun and Deno/);
    assert.match(readFileSync(join(edge, '.gitignore'), 'utf8'), /^bun\/$/m);
    assert.equal(readFileSync(join(edge, '.gitignore'), 'utf8').match(/^deno\/$/gm).length, 1);
    // Supabase Edge Functions: config.toml, the build script and the ignored function directory.
    const supabase = join(root, 'Supa App');
    const supabaseFiles = initProject({ directory: supabase, template: 'hono', deploy: ['supabase-edge'] }).files;
    assert.ok(supabaseFiles.includes('supabase/config.toml'));
    const supabaseConfig = readFileSync(join(supabase, 'supabase/config.toml'), 'utf8');
    assert.match(supabaseConfig, /^\[functions\.supa-app\]\nverify_jwt = true\nimport_map = "\.\/functions\/supa-app\/deno\.json"$/m);
    assert.equal(JSON.parse(readFileSync(join(supabase, 'package.json'), 'utf8')).scripts['build:supabase-edge'], 'lasm build Export.lean --target supabase-edge');
    assert.match(readFileSync(join(supabase, '.gitignore'), 'utf8'), /^supabase\/functions\/supa-app\/$/m);
    assert.match(readFileSync(join(supabase, 'README.md'), 'utf8'), /npx supabase functions deploy supa-app --project-ref PROJECT_REF/);
    assert.equal(supabaseFunctionNameOf('supa-app'), 'supa-app');
    assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'express', '--deploy', 'supabase-edge']), /--deploy supabase-edge supports the hono template/);
    initProject({ directory: join(root, 'express-app'), template: 'express' });
    const expressPkg = JSON.parse(readFileSync(join(root, 'express-app', 'package.json'), 'utf8'));
    assert.ok(!expressPkg.scripts['dev:bun'] && !expressPkg.lasm, 'Express needs Node');
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

test('the web template: a static browser app built with --target browser', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-init-web-'));
  try {
    const directory = join(root, 'web app');
    const result = initProject({ directory, template: 'web' });
    assert.deepEqual(result.files.sort(), ['.gitignore', 'App.lean', 'Main.lean', 'README.md', 'index.html', 'lakefile.toml', 'lean-toolchain',
      'package.json', 'public/style.css']);
    const read = file => readFileSync(join(directory, file), 'utf8');
    const pkg = JSON.parse(read('package.json'));
    assert.equal(pkg.scripts.build, 'lasm build Main.lean --target browser');
    assert.equal(pkg.scripts.dev, 'lasm dev Main.lean --target browser');
    assert.equal(pkg.dependencies, undefined);
    assert.match(read('Main.lean'), /^import Lasm\.UI$/m);
    assert.match(read('index.html'), /data-lasm-app/);
    assert.match(read('index.html'), /<\/head>/);
    assert.throws(() => parseLasmArguments(['init', 'x', '-t', 'web', '--deploy', 'workers']), /needs a server template/);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('the fullstack template: shared, server and client modules; Node and Workers scripts', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-init-fullstack-'));
  try {
    const directory = join(root, 'todos');
    const result = initProject({ directory, template: 'fullstack' });
    assert.deepEqual(result.files.sort(), ['.gitignore', 'Client.lean', 'README.md', 'Server.lean', 'Shared.lean', 'View.lean', 'lakefile.toml',
      'lean-toolchain', 'package.json', 'public/style.css', 'wrangler.toml']);
    const read = file => readFileSync(join(directory, file), 'utf8');
    const pkg = JSON.parse(read('package.json'));
    assert.equal(pkg.scripts.dev, 'lasm dev --target node=Server.lean,browser=Client.lean --output dist/public/client');
    assert.equal(pkg.scripts['build:client'], 'lasm build Client.lean --target browser --output dist/public/client');
    assert.equal(pkg.scripts.start, 'node dist/server/main.mjs');
    // A platform target writes its own directory (workers/); only the Node server goes to dist/server.
    assert.match(pkg.scripts["build:workers"], /lasm build Server\.lean --target workers$/);
    assert.match(read('wrangler.toml'), /\[assets\]\ndirectory = "\.\/dist\/public"/);
    assert.match(read('Server.lean'), /^import Lasm\.RPC\.Server$/m);
    assert.match(read('Client.lean'), /^import Lasm\.RPC\.Client$/m);
    assert.match(read('lakefile.toml'), /name = "Shared"/);
    // Every Lasm.Fetch target: the browser app is embedded in the server program.
    const all = initProject({ directory: join(root, 'all'), template: 'fullstack', deploy: ['fastly', 'wasi-http', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'spin'] });
    assert.ok(['fastly.toml', 'spin.toml', 'vercel.json', 'netlify.toml'].every(f => all.files.includes(f)), all.files.join(' '));
    const scripts = JSON.parse(readFileSync(join(root, 'all', 'package.json'), 'utf8')).scripts;
    for (const t of ['workers', 'bun', 'deno', 'fastly', 'wasi-http', 'vercel-edge', 'netlify-edge', 'deno-deploy'])
      assert.equal(scripts[`build:${t}`], `npm run build:client && lasm build Server.lean --target ${t}`, t);
    assert.match(readFileSync(join(root, 'all', 'fastly.toml'), 'utf8'), /\[local_server\.kv_stores\]\n  TODOS = \[\]/);
    assert.match(read('Server.lean'), /embed_dir! "dist\/public"/);
    assert.match(read('Server.lean'), /Lasm\.KV\.open "TODOS"/);
  } finally { rmSync(root, { recursive: true, force: true }); }
});

// The program each target builds (entryFile): Main.lean on Node, the default
// export (Export.lean) for the templates that publish a handler, and the fetch
// template's own programs for Fastly and wasi:http.
test('entryFile: Main.lean on Node, Export.lean for the default export, Fastly.lean and WasiHttp.lean', () => {
  for (const template of ['fetch', 'hono']) {
    assert.equal(entryFile(template, 'node'), 'Main.lean', template);
    assert.equal(entryFile(template, undefined), 'Main.lean', template);
    for (const platform of ['bun', 'deno', 'workers', 'vercel-edge', 'lambda', 'lambda-edge', 'vercel', 'netlify', 'azure-functions', 'cloud-functions'])
      assert.equal(entryFile(template, platform), 'Export.lean', `${template} ${platform}`);
  }
  assert.equal(entryFile('fetch', 'fastly'), 'Fastly.lean');
  assert.equal(entryFile('fetch', 'wasi-http'), 'WasiHttp.lean');
  // Only the fetch template has its own Fastly and wasi:http programs.
  assert.equal(entryFile('hono', 'fastly'), 'Export.lean');
  assert.equal(entryFile('hono', 'wasi-http'), 'Export.lean');
  // Templates without a handler module build Main.lean everywhere, as does an unknown name.
  for (const template of ['plain', 'express', 'fastify', 'std-http', 'web', 'fullstack', 'koa'])
    for (const platform of ['node', 'bun', 'deno', 'workers', 'lambda', 'fastly', 'wasi-http'])
      assert.equal(entryFile(template, platform), 'Main.lean', `${template} ${platform}`);
});

// Which templates the function platforms take (API decisions 0.2-10, 0.2-11).
test('the function platforms and the Lambda image take only the templates with a handler', () => {
  const functionTargets = ['lambda', 'lambda-container', 'lambda-edge', 'vercel', 'netlify', 'azure-functions', 'cloud-functions'];
  for (const target of functionTargets) {
    assert.deepEqual(deployTargets[target].templates, ['hono', 'fetch'], target);
    for (const template of ['hono', 'fetch'])
      assert.deepEqual(parseInitArguments(['x', '-t', template, '--deploy', target]).deploy, [target], `${template} ${target}`);
    for (const template of ['express', 'fastify', 'std-http'])
      assert.throws(() => parseInitArguments(['x', '-t', template, '--deploy', target]),
        { message: `--deploy ${target} supports the hono and fetch templates, not ${template}. The ${template} template has no --deploy targets: it runs wherever its Dockerfile runs` });
  }
  // express, fastify and std-http accept no --deploy target at all.
  for (const template of ['express', 'fastify', 'std-http'])
    for (const target of Object.keys(deployTargets))
      assert.throws(() => parseInitArguments(['x', '-t', template, '--deploy', target]), /--deploy /, `${template} ${target}`);
  // The container image is the handler on Lambda's own image (no Web Adapter).
  const root = mkdtempSync(join(tmpdir(), 'lasm-init-lambda-'));
  try {
    for (const template of ['fetch', 'hono']) {
      const app = join(root, template);
      const files = initProject({ directory: app, template, deploy: ['lambda-container', 'lambda'] }).files;
      assert.ok(files.includes('Dockerfile.lambda') && files.includes('Export.lean'), template);
      const recipe = readFileSync(join(app, 'Dockerfile.lambda'), 'utf8');
      assert.match(recipe, /^FROM public\.ecr\.aws\/lambda\/nodejs:24$/m);
      assert.match(recipe, /npx lasm build Export\.lean --target lambda/);
      assert.match(recipe, /^CMD \["lasm-lambda\.handler"\]$/m);
      assert.doesNotMatch(recipe, /adapter|AWS_LWA/i);
      const pkg = JSON.parse(readFileSync(join(app, 'package.json'), 'utf8'));
      assert.equal(pkg.scripts['build:lambda'], 'lasm build Export.lean --target lambda');
      assert.equal(pkg.scripts.build, 'lasm build Main.lean');
      assert.equal(pkg.scripts['build:bun'], 'bun x --bun lasm build Export.lean --target bun');
      assert.match(readFileSync(join(app, 'lakefile.toml'), 'utf8'), new RegExp(`\\[\\[lean_lib\\]\\]\\nname = "${template === 'hono' ? 'Routes' : 'Handler'}"`));
    }
  } finally { rmSync(root, { recursive: true, force: true }); }
});
