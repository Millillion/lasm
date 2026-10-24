// `lasm package`: turns a built application (`lasm build` output, default
// dist/) into a function-platform deployment. File operations only: no
// network, no Lean toolchain. Each target adds a small handler shim
// (src/serverless/) that starts the Lean HTTP server inside the platform's
// Node process and forwards requests to it over loopback.
import { chmodSync, copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { dirname, join, relative, resolve, sep } from 'node:path';
import { fileURLToPath } from 'node:url';
import { zip } from './serverless/zip.mjs';

const serverless = fileURLToPath(new URL('./serverless/', import.meta.url));
const MB = 1024 * 1024;

// Platform limits checked by `lasm package` (see docs/deploy/*.md for sources).
export const packageTargets = {
  lambda: { summary: 'AWS Lambda .zip for the nodejs24.x runtime (x86_64 or arm64)', output: 'lambda.zip',
    shim: 'lasm-lambda.mjs', zipped: 50 * MB, unzipped: 250 * MB, zippedHard: false },
  'lambda-edge': { summary: 'Lambda@Edge .zip (CloudFront origin request, x86_64)', output: 'lambda-edge.zip',
    shim: 'lasm-lambda.mjs', zipped: 50 * MB, unzipped: 250 * MB, zippedHard: true },
  vercel: { summary: 'Vercel Function, prebuilt (.vercel/output, Build Output API v3)', output: '.vercel/output',
    shim: 'lasm-vercel.mjs', unzipped: 250 * MB },
  netlify: { summary: 'Netlify Function (v2, netlify/functions/lasm)', output: 'netlify/functions/lasm',
    shim: 'lasm-netlify.mjs', unzipped: 250 * MB },
  azure: { summary: 'Azure Functions app (Node.js v4 programming model)', output: 'azure-functions',
    shim: 'lasm-azure.mjs', dependency: '@azure/functions' },
  gcf: { summary: 'Google Cloud Functions (gen2, Functions Framework) source directory', output: 'gcf',
    shim: 'lasm-gcf.mjs', dependency: '@google-cloud/functions-framework' },
};

export const packageUsage = `Usage: lasm package [dist] --target ${Object.keys(packageTargets).join('|')} [--output PATH]

Packages a built Lasm HTTP server (lasm build output, default dist/) for a
function platform. The server must listen on $HOST and $PORT (every lasm init
server template does). Writes, by target:
${Object.entries(packageTargets).map(([name, t]) => `  ${name.padEnd(12)} ${t.output.padEnd(23)} ${t.summary}`).join('\n')}

lasm build Main.lean --target <target> builds and packages in one step; use
lasm package to package one build for several platforms. Lasm never installs
or starts a platform's own tools: test and deploy with the platform's CLI.

Example: npx lasm build Main.lean && npx lasm package --target lambda`;

export function parsePackageArguments(tokens) {
  const result = { command: 'package' };
  const positional = [];
  for (let i = 0; i < tokens.length; i++) {
    const token = tokens[i];
    if (token === '--help' || token === '-h') return { command: 'package-help' };
    const match = /^--(target|output)(?:=(.*))?$/.exec(token);
    if (match) {
      const value = match[2] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error(`--${match[1]} requires a value\n\n${packageUsage}`);
      if (result[match[1]] !== undefined) throw new Error(`Specify --${match[1]} only once`);
      result[match[1]] = value; continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown lasm package option: ${token}\n\n${packageUsage}`);
    positional.push(token);
  }
  if (positional.length > 1) throw new Error(packageUsage);
  if (!result.target) throw new Error('--target is required\n\n' + packageUsage);
  if (!packageTargets[result.target]) throw new Error(`Unknown target "${result.target}". Choose one of: ${Object.keys(packageTargets).join(', ')}`);
  result.input = positional[0] ?? 'dist';
  return result;
}

const format = bytes => (bytes / MB).toFixed(1) + ' MB';

/** Every file of the build, with the permissions it needs on Linux. */
function applicationFiles(input) {
  const files = [];
  const walk = directory => {
    for (const entry of readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : 1)) {
      const path = join(directory, entry.name);
      if (entry.isDirectory()) { walk(path); continue; }
      const name = relative(input, path).split(sep).join('/');
      // The build-reuse receipt is not needed at run time.
      if (name === '.lasm-application.json') continue;
      if (!entry.isFile()) throw new Error(`${name} is not a regular file; function packages hold regular files only.`);
      // Set explicitly: Windows file systems do not record execute permission.
      const executable = name === 'main.mjs' || /^host\/native\/process\/linux-[^/]+$/.test(name) && !name.endsWith('.json') && !name.endsWith('.txt') && !name.endsWith('.c');
      files.push({ name, source: path, mode: executable ? 0o755 : 0o644 });
    }
  };
  walk(input);
  return files;
}

function checkApplication(input) {
  for (const file of ['main.mjs', 'program.cjs', 'program.wasm', 'build-info.json'])
    if (!existsSync(join(input, file))) throw new Error(`${input} is not a Lasm build (no ${file}). Run lasm build Main.lean first.`);
  let targets = [];
  try { targets = JSON.parse(readFileSync(join(input, 'host/native/manifest.json'), 'utf8')).deployment?.targets ?? []; } catch { /* below */ }
  const linux = targets.filter(target => target.startsWith('linux-'));
  if (!linux.length) throw new Error(`${input} carries no Linux native support (${targets.join(', ') || 'none'}). Rebuild it with the current Lasm.`);
  return targets;
}

// Function platforms run glibc Linux (Amazon Linux 2023, Ubuntu, Debian), so
// packages leave out the musl (Alpine) native pieces that every build carries
// for containers, and record that in the native manifests.
const muslPiece = /^host\/native\/(?:node_modules\/@koromix\/koffi-linux-[^/]+\/musl_[^/]+\/|process\/linux-[^/]+-musl$|signals\/linux-[^/]+-musl\.so$)/;
function withoutMusl(input, files) {
  const kept = files.filter(file => !muslPiece.test(file.name));
  if (kept.length === files.length) return { files, generated: {} };
  const read = name => JSON.parse(readFileSync(join(input, ...name.split('/')), 'utf8'));
  const generated = {};
  const native = read('host/native/manifest.json');
  generated['host/native/manifest.json'] = { ...native, deployment: { ...native.deployment, linuxLibc: ['glibc'] } };
  for (const helper of ['process', 'signals']) {
    const name = `host/native/${helper}/manifest.json`;
    if (!existsSync(join(input, ...name.split('/')))) continue;
    const manifest = read(name);
    generated[name] = { ...manifest, files: Object.fromEntries(Object.entries(manifest.files).filter(([file]) => !/-musl(\.so)?$/.test(file))) };
  }
  return { files: kept.filter(file => !generated[file.name]), generated };
}

function shimFiles(target) {
  return ['lasm-server.mjs', packageTargets[target].shim].map(name => ({ name, source: join(serverless, name), mode: 0o644 }));
}

function writeTree(output, files, extra = {}) {
  rmSync(output, { recursive: true, force: true });
  for (const file of files) {
    const path = join(output, ...file.name.split('/'));
    mkdirSync(dirname(path), { recursive: true });
    if (file.data) writeFileSync(path, file.data); else copyFileSync(file.source, path);
    chmodSync(path, file.mode);
  }
  for (const [name, text] of Object.entries(extra)) {
    const path = join(output, ...name.split('/'));
    mkdirSync(dirname(path), { recursive: true });
    writeFileSync(path, typeof text === 'string' ? text : JSON.stringify(text, null, 2) + '\n');
  }
}

const sizeOf = files => files.reduce((total, file) => total + (file.data?.length ?? statSync(file.source).size), 0);

function dependencyPackage(input, name) {
  const path = join(input, 'node_modules', ...name.split('/'), 'package.json');
  if (!existsSync(path)) throw new Error(`This target needs the npm package ${name} in the build. Run npm install ${name} next to package.json, then lasm build again.`);
  return JSON.parse(readFileSync(path, 'utf8')).version;
}

/** Packages `input` for `target`; returns a summary for the CLI and tests. */
export function packageApplication({ input = 'dist', target, output }) {
  const spec = packageTargets[target];
  if (!spec) throw new Error(`Unknown target "${target}"`);
  input = resolve(input);
  const nativeTargets = checkApplication(input);
  output = resolve(output ?? spec.output);
  if (output === input || input.startsWith(output + sep)) throw new Error('The output must not contain the build directory');
  const shims = shimFiles(target);
  const glibc = withoutMusl(input, applicationFiles(input));
  // Generated files (the glibc-only manifests) are written from memory.
  const generatedFiles = Object.entries(glibc.generated).map(([name, value]) => ({ name, data: Buffer.from(JSON.stringify(value, null, 2) + '\n'), mode: 0o644 }));
  // A shim from an earlier package step copied into the build is replaced.
  const files = [...glibc.files.filter(file => !shims.some(shim => shim.name === file.name)), ...generatedFiles, ...shims]
    .sort((a, b) => a.name < b.name ? -1 : a.name > b.name ? 1 : 0);
  const unzipped = sizeOf(files);
  if (spec.unzipped && unzipped > spec.unzipped)
    throw new Error(`The package is ${format(unzipped)} unpacked; ${target} allows ${format(spec.unzipped)}.`);
  const summary = { target, input, output, files: files.length, unzippedBytes: unzipped, nativeTargets, warnings: [] };
  if (target === 'lambda' || target === 'lambda-edge') {
    const archive = zip(files.map(file => ({ name: file.name, data: file.data ?? readFileSync(file.source), mode: file.mode })));
    summary.zippedBytes = archive.length;
    if (archive.length > spec.zipped) {
      if (spec.zippedHard) throw new Error(`The package is ${format(archive.length)} zipped; ${target} allows ${format(spec.zipped)}.`);
      summary.warnings.push(`The zip is ${format(archive.length)}: above ${format(spec.zipped)}, upload it through Amazon S3 instead of directly.`);
    }
    mkdirSync(dirname(output), { recursive: true });
    writeFileSync(output, archive);
    summary.handler = 'lasm-lambda.handler';
    summary.runtime = 'nodejs24.x';
    if (target === 'lambda-edge' && !nativeTargets.includes('linux-x64')) throw new Error('Lambda@Edge runs on x86_64; this build has no linux-x64 native support.');
    return summary;
  }
  if (target === 'vercel') {
    const func = 'functions/index.func/';
    writeTree(output, files.map(file => ({ ...file, name: func + file.name })), {
      'config.json': { version: 3, routes: [{ handle: 'filesystem' }, { src: '/(.*)', dest: '/index' }] },
      [func + '.vc-config.json']: { runtime: 'nodejs24.x', handler: 'lasm-vercel.mjs', launcherType: 'Nodejs',
        shouldAddHelpers: false, supportsResponseStreaming: true, architecture: 'x86_64' },
    });
    return summary;
  }
  if (target === 'netlify') {
    // A v2 function directory: netlify/functions/lasm/lasm.mjs plus the build.
    writeTree(output, [...files.filter(file => file.name !== 'lasm-netlify.mjs'),
      { name: 'lasm.mjs', source: join(serverless, 'lasm-netlify.mjs'), mode: 0o644 }]);
    summary.function = relative(process.cwd(), join(output, 'lasm.mjs')).split(sep).join('/');
    return summary;
  }
  // Azure Functions and Google Cloud Functions: a source directory whose
  // package.json names the entry point and the platform's npm package.
  const version = dependencyPackage(input, spec.dependency);
  const pkg = JSON.parse(readFileSync(join(input, 'package.json'), 'utf8'));
  const dependencies = {};
  // Every deployed npm package, pinned, so a platform-side `npm install` keeps them.
  for (const entry of readdirSync(join(input, 'node_modules'), { withFileTypes: true })) {
    const names = entry.name.startsWith('@')
      ? readdirSync(join(input, 'node_modules', entry.name)).map(name => `${entry.name}/${name}`) : [entry.name];
    for (const name of names) {
      const manifest = join(input, 'node_modules', ...name.split('/'), 'package.json');
      if (existsSync(manifest) && !name.startsWith('.')) dependencies[name] = JSON.parse(readFileSync(manifest, 'utf8')).version;
    }
  }
  const files2 = files.filter(file => file.name !== 'package.json');
  if (target === 'azure') {
    writeTree(output, files2, {
      'package.json': { ...pkg, name: 'lasm-azure-app', main: 'lasm-azure.mjs', dependencies },
      // Routes are the server's own: no /api prefix.
      'host.json': { version: '2.0', extensions: { http: { routePrefix: '' } },
        extensionBundle: { id: 'Microsoft.Azure.Functions.ExtensionBundle', version: '[4.*, 5.0.0)' } },
      '.funcignore': '.git*\n.vscode\nlocal.settings.json\n',
      'local.settings.json': { IsEncrypted: false, Values: { FUNCTIONS_WORKER_RUNTIME: 'node', AzureWebJobsStorage: '' } },
    });
    summary.dependency = `${spec.dependency}@${version}`;
    return summary;
  }
  writeTree(output, files2, {
    'package.json': { ...pkg, name: 'lasm-gcf-app', main: 'lasm-gcf.mjs', engines: { node: '>=24' }, dependencies,
      scripts: { start: 'functions-framework --target=lasm' } },
    '.gcloudignore': '.gcloudignore\n.git\n',
  });
  summary.dependency = `${spec.dependency}@${version}`;
  return summary;
}

export function runPackage(options) {
  const result = packageApplication(options);
  const where = relative(process.cwd(), result.output) || '.';
  const size = result.zippedBytes ? `${format(result.zippedBytes)} zipped, ${format(result.unzippedBytes)} unpacked`
    : `${format(result.unzippedBytes)}`;
  const next = {
    lambda: `Runtime nodejs24.x, handler ${result.handler}, memory 512 MB or more, architecture x86_64 or arm64 (both included: ${result.nativeTargets.filter(t => t.startsWith('linux')).join(', ')}).\n  aws lambda create-function --function-name my-app --runtime nodejs24.x --handler ${result.handler} --zip-file fileb://${where} --memory-size 512 --timeout 10 --role ROLE_ARN`,
    'lambda-edge': `Create it in us-east-1 with runtime nodejs24.x, handler ${result.handler}, architecture x86_64, then attach a published version to a CloudFront origin-request trigger (with "Include body" for POST bodies).`,
    vercel: 'Deploy the prebuilt output: npx vercel deploy --prebuilt',
    netlify: 'Deploy with netlify deploy (netlify.toml: [functions] directory = "netlify/functions").',
    azure: `Run locally with func start in ${where}; publish with func azure functionapp publish APP_NAME.`,
    gcf: `Run locally with npx @google-cloud/functions-framework --target=lasm in ${where}; deploy with gcloud functions deploy my-app --gen2 --runtime nodejs24 --trigger-http --entry-point lasm --source ${where}.`,
  }[result.target];
  console.log(`Packaged ${relative(process.cwd(), result.input) || '.'} for ${result.target}: ${where} (${result.files} files, ${size}).\n${next}`);
  for (const warning of result.warnings) console.warn('Warning: ' + warning);
  return 0;
}
