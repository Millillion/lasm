// lasm init's generated projects, file by file (src/init.mjs): every template,
// and every --deploy target with a template it supports, compared with the
// reviewed copies in test/fixtures/init-golden/. A change to a template shows
// up as a diff of those copies: regenerate them with
//   LASM_UPDATE_INIT_GOLDEN=1 node --test test/init-golden.test.mjs
// and review the diff. Lasm's version and its default Lean are written as
// <LASM_VERSION> and <LEAN_VERSION>, so a release does not change the copies.
// Files copied unchanged from templates/ (Main.lean, App.lean, …) are checked
// against templates/ instead.
import assert from 'node:assert/strict';
import test from 'node:test';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { deployTargets, initProject, initUsage, lakeName, nextSteps, packageName, parseInitArguments, runInit, supabaseFunctionNameOf,
  templateDependencies, templates } from '../src/init.mjs';
import { registerHooks } from 'node:module';
import { forAll } from './helpers/property.mjs';

// runInit's editor step, as a stand-in that records its arguments.
registerHooks({
  resolve(specifier, context, next) {
    if (specifier === './editor.mjs' && context.parentURL?.endsWith('/src/init.mjs'))
      return { url: 'data:text/javascript,' + encodeURIComponent('export const autoSetupEditor = (...a) => { globalThis.initEditorCalls.push(a); };'), shortCircuit: true };
    return next(specifier, context);
  },
});
globalThis.initEditorCalls = [];

const repository = fileURLToPath(new URL('..', import.meta.url));
const goldenRoot = join(repository, 'test/fixtures/init-golden');
const lasm = JSON.parse(readFileSync(join(repository, 'package.json'), 'utf8'));
const lean = JSON.parse(readFileSync(join(repository, 'src/toolchains.json'), 'utf8')).defaultLean;
const update = process.env.LASM_UPDATE_INIT_GOLDEN === '1';

// Directory names exercise the npm, Lake, Workers, Spin, Fastly and Supabase name rules.
const configurations = [
  ...Object.keys(templates).map(template => ({ name: template, directory: `${template} app`, template, deploy: [] })),
  { name: 'express-functions', directory: 'Func App.v2', template: 'express', deploy: ['lambda', 'lambda-zip', 'lambda-edge', 'vercel', 'netlify', 'azure', 'gcf'] },
  { name: 'fastify-gcf', directory: 'fastify_gcf', template: 'fastify', deploy: ['gcf'] },
  { name: 'std-http-lambda', directory: '2nd-server', template: 'std-http', deploy: ['lambda', 'vercel'] },
  { name: 'hono-edge', directory: '@Edge App!', template: 'hono', deploy: ['workers', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'supabase-edge'] },
  { name: 'hono-netlify-azure', directory: 'hono-2', template: 'hono', deploy: ['netlify', 'azure', 'lambda-edge'] },
  { name: 'fetch-wasi', directory: 'Fetch.App', template: 'fetch', deploy: ['fastly', 'wasi', 'wasi-http', 'spin', 'workers'] },
  { name: 'fetch-deno', directory: 'fetch deno', template: 'fetch', deploy: ['deno-deploy', 'vercel-edge'] },
  { name: 'plain-wasi', directory: 'plain_wasi', template: 'plain', deploy: ['wasi'] },
  { name: 'fullstack-all', directory: '1st Stack', template: 'fullstack', deploy: ['workers', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'fastly', 'wasi-http', 'spin'] },
  { name: 'fullstack-fastly', directory: 'todo-kv', template: 'fullstack', deploy: ['fastly'] },
  // Long names, runs of dots and trailing separators.
  { name: 'hono-workers-long', directory: `Workers..App ${'w'.repeat(60)}`, template: 'hono', deploy: ['workers'] },
  { name: 'fullstack-long', directory: `Stack..App ${'s'.repeat(60)}`, template: 'fullstack', deploy: [] },
  { name: 'fetch-names', directory: 'a..b-2_', template: 'fetch', deploy: ['fastly', 'spin'] },
];

const normalize = text => text.replaceAll(lasm.version, '<LASM_VERSION>').replaceAll(lean, '<LEAN_VERSION>');
const listFiles = (directory, base = directory) => readdirSync(directory).flatMap(name => {
  const file = join(directory, name);
  return statSync(file).isDirectory() ? listFiles(file, base) : [relative(base, file).split('\\').join('/')];
}).sort();
// Files lasm init copies from templates/: their source.
const copied = (template, file) => {
  const source = template === 'fullstack' ? join(repository, 'templates/fullstack', file)
    : file === 'App.lean' ? join(repository, 'templates/common/App.lean') : file === 'Main.lean' ? join(repository, 'templates', template, 'Main.lean') : undefined;
  return source && existsSync(source) && !file.endsWith('.toml') ? source : undefined;
};

const scratch = mkdtempSync(join(tmpdir(), 'lasm-init-golden-'));
test.after(() => rmSync(scratch, { recursive: true, force: true }));

for (const configuration of configurations) test(`lasm init ${configuration.template} ${configuration.deploy.map(d => '--deploy ' + d).join(' ')}`, () => {
  const { name, directory, template, deploy } = configuration;
  // The command line produces exactly this configuration.
  const parsed = parseInitArguments([directory, '--template', template, ...deploy.flatMap(target => ['--deploy', target])]);
  assert.deepEqual(parsed, { command: 'init', template, deploy, directory });
  const target = join(scratch, name, directory);
  const result = initProject({ directory: target, template, deploy });
  assert.equal(result.directory, target);
  assert.equal(result.name, packageName(target));
  const files = listFiles(target);
  assert.deepEqual([...result.files].sort(), files);
  const golden = join(goldenRoot, name);
  if (update) {
    rmSync(golden, { recursive: true, force: true });
    for (const file of files) {
      if (copied(template, file)) continue;
      mkdirSync(dirname(join(golden, file)), { recursive: true });
      writeFileSync(join(golden, file), normalize(readFileSync(join(target, file), 'utf8')));
    }
    writeFileSync(join(golden, '.files.json'), JSON.stringify(files, null, 2) + '\n');
  }
  assert.deepEqual(files, JSON.parse(readFileSync(join(golden, '.files.json'), 'utf8')), 'the generated files');
  for (const file of files) {
    const text = readFileSync(join(target, file), 'utf8');
    const source = copied(template, file);
    if (source) assert.equal(text, readFileSync(source, 'utf8'), file);
    else assert.equal(normalize(text), readFileSync(join(golden, file), 'utf8'), `${name}/${file} differs from test/fixtures/init-golden (LASM_UPDATE_INIT_GOLDEN=1 regenerates it)`);
  }
  // Whatever the template: package.json is valid JSON naming Lasm as a dev dependency.
  const pkg = JSON.parse(readFileSync(join(target, 'package.json'), 'utf8'));
  assert.equal(pkg.name, packageName(target));
  assert.deepEqual(pkg.devDependencies, { [lasm.name]: lasm.version });
  assert.equal(readFileSync(join(target, 'lean-toolchain'), 'utf8'), `leanprover/lean4:v${lean}\n`);
  for (const dependency of Object.keys(templateDependencies[template] ?? {})) assert.ok(pkg.dependencies[dependency], dependency);
});

test('every deploy target and every template appears in some configuration', () => {
  assert.deepEqual([...new Set(configurations.flatMap(c => c.deploy))].sort(), Object.keys(deployTargets).sort());
  assert.deepEqual([...new Set(configurations.map(c => c.template))].sort(), Object.keys(templates).sort());
});

test('lasm init refuses files and non-empty directories, and accepts an empty one or one with only .git', () => {
  const root = join(scratch, 'refusals');
  mkdirSync(root);
  writeFileSync(join(root, 'file'), 'x');
  assert.throws(() => initProject({ directory: join(root, 'file'), template: 'plain' }), { message: `${join(root, 'file')} is a file, not a directory. Choose a new or empty directory.` });
  mkdirSync(join(root, 'full')); writeFileSync(join(root, 'full', 'a'), '');
  assert.throws(() => initProject({ directory: join(root, 'full'), template: 'plain' }), { message: `${join(root, 'full')} is not empty. Choose a new or empty directory.` });
  mkdirSync(join(root, 'git', '.git'), { recursive: true });
  assert.equal(initProject({ directory: join(root, 'git'), template: 'plain' }).files.length, 9);
  mkdirSync(join(root, 'empty'));
  assert.equal(initProject({ directory: join(root, 'empty'), template: 'fullstack' }).name, 'empty');
  assert.throws(() => initProject({ directory: join(root, 'x'), template: 'constructor' }), { message: 'Unknown template "constructor"' });
  assert.throws(() => initProject({ directory: join(root, 'y'), template: 'koa' }), { message: 'Unknown template "koa"' });
  assert.equal(existsSync(join(root, 'x')), false);
  // The default is no deploy targets.
  assert.deepEqual(initProject({ directory: join(root, 'default'), template: 'hono' }).files.sort(),
    ['.dockerignore', '.gitignore', 'App.lean', 'Dockerfile', 'Main.lean', 'README.md', 'lakefile.toml', 'lean-toolchain', 'package.json']);
});

test('lasm init arguments: every option form and every error message', () => {
  const deployList = Object.keys(deployTargets).join(', ');
  const fails = (tokens, message) => assert.throws(() => parseInitArguments(tokens), { message }, JSON.stringify(tokens));
  assert.deepEqual(parseInitArguments(['app']), { command: 'init', template: 'plain', deploy: [], directory: 'app' });
  for (const form of [['--template', 'hono'], ['--template=hono'], ['-t', 'hono'], ['-t=hono']])
    assert.equal(parseInitArguments(['app', ...form]).template, 'hono', form.join(' '));
  assert.deepEqual(parseInitArguments(['app', '-t', 'hono', '--deploy=workers', '--deploy', 'workers', '--deploy', 'lambda']).deploy, ['workers', 'lambda']);
  // Directory names that look like options in their middle or end are directories.
  for (const directory of ['my-t', 'x--template', 'x--deploy', 'a-h']) assert.equal(parseInitArguments([directory]).directory, directory);
  for (const help of ['--help', '-h']) assert.deepEqual(parseInitArguments(['app', '--template', 'koa', help]), { command: 'init-help' });
  for (const tokens of [['app', '--template'], ['app', '--template='], ['app', '-t', '--deploy'], ['app', '-t', '-x']])
    fails(tokens, '--template requires a value\n\n' + initUsage);
  // A value ending with a dash is a value.
  fails(['app', '-t', 'hono-'], `Unknown template "hono-". Choose one of: ${Object.keys(templates).join(', ')}`);
  for (const tokens of [['app', '--deploy'], ['app', '--deploy='], ['app', '--deploy', 'pages'], ['app', '-t', 'hono', '--deploy', 'constructor'], ['app', '--deploy', '__proto__']])
    fails(tokens, `--deploy accepts ${deployList}\n\n` + initUsage);
  for (const option of ['--templates', '-tx', '--deployment', '--rebuild', '-'])
    fails(['app', option], `Unknown lasm init option: ${option}\n\n${initUsage}`);
  fails([], initUsage);
  fails(['a', 'b'], initUsage);
  for (const template of ['constructor', 'toString', 'Hono'])
    fails(['app', '-t', template], `Unknown template "${template}". Choose one of: plain, express, hono, fastify, std-http, web, fetch, fullstack`);
  for (const template of ['plain', 'web'])
    fails(['app', '-t', template, '--deploy', 'lambda'], `--deploy lambda needs a server template (express, hono, fastify, std-http or fetch), not ${template}`);
  // wasi is a CLI target: plain takes it; the first server-only target is named.
  assert.deepEqual(parseInitArguments(['app', '--deploy', 'wasi']).deploy, ['wasi']);
  fails(['app', '--deploy', 'wasi', '--deploy', 'netlify'], '--deploy netlify needs a server template (express, hono, fastify, std-http or fetch), not plain');
  // Each refusal names the targets the template does support.
  const functions = 'lambda, lambda-zip, lambda-edge, vercel, netlify, azure, gcf';
  fails(['app', '-t', 'express', '--deploy', 'supabase-edge'], `--deploy supabase-edge supports the hono template, not express. The express template supports --deploy ${functions}`);
  fails(['app', '-t', 'hono', '--deploy', 'fastly'], `--deploy fastly supports the fetch and fullstack templates, not hono. The hono template supports --deploy ${functions}, workers, vercel-edge, netlify-edge, deno-deploy, supabase-edge`);
  fails(['app', '-t', 'express', '--deploy', 'workers'], `--deploy workers supports the hono, fetch and fullstack templates, not express. The express template supports --deploy ${functions}`);
  fails(['app', '-t', 'fetch', '--deploy', 'supabase-edge'], `--deploy supabase-edge supports the hono template, not fetch. The fetch template supports --deploy ${functions}, workers, vercel-edge, netlify-edge, deno-deploy, fastly, wasi, wasi-http, spin`);
  // Issue #168: the fullstack template writes no function-platform files, so it refuses them.
  for (const target of functions.split(', '))
    fails(['app', '-t', 'fullstack', '--deploy', target], `--deploy ${target} supports the express, hono, fastify, std-http and fetch templates, not fullstack. `
      + 'The fullstack template supports --deploy workers, vercel-edge, netlify-edge, deno-deploy, fastly, wasi-http, spin');
  // The issue's command: the first refused target is named.
  fails(['app', '--template', 'fullstack', '--deploy', 'workers', '--deploy', 'lambda', '--deploy', 'vercel', '--deploy', 'azure'],
    '--deploy lambda supports the express, hono, fastify, std-http and fetch templates, not fullstack. The fullstack template supports --deploy workers, vercel-edge, netlify-edge, deno-deploy, fastly, wasi-http, spin');
  fails(['app', '-t', 'hono', '--deploy', 'vercel', '--deploy', 'vercel-edge'], '--deploy vercel-edge and --deploy vercel both configure the same platform; choose one');
  fails(['app', '-t', 'hono', '--deploy', 'netlify-edge', '--deploy', 'netlify'], '--deploy netlify-edge and --deploy netlify both configure the same platform; choose one');
});

test('the init usage, as reviewed', () => {
  const file = join(goldenRoot, 'usage.txt');
  if (update) writeFileSync(file, initUsage + '\n');
  assert.equal(initUsage + '\n', readFileSync(file, 'utf8'), 'test/fixtures/init-golden/usage.txt (LASM_UPDATE_INIT_GOLDEN=1 regenerates it)');
});

// Which templates each --deploy target accepts (the docs' tables list the same).
test('every deploy target accepts exactly its templates', () => {
  // Not fullstack on the function platforms (issue #168).
  const server = ['express', 'hono', 'fastify', 'std-http', 'fetch'];
  const accepted = {
    lambda: server, 'lambda-zip': server, 'lambda-edge': server, vercel: server, netlify: server, azure: server, gcf: server,
    workers: ['hono', 'fetch', 'fullstack'], 'vercel-edge': ['hono', 'fetch', 'fullstack'], 'netlify-edge': ['hono', 'fetch', 'fullstack'],
    'deno-deploy': ['hono', 'fetch', 'fullstack'], 'supabase-edge': ['hono'], fastly: ['fetch', 'fullstack'], wasi: ['fetch', 'plain'],
    'wasi-http': ['fetch', 'fullstack'], spin: ['fetch', 'fullstack'],
  };
  assert.deepEqual(Object.keys(accepted), Object.keys(deployTargets));
  for (const [target, names] of Object.entries(accepted)) for (const template of Object.keys(templates)) {
    const parse = () => parseInitArguments(['app', '-t', template, '--deploy', target]);
    if (names.includes(template)) assert.deepEqual(parse().deploy, [target], `${target} ${template}`);
    else assert.throws(parse, /^Error: --deploy /, `${target} ${template}`);
  }
});

test('the init usage lists every template and deploy target with its summary', () => {
  assert.ok(initUsage.startsWith(`Usage: lasm init <directory> [--template plain|express|hono|fastify|std-http|web|fetch|fullstack] [--deploy TARGET]…\n\nCreates a Lean project`));
  for (const [name, target] of Object.entries(deployTargets)) assert.ok(initUsage.includes(`\n  ${name.padEnd(12)} ${target.summary}\n`), name);
  for (const [name, template] of Object.entries(templates)) assert.ok(initUsage.includes(`\n  ${name.padEnd(9)} ${template.summary}`), name);
  assert.ok(initUsage.endsWith('\n\nExample: npx @lasm/cli init my-app --template hono'));
});

test('project names', () => {
  for (const [directory, name] of [['/tmp/My App', 'my-app'], ['/tmp/λ', 'lean-app'], ['/tmp/.hidden-', 'hidden'], ['/tmp/__x__', 'x__'],
    ['/tmp/a.b_c-d', 'a.b_c-d'], ['/tmp/A  B', 'a-b'], ['/tmp/x--', 'x'], ['/tmp/---', 'lean-app'], ['/tmp/-.-a', 'a']])
    assert.equal(packageName(directory), name, directory);
  for (const [input, name] of [['my-app', 'my_app'], ['1st', 'app_1st'], ['__a__b__', 'a__b'], ['a..b', 'a_b'], ['---', 'app'], ['_9', 'app_9'], ['Ab', 'Ab']])
    assert.equal(lakeName(input), name, input);
  for (const [input, name] of [['@scope/My App', 'my-app'], ['9lives', 'lasm-9lives'], ['--x--', 'x'], ['', 'lasm-app'], ['@a/', 'lasm-app'],
    ['a'.repeat(60), 'a'.repeat(54)], ['a  b..c', 'a-b-c'], ['1' + 'a'.repeat(60), ('lasm-1' + 'a'.repeat(60)).slice(0, 54)], ['x@y/z', 'x-y-z']])
    assert.equal(supabaseFunctionNameOf(input), name, input);
});

// ∀ s, let n := packageName s; n ≠ "" ∧ n matches [a-z0-9._-]* ∧ ¬ n.startsWith [._-] ∧ ¬ n.endsWith "-"
// ∀ s, lakeName s matches [A-Za-z][A-Za-z0-9_]* ; ∀ s, supabaseFunctionNameOf s matches [a-z][a-z0-9-]{0,53}
test('generated names are always valid npm, Lake and Supabase names', () => {
  const alphabet = ['a', 'Z', '0', '9', '.', '_', '-', ' ', 'λ', '@', '/', '!'];
  forAll(r => r.string(alphabet, 0, 70), text => {
    const npm = packageName(join('/tmp', text.replaceAll('/', '') || 'x'));
    assert.match(npm, /^[a-z0-9][a-z0-9._-]*$|^[a-z0-9]$/);
    assert.ok(!npm.endsWith('-'), npm);
    assert.match(lakeName(text), /^[A-Za-z][A-Za-z0-9_]*$/);
    assert.ok(!lakeName(text).endsWith('_') || lakeName(text) === 'app', lakeName(text));
    const fn = supabaseFunctionNameOf(text);
    assert.match(fn, /^[a-z][a-z0-9-]*$/);
    assert.ok(fn.length <= 54, fn);
  }, { runs: 400 });
});

test('next steps for each template and runtime', () => {
  assert.equal(nextSteps('web'), '  npm install\n  npm run dev          # then open http://127.0.0.1:5173');
  assert.equal(nextSteps('fullstack', 'bun'), '  npm install\n  npm run dev          # then open http://127.0.0.1:3000');
  assert.equal(nextSteps('hono', 'bun'), '  bun install\n  bun run dev:bun      # then: curl http://localhost:3000/hello/Ada');
  assert.equal(nextSteps('plain', 'bun'), '  bun install\n  bun run dev:bun');
  assert.equal(nextSteps('fetch', 'deno'), '  deno install\n  deno task dev        # then: curl http://localhost:8000/hello/Ada');
  assert.equal(nextSteps('plain', 'deno'), '  deno install\n  deno task dev');
  // Templates that need Node use npm on every runtime.
  for (const runtime of ['node', 'bun', 'deno']) assert.equal(nextSteps('express', runtime), '  npm install\n  npm run dev          # then: curl http://localhost:3000/hello/Ada');
  assert.equal(nextSteps('plain'), '  npm install\n  npm run dev');
  assert.equal(nextSteps('std-http'), '  npm install\n  npm run dev          # then: curl http://localhost:3000/hello/Ada');
});

test('runInit prints what it created and the next commands', async t => {
  const cwd = process.cwd(), editor = process.env.LASM_EDITOR;
  process.env.LASM_EDITOR = '0';
  const output = [], log = console.log;
  console.log = (...args) => output.push(args.join(' '));
  t.after(() => { process.chdir(cwd); console.log = log; if (editor === undefined) delete process.env.LASM_EDITOR; else process.env.LASM_EDITOR = editor; });
  const root = join(scratch, 'run-init');
  mkdirSync(root);
  process.chdir(root);
  assert.equal(await runInit({ directory: 'my-app', template: 'plain', deploy: [] }), 0);
  // The editor is set up only from what is already cached (no download during lasm init).
  assert.deepEqual(globalThis.initEditorCalls, [[join(process.cwd(), 'my-app', 'Main.lean'), { cachedOnly: true }]]);
  assert.equal(output[0], `Created my-app (template plain):\n  ${initProjectFiles('plain').join(', ')}\n\nNext:\n  cd my-app\n${nextSteps('plain')}`);
  assert.equal(await runInit({ directory: 'Dir With Space', template: 'hono', deploy: [] }), 0);
  assert.match(output[1], /^Created dir-with-space in Dir With Space \(template hono\):\n/);
  assert.match(output[1], /\n\nNext:\n  cd "Dir With Space"\n  npm install\n/);
  mkdirSync('here');
  process.chdir(join(root, 'here'));
  assert.equal(await runInit({ directory: '.', template: 'plain', deploy: [] }), 0);
  assert.match(output[2], /^Created here in \. \(template plain\):\n/);
  assert.match(output[2], /\n\nNext:\n  npm install\n  npm run dev$/);
  process.chdir(join(root, 'here'));
  assert.equal(await runInit({ directory: join(root, 'outside'), template: 'plain', deploy: [] }), 0);
  assert.match(output[3], new RegExp(`^Created outside in ${join(root, 'outside').replace(/[.*+?^${}()|[\]\\]/g, '\\$&')} \\(template plain\\)`));
  assert.match(output[3], new RegExp(`\n  cd ${join(root, 'outside').replace(/[.*+?^${}()|[\]\\]/g, '\\$&')}\n`));
});

// The file order initProject reports for a template without deploy targets.
function initProjectFiles(template) {
  const directory = mkdtempSync(join(scratch, 'order-'));
  rmSync(directory, { recursive: true });
  return initProject({ directory, template }).files;
}
