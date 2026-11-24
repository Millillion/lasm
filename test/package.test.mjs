// The function-platform packaging of `lasm build --target <platform>`
// in-process (src/package.mjs): the files a package holds and their
// permissions, each target's layout and summary, and the CLI report. The shims' behaviour is tested by test/serverless.test.mjs.
import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdirSync, mkdtempSync, readFileSync, rmSync, statSync, symlinkSync, writeFileSync, existsSync, readdirSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative } from 'node:path';
import { inflateRawSync } from 'node:zlib';
import { buildProfile, packageApplication, packageFunction, packageTargets } from '../src/package.mjs';
import { standInApplication } from '../scripts/serverless/stand-in-app.mjs';

const pack = packageApplication;
const runPack = packageFunction;

/** Entries of a zip archive: name → { mode, data }. */
function unzip(archive) {
  const end = archive.lastIndexOf(Buffer.from([0x50, 0x4b, 5, 6]));
  const count = archive.readUInt16LE(end + 10);
  let at = archive.readUInt32LE(end + 16);
  const entries = new Map();
  for (let i = 0; i < count; i++) {
    const method = archive.readUInt16LE(at + 10), size = archive.readUInt32LE(at + 20);
    const nameLength = archive.readUInt16LE(at + 28), extra = archive.readUInt16LE(at + 30), comment = archive.readUInt16LE(at + 32);
    const mode = archive.readUInt32LE(at + 38) >>> 16, local = archive.readUInt32LE(at + 42);
    const name = archive.toString('utf8', at + 46, at + 46 + nameLength);
    const start = local + 30 + archive.readUInt16LE(local + 26) + archive.readUInt16LE(local + 28);
    const stored = archive.subarray(start, start + size);
    entries.set(name, { mode, data: method === 8 ? inflateRawSync(stored) : stored });
    at += 46 + nameLength + extra + comment;
  }
  return entries;
}

function setup(t, options) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-package-unit-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const app = standInApplication(join(directory, 'dist'), options);
  const write = (name, text) => { mkdirSync(join(app, name, '..'), { recursive: true }); writeFileSync(join(app, name), text); };
  return { directory, app, write };
}

test('the build profile defaults to release for builds before profiles', t => {
  const { app } = setup(t);
  assert.equal(buildProfile(app), 'release');
  writeFileSync(join(app, 'build-info.json'), JSON.stringify({ profile: 'dev' }));
  assert.equal(buildProfile(app), 'dev');
});

test('a Lambda zip holds the build, the shims, executable entry and Linux helpers, and no build receipt', t => {
  const { directory, app, write } = setup(t);
  write('host/native/process/linux-arm64-gnu', 'ELF');
  write('host/native/process/linux-x64.json', '{}');
  write('host/native/process/linux-x64.txt', 'x');
  write('host/native/process/linux-x64.c', 'x');
  write('host/native/process/darwin-arm64', 'Mach-O');
  write('host/native/process/sub/linux-x64-gnu', 'nested');
  write('lasm-lambda.mjs', 'stale shim from an earlier package step');
  const output = join(directory, 'out', 'lambda.zip');
  const summary = pack({ input: app, target: 'lambda', output });
  const entries = unzip(readFileSync(output));
  const files = [...entries.keys()].filter(name => !name.endsWith('/'));
  assert.deepEqual(files, [...files].sort());
  assert.ok(!entries.has('.lasm-application.json'));
  for (const name of ['main.mjs', 'program.cjs', 'program.wasm', 'build-info.json', 'package.json', 'lasm-function.mjs', 'lasm-node-serve.mjs', 'lasm-lambda.mjs'])
    assert.ok(entries.has(name), name);
  assert.equal(entries.get('lasm-lambda.mjs').data.toString(), readFileSync(new URL('../src/serverless/lasm-lambda.mjs', import.meta.url), 'utf8'));
  // The shims' lasm-node-serve.mjs is lasm:node-serve itself, not the repository's re-export.
  assert.equal(entries.get('lasm-node-serve.mjs').data.toString(), readFileSync(new URL('../src/lasm-modules/node-serve.mjs', import.meta.url), 'utf8'));
  const mode = name => entries.get(name).mode & 0o777;
  assert.equal(mode('main.mjs'), 0o755);
  assert.equal(mode('host/native/process/linux-x64-gnu'), 0o755);
  assert.equal(mode('host/native/process/linux-arm64-gnu'), 0o755);
  for (const name of ['host/native/process/linux-x64.json', 'host/native/process/linux-x64.txt', 'host/native/process/linux-x64.c',
    'host/native/process/darwin-arm64', 'host/native/process/sub/linux-x64-gnu', 'program.cjs', 'lasm-function.mjs', 'lasm-node-serve.mjs', 'host/native/manifest.json'])
    assert.equal(mode(name), 0o644, name);
  assert.equal(summary.target, 'lambda');
  assert.equal(summary.input, app);
  assert.equal(summary.output, output);
  assert.equal(summary.files, files.length);
  assert.equal(summary.unzippedBytes, files.reduce((total, name) => total + entries.get(name).data.length, 0));
  assert.equal(summary.zippedBytes, statSync(output).size);
  assert.deepEqual(summary.nativeTargets, ['linux-x64', 'linux-arm64']);
  assert.equal(summary.profile, 'release');
  assert.deepEqual(summary.warnings, []);
  assert.equal(summary.handler, 'lasm-lambda.handler');
  assert.equal(summary.runtime, 'nodejs24.x');
});

test('Lambda@Edge needs linux-x64 native support', t => {
  const { directory, app, write } = setup(t);
  write('host/native/manifest.json', JSON.stringify({ deployment: { targets: ['linux-arm64'] } }));
  assert.throws(() => pack({ input: app, target: 'lambda-edge', output: join(directory, 'edge.zip') }),
    { message: 'Lambda@Edge runs on x86_64; this build has no linux-x64 native support.' });
  assert.equal(pack({ input: app, target: 'lambda', output: join(directory, 'l.zip') }).handler, 'lasm-lambda.handler');
  write('host/native/manifest.json', JSON.stringify({ deployment: { targets: ['linux-x64'] } }));
  assert.equal(pack({ input: app, target: 'lambda-edge', output: join(directory, 'edge.zip') }).runtime, 'nodejs24.x');
});

test('builds without native support are refused', t => {
  const { directory, app, write } = setup(t);
  write('host/native/manifest.json', '{}');
  assert.throws(() => pack({ input: app, target: 'lambda', output: join(directory, 'x.zip') }),
    { message: `${app} carries no Linux native support (none). Rebuild it with the current Lasm.` });
  rmSync(join(app, 'host/native/manifest.json'));
  assert.throws(() => pack({ input: app, target: 'lambda', output: join(directory, 'x.zip') }), /carries no Linux native support \(none\)/);
  write('host/native/manifest.json', JSON.stringify({ deployment: { targets: ['darwin-arm64', 'win32-x64'] } }));
  assert.throws(() => pack({ input: app, target: 'lambda', output: join(directory, 'x.zip') }),
    { message: `${app} carries no Linux native support (darwin-arm64, win32-x64). Rebuild it with the current Lasm.` });
  assert.throws(() => pack({ input: app, target: 'workers' }), { message: 'Unknown package target "workers"' });
});

test('the output may neither be nor contain the build; a dev build (--allow-dev) is packaged with a warning', t => {
  const { directory, app } = setup(t);
  for (const output of [app, directory]) assert.throws(() => pack({ input: app, target: 'netlify', output }),
    { message: 'The output must not contain the build directory' });
  // A sibling whose name starts like the build is not the build.
  assert.equal(pack({ input: app, target: 'netlify', output: app + '-netlify' }).output, app + '-netlify');
  writeFileSync(join(app, 'build-info.json'), JSON.stringify({ profile: 'dev' }));
  assert.deepEqual(pack({ input: app, target: 'netlify', output: join(directory, 'nf') }).warnings,
    ['This package holds a dev build (--allow-dev): unoptimized and larger. Deploy release builds (lasm build without --dev).']);
});

test('only regular files are packaged', { skip: process.platform === 'win32' }, t => {
  const { directory, app } = setup(t);
  symlinkSync(join(app, 'program.cjs'), join(app, 'link.cjs'));
  assert.throws(() => pack({ input: app, target: 'lambda', output: join(directory, 'x.zip') }),
    { message: 'link.cjs is not a regular file; function packages hold regular files only.' });
});

test('Vercel: the function directory, its routes and configuration; an earlier output is replaced', t => {
  const { directory, app } = setup(t);
  const output = join(directory, '.vercel/output');
  mkdirSync(join(output, 'stale'), { recursive: true });
  const summary = pack({ input: app, target: 'vercel', output });
  assert.ok(!existsSync(join(output, 'stale')));
  assert.deepEqual(JSON.parse(readFileSync(join(output, 'config.json'), 'utf8')),
    { version: 3, routes: [{ handle: 'filesystem' }, { src: '/(.*)', dest: '/index' }] });
  const func = join(output, 'functions/index.func');
  assert.deepEqual(JSON.parse(readFileSync(join(func, '.vc-config.json'), 'utf8')), { runtime: 'nodejs24.x', handler: 'lasm-vercel.mjs',
    launcherType: 'Nodejs', shouldAddHelpers: false, supportsResponseStreaming: true, architecture: 'x86_64' });
  assert.ok(readFileSync(join(func, '.vc-config.json'), 'utf8').endsWith('}\n'));
  assert.equal(readFileSync(join(func, 'main.mjs'), 'utf8'), readFileSync(join(app, 'main.mjs'), 'utf8'));
  assert.ok(existsSync(join(func, 'lasm-vercel.mjs')) && existsSync(join(func, 'lasm-function.mjs')) && existsSync(join(func, 'lasm-node-serve.mjs')));
  assert.ok(!existsSync(join(func, 'lasm-lambda.mjs')));
  if (process.platform !== 'win32') {
    assert.equal(statSync(join(func, 'main.mjs')).mode & 0o777, 0o755);
    assert.equal(statSync(join(func, 'program.cjs')).mode & 0o777, 0o644);
  }
  assert.equal(summary.zippedBytes, undefined);
  assert.equal(summary.handler, undefined);
});

test('Netlify: the shim becomes lasm.mjs and the summary names it relative to the working directory', t => {
  const { directory, app } = setup(t);
  const output = join(directory, 'netlify/functions/lasm');
  const summary = pack({ input: app, target: 'netlify', output });
  assert.equal(readFileSync(join(output, 'lasm.mjs'), 'utf8'), readFileSync(new URL('../src/serverless/lasm-netlify.mjs', import.meta.url), 'utf8'));
  assert.ok(!existsSync(join(output, 'lasm-netlify.mjs')));
  assert.ok(existsSync(join(output, 'lasm-function.mjs')) && existsSync(join(output, 'lasm-node-serve.mjs')));
  assert.equal(summary.function, relative(process.cwd(), join(output, 'lasm.mjs')).split('\\').join('/'));
});

test('Azure and Google Cloud Functions pin every deployed npm package and name the platform package', t => {
  const { directory, app, write } = setup(t, { packages: { '@azure/functions': '', '@google-cloud/functions-framework': '', plain: '' } });
  write('node_modules/.bin/tool', '');
  write('node_modules/@scope/no-manifest/index.js', '');
  write('package.json', JSON.stringify({ private: true, type: 'module', description: 'kept' }));
  const azure = pack({ input: app, target: 'azure-functions', output: join(directory, 'azure') });
  const read = name => JSON.parse(readFileSync(join(directory, name), 'utf8'));
  const dependencies = { '@azure/functions': '1.2.3', '@google-cloud/functions-framework': '1.2.3', plain: '1.2.3' };
  assert.deepEqual(read('azure/package.json'), { private: true, type: 'module', description: 'kept', name: 'lasm-azure-app', main: 'lasm-azure.mjs', dependencies });
  assert.deepEqual(read('azure/host.json'), { version: '2.0', extensions: { http: { routePrefix: '' } },
    extensionBundle: { id: 'Microsoft.Azure.Functions.ExtensionBundle', version: '[4.*, 5.0.0)' } });
  assert.equal(readFileSync(join(directory, 'azure/.funcignore'), 'utf8'), '.git*\n.vscode\nlocal.settings.json\n');
  assert.deepEqual(read('azure/local.settings.json'), { IsEncrypted: false, Values: { FUNCTIONS_WORKER_RUNTIME: 'node', AzureWebJobsStorage: '' } });
  assert.equal(azure.dependency, '@azure/functions@1.2.3');
  assert.ok(existsSync(join(directory, 'azure/lasm-azure.mjs')));
  const gcf = pack({ input: app, target: 'cloud-functions', output: join(directory, 'gcf') });
  assert.deepEqual(read('gcf/package.json'), { private: true, type: 'module', description: 'kept', name: 'lasm-gcf-app', main: 'lasm-gcf.mjs',
    engines: { node: '>=24' }, dependencies, scripts: { start: 'functions-framework --target=lasm' } });
  assert.equal(readFileSync(join(directory, 'gcf/.gcloudignore'), 'utf8'), '.gcloudignore\n.git\n');
  assert.equal(gcf.dependency, '@google-cloud/functions-framework@1.2.3');
  assert.deepEqual(readdirSync(join(directory, 'gcf/node_modules')).sort(), ['.bin', '@azure', '@google-cloud', '@scope', 'plain']);
  rmSync(join(app, 'node_modules/@google-cloud'), { recursive: true });
  assert.throws(() => pack({ input: app, target: 'cloud-functions', output: join(directory, 'gcf') }), {
    message: 'This target needs the npm package @google-cloud/functions-framework: add it to package.json\'s dependencies (npm install @google-cloud/functions-framework), then lasm build again.' });
});

test('packageFunction reports where the package is, its size and the next step', async t => {
  const { directory, app } = setup(t);
  const logged = [], warned = [];
  const { log, warn } = console;
  const cwd = process.cwd();
  console.log = text => logged.push(text); console.warn = text => warned.push(text);
  try {
    process.chdir(directory);
    assert.equal(await runPack({ input: 'dist', target: 'lambda', output: 'fn.zip' }), 0);
    writeFileSync(join(app, 'build-info.json'), JSON.stringify({ profile: 'dev' }));
    assert.equal(await runPack({ input: 'dist', target: 'vercel', output: '.vercel/output' }), 0);
    await runPack({ input: 'dist', target: 'netlify', output: 'nf' });
  } finally { process.chdir(cwd); console.log = log; console.warn = warn; }
  const size = statSync(join(directory, 'fn.zip')).size;
  assert.match(logged[0], new RegExp(`^Packaged dist for lambda: fn\\.zip \\(\\d+ files, ${(size / 1048576).toFixed(1).replace('.', '\\.')} MB zipped, \\d+\\.\\d MB unpacked\\)\\.\\n`
    + 'Runtime nodejs24\\.x, handler lasm-lambda\\.handler, memory 512 MB or more, architecture x86_64 or arm64 \\(both included: linux-x64, linux-arm64\\)\\.\\n'
    + '  aws lambda create-function --function-name my-app --runtime nodejs24\\.x --handler lasm-lambda\\.handler --zip-file fileb://fn\\.zip '));
  assert.match(logged[1], /^Packaged dist for vercel: \.vercel\/output \(\d+ files, \d+\.\d MB\)\.\nDeploy the prebuilt output: npx vercel deploy --prebuilt$/);
  assert.match(logged[2], /^Packaged dist for netlify: nf .*\nDeploy with netlify deploy/);
  assert.deepEqual(warned, ['Warning: This package holds a dev build (--allow-dev): unoptimized and larger. Deploy release builds (lasm build without --dev).',
    'Warning: This package holds a dev build (--allow-dev): unoptimized and larger. Deploy release builds (lasm build without --dev).']);
});

test('the targets: their outputs, shims, limits and platform packages', () => {
  const MB = 1024 * 1024;
  assert.deepEqual(Object.fromEntries(Object.entries(packageTargets).map(([name, spec]) => [name, { ...spec, summary: undefined }])), {
    lambda: { summary: undefined, output: 'lambda.zip', shim: 'lasm-lambda.mjs', zipped: 50 * MB, unzipped: 250 * MB, zippedHard: false },
    'lambda-edge': { summary: undefined, output: 'lambda-edge.zip', shim: 'lasm-lambda.mjs', zipped: 50 * MB, unzipped: 250 * MB, zippedHard: true },
    vercel: { summary: undefined, output: '.vercel/output', shim: 'lasm-vercel.mjs', unzipped: 250 * MB },
    netlify: { summary: undefined, output: 'netlify/functions/lasm', shim: 'lasm-netlify.mjs', unzipped: 250 * MB },
    'azure-functions': { summary: undefined, output: 'azure-functions', shim: 'lasm-azure.mjs', dependency: '@azure/functions' },
    'cloud-functions': { summary: undefined, output: 'cloud-functions', shim: 'lasm-gcf.mjs', dependency: '@google-cloud/functions-framework' },
  });
  for (const [name, words] of [['lambda', /AWS Lambda.*nodejs24\.x/], ['lambda-edge', /Lambda@Edge.*CloudFront/], ['vercel', /Vercel.*Build Output API v3/],
    ['netlify', /Netlify Function \(v2/], ['azure-functions', /Azure Functions.*v4/], ['cloud-functions', /Google Cloud Functions \(gen2/]])
    assert.match(packageTargets[name].summary, words, name);
});

test('size limits: an oversized unpacked package or a hard zip limit is refused, a soft zip limit warns', t => {
  const { directory, app } = setup(t);
  const saved = structuredClone(packageTargets);
  t.after(() => { for (const [name, spec] of Object.entries(saved)) packageTargets[name] = spec; });
  const size = pack({ input: app, target: 'lambda', output: join(directory, 'probe.zip') });
  const vercel = pack({ input: app, target: 'vercel', output: join(directory, 'v') }).unzippedBytes;
  packageTargets.vercel.unzipped = vercel;
  assert.equal(pack({ input: app, target: 'vercel', output: join(directory, 'v') }).unzippedBytes, vercel, 'at the limit');
  packageTargets.vercel.unzipped = vercel - 1;
  assert.throws(() => pack({ input: app, target: 'vercel', output: join(directory, 'v') }),
    { message: `The package is ${(vercel / 1048576).toFixed(1)} MB unpacked; vercel allows ${((vercel - 1) / 1048576).toFixed(1)} MB.` });
  packageTargets.lambda.zipped = size.zippedBytes;
  assert.deepEqual(pack({ input: app, target: 'lambda', output: join(directory, 'l.zip') }).warnings, []);
  packageTargets.lambda.zipped = size.zippedBytes - 1;
  assert.deepEqual(pack({ input: app, target: 'lambda', output: join(directory, 'l.zip') }).warnings,
    [`The zip is ${(size.zippedBytes / 1048576).toFixed(1)} MB: above ${((size.zippedBytes - 1) / 1048576).toFixed(1)} MB, upload it through Amazon S3 instead of directly.`]);
  packageTargets['lambda-edge'].zipped = 10;
  assert.throws(() => pack({ input: app, target: 'lambda-edge', output: join(directory, 'e.zip') }),
    { message: `The package is ${(size.zippedBytes / 1048576).toFixed(1)} MB zipped; lambda-edge allows 0.0 MB.` });
});

test('glibc-only manifests are written from memory into directory packages; a build without one helper manifest is fine', t => {
  const { directory, app, write } = setup(t);
  write('host/native/manifest.json', JSON.stringify({ deployment: { target: 'node', targets: ['linux-x64'], linuxLibc: ['glibc', 'musl'] } }));
  write('host/native/process/linux-x64-musl', 'musl');
  write('host/native/process/linux-dir/inner', 'not a helper');
  rmSync(join(app, 'host/native/process/manifest.json'));
  write('host/native/signals/manifest.json', JSON.stringify({ protocol: 1, files: { 'linux-x64-gnu.so': {}, 'linux-x64-musl.so': {} } }));
  write('node_modules/.hidden/package.json', JSON.stringify({ name: '.hidden', version: '9' }));
  pack({ input: app, target: 'vercel', output: join(directory, '.vercel/output') });
  const func = join(directory, '.vercel/output/functions/index.func');
  assert.deepEqual(JSON.parse(readFileSync(join(func, 'host/native/manifest.json'), 'utf8')).deployment.linuxLibc, ['glibc']);
  assert.deepEqual(Object.keys(JSON.parse(readFileSync(join(func, 'host/native/signals/manifest.json'), 'utf8')).files), ['linux-x64-gnu.so']);
  assert.equal(existsSync(join(func, 'host/native/process/linux-x64-musl')), false);
  assert.equal(existsSync(join(func, 'host/native/process/manifest.json')), false);
  if (process.platform !== 'win32') assert.equal(statSync(join(func, 'host/native/process/linux-dir/inner')).mode & 0o777, 0o644);
  // Hidden entries of node_modules are not deployed packages.
  write('node_modules/@azure/functions/package.json', JSON.stringify({ version: '4.0.0' }));
  pack({ input: app, target: 'azure-functions', output: join(directory, 'az') });
  assert.deepEqual(JSON.parse(readFileSync(join(directory, 'az/package.json'), 'utf8')).dependencies, { '@azure/functions': '4.0.0' });
});

test('the report of every target, from inside the build, with only the Linux targets named', async t => {
  const { directory, app, write } = setup(t, { packages: { '@azure/functions': '', '@google-cloud/functions-framework': '' } });
  write('host/native/manifest.json', JSON.stringify({ deployment: { targets: ['linux-x64', 'darwin-arm64'] } }));
  const logged = [];
  const { log } = console;
  const cwd = process.cwd();
  console.log = text => logged.push(text);
  try {
    process.chdir(app);
    await runPack({ input: '.', target: 'lambda', output: '../a.zip' });
    await runPack({ input: '.', target: 'lambda-edge', output: '../e.zip' });
    await runPack({ input: '.', target: 'azure-functions', output: '../az' });
    await runPack({ input: '.', target: 'cloud-functions', output: '../gcf' });
    process.chdir(directory);
    assert.equal(pack({ input: 'dist', target: 'netlify', output: 'nf' }).input, app, 'relative to the working directory');
  } finally { process.chdir(cwd); console.log = log; }
  assert.match(logged[0], /^Packaged \. for lambda: \.\.\/a\.zip \(/);
  assert.match(logged[0], /\(both included: linux-x64\)\./);
  assert.match(logged[1], /\nCreate it in us-east-1 with runtime nodejs24\.x, handler lasm-lambda\.handler, architecture x86_64, then attach a published version to a CloudFront origin-request trigger \(with "Include body" for POST bodies\)\.$/);
  assert.match(logged[2], /\nRun locally with func start in \.\.\/az; publish with func azure functionapp publish APP_NAME\.$/);
  assert.match(logged[3], /\nRun locally with npx @google-cloud\/functions-framework --target=lasm in \.\.\/gcf; deploy with gcloud functions deploy my-app --gen2 --runtime nodejs24 --trigger-http --entry-point lasm --source \.\.\/gcf\.$/);
});
