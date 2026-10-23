// npm dependencies of a Lasm application (Lasm.JS `require`): the packages that
// `package.json` next to the Lean project (the lakefile, or Main.lean for a
// standalone program) depends on, resolved from the project's node_modules as
// Node resolves them, and copied into the deployment's node_modules with the
// same layout. devDependencies are not deployed. Developers install with npm.
import { createHash } from 'node:crypto';
import { copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, realpathSync, statSync } from 'node:fs';
import { dirname, join, relative, resolve, sep } from 'node:path';
import { insideDirectory } from './platform.mjs';

// The compiler's own packages (the experimental tarball and the planned npm name).
const lasmPackages = new Set(['@lasm/compiler', '@lasm/cli']);

const readJson = file => {
  try { return JSON.parse(readFileSync(file, 'utf8')); }
  catch (error) { throw new Error(`Cannot read ${file}: ${error.message}`); }
};

/** The directory of package `name` as Node finds it from `from`, within `root`. */
function findPackage(name, from, root) {
  for (let directory = from; ; directory = dirname(directory)) {
    const candidate = join(directory, 'node_modules', ...name.split('/'));
    if (existsSync(join(candidate, 'package.json'))) return candidate;
    if (directory === root || dirname(directory) === directory) return undefined;
  }
}

/** Production dependency closure: undefined when there is no package.json or nothing to deploy. */
export function planNodeModules(project) {
  const manifest = join(project, 'package.json');
  if (!existsSync(manifest)) return undefined;
  const root = resolve(project);
  const top = readJson(manifest);
  const packages = new Map();
  const pending = [{ from: root, dependencies: top.dependencies ?? {}, optional: top.optionalDependencies ?? {}, by: 'package.json' }];
  while (pending.length) {
    const { from, dependencies, optional, peers = {}, by } = pending.pop();
    const wanted = [...Object.keys(dependencies).map(name => [name, 'required']), ...Object.keys(optional).map(name => [name, 'optional']),
      ...Object.keys(peers).map(name => [name, 'peer'])];
    for (const [name, kind] of wanted) {
      // Lasm itself (installed with `npm install`) is a build tool, never deployed.
      if (lasmPackages.has(name)) continue;
      const directory = findPackage(name, from, root);
      if (!directory) {
        if (kind !== 'required') continue;
        throw Object.assign(new Error(`npm dependency ${name} (needed by ${by}) is not installed in ${join(root, 'node_modules')}. `
          + 'Run npm install next to package.json, then build again.'), { code: 'ERR_LASM_NPM_MISSING' });
      }
      const path = relative(root, directory);
      if (packages.has(path)) continue;
      if (!insideDirectory(root, realpathSync(directory)) && !insideDirectory(root, directory))
        throw new Error(`npm dependency ${name} resolves outside the project (${directory}); install it in the project's node_modules`);
      const info = readJson(join(directory, 'package.json'));
      packages.set(path, { name, version: info.version, directory });
      pending.push({ from: realpathSync(directory), dependencies: info.dependencies ?? {}, optional: info.optionalDependencies ?? {},
        peers: info.peerDependencies ?? {}, by: `${name}@${info.version}` });
    }
  }
  // Nothing to deploy (for example only Lasm itself is installed): ordinary build.
  if (!packages.size) return undefined;
  const files = [];
  for (const [path, { directory }] of [...packages].sort(([a], [b]) => a < b ? -1 : a > b ? 1 : 0)) {
    const walk = (from, to) => {
      for (const entry of readdirSync(from, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : a.name > b.name ? 1 : 0)) {
        // Nested packages are separate entries of the closure; .bin holds command links.
        if (entry.name === 'node_modules' && from === realpathSync(directory)) continue;
        const source = join(from, entry.name), target = join(to, entry.name);
        const stat = statSync(source);
        if (stat.isDirectory()) walk(source, target);
        else if (stat.isFile()) files.push({ source, path: target, size: stat.size });
      }
    };
    walk(realpathSync(directory), path);
  }
  const hash = createHash('sha256').update('lasm-node-modules-1\0');
  for (const file of files) hash.update(file.path.split(sep).join('/')).update('\0').update(readFileSync(file.source)).update('\0');
  return { identity: hash.digest('hex'), packages: [...packages].map(([path, { name, version }]) => ({ path: path.split(sep).join('/'), name, version })),
    files, bytes: files.reduce((total, file) => total + file.size, 0) };
}

/** Copies a planned closure into `output` (the deployment directory). */
export function copyNodeModules(plan, output) {
  for (const file of plan.files) {
    const target = join(output, file.path);
    mkdirSync(dirname(target), { recursive: true });
    copyFileSync(file.source, target);
  }
}
