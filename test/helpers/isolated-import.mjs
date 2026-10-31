// Loads a set of shipped host files the way a deployment does: copied alone into
// an empty directory outside the checkout, then imported by Node's real module
// loader in a fresh process. A relative dependency that is not shipped (or one
// that reaches into the checkout with '../') fails to resolve there. Bare
// specifiers (npm packages such as koffi, which outputs carry separately) resolve
// to an empty stub, and errors a module throws because it is not running inside
// a deployment (no workerData, no Wasm instance) are not loader failures.
import { mkdtempSync, mkdirSync, copyFileSync, rmSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const hooks = `
export async function resolve(specifier, context, next) {
  if (!/^(\\.|\\/|file:|node:|data:)/.test(specifier)) return { url: 'data:text/javascript,export default {};', shortCircuit: true };
  return next(specifier, context);
}`;
const probe = `
import { register, createRequire } from 'node:module';
register('data:text/javascript,' + encodeURIComponent(${JSON.stringify(hooks)}));
const require = createRequire(import.meta.url);
const Module = require('node:module');
const load = Module._load;
Module._load = function (request, ...rest) { return /^[./]/.test(request) || request.startsWith('node:') || Module.isBuiltin(request) ? load.call(this, request, ...rest) : {}; };
const missing = [];
for (const file of JSON.parse(process.env.LASM_ISOLATED_FILES)) {
  try { file.endsWith('.cjs') ? require('./' + file) : await import('./' + file); }
  catch (error) {
    if (['ERR_MODULE_NOT_FOUND', 'MODULE_NOT_FOUND'].includes(error?.code)) missing.push(file + ': ' + String(error.message).split('\\n')[0]);
  }
}
process.stdout.write(JSON.stringify(missing));
process.exit(0);
`;

/** Copies `files` (paths relative to src/) into <tmp>/host/ and imports every
 * JavaScript file among them. Returns the loader failures. */
export function isolatedImportFailures(files) {
  const base = mkdtempSync(join(tmpdir(), 'lasm-isolated-'));
  const host = join(base, 'host');
  try {
    for (const name of files) {
      mkdirSync(dirname(join(host, name)), { recursive: true });
      copyFileSync(join(root, 'src', name), join(host, name));
    }
    const modules = files.filter(name => /\.(mjs|cjs)$/.test(name));
    const result = spawnSync(process.execPath, ['--input-type=module', '-e', probe], {
      cwd: host, encoding: 'utf8', timeout: 60_000,
      env: { ...process.env, LASM_ISOLATED_FILES: JSON.stringify(modules), NODE_OPTIONS: '' },
    });
    if (result.status !== 0) throw new Error(`isolated import probe failed (${result.status ?? result.signal}): ${result.stderr.slice(-2000)}`);
    return JSON.parse(result.stdout);
  } finally { rmSync(base, { recursive: true, force: true }); }
}
