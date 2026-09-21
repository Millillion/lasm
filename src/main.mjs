import { existsSync, readFileSync, writeFileSync, mkdirSync, readdirSync, realpathSync } from 'node:fs';
import { resolve, dirname, join, relative, sep } from 'node:path';
import { pathToFileURL } from 'node:url';
import { createHash } from 'node:crypto';
import { build } from './build.mjs';
import { findLakeProject } from './lake.mjs';
import { root, targetName, resolveLean, run } from './toolchain.mjs';
import { executableName } from './platform.mjs';
import { engineName } from './js-engine.mjs';

function fingerprint(directory, source, project) {
  const hash = createHash('sha256');
  const visited = new Set();
  function file(path) { hash.update(path).update(readFileSync(path)); }
  function walk(path, tool = false) {
    if (!existsSync(path)) return;
    path = realpathSync(path);
    if (visited.has(path)) return;
    visited.add(path);
    for (const entry of readdirSync(path, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
      if (['.git', '.lake', '.work', '.cache', 'node_modules', 'dist'].includes(entry.name)) continue;
      const child = join(path, entry.name);
      if (entry.isDirectory()) walk(child, tool);
      else if (entry.isFile() && (tool || entry.name.endsWith('.lean') || ['lakefile.toml', 'lake-manifest.json', 'lean-toolchain'].includes(entry.name))) file(child);
    }
  }
  walk(directory);
  file(source);
  if (project && existsSync(join(project, 'lake-manifest.json'))) {
    const manifest = JSON.parse(readFileSync(join(project, 'lake-manifest.json'), 'utf8'));
    for (const pkg of manifest.packages ?? []) walk(pkg.type === 'path'
      ? resolve(project, pkg.dir) : resolve(project, manifest.packagesDir ?? '.lake/packages', pkg.name));
  }
  for (const name of ['src', 'runtime', 'bin']) walk(join(root, name), true);
  for (const name of ['package.json', 'scripts/build-runtime.mjs', `targets/${targetName}/target.json`]) {
    if (existsSync(join(root, name))) file(join(root, name));
  }
  hash.update(process.env.LEAN ?? '').update(process.env.LASM_TARGET_DIR ?? '').update(process.env.WASM_OPT ?? '');
  return hash.digest('hex');
}

/** Compile an ordinary Lean executable; all bindings and configuration are generated. */
export async function buildMain(file, { output, rebuild = false, verbose = false } = {}) {
  const source = resolve(file);
  if (!source.endsWith('.lean') || !existsSync(source)) throw new Error(`Expected an existing Lean source file: ${source}`);
  const project = findLakeProject(source, {});
  const directory = project ?? dirname(source);
  const key = createHash('sha256').update(source).digest('hex').slice(0, 16);
  const cache = join(directory, '.lake/lasm/mains', key);
  mkdirSync(cache, { recursive: true });
  output = resolve(output ?? join(cache, 'dist'));
  const stampFile = join(output, '.main-cache.json');
  let signature = fingerprint(directory, source, project);
  if (!rebuild && existsSync(stampFile)) {
    let previous;
    try { previous = JSON.parse(readFileSync(stampFile, 'utf8')); } catch { /* Rebuild a damaged cache. */ }
    if (previous?.signature === signature && Array.isArray(previous.files) && previous.files.every(name => existsSync(join(output, name))))
      return { output, cacheHit: true, signature };
  }
  console.error(`Building ${relative(process.cwd(), source) || source} for ${engineName()}…`);
  const config = join(cache, 'main.json');
  let module = 'LasmUserMain';
  if (project) {
    const { prefix } = resolveLean(directory);
    const setup = JSON.parse(run(join(prefix, 'bin', executableName('lake')),
      ['--no-cache', '--keep-toolchain', '--quiet', 'setup-file', source], { cwd: directory, timeout: 600_000 }));
    module = setup.name;
    // A first Lake setup can create its manifest and resolve local dependency
    // directories. Include those inputs in the first stamp, while still taking
    // it before compilation so concurrent source edits invalidate the output.
    signature = fingerprint(directory, source, project);
  }
  writeFileSync(config, JSON.stringify({ module, main: true, sourceRoot: directory,
    ...(project ? { lake: project } : { lake: false, sourceFile: source }) }, null, 2) + '\n');
  const result = await build(config, output, { log: verbose ? console.error : () => {} });
  writeFileSync(join(output, 'main.mjs'), `#!/usr/bin/env node
import createModule from './index.mjs';
let api;
try {
  api = await createModule({args: process.argv.slice(2), cwd: process.cwd()});
  process.exitCode = await api.runMain();
} catch (error) {
  if (error.name === 'LeanExit') process.exitCode = error.code;
  else { console.error(error.name === 'LeanIOError' ? 'uncaught exception: ' + error.message : error.message); process.exitCode = 1; }
} finally { api?.dispose(); }
`);
  // Stamp the inputs observed before compilation. If a source or runtime file
  // changes during the build, the next invocation must invalidate this output.
  const files = ['main.mjs', 'module.wasm', 'index.mjs', 'runtime.mjs', 'scheduler.mjs', 'node-host.mjs', 'handle-table.mjs', 'node-network.mjs', 'native-tcp.mjs', 'node-process.mjs', 'node-udp.mjs', 'node-system.mjs', 'node-signal.mjs', 'thread-id.cjs', 'native-files.mjs', 'native-file-worker.mjs', 'native-file-worker-pool.mjs', 'native-dns.mjs', 'native-interfaces.mjs', 'native/manifest.json', 'wasi.mjs', 'manifest.json'];
  writeFileSync(stampFile, JSON.stringify({ signature, files }) + '\n');
  return { ...result, cacheHit: false, signature };
}

export async function runMain(file, args = [], options = {}) {
  const { output, signature } = await buildMain(file, options);
  const create = (await import(pathToFileURL(join(output, 'index.mjs')).href + '?' + signature)).default;
  let api;
  try {
    api = await create({ args, cwd: process.cwd() });
    return await api.runMain();
  } catch (error) {
    if (error.name === 'LeanExit') return error.code;
    throw error;
  } finally { api?.dispose(); }
}

export async function mainCommand(arguments_, command = 'run') {
  const options = {};
  const args = [...arguments_];
  while (['--rebuild', '--verbose'].includes(args[0])) options[args.shift().slice(2)] = true;
  const file = args.shift();
  if (!file) throw new Error(`Usage: lasm ${command} [--rebuild] [--verbose] <Main.lean>${command === 'run' ? ' [-- arguments…]' : ' [output-directory]'}`);
  if (command === 'build') {
    if (args.length > 1) throw new Error('Usage: lasm build <Main.lean> [output-directory]');
    const result = await buildMain(file, { ...options, output: args[0] ?? 'dist' });
    console.error(`Run with: node ${relative(process.cwd(), join(result.output, 'main.mjs'))}`);
    return 0;
  }
  if (args[0] === '--') args.shift();
  return runMain(file, args, options);
}
