import { existsSync, readFileSync, writeFileSync, mkdirSync, realpathSync } from 'node:fs';
import { dirname, join, resolve, relative, delimiter } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { insideDirectory } from './platform.mjs';
import { managedGitEnvironment } from './managed-git.mjs';

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

export function nativeLeanEnvironment(lean) {
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete env[key];
  Object.assign(env, { LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192',
    PATH: [join(lean.prefix, 'bin'), dirname(process.execPath), process.env.PATH].filter(Boolean).join(delimiter) });
  return env;
}

export function applicationSources(source, lean, work, { log = console.error, git } = {}) {
  source = resolve(source);
  const project = findApplicationProject(source);
  const env = git ? managedGitEnvironment(git, nativeLeanEnvironment(lean)) : nativeLeanEnvironment(lean);
  const run = (program, args, cwd) => execFileSync(program, args,
    { cwd, env, windowsHide: true, encoding: 'utf8', timeout: 900_000, maxBuffer: 32 * 1024 * 1024,
      stdio: ['ignore', 'pipe', 'inherit'] }).trim();
  if (project) {
    const query = target => JSON.parse(run(lean.lake,
      ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', target], project));
    const entry = relative(project, source).replaceAll('\\', '/');
    const modules = query(entry + ':transImports');
    if (!Array.isArray(modules) || modules.some(module => typeof module !== 'string'))
      throw new Error('Unexpected Lake transitive module inventory');
    const sources = [], inputs = [];
    for (const target of [...modules.map(name => '+' + name), entry]) {
      log(`Generating Lean C: ${target}`);
      const file = query(target + ':c');
      if (typeof file !== 'string') throw new Error(`Lake returned no C file for ${target}`);
      sources.push(resolve(project, file));
      inputs.push({ module: target, source: resolve(project, query(target + ':lean')) });
    }
    return { project, sources, inputs, env };
  }
  // Standalone source trees use Lean's own import parser. Standard libraries
  // are already in the versioned bundle; local imports are compiled in order.
  const directory = dirname(source), standard = realpathSync(join(lean.prefix, 'src/lean'));
  const output = join(work, 'lean'); mkdirSync(output, { recursive: true });
  Object.assign(env, { LEAN_PATH: output, LEAN_SRC_PATH: directory });
  const sources = [], inputs = [], visiting = new Set(), completed = new Map();
  function visit(file) {
    file = realpathSync(file);
    if (insideDirectory(standard, file)) return lean.commit;
    if (!insideDirectory(realpathSync(directory), file)) throw new Error(`Standalone import ${file} is outside the source directory. Declare external dependencies in an ordinary Lake project.`);
    if (completed.has(file)) return completed.get(file);
    if (visiting.has(file)) throw new Error(`Cyclic Lean module imports: ${file}`);
    visiting.add(file);
    const dependencies = run(lean.lean, ['--src-deps', file], directory).split(/\r?\n/).filter(Boolean)
      .map(dependency => visit(resolve(directory, dependency)));
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
  return { project: null, sources, inputs, env };
}
