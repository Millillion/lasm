// The project's own JavaScript files (A6, docs/JS_BINDINGS.md "Your own
// JavaScript files"): `@[js "./ffi/stream.mjs" "writeAndEnd"]` names an ES
// module relative to the Lean file that declares the binding. Lean records the
// binding with the file's run-time specifier, its path from the declaring
// module's source root (`./App/ffi/stream.mjs` for module App.Server;
// Lasm.JS.Meta projectSpecifier), the path as written and the Lean file. The
// build resolves each against the Lean file's directory, adds the files they
// import by relative path, and ships them under project-modules/ beside each
// target's host:
//   - Node: host/project-modules/ (src/node-js.mjs loads them);
//   - the edge targets: lasm/project-modules/, imported by the entry module;
//   - the browser: bundled into the loader;
//   - the binding check loads them from the project.
import { createHash } from 'node:crypto';
import { copyFileSync, existsSync, mkdirSync, readFileSync, statSync } from 'node:fs';
import { dirname, isAbsolute, join, posix, resolve } from 'node:path';

export const isProjectModule = specifier => typeof specifier === 'string' && (specifier.startsWith('./') || specifier.startsWith('../'));
/** The file name of a project module under project-modules/ (its specifier without `./`). */
export const projectModuleName = specifier => specifier.slice(2);

/** Whether Lean source text declares a binding of a project file (`@[js "./…"`). */
export const declaresProjectModules = text => /@\[\s*js\s+"\.\.?\//.test(text);

// `import … from './x.mjs'`, `export … from '../y.mjs'`, `import './z.mjs'` and
// `import('./w.mjs')` with a literal: the relative imports a project file brings along.
const relativeImports = /(?:^|[\s;}])(?:import|export)\s(?:(?!\/\/)[^'";])*?\sfrom\s*(['"])(\.\.?\/[^'"]+)\1|(?:^|[\s;}])import\s*(['"])(\.\.?\/[^'"]+)\3|\bimport\(\s*(['"])(\.\.?\/[^'"]+)\5\s*\)/g;
export function relativeImportsOf(text) {
  // Comments are not imports: block comments, and lines that are a // comment.
  const code = text.replace(/\/\*[\s\S]*?\*\//g, '').split('\n').filter(line => !line.trimStart().startsWith('//')).join('\n');
  const found = [];
  for (const m of code.matchAll(relativeImports)) found.push(m[2] ?? m[4] ?? m[6]);
  return found;
}

/** The project modules of `bindings` (the binding records, with `relative` and
 * `file` for project files) and the files they import, resolved from the
 * project `directory` (where Lean ran, for a relative `file`). Returns
 * `{ files: [{ specifier, name, path, sha256 }] }` sorted by name, and throws
 * naming the binding for a missing file, a file that is not an ES module
 * (`.mjs`), a path above the Lean source root, or one specifier naming two files. */
export function projectModules(bindings, directory) {
  const bySpecifier = new Map();
  const add = (specifier, path, what) => {
    if (!specifier.startsWith('./') || posix.normalize(specifier).startsWith('..'))
      throw new Error(`${what}: ${path} is outside the Lean source root; keep project JavaScript files beside or below the Lean files`);
    if (!/\.mjs$/.test(specifier)) throw new Error(`${what}: ${path} must be an ES module file ending in .mjs`);
    if (!existsSync(path) || !statSync(path).isFile()) throw new Error(`${what}: ${path} does not exist`);
    const known = bySpecifier.get(specifier);
    if (known && known !== path) throw new Error(`${what}: ${specifier} names two files, ${known} and ${path}`);
    if (known) return false;
    bySpecifier.set(specifier, path);
    return true;
  };
  const visit = (specifier, path, what) => {
    if (!add(specifier, path, what)) return;
    for (const imported of relativeImportsOf(readFileSync(path, 'utf8'))) {
      const child = posix.normalize(posix.join(posix.dirname(specifier), imported));
      visit(child.startsWith('.') ? child : './' + child, resolve(dirname(path), imported), `${specifier} imports ${imported}`);
    }
  };
  for (const b of bindings) {
    if (!isProjectModule(b.module) || typeof b.relative !== 'string') continue;
    const lean = isAbsolute(b.file) ? b.file : resolve(directory, b.file);
    visit(b.module, resolve(dirname(lean), b.relative), `Lasm.JS binding ${b.name} (@[js ${JSON.stringify(b.relative)} …] in ${b.file})`);
  }
  const files = [...bySpecifier].map(([specifier, path]) => ({ specifier, name: projectModuleName(specifier), path,
    sha256: createHash('sha256').update(readFileSync(path)).digest('hex') }));
  return { files: files.sort((a, b) => a.name < b.name ? -1 : a.name > b.name ? 1 : 0) };
}

/** Copies the project modules to `directory`/project-modules/, keeping their
 * paths, so their relative imports still resolve. */
export function copyProjectModules(directory, { files }) {
  for (const file of files) {
    const target = join(directory, 'project-modules', ...file.name.split('/'));
    mkdirSync(dirname(target), { recursive: true });
    copyFileSync(file.path, target);
  }
}

/** The bindings with each project file's Lean `file` made absolute (from the
 * project `directory`, where Lean ran), so later steps resolve it from anywhere. */
export const withAbsoluteFiles = (bindings, directory) =>
  bindings.map(b => typeof b.relative === 'string' && typeof b.file === 'string' && !isAbsolute(b.file) ? { ...b, file: resolve(directory, b.file) } : b);
