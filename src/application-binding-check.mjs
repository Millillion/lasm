// Lasm.JS binding check (`lasm build`): every `@[js "module" "export"]`
// declaration must name an existing JavaScript function. The bindings are read
// from the program's .olean files with the managed native Lean; the modules are
// loaded in a separate Node process from the project's node_modules, as the
// deployment will load them.
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readdirSync, readFileSync, renameSync, rmSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { evalCommand } from './js-runtime.mjs';

const reader = fileURLToPath(new URL('./lasm-js-bindings.lean', import.meta.url));
// Lasm's builtin JavaScript modules (lasm:<name>; src/edge/builtin-modules.mjs).
const builtins = fileURLToPath(new URL('./lasm-modules/', import.meta.url));

export function readBindings(lean, env, oleans, { cache } = {}) {
  const files = oleans.filter(file => existsSync(file));
  if (!files.length) return [];
  // The bindings are a function of the module files and the reader: unchanged
  // modules (a cache hit, or an edit elsewhere) are not read again by Lean.
  let record;
  if (cache) {
    const hash = createHash('sha256').update(JSON.stringify({ schema: 1, lean: lean.identity ?? lean.commit ?? null }))
      .update(readFileSync(reader));
    for (const file of files) hash.update('\0' + file + '\0').update(readFileSync(file));
    record = join(cache, `bindings-${hash.digest('hex')}.json`);
    try {
      const saved = JSON.parse(readFileSync(record, 'utf8'));
      if (Array.isArray(saved)) return saved;
    } catch { /* not recorded */ }
  }
  const bindings = readBindingsUncached(lean, env, files);
  if (record) {
    try {
      mkdirSync(cache, { recursive: true });
      for (const name of readdirSync(cache)) if (name.startsWith('bindings-')) rmSync(join(cache, name), { force: true });
      writeFileSync(record + '.' + process.pid + '.partial', JSON.stringify(bindings));
      renameSync(record + '.' + process.pid + '.partial', record);
    } catch { /* an unwritable cache only costs the next build the read */ }
  }
  return bindings;
}

function readBindingsUncached(lean, env, files) {
  const result = spawnSync(lean.lean, ['--run', reader, ...files], { env, encoding: 'utf8', windowsHide: true,
    timeout: 300_000, maxBuffer: 16 * 1024 * 1024 });
  if (result.error) throw result.error;
  if (result.status !== 0) throw new Error(`Cannot read Lasm.JS bindings: ${result.stderr || result.stdout}`);
  return result.stdout.split(/\r?\n/).filter(line => line.startsWith('{')).map(line => JSON.parse(line));
}

// Runs in the child: the last argument is the project directory, the one
// before it Lasm's builtin module directory, stdin the bindings.
const checker = `
const { createRequire } = require('node:module');
const { join } = require('node:path');
const { pathToFileURL } = require('node:url');
const bindings = JSON.parse(require('node:fs').readFileSync(0, 'utf8'));
// The project and Lasm's builtin module directory come from the environment
// (Bun's -e on Windows does not reliably pass trailing arguments), resolved
// through file URLs, which every runtime accepts.
const project = createRequire(pathToFileURL(join(process.env.LASM_BINDING_PROJECT || process.argv.at(-1), 'package.json')).href);
const builtins = process.env.LASM_BINDING_BUILTINS || process.argv.at(-2);
const load = specifier => {
  if (!specifier.startsWith('lasm:')) return project(specifier);
  const name = specifier.slice(5);
  if (!/^[a-z][a-z0-9-]*$/.test(name) || !require('node:fs').existsSync(join(builtins, name + '.mjs')))
    throw Object.assign(new Error('unknown Lasm builtin module ' + specifier), { code: 'LASM_UNKNOWN_BUILTIN' });
  return require(join(builtins, name + '.mjs'));
};
const results = bindings.map(b => {
  const where = b.module + (b.path ? ' export ' + JSON.stringify(b.path) : '');
  let value;
  try { value = b.module === 'globalThis' ? globalThis : load(b.module); } catch (error) {
    return { ...b, error: error.code === 'MODULE_NOT_FOUND' ? 'module ' + JSON.stringify(b.module) + ' is not installed (add it to package.json and run npm install)'
      : error.code === 'LASM_UNKNOWN_BUILTIN' ? error.message : 'loading ' + b.module + ' failed: ' + error.message };
  }
  for (const key of b.path ? b.path.split('.') : []) {
    if (value === null || value === undefined) { value = undefined; break; }
    value = value[key];
  }
  if (typeof value !== 'function') return { ...b, error: where + ' is ' + (value === undefined ? 'missing' : 'a ' + typeof value + ', not a function') };
  if (b.construct && !value.prototype) return { ...b, error: where + ' cannot be called with new' };
  const length = value.length;
  if (b.arity > length && length > 0) return { ...b, warning: 'the Lean binding passes ' + b.arity + ' arguments; ' + where + ' declares ' + length + ' parameters' };
  return { ...b };
});
process.stdout.write(JSON.stringify(results));
`;

export function checkBindings(project, bindings) {
  if (!bindings.length) return [];
  const [command, args] = evalCommand(checker, [builtins, project]);
  const result = spawnSync(command, args, { input: JSON.stringify(bindings), encoding: 'utf8',
    cwd: project, env: { ...process.env, LASM_BINDING_PROJECT: project, LASM_BINDING_BUILTINS: builtins }, windowsHide: true, timeout: 120_000, maxBuffer: 16 * 1024 * 1024 });
  if (result.status !== 0) throw new Error(`The Lasm.JS binding check failed to run: ${result.stderr}`);
  return JSON.parse(result.stdout);
}

/** Throws when a binding is broken; returns the warnings. */
export function requireValidBindings(results) {
  const errors = results.filter(r => r.error);
  if (errors.length) throw Object.assign(new Error('Lasm.JS binding check failed:\n'
    + errors.map(r => `  ${r.name}: ${r.error}`).join('\n')
    + '\nFix the @[js "module" "export"] declarations or install the packages; see docs/JS_BINDINGS.md.'), { code: 'ERR_LASM_JS_BINDING' });
  return results.filter(r => r.warning).map(r => `${r.name}: ${r.warning}`);
}
