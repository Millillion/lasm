// Lasm's builtin JavaScript modules: `lasm:<name>` is the ES module
// src/lasm-modules/<name>.mjs, shipped with the compiler. Lean code uses them
// like any JavaScript module (`@[js "lasm:web" "createElement"]`,
// `Lasm.JS.require "lasm:web"`), and every build resolves them statically:
//   - browser builds bundle them into the loader (src/browser/browser-build.mjs);
//   - edge and portable builds copy them to lasm/modules/ and import them from
//     the generated entry module under their `lasm:` specifier;
//   - Node builds copy them to host/lasm-modules/ (src/node-js.mjs loads them);
//   - the build-time binding check loads them from here.
// A builtin module uses web-standard APIs only (no Node built-ins), and imports
// only other builtin modules, by relative path ('./web.mjs').
// `lasm:app` is per app instance: the browser loader gives each mounted app
// its own (its root element, flags, ports); app.mjs is the stand-in that the
// binding check and non-browser builds see.
import { existsSync, readdirSync, readFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

export const builtinPrefix = 'lasm:';
export const builtinDirectory = fileURLToPath(new URL('../lasm-modules/', import.meta.url));
const namePattern = /^[a-z][a-z0-9-]*$/;

export const isBuiltinModule = specifier => typeof specifier === 'string' && specifier.startsWith(builtinPrefix);

/** Every builtin module name (without the prefix), sorted. */
export function builtinModuleNames(directory = builtinDirectory) {
  return readdirSync(directory).filter(file => file.endsWith('.mjs')).map(file => file.slice(0, -4)).filter(name => namePattern.test(name)).sort();
}

/** The file of builtin module `lasm:<name>`; an unknown name fails naming the builtins. */
export function builtinModuleFile(specifier, directory = builtinDirectory) {
  if (!isBuiltinModule(specifier)) throw new Error(`${JSON.stringify(specifier)} is not a Lasm builtin module (lasm:<name>)`);
  const name = specifier.slice(builtinPrefix.length);
  const file = join(directory, name + '.mjs');
  if (!namePattern.test(name) || !existsSync(file))
    throw new Error(`Unknown Lasm builtin JavaScript module ${JSON.stringify(specifier)}. Builtin modules: ${builtinModuleNames(directory).map(n => builtinPrefix + n).join(', ')}`);
  return file;
}

const relativeImport = /^\s*(?:import|export)\s[^'"]*?from\s*['"](\.\/[a-z][a-z0-9-]*\.mjs)['"];?\s*$/gm;
/** The builtin modules `specifiers` need, with the builtins they import, in dependency order. */
export function builtinModuleClosure(specifiers, directory = builtinDirectory) {
  const order = [], seen = new Set();
  const visit = specifier => {
    if (seen.has(specifier)) return;
    seen.add(specifier);
    const file = builtinModuleFile(specifier, directory);
    for (const [, path] of readFileSync(file, 'utf8').matchAll(relativeImport)) visit(builtinPrefix + path.slice(2, -4));
    order.push(specifier);
  };
  for (const specifier of specifiers.filter(isBuiltinModule)) visit(specifier);
  return order;
}
