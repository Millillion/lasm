import { existsSync, readFileSync, writeFileSync, mkdirSync, realpathSync, readdirSync, statSync, renameSync, rmSync } from 'node:fs';
import { dirname, join, resolve, relative, delimiter, toNamespacedPath } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { insideDirectory } from './platform.mjs';

// Lean's Windows source inventory expands DOS 8.3 aliases. Node's JS realpath
// can retain them, so use the OS path identity before comparing source roots.
export const canonicalApplicationPath = file => process.platform === 'win32'
  ? realpathSync.native(file) : realpathSync(file);

/** A nested toolchain pin starts an independent project, even inside a checkout. */
export function findApplicationProject(source) {
  let directory = dirname(resolve(source));
  for (;;) {
    if (['lakefile.lean', 'lakefile.toml'].some(name => existsSync(join(directory, name)))) return directory;
    if (existsSync(join(directory, 'lean-toolchain'))) return undefined;
    const parent = dirname(directory);
    if (parent === directory) return undefined;
    directory = parent;
  }
}

export function nativeLeanEnvironment(lean, inherited = process.env) {
  const env = { ...inherited };
  const prefix = lean.executionPrefix ?? lean.prefix;
  const windows = process.platform === 'win32';
  const priorPath = env.PATH ?? (windows ? env[Object.keys(env).find(key => key.toUpperCase() === 'PATH')] : undefined);
  for (const key of Object.keys(env)) {
    const name = windows ? key.toUpperCase() : key;
    if (/^(?:LEAN_|LAKE_|ELAN_)/.test(name) || windows && name === 'PATH') delete env[key];
  }
  Object.assign(env, { LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192',
    PATH: [join(prefix, 'bin'), dirname(process.execPath), priorPath].filter(Boolean).join(delimiter) });
  // Lean's module reader uses CreateFile without long-path manifest opt-in.
  // An explicit namespace keeps deep managed caches usable without changing
  // Windows registry policy or requiring a shorter user-selected directory.
  if (process.platform === 'win32') Object.assign(env, {
    LEAN_SYSROOT: toNamespacedPath(prefix),
    LEAN_PATH: toNamespacedPath(join(prefix, 'lib/lean')),
  });
  if (lean.cCompiler) Object.assign(env, cCompilerEnvironment(lean, env));
  return env;
}

/** Lake's default `cc` is Lean's clang (bin/cc of the C tier, first on PATH).
 * Lean ships no C library headers. On Linux the C tier's glibc/Linux headers
 * are searched before the system's (C_INCLUDE_PATH); on Windows its MinGW-w64
 * headers are in <prefix>/x86_64-w64-mingw32, which Lean's clang uses as its
 * sysroot by itself; macOS uses the Xcode Command Line Tools SDK, which may
 * not be redistributed. */
export function cCompilerEnvironment(lean, env = process.env, { platform = process.platform, sdkPath = macosSdkPath } = {}) {
  const prefix = lean.executionPrefix ?? lean.prefix;
  const key = 'C_INCLUDE_PATH';
  const result = {};
  if (platform === 'linux') {
    const include = join(prefix, 'lib', 'lasm-libc', 'include');
    result[key] = [...(lean.cCompiler.multiarch ? [join(include, lean.cCompiler.multiarch)] : []), include, env[key]]
      .filter(Boolean).join(delimiter);
  } else if (platform === 'darwin' && !env.SDKROOT) {
    const sdk = sdkPath();
    if (!sdk) throw new Error(macosSdkMissing);
    result.SDKROOT = sdk;
  }
  return result;
}

export const macosSdkMissing = 'This project has packages with C code. On macOS, compiling it needs the C library headers and libSystem of the macOS SDK, '
  + 'which Lasm cannot redistribute: install the Xcode Command Line Tools (xcode-select --install) or set SDKROOT to an SDK. '
  + 'No C compiler other than Lean\'s own is used.';

/** SDKROOT if it names an SDK, else the Command Line Tools SDK. */
export function macosSdk(env = process.env) {
  if (env.SDKROOT && existsSync(join(env.SDKROOT, 'usr', 'include', 'stdio.h'))) return env.SDKROOT;
  return macosSdkPath();
}

export function macosSdkPath() {
  // Without developer tools, xcrun's stub opens an installation prompt.
  const tools = spawnSync('xcode-select', ['-p'], { encoding: 'utf8', timeout: 30_000, stdio: ['ignore', 'pipe', 'ignore'] });
  if (tools.status !== 0 || !tools.stdout.trim() || !existsSync(tools.stdout.trim())) return null;
  const result = spawnSync('xcrun', ['--show-sdk-path'], { encoding: 'utf8', timeout: 60_000, stdio: ['ignore', 'pipe', 'ignore'] });
  const path = result.status === 0 ? result.stdout.trim() : '';
  return path && existsSync(join(path, 'usr', 'include', 'stdio.h')) ? path : null;
}

// `lean --src-deps` searches LEAN_SRC_PATH (the source directory) before the
// toolchain's `src/lean/lake` and `src/lean`, taking the first entry with a
// directory `Root` or a file `Root.lean`. Those checks ask the file system, so on
// case-insensitive macOS and Windows volumes a project's `init.lean` answers for
// `Init` (likewise `std.lean`, `lean/`). Native Lean on Linux skips that entry.
// Apply Linux's exact-case rule on every OS: a local root counts only when its
// directory entry has exactly the imported name; otherwise the search continues.
const exactEntry = (directory, name) => {
  try { return readdirSync(directory).includes(name); } catch { return false; }
};
const isDirectory = file => { try { return statSync(file).isDirectory(); } catch { return false; } };
const hasRoot = (entry, root) => exactEntry(entry, root) && isDirectory(join(entry, root))
  || exactEntry(entry, root + '.lean');
export function exactCaseImportSource(dependency, directory, standard) {
  if (!insideDirectory(directory, dependency)) return dependency;
  const parts = relative(directory, dependency).split(/[\\/]/);
  const root = parts.length === 1 ? parts[0].replace(/\.lean$/, '') : parts[0];
  if (hasRoot(directory, root)) return dependency;
  for (const entry of [join(standard, 'lake'), standard])
    if (hasRoot(entry, root)) return join(entry, ...parts);
  throw new Error(`unknown module prefix '${root}'\n\nNo directory '${root}' or file '${root}.lean' in the search path entries:\n`
    + [directory, join(standard, 'lake'), standard].join('\n'));
}

/** Whether a standalone source imports, directly or through local imports,
 * a module rooted in `roots`. Lean's own header parser resolves the imports;
 * a module absent from the selected prefix fails with its unknown root. */
export function standaloneImportsModules(source, lean, roots) {
  const directory = canonicalApplicationPath(dirname(resolve(source)));
  const standard = canonicalApplicationPath(join(lean.prefix, 'src/lean'));
  const env = { ...nativeLeanEnvironment(lean), LEAN_SRC_PATH: directory };
  const wanted = new Set(roots), seen = new Set();
  const rootOf = file => {
    const parts = relative(standard, file).split(/[\\/]/);
    return (parts[0] === 'lake' ? parts[1] : parts[0]).replace(/\.lean$/, '');
  };
  const pending = [canonicalApplicationPath(resolve(source))];
  while (pending.length) {
    const file = pending.pop();
    if (seen.has(file)) continue;
    seen.add(file);
    const result = spawnSync(lean.lean, ['--src-deps', file], { cwd: directory, env, windowsHide: true, encoding: 'utf8',
      timeout: 120_000, maxBuffer: 16 * 1024 * 1024 });
    if (result.error) throw result.error;
    const output = (result.stdout ?? '') + '\n' + (result.stderr ?? '');
    for (const match of output.matchAll(/unknown module(?: prefix)? '([^'.]+)/g)) if (wanted.has(match[1])) return true;
    // Any other failure may hide an import from the extended tier behind a
    // differently worded diagnostic. Prefer the larger prefix; the ordinary
    // build then reports a genuine source error unchanged.
    if (result.status !== 0) return true;
    for (const line of result.stdout.split(/\r?\n/).filter(Boolean)) {
      let dependency;
      try { dependency = canonicalApplicationPath(exactCaseImportSource(resolve(directory, line), directory, standard)); }
      catch { continue; }
      if (insideDirectory(standard, dependency)) { if (wanted.has(rootOf(dependency))) return true; }
      else if (insideDirectory(directory, dependency)) pending.push(dependency);
    }
  }
  return false;
}

const readJsonRecord = file => { try { return JSON.parse(readFileSync(file, 'utf8')); } catch { return undefined; } };
/** Records replace their predecessors (same prefix); write failures only cost a later build the query. */
function writeJsonRecord(file, value, prefix) {
  try {
    for (const name of readdirSync(dirname(file))) if (name.startsWith(prefix) && join(dirname(file), name) !== file) rmSync(join(dirname(file), name), { force: true });
    writeFileSync(file + '.' + process.pid + '.partial', JSON.stringify(value));
    renameSync(file + '.' + process.pid + '.partial', file);
  } catch { /* not recorded */ }
}

/** The import header of a Lean source: everything before its first command
 * other than `module`, `prelude` and imports (comments included). Generous on
 * purpose: any change in that region counts. */
export function leanHeader(text) {
  const lines = text.split(/\r?\n/), header = [];
  let depth = 0;
  for (const line of lines) {
    const trimmed = line.trim();
    if (depth === 0 && trimmed && !/^(?:--|\/-)/.test(trimmed)
        && !/^(?:(?:public|private|meta|all)\s+)*(?:import|prelude|module)\b/.test(trimmed) && !/^-\/\s*$/.test(trimmed)) break;
    header.push(line);
    depth += (line.match(/\/-/g) ?? []).length - (line.match(/-\//g) ?? []).length;
    if (depth < 0) depth = 0;
  }
  return header.join('\n');
}

/** Identity of what Lasm's Lake adapter reads: the workspace's and its
 * packages' Lake configuration, manifest and toolchain, the source path and
 * import header, the adapter and the Lean installation. Undefined (no reuse)
 * when a lakefile.lean imports more than Lake: its configuration could then
 * depend on other files. */
export function lakeConfigurationKey(project, source, lean) {
  const hash = createHash('sha256').update(JSON.stringify({ schema: 1, lean: lean.identity ?? lean.commit ?? null, source }))
    .update(readFileSync(new URL('./lake-module.lean', import.meta.url)));
  const directories = [project];
  // The manifest's packages: a missing manifest is the empty one Lake writes on the
  // first build, so that write does not change the key (lasm dev: a second adapter run).
  let manifest = { packagesDir: '.lake/packages', packages: [] };
  try { manifest = JSON.parse(readFileSync(join(project, 'lake-manifest.json'), 'utf8')); }
  catch (error) { if (error.code !== 'ENOENT') return undefined; }
  hash.update('manifest\0').update(JSON.stringify({ packagesDir: manifest.packagesDir ?? '.lake/packages', packages: manifest.packages ?? [] }));
  for (const pkg of manifest.packages ?? []) directories.push(pkg.type === 'path'
    ? resolve(project, pkg.dir) : resolve(project, manifest.packagesDir ?? '.lake/packages', pkg.name));
  for (const directory of directories) {
    for (const name of ['lakefile.toml', 'lakefile.lean', 'lean-toolchain']) {
      let text;
      try { text = readFileSync(join(directory, name), 'utf8'); } catch { continue; }
      if (name === 'lakefile.lean' && [...text.matchAll(/^\s*import\s+(\S+)/gm)].some(match => match[1] !== 'Lake')) return undefined;
      hash.update(`${directory}\0${name}\0`).update(text).update('\0');
    }
  }
  try { hash.update('header\0').update(leanHeader(readFileSync(source, 'utf8'))); } catch { return undefined; }
  return hash.digest('hex');
}

/** The workspace's Lake package directories: the project and its manifest's packages. */
function lakePackageDirectories(project) {
  const directories = [project];
  try {
    const manifest = JSON.parse(readFileSync(join(project, 'lake-manifest.json'), 'utf8'));
    for (const pkg of manifest.packages ?? []) directories.push(pkg.type === 'path'
      ? resolve(project, pkg.dir) : resolve(project, manifest.packagesDir ?? '.lake/packages', pkg.name));
  } catch { /* no manifest */ }
  return directories;
}

/** Identity of the workspace's module graph: the configuration key and the
 * import header of every Lean source in its packages. */
export function workspaceImportsKey(project, configKey) {
  const hash = createHash('sha256').update(configKey);
  const walk = directory => {
    let entries;
    try { entries = readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : a.name > b.name ? 1 : 0); } catch { return; }
    for (const entry of entries) {
      const path = join(directory, entry.name);
      if (entry.isDirectory()) { if (!entry.name.startsWith('.') && entry.name !== 'node_modules') walk(path); }
      else if (entry.isFile() && entry.name.endsWith('.lean')) hash.update(path + '\0').update(leanHeader(readFileSync(path, 'utf8'))).update('\0');
    }
  };
  for (const directory of lakePackageDirectories(project)) walk(directory);
  return hash.digest('hex');
}

export function applicationSources(source, lean, work, { log = console.error, afterImports } = {}) {
  source = resolve(source);
  const project = findApplicationProject(source);
  const env = nativeLeanEnvironment(lean);
  // Lean's and Lake's diagnostics are captured, so that a failure carries them
  // (the CLI and `lasm dev` report them with the error); warnings of a
  // successful step are passed on as they were printed.
  const run = (program, args, cwd) => {
    const started = performance.now();
    try { return runTool(program, args, cwd); } finally {
      // LASM_DEV_TRACE (lasm dev): how long each Lean and Lake step took.
      if (process.env.LASM_DEV_TRACE) process.stderr.write(`[lasm dev] trace ${((performance.now() - started) / 1000).toFixed(2)} s: ${program.split(/[\\/]/).pop()} ${args.filter(arg => !arg.startsWith('-')).join(' ').slice(0, 100)}\n`);
    }
  };
  const runTool = (program, args, cwd) => {
    const result = spawnSync(program, args, { cwd, env, windowsHide: true, encoding: 'utf8', timeout: 900_000, maxBuffer: 32 * 1024 * 1024,
      stdio: ['ignore', 'pipe', 'pipe'] });
    if (result.error) throw Object.assign(result.error, { stdout: result.stdout, stderr: result.stderr });
    if (result.status !== 0) throw Object.assign(new Error(`Command failed: ${program} ${args.join(' ')}\n${result.stderr ?? ''}`),
      { status: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr });
    // Lake's routine notice on a project's first build is not a warning.
    const stderr = (result.stderr ?? '').replace(/^info: [^\n]*: no previous manifest, creating one from scratch\r?\n?/gm, '');
    if (stderr) process.stderr.write(stderr);
    return result.stdout.trim();
  };
  if (project) {
    const query = target => JSON.parse(run(lean.lake,
      ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', target], project));
    const configuredSource = resolve(canonicalApplicationPath(project), relative(project, source));
    // Lake configuration defaults can refer to native initialized constants
    // without interpreter bodies. Match Lake's own initialized native library;
    // importing more Lean modules or loading symbols without the initializer
    // does not establish that state. These are Lake's upstream install paths.
    const platform = lean.platform?.split('-')[0] ?? process.platform;
    const lakePlugin = platform === 'win32' ? join(lean.executionPrefix ?? lean.prefix, 'bin', 'libLake_shared.dll')
      : join(lean.prefix, 'lib/lean', `libLake_shared.${platform === 'darwin' ? 'dylib' : 'so'}`);
    const adapter = (...args) => JSON.parse(run(lean.lean, ['-j1', '-s8192', '--plugin=' + lakePlugin, '--run',
      fileURLToPath(new URL('./lake-module.lean', import.meta.url)), ...args], project).split(/\r?\n/).filter(Boolean).pop());
    // The adapter starts Lake and elaborates its script (about 1.3 s). Its answer
    // is a function of the Lake configuration and the source's imports: an
    // ordinary edit reuses it (lakeConfigurationKey).
    const configKey = lakeConfigurationKey(project, configuredSource, lean);
    const adapterRecord = configKey && join(work, `lake-module-${configKey}.json`);
    let entry = adapterRecord && readJsonRecord(adapterRecord);
    if (!entry) {
      entry = adapter(configuredSource);
      if (adapterRecord) writeJsonRecord(adapterRecord, entry, 'lake-module-');
    }
    // Packages with C code (extern_lib, precompiled modules, extra link objects)
    // need Lean's own C compiler, headers and libraries: the C tier.
    if (Array.isArray(entry?.native) && entry.native.length && lean.distribution === 'tiers' && !lean.cCompiler)
      return { needsCCompiler: true, native: entry.native };
    const configured = typeof entry?.module === 'string' && entry.module.startsWith('/+');
    if (!configured && (!entry || !Array.isArray(entry.imports) || entry.imports.some(name => typeof name !== 'string')))
      throw new Error('Unexpected Lake module identity');
    if (!Array.isArray(entry.metadataRoots) || entry.metadataRoots.some(name => typeof name !== 'string'))
      throw new Error('Unexpected Lake module-data paths');
    const targets = [];
    // Lake's transitive import query, reused while no import header changed.
    const importsRecord = configKey && join(work, `lake-imports-${workspaceImportsKey(project, configKey)}.json`);
    const savedImports = importsRecord && readJsonRecord(importsRecord);
    const transImports = {};
    for (const target of configured ? [entry.module] : entry.imports.map(name => '+' + name)) {
      const modules = savedImports?.[target] ?? query(target + ':transImports');
      transImports[target] = modules;
      if (!Array.isArray(modules) || modules.some(module => typeof module !== 'string'))
        throw new Error('Unexpected Lake transitive module inventory');
      targets.push(...modules.map(name => '+' + name), target);
    }
    if (importsRecord && !savedImports) writeJsonRecord(importsRecord, transImports, 'lake-imports-');
    const sources = [], inputs = [];
    // One Lake query per batch of modules prints one JSON result per line, in order
    // (a separate Lake process per module dominated large dependency graphs).
    const queryAll = facets => run(lean.lake, ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', ...facets], project)
      .split(/\r?\n/).filter(Boolean).map(line => JSON.parse(line));
    const unique = [...new Set(targets)];
    for (let start = 0; start < unique.length; start += 64) {
      const batch = unique.slice(start, start + 64);
      for (const target of batch) log(`Generating Lean C: ${target}`);
      const results = queryAll(batch.flatMap(target => [target + ':c', target + ':lean']));
      if (results.length !== 2 * batch.length) throw new Error('Unexpected Lake query output');
      batch.forEach((target, index) => {
        const [file, lean] = results.slice(2 * index, 2 * index + 2);
        if (typeof file !== 'string' || typeof lean !== 'string') throw new Error(`Lake returned no C file for ${target}`);
        sources.push(resolve(project, file));
        inputs.push({ module: target, source: resolve(project, lean) });
      });
    }
    // The imported modules are built: the caller may let other builds of this project use Lake now.
    afterImports?.();
    if (!configured) {
      const file = join(work, 'script.c');
      // Lake supplies dependency artifacts, package options and build-time
      // plugins for unregistered source files through its ordinary command.
      // Re-elaborate the script to observe configuration/plugin changes; the
      // content-based application cache still reuses an unchanged final link.
      run(lean.lake, ['--no-cache', '--keep-toolchain', 'lean', configuredSource,
        '--', '-j1', '-s8192', '-Dcompiler.postponeCompile=false', '-o', join(work, 'script.olean'), '-c', file], project);
      sources.push(file); inputs.push({ module: relative(project, source).replaceAll('\\', '/'), source, olean: join(work, 'script.olean') });
    }
    // The C code Lake would link into a native executable, built natively first.
    let nativeLink;
    if (Array.isArray(entry.native) && entry.native.length) {
      log('Building native link inputs');
      nativeLink = adapter('--link', configuredSource);
    }
    // .olean files of the workspace modules (for Lasm.JS's binding check).
    const oleanRecord = configKey && join(work, `lake-oleans-${createHash('sha256').update(configKey).update(JSON.stringify(unique)).digest('hex')}.json`);
    const oleans = () => {
      const saved = oleanRecord && readJsonRecord(oleanRecord);
      if (Array.isArray(saved) && saved.every(file => existsSync(file))) return [...saved, ...inputs.filter(input => input.olean).map(input => input.olean)];
      const files = [];
      for (let start = 0; start < unique.length; start += 64) {
        const batch = unique.slice(start, start + 64);
        for (const file of queryAll(batch.map(target => target + ':olean'))) if (typeof file === 'string') files.push(resolve(project, file));
      }
      if (oleanRecord) writeJsonRecord(oleanRecord, files, 'lake-oleans-');
      return [...files, ...inputs.filter(input => input.olean).map(input => input.olean)];
    };
    return { project, sources, inputs, env, metadataRoots: entry.metadataRoots.map(path => resolve(project, path)),
      native: entry.native ?? [], nativeLink, oleans };
  }
  // Standalone source trees use Lean's own import parser. Standard libraries
  // are already in the versioned bundle; local imports are compiled in order.
  const directory = canonicalApplicationPath(dirname(source)), standard = canonicalApplicationPath(join(lean.prefix, 'src/lean'));
  const output = join(work, 'lean'); mkdirSync(output, { recursive: true });
  Object.assign(env, { LEAN_PATH: [toNamespacedPath(output), env.LEAN_PATH].filter(Boolean).join(delimiter), LEAN_SRC_PATH: directory });
  const sources = [], inputs = [], visiting = new Set(), completed = new Map();
  function visit(file) {
    file = canonicalApplicationPath(file);
    // The prefix identity covers the standard library and Lasm's own library (Lasm.JS).
    if (insideDirectory(standard, file)) return lean.identity ?? lean.commit;
    if (!insideDirectory(directory, file)) throw new Error(`Standalone import ${file} is outside the source directory. Declare external dependencies in an ordinary Lake project.`);
    if (completed.has(file)) return completed.get(file);
    if (visiting.has(file)) throw new Error(`Cyclic Lean module imports: ${file}`);
    visiting.add(file);
    const dependencies = run(lean.lean, ['--src-deps', file], directory).split(/\r?\n/).filter(Boolean)
      .map(dependency => visit(exactCaseImportSource(resolve(directory, dependency), directory, standard)));
    const stem = relative(directory, file).slice(0, -5), base = join(output, stem);
    mkdirSync(dirname(base), { recursive: true });
    const signature = createHash('sha256').update(lean.commit).update(readFileSync(file))
      .update(JSON.stringify(dependencies)).digest('hex');
    const receiptPath = base + '.lasm.json';
    let previous;
    try { previous = JSON.parse(readFileSync(receiptPath, 'utf8')); } catch (error) { if (error.code !== 'ENOENT' && !(error instanceof SyntaxError)) throw error; }
    const hash = path => createHash('sha256').update(readFileSync(path)).digest('hex');
    let reusable = previous?.signature === signature && typeof previous?.files?.['.c'] === 'string'
      && typeof previous?.files?.['.olean'] === 'string';
    if (reusable) for (const [extension, expected] of Object.entries(previous.files)) {
      if (!existsSync(base + extension) || hash(base + extension) !== expected) { reusable = false; break; }
    }
    if (!reusable) {
      log(`Generating Lean C: ${relative(directory, file)}`);
      run(lean.lean, ['-j1', '-s8192', '-R', directory, '-Dcompiler.postponeCompile=false',
        '-o', base + '.olean', '-c', base + '.c', file], directory);
      const files = Object.fromEntries(['.c', '.olean', '.olean.private', '.olean.server', '.ir']
        .filter(extension => existsSync(base + extension)).map(extension => [extension, hash(base + extension)]));
      writeFileSync(receiptPath, JSON.stringify({ signature, files }) + '\n');
    }
    visiting.delete(file); completed.set(file, signature);
    sources.push(base + '.c'); inputs.push({ module: stem.replaceAll('\\', '/').replaceAll('/', '.'), source: file });
    return signature;
  }
  visit(source);
  return { project: null, sources, inputs, env, metadataRoots: [output],
    oleans: () => sources.map(file => file.slice(0, -2) + '.olean') };
}
