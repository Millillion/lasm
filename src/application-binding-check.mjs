// Lasm.JS binding check (`lasm build`): every `@[js "module" "export"]`
// declaration must name an existing JavaScript function. The bindings are read
// from the program's .olean files with the managed native Lean; the modules are
// loaded in a separate Node process from the project's node_modules, as the
// deployment will load them.
import { spawnSync } from 'node:child_process';
import { existsSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const reader = fileURLToPath(new URL('./lasm-js-bindings.lean', import.meta.url));

export function readBindings(lean, env, oleans) {
  const files = oleans.filter(file => existsSync(file));
  if (!files.length) return [];
  const result = spawnSync(lean.lean, ['--run', reader, ...files], { env, encoding: 'utf8', windowsHide: true,
    timeout: 300_000, maxBuffer: 16 * 1024 * 1024 });
  if (result.error) throw result.error;
  if (result.status !== 0) throw new Error(`Cannot read Lasm.JS bindings: ${result.stderr || result.stdout}`);
  return result.stdout.split(/\r?\n/).filter(line => line.startsWith('{')).map(line => JSON.parse(line));
}

// Runs in the child: argv[2] is the project directory, stdin the bindings.
const checker = `
const { createRequire } = require('node:module');
const { join } = require('node:path');
const bindings = JSON.parse(require('node:fs').readFileSync(0, 'utf8'));
const load = createRequire(join(process.argv[1], 'package.json'));
const results = bindings.map(b => {
  const where = b.module + (b.path ? ' export ' + JSON.stringify(b.path) : '');
  let value;
  try { value = b.module === 'globalThis' ? globalThis : load(b.module); } catch (error) {
    return { ...b, error: error.code === 'MODULE_NOT_FOUND' ? 'module ' + JSON.stringify(b.module) + ' is not installed (add it to package.json and run npm install)' : 'loading ' + b.module + ' failed: ' + error.message };
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
  const result = spawnSync(process.execPath, ['-e', checker, project], { input: JSON.stringify(bindings), encoding: 'utf8',
    cwd: project, windowsHide: true, timeout: 120_000, maxBuffer: 16 * 1024 * 1024 });
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
