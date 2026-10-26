import { parseInitArguments } from './init.mjs';
import { parsePackageArguments, packageTargets } from './package.mjs';
import { jsRuntime } from './js-runtime.mjs';
import { parseDevArguments } from './dev.mjs';

// `lasm build --target`: `node` writes dist/ only; a function platform also
// packages it (src/package.mjs). Lasm builds for the platform; it never
// installs or starts the platform's own tools.
// Edge targets (experimental, docs/EDGE.md) relink for edge isolates; the
// list equals src/edge/edge-build.mjs edgeTargets (test/edge.test.mjs).
export const edgeBuildTargets = ['workers', 'vercel-edge', 'netlify-edge', 'bun', 'deno', 'deno-deploy', 'supabase-edge'];
// The browser (docs/BROWSER.md): the edge program as a static web app.
// WASI targets (docs/WASI.md): a standard WASI module with no JavaScript; the
// list equals src/wasi/wasi-build.mjs wasiTargets (test/wasi.test.mjs).
export const wasiBuildTargets = ['wasi', 'fastly', 'wasi-http'];
export const buildTargets = ['node', ...Object.keys(packageTargets), ...edgeBuildTargets, 'browser', ...wasiBuildTargets];
// --suspend (browser): none (the default: blocking waits stop the instance) or
// jspi (they suspend in browsers that have JSPI).
export const suspendModes = ['none', 'jspi'];

export const cliUsage = `Usage: lasm <Main.lean> [--release] [-- arguments…]
       lasm dev [Main.lean] [--target node|bun|deno|workers|vercel-edge|netlify-edge|deno-deploy|supabase-edge|browser] [-- arguments…]
       lasm build <Main.lean> [--output dist] [--target node|lambda|lambda-edge|vercel|netlify|azure|gcf|workers|vercel-edge|netlify-edge|bun|deno|deno-deploy|supabase-edge|browser|wasi|fastly|wasi-http] [--suspend none|jspi] [--bundler] [--dev]
       lasm init <directory> [--template plain|express|hono|fastify|std-http|web|fetch] [--deploy …]
       lasm package [dist] --target lambda|lambda-edge|vercel|netlify|azure|gcf
       lasm build <lasm.json> [output-directory]
       lasm cache repair

Options: --rebuild, --verbose, --help
Profiles: lasm build makes release builds (optimized, byte-reproducible, for
deployment); --dev skips the size optimizations for a faster build. lasm run
(lasm Main.lean) makes dev builds; --release runs a release build.
Application arguments must follow --.`;

/** Parse independently of provisioning: help/errors must never download tools. */
export function parseLasmArguments(argv) {
  const tokens = [...argv];
  if (tokens[0] === 'init') return parseInitArguments(tokens.slice(1));
  if (tokens[0] === 'dev') return parseDevArguments(tokens.slice(1));
  if (tokens[0] === 'package') return parsePackageArguments(tokens.slice(1));
  if (tokens[0] === 'dev') return parseDevArguments(tokens.slice(1));
  if (tokens[0] === 'cache') {
    if (tokens.includes('--help') || tokens.includes('-h')) return { command: 'help' };
    if (tokens.length !== 2 || tokens[1] !== 'repair') throw new Error('Usage: lasm cache repair');
    return { command: 'cache-repair' };
  }
  const result = { command: 'run', rebuild: false, verbose: false, args: [] };
  if (['build', 'run'].includes(tokens[0])) result.command = tokens.shift();
  const positional = [], supplied = new Set();
  for (let i = 0; i < tokens.length; i++) {
    const token = tokens[i];
    if (token === '--') {
      if (result.command !== 'run') throw new Error('Application arguments are accepted by lasm run, not lasm build');
      result.args = tokens.slice(i + 1); break;
    }
    if (token === '--help' || token === '-h') return { command: 'help' };
    if (token === '--rebuild' || token === '--verbose') { result[token.slice(2)] = true; continue; }
    if (token === '--dev' || token === '--release') {
      const profile = token.slice(2);
      if (result.profile !== undefined && result.profile !== profile) throw new Error('Choose one of --dev and --release');
      result.profile = profile; continue;
    }
    if (token === '--allow-dev') { result.allowDev = true; continue; }
    // --bundler (browser): the output is input to a bundler (Vite, esbuild, webpack): npm imports stay imports.
    if (token === '--bundler') { result.bundler = true; continue; }
    const target = /^--target(?:=(.*))?$/.exec(token);
    if (target) {
      if (result.command !== 'build') throw new Error('--target is available only with lasm build');
      if (supplied.has('target')) throw new Error('Specify --target only once');
      supplied.add('target');
      const value = target[1] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error('--target requires a value: ' + buildTargets.join(', '));
      if (!buildTargets.includes(value)) throw new Error(`Unknown build target "${value}". Choose one of: ${buildTargets.join(', ')}`);
      result.target = value; continue;
    }
    const suspend = /^--suspend(?:=(.*))?$/.exec(token);
    if (suspend) {
      if (supplied.has('suspend')) throw new Error('Specify --suspend only once');
      supplied.add('suspend');
      const value = suspend[1] ?? tokens[++i];
      if (!suspendModes.includes(value)) throw new Error(`--suspend requires one of: ${suspendModes.join(', ')}`);
      result.suspend = value; continue;
    }
    const match = /^--output(?:=(.*))?$/.exec(token);
    if (match) {
      if (supplied.has('output')) throw new Error('Specify --output only once');
      supplied.add('output');
      const value = match[1] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error('--output requires a value');
      result.output = value; continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown Lasm option: ${token}. Application arguments must follow --.`);
    positional.push(token);
  }
  if (!positional.length) throw new Error(cliUsage);
  result.input = positional.shift();
  if (result.command === 'build' && positional.length === 1 && result.output === undefined) result.output = positional.shift();
  if (positional.length) throw new Error('Unexpected positional arguments. Put application arguments after --.');
  if (result.command === 'run' && result.output !== undefined) throw new Error('--output is available only with lasm build');
  if (!(result.input.endsWith('.lean') || result.command === 'build' && result.input.endsWith('.json')))
    throw new Error('Expected a Lean source file, or a binding configuration for lasm build');
  if (result.input.endsWith('.json') && result.profile !== undefined) throw new Error('--dev and --release apply to Lean applications');
  // lasm build defaults to the release profile, lasm run to the dev profile.
  if (result.input.endsWith('.lean')) result.profile ??= result.command === 'build' ? 'release' : 'dev';
  if (result.allowDev && !(result.command === 'build' && result.target && result.target !== 'node'))
    throw new Error('--allow-dev applies to lasm build --target <platform> and lasm package');
  if (result.suspend !== undefined && result.target !== 'browser') throw new Error('--suspend applies to lasm build --target browser');
  if (result.bundler && result.target !== 'browser') throw new Error('--bundler applies to lasm build --target browser');
  if (result.command === 'build') {
    result.output ??= 'dist';
    // The default target is the runtime the CLI runs on: node, bun or deno.
    result.target ??= jsRuntime === 'node' || result.input.endsWith('.json') ? 'node' : jsRuntime;
    if (result.target !== 'node' && result.input.endsWith('.json')) throw new Error('--target applies to Lean applications, not binding configurations');
  }
  return result;
}
