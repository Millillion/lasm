// The JavaScript runtime the compiler runs on (Phase 7.5, docs/BUN_DENO.md):
// Node, Bun or Deno. Lasm runs some Node-compatible scripts in a child of
// its own runtime (Emscripten's JavaScript tools in the link, Lake's
// environment probe, the Lasm.JS binding check). Node and Bun run a script
// directly; Deno needs `deno run` with permissions, and `deno eval` for code.
export const jsRuntime = typeof globalThis.Deno?.version?.deno === 'string' ? 'deno'
  : typeof process.versions.bun === 'string' ? 'bun' : 'node';

/** The runtime's version, for messages and build records. */
export const jsRuntimeVersion = jsRuntime === 'deno' ? globalThis.Deno.version.deno
  : jsRuntime === 'bun' ? process.versions.bun : process.versions.node;

// Deno: all permissions (Lasm's own tools) and no lockfile in the user's
// project. Emscripten's tools import their own node_modules (found from the
// script's package.json, so no --no-config) and a UMD file (terser), which
// Deno loads as CommonJS only with --unstable-detect-cjs.
const denoRun = ['run', '--allow-all', '--no-lock', '--unstable-detect-cjs', '--quiet'];

/** Arguments placed before a script path to run it with this runtime. */
export function scriptPrefix(runtime = jsRuntime) {
  return runtime === 'deno' ? denoRun : [];
}

/** [command, args] that run a script file with this runtime. */
export function scriptCommand(script, args = [], { runtime = jsRuntime, execPath = process.execPath } = {}) {
  return [execPath, [...scriptPrefix(runtime), script, ...args]];
}

/** [command, args] that evaluate code (CommonJS `require` available) with this runtime. */
export function evalCommand(code, args = [], { runtime = jsRuntime, execPath = process.execPath } = {}) {
  if (runtime === 'deno') return [execPath, ['eval', '--no-lock', '--no-config', '--quiet', code, ...args]];
  return [execPath, ['-e', code, ...args]];
}
